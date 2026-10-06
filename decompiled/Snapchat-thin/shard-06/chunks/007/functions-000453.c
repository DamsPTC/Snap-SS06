/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104caa91c; end: 104caa94f; -[SCPermissionsViewController didReceiveMemoryWarning] */

void FUN_104caa91c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e39e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_didReceiveMemoryWarning_1125bbe28);
  return;
}



/* Entry: 104caa950; end: 104caa9a7; -[SCPermissionsViewController notificationPermissionMayHaveChanged] */

void FUN_104caa950(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104caa9a8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104caa9a8; end: 104caa9af;  */

void FUN_104caa9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_resetView_11262c140);
  return;
}



/* Entry: 104caa9b0; end: 104caa9df; -[SCPermissionsViewController resetView] */

void FUN_104caa9b0(undefined8 param_1)

{
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104caa9e0; end: 104caaa1b; -[SCPermissionsViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104caa9e0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + _DAT_112710264;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f9c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104caaa1c; end: 104caaa23; -[SCPermissionsViewController numberOfSectionsInTableView:] */

undefined8 FUN_104caaa1c(void)

{
  return 1;
}



/* Entry: 104caaa24; end: 104caaa2b; -[SCPermissionsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_104caaa24(void)

{
  return 8;
}



/* Entry: 104caaa2c; end: 104caaaa7; -[SCPermissionsViewController tableView:heightForRowAtIndexPath:] */

void FUN_104caaa2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_5);
  func_0x00010c0f9b60(param_2);
  puVar1 = PTR_PTR_1126aed50;
  func_0x00010c142240(param_5);
  _objc_release(param_5);
  func_0x00010befd040(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfc9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,(double)(long)puVar1,param_2,PTR_s_getRowHeight_actionTextHeight__1125d0088);
  return;
}



/* Entry: 104caaaa8; end: 104caab43; -[SCPermissionsViewController tableView:heightForHeaderInSection:] */

undefined8
FUN_104caaaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad458;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad458,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126e39e0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_class_1125ac0b8);
  func_0x00010bfe0780();
  _objc_release(param_4);
  _objc_release(ppuVar1);
  return param_1;
}



/* Entry: 104caab44; end: 104caabbf; -[SCPermissionsViewController tableView:viewForHeaderInSection:] */

void FUN_104caab44(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad458;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad458,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126e39e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_class_1125ac0b8);
  func_0x00010c29cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104caabc0; end: 104caabdb; -[SCPermissionsViewController getRowHeight:actionTextHeight:] */

double FUN_104caabc0(double param_1,double param_2)

{
  return param_2 + param_1 + 39.0 + 16.0;
}



/* Entry: 104caabdc; end: 104caaca3; -[SCPermissionsViewController permissionExplanationLabelHeight:] */

double FUN_104caabdc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  puVar1 = PTR_PTR_1126aed50;
  func_0x00010c142240(param_4);
  func_0x00010bfc8ba0(puVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151420(param_2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  dVar4 = 220.0;
  func_0x00010c14dd20(param_1 + -32.0,puVar1,param_3,puVar2,0);
  _objc_release(puVar2);
  dVar3 = 12.0;
  if (12.0 <= dVar4) {
    dVar3 = dVar4;
  }
  _objc_release(puVar1);
  return (double)(float)(int)dVar3;
}



/* Entry: 104caaca4; end: 104caacab; -[SCPermissionsViewController tableView:cellForRowAtIndexPath:] */

void FUN_104caaca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f9b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_permissionExplanationCell__11261c0e8,param_4)
  ;
  return;
}



