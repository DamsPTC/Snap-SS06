/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064022f0; end: 10640245f; -[SCAdDataSource userDidTapLoadingErrorCta:] */

void FUN_1064022f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010befe000();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar1 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0dff20(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c0ea260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0d6240();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c98a0;
    func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d6080(uVar1,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106402460; end: 1064024db; -[SCAdDataSource isInsertedAdItemId:] */

bool FUN_106402460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c067280(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1064024dc; end: 106402557; -[SCAdDataSource isInsertedAdGroup:] */

bool FUN_1064024dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c067200(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 106402558; end: 10640263b; -[SCAdDataSource isSkippedAdItemId:] */

bool FUN_106402558(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bef4ac0(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bef4120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258fe0(param_1);
    lVar5 = lVar4;
    func_0x00010c09c2e0(lVar4,param_2,lVar2,param_1);
    _objc_release(lVar4);
    bVar1 = lVar5 == 3 || lVar5 == 6;
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  return bVar1;
}



/* Entry: 10640263c; end: 106402753; -[SCAdDataSource resetInsertionData] */

void FUN_10640263c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfceb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c23e600(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c067200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  func_0x00010c12b0a0(param_1);
  uVar1 = param_1;
  func_0x00010c067240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  func_0x00010c12ad40(param_1);
  uVar1 = param_1;
  func_0x00010c22e7c0();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1391e0(param_1);
  }
  uVar1 = param_1;
  func_0x00010c278bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
  func_0x00010c0845e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106402754; end: 106402757; -[SCAdDataSource resetInsertionState] */

void FUN_106402754(void)

{
  return;
}



/* Entry: 106402758; end: 106402787; -[SCAdDataSource resetPendingAd] */

void FUN_106402758(long param_1,undefined8 param_2)

{
  func_0x00010c1da300(*(undefined8 *)(param_1 + 0x50),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c186f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setCurrentAdPlacement__11263f5f8,0);
  return;
}



/* Entry: 106402788; end: 10640278f; -[SCAdDataSource unviewedAds] */

undefined8 FUN_106402788(void)

{
  return 0;
}



/* Entry: 106402790; end: 106402797; -[SCAdDataSource isRetryInsertionEnabled] */

undefined8 FUN_106402790(void)

{
  return 0;
}



/* Entry: 106402798; end: 106402847; -[SCAdDataSource hasEndCardForAdIdentifier:] */

bool FUN_106402798(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ca220;
    func_0x00010bf94400(PTR_PTR_1126ca220,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c1014c0(param_1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
    _objc_release(puVar3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106402848; end: 10640295f; -[SCAdDataSource insertPendingAdAfterItem:insertSource:] */

long FUN_106402848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106402960;
  puStack_60 = &UNK_110847450;
  ppuVar1 = &puStack_78;
  lStack_58 = param_1;
  func_0x0001001071d4(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf5dfc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066520(param_1,param_2,uVar2,uVar3,param_3,param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x0001000e2a84(ppuVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106402960; end: 1064029db;  */

void FUN_106402960(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b8cd8;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef4240(uVar1);
  func_0x00010c25d840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e4e1b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064029dc; end: 106402c7b; -[SCAdDataSource insertAdPod:adPlacement:afterItem:insertSource:] */

undefined8
FUN_1064029dc(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = 0;
  if ((param_3 == 0) || (param_5 == 0)) goto LAB_106402c44;
  lVar1 = param_3;
  func_0x00010bef4c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106402c7c;
  puStack_68 = &UNK_1109213d8;
  uStack_60 = param_1;
  _objc_retain(param_4);
  uStack_58 = param_4;
  func_0x00010bf97e80(lVar1,param_2,&puStack_80);
  _objc_release(lVar1);
  uVar2 = param_1;
  func_0x00010c0f72e0();
  if ((int)uVar2 == 0) {
LAB_106402c38:
    uVar5 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c2313a0();
    if ((int)uVar2 == 0) {
      uVar2 = param_1;
      func_0x00010c2313c0();
      if ((int)uVar2 != 0) {
        lVar1 = param_5;
        func_0x00010bfce400(param_5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_1;
        func_0x00010be3c740(param_1,param_2,param_3,param_4,lVar1,param_6);
        _objc_release(lVar1);
        if ((int)uVar2 != 0) goto LAB_106402b14;
      }
      goto LAB_106402c38;
    }
    uVar2 = param_1;
    func_0x00010be3c760(param_1,param_2,param_3,param_4,param_5,param_6);
    if ((uVar2 & 1) == 0) goto LAB_106402c38;
LAB_106402b14:
    uVar2 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c098e80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf77660(uVar4,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef6460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108ba0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bef6420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c107d80();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_1);
    uVar5 = 1;
  }
  _objc_release(uStack_58);
LAB_106402c44:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106402c7c; end: 106402c8b;  */

void FUN_106402c7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be4fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logAdMediaLoadStatus_adPlacemen_112571910,
             param_2,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106402c8c; end: 106402f43; -[SCAdDataSource _insertPlaylistItems:adPlacement:afterItem:insertSource:] */

undefined8
FUN_106402c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
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
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef3de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bef3e00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106402f44;
  puStack_90 = &UNK_110921408;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_106402fc4;
  puStack_b8 = &UNK_110920fc8;
  uStack_b0 = param_1;
  uStack_88 = param_1;
  uStack_80 = param_4;
  _objc_retain(param_4);
  uVar5 = param_1;
  func_0x00010bfceb40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c23e600();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  FUN_10640bd68(param_3,param_5,param_6,uVar3,uVar4,&puStack_a8,&puStack_d0,
                &PTR___NSConcreteGlobalBlock_110921438,uVar5,uVar6,uVar7,uVar10,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf97e80(uVar11);
  _objc_release(uVar11);
  _objc_release(uStack_80);
  _objc_release(param_4);
  return 1;
}



/* Entry: 106402f44; end: 106402fc3;  */

undefined8 FUN_106402f44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef4120(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91e40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = uVar2;
  func_0x00010bf63ea0(uVar2);
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 106402fc4; end: 106402fd7;  */

void FUN_106402fc4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c101690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_playlistItemsInsertCount__11261dfc0,param_2);
  return;
}



/* Entry: 106402fd8; end: 106403027;  */

void FUN_106402fd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0560(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106403028; end: 106403567; -[SCAdDataSource _insertPlaylistItemGroupV2:adPlacement:afterGroup:insertSource:indexOfAdResponse:] */

undefined *
FUN_106403028(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             ulong param_5,undefined *param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *unaff_x28;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = param_7;
  puStack_158 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91e40(param_1);
  puVar10 = puVar3;
  uStack_150 = param_4;
  func_0x00010bf63ea0();
  puStack_148 = puVar10;
  _objc_release(puVar3);
  puVar4 = param_1;
  func_0x00010c1014e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = param_1;
  puStack_140 = puVar4;
  func_0x00010c067200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar10);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar4 = param_3;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x10;
  puVar11 = puVar4;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar4);
        }
        unaff_x28 = *(undefined **)(lStack_128 + (long)puVar10 * 8);
        puVar5 = param_1;
        func_0x00010c067280(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = unaff_x28;
        func_0x00010c280580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar5);
        puVar10 = puVar10 + 1;
      } while (puVar11 != puVar10);
      uVar9 = 0x10;
      puVar11 = puVar4;
      func_0x00010bf52a60();
      puVar10 = (undefined *)0x0;
    } while (puVar11 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar4 = puStack_148;
  if (puStack_148 == (undefined *)0x7) {
    puVar10 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x00010bef3a00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(param_1);
    func_0x00010c0e4960(puVar11);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar10);
    puVar3 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_140;
    puStack_138 = (undefined *)0x0;
    puVar10 = puVar3;
    func_0x00010c066c00();
    puVar13 = puStack_138;
    _objc_retain(puStack_138);
    _objc_release(puVar3);
    uVar9 = param_5;
    func_0x00010be4fda0(param_1);
    puVar5 = puVar11;
    if (((ulong)puVar10 & 1) != 0) {
LAB_106403480:
      puVar3 = param_1;
      func_0x00010c067240(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      puVar6 = puStack_158;
      func_0x00010c0a0560(param_1);
      _objc_release(puVar3);
      puVar5 = puVar11;
      goto LAB_1064034f4;
    }
  }
  else {
    puVar7 = param_3;
    func_0x00010bef60a0();
    puVar13 = (undefined *)0x0;
    puVar11 = puStack_140;
    puVar5 = puStack_140;
    if (puVar7 == (undefined *)0x7) goto LAB_106403480;
  }
  puVar11 = puVar13;
  func_0x00010bf3ec40();
  if (puVar11 != (undefined *)0x9) {
    puVar10 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar10;
    func_0x00010bf53fa0();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = param_3;
    puStack_178 = puVar10;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uStack_170 = param_5;
    func_0x00010bef60a0(param_3);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar10;
    puStack_188 = puVar6;
    puStack_180 = puVar4;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puStack_178;
    func_0x00010bf0ada0(puStack_178);
    _objc_release(puVar3);
    puVar5 = puStack_140;
    _objc_release(puVar4);
    puVar4 = puStack_148;
    _objc_release(puVar6);
    _objc_release(puVar10);
    param_5 = uStack_170;
    _objc_release(puVar7);
    _objc_release(unaff_x28);
    _objc_release(puVar11);
    _objc_release(puStack_168);
    _objc_release(puStack_158);
  }
  uVar9 = (ulong)(puVar4 == (undefined *)0x7);
  puVar7 = param_3;
  puVar6 = puVar13;
  func_0x00010c0a0600(param_1);
  puVar11 = (undefined *)0x0;
LAB_1064034f4:
  uVar2 = uStack_150;
  _objc_retain(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(uVar2);
  puVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  uStack_1b0 = uVar2;
  pcStack_198 = FUN_106403568;
  puStack_1f0 = unaff_x28;
  puStack_1e8 = puVar13;
  puStack_1e0 = puVar5;
  puStack_1d8 = puVar10;
  puStack_1d0 = puVar4;
  puStack_1c8 = puVar3;
  puStack_1c0 = puVar11;
  uStack_1b8 = param_5;
  puStack_1a8 = param_3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar6);
  _objc_retain(uVar9);
  puVar10 = puVar8;
  func_0x00010bf6d940(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010bef3de0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef3e00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125be0(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar10);
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_106403794;
  uStack_200 = 0x1064037a4;
  _objc_retain(uVar9);
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x2020000000;
  uStack_228 = 0;
  puVar10 = puVar7;
  uStack_1f8 = uVar9;
  func_0x00010bef4c60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  _objc_retain(uVar9);
  func_0x00010bf97e80(puVar10);
  _objc_release(puVar10);
  iVar1 = *(int *)(puStack_238 + 3);
  _objc_release(uVar9);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_240,8);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uStack_1f8);
  _objc_release(uVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  return (undefined *)(ulong)(0 < iVar1);
}



/* Entry: 106403568; end: 106403793; -[SCAdDataSource _insertPlaylistItemGroups:adPlacement:afterGroup:insertSource:] */

bool FUN_106403568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef3de0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef3e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125be0(uVar4);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106403794;
  uStack_70 = 0x1064037a4;
  _objc_retain(param_5);
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  uVar2 = param_3;
  uStack_68 = param_5;
  func_0x00010bef4c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
  iVar1 = *(int *)(puStack_a8 + 3);
  _objc_release(param_5);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0 < iVar1;
}



/* Entry: 106403794; end: 1064037ab;  */

void FUN_106403794(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064037ac; end: 10640393b;  */

void FUN_1064037ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010be3c720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = lVar1;
      func_0x00010bdc1720(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010be36bc0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9420(uVar6);
      _objc_release(uVar2);
      _objc_release(lVar3);
      lVar3 = param_2;
      func_0x00010bef60a0();
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar3 == 7) {
        lVar4 = param_2;
        func_0x00010bfe5ec0(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = *(long *)(param_1 + 0x30);
        func_0x00010be36bc0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befb540(lVar7);
        lVar7 = lVar4;
      }
      else {
        func_0x00010c1013e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010bdc1720(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar7;
        func_0x00010c1014c0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        uVar2 = *(undefined8 *)(lVar5 + 0x28);
        *(long *)(lVar5 + 0x28) = lVar4;
        _objc_release(uVar2);
      }
      _objc_release(lVar3);
      _objc_release(lVar7);
      lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10640393c; end: 106403c2f; -[SCAdDataSource _logAdMediaLoadStatus:adPlacement:] */

void FUN_10640393c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef4120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be91e40(param_1,param_2,param_3);
  uVar3 = uVar1;
  func_0x00010bf63ea0(uVar1,param_2,param_4,param_3,uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b8d98;
  func_0x00010bef3660(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ca4f8;
  func_0x00010c09c300(PTR_PTR_1126ca4f8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24d78,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bef60a0(param_3);
  func_0x00010c0df780(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bf529e0(uVar1);
  func_0x00010c0df840(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110f24d58,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106403c30; end: 106403e5f; -[SCAdDataSource _logAdGroupInserted:success:playlistGroup:insertSource:error:] */

void FUN_106403c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_3);
  func_0x00010bf39500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110f24d98,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_3;
  func_0x00010bef60a0(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddfd98,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 106403e60; end: 1064041e3; -[SCAdDataSource logAdInserted:insertSource:] */

void FUN_106403e60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bef4820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bef5600();
      puVar3 = PTR_PTR_1126ca5d8;
      _objc_alloc();
      func_0x00010bef4240();
      func_0x00010bef60a0();
      lVar1 = lVar2;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c099300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c9c0();
      lVar5 = lVar2;
      func_0x00010c15ed60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c107cc0();
      func_0x00010bef60a0();
      lVar6 = lVar2;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      lVar7 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c0eb3e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar2;
      func_0x00010c15ed20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec0e0();
      lVar10 = lVar2;
      func_0x0001084c6dd0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar2;
      func_0x00010bef52c0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001084c6f7c(lVar2,lVar12);
      func_0x00010bf21060();
      func_0x00010bff1b80();
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bef2040();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a0540();
      _objc_release(lVar4);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c098e80();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e22c0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c098e80();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c0a0680(lVar4);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064041e4; end: 1064042db; -[SCAdDataSource logAdInsertionFailure:playlistError:isMediaReady:] */

void FUN_1064041e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  )

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  ppuVar2 = (undefined **)0x0;
  if (param_4 != 0) {
    ppuVar2 = (undefined **)PTR_PTR_1126ca5e0;
    func_0x00010c0673a0(PTR_PTR_1126ca5e0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  if (param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e4e218;
  }
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef2040();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bef60a0(param_3);
  uVar5 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c0a05e0(uVar3,param_2,uVar4,uVar5,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064042dc; end: 1064042e3; -[SCAdDataSource shouldInsertPlaylistItem] */

undefined8 FUN_1064042dc(void)

{
  return 0;
}



/* Entry: 1064042e4; end: 106404357; -[SCAdDataSource playlistItemsInsertCount:] */

long FUN_1064042e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bef60a0();
  if (lVar2 == 0x16) {
    lVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
  }
  else {
    lVar2 = 1;
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 106404358; end: 10640435f; -[SCAdDataSource shouldInsertPlaylistItemGroup] */

undefined8 FUN_106404358(void)

{
  return 1;
}



/* Entry: 106404360; end: 1064044a7; -[SCAdDataSource didFinishViewingAdItemId:isViewingLongform:] */

ulong FUN_106404360(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010c075a00();
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = param_1;
    func_0x00010c07e480();
    if ((uVar4 & 1) == 0) {
      uVar4 = param_1;
      func_0x00010c0ea260(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c0688c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(uVar4);
      if ((param_4 & 1) == 0) {
        uVar4 = param_1;
        func_0x00010c067280(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c0ea840();
        uVar4 = uVar1;
        FUN_10643b130(uVar1,uVar3,uVar2);
        _objc_release(param_1);
        _objc_release(uVar1);
      }
      else {
        uVar4 = uVar2;
        func_0x00010c27dd80(uVar2);
        uVar4 = (ulong)(uVar4 == 2);
      }
      _objc_release(uVar2);
    }
    else {
      uVar4 = 1;
    }
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1064044a8; end: 1064045af; -[SCAdDataSource isDismissingSessionWithItemId:isViewingLongform:] */

bool FUN_1064044a8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c075a00(param_1,param_2,param_3);
  if (((int)uVar2 == 0) ||
     (uVar2 = param_1, func_0x00010c07e480(param_1,param_2,param_3), (uVar2 & 1) != 0)) {
    bVar5 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010c0ea260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c27dd80(uVar4);
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0ea840();
    bVar1 = uVar2 == 6;
    if (uVar3 == 1) {
      bVar1 = uVar2 == 8;
    }
    bVar5 = false;
    if ((param_4 & 1) == 0) {
      bVar5 = bVar1;
    }
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return bVar5;
}



/* Entry: 1064045b0; end: 1064045b7; -[SCAdDataSource initialAdSnapToDisplayForAdDataModel:] */

undefined8 FUN_1064045b0(void)

{
  return 0;
}



/* Entry: 1064045b8; end: 10640465b; -[SCAdDataSource adSnapIndexForItem:] */

undefined8 FUN_1064045b8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)param_1;
  _objc_retain(param_3);
  func_0x00010c2313a0();
  if ((param_1 & 1) == 0) {
    func_0x00010c2313c0();
    if (iVar1 == 0) {
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar2 = param_3;
      func_0x00010bfce400(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfecde0();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10640465c; end: 1064047b3; -[SCAdDataSource adPositionForItem:] */

long FUN_10640465c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = param_1;
  func_0x00010c2313a0();
  uVar3 = param_3;
  if ((int)lVar5 == 0) {
    lVar5 = param_1;
    func_0x00010c2313c0();
    if ((int)lVar5 == 0) {
      lVar5 = 0;
      goto LAB_106404794;
    }
    func_0x00010c067240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfce400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bfecde0(param_1,param_2,uVar4);
    _objc_release(uVar4);
  }
  else {
    func_0x00010bfceb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bfce400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(param_1);
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bfecde0(lVar2,param_2,uVar3);
    param_1 = lVar2;
  }
  lVar5 = lVar5 + 1;
  _objc_release(uVar3);
  _objc_release(param_1);
LAB_106404794:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1064047b4; end: 10640487f; -[SCAdDataSource adInsertPositionForItem:] */

undefined8 FUN_1064047b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef4b20(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef4860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0e00e0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c067fc0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106404880; end: 1064048df; -[SCAdDataSource snapIndexPosForItem:] */

long FUN_106404880(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfecd60();
  _objc_release(param_3);
  _objc_release(lVar1);
  return lVar2 + 1;
}



/* Entry: 1064048e0; end: 1064049ff; -[SCAdDataSource adRequestClientIdForItem:] */

void FUN_1064048e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x00010c067280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126ca218;
    _objc_retain(uVar3);
    _objc_opt_class(puVar4);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar3;
      func_0x00010bfe5ec0(uVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106404a00; end: 106404a8b; -[SCAdDataSource adResponseForItemId:] */

void FUN_106404a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c067280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  func_0x00010bef4ac0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106404a8c; end: 106404b0b; -[SCAdDataSource adResponseForAdRequestClientId:] */

void FUN_106404a8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bef4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106404b0c; end: 106404bdb; -[SCAdDataSource adResponseForDataModel:] */

void FUN_106404b0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x00010bef4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0e00e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106404bdc; end: 106404c67; -[SCAdDataSource adPodForAdResponse:] */

void FUN_106404bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bef4b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106404c68; end: 106404c6f; -[SCAdDataSource isDynamicInsertionEligibleForItem:] */

undefined8 FUN_106404c68(void)

{
  return 0;
}



/* Entry: 106404c70; end: 106405563; -[SCAdDataSource adViewContextForItem:] */

void FUN_106404c70(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bef6220(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ca400;
  puVar2 = param_1;
  func_0x00010c0ea180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298f80();
  func_0x00010c271ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b92c8;
  func_0x00010bf9b740(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126ca400;
  func_0x00010c271d00(PTR_PTR_1126ca400);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bf9b760(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c241620(param_1);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010c2415a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef2ee0(param_1);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b92c8;
  func_0x00010bef2ec0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c2313c0();
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010bfceb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bfce400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c0e00e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfecde0(puVar6);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b92c8;
    func_0x00010bef2d00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar1);
  }
  else {
    puVar1 = param_1;
    func_0x00010c067240();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bfce400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfecde0();
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if (puVar6 != (undefined *)0x7fffffffffffffff) {
      puVar1 = param_1;
      func_0x00010c067240(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010bfce400(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfecde0(puVar1);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b92c8;
    func_0x00010bef2d00(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea840();
  func_0x00010c0df840(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b92c8;
  func_0x00010c0eb5e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bef53c0(param_1);
  puVar5 = puVar2;
  func_0x00010bef52e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b9250;
  if (puVar5 == (undefined *)0x0) {
    puVar11 = *(undefined **)(param_1 + 0x30);
    func_0x00010bf53fa0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bef2c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126b3e90;
    func_0x00010befde80(PTR_PTR_1126b3e90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ad80(puVar1);
    _objc_release(puVar12);
    _objc_release(puVar6);
  }
  else {
    func_0x00010bef60a0(puVar5);
    func_0x00010bef4240(puVar5);
    func_0x00010c29d360(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0da220(puVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bef2520(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bef2560(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_1064336d4(puVar5,uVar8,uVar10,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b92c8;
    func_0x00010c0fbce0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c29d360(uVar10);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0ea840(uVar7);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bef2560(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    FUN_106432d84(puVar5,uVar10,uVar7,puVar2,uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar9);
    if (puVar11 != (undefined *)0x0) {
      puVar1 = puVar5;
      func_0x00010c068ae0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 != puVar1) {
        func_0x00010c294f20(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
      }
      _objc_release(puVar1);
    }
    uVar13 = *(ulong *)(param_1 + 0x30);
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c0ec0c0();
    _objc_release(uVar14);
    _objc_release(uVar13);
    if ((uVar15 & 1) == 0) {
      puVar1 = puVar5;
      func_0x00010c068ae0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        func_0x00010c294f20(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
      }
      _objc_release(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b92c8;
    func_0x00010c15f140(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar1);
    if (puVar11 == (undefined *)0x0) goto LAB_106405518;
    puVar1 = PTR_PTR_1126b92c8;
    func_0x00010c264620(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar4);
  }
  _objc_release(puVar1);
LAB_106405518:
  _objc_release(puVar11);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106405564; end: 106405737; -[SCAdDataSource skippedAdItemIdsAroundItem:pageLeft:] */

void FUN_106405564(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c2313a0();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
    goto LAB_106405710;
  }
  if (param_4 == 0) {
    lVar3 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfecde0();
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar2 = 0;
    lVar3 = lVar2;
    if ((lVar1 != 0) && (lVar3 = 0, lVar1 != 0x7fffffffffffffff)) {
      lVar3 = param_3;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar3);
      if (lVar1 != 0) {
        func_0x00010c23e600();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010be36bc0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010c0dff20(param_1,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = param_1;
        goto LAB_1064055dc;
      }
      lVar2 = 0;
      goto LAB_1064055e4;
    }
  }
  else {
    func_0x00010c23e600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0dff20(param_1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
LAB_1064055dc:
    _objc_release(lVar3);
LAB_1064055e4:
    _objc_release(lVar1);
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar2);
      lVar3 = lVar2;
    }
  }
  _objc_release(lVar2);
LAB_106405710:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106405738; end: 106405a3f; -[SCAdDataSource adViewContextForSkippedItemId:aroundItem:pageLeft:] */

void FUN_106405738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef6220(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  func_0x00010c0df840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010c2415a0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfceb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfecde0(uVar7);
  _objc_release(param_3);
  func_0x00010c0df840(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010bef2d00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29d360();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(uVar2,uVar8);
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010c125020(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106405a40; end: 106405f9f; -[SCAdDataSource adViewContextForGroupId:] */

void FUN_106405a40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1014c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = lVar2;
  func_0x00010c084fc0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b92c8;
  func_0x00010c23fa00(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010c0df740(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b92c8;
  func_0x00010bf0f6c0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea840();
  func_0x00010c0df840(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b92c8;
  func_0x00010c0eb5e0(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c29d360();
  lVar8 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084c0d90(lVar7,lVar10);
  func_0x00010c0df780(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b92c8;
  func_0x00010c125020(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf5f0a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c1013e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  FUN_10640b5b8(lVar1,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  FUN_10640a50c(lVar8);
  func_0x00010c0df840(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b92c8;
  func_0x00010c106140(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075a20();
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b92c8;
  func_0x00010c083d60(PTR_PTR_1126b92c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c067260();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c08fa60();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  if (lVar11 != 0) {
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0f0800();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c067260();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b92c8;
    func_0x00010c0f3ac0(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar3);
    _objc_release(puVar4);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106405fa0; end: 10640602f; -[SCAdDataSource isNofillAdItemId:] */

bool FUN_106405fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bef60a0(lVar2);
    bVar1 = lVar3 == 7;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106406030; end: 106406037; -[SCAdDataSource isNofillUnskippableAdItemId:] */

undefined8 FUN_106406030(void)

{
  return 0;
}



/* Entry: 106406038; end: 1064062df; -[SCAdDataSource _commonAdSnapViewLogParameters:] */

void FUN_106406038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ca2e0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7840(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c258fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fdbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7aa0(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c099300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a79e0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7bc0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef4d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a7c00(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29d360();
  func_0x00010c2bc8c0(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c2bc940(puVar1,param_2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29d360();
  func_0x000107a59564();
  func_0x00010c2b9b80(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c2a7ae0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b8440(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0ec0e0(param_3);
  func_0x00010c2b4f80(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef27a0(param_3);
  _objc_release(param_3);
  func_0x00010c2a77c0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1064062e0; end: 10640666b; -[SCAdDataSource adSnapViewLogParametersForSkippedAdItemId:aroundItem:pageLeft:] */

void FUN_1064062e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c067280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = param_1;
  func_0x00010bef4ac0(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bde24a0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf529e0();
  func_0x00010c2b9400(puVar5,param_2,lVar7 + 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfceb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = lVar8;
  func_0x00010bf529e0(lVar8);
  func_0x00010c2a7880(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = lVar8;
  func_0x00010bfecde0(lVar8,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c2a78a0(puVar5,param_2,lVar1 + 1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bfecde0();
  lVar1 = 2;
  if (param_5 == 0) {
    lVar1 = 0;
  }
  func_0x00010c2b9420(puVar5,param_2,lVar9 + lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar6);
  lVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba620(puVar5,param_2,lVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0710c0(param_1,param_2,param_4);
  func_0x00010c2b0640(puVar5,param_2,lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010bfce400(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar9 = lVar7;
  func_0x00010be36bc0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010c075a20(lVar6,param_2,lVar9);
  func_0x00010c2b19e0(puVar5,param_2,lVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar11 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10640666c; end: 106406963; -[SCAdDataSource logAdSkipWithAdItemId:aroundItem:pageLeft:] */

void FUN_10640666c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2313a0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bef5540(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef2040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0820();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar4 = *(long *)(param_1 + 0xb0);
    func_0x00010c0dff20(lVar4,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      lVar3 = param_1;
      func_0x00010c278bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf4b900();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c2782c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010bef4240();
      lVar9 = lVar1;
      func_0x00010c29e220();
      func_0x00010baf2e2c();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      func_0x00010bef4b20(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c257640();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar4;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c0c6c20();
      lVar15 = lVar4;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c29d360();
      func_0x00010c0a0940(0,lVar7,param_2,(uint)lVar5 ^ 1,lVar8,0x17,0,lVar9,lVar11 != 0,lVar14,
                          lVar16,lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
      func_0x00010c278bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(param_1);
    }
    _objc_release(lVar2);
    _objc_release(lVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106406964; end: 106406aab; -[SCAdDataSource skippedAdGroupIdsAroundGroup:pagedLeft:] */

void FUN_106406964(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010c2313c0();
  if ((int)lVar3 == 0) {
    lVar3 = 0;
    goto LAB_106406a84;
  }
  if (param_4 == 0) {
    lVar3 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_10640bc94();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar3);
    if (lVar2 != 0) {
      lVar1 = lVar2;
      func_0x00010be36bc0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23e620(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      goto LAB_106406a74;
    }
    lVar3 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010be36bc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
LAB_106406a74:
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
LAB_106406a84:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106406aac; end: 106406b3b; -[SCAdDataSource adRequestClientIdForGroupId:] */

void FUN_106406aac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0xa0);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8e08;
  _objc_opt_class(PTR_PTR_1126b8e08);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar2;
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106406b3c; end: 106406bbb; -[SCAdDataSource adResponseForGroupId:] */

void FUN_106406b3c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bef47e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010bef4820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106406bbc; end: 106406bbf; -[SCAdDataSource adViewContextForSkippedGroupId:] */

void FUN_106406bbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_adViewContextForGroupId__11259b230);
  return;
}



/* Entry: 106406bc0; end: 106406c6b; -[SCAdDataSource adSnapViewLogParametersForSkippedAdGroupId:aroundGroup:pageLeft:] */

void FUN_106406bc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde24a0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca2e0;
  func_0x00010bef5560(PTR_PTR_1126ca2e0,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9420();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106406c6c; end: 106406f9f; -[SCAdDataSource logAdSkipWithAdGroupId:aroundGroup:pagedLeft:] */

void FUN_106406c6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2313c0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bef5520(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bef2040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0820();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c067200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      lVar4 = param_1;
      func_0x00010c278bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf4b900();
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010c2782c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1;
      func_0x00010bef4240();
      lVar10 = lVar1;
      func_0x00010c29e220();
      func_0x00010baf2e2c();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x00010c257640();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar6;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c0c6c20();
      lVar15 = lVar6;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c29d360();
      func_0x00010c0a0940(0,lVar8,param_2,(uint)lVar5 ^ 1,lVar9,0x17,0,lVar10,lVar11 != 0,lVar14,
                          lVar16,lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar4);
      func_0x00010c278bc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(param_1);
      _objc_release(lVar6);
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106406fa0; end: 10640702f; -[SCAdDataSource isNofillAdGroupId:] */

bool FUN_106406fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c067200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bef60a0(lVar2);
    bVar1 = lVar3 == 7;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106407030; end: 1064070f7; -[SCAdDataSource totalTopSnapsMediaDurationInSecForAdGroup:] */

double FUN_106407030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_3);
  func_0x00010c067200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = param_1;
  func_0x00010c0dff20(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126afec0;
  if (lVar3 == 0) {
    dVar5 = 0.0;
  }
  else {
    lVar4 = lVar3;
    func_0x00010bef35e0(lVar3);
    dVar5 = (double)lVar4;
    func_0x00010c0cd480(dVar5,puVar1);
  }
  _objc_release(lVar3);
  return dVar5;
}



/* Entry: 1064070f8; end: 1064070ff; -[SCAdDataSource adSessionId] */

undefined8 FUN_1064070f8(void)

{
  return 0;
}



/* Entry: 106407100; end: 10640722f; -[SCAdDataSource totalAdCountForItem:] */

undefined8 FUN_106407100(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010c2313a0();
  if ((int)uVar4 == 0) {
    uVar4 = param_1;
    func_0x00010c2313c0();
    if ((int)uVar4 == 0) goto LAB_10640720c;
    func_0x00010c067240(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bf529e0();
  }
  else {
    lVar1 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
LAB_10640720c:
      uVar4 = 0;
      goto LAB_106407210;
    }
    func_0x00010bfceb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bfce400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0e00e0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
LAB_106407210:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106407230; end: 10640729b; -[SCAdDataSource adProductTypeForItem:] */

undefined8 FUN_106407230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c075a00();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef4250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_adProductType_11259aa38);
    return param_1;
  }
  return 3;
}



/* Entry: 10640729c; end: 1064072a7; -[SCAdDataSource setOperaControlling:] */

void FUN_10640729c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1064072a8; end: 1064072b3; -[SCAdDataSource setPlaylistItemController:] */

void FUN_1064072a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1064072b4; end: 10640732f; -[SCAdDataSource operaConfiguration] */

void FUN_1064072b4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010c0ea260(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106407330; end: 106407473; -[SCAdDataSource hideAdWithItem:] */

void FUN_106407330(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c067200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfce400(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    if (lVar4 == 0) {
      func_0x00010be36bc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12db80(param_1,param_2,lVar1);
    }
    else {
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12dbc0(param_1,param_2,lVar2);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106407474; end: 1064074e3; -[SCAdDataSource peekPendingInsertAds] */

void FUN_106407474(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7060(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1064074e4; end: 106407717; -[SCAdDataSource peekPendingInsertAdsForAdPod:] */

void FUN_1064074e4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000100504554();
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bef4c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if ((int)puVar5 != 0) {
      _objc_retain(puVar2);
      puVar1 = puVar2;
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106407718; end: 10640778f; -[SCAdDataSource insertPendingAds] */

void FUN_106407718(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0f7040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf97e80();
  func_0x00010c1391e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106407790; end: 106407937;  */

void FUN_106407790(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar2 = param_2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c067280(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c280580(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar1);
        _objc_release(uVar5);
        _objc_release(uVar1);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c101620(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106407938; end: 106407987; -[SCAdDataSource broadcastPlaylistItemView:] */

void FUN_106407938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c101620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106407988; end: 1064079d7; -[SCAdDataSource broadcastPlaylistGroupChange:] */

void FUN_106407988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c101340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064079d8; end: 106407a27; -[SCAdDataSource broadcastPendingAdSlotChange:] */

void FUN_1064079d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0f7300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106407a28; end: 106407b4b; -[SCAdDataSource pendingAdReadyToInsert] */

bool FUN_106407a28(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x50);
    func_0x00010c0f7700(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x0001006372a4();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    lVar6 = *(long *)(param_1 + 0x50);
    func_0x00010c0f7700(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf529e0();
    bVar1 = lVar5 == lVar8;
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  return bVar1;
}



/* Entry: 106407b4c; end: 106407bf3;  */

bool FUN_106407b4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef4120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010bf5dfc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be91e40(*(undefined8 *)(param_1 + 0x20));
  uVar2 = uVar3;
  func_0x00010bf63ea0(uVar3);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return (uVar2 & 0xfffffffffffffffb) == 3;
}



/* Entry: 106407bf4; end: 106407bfb; -[SCAdDataSource shouldDelayFiringAdOpportunity] */

undefined8 FUN_106407bf4(void)

{
  return 0;
}



/* Entry: 106407bfc; end: 106407e2f; -[SCAdDataSource logAdOpportunityIfNecessary:] */

void FUN_106407bfc(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) goto LAB_106407e14;
  uVar2 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0688c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c27dd80();
  if (uVar2 == 1) {
    bVar1 = true;
  }
  else {
    uVar3 = uVar4;
    func_0x00010c27dd80();
    uVar5 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0ea840();
    uVar2 = 9;
    if (uVar6 != 1) {
      uVar2 = 7;
    }
    bVar1 = uVar3 == uVar2;
    _objc_release(uVar5);
  }
  uVar2 = uVar4;
  func_0x00010c27dd80();
  if (uVar2 == 5) {
    uVar2 = param_1;
    func_0x00010c2313a0();
    if ((uVar2 & 1) != 0) goto LAB_106407d98;
    uVar2 = param_1;
    func_0x00010c2313c0();
    if ((int)uVar2 == 0) goto LAB_106407d94;
    lVar7 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bfecde0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    lVar7 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010bf529e0();
    _objc_release(lVar8);
    _objc_release(lVar7);
    if (lVar9 + 1 == lVar10) goto LAB_106407d98;
  }
  else {
LAB_106407d94:
    if (bVar1) {
LAB_106407d98:
      uVar2 = param_1;
      func_0x00010c22ec20();
      uVar3 = param_1;
      if ((int)uVar2 == 0) {
        func_0x00010bef39c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a0720(param_1,param_2,uVar3);
      }
      else {
        func_0x00010bf6af80(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef39c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar3,param_2,param_1);
        _objc_release(param_1);
      }
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar4);
LAB_106407e14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106407e30; end: 10640875b; -[SCAdDataSource logAdOpportunity:] */

void FUN_106407e30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  ulong uVar36;
  undefined8 uVar37;
  undefined *puVar38;
  ulong uVar39;
  undefined8 uVar40;
  undefined *puStack_a0;
  undefined **ppuStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bef39c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1064169a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e4e298;
  uStack_78 = uVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_78,&ppuStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126ca5e8;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar6;
  func_0x00010bef60a0();
  uVar7 = param_1;
  func_0x00010bef4240();
  uVar8 = param_3;
  func_0x00010c0ebcc0();
  uVar39 = param_3;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar36;
  func_0x00010c29d360();
  uVar10 = param_3;
  func_0x00010c067380();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = uVar12;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = uVar37;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar40;
  func_0x00010bf529e0();
  uVar14 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c099300();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar29;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x00010bf21060();
  func_0x00010c018ae0(puVar3,param_2,uVar1,uVar32,uVar7,uVar8,uVar39,1,uVar9,uVar10,uVar13,uVar15,
                      uVar19,uVar23,uVar27,uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar40);
  _objc_release(uVar37);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar36);
  _objc_release(uVar39);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bef39e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0720();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bef4240();
  if ((uVar1 != 2) && (uVar1 = param_1, func_0x00010bef4240(), uVar1 != 5)) goto LAB_1064086fc;
  puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_a0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar32 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar32;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  func_0x00010c0df840(puVar33,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_1;
  func_0x00010bef4240(param_1);
  func_0x00010c0df840(puVar34,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c067380();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_1;
  func_0x00010bef4120();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c258fe0(param_1);
  uVar39 = uVar7;
  func_0x00010bf5f900(uVar7,param_2,uVar8);
  func_0x00010c0df780(puVar35,param_2,uVar39);
  _objc_retainAutoreleasedReturnValue();
  uVar36 = *(ulong *)(param_1 + 0x50);
  func_0x00010c0f7700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar36;
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar8;
  func_0x00010bf529e0();
  puVar38 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar39 < 2) {
    func_0x00010c14de00(puStack_a0,param_2,&PTR____CFConstantStringClassReference_110e4e2b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar39 = param_1;
    func_0x00010bef4120(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar40 = *(undefined8 *)(param_1 + 0xc0);
    uVar37 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c0f7700();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar37;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c258fe0(param_1);
    uVar10 = uVar39;
    func_0x00010bf63ea0(uVar39,param_2,uVar40,uVar12,uVar9);
    func_0x00010c0df780(puVar38,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puStack_a0,param_2,&PTR____CFConstantStringClassReference_110e4e2b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar38);
    _objc_release(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar37);
    _objc_release(uVar39);
  }
  _objc_release(uVar8);
  _objc_release(uVar36);
  _objc_release(puVar35);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(uVar5);
  _objc_release(uVar32);
  uVar1 = param_3;
  func_0x00010c105ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010c0810a0();
  if ((uVar7 & 1) == 0) {
    uVar7 = param_3;
    func_0x00010c105ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c07eb80();
    if ((uVar8 & 1) != 0) {
LAB_1064086e4:
      _objc_release(uVar7);
      goto LAB_1064086ec;
    }
    uVar8 = param_3;
    func_0x00010c105ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar8;
    func_0x00010c07fda0();
    if ((uVar39 & 1) != 0) {
LAB_1064086dc:
      _objc_release(uVar8);
      goto LAB_1064086e4;
    }
    uVar39 = param_3;
    func_0x00010c105ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar39;
    func_0x00010c1139e0();
    if ((uVar36 & 1) != 0) {
LAB_1064086d0:
      _objc_release(uVar39);
      goto LAB_1064086dc;
    }
    uVar36 = param_3;
    func_0x00010c105ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar36;
    func_0x00010bfb3a00();
    if ((uVar9 & 1) != 0) {
LAB_1064086c8:
      _objc_release(uVar36);
      goto LAB_1064086d0;
    }
    uVar9 = param_3;
    func_0x00010c0ebcc0();
    _objc_release(uVar36);
    _objc_release(uVar39);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar1);
    if (uVar9 == 0) {
      uVar1 = param_1;
      func_0x00010bf6d940();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010bf53fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar39 = *(ulong *)(param_1 + 0x50);
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      uVar36 = uVar39;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar36;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = PTR_PTR_1126b3e90;
      func_0x00010befde80(PTR_PTR_1126b3e90,param_2,0x12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0ad80(uVar8,param_2,uVar10,puVar33,puStack_a0,
                          &PTR____CFConstantStringClassReference_110e4e2d8);
      _objc_release(puVar33);
      _objc_release(uVar10);
      _objc_release(uVar9);
      goto LAB_1064086c8;
    }
  }
  else {
LAB_1064086ec:
    _objc_release(uVar1);
  }
  _objc_release(puStack_a0);
LAB_1064086fc:
  func_0x00010c163ca0(param_1,param_2,0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = param_3;
  func_0x00010c2313a0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar39 = param_3;
  func_0x00010bef4240(param_3);
  func_0x00010c0df840(puVar33,param_2,uVar39);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    uVar39 = uVar1;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    uVar36 = uVar39;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd478);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar36);
    _objc_release(uVar39);
    _objc_release(uVar1);
    _objc_release(param_3);
  }
  _objc_release(puVar33);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10640875c; end: 1064088df; -[SCAdDataSource adPodSessionIdentifier] */

void FUN_10640875c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  uVar1 = param_1;
  func_0x00010c2313a0();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_1;
  func_0x00010bef4240(param_1);
  func_0x00010c0df840(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 == 0) {
    func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110ddd478);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1064088e0; end: 10640896b; -[SCAdDataSource updateViewLocation:] */

/* WARNING: Possible PIC construction at 0x000106408948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010640894c) */

void FUN_1064088e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29d360();
  _objc_release(lVar1);
  if (param_3 == lVar2) {
    return;
  }
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c222630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10640896c; end: 1064089ab; -[SCAdDataSource hasInsertedAdsAfterGroups] */

bool FUN_10640896c(long param_1)

{
  long lVar1;
  
  func_0x00010c0672a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1064089ac; end: 106408a23; -[SCAdDataSource insertedAdGroupIdsAfterGroupId:] */

void FUN_1064089ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c0672a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106408a24; end: 106408b13; -[SCAdDataSource addInsertedAdGroupId:afterGroupId:] */

void FUN_106408a24(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    puVar1 = param_1;
    func_0x00010c0672a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010befa120(puVar3,param_2,param_3);
    _objc_release(param_3);
    func_0x00010c0672a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106408b14; end: 106408b6f; -[SCAdDataSource removeInsertedAdGroupIdsAfterGroupId:] */

void FUN_106408b14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c0672a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106408b70; end: 106408b9f; -[SCAdDataSource removeAllInsertedAdGroupIds] */

void FUN_106408b70(undefined8 param_1)

{
  func_0x00010c0672a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106408ba0; end: 106408c47; -[SCAdDataSource isSkippedAdGroupId:afterGroupId:] */

undefined8 FUN_106408ba0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c23e5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar2 = uVar1;
    func_0x00010bf4b900(uVar1,param_2,param_3);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 106408c48; end: 106408cbf; -[SCAdDataSource skippedAdGroupIdsAfterGroupId:] */

void FUN_106408c48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c23e5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106408cc0; end: 106408daf; -[SCAdDataSource addSkippedAdGroupId:afterGroupId:] */

void FUN_106408cc0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_3);
    puVar1 = param_1;
    func_0x00010c23e5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010befa120(puVar3,param_2,param_3);
    _objc_release(param_3);
    func_0x00010c23e5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(param_1);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106408db0; end: 106408ddf; -[SCAdDataSource removeAllSkippedAdGroupIds] */

void FUN_106408db0(undefined8 param_1)

{
  func_0x00010c23e5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106408de0; end: 106408de7; -[SCAdDataSource adMediaManager] */

undefined8 FUN_106408de0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106408de8; end: 106408e17; -[SCAdDataSource setAdMediaManager:] */

void FUN_106408de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106408e18; end: 106408e1f; -[SCAdDataSource adOpportunity] */

undefined8 FUN_106408e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106408e20; end: 106408e4f; -[SCAdDataSource setAdOpportunity:] */

void FUN_106408e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106408e50; end: 106408e57; -[SCAdDataSource playlistItemViewObservable] */

undefined8 FUN_106408e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106408e58; end: 106408e87; -[SCAdDataSource setPlaylistItemViewObservable:] */

void FUN_106408e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106408e88; end: 106408e8f; -[SCAdDataSource playlistGroupChangeObservable] */

undefined8 FUN_106408e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106408e90; end: 106408ebf; -[SCAdDataSource setPlaylistGroupChangeObservable:] */

void FUN_106408e90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106408ec0; end: 106408ec7; -[SCAdDataSource pendingAdSlotObservable] */

undefined8 FUN_106408ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106408ec8; end: 106408ef7; -[SCAdDataSource setPendingAdSlotObservable:] */

void FUN_106408ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106408ef8; end: 106408eff; -[SCAdDataSource dependencies] */

undefined8 FUN_106408ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


