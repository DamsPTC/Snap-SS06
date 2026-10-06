/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079cc288; end: 1079cc5f7; -[SCDiscoverFeedRelatedAccountsCollectionViewCell _setupViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc288(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_opt_new();
  lVar3 = (long)_DAT_112767368;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x2a);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1a00;
  _objc_opt_new();
  lVar3 = (long)_DAT_112767374;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  lVar3 = (long)_DAT_112767378;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c127e40(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  puVar1 = PTR_PTR_1126d5b60;
  _objc_opt_new();
  lVar3 = (long)_DAT_112767380;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR_PTR_1126d5b58;
  _objc_alloc_init();
  lVar3 = (long)_DAT_112767370;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar3 = (long)_DAT_11276737c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xad);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_112767388;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3),param_2,param_1);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079cc5f8; end: 1079cc75b; -[SCDiscoverFeedRelatedAccountsCollectionViewCell _updateWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc5f8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112767374;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e1a60(param_3);
  func_0x00010c16eda0(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c25e800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = (long)_DAT_112767378;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar2),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
  }
  else {
    lVar2 = param_3;
    func_0x00010c25e800(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112767378;
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4),param_2,lVar2);
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
  }
  func_0x00010c1a7f60(uVar1,param_2,lVar3 == 0);
  lVar2 = param_3;
  func_0x00010bfe5c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112767380),param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c25fde0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112767370),param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079cc75c; end: 1079cc823; -[SCDiscoverFeedRelatedAccountsCollectionViewCell _didTapCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc75c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126d5b50;
  uVar4 = *(ulong *)(param_1 + _DAT_112767364);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c268c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112767384);
    uVar3 = uVar1;
    func_0x00010c268c60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079cc824; end: 1079cc833; -[SCDiscoverFeedRelatedAccountsCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079cc824(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767384);
}



/* Entry: 1079cc834; end: 1079cc873; -[SCDiscoverFeedRelatedAccountsCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112767384;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1079cc874; end: 1079cc883; -[SCDiscoverFeedRelatedAccountsCollectionViewCell roundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079cc874(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276736c);
}



/* Entry: 1079cc884; end: 1079cc893; -[SCDiscoverFeedRelatedAccountsCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079cc884(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112767364);
}



/* Entry: 1079cc894; end: 1079cc8a3; -[SCDiscoverFeedRelatedAccountsCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079cc894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276738c);
}



/* Entry: 1079cc8a4; end: 1079cc973; -[SCDiscoverFeedRelatedAccountsCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cc8a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276738c,0);
  _objc_storeStrong(param_1 + _DAT_112767364,0);
  _objc_storeStrong(param_1 + _DAT_112767384,0);
  _objc_storeStrong(param_1 + _DAT_112767390,0);
  _objc_storeStrong(param_1 + _DAT_112767388,0);
  _objc_storeStrong(param_1 + _DAT_112767370,0);
  _objc_storeStrong(param_1 + _DAT_11276737c,0);
  _objc_storeStrong(param_1 + _DAT_112767378,0);
  _objc_storeStrong(param_1 + _DAT_112767374,0);
  _objc_storeStrong(param_1 + _DAT_112767380,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767368,0);
  return;
}



/* Entry: 1079cc974; end: 1079cca23; -[SCDiscoverFeedRelatedAccountsIconView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1079cc974(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9188;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4730;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767394);
    *(undefined **)((long)puVar1 + (long)_DAT_112767394) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b48f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112767398);
    *(undefined **)((long)puVar1 + (long)_DAT_112767398) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079cca24; end: 1079ccacb; -[SCDiscoverFeedRelatedAccountsIconView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cca24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9188;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_4);
  func_0x00010bfb68e0(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_112767394));
  func_0x00010bfb68e0(param_4);
  func_0x00010bfb68e0(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_112767398));
  return;
}



/* Entry: 1079ccacc; end: 1079ccc9b; -[SCDiscoverFeedRelatedAccountsIconView setViewModel:] */

void FUN_1079ccacc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d5b48;
  _objc_opt_class(PTR_PTR_1126d5b48);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c0c0100(param_3);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ccc9c; end: 1079ccca3;  */

void FUN_1079ccc9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5c7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_croppedImageToCircle_1125b4ba0);
  return;
}



/* Entry: 1079ccca4; end: 1079ccd2f; -[SCDiscoverFeedRelatedAccountsIconView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ccca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11276739c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_112767394;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar2,PTR_s_setImageDownloader__1126482a8);
  if ((uVar2 & 1) != 0) {
    func_0x00010c1aa200(*(undefined8 *)(param_1 + lVar3));
  }
  func_0x00010c1aa200(*(undefined8 *)(param_1 + _DAT_112767398));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ccd30; end: 1079ccd3f; -[SCDiscoverFeedRelatedAccountsIconView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079ccd30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127673a0);
}



/* Entry: 1079ccd40; end: 1079ccd4f; -[SCDiscoverFeedRelatedAccountsIconView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079ccd40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276739c);
}



/* Entry: 1079ccd50; end: 1079ccdaf; -[SCDiscoverFeedRelatedAccountsIconView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ccd50(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276739c,0);
  _objc_storeStrong(param_1 + _DAT_1127673a0,0);
  _objc_storeStrong(param_1 + _DAT_112767398,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112767394,0);
  return;
}



/* Entry: 1079ccdb0; end: 1079cce1b; +[SCDiscoverFeedRelatedAccountsIconViewModel networkImageWithNetworkImage:] */