/* Entry: 104caacac; end: 104caadc3; -[SCPermissionsViewController permissionExplanationCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104caacac(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126aed50;
    _objc_opt_class(PTR_PTR_1126aed50);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      _objc_retain(puVar1);
      puVar2 = puVar1;
      goto LAB_104caad7c;
    }
  }
  puVar2 = PTR_PTR_1126aed50;
  _objc_alloc(PTR_PTR_1126aed50);
  func_0x00010c040100();
LAB_104caad7c:
  func_0x00010c142240(param_3);
  func_0x00010c1dac00(puVar2);
  func_0x00010c1e1260(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104caadc4; end: 104cab2b7; -[SCPermissionsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104caadc4(undefined **param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010c1554e0();
  if (lVar8 == 0) {
    lVar8 = param_4;
    func_0x00010c142240();
    if (lVar8 < 4) {
      if (lVar8 < 2) {
        if (lVar8 == 0) {
          lVar8 = (long)_DAT_112710254;
          uVar1 = *(ulong *)((long)param_1 + lVar8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c076e40();
          _objc_release(uVar1);
          if ((uVar3 & 1) == 0) {
            uVar2 = *(undefined8 *)((long)param_1 + lVar8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar2;
            func_0x00010bf10fa0();
            _objc_release(uVar2);
            puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_68 = 0xc2000000;
            pcStack_60 = FUN_104cab2b8;
            puStack_58 = &UNK_1108471e0;
            ppuVar5 = &puStack_70;
            ppuStack_50 = param_1;
            uStack_48 = uVar6;
            _objc_retainBlock(ppuVar5);
            uVar6 = *(undefined8 *)((long)param_1 + (long)_DAT_112710244);
            func_0x00010c269d40(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c136f60();
            _objc_release(uVar6);
            param_1 = ppuVar5;
            goto LAB_104cab248;
          }
        }
        else if (lVar8 == 1) {
          lVar8 = (long)_DAT_112710250;
          uVar1 = *(ulong *)((long)param_1 + lVar8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c083180();
          _objc_release(uVar1);
          if ((uVar3 & 1) == 0) {
            uVar2 = *(undefined8 *)((long)param_1 + lVar8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar2;
            func_0x00010c0831c0();
            _objc_release(uVar2);
            if ((int)uVar6 == 0) {
              param_1 = *(undefined ***)((long)param_1 + (long)_DAT_112710244);
              func_0x00010c269d40(param_1);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_104cab240;
            }
            param_1 = *(undefined ***)((long)param_1 + (long)_DAT_112710248);
            func_0x00010c269d40(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c134dc0();
            goto LAB_104cab248;
          }
        }
      }
      else {
        if (lVar8 == 2) {
          param_1 = *(undefined ***)((long)param_1 + (long)_DAT_112710244);
          func_0x00010c269d40(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf38240();
          goto LAB_104cab248;
        }
        if (lVar8 == 3) {
          _objc_initWeak(auStack_78,param_1);
          puVar7 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
          func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_80,auStack_78);
          func_0x00010bfc81e0(puVar7);
          _objc_release(puVar7);
          _objc_destroyWeak(auStack_80);
          _objc_destroyWeak(auStack_78);
          goto LAB_104cab25c;
        }
      }
    }
    else if (lVar8 < 6) {
      if (lVar8 == 4) {
        puVar7 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
        func_0x00010bf10fa0();
        if (puVar7 != (undefined *)0x3) {
          puVar7 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
          func_0x00010bf10fa0();
          param_1 = *(undefined ***)((long)param_1 + (long)_DAT_112710244);
          func_0x00010c269d40(param_1);
          _objc_retainAutoreleasedReturnValue();
          if (puVar7 == (undefined *)0x0) {
            func_0x00010c136240(param_1);
          }
          else {
LAB_104cab240:
            func_0x00010c0e99a0();
          }
          goto LAB_104cab248;
        }
      }
      else if (lVar8 == 5) {
        lVar8 = (long)_DAT_112710240;
        uVar1 = *(ulong *)((long)param_1 + lVar8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010bfd45e0();
        _objc_release(uVar1);
        uVar4 = *(ulong *)((long)param_1 + lVar8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010bfd4a00();
        _objc_release(uVar4);
        if ((uVar3 & 1) == 0) {
          param_1 = *(undefined ***)((long)param_1 + (long)_DAT_112710244);
          func_0x00010c269d40(param_1);
          _objc_retainAutoreleasedReturnValue();
          if ((uVar1 & 1) != 0) goto LAB_104cab240;
          func_0x00010c135020(param_1);
          goto LAB_104cab248;
        }
      }
    }
    else {
      if (lVar8 == 6) {
        uVar6 = *(undefined8 *)((long)param_1 + (long)_DAT_11271025c);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06ea00();
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)((long)param_1 + (long)_DAT_112710258);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        func_0x00010c1fafc0(uVar6);
        func_0x00010c167360(uVar6);
        _objc_release(uVar6);
      }
      else {
        if (lVar8 != 7) goto LAB_104cab24c;
        uVar6 = *(undefined8 *)((long)param_1 + (long)_DAT_11271025c);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07db80();
        _objc_release(uVar6);
        uVar6 = *(undefined8 *)((long)param_1 + (long)_DAT_112710258);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c194f60();
      }
      _objc_release(uVar6);
      func_0x00010c267f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128b60();
LAB_104cab248:
      _objc_release(param_1);
    }
  }
LAB_104cab24c:
  func_0x00010bf6e880(param_3);
LAB_104cab25c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cab2b8; end: 104cab2cf;  */

void FUN_104cab2b8(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c139c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_resetView_11262c140);
    return;
  }
  return;
}



/* Entry: 104cab2d0; end: 104cab3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cab2d0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (lVar1 = param_2, func_0x00010bf10fa0(), lVar1 != 2)) {
    lVar1 = param_2;
    func_0x00010bf10fa0();
    if (lVar1 == 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_104cab3b0;
      puStack_40 = &UNK_110842e18;
      lStack_38 = param_1;
      func_0x000100162d98("APPSTORE",&puStack_58);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112710244);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e9980();
      _objc_release(uVar2);
    }
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 104cab3b0; end: 104cab3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cab3b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271024c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cab3f4; end: 104cab42b; -[SCPermissionsViewController directToPhoneSettings] */

