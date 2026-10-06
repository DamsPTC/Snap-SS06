/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1069db464; end: 1069db537; -[SCChatMediaDrawerSendBarSendButton _iconPaperPlaneFillImage] */

void FUN_1069db464(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010b88a460();
  uVar3 = 0xd5;
  if ((param_1 != 0) && (lRam00000001138466f0 < 3)) {
    plVar4 = (long *)&UNK_10e5f30e8;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0) goto LAB_1069db4cc;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0x87);
    plVar4 = (long *)&UNK_10e5f3128;
    do {
      lVar5 = *plVar4;
      if (lVar5 == 0xd5) {
        uVar3 = 0x3d;
        goto LAB_1069db4d8;
      }
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
LAB_1069db4cc:
    uVar3 = 0xd5;
  }
LAB_1069db4d8:
  func_0x00010c23ba80(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4034000000000000,0x4034000000000000,0x4008000000000000,0x4008000000000000,
                      0x4008000000000000,0x4008000000000000,puVar2,param_2,0x25,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069db538; end: 1069db553; -[SCChatMediaDrawerSendBarSendButton _didPressSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069db538(long param_1)

{
  if (*(long *)(param_1 + _DAT_112755550) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069db54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_112755550) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1069db554; end: 1069db563; -[SCChatMediaDrawerSendBarSendButton selectedItemCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069db554(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755518);
}



/* Entry: 1069db564; end: 1069db673; -[SCChatMediaDrawerSendBarSendButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069db564(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112755550,0);
  _objc_storeStrong(param_1 + _DAT_11275554c,0);
  _objc_storeStrong(param_1 + _DAT_112755548,0);
  _objc_storeStrong(param_1 + _DAT_112755544,0);
  _objc_storeStrong(param_1 + _DAT_11275552c,0);
  _objc_storeStrong(param_1 + _DAT_112755528,0);
  _objc_storeStrong(param_1 + _DAT_112755524,0);
  _objc_storeStrong(param_1 + _DAT_112755540,0);
  _objc_storeStrong(param_1 + _DAT_11275553c,0);
  _objc_storeStrong(param_1 + _DAT_112755538,0);
  _objc_storeStrong(param_1 + _DAT_112755534,0);
  _objc_storeStrong(param_1 + _DAT_112755530,0);
  _objc_storeStrong(param_1 + _DAT_112755520,0);
  _objc_storeStrong(param_1 + _DAT_11275551c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112755554,0);
  return;
}



/* Entry: 1069db674; end: 1069db7cf; -[SCChatMediaDrawerSendBarV2 initWithFrame:delegate:dataSource:layoutDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1069db674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f4288;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112755558),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275555c),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112755560),param_9);
    func_0x00010be3a440(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010c159ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1069db7d0; end: 1069db937; -[SCChatMediaDrawerSendBarV2 _initSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069db7d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126cfa10;
  _objc_alloc();
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c014c60(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_112755564;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar3));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  if (*(long *)(param_1 + _DAT_112755568) != 0) {
    func_0x00010c0deec0();
  }
  func_0x00010c1fb240(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1069db938; end: 1069db983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069db938(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112755558;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf78a60();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069db984; end: 1069dbb1b;  */

void FUN_1069db984(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar5 + 0x10))((double)(float)(int)(param_3 * -0.5),lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069dbb1c; end: 1069dbce7; -[SCChatMediaDrawerSendBarV2 selectedMediaCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dbb1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar5 = (long)_DAT_112755568;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126cfa18;
    _objc_alloc_init(PTR_PTR_1126cfa18);
    func_0x00010c1f7ac0();
    func_0x00010c1c82c0(0x4024000000000000,puVar1);
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5),param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010c2025c0(*(undefined8 *)(param_1 + lVar5),param_2,0);
    lVar4 = param_1 + _DAT_112755560;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_1 + _DAT_11275555c;
    _objc_loadWeakRetained(lVar4);
    func_0x00010c189840(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    puVar2 = PTR_PTR_1126cfa08;
    _objc_opt_class(PTR_PTR_1126cfa08);
    func_0x00010c126000(uVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e67178);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1069dbce8;
    puStack_50 = &UNK_1108471b0;
    lStack_48 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_68);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c128b60(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1069dbce8; end: 1069dbfcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dbce8(undefined8 param_1,undefined8 param_2,double param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x20) + (long)_DAT_112755564);
  func_0x00010c0bbfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc02c000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4024000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  (**(code **)(lVar5 + 0x10))(-10.0 - param_3,lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069dbfd0; end: 1069dbfd3; -[SCChatMediaDrawerSendBarV2 setEditButtonEnabled:] */

void FUN_1069dbfd0(void)

{
  return;
}



/* Entry: 1069dbfd4; end: 1069dbfd7; -[SCChatMediaDrawerSendBarV2 setSendButtonEnabled:] */

void FUN_1069dbfd4(void)

{
  return;
}



/* Entry: 1069dbfd8; end: 1069dc037; -[SCChatMediaDrawerSendBarV2 showThumbnailCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dbfd8(double param_1,double param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  
  if (param_5 != 0) {
    lVar1 = (long)_DAT_112755568;
    func_0x00010bf21300(param_3,param_4,*(undefined8 *)(param_3 + lVar1));
    func_0x00010c23d0a0(*(undefined8 *)(param_3 + lVar1));
    if ((param_1 == 0.0) || (func_0x00010c23d0a0(*(undefined8 *)(param_3 + lVar1)), param_2 == 0.0))
    {
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + lVar1),PTR_s_reloadData_112627cf8);
      return;
    }
  }
  return;
}



/* Entry: 1069dc038; end: 1069dc043; -[SCChatMediaDrawerSendBarV2 heightForThumbnailsCollectionView] */

undefined8 FUN_1069dc038(void)

{
  return 0x4041800000000000;
}



/* Entry: 1069dc044; end: 1069dc1df; -[SCChatMediaDrawerSendBarV2 insertThumbnailCellAtIndexPath:] */

/* WARNING: Possible PIC construction at 0x0001069dc134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001069dc280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069dc138) */
/* WARNING: Removing unreachable block (ram,0x0001069dc1dc) */
/* WARNING: Removing unreachable block (ram,0x0001069dc158) */
/* WARNING: Removing unreachable block (ram,0x0001069dc284) */
/* WARNING: Removing unreachable block (ram,0x0001069dc2bc) */
/* WARNING: Removing unreachable block (ram,0x0001069dc2a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc044(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112755568;
  lVar5 = *(long *)(param_1 + lVar7);
  func_0x00010c1554e0(param_3);
  func_0x00010c0deec0();
  lVar1 = param_1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1554e0(param_3);
  lVar2 = lVar1;
  func_0x00010bf404e0();
  if (lVar5 + 1 == lVar2) {
    lVar2 = param_3;
    func_0x00010c0840e0();
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c1554e0(param_3);
    func_0x00010c0deec0();
    if (lVar5 < lVar2) goto LAB_1069dc104;
    func_0x00010c0840e0();
    _objc_release(lVar1);
    if (param_3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066a40(uVar3);
      _objc_release(puVar4);
      func_0x00010c1525a0(*(undefined8 *)(param_1 + lVar7));
      goto LAB_1069dc114;
    }
  }
  else {
LAB_1069dc104:
    _objc_release(lVar1);
  }
  func_0x00010c128b60(*(undefined8 *)(param_1 + lVar7));
LAB_1069dc114:
  uVar6 = *(undefined8 *)(param_1 + _DAT_112755564);
  uVar3 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c0deec0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1fb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar6,PTR_s_setSelectedItemCount__11265c6b8,uVar3);
  return;
}



/* Entry: 1069dc1e0; end: 1069dc2bf; -[SCChatMediaDrawerSendBarV2 removeThumbnailCellAtIndexPath:] */

/* WARNING: Possible PIC construction at 0x0001069dc280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001069dc284) */
/* WARNING: Removing unreachable block (ram,0x0001069dc2bc) */
/* WARNING: Removing unreachable block (ram,0x0001069dc2a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = (long)_DAT_112755568;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c100(uVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112755564);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0deec0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1fb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_setSelectedItemCount__11265c6b8,uVar2);
  return;
}



/* Entry: 1069dc2c0; end: 1069dc313; -[SCChatMediaDrawerSendBarV2 resetThumbnailCellCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc2c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112755568;
  func_0x00010c128b60(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755564);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c0deec0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1fb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setSelectedItemCount__11265c6b8,uVar1);
  return;
}



/* Entry: 1069dc314; end: 1069dc347; -[SCChatMediaDrawerSendBarV2 pressedSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc314(long param_1)

{
  param_1 = param_1 + _DAT_112755558;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf78a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069dc348; end: 1069dc37b; -[SCChatMediaDrawerSendBarV2 pressedEditButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc348(long param_1)

{
  param_1 = param_1 + _DAT_112755558;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf788c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069dc37c; end: 1069dc39b; -[SCChatMediaDrawerSendBarV2 dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc37c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275555c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069dc39c; end: 1069dc3af; -[SCChatMediaDrawerSendBarV2 setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc39c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275555c,param_3);
  return;
}



/* Entry: 1069dc3b0; end: 1069dc3cf; -[SCChatMediaDrawerSendBarV2 layoutDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc3b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112755560);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069dc3d0; end: 1069dc3e3; -[SCChatMediaDrawerSendBarV2 setLayoutDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112755560,param_3);
  return;
}



/* Entry: 1069dc3e4; end: 1069dc403; -[SCChatMediaDrawerSendBarV2 delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc3e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112755558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069dc404; end: 1069dc417; -[SCChatMediaDrawerSendBarV2 setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc404(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112755558,param_3);
  return;
}



/* Entry: 1069dc418; end: 1069dc48b; -[SCChatMediaDrawerSendBarV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc418(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112755558);
  _objc_destroyWeak(param_1 + _DAT_112755560);
  _objc_destroyWeak(param_1 + _DAT_11275555c);
  _objc_storeStrong(param_1 + _DAT_112755564,0);
  _objc_storeStrong(param_1 + _DAT_112755568,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275556c,0);
  return;
}



/* Entry: 1069dc48c; end: 1069dc493; -[UICollectionViewChatMediaDrawerV2FlowLayout flipsHorizontallyInOppositeLayoutDirection] */

undefined8 FUN_1069dc48c(void)

{
  return 0;
}



/* Entry: 1069dc494; end: 1069dc657; -[SCChatMediaDrawerVideo initWithPHAsset:filterFactory:grapheneRegistry:videoImporter:previewURLVideoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1069dc494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126f4290;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithPHAsset__112532938,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c5440(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112755570) = 0x7fefffffffffffff;
    lVar4 = (long)_DAT_112755574;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112755578;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11275557c;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112755580;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112755584) = 0;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112755588);
    *(undefined **)((long)puVar1 + (long)_DAT_112755588) = puVar3;
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1069dc658; end: 1069dc683;  */

void FUN_1069dc658(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf8b160(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c0df730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithDouble__1126157e0);
  return;
}



/* Entry: 1069dc684; end: 1069dc87b; -[SCChatMediaDrawerVideo fetchImageWithSize:mediaType:allowLowQuality:completion:] */

void FUN_1069dc684(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined1 auStack_98 [8];
  long lStack_90;
  double dStack_88;
  double dStack_80;
  undefined1 auStack_78 [8];
  
  dVar4 = param_1;
  _objc_retain(param_7);
  func_0x00010bf2f240(param_3);
  if (*(long *)(param_3 + 8) != 0) {
    puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e480();
    _objc_release(puVar1);
    *(undefined4 *)(param_3 + 0x18 + param_5 * 4) = 0;
    puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x00010c1cc000();
    func_0x00010c1ec960(puVar1);
    func_0x00010c18ba80(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5c20();
    _objc_release(puVar2);
    _objc_initWeak(auStack_78,param_3);
    puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    _objc_copyWeak(auStack_98,auStack_78);
    puVar3 = puVar2;
    lStack_90 = param_5;
    dStack_88 = param_1;
    dStack_80 = param_2;
    func_0x00010c1357a0(param_1 * dVar4,param_2 * dVar4);
    *(int *)(param_3 + 0x18 + param_5 * 4) = (int)puVar3;
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 1069dc87c; end: 1069dc9a3;  */

void FUN_1069dc87c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf1f3c0();
      _objc_release(uVar2);
      if ((param_2 != 0) && ((uVar3 & 1) == 0)) {
        uVar2 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (uVar2 != 0) {
          uVar3 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bf1f3c0();
          _objc_release(uVar3);
          _objc_release(uVar2);
          if ((uVar4 & 1) == 0) {
            *(undefined4 *)(lVar1 + *(long *)(param_1 + 0x30) * 4 + 0x18) = 0;
          }
        }
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069dc9a4; end: 1069dca5f; -[SCChatMediaDrawerVideo cancelThumbnailFetchRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dc9a4(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if (*(double *)(param_1 + _DAT_112755570) == 1.79769313486232e+308) {
    puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e480();
    _objc_release(puVar1);
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11275558c + 0x10));
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
  }
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069dca60; end: 1069dcaf3; -[SCChatMediaDrawerVideo prepareUploadDataForVideo:videoFilter:completion:] */

void FUN_1069dca60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1069dcaf4;
  puStack_40 = &UNK_110857fa0;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa91c0(param_1,param_2,param_4,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 1069dcaf4; end: 1069dcb0f;  */

void FUN_1069dcaf4(long param_1,long param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x20) + 0x10);
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001069dcb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001069dcb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1069dcb10; end: 1069dcd4f; -[SCChatMediaDrawerVideo snapMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dcb10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_112755590;
  if (*(long *)(param_1 + lVar10) == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c4918;
    _objc_opt_new(PTR_PTR_1126c4918);
    lVar2 = *(long *)(param_1 + lVar10);
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0946a0();
    _objc_release(lVar2);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c0664c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c094680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296de0();
      func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110db1798);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b2880(puVar1,param_2,puVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(uVar7);
      _objc_release(uVar4);
    }
    lVar2 = *(long *)(param_1 + lVar10);
    func_0x00010c0664c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0d3a20();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      puVar9 = PTR_PTR_1126b2378;
      _objc_alloc_init(PTR_PTR_1126b2378);
      puVar5 = PTR_PTR_1126b5c10;
      _objc_alloc_init(PTR_PTR_1126b5c10);
      puVar6 = PTR_PTR_1126bfac0;
      _objc_opt_new(PTR_PTR_1126bfac0);
      func_0x00010c1ca400(puVar5,param_2,puVar6);
      _objc_release(puVar6);
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      func_0x00010c0664c0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d3a20();
      puVar6 = puVar5;
      func_0x00010c0d3a00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c218f80();
      _objc_release(puVar6);
      _objc_release(uVar7);
      func_0x00010c21b4e0(puVar9,param_2,puVar5);
      puVar6 = puVar9;
      func_0x00010bf63640(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aafe0(puVar1,param_2,puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar9);
    }
    puVar9 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1069dcd50; end: 1069dcd5b; -[SCChatMediaDrawerVideo prepareDataToUploadForMediaId:completionHandler:] */

void FUN_1069dcd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1091f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_prepareDataToUploadForMediaId_tr_11261fe98,param_3,0,param_4);
  return;
}



/* Entry: 1069dcd5c; end: 1069dcefb; -[SCChatMediaDrawerVideo prepareDataToUploadForMediaId:trackingId:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dcd5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112755574);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf58fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2056c0(uVar2);
  uVar1 = uVar2;
  func_0x00010c1c4880(uVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179260(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar2);
  _objc_retain(param_5);
  func_0x00010c10a340(param_1);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069dcefc; end: 1069dd00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dcefc(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ada0();
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0ef160();
      *(undefined8 *)(lVar2 + _DAT_112755584) = uVar3;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6b020(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ade0();
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069dd00c; end: 1069dd20f; -[SCChatMediaDrawerVideo prepareChunkedTranscodeVideoFilterForMediaId:trackingId:conversationIds:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dd00c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c4288;
  _objc_retain(param_4);
  func_0x00010b68eef4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b68f228();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755574);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b68f1bc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf58fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c2056c0(uVar4);
  func_0x00010c1c4880(uVar4);
  _objc_release(param_4);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179260(uVar4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112755580);
  _objc_retain(uVar2);
  func_0x00010bf0aca0(param_1);
  lVar5 = param_1;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(uVar4);
  func_0x00010bfab4e0(param_1);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(lVar5);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1069dd210; end: 1069dd29f;  */

void FUN_1069dd210(long param_1,long param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    FUN_1069dd2a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0001069dd250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,0,
                      &PTR____CFConstantStringClassReference_110e67238,0,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069dd2a0; end: 1069dd343;  */

void FUN_1069dd2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x00010c29af00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221d20(param_2);
  _objc_release(param_3);
  func_0x00010c16bc20(param_2);
  func_0x00010c222080(param_1,param_2);
  func_0x00010c2220a0(param_2);
  func_0x00010c1a8660(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069dd344; end: 1069dd34b; -[SCChatMediaDrawerVideo mediaContentType] */

undefined8 FUN_1069dd344(void)

{
  return 1;
}



/* Entry: 1069dd34c; end: 1069dd34f; -[SCChatMediaDrawerVideo width] */

void FUN_1069dd34c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c2e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maxSizeOnScreen_11260e5a0);
  return;
}



/* Entry: 1069dd350; end: 1069dd367; -[SCChatMediaDrawerVideo height] */

undefined8 FUN_1069dd350(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0c2e20();
  return param_2;
}



/* Entry: 1069dd368; end: 1069dd36f; -[SCChatMediaDrawerVideo isZipped] */

undefined8 FUN_1069dd368(void)

{
  return 0;
}



/* Entry: 1069dd370; end: 1069dd37f; -[SCChatMediaDrawerVideo videoCodecOfPreparedData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069dd370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755584);
}



/* Entry: 1069dd380; end: 1069dd3cf; -[SCChatMediaDrawerVideo duration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069dd380(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112755588);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1069dd3d0; end: 1069dd3d7; -[SCChatMediaDrawerVideo miniThumbnailData] */

undefined8 FUN_1069dd3d0(void)

{
  return 0;
}



/* Entry: 1069dd3d8; end: 1069dd3e3; -[SCChatMediaDrawerVideo getAVAssetAsynchronously:completion:] */

void FUN_1069dd3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc1e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_getAVAssetAsynchronously_importe_1125ce128,param_3,0,param_4);
  return;
}



/* Entry: 1069dd3e4; end: 1069dd40b; -[SCChatMediaDrawerVideo getAVAssetAsynchronously:importedContextId:completion:] */

void FUN_1069dd3e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be1c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__getAVAsset_importedContextId_at_112564c00,param_3,param_4,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001069dd408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5,0,0);
  return;
}



/* Entry: 1069dd40c; end: 1069dd673; -[SCChatMediaDrawerVideo _getAVAsset:importedContextId:attemptIdx:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dd40c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar6 = *(long *)(param_1 + _DAT_11275557c);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + _DAT_112755578);
    _objc_retain(uVar7);
    lVar1 = lVar6;
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf165a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bdc0da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf2f5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11275558c + param_3 * 8);
    *(long *)(param_1 + _DAT_11275558c + param_3 * 8) = lVar1;
    _objc_release(uVar5);
    lVar1 = lVar3;
    func_0x00010bfbc3e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    lVar4 = lVar3;
    _objc_retain(lVar3);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_release(lVar3);
    _objc_release(param_6);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar7);
  }
  _objc_release(lVar6);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1069dd674; end: 1069dd803;  */

void FUN_1069dd674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(long *)(param_1 + 0x28) == 1) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126bc530;
    func_0x00010c28e7c0(PTR_PTR_1126bc530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c2ac460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c5a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec320();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1069dd804; end: 1069dd867;  */

void FUN_1069dd804(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bf8dc60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1069dd868; end: 1069dd8ef; -[SCChatMediaDrawerVideo fetchOriginalVideoWithCompletion:completion:] */

void FUN_1069dd868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0c2e20(param_3);
  uVar1 = param_1;
  func_0x00010bf0aca0(param_3);
  func_0x00010bfab500(param_1,param_2,uVar1,param_3,param_4,1,param_5,param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1069dd8f0; end: 1069dd9fb; -[SCChatMediaDrawerVideo fetchVideoWithSize:aspectRatio:allowLowQuality:videoFilter:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069dd8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar2 = *(undefined8 *)(param_4 + _DAT_112755580);
  _objc_retain(uVar2);
  lVar1 = param_4;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069dd9fc;
  puStack_88 = &UNK_110952790;
  uStack_80 = param_7;
  uStack_78 = uVar2;
  lStack_70 = lVar1;
  uStack_68 = param_8;
  uStack_60 = param_3;
  uStack_58 = param_6;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bfab4e0(param_4,param_5,&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_80);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 1069dd9fc; end: 1069ddaeb;  */

void FUN_1069dd9fc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    FUN_1069dd2a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_1 + 0x28),param_2,*(undefined1 *)(param_1 + 0x48));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010bfae7c0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),uVar3);
    _objc_release(uVar2);
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069ddaec; end: 1069ddb67;  */

void FUN_1069ddaec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
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
  return;
}



/* Entry: 1069ddb68; end: 1069ddc77; -[SCChatMediaDrawerVideo fetchVideoURLWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069ddb68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + _DAT_112755578);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11275557c);
  _objc_retain(uVar3);
  uVar1 = uVar2;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1069ddc78;
  puStack_88 = &UNK_110952830;
  uStack_80 = uVar2;
  lStack_78 = param_2;
  uStack_70 = uVar3;
  uStack_68 = uVar1;
  uStack_60 = param_4;
  uStack_58 = param_1;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010bfc1e00(param_2,param_3,1,uVar1,&puStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_60);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1069ddc78; end: 1069de0b3;  */

void FUN_1069ddc78(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c279200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0c5a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bc530;
  func_0x00010c28e7c0(PTR_PTR_1126bc530);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  func_0x00010bfec320(uVar1);
  _CACurrentMediaTime();
  func_0x00010befc000(param_1 - *(double *)(param_2 + 0x48),uVar1);
  puVar3 = PTR_PTR_1126bc530;
  func_0x00010bf08de0(PTR_PTR_1126bc530);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  _objc_opt_class(uVar2);
  puVar4 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07b60();
  func_0x00010bec5520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar4);
  puVar3 = puVar6;
  func_0x00010c2ac460(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  func_0x00010bfec320(uVar1);
  lVar7 = *(long *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),0);
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf165a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bf9d400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    uVar9 = uVar8;
    func_0x00010bfbc3e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_2 + 0x40);
    uVar10 = uVar11;
    _objc_retain(uVar11);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar9);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar2);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1069de0b4; end: 1069de17f;  */