void FUN_1079ccdb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5b48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079cce1c; end: 1079cce7f; +[SCDiscoverFeedRelatedAccountsIconViewModel snapchatterAvatarContainerViewModelWithModel:] */

void FUN_1079cce1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d5b48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079cce80; end: 1079ccea3; -[SCDiscoverFeedRelatedAccountsIconViewModel copyWithZone:] */

undefined8 FUN_1079cce80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079ccea4; end: 1079ccf1b; -[SCDiscoverFeedRelatedAccountsIconViewModel hash] */

void FUN_1079ccea4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f9190;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ccf1c; end: 1079ccf5f; -[SCDiscoverFeedRelatedAccountsIconViewModel internalInit] */

void FUN_1079ccf1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9190;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ccf60; end: 1079cd017; -[SCDiscoverFeedRelatedAccountsIconViewModel isEqual:] */

long FUN_1079ccf60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079ccff0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079ccffc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1079ccffc;
        }
        goto LAB_1079ccff0;
      }
    }
    lVar3 = 0;
  }
LAB_1079ccffc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079cd018; end: 1079cd09b; -[SCDiscoverFeedRelatedAccountsIconViewModel matchSnapchatterAvatarContainerViewModel:networkImage:] */

void FUN_1079cd018(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_1079cd080;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1079cd080;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1079cd080:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079cd09c; end: 1079cd0cb; -[SCDiscoverFeedRelatedAccountsIconViewModel .cxx_destruct] */

void FUN_1079cd09c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1079cd0cc; end: 1079cd27b; -[SCDiscoverFeedRelatedAccountsCellViewModel initWithIconViewModel:subscribeButtonViewModel:subscribeState:storyDedupeFp:officialBadgeType:displayName:subText:storyLoggingInfo:tapActionModel:subscribeActionModel:] */

undefined8 *
FUN_1079cd0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f9198;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    puVar1[5] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1079cd27c; end: 1079cd29f; -[SCDiscoverFeedRelatedAccountsCellViewModel copyWithZone:] */

undefined8 FUN_1079cd27c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079cd2a0; end: 1079cd363; -[SCDiscoverFeedRelatedAccountsCellViewModel hash] */

undefined8 * FUN_1079cd2a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1079cd48c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079cd498;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) && (puVar3[5] == param_3[5])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[6];
          if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[7];
            if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[8];
              if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[9];
                if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[10];
                  if (puVar6 != (undefined8 *)param_3[10]) {
                    func_0x00010c071ae0();
                    goto LAB_1079cd498;
                  }
                  goto LAB_1079cd48c;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1079cd498:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1079cd364; end: 1079cd4b3; -[SCDiscoverFeedRelatedAccountsCellViewModel isEqual:] */

long FUN_1079cd364(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079cd48c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079cd498;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x50);
                  if (lVar3 != *(long *)(param_3 + 0x50)) {
                    func_0x00010c071ae0();
                    goto LAB_1079cd498;
                  }
                  goto LAB_1079cd48c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079cd498:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079cd4b4; end: 1079cd4bb; -[SCDiscoverFeedRelatedAccountsCellViewModel iconViewModel] */

undefined8 FUN_1079cd4b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079cd4bc; end: 1079cd4c3; -[SCDiscoverFeedRelatedAccountsCellViewModel subscribeButtonViewModel] */

undefined8 FUN_1079cd4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079cd4c4; end: 1079cd4cb; -[SCDiscoverFeedRelatedAccountsCellViewModel subscribeState] */

undefined8 FUN_1079cd4c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079cd4cc; end: 1079cd4d3; -[SCDiscoverFeedRelatedAccountsCellViewModel storyDedupeFp] */

undefined8 FUN_1079cd4cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079cd4d4; end: 1079cd4db; -[SCDiscoverFeedRelatedAccountsCellViewModel officialBadgeType] */

undefined8 FUN_1079cd4d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079cd4dc; end: 1079cd4e3; -[SCDiscoverFeedRelatedAccountsCellViewModel displayName] */

undefined8 FUN_1079cd4dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079cd4e4; end: 1079cd4eb; -[SCDiscoverFeedRelatedAccountsCellViewModel subText] */

undefined8 FUN_1079cd4e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1079cd4ec; end: 1079cd4f3; -[SCDiscoverFeedRelatedAccountsCellViewModel storyLoggingInfo] */

undefined8 FUN_1079cd4ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1079cd4f4; end: 1079cd4fb; -[SCDiscoverFeedRelatedAccountsCellViewModel tapActionModel] */

undefined8 FUN_1079cd4f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1079cd4fc; end: 1079cd503; -[SCDiscoverFeedRelatedAccountsCellViewModel subscribeActionModel] */

undefined8 FUN_1079cd4fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1079cd504; end: 1079cd5eb; -[SCDiscoverFeedRelatedAccountsCellViewModel .cxx_destruct] */