void FUN_104cab3f4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cab42c; end: 104cab43b; -[SCPermissionsViewController getTitle] */

void FUN_104cab42c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad498;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dad498,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104cab43c; end: 104cab447; -[SCPermissionsViewController presentPermissionsAlertDialog:] */

void FUN_104cab43c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentViewController_animated_c_112621588,param_3,1,0);
  return;
}



/* Entry: 104cab448; end: 104cab467; -[SCPermissionsViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cab448(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112710264);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cab468; end: 104cab47b; -[SCPermissionsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cab468(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112710264,param_3);
  return;
}



/* Entry: 104cab47c; end: 104cab48b; -[SCPermissionsViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cab47c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112710268);
}



/* Entry: 104cab48c; end: 104cab4cb; -[SCPermissionsViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cab48c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112710268;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cab4cc; end: 104cab4db; -[SCPermissionsViewController screenWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cab4cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112710238);
}



/* Entry: 104cab4dc; end: 104cab4eb; -[SCPermissionsViewController setScreenWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cab4dc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112710238) = param_1;
  return;
}



/* Entry: 104cab4ec; end: 104cab5c7; -[SCPermissionsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cab4ec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710268,0);
  _objc_destroyWeak(param_1 + _DAT_112710264);
  _objc_storeStrong(param_1 + _DAT_112710260,0);
  _objc_storeStrong(param_1 + _DAT_11271025c,0);
  _objc_storeStrong(param_1 + _DAT_112710258,0);
  _objc_storeStrong(param_1 + _DAT_112710254,0);
  _objc_storeStrong(param_1 + _DAT_112710250,0);
  _objc_storeStrong(param_1 + _DAT_11271024c,0);
  _objc_storeStrong(param_1 + _DAT_112710248,0);
  _objc_storeStrong(param_1 + _DAT_112710244,0);
  _objc_storeStrong(param_1 + _DAT_112710240,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271023c,0);
  return;
}



/* Entry: 104cab5c8; end: 104cabaeb; -[SCPermissionSettingsTableViewCell initWithReuseIdentifier:userSession:contactPermissionManager:captureDeviceAuthorizationChecker:locationPermissionsManager:permissionsController:notificationOSSettingsRetriever:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104cab5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126e39e8;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithStyle_reuseIdentifier__1125f1528,1,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar7 = (long)_DAT_11271026c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112710270;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112710274;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_6;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112710278;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11271027c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_8;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_112710280;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar4);
    func_0x00010c1faee0(puVar1);
    func_0x00010c1fbac0(puVar1);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar5);
    func_0x00010c17d4c0(puVar1);
    puVar5 = puVar1;
    func_0x00010c0f9d80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240(puVar1);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c2711a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c2711a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c0f9ba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dab20(puVar1);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c0f9b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c0f9b80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c0f9b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198de0(puVar1);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf9cc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bf9cc60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010c0f9ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112710284);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112710284) = puVar5;
    _objc_release(uVar2);
    puVar5 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 104cabaec; end: 104cabca3;  */

void FUN_104cabaec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cabca4; end: 104cac1d7;  */