void FUN_1069de0b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc530;
  func_0x00010c28e7c0(PTR_PTR_1126bc530);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110e672b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069de180; end: 1069de237; -[SCChatMediaDrawerVideo getVideoSizeAndMetadataIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069de180(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (*(double *)(param_1 + _DAT_112755570) == 1.79769313486232e+308) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1069de238;
    puStack_38 = &UNK_110952860;
    lStack_30 = param_1;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x00010bfc1de0(param_1,param_2,2,&puStack_50);
    _objc_release(lStack_28);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1069de238; end: 1069de2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069de238(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bee8ee0(*(undefined8 *)(param_2 + 0x20));
  *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112755570) = param_1;
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112755590);
  *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_112755590) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1069de2bc; end: 1069de2c7; -[SCChatMediaDrawerVideo maxPixelSizeForUpload] */

undefined8 FUN_1069de2bc(void)

{
  return 0x40a7700000000000;
}



/* Entry: 1069de2c8; end: 1069de40b; -[SCChatMediaDrawerVideo _convertToMp4WithAsset:outputURL:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069de2c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___AVAssetExportSession_1126b0d60;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010bff4280();
  _objc_release(param_4);
  func_0x00010c1d7200(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1d6fc0(puVar1,param_3,*(undefined8 *)PTR__AVFileTypeMPEG4_110348008);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + _DAT_112755578);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1069de40c;
  puStack_68 = &UNK_110845188;
  puStack_60 = puVar1;
  uStack_58 = uVar2;
  uStack_50 = param_6;
  uStack_48 = param_1;
  _objc_retain(param_6);
  _objc_retain(puVar1);
  _objc_retain(uVar2);
  func_0x00010bf9cee0(puVar1,param_3,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(puStack_60);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(puVar1);
  return;
}



/* Entry: 1069de40c; end: 1069de56f;  */