void FUN_1079cd504(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079cd5ec; end: 1079cd71b;  */

void FUN_1079cd5ec(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((int)param_1 == 0) {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c102040();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c14d100(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    param_1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ea8418);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c14d100(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = PTR__OBJC_CLASS___NSTextAttachment_1126b2a20;
  _objc_opt_new(PTR__OBJC_CLASS___NSTextAttachment_1126b2a20);
  func_0x00010c1a9f00();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bf0e420(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079cd71c; end: 1079cdb97;  */

void FUN_1079cd71c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *unaff_x27;
  undefined2 uVar10;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
LAB_1079cd850:
      unaff_x27 = PTR_PTR_1126d5b68;
      _objc_alloc(PTR_PTR_1126d5b68);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25fe80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c14d100(puVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0;
      FUN_1079cd5ec();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 1;
    }
    else {
      if (param_1 != 1) goto LAB_1079cdb74;
      unaff_x27 = PTR_PTR_1126d5b68;
      _objc_alloc(PTR_PTR_1126d5b68);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010b87f3b0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c25fe80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar6;
      func_0x00010c14d100(puVar6,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = 0;
      FUN_1079cd5ec();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0x100;
    }
    func_0x00010c053980(unaff_x27,param_2,0,puVar1,puVar2,puVar3,puVar4,puVar9,uVar10);
    _objc_release(uVar8);
  }
  else {
    if (param_1 == 2) {
      unaff_x27 = PTR_PTR_1126d5b68;
      _objc_alloc(PTR_PTR_1126d5b68);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x0001079cd570();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c14d100(puVar5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)0x1;
      FUN_1079cd5ec();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 0x100;
    }
    else {
      if (param_1 != 3) {
        if (param_1 != 4) goto LAB_1079cdb74;
        goto LAB_1079cd850;
      }
      unaff_x27 = PTR_PTR_1126d5b68;
      _objc_alloc(PTR_PTR_1126d5b68);
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6b);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x0001079cd570();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xcc);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c14d100(puVar5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = (undefined *)0x1;
      FUN_1079cd5ec();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = 1;
    }
    func_0x00010c053980(unaff_x27,param_2,0,puVar1,puVar2,puVar3,puVar4,puVar7,uVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
LAB_1079cdb74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x27);
  return;
}



/* Entry: 1079cdb98; end: 1079cdd8b; -[SCDiscoverFeedRelatedAccountsSubscribeButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1079cdb98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f91a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR_PTR_1126d5b70;
    func_0x00010bdc2340(0xc020000000000000,0xc020000000000000,0xc020000000000000,0xc020000000000000)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_1127673d8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_1127673dc;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010bf1e9a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c173280(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff0000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x402e000000000000);
    _objc_release(uVar4);
    func_0x00010c198080(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar6 = (long)_DAT_1127673e0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar6);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x00010c271240(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar3);
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127673e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127673e4) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1079cdd8c; end: 1079cdf4f; -[SCDiscoverFeedRelatedAccountsSubscribeButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cdd8c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f91a0;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  func_0x00010b8166f8(param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_1127673d8));
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  param_1 = param_1 + -26.0;
  dVar3 = param_1 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetMinX();
  param_1 = param_1 + 15.0;
  func_0x00010b8166f8(param_1,dVar3,0x403a000000000000,0x403a000000000000,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_1127673e4));
  _CGRectGetMaxX(param_1,dVar3,0x403a000000000000,0x403a000000000000);
  lVar1 = *(long *)(param_2 + _DAT_1127673dc);
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar3 = param_1 + 5.0;
  if (lVar1 != 0) {
    param_1 = dVar3;
  }
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  dVar2 = dVar3;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar2 = dVar2 - param_1;
  dVar4 = dVar2 + -17.0;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010b8166f8(param_1,dVar3,dVar4,dVar2,param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_1127673e0));
  lVar1 = (long)_DAT_1127673e8;
  if (*(long *)(param_2 + lVar1) != 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    param_1 = param_1 + -20.0;
    dVar3 = param_1 * 0.5;
    func_0x00010bf20c00(param_2);
    _CGRectGetMinX();
    func_0x00010b8166f8(param_1 + 15.0,dVar3,0x4034000000000000,0x4034000000000000,param_2);
    func_0x00010c19f0e0(*(undefined8 *)(param_2 + lVar1));
  }
  return;
}



/* Entry: 1079cdf50; end: 1079ce257; -[SCDiscoverFeedRelatedAccountsSubscribeButton setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079cdf50(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_1127673dc;
  uVar6 = *(ulong *)(param_1 + lVar8);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  if (uVar6 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar6);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar2 = uVar6;
      func_0x00010c071ae0(uVar6,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar6);
      if ((uVar2 & 1) != 0) goto LAB_1079ce238;
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    *(ulong *)(param_1 + lVar8) = param_3;
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar8);
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar10 = (long)_DAT_1127673e0;
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    if (lVar4 == 0) {
      func_0x00010bf0e660(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(uVar7,param_2,uVar3);
    }
    else {
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010be1d080(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(uVar7,param_2,lVar4);
      _objc_release(lVar4);
    }
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf1e9a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar4 = (long)_DAT_1127673d8;
    uVar7 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c08c0e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173280();
    _objc_release(uVar7);
    _objc_release(uVar3);
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c271240(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(uVar7,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf13d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
    _objc_release(uVar3);
    lVar10 = (long)_DAT_1127673e4;
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfe6ac0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(uVar7,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c292a00(uVar3);
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar8);
    func_0x00010c238140();
    lVar9 = (long)_DAT_1127673e8;
    lVar4 = *(long *)(param_1 + lVar9);
    if (iVar1 == 0) {
      func_0x00010c1a7f60(lVar4,param_2,1);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,0);
      func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar9));
    }
    else {
      if (lVar4 == 0) {
        puVar5 = PTR_PTR_1126afd30;
        _objc_alloc();
        uVar3 = *(undefined8 *)(param_1 + lVar8);
        func_0x00010c09cec0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfffb60(puVar5,param_2,uVar3,1);
        uVar7 = *(undefined8 *)(param_1 + lVar9);
        *(undefined **)(param_1 + lVar9) = puVar5;
        _objc_release(uVar7);
        _objc_release(uVar3);
        func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar9));
        lVar4 = *(long *)(param_1 + lVar9);
      }
      func_0x00010c1a7f60(lVar4,param_2,0);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar10),param_2,1);
      func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar9));
    }
    func_0x00010c1cbe20(param_1);
  }
LAB_1079ce238:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079ce258; end: 1079ce28f; -[SCDiscoverFeedRelatedAccountsSubscribeButton _subscribeButtonTapped] */

void FUN_1079ce258(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079ce290; end: 1079ce3f7; -[SCDiscoverFeedRelatedAccountsSubscribeButton _getAttributedTitleWithTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1079ce290(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uStack_68 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  dVar6 = 13.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar3 = *(undefined **)(param_1 + _DAT_1127673dc);
  puStack_58 = puVar2;
  func_0x00010c271240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_58,&uStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1,param_2,param_3,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return dVar6;
  }
  ___stack_chk_fail();
  func_0x00010c0699c0(*(undefined8 *)(puVar2 + _DAT_1127673e0));
  return dVar6 + 57.0;
}



/* Entry: 1079ce3f8; end: 1079ce423; -[SCDiscoverFeedRelatedAccountsSubscribeButton expectedWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1079ce3f8(double param_1,long param_2)

{
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_1127673e0));
  return param_1 + 57.0;
}



/* Entry: 1079ce424; end: 1079ce42b; +[SCDiscoverFeedRelatedAccountsSubscribeButton height] */

undefined8 FUN_1079ce424(void)

{
  return 0x403e000000000000;
}



/* Entry: 1079ce42c; end: 1079ce44b; -[SCDiscoverFeedRelatedAccountsSubscribeButton delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ce42c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127673ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079ce44c; end: 1079ce45f; -[SCDiscoverFeedRelatedAccountsSubscribeButton setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ce44c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127673ec,param_3);
  return;
}



/* Entry: 1079ce460; end: 1079ce46f; -[SCDiscoverFeedRelatedAccountsSubscribeButton viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1079ce460(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127673dc);
}



/* Entry: 1079ce470; end: 1079ce4eb; -[SCDiscoverFeedRelatedAccountsSubscribeButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1079ce470(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127673dc,0);
  _objc_destroyWeak(param_1 + _DAT_1127673ec);
  _objc_storeStrong(param_1 + _DAT_1127673e0,0);
  _objc_storeStrong(param_1 + _DAT_1127673e4,0);
  _objc_storeStrong(param_1 + _DAT_1127673d8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127673e8,0);
  return;
}



/* Entry: 1079ce4ec; end: 1079ce69b; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel initWithTitle:titleColor:backgroundColor:boarderColor:loadingIndicatorColor:image:userInteractionEnabled:showLoadingIndicator:attributedTitle:] */

undefined1 *
FUN_1079ce4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f91a8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079ce69c; end: 1079ce6bf; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel copyWithZone:] */

undefined8 FUN_1079ce69c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079ce6c0; end: 1079ce77b; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel hash] */

undefined8 * FUN_1079ce6c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1079ce894:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079ce8a0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x30);
              if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071c60(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x38);
                if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x40);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_1079ce8a0;
                  }
                  goto LAB_1079ce894;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1079ce8a0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1079ce77c; end: 1079ce8bb; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel isEqual:] */