void FUN_104cabca4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c279240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  (**(code **)(lVar6 + 0x10))(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar9 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cac1d8; end: 104cac2f7; -[SCPermissionSettingsTableViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cac1d8(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = param_4;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf9cc60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bf9cc60(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb3a80();
  _objc_retainAutoreleasedReturnValue();
  dVar5 = 220.0;
  func_0x00010c14dd20(param_3 + -32.0,0x406b800000000000,lVar2);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  dVar5 = dVar5 + 39.0;
  dVar6 = dVar5 + 2.0;
  func_0x00010bf20c00(param_4);
  _CGRectGetWidth();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4030000000000000,dVar6,dVar5,0x4028000000000000,
             *(undefined8 *)(param_4 + _DAT_112710284),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 104cac2f8; end: 104cac33f; -[SCPermissionSettingsTableViewCell prepareForReuse] */

void FUN_104cac2f8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e39e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c138040(param_1);
  return;
}



/* Entry: 104cac340; end: 104cac3bf; -[SCPermissionSettingsTableViewCell setPermissionType:] */

void FUN_104cac340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c1dabe0();
  func_0x00010c1dab40(param_1,param_2,param_3);
  func_0x00010bf472e0(param_1,param_2,param_3);
  puVar1 = PTR_PTR_1126aed50;
  func_0x00010bfc8ba0(PTR_PTR_1126aed50,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9cc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cac3c0; end: 104cac3d3; -[SCPermissionSettingsTableViewCell setPresentationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cac3c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112710288,param_3);
  return;
}



/* Entry: 104cac3d4; end: 104cac46b; -[SCPermissionSettingsTableViewCell permissionActionTextLabel] */

void FUN_104cac3d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a7f60(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cac46c; end: 104cac4f7; -[SCPermissionSettingsTableViewCell permissionTitleLabel] */

void FUN_104cac46c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402e000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cac4f8; end: 104cac50f; -[SCPermissionSettingsTableViewCell configurePermissionActionTextLabel:] */

void FUN_104cac4f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00010c138050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetActionTextLabel_11262ba30);
    return;
  }
  if (param_3 == 7) {
                    /* WARNING: Could not recover jumptable at 0x00010bea63f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setPermissionActionTextLabelFor_1125872a0)
    ;
    return;
  }
  return;
}



/* Entry: 104cac510; end: 104cac54f; -[SCPermissionSettingsTableViewCell resetActionTextLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cac510(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112710284;
  func_0x00010c12c9c0(*(undefined8 *)(param_1 + lVar1),param_2,
                      *(undefined8 *)(param_1 + _DAT_11271028c));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 104cac550; end: 104cac813; -[SCPermissionSettingsTableViewCell setPermissionTitleText:] */

void FUN_104cac550(undefined **param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  ppuVar3 = param_1;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110dad538;
      }
      else {
        if (param_3 != 1) {
          return;
        }
        ppuVar4 = &PTR____CFConstantStringClassReference_110dad4b8;
      }
    }
    else if (param_3 == 2) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dad4d8;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110dad4f8;
    }
LAB_104cac6e0:
    ppuVar1 = ppuVar4;
    func_0x00010bcbeaa8(ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
LAB_104cac73c:
    func_0x00010c160fc0();
    _objc_release(ppuVar3);
  }
  else {
    if (5 < param_3) {
      if (param_3 != 6) {
        if (param_3 != 7) {
          return;
        }
        FUN_104cad120();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_1;
        func_0x00010c2711a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20();
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        ppuVar4 = param_1;
        func_0x00010c2711a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c160fc0();
        _objc_release(ppuVar4);
        FUN_104cad120();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104cac75c;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110dad598;
      ppuVar1 = ppuVar4;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad598,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_1;
      func_0x00010c2711a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20();
      _objc_release(ppuVar2);
      _objc_release(ppuVar1);
      func_0x00010c2711a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104cac73c;
    }
    if (param_3 == 4) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dad518;
      goto LAB_104cac6e0;
    }
    if (param_3 != 5) {
      return;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110dad558;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad558,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_1;
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar3 = param_1;
    func_0x00010c2711a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dad578;
    func_0x00010c160fc0();
    _objc_release(ppuVar3);
  }
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
LAB_104cac75c:
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 104cac814; end: 104cac8af; -[SCPermissionSettingsTableViewCell permissionExplanationLabel] */

void FUN_104cac814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c1cfce0();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c23d620(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cac8b0; end: 104cac98b; +[SCPermissionSettingsTableViewCell getPermissionExplanationText:] */

void FUN_104cac8b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dad678;
      }
      else {
        if (param_3 != 1) goto LAB_104cac984;
        ppuVar1 = &PTR____CFConstantStringClassReference_110dad5f8;
      }
    }
    else if (param_3 == 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad618;
    }
    else {
      if (param_3 != 3) goto LAB_104cac984;
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad638;
    }
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad658;
    }
    else {
      if (param_3 != 5) goto LAB_104cac984;
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad698;
    }
  }
  else {
    if (param_3 != 6) {
      if (param_3 == 7) {
        func_0x000104cad138(&PTR____CFConstantStringClassReference_110daafd8);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104cac984;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad6b8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
LAB_104cac984:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cac98c; end: 104cac9ab; +[SCPermissionSettingsTableViewCell additionalHeightForActionText:] */

undefined8 FUN_104cac98c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 8) {
    return *(undefined8 *)(&UNK_10dd8ad48 + param_3 * 8);
  }
  return 0;
}



/* Entry: 104cac9ac; end: 104caca47; -[SCPermissionSettingsTableViewCell permissionIndicatorLabel] */

void FUN_104cac9ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x402a000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3ff0000000000000,0x3fc1111111111111,0x3fc1111111111111,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104caca48; end: 104cacd33; -[SCPermissionSettingsTableViewCell setPermissionIndicatorText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104caca48(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  lVar2 = param_1;
  func_0x00010c0f9b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c0f9b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar2);
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        uVar3 = *(ulong *)(param_1 + _DAT_112710278);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c076e40();
      }
      else {
        if (param_3 != 1) {
          return;
        }
        uVar3 = *(ulong *)(param_1 + _DAT_112710274);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c083180();
      }
LAB_104cacba4:
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
    else if (param_3 == 2) {
      puVar6 = PTR_PTR_1126aed60;
      func_0x00010c15fac0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c1238e0();
      _objc_release(puVar6);
      if (puVar7 == (undefined *)0x67726e74) {
        return;
      }
    }
    else {
      if (param_3 != 3) {
        return;
      }
      uVar4 = *(ulong *)(param_1 + _DAT_112710280);
      func_0x00010c079e00();
      if ((uVar4 & 1) == 0) {
        return;
      }
    }
  }
  else {
    if (5 < param_3) {
      if (param_3 == 6) {
        uVar5 = *(undefined8 *)(param_1 + _DAT_11271027c);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010c06ea00();
        iVar1 = (int)uVar8;
      }
      else {
        if (param_3 != 7) {
          return;
        }
        uVar5 = *(undefined8 *)(param_1 + _DAT_11271027c);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar5;
        func_0x00010c07db80();
        iVar1 = (int)uVar8;
      }
      _objc_release(uVar5);
      ppuVar9 = &PTR____CFConstantStringClassReference_110dad6d8;
      if (iVar1 == 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110dad718;
      }
      ppuVar10 = &PTR____CFConstantStringClassReference_110dad6f8;
      if (iVar1 == 0) {
        ppuVar10 = &PTR____CFConstantStringClassReference_110dad738;
      }
      goto LAB_104cacc80;
    }
    if (param_3 != 4) {
      if (param_3 != 5) {
        return;
      }
      uVar3 = *(ulong *)(param_1 + _DAT_112710270);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd45e0();
      goto LAB_104cacba4;
    }
    puVar6 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar6 == (undefined *)0x3) {
      return;
    }
  }
  ppuVar9 = &PTR____CFConstantStringClassReference_110dad6d8;
  ppuVar10 = &PTR____CFConstantStringClassReference_110dad6f8;