void FUN_1069de40c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bc530;
  func_0x00010c28e7c0(PTR_PTR_1126bc530);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  lVar3 = *(long *)(param_2 + 0x20);
  func_0x00010c252d60(lVar3);
  (**(code **)(*(long *)(param_2 + 0x30) + 0x10))(*(long *)(param_2 + 0x30),lVar3 == 3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c5a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0c5a20();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010befc000(param_1 - *(double *)(param_2 + 0x38),uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1069de570; end: 1069de797; -[SCChatMediaDrawerVideo _videoSizeWithAvasset:] */

undefined ** FUN_1069de570(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_100 [17];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  ppuVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if (((ulong)ppuVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___AVComposition_1126cfa20;
    _objc_opt_class(PTR__OBJC_CLASS___AVComposition_1126cfa20);
    ppuVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((ulong)ppuVar2 & 1) != 0) {
      ppuVar2 = param_3;
      func_0x00010c2791a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_138 = 0;
      puStack_140 = (undefined *)0x0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuVar6 = &puStack_140;
      ppuVar3 = ppuVar2;
      func_0x00010bf52a60();
      if (ppuVar3 != (undefined **)0x0) {
        lVar5 = *plStack_130;
        do {
          ppuVar6 = (undefined **)0x0;
          do {
            if (*plStack_130 != lVar5) {
              _objc_enumerationMutation(ppuVar2);
            }
            lVar4 = *(long *)(lStack_138 + (long)ppuVar6 * 8);
            func_0x00010bf99700(lVar4);
            if (lVar4 == 0) {
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_168 = 0;
              uStack_170 = 0;
            }
            else {
              func_0x00010c26f620(&uStack_170,lVar4);
            }
            uStack_188 = uStack_150;
            uStack_190 = uStack_158;
            uStack_180 = uStack_148;
            _CMTimeGetSeconds(&uStack_190);
            ppuVar6 = (undefined **)((long)ppuVar6 + 1);
          } while (ppuVar3 != ppuVar6);
          ppuVar6 = &puStack_140;
          ppuVar3 = ppuVar2;
          func_0x00010bf52a60();
        } while (ppuVar3 != (undefined **)0x0);
      }
      _objc_release(ppuVar2);
    }
  }
  else {
    ppuVar2 = param_3;
    func_0x00010bdc2b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    apuStack_100[0] = (undefined *)0x0;
    ppuVar6 = apuStack_100;
    func_0x00010bfc99e0();
    puVar1 = apuStack_100[0];
    _objc_retain(apuStack_100[0]);
    _objc_release(ppuVar2);
    func_0x00010bfb2c80(puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcdf98;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcdf78;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110dcdfb8;
  if (ppuVar6 != (undefined **)0x2) {
    ppuVar3 = ppuVar2;
  }
  return ppuVar3;
}



/* Entry: 1069de798; end: 1069de7c3; +[SCChatMediaDrawerVideo _stringForApplicationState:] */

undefined ** FUN_1069de798(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcdf98;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcdf78;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcdfb8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1069de7c4; end: 1069de7d3; -[SCChatMediaDrawerVideo fileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1069de7c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112755570);
}



/* Entry: 1069de7d4; end: 1069de87f; -[SCChatMediaDrawerVideo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069de7d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_storeStrong(param_1 + _DAT_112755588,0);
  _objc_storeStrong(param_1 + _DAT_112755590,0);
  _objc_storeStrong(param_1 + _DAT_112755580,0);
  _objc_storeStrong(param_1 + _DAT_11275557c,0);
  _objc_storeStrong(param_1 + _DAT_112755578,0);
  _objc_storeStrong(param_1 + _DAT_112755574,0);
  lVar1 = _DAT_11275558c + param_1 + 0x10;
  lVar2 = -0x18;
  do {
    _objc_storeStrong(lVar1,0);
    lVar1 = lVar1 + -8;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0);
  return;
}



/* Entry: 1069de880; end: 1069debfb; -[SCMediaDrawerDataSource initWithFilterFactory:grapheneRegistry:videoImporter:imageImporter:previewURLVideoProvider:mediaTranscodingLogger:photoPermissionCoordinator:circumstanceEngine:coreConfigProvider:memoriesExperimentService:applicationLifecycleEvents:fetchLimit:] */

undefined8 *
FUN_1069de880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  puStack_68 = PTR_PTR_1126f4298;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126cfa28;
    _objc_alloc_init();
    uVar4 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar1[7];
    puVar1[7] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[10];
    puVar1[10] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b2670;
    _objc_alloc();
    func_0x00010c035d40();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126b2670;
    _objc_alloc();
    func_0x00010c035d40();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar4);
    uVar4 = param_11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0xf];
    puVar1[0xf] = uVar4;
    _objc_release(uVar5);
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



/* Entry: 1069debfc; end: 1069dec37; -[SCMediaDrawerDataSource fetchMediaFromAlbum:] */

void FUN_1069debfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x90) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bfa8690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchMediaIfNeeded_1125c7b48);
  return;
}