long FUN_1079ce77c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079ce894:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079ce8a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071c60(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_1079ce8a0;
                  }
                  goto LAB_1079ce894;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079ce8a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079ce8bc; end: 1079ce8c3; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel title] */

undefined8 FUN_1079ce8bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079ce8c4; end: 1079ce8cb; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel titleColor] */

undefined8 FUN_1079ce8c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079ce8cc; end: 1079ce8d3; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel backgroundColor] */

undefined8 FUN_1079ce8cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079ce8d4; end: 1079ce8db; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel boarderColor] */

undefined8 FUN_1079ce8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079ce8dc; end: 1079ce8e3; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel loadingIndicatorColor] */

undefined8 FUN_1079ce8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079ce8e4; end: 1079ce8eb; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel image] */

undefined8 FUN_1079ce8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1079ce8ec; end: 1079ce8f3; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel userInteractionEnabled] */

undefined1 FUN_1079ce8ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1079ce8f4; end: 1079ce8fb; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel showLoadingIndicator] */

undefined1 FUN_1079ce8f4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1079ce8fc; end: 1079ce903; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel attributedTitle] */

undefined8 FUN_1079ce8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1079ce904; end: 1079ce96f; -[SCDiscoverFeedRelatedAccountsSubscribeButtonViewModel .cxx_destruct] */