LAB_104cacc80:
  func_0x00010bcbeaa8(ppuVar9,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0f9b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(lVar2);
  _objc_release(ppuVar9);
  lVar2 = param_1;
  func_0x00010c0f9b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar2);
  func_0x00010bcbeaa8(ppuVar10,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
  return;
}



/* Entry: 104cacd34; end: 104cacddf; -[SCPermissionSettingsTableViewCell _setPermissionActionTextLabelForShareIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cacd34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112710284;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c1a7f60(uVar1,param_2,0);
  func_0x000104cad150();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(uVar1);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar5));
  lVar4 = (long)_DAT_11271028c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar5),PTR_s_addGestureRecognizer__11259bdb8,lVar3);
  return;
}



/* Entry: 104cacde0; end: 104cacf43; -[SCPermissionSettingsTableViewCell _handleTapOnShareIntentLearnMore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cacde0(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126aed70;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  uVar7 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  FUN_104cad120();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000104cad168();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  param_1 = param_1 + _DAT_112710288;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10d800();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0)
  ;
  return;
}



/* Entry: 104cacf44; end: 104cacf53;  */

void FUN_104cacf44(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104cacf54; end: 104cacf63; -[SCPermissionSettingsTableViewCell title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cacf54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112710290);
}



/* Entry: 104cacf64; end: 104cacfa3; -[SCPermissionSettingsTableViewCell setTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cacf64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112710290;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cacfa4; end: 104cacfb3; -[SCPermissionSettingsTableViewCell explanation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cacfa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112710294);
}



/* Entry: 104cacfb4; end: 104cacff3; -[SCPermissionSettingsTableViewCell setExplanation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cacfb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112710294;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cacff4; end: 104cad003; -[SCPermissionSettingsTableViewCell permissionIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cacff4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112710298);
}



/* Entry: 104cad004; end: 104cad043; -[SCPermissionSettingsTableViewCell setPermissionIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cad004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112710298;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cad044; end: 104cad11f; -[SCPermissionSettingsTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cad044(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710298,0);
  _objc_storeStrong(param_1 + _DAT_112710294,0);
  _objc_storeStrong(param_1 + _DAT_112710290,0);
  _objc_storeStrong(param_1 + _DAT_112710280,0);
  _objc_storeStrong(param_1 + _DAT_11271027c,0);
  _objc_storeStrong(param_1 + _DAT_112710278,0);
  _objc_storeStrong(param_1 + _DAT_112710274,0);
  _objc_storeStrong(param_1 + _DAT_112710270,0);
  _objc_destroyWeak(param_1 + _DAT_112710288);
  _objc_storeStrong(param_1 + _DAT_11271028c,0);
  _objc_storeStrong(param_1 + _DAT_112710284,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271026c,0);
  return;
}



/* Entry: 104cad120; end: 104cad17f;  */