/* Entry: 1069dec38; end: 1069ded83; -[SCMediaDrawerDataSource fetchMediaIfNeeded] */

void FUN_1069dec38(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x00010bf10fa0();
  if ((puVar1 != (undefined *)0x0) && ((*(byte *)(param_1 + 0x90) & 1) == 0)) {
    _objc_initWeak(auStack_38,param_1);
    uStack_58 = 0;
    uStack_48 = 0x2020000000;
    uStack_40 = 0;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uVar4 = 0xc2000000;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1069ded84;
    puStack_70 = &UNK_110952890;
    puStack_50 = &uStack_58;
    _objc_copyWeak(auStack_60,auStack_38);
    ppuVar2 = &puStack_88;
    puStack_68 = &uStack_58;
    _objc_retainBlock(ppuVar2);
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      _CACurrentMediaTime();
      *(undefined8 *)(param_1 + 0x88) = uVar4;
    }
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) {
      func_0x00010be3afc0(param_1);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00();
      func_0x00010bfab6a0(uVar4);
      _objc_release(lVar3);
    }
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_60);
    __Block_object_dispose(&uStack_58,8);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1069ded84; end: 1069dee63;  */

void FUN_1069ded84(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010bf529e0();
    if ((uVar2 < 0x1f5) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8), (*(byte *)(lVar3 + 0x18) & 1) != 0)) {
      func_0x00010be933e0(lVar1);
    }
    else {
      *(undefined1 *)(lVar3 + 0x18) = 1;
      func_0x00010be933e0(lVar1);
      func_0x00010bf529e0(param_2);
      lVar3 = lVar1;
      func_0x00010be23920(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be933e0(lVar1);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069dee64; end: 1069def7f; -[SCMediaDrawerDataSource _initialFetchPartialCRAssets] */

void FUN_1069dee64(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069def80;
  puStack_58 = &UNK_1108fdba0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  puVar2 = PTR_PTR_1126b2688;
  _objc_opt_new(PTR_PTR_1126b2688);
  func_0x00010c2add00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab780(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1069def80; end: 1069df04f;  */

void FUN_1069def80(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf529e0();
    if (uVar1 < 0x1f5) {
      func_0x00010be933e0(param_1);
    }
    else {
      func_0x00010be933e0(param_1);
      func_0x00010bf529e0(param_2);
      lVar2 = param_1;
      func_0x00010be23920(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be933e0(param_1);
      _objc_release(lVar2);
    }
    func_0x00010be0f360(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069df050; end: 1069df167; -[SCMediaDrawerDataSource _fetchAllCRAssets] */

void FUN_1069df050(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1069df168;
  puStack_58 = &UNK_1108fdba0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  puVar2 = PTR_PTR_1126b2688;
  _objc_opt_new(PTR_PTR_1126b2688);
  func_0x00010c2b4b40();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab780(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1069df168; end: 1069df1bf;  */

void FUN_1069df168(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be933e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069df1c0; end: 1069df27b; -[SCMediaDrawerDataSource _getUpdateIndexPathesAfterPaginatedWithFetchResultCount:] */

void FUN_1069df1c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (100 < param_3) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    if (0 < (long)param_3) {
      lVar3 = 100;
      do {
        puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
        func_0x00010bfed020(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,lVar3,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar2);
        _objc_release(puVar2);
        lVar3 = lVar3 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069df27c; end: 1069df3c3; -[SCMediaDrawerDataSource mediaListForAlbum:] */

void FUN_1069df27c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
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
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  func_0x00010bfa8680(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar4 = 0;
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c206e00(*(undefined8 *)(lStack_118 + lVar6 * 8),param_2,lVar4);
        lVar4 = lVar4 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (*(long *)(param_3 + 0x30) == 0) {
      func_0x000108dfda34();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c09e900();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069df3c4; end: 1069df3f7; -[SCMediaDrawerDataSource viewAlbumsSectionHeaderTitle] */

void FUN_1069df3c4(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    func_0x000108dfda34();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c09e900();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069df3f8; end: 1069df5cf; -[SCMediaDrawerDataSource _resetMediaListFromFetchResult:maxNumberOfItemsToDisplay:shouldOnlyReloadItemAtIndexPathes:] */

void FUN_1069df3f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22ff40();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010be06d80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_3;
  func_0x00010bf529e0();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(lVar4);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = uVar3;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069df5d0; end: 1069df79b;  */

void FUN_1069df5d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010be5ee60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010be5ee40();
      _objc_retainAutoreleasedReturnValue();
    }
    if ((*(byte *)(lVar1 + 0x80) & 1) == 0) {
      _CACurrentMediaTime();
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b2438;
      func_0x00010bf4c9a0(PTR_PTR_1126b2438);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar6 = uVar3;
      func_0x00010c0c8b00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbfe0();
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar3);
      *(undefined1 *)(lVar1 + 0x80) = 1;
    }
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1069df79c;
    puStack_70 = &UNK_110848218;
    _objc_copyWeak(auStack_58,param_1 + 0x48);
    _objc_retain(lVar2);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    lStack_68 = lVar2;
    _objc_retain(uVar6);
    uStack_60 = uVar6;
    func_0x000100162d98("APPSTORE",&puStack_88);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1069df79c; end: 1069df7ff;  */

void FUN_1069df79c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
    *(undefined1 *)(lVar1 + 0x90) = 1;
    func_0x00010c0c55a0(*(undefined8 *)(lVar1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1069df800; end: 1069df983; -[SCMediaDrawerDataSource _eagerAssetsFromFetchResult:maxNumberOfItemsToDisplay:] */

void FUN_1069df800(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010c22be00(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfa9d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1069df984;
    puStack_58 = &UNK_1109528c0;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(puVar2);
    puStack_48 = puVar2;
    func_0x00010bf97e80(lVar3,param_2,&puStack_70);
    _objc_release(lVar3);
    _objc_release(puStack_48);
    _objc_release(uStack_50);
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1069df984; end: 1069df9eb;  */

void FUN_1069df984(long param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 == 0) || (func_0x00010c2827c0(), param_3 < uVar1)) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069df9ec; end: 1069dfb57; -[SCMediaDrawerDataSource _mediasFromAssets:existingMediaList:] */

void FUN_1069df9ec(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1069dfad8;
  puStack_50 = &UNK_11093adc8;
  _objc_retain(param_4);
  puStack_48 = param_4;
  uStack_40 = param_1;
  _objc_retain(puVar1);
  puStack_38 = puVar1;
  func_0x00010bf97e80(param_3,param_2,&puStack_68);
  _objc_release(param_3);
  puVar2 = param_4;
  if (param_3 != 0) {
    puVar2 = puVar1;
  }
  func_0x00010bf51e00(puVar2);
  _objc_release(puStack_38);
  _objc_release(puStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1069dfb58; end: 1069dfceb; -[SCMediaDrawerDataSource _mediasFromFetchResult:maxNumberOfItemsToDisplay:existingMediaList:] */

void FUN_1069dfb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfa9d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1069dfcec;
  puStack_68 = &UNK_1109528f0;
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  uStack_50 = param_1;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x00010bf97e80(uVar2,param_2,&puStack_80);
  _objc_release(uVar2);
  _objc_release(puStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1069dfcec; end: 1069dfd8f;  */

void FUN_1069dfcec(long param_1,undefined8 param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if ((uVar1 == 0) || (func_0x00010c2827c0(), param_3 < uVar1)) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf529e0();
    if (param_3 < uVar1) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = 0;
    }
    func_0x00010bdc7660(*(undefined8 *)(param_1 + 0x30));
    _objc_release(uVar2);
  }
  else {
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069dfd90; end: 1069dff1b; -[SCMediaDrawerDataSource _addMediaToMediaList:asset:existingItem:] */

void FUN_1069dfd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = param_5;
    func_0x00010c09ac40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_4;
    func_0x00010c09da80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0(uVar1,param_2,lVar2);
    if ((uVar3 & 1) == 0) {
      _objc_release(lVar2);
      _objc_release(uVar1);
    }
    else {
      uVar3 = param_5;
      func_0x00010c0fa940(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be42920(param_1,param_2,uVar3,param_4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(uVar1);
      if ((int)param_1 != 0) {
        func_0x00010befa120(param_3,param_2,param_5);
        goto LAB_1069dfef0;
      }
    }
  }
  lVar2 = param_4;
  func_0x00010c0c6c20();
  if (lVar2 == 1) {
    puVar4 = PTR_PTR_1126cfa30;
    _objc_alloc();
    func_0x00010c032c00();
  }
  else {
    lVar2 = param_4;
    func_0x00010c0c6c20();
    if (lVar2 != 2) goto LAB_1069dfef0;
    puVar4 = PTR_PTR_1126cf9e0;
    _objc_alloc();
    func_0x00010c032be0();
  }
  if (puVar4 != (undefined *)0x0) {
    func_0x00010befa120(param_3,param_2,puVar4);
    _objc_release(puVar4);
  }
LAB_1069dfef0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1069dff1c; end: 1069dfff3; -[SCMediaDrawerDataSource _isPhAssetHasSameEditsWithExistingPhAsset:newPhAsset:] */

uint FUN_1069dff1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bfd3de0();
  if (((int)lVar1 == 0) || (uVar2 = param_4, func_0x00010bfd3de0(), (int)uVar2 == 0)) {
    lVar1 = param_3;
    func_0x00010bfd3de0(param_3);
    uVar2 = param_4;
    func_0x00010bfd3de0(param_4);
    uVar4 = (uint)lVar1 ^ (uint)uVar2 ^ 1;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0d0320(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0d0320(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf433a0(lVar1,param_2,uVar2);
    uVar4 = (uint)(lVar3 == 0);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1069dfff4; end: 1069e006f; -[SCMediaDrawerDataSource removeMedia:] */

void FUN_1069dfff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  func_0x00010c12d360();
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  func_0x00010c0c55a0(*(undefined8 *)(param_1 + 0x18),param_2,PTR____NSArray0__struct_11034ab48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1069e0070; end: 1069e0103; -[SCMediaDrawerDataSource addListener:] */

void FUN_1069e0070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x18));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069e0104;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069e0104; end: 1069e0113;  */

void FUN_1069e0104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c55b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_mediaListDidChangeWithOnlyReload_11260ef80,
             PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 1069e0114; end: 1069e011b; -[SCMediaDrawerDataSource removeListener:] */

void FUN_1069e0114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1069e011c; end: 1069e0123; -[SCMediaDrawerDataSource didFinishFetching] */

undefined1 FUN_1069e011c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x90);
}



/* Entry: 1069e0124; end: 1069e01ef; -[SCMediaDrawerDataSource .cxx_destruct] */

void FUN_1069e0124(long param_1)

{
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



/* Entry: 1069e01f0; end: 1069e0247; -[SCMediaDrawerCameraRollHeaderView initWithFrame:] */

undefined1 * FUN_1069e01f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f42a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1160(puVar1);
    func_0x00010beb11a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1069e0248; end: 1069e0257; -[SCMediaDrawerCameraRollHeaderView updateTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e0248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28b1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127555dc),PTR_s_updateTitle__112680690);
  return;
}



/* Entry: 1069e0258; end: 1069e02ff; -[SCMediaDrawerCameraRollHeaderView _setupView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e0258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cfa38;
  _objc_alloc();
  func_0x00010c014ac0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_1127555dc;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1069e0300; end: 1069e04ff; -[SCMediaDrawerCameraRollHeaderView _setupViewConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069e0300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = (long)_DAT_1127555dc;
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12),param_2,0);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0(lVar2,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar12);
  lStack_88 = lVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf49420(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar12);
  uStack_80 = uVar6;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf49580(0x406a400000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  uStack_78 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf493c0(0x4018000000000000,uVar9,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = lVar2 + _DAT_1127555e0;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bf7d820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