void FUN_1079ce904(long param_1)

{
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



/* Entry: 1079ce970; end: 1079cea37; -[SCSubtitlesLanguageActionSheetHandler initWithLanguageIds:activeId:] */

undefined1 *
FUN_1079ce970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lRam0000000113727338 != -1) {
    func_0x00010002a2fc(0x113727338,&PTR___NSConcreteGlobalBlock_1109f3c98);
  }
  puStack_38 = PTR_PTR_1126f91b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    func_0x00010c162780(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079cea38; end: 1079cebf7;  */

void FUN_1079cea38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001079d395c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110ea8498;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110ea84b8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ea84d8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ea84f8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ea8518;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110ea8558;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ea8578;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110ea8598;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110ea85b8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110ea85d8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110ea85f8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110ea8618;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110ea8658;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110ea8698;
  puVar3 = &uStack_a0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_a0 = param_1;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113727330;
  puRam0000000113727330 = puVar2;
  _objc_release(uVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(puVar3);
    func_0x00010bee97a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)puVar3[2])(puVar3,param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1079cebf8; end: 1079cec57; -[SCSubtitlesLanguageActionSheetHandler updateViewModelWithCompletionBlock:] */

void FUN_1079cebf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bee97a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1079cec58; end: 1079cec8b; -[SCSubtitlesLanguageActionSheetHandler _reloadActionSheet] */

void FUN_1079cec58(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079cec8c; end: 1079cedaf; -[SCSubtitlesLanguageActionSheetHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8 FUN_1079cec8c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

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
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
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
    func_0x00010c162780(param_1);
    _objc_release(uVar1);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf76920();
  _objc_release(param_1);
  return 1;
}



/* Entry: 1079cedb0; end: 1079cef53; -[SCSubtitlesLanguageActionSheetHandler _viewModel] */

void FUN_1079cedb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = *(long *)(param_1 + 8);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        lVar3 = param_1;
        func_0x00010bdc4400(param_1,param_2,*(undefined8 *)(lStack_118 + lVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  puVar10 = PTR_PTR_1126b1210;
  _objc_alloc();
  puVar4 = puVar10;
  func_0x0001079d3944();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ea8478;
  func_0x000107d4bf04();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0;
  func_0x00010c019f60(puVar10,param_2,0,puVar4,puVar1,ppuVar5);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(uVar8);
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    lVar2 = lRam0000000113727330;
    func_0x00010c0e00e0(lRam0000000113727330,param_2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126b4748;
    if (lVar2 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126d5b78;
      _objc_alloc(PTR_PTR_1126d5b78);
      func_0x00010bef0a00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c0720c0(uVar8,param_2,puVar1);
      func_0x00010c0213c0(puVar6,param_2,lVar2,uVar7,puVar4);
      func_0x00010c15ac00(puVar10,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar1);
    }
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1079cef54; end: 1079cf06f; -[SCSubtitlesLanguageActionSheetHandler _actionItemViewModelForLanguageId:] */

void FUN_1079cef54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar2 = lRam0000000113727330;
  func_0x00010c0e00e0(lRam0000000113727330,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4748;
  if (lVar2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d5b78;
    _objc_alloc(PTR_PTR_1126d5b78);
    func_0x00010bef0a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0(param_3,param_2,param_1);
    func_0x00010c0213c0(puVar3,param_2,lVar2,uVar4,puVar1);
    func_0x00010c15ac00(puVar5,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1079cf070; end: 1079cf087; -[SCSubtitlesLanguageActionSheetHandler delegate] */

void FUN_1079cf070(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079cf088; end: 1079cf093; -[SCSubtitlesLanguageActionSheetHandler setDelegate:] */

void FUN_1079cf088(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1079cf094; end: 1079cf09b; -[SCSubtitlesLanguageActionSheetHandler activeLanguageId] */

undefined8 FUN_1079cf094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079cf09c; end: 1079cf0a3; -[SCSubtitlesLanguageActionSheetHandler setActiveLanguageId:] */

void FUN_1079cf09c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1079cf0a4; end: 1079cf0bb; -[SCSubtitlesLanguageActionSheetHandler actionDelegate] */

void FUN_1079cf0a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079cf0bc; end: 1079cf0c7; -[SCSubtitlesLanguageActionSheetHandler setActionDelegate:] */

void FUN_1079cf0bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1079cf0c8; end: 1079cf107; -[SCSubtitlesLanguageActionSheetHandler .cxx_destruct] */

void FUN_1079cf0c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079cf108; end: 1079cf213; -[SCPromotedStoryActionSheetDataProvider initWithStory:coverImage:adConfigProvider:] */

undefined1 *
FUN_1079cf108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f91b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079cf214; end: 1079cf247; -[SCPromotedStoryActionSheetDataProvider dealloc] */

void FUN_1079cf214(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f91b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1079cf248; end: 1079cf29f; -[SCPromotedStoryActionSheetDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1079cf248(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bee97a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079cf2a0; end: 1079cf2d3; -[SCPromotedStoryActionSheetDataProvider reload] */

void FUN_1079cf2a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079cf2d4; end: 1079cf8f7; -[SCPromotedStoryActionSheetDataProvider _viewModel] */

void FUN_1079cf2d4(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar15 = *(long *)(param_2 + 0x10);
  func_0x00010c259740(*(undefined8 *)(param_2 + 8));
  _objc_retain(lVar15);
  lVar2 = lVar15;
  func_0x00010bfe5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b4860;
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar15;
    func_0x00010bfe5b40(lVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fde60(puVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar14;
  func_0x000108fec800(puVar14,puVar4,0,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d5940;
  _objc_alloc(PTR_PTR_1126d5940);
  func_0x00010c04d520();
  puVar6 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  lVar2 = lVar15;
  func_0x00010bf20f80(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar15;
  func_0x00010bfe0440(lVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x000107d4cba0(puVar5,0,lVar2,lVar3,0,puVar6,puVar6,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar14);
  _objc_release(lVar15);
  func_0x00010befa120(puVar1);
  _objc_release(puVar7);
  uVar10 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c259740(uVar10);
  func_0x00010c08b2e0(*(undefined8 *)(param_2 + 8));
  puVar14 = PTR_PTR_1126d5b80;
  lVar15 = (long)param_1;
  _objc_retain(uVar11);
  func_0x00010c1182a0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfe0440(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010bf20f80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  func_0x0001079d3974();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  FUN_1079d2d58(uVar12,uVar8,uVar11,uVar10,5,lVar15,puVar14,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(puVar14);
  func_0x00010befa120(puVar1);
  _objc_release(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 8);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c259740(uVar10);
  func_0x00010c08b2e0(*(undefined8 *)(param_2 + 8));
  puVar14 = PTR_PTR_1126d5b80;
  _objc_retain(uVar11);
  func_0x00010c1182a0(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar14;
  func_0x00010b75e41c();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bfe0440(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar11;
  func_0x00010bf20f80(uVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar11 = uVar12;
  FUN_1079d2d58(uVar12,uVar8,puVar4,uVar10,5,(long)param_1,puVar14,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar12);
  _objc_release(puVar4);
  _objc_release(puVar14);
  func_0x00010befa120(puVar1);
  _objc_release(uVar11);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf20f80(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c15ed20(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bef4a60(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  puVar14 = PTR_PTR_1126d5948;
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  _objc_alloc(puVar14);
  func_0x00010bff96c0();
  _objc_release(uVar10);
  _objc_release(uVar11);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar5 = puVar4;
  func_0x0001079d398c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar14);
  func_0x00010befa120(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar14 = PTR_PTR_1126d5908;
  lVar15 = *(long *)(param_2 + 0x18);
  if (lVar15 != 0) {
    uVar10 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar10);
    _objc_retain(lVar15);
    _objc_alloc(puVar14);
    func_0x00010c04d400();
    _objc_release(lVar15);
    _objc_release(uVar10);
    puVar4 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar5 = puVar4;
    func_0x0001079d3914();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x000107d4ba6c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar14);
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  puVar14 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  ppuVar13 = &PTR____CFConstantStringClassReference_110eb67b8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb67b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1079cf8f8; end: 1079cf90f; -[SCPromotedStoryActionSheetDataProvider delegate] */

void FUN_1079cf8f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079cf910; end: 1079cf91b; -[SCPromotedStoryActionSheetDataProvider setDelegate:] */

void FUN_1079cf910(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1079cf91c; end: 1079cf96b; -[SCPromotedStoryActionSheetDataProvider .cxx_destruct] */

void FUN_1079cf91c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079cf96c; end: 1079cfc2f; -[SCPublicUserActionSheetDataProvider initWithPublicUser:storyDedupeFp:subscribeStatusManager:notificationStatusManager:lazySnapchattersDataFetcher:storyType:savedStoryId:thumbnailSnapId:displayTimestampSecs:imageThumbnail:circumstanceEngine:] */

undefined8 *
FUN_1079cf96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126f91c0;
  puVar2 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar3 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar3);
    puVar2[2] = param_9;
    _objc_retain(param_10);
    uVar3 = puVar2[3];
    puVar2[3] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar2[4];
    puVar2[4] = param_11;
    _objc_release(uVar3);
    puVar2[5] = param_1;
    _objc_retain(param_12);
    uVar3 = puVar2[6];
    puVar2[6] = param_12;
    _objc_release(uVar3);
    puVar2[9] = param_5;
    _objc_retain(param_6);
    uVar3 = puVar2[10];
    puVar2[10] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_7;
    _objc_release(uVar3);
    uVar3 = puVar2[10];
    func_0x00010c2600c0();
    puVar2[0xd] = uVar3;
    uVar3 = puVar2[0xb];
    func_0x00010c0dca40();
    puVar2[0xe] = uVar3;
    func_0x00010bef9980(puVar2[10]);
    func_0x00010bef9980(puVar2[0xb]);
    _objc_retain(param_8);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_13;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0xf];
    func_0x000108f4ae38();
    *(undefined1 *)(puVar2 + 0x10) = uVar1;
    _objc_initWeak(auStack_88,puVar2);
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1079cfc30;
    puStack_98 = &UNK_1108434b0;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010007380c(uVar3,&puStack_b0);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 1079cfc30; end: 1079cfc5b;  */

void FUN_1079cfc30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4ebe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079cfc5c; end: 1079cfcb3; -[SCPublicUserActionSheetDataProvider dealloc] */

void FUN_1079cfc5c(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x50),param_2,param_1);
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x58));
  puStack_28 = PTR_PTR_1126f91c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1079cfcb4; end: 1079cfd47; -[SCPublicUserActionSheetDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1079cfcb4(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x38) == 0) {
    _objc_retain(param_3);
    func_0x00010bde94e0(param_1);
    func_0x00010be14240(param_1);
  }
  else {
    _objc_retain(param_3);
    func_0x00010bdc4720(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    _objc_release(param_3);
    param_3 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079cfd48; end: 1079cfd7b; -[SCPublicUserActionSheetDataProvider reload] */

void FUN_1079cfd48(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079cfd7c; end: 1079d08db; -[SCPublicUserActionSheetDataProvider _actionSheetViewModelForSnapchatter:] */

void FUN_1079cfd7c(long param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar10 == 0) {
    ppuVar9 = param_3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf1c0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar11);
    _objc_retain(ppuVar5);
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    if ((ppuVar6 == (undefined **)0x0) ||
       (ppuVar6 = ppuVar11, func_0x00010c08fa60(), ppuVar6 == (undefined **)0x0)) {
      ppuVar6 = ppuVar8;
      if (ppuVar9 != (undefined **)0x0) {
        ppuVar6 = ppuVar9;
      }
      func_0x000108ffe710(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bd8f0;
      func_0x00010c29e6c0();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = puVar7;
      func_0x000108feaf80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(ppuVar6);
    }
    else {
      puStack_78 = PTR_PTR_1126b4860;
      func_0x00010bf1c1e0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar11);
    _objc_release(ppuVar8);
    _objc_release(ppuVar9);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar11);
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf24fc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puStack_78 = PTR_PTR_1126b4860;
    func_0x00010c0fde60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar9);
  puStack_80 = PTR_PTR_1126d5b80;
  if (*(long *)(param_1 + 0x10) == 3) {
    ppuVar9 = param_3;
    func_0x00010c294420(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078f60(*(undefined8 *)(param_1 + 8));
    func_0x00010c11abe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
  }
  else {
    ppuVar9 = *(undefined ***)(param_1 + 8);
    func_0x00010bf24ec0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14bd60();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar9);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar9 = param_3;
  func_0x0001079d3198(param_3,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  _objc_release(ppuVar9);
  ppuVar8 = *(undefined ***)(param_1 + 0x38);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  ppuVar9 = ppuVar8;
  if (lVar10 != 0) {
    ppuVar9 = *(undefined ***)(param_1 + 8);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
  }
  ppuVar8 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = *(long *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = *(undefined ***)(param_1 + 8);
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar11;
  if (ppuVar11 == (undefined **)0x0) {
    ppuVar3 = param_3;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e1a60();
  _objc_retain(ppuVar8);
  _objc_retain(param_3);
  _objc_retain(lVar10);
  _objc_retain(ppuVar3);
  puVar13 = PTR_PTR_1126b45f8;
  puVar12 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(ppuVar9);
  _objc_retain(puStack_78);
  func_0x00010c23ba80(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_78);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b4608;
  _objc_alloc(PTR_PTR_1126b4608);
  func_0x00010bff7b20();
  ppuVar4 = ppuVar8;
  _objc_retain(ppuVar8);
  if (((param_3 == (undefined **)0x0) ||
      (lVar1 = lVar10, func_0x00010c08fa60(), ppuVar4 = (undefined **)0x0, lVar1 == 0)) ||
     (ppuVar5 = ppuVar3, func_0x00010c08fa60(), ppuVar4 = (undefined **)0x0,
     ppuVar5 == (undefined **)0x0)) {
    puVar26 = (undefined *)0x0;
    ppuVar5 = ppuVar8;
  }
  else {
    ppuVar4 = (undefined **)PTR_PTR_1126d58f0;
    _objc_alloc(PTR_PTR_1126d58f0);
    func_0x00010c049180();
    puVar26 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    ppuVar5 = &PTR____CFConstantStringClassReference_110ea86d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea86d8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
  }
  FUN_1079d2f38();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar9;
  func_0x00010c08fa60();
  ppuVar6 = ppuVar8;
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar6 = ppuVar9;
  }
  puVar15 = puVar12;
  func_0x000107d4cba0(puVar12,ppuVar4,ppuVar6,ppuVar5,0,puVar26,puVar26,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  _objc_release(ppuVar4);
  _objc_release(ppuVar5);
  _objc_release(puVar26);
  _objc_release(puVar12);
  _objc_release(puVar13);
  _objc_release(ppuVar3);
  _objc_release(lVar10);
  _objc_release(param_3);
  _objc_release(ppuVar8);
  func_0x00010befa120(puVar7);
  _objc_release(puVar15);
  if (ppuVar11 == (undefined **)0x0) {
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar11);
  _objc_release(lVar10);
  _objc_release(ppuVar8);
  func_0x0001079d392c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar9;
  FUN_1079d2d58(ppuVar9,ppuVar9,ppuVar8,*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x10),(long)(*(double *)(param_1 + 0x28) * 1000.0),
                puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  _objc_release(ppuVar3);
  _objc_release(ppuVar8);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    func_0x0001079d3118();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(ppuVar8);
  }
  uVar16 = *(ulong *)(param_1 + 0x68);
  if ((uVar16 & 0xfffffffffffffffd) == 0) {
    ppuVar8 = ppuVar9;
    func_0x0001079d2b28(ppuVar9,*(undefined8 *)(param_1 + 0x48),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(ppuVar8);
    uVar16 = *(ulong *)(param_1 + 0x68);
  }
  if ((uVar16 | 2) == 3) {
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x0001079d2c5c(uVar2,*(undefined8 *)(param_1 + 0x48),ppuVar9,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(uVar2);
    uVar16 = *(ulong *)(param_1 + 0x68);
  }
  if (uVar16 != 3) {
    func_0x0001079d2a10(uVar16,*(undefined8 *)(param_1 + 0x48),param_3,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    _objc_release(uVar16);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  FUN_1079d2e88(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar7);
  _objc_release(uVar2);
  puVar13 = PTR_PTR_1126d5b88;
  uVar27 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(ppuVar9);
  _objc_retain(uVar27);
  _objc_alloc();
  uVar2 = uVar27;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar27;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar27;
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar27;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0();
  func_0x00010c078f60();
  func_0x00010c078f60();
  func_0x00010c0e1a60();
  func_0x00010c073320();
  uVar20 = uVar27;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar27;
  func_0x00010bf1ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar27;
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar27;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar27;
  func_0x00010bf24e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11a980();
  _objc_release(uVar27);
  func_0x00010c04a200(0x7ff8000000000000,0x7ff8000000000000,puVar13);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar2);
  puVar26 = PTR_PTR_1126d5900;
  _objc_alloc(PTR_PTR_1126d5900);
  func_0x00010c049100();
  _objc_release(param_3);
  puVar15 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar8 = &PTR____CFConstantStringClassReference_110ea86f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea86f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar9);
  puVar25 = puVar12;
  func_0x000107d4ba6c(puVar12,0,&PTR____CFConstantStringClassReference_110ea86b8,puVar15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(ppuVar8);
  _objc_release(puVar15);
  _objc_release(puVar26);
  _objc_release(puVar13);
  func_0x00010befa120(puVar7);
  _objc_release(puVar25);
  puVar12 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  puVar13 = puVar7;
  func_0x00010bf51e00(puVar7);
  ppuVar8 = &PTR____CFConstantStringClassReference_110eb67b8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb67b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar12);
  _objc_release(ppuVar8);
  _objc_release(puVar13);
  _objc_release(ppuVar9);
  _objc_release(puVar7);
  _objc_release(puStack_80);
  _objc_release(puStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1079d08dc; end: 1079d0a1f; -[SCPublicUserActionSheetDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1079d08dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) goto LAB_1079d0a00;
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010be64420(param_1);
  }
  else {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010bec7100(param_1);
  }
  _objc_release(uVar5);
LAB_1079d0a00:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d0a20; end: 1079d0b63; -[SCPublicUserActionSheetDataProvider _fetchSnapchatterWithCompletionBlock:] */

void FUN_1079d0a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1079d0b64; end: 1079d0bc3;  */

void FUN_1079d0b64(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bea7b60();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1079d0bc4; end: 1079d0deb; -[SCPublicUserActionSheetDataProvider _convertSnapchatterFromStoryWithCompletionBlock:] */

void FUN_1079d0bc4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c292e20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0();
  puVar5 = PTR_PTR_1126b14b8;
  _objc_alloc(PTR_PTR_1126b14b8);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1ade0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar5);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf24ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 8);
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  func_0x00010c292e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c0e0();
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_3 != 0) {
    func_0x00010bdc4720(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d0dec; end: 1079d0edf; -[SCPublicUserActionSheetDataProvider _setSnapchatter:completionBlock:] */

void FUN_1079d0dec(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(ulong *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_1079d0ec0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(ulong *)(param_1 + 0x38) = param_3;
    _objc_release(uVar2);
    if (param_4 == 0) goto LAB_1079d0ec0;
    func_0x00010bdc4720(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    uVar3 = param_1;
  }
  _objc_release(uVar3);
LAB_1079d0ec0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