void FUN_104cad120(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad778;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad778,
                      &PTR____CFConstantStringClassReference_110dad798,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104cad180; end: 104cad1f3; -[SCManagePermissionSettingsServices initWithPermissionsController:] */

undefined1 * FUN_104cad180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e39f0;
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



/* Entry: 104cad1f4; end: 104cad1fb; -[SCManagePermissionSettingsServices permissionsController] */

undefined8 FUN_104cad1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104cad1fc; end: 104cad207; -[SCManagePermissionSettingsServices .cxx_destruct] */

void FUN_104cad1fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cad208; end: 104cad303; -[SCTentativePhoneVerificationBillboardFHPUIConfigEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cad208(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126aed80;
  _objc_alloc(PTR_PTR_1126aed80);
  lVar2 = param_1 + _DAT_1127102a0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c26b380();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127102a4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf64080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051180(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_1127102a8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cad304; end: 104cad347; -[SCTentativePhoneVerificationBillboardFHPUIConfigEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cad304(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127102a4);
  _objc_destroyWeak(param_1 + _DAT_1127102a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127102a8);
  return;
}



/* Entry: 104cad348; end: 104cad3eb; -[SCTentativePhoneVerificationBillboardFHPUIConfigProvider initWithTentativePhoneNumberProvider:memoriesAPIDataProvider:] */

undefined1 *
FUN_104cad348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e39f8;
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



/* Entry: 104cad3ec; end: 104cad3fb; -[SCTentativePhoneVerificationBillboardFHPUIConfigProvider canHandleCampaignId:] */

void FUN_104cad3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110dad818);
  return;
}



/* Entry: 104cad3fc; end: 104cad51f; -[SCTentativePhoneVerificationBillboardFHPUIConfigProvider configs] */

void FUN_104cad3fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1;
  func_0x00010becc3a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar3 = PTR_PTR_1126aed88;
  func_0x00010c26a560(PTR_PTR_1126aed88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaaf60(uVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104cad520;
  puStack_60 = &UNK_110847280;
  lStack_58 = lVar1;
  lStack_50 = param_1;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(lVar1);
  func_0x00010c297260(uVar4,param_2,&puStack_78,0);
  _objc_release(uVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bfbc3e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(lStack_58);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104cad520; end: 104cad637;  */

void FUN_104cad520(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    func_0x00010c2827c0(param_2);
  }
  puVar1 = PTR_PTR_1126aed90;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bec8b60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc2e0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    func_0x00010be18d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = puVar1;
    FUN_104cad824();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 104cad638; end: 104cad6b7; -[SCTentativePhoneVerificationBillboardFHPUIConfigProvider _title] */

void FUN_104cad638(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010be18d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  FUN_104cad824();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cad6b8; end: 104cad73f; -[SCTentativePhoneVerificationBillboardFHPUIConfigProvider _subtitleWithMemoryCount:] */

void FUN_104cad6b8(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 < 10) {
    func_0x000104cad854();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000104cad83c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104cad740; end: 104cad7f3; -[SCTentativePhoneVerificationBillboardFHPUIConfigProvider _formattedTentativePhoneNumber] */

void FUN_104cad740(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126aed98;
  uVar1 = uVar2;
  func_0x00010c0cf3c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fafc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5d40(puVar4,param_2,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104cad7f4; end: 104cad823; -[SCTentativePhoneVerificationBillboardFHPUIConfigProvider .cxx_destruct] */

void FUN_104cad7f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cad824; end: 104cad86b;  */

void FUN_104cad824(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad0b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dad0b8,
                      &PTR____CFConstantStringClassReference_110dad838,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104cad86c; end: 104cad8df; -[SCTentativePhoneVerificationBillboardSignalProvider initWithTentativePhoneNumberProvider:] */

undefined1 * FUN_104cad86c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3a00;
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



/* Entry: 104cad8e0; end: 104cad8e7; -[SCTentativePhoneVerificationBillboardSignalProvider preCheckSource] */

undefined8 FUN_104cad8e0(void)

{
  return 0x14;
}



/* Entry: 104cad8e8; end: 104cad9a7; -[SCTentativePhoneVerificationBillboardSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_104cad8e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae558;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar4 != 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104cad9a8; end: 104cad9b3; -[SCTentativePhoneVerificationBillboardSignalProvider .cxx_destruct] */

void FUN_104cad9a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cad9b4; end: 104cada73; -[SCTentativePhoneVerificationBillboardSignalProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cad9b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aeda0;
  _objc_alloc(PTR_PTR_1126aeda0);
  lVar2 = param_1 + _DAT_1127102b8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c26b380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051160(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_1127102bc;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cada74; end: 104cadaab; -[SCTentativePhoneVerificationBillboardSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cada74(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127102b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127102bc);
  return;
}



/* Entry: 104cadaac; end: 104cae097; -[SCIdentitySettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cadaac(long param_1,undefined8 param_2)

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
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126aeda8;
  _objc_alloc();
  lVar2 = param_1;
  FUN_104cae098(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + _DAT_1127102f4);
  }
  _objc_retain(uVar12);
  func_0x00010c05c540(puVar1,param_2,lVar2,uVar12);
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127102c0);
  *(undefined **)(param_1 + _DAT_1127102c0) = puVar1;
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aedb0;
  _objc_alloc();
  lVar3 = param_1;
  FUN_104cae098(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + _DAT_1127102f8);
  _objc_retain(uVar10);
  lVar2 = param_1 + _DAT_1127102fc;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c05c560(puVar1,param_2,lVar3,uVar10,lVar2);
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127102c4);
  *(undefined **)(param_1 + _DAT_1127102c4) = puVar1;
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(lVar2);
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126aedb8;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112710300);
  _objc_retain(uVar10);
  lVar2 = param_1 + _DAT_112710304;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0345c0(puVar1,param_2,uVar10,lVar2);
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127102c8);
  *(undefined **)(param_1 + _DAT_1127102c8) = puVar1;
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126aedc0;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112710308);
  _objc_retain(uVar10);
  lVar2 = param_1 + _DAT_1127102e0;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127102e8;
  _objc_loadWeakRetained(lVar3);
  lVar5 = lVar3;
  func_0x00010c293920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_1127102ec;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127102d4;
  lVar8 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062d60(puVar1,param_2,uVar10,lVar4,lVar5,lVar7,lVar9);
  uVar12 = *(undefined8 *)(param_1 + _DAT_1127102cc);
  *(undefined **)(param_1 + _DAT_1127102cc) = puVar1;
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x000104cae0bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x000104cae0bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x000104cae0bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x000104cae0bc(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_1127102f0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf534e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar3);
  lVar3 = lVar8;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0720c0();
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  if ((int)lVar6 != 0) {
    puVar1 = PTR_PTR_1126aedc8;
    _objc_alloc();
    uVar10 = *(undefined8 *)(param_1 + _DAT_112710308);
    _objc_retain(uVar10);
    func_0x00010c062d00(puVar1,param_2,uVar10);
    uVar12 = *(undefined8 *)(param_1 + _DAT_1127102d0);
    *(undefined **)(param_1 + _DAT_1127102d0) = puVar1;
    _objc_release(uVar12);
    _objc_release(uVar10);
    lVar2 = param_1 + _DAT_1127102dc;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar2 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  _objc_release(lVar2);
  _objc_release(lVar11);
  if ((int)lVar3 != 0) {
    puVar1 = PTR_PTR_1126aedd0;
    _objc_alloc();
    uVar10 = *(undefined8 *)(param_1 + _DAT_112710308);
    _objc_retain(uVar10);
    func_0x00010c062d00(puVar1,param_2,uVar10);
    uVar12 = *(undefined8 *)(param_1 + _DAT_1127102d8);
    *(undefined **)(param_1 + _DAT_1127102d8) = puVar1;
    _objc_release(uVar12);
    _objc_release(uVar10);
    param_1 = param_1 + _DAT_1127102dc;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c1018e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c125b60();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104cae098; end: 104cae0df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cae098(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127102e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cae0e0; end: 104cae11b; -[SCIdentitySettingsEntryPoint end] */

void FUN_104cae0e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e3a08;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cae11c; end: 104cae247; -[SCIdentitySettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cae11c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710308,0);
  _objc_destroyWeak(param_1 + _DAT_112710304);
  _objc_storeStrong(param_1 + _DAT_112710300,0);
  _objc_destroyWeak(param_1 + _DAT_1127102fc);
  _objc_storeStrong(param_1 + _DAT_1127102f8,0);
  _objc_storeStrong(param_1 + _DAT_1127102f4,0);
  _objc_destroyWeak(param_1 + _DAT_1127102f0);
  _objc_destroyWeak(param_1 + _DAT_1127102d4);
  _objc_destroyWeak(param_1 + _DAT_1127102ec);
  _objc_destroyWeak(param_1 + _DAT_1127102e8);
  _objc_destroyWeak(param_1 + _DAT_1127102e4);
  _objc_destroyWeak(param_1 + _DAT_1127102e0);
  _objc_destroyWeak(param_1 + _DAT_1127102dc);
  _objc_storeStrong(param_1 + _DAT_1127102d8,0);
  _objc_storeStrong(param_1 + _DAT_1127102d0,0);
  _objc_storeStrong(param_1 + _DAT_1127102cc,0);
  _objc_storeStrong(param_1 + _DAT_1127102c8,0);
  _objc_storeStrong(param_1 + _DAT_1127102c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127102c0,0);
  return;
}



/* Entry: 104cae248; end: 104cae2bb; -[SCAUTransparencySettingsRowProvider initWithWebBrowsingScopeExposer:] */

undefined1 * FUN_104cae248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3a10;
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



/* Entry: 104cae2bc; end: 104cae2cb; -[SCAUTransparencySettingsRowProvider sectionRow] */

void FUN_104cae2bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfee170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_informationWithRow__1125d9220,4);
  return;
}



/* Entry: 104cae2cc; end: 104cae3bb; -[SCAUTransparencySettingsRowProvider rowViewModel] */

void FUN_104cae2cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR_PTR_1126ae750;
  puVar5 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104cb038c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104cb038c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1,param_2,puVar2,0,0,0,1,&PTR____CFConstantStringClassReference_110dad8f8
                      ,puVar3);
  func_0x00010c0ec800(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104cae3bc; end: 104cae517; -[SCAUTransparencySettingsRowProvider handleWithContext:] */

void FUN_104cae3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_3);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&PTR___NSConcreteGlobalBlock_1108472d0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar5 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf22ba0(puVar3,param_2,puVar2,puVar1,uVar5,param_1,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cae518; end: 104cae583;  */

void FUN_104cae518(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c520(param_2);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104cae584; end: 104cae5a3; -[SCAUTransparencySettingsRowProvider webBrowserDidDismiss:] */

void FUN_104cae584(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cae5a4; end: 104cae5af; -[SCAUTransparencySettingsRowProvider .cxx_destruct] */

void FUN_104cae5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cae5b0; end: 104cae623; -[SCColoradoBiometricsSettingsRowProvider initWithWebBrowsingScopeExposer:] */

undefined1 * FUN_104cae5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3a18;
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



/* Entry: 104cae624; end: 104cae633; -[SCColoradoBiometricsSettingsRowProvider sectionRow] */

void FUN_104cae624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a4c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_whoCanWithRow__112686d28,0x11);
  return;
}



/* Entry: 104cae634; end: 104cae723; -[SCColoradoBiometricsSettingsRowProvider rowViewModel] */

void FUN_104cae634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar4 = PTR_PTR_1126ae750;
  puVar5 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000104cb03a4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104cb03a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar1,param_2,puVar2,0,0,0,1,&PTR____CFConstantStringClassReference_110dad938
                      ,puVar3);
  func_0x00010c0ec800(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104cae724; end: 104cae87f; -[SCColoradoBiometricsSettingsRowProvider handleWithContext:] */

void FUN_104cae724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae630;
  _objc_retain(param_3);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar3 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3,param_2,&PTR___NSConcreteGlobalBlock_1108472f0,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar5 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf22ba0(puVar3,param_2,puVar2,puVar1,uVar5,param_1,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cae880; end: 104cae8eb;  */

void FUN_104cae880(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c520(param_2);
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104cae8ec; end: 104cae90b; -[SCColoradoBiometricsSettingsRowProvider webBrowserDidDismiss:] */

void FUN_104cae8ec(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cae90c; end: 104cae917; -[SCColoradoBiometricsSettingsRowProvider .cxx_destruct] */

void FUN_104cae90c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104cae918; end: 104caea3b; -[SCDeleteAccountSettingsRowProvider initWithWebBrowsingScopeExposer:grapheneRegistry:userSessionValidator:snapTokenProvider:circumstanceEngine:] */

undefined1 *
FUN_104cae918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e3a20;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104caea3c; end: 104caea4b; -[SCDeleteAccountSettingsRowProvider sectionRow] */

void FUN_104caea3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aeae0,PTR_s_accountWithRow__112598f58,0x1d);
  return;
}



/* Entry: 104caea4c; end: 104caeb57; -[SCDeleteAccountSettingsRowProvider rowViewModel] */

void FUN_104caea4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dad9b8,0,0);
  puVar5 = PTR_PTR_1126ae750;
  puVar6 = PTR_PTR_1126ae6b8;
  puVar2 = PTR_PTR_1126aeaf0;
  _objc_alloc();
  puVar3 = puVar2;
  func_0x000104cb0374();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000104cb0374();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ba0(puVar2,param_2,puVar3,0,0,uVar1 & 0xffffffff,1,
                      &PTR____CFConstantStringClassReference_110dad9d8,puVar4);
  func_0x00010c0ec800(puVar5,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104caeb58; end: 104caed5f; -[SCDeleteAccountSettingsRowProvider handleWithContext:] */

void FUN_104caeb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f440();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126ae560;
  _objc_opt_new(PTR_PTR_1126ae560);
  puVar4 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_68;
  _objc_copyWeak(puVar5,auStack_58);
  uStack_60 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae638;
  _objc_opt_new(PTR_PTR_1126ae638);
  uVar6 = param_3;
  func_0x00010c27ece0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bf22ba0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar4);
  func_0x00010c0a58c0(param_1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 104caed60; end: 104caef57;  */

void FUN_104caed60(long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((lVar1 != 0) && (param_2 != (undefined *)0x0)) && (param_3 == 0)) {
    puVar2 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_loadURLRequest_withCookies__112604b68);
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09c520(param_2);
    }
    else if (*(char *)(param_1 + 0x28) == '\x01') {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_2);
      _objc_retain(param_2);
      puVar2 = PTR___dispatch_main_q_11034be20;
      func_0x00010bfa48e0(uVar3);
      _objc_release(puVar2);
      _objc_release(uVar3);
      _objc_release(param_2);
      puVar4 = param_2;
    }
    else {
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
      func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010bdf13c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09c560(param_2);
      _objc_release(lVar5);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104caef58; end: 104caf087;  */

void FUN_104caef58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_2);
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  func_0x00010c137160(PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4fc0();
  func_0x00010befc820(puVar2);
  _objc_release(param_2);
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4f00(puVar2);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bdf13c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c560(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


