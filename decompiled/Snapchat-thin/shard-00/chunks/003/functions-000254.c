/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005b128c; end: 1005b12db;  */

void FUN_1005b128c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_1126132e8);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4d4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005b12dc; end: 1005b136f; -[SIGNavigationBarButton navigationBarButtonItem:didChangeAppThemeColor:] */

/* WARNING: Possible PIC construction at 0x0001005b132c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005b1330) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b12dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794fe4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794fc4);
  func_0x000107c3dea8(uVar1);
  func_0x000107c61180();
  func_0x000107c59cb4(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005b1370; end: 1005b13af; -[SIGNavigationBarButtonImageView setThemeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795050);
  *(undefined8 *)(param_1 + _DAT_112795050) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be940f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetTintColor_1125829d8);
  return;
}



/* Entry: 1005b13b0; end: 1005b1443; -[SIGNavigationBarButtonItem setAppThemeHighlightColor:] */

void FUN_1005b13b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1005b1444;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005b1444; end: 1005b1493;  */

void FUN_1005b1444(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_1126132f0);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4d8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005b1494; end: 1005b152f; -[SIGNavigationBarButton navigationBarButtonItem:didChangeAppThemeHighlightColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1494(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794fe4);
  lVar3 = (long)_DAT_112794fc4;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3deac(uVar1);
  func_0x000107c61180();
  func_0x000107c55154(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112794ff4);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3deac(uVar1);
  func_0x000107c61180();
  func_0x000107c55154(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c28b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateTitleLabelStyleIfNeeded_1126806a8);
  return;
}



/* Entry: 1005b1530; end: 1005b156f; -[SIGNavigationBarButtonImageView setHighlightThemeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795054);
  *(undefined8 *)(param_1 + _DAT_112795054) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be940f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetTintColor_1125829d8);
  return;
}



/* Entry: 1005b1570; end: 1005b1603; -[SIGNavigationBarButtonItem setAppThemeBadgeImage:] */

void FUN_1005b1570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1005b1604;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005b1604; end: 1005b1653;  */

void FUN_1005b1604(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_1126132d8);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4cc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005b1654; end: 1005b1657; -[SIGNavigationBarButton navigationBarButtonItem:didChangeAppThemeBadgeImage:] */

void FUN_1005b1654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be92430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetBadgeView_1125822a8);
  return;
}



/* Entry: 1005b1658; end: 1005b1723; -[SIGNavigationBarButton _resetBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1658(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = (long)_DAT_112794fc4;
  lVar2 = *(long *)(param_1 + lVar5);
  func_0x000107c3e620();
  if (lVar2 != 0) {
    func_0x000107c3c628(param_1);
    lVar6 = (long)_DAT_112794ff8;
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    lVar2 = param_1;
    func_0x000107c3ae7c(param_1);
    func_0x000107c61180();
    func_0x000107c59e10(uVar3);
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c3de9c(uVar3);
    func_0x000107c61180();
    func_0x000107c55258(uVar4);
    func_0x000107c61170(uVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x000107c44e80();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc4950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__activateBadgeViewConstraintsIfN_11254ebf0);
      return;
    }
  }
  return;
}



/* Entry: 1005b1724; end: 1005b17b7; -[SIGNavigationBarButtonItem setAppThemeBadgeColor:] */

void FUN_1005b1724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1005b17b8;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005b17b8; end: 1005b1807;  */

void FUN_1005b17b8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_1126132d0);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4c8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005b1808; end: 1005b184b; -[SIGNavigationBarButton navigationBarButtonItem:didChangeAppThemeBadgeColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794ff8);
  func_0x000107c3ae7c();
  func_0x000107c61180();
  func_0x000107c59e10(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1005b184c; end: 1005b18df; -[SIGNavigationBarButtonItem setAppThemeBadgeTextColor:] */

void FUN_1005b184c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1005b18e0;
  puStack_40 = &UNK_110d62ca0;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1005b18e0; end: 1005b192f;  */

void FUN_1005b18e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = param_2;
  func_0x000107c61164(param_2,PTR_s_navigationBarButtonItem_didChang_1126132e0);
  if ((uVar1 & 1) != 0) {
    func_0x000107c4d4d0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1005b1930; end: 1005b1973; -[SIGNavigationBarButton navigationBarButtonItem:didChangeAppThemeBadgeTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1930(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3ae90();
  func_0x000107c61180();
  func_0x000107c52bb4(*(undefined8 *)(param_1 + _DAT_112794ff8),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1005b1974; end: 1005b1a03; -[SIGNavigationBarButton _badgeTextColorToUse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1974(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112794fc4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x000107c3dea0();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    uVar2 = 0xffffffff800000d5;
    if (*(char *)(param_1 + _DAT_112794ffc) == '\0') {
      uVar2 = 0xd5;
    }
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
    func_0x000107c61180();
  }
  else {
    func_0x000107c3dea0(*(undefined8 *)(param_1 + lVar3));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005b1a04; end: 1005b1a0b; -[SIGNavigationBarButtonItem appThemeBadgeTextColor] */

undefined8 FUN_1005b1a04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1005b1a0c; end: 1005b1a13; -[SCActiveUserNavigationWorkflow setPreparedNavForForeground:] */

void FUN_1005b1a0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb9) = param_3;
  return;
}



/* Entry: 1005b1a14; end: 1005b1ae3; -[SCActiveUserNavigationWorkflow _resolvedPostLoginLaunchTab] */

long FUN_1005b1a14(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x000107c3de54();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c4162c();
  if (4 < lVar1 - 1U) {
    lVar1 = 0;
  }
  lVar3 = lVar2;
  func_0x000107c3fd44();
  if (4 < lVar3 - 1U) {
    lVar3 = lVar1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c41050();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c4a564();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  if ((int)uVar6 == 0) {
    lVar1 = lVar3;
  }
  func_0x000107c61170(lVar2);
  return lVar1;
}



/* Entry: 1005b1ae4; end: 1005b1aeb; -[SCPlusAppStartServices appStartService] */

undefined8 FUN_1005b1ae4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005b1aec; end: 1005b1d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1aec(long param_1,undefined8 param_2)

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
  undefined *puVar14;
  long lVar15;
  
  puVar14 = PTR_PTR_1126d1948;
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  lVar2 = lVar1;
  FUN_1005b1d58();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4ec80();
  func_0x000107c61180();
  lVar4 = param_1 + 0x20;
  func_0x000107c61148();
  lVar5 = lVar4;
  func_0x0001005b1d7c();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar7 = param_1 + 0x20;
  func_0x000107c61148();
  lVar8 = lVar7;
  func_0x0001005b1da0();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c4ab84();
  func_0x000107c61180();
  lVar15 = param_1 + 0x20;
  func_0x000107c61148(lVar15);
  lVar10 = lVar15;
  func_0x0001005b1dc4();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5bca0();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c3f0ec();
  func_0x000107c61180();
  func_0x000107c5c5b8(puVar14,param_2,lVar3,lVar6,lVar9,lVar13);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar14 = PTR_PTR_1126d1950;
  func_0x000107c610f4(PTR_PTR_1126d1950);
  lVar1 = param_1 + 0x20;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  FUN_1005b1d58();
  func_0x000107c61180();
  lVar7 = lVar4;
  func_0x000107c4ec80();
  func_0x000107c61180();
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_11275b3bc;
    func_0x000107c61148(lVar15);
  }
  lVar2 = lVar15;
  func_0x000107c3fa04(lVar15);
  func_0x000107c61180();
  func_0x000107c492dc(puVar14,param_2,lVar7,lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1005b1d58; end: 1005b1de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b1d58(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11275b3b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005b1de8; end: 1005b1f17; +[SCPlusAppStartServiceUpdaterImpl syncToPreferencesIfNeeded:featureSettingsService:systemLaunchTabCache:cameraHardwareConfiguration:] */

/* WARNING: Possible PIC construction at 0x0001005b1e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b1e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b1ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b1ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b1ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005b1eec) */
/* WARNING: Removing unreachable block (ram,0x0001005b1e9c) */
/* WARNING: Removing unreachable block (ram,0x0001005b1edc) */
/* WARNING: Removing unreachable block (ram,0x0001005b1ea8) */
/* WARNING: Removing unreachable block (ram,0x0001005b1e64) */
/* WARNING: Removing unreachable block (ram,0x0001005b1e70) */
/* WARNING: Removing unreachable block (ram,0x0001005b1efc) */

void FUN_1005b1de8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  if ((param_3 != 0) && (param_4 != 0)) {
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    func_0x000107c4ea48();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005b1f18; end: 1005b1f7b; -[SCPreferences plusDefaultTab] */

void FUN_1005b1f18(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110e7b898);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005b1f7c; end: 1005b201f; -[SCPlusAppStartServiceImpl initWithUserPreferences:circumstanceEngine:] */

undefined1 *
FUN_1005b1f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f5ef8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005b2020; end: 1005b207f; -[SCPlusAppStartServiceImpl defaultTab] */

undefined8 FUN_1005b2020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4ea48();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c49820();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 1005b2080; end: 1005b2103; -[SCPlusAppStartServiceImpl coldStartExperimentTab] */

void FUN_1005b2080(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3de48(uVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d1a48;
  func_0x000107c400a0(PTR_PTR_1126d1a48);
  func_0x000107c61180();
  func_0x000107c4163c(PTR_PTR_1126d1a48);
  uVar3 = uVar1;
  func_0x000107c4980c(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c102110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d1a48,PTR_s_plusDefaultTabForConfigValue__11261e260,uVar3);
  return;
}



/* Entry: 1005b2104; end: 1005b212f; +[SCColdStartTabExperiment configKey] */

void FUN_1005b2104(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1e9180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005b2130; end: 1005b2137; +[SCColdStartTabExperiment defaultValue] */

undefined8 FUN_1005b2130(void)

{
  return 0;
}



/* Entry: 1005b2138; end: 1005b2157; +[SCColdStartTabExperiment plusDefaultTabForConfigValue:] */

undefined8 FUN_1005b2138(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 4;
  if (param_3 != 2) {
    uVar1 = 0;
  }
  uVar2 = 5;
  if (param_3 != 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 1005b2158; end: 1005b215f; -[SCActiveUserNGSNavigationRouter cameraNavigationService] */

undefined8 FUN_1005b2158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x438);
}



/* Entry: 1005b2160; end: 1005b21d7; -[SCLegacyCameraNavigationServiceImpl showCameraAnimated:completion:] */

/* WARNING: Possible PIC construction at 0x0001005b21ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005b21b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b2160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751428);
  func_0x000107c61174(param_4);
  func_0x000107c4500c(uVar1);
  func_0x000107c61180();
  func_0x000107c504e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005b21d8; end: 1005b2297; -[SCNavigationService presentAnimated:fromUserInteraction:completion:] */

/* WARNING: Possible PIC construction at 0x0001005b2218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005b227c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005b221c) */
/* WARNING: Removing unreachable block (ram,0x0001005b2238) */
/* WARNING: Removing unreachable block (ram,0x0001005b2244) */
/* WARNING: Removing unreachable block (ram,0x0001005b225c) */
/* WARNING: Removing unreachable block (ram,0x0001005b2220) */
/* WARNING: Removing unreachable block (ram,0x0001005b2280) */

void FUN_1005b21d8(long param_1)

{
  undefined8 in_x4;
  
  func_0x000107c61174(in_x4);
  func_0x000107c3bddc(param_1);
  func_0x000107c61148(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005b2298; end: 1005b231f; -[SCNavigationService _logAndExposeFeatureScopeIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001005b22d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005b22dc) */

void FUN_1005b2298(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1005b2320; end: 1005b2327; -[_TtC28SCFeatureStartupSignalerImpl26FeatureStartupSignalerImpl onPlatformPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b2320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c6106c();
  uStack_40 = 0;
  uStack_38 = 1;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  FUN_1002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1005b2328; end: 1005b23e7;  */

void FUN_1005b2328(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  puVar1 = auStack_58;
  func_0x000107c61428(lVar4 + 0x70,puVar1,0x21,0);
  lVar3 = *(long *)(lVar4 + 0x98);
  if (*(long *)(lVar3 + 0x10) != 0) {
    FUN_100086b70(param_2);
    if (((ulong)puVar1 & 1) != 0) goto LAB_1005b23c4;
    lVar3 = *(long *)(lVar4 + 0x98);
  }
  func_0x000107c61558(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x98);
  FUN_1002a72b8(param_3,param_2,lVar3,0x11305f7c8,&UNK_10dcd4bb0,FUN_100086eb8);
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
LAB_1005b23c4:
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1005b23e8; end: 1005b23ff;  */

void FUN_1005b23e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005b2328(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1005b2400; end: 1005b24bf;  */

void FUN_1005b2400(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  puVar1 = auStack_58;
  func_0x000107c61428(lVar4 + 0x70,puVar1,0x21,0);
  lVar3 = *(long *)(lVar4 + 0xa0);
  if (*(long *)(lVar3 + 0x10) != 0) {
    FUN_100086b70(param_2);
    if (((ulong)puVar1 & 1) != 0) goto LAB_1005b249c;
    lVar3 = *(long *)(lVar4 + 0xa0);
  }
  func_0x000107c61558(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0xa0);
  FUN_1002a72b8(param_3,param_2,lVar3,0x11305f7c8,&UNK_10dcd4bb0,FUN_100086eb8);
  *(undefined8 *)(lVar4 + 0xa0) = uVar2;
LAB_1005b249c:
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1005b24c0; end: 1005b24d7;  */

void FUN_1005b24c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005b2400(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1005b24d8; end: 1005b2737; -[SCLegacyCameraNavigationServiceImpl exposeFeatureScopeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b24d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar7 = (long)_DAT_11275140c;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x000107c5de7c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar1 == 0) {
      func_0x000107c61144(auStack_68,param_1);
      puVar2 = PTR_PTR_1126aeaf8;
      func_0x000107c610f4();
      func_0x000107c6111c(auStack_70,auStack_68);
      func_0x000107c47be0();
      puVar3 = PTR_PTR_1126ae720;
      func_0x000107c3e4fc();
      func_0x000107c61180();
      uVar6 = *(undefined8 *)(param_1 + _DAT_112751408);
      lVar1 = param_1 + _DAT_1127513f8;
      func_0x000107c61148(lVar1);
      lVar4 = param_1 + _DAT_1127513fc;
      func_0x000107c61148();
      lVar5 = param_1 + _DAT_112751400;
      func_0x000107c61148();
      func_0x000107c3edcc(uVar6);
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c42c1c(*(undefined8 *)(param_1 + lVar7));
      func_0x000107c5c4fc(param_1);
      func_0x000107c61180();
      func_0x000107c3d924();
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61120(auStack_70);
      func_0x000107c61120(auStack_68);
    }
  }
  return;
}



/* Entry: 1005b2738; end: 1005b2747; -[SCScopeExposerProxy scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b2738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787cec),PTR_s_scope_112631b68);
  return;
}



/* Entry: 1005b2748; end: 1005b277b;  */

void FUN_1005b2748(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1005b277c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005b277c; end: 1005b27eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005b277c(void)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  
  uVar1 = 0x112dc3ff0;
  FUN_1000285a8(0x112dc3ff0,&UNK_10d981690);
  FUN_100087bd4(&uStack_38,FUN_1005b27ec,auStack_50,uVar1);
  return uStack_38;
}



/* Entry: 1005b27ec; end: 1005b2813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005b27ec(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130923f0);
  func_0x000107c615f0();
  return;
}



/* Entry: 1005b2814; end: 1005b282b; -[SCNavigationService viewController] */

void FUN_1005b2814(long param_1)

{
  func_0x000107c61148(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005b282c; end: 1005b28d7; -[SCCustomUIContainer initWithOnAttach:onDetach:] */

undefined1 *
FUN_1005b282c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e218;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005b28d8; end: 1005b5ba7; -[_TtC17SCMainCameraScope25SCMainCameraScopeServices buildWithUiContainer:headerItem:tabBarItem:navigationBar:sigViewController:delegate:swipeViewDelegate:sendSnapDelegate:tabBarItemActionObservable:mainCameraInteractiveModalTransitionController:aiModeDeeplinkObservable:] */

void FUN_1005b28d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174();
  func_0x000107c615f0(param_5);
  uVar2 = param_6;
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  uVar3 = param_11;
  func_0x000107c61174();
  uVar4 = param_12;
  func_0x000107c61174();
  uVar5 = param_13;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar6 = param_3;
  func_0x0001005b2a5c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12,param_13);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1005b5ba8; end: 1005b5f43;  */

void FUN_1005b5ba8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001005b2ce4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                      *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                      *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                      *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                      *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                      *(undefined8 *)(unaff_x20 + 0xe8),*(undefined8 *)(unaff_x20 + 0xf0),
                      *(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108),*(undefined8 *)(unaff_x20 + 0x110),
                      *(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                      *(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178),*(undefined8 *)(unaff_x20 + 0x180),
                      *(undefined8 *)(unaff_x20 + 0x188),*(undefined8 *)(unaff_x20 + 400),
                      *(undefined8 *)(unaff_x20 + 0x198),*(undefined8 *)(unaff_x20 + 0x1a0),
                      *(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8),*(undefined8 *)(unaff_x20 + 0x1c0),
                      *(undefined8 *)(unaff_x20 + 0x1c8),*(undefined8 *)(unaff_x20 + 0x1d0),
                      *(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8),*(undefined8 *)(unaff_x20 + 0x1f0),
                      *(undefined8 *)(unaff_x20 + 0x1f8),*(undefined8 *)(unaff_x20 + 0x200),
                      *(undefined8 *)(unaff_x20 + 0x208),*(undefined8 *)(unaff_x20 + 0x210),
                      *(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228),*(undefined8 *)(unaff_x20 + 0x230));
  return;
}



/* Entry: 1005b5f44; end: 1005b5f83;  */

void FUN_1005b5f44(void)

{
  FUN_1000285a8(0x112f9fae0,&UNK_10dc14d20);
  FUN_1000823a8(FUN_1007b6534,0);
  return;
}



/* Entry: 1005b5f84; end: 1005b5fe3;  */

void FUN_1005b5f84(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2800);
  return;
}



/* Entry: 1005b5fe4; end: 1005b62e3;  */

void FUN_1005b5fe4(void)

{
  FUN_1000285a8(0x112d9e8f8,&UNK_10d93ef70);
  FUN_1000823a8(0x1007ac740,0);
  return;
}



/* Entry: 1005b62e4; end: 1005b6303;  */

void FUN_1005b62e4(void)

{
  func_0x000107c61168(&PTR_PTR_112eef250);
  return;
}



/* Entry: 1005b6304; end: 1005b6343;  */

void FUN_1005b6304(void)

{
  FUN_1000285a8(0x112ef4210,&UNK_10db22e80);
  FUN_1000823a8(FUN_1007ea5b8,0);
  return;
}



/* Entry: 1005b6344; end: 1005b6383;  */

void FUN_1005b6344(void)

{
  func_0x000107c61168(&PTR_PTR_112eef690);
  return;
}



/* Entry: 1005b6384; end: 1005b639f;  */

void FUN_1005b6384(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007ac73c,param_1);
  return;
}



/* Entry: 1005b63a0; end: 1005b63ef;  */

void FUN_1005b63a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005b63f0; end: 1005b6513;  */

void FUN_1005b63f0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007ecb34,param_1);
  return;
}



/* Entry: 1005b6514; end: 1005b656b;  */

void FUN_1005b6514(undefined8 param_1,undefined8 param_2)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_2,param_1);
  return;
}



/* Entry: 1005b656c; end: 1005b6577;  */

void FUN_1005b656c(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007b8120,param_1);
  return;
}



/* Entry: 1005b6578; end: 1005b65c3;  */

void FUN_1005b6578(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1005ba8dc,param_1);
  return;
}



/* Entry: 1005b65c4; end: 1005b667f;  */

void FUN_1005b65c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ef4140,&UNK_10db22da8);
  puVar1 = &UNK_11059e9a8;
  func_0x000107c613fc(&UNK_11059e9a8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1005b88a8,puVar1);
  return;
}



/* Entry: 1005b6680; end: 1005b669b;  */

void FUN_1005b6680(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cb50,&UNK_10dbb5ff8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100755db0,param_1);
  return;
}



/* Entry: 1005b669c; end: 1005b66eb;  */

void FUN_1005b669c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005b66ec; end: 1005b670b;  */

void FUN_1005b66ec(void)

{
  func_0x000107c61168(&PTR_PTR_113035108);
  return;
}



/* Entry: 1005b670c; end: 1005b6727;  */

void FUN_1005b670c(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cb58,&UNK_10dbb6000);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100755c44,param_1);
  return;
}



/* Entry: 1005b6728; end: 1005b6747;  */

void FUN_1005b6728(void)

{
  func_0x000107c61168(&PTR_PTR_1130351a8);
  return;
}



/* Entry: 1005b6748; end: 1005b6763;  */

void FUN_1005b6748(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cb60,&UNK_10dbb6008);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007554b0,param_1);
  return;
}



/* Entry: 1005b6764; end: 1005b6783;  */

void FUN_1005b6764(void)

{
  func_0x000107c61168(&PTR_PTR_113035248);
  return;
}



/* Entry: 1005b6784; end: 1005b679f;  */

void FUN_1005b6784(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cb38,&UNK_10dbb5fe0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007add88,param_1);
  return;
}



/* Entry: 1005b67a0; end: 1005b67bf;  */

void FUN_1005b67a0(void)

{
  func_0x000107c61168(&PTR_PTR_112927190);
  return;
}



/* Entry: 1005b67c0; end: 1005b67cb;  */

void FUN_1005b67c0(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007a6c60,param_1);
  return;
}



/* Entry: 1005b67cc; end: 1005b6823;  */

void FUN_1005b67cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_2,param_1);
  return;
}



/* Entry: 1005b6824; end: 1005b683f;  */

void FUN_1005b6824(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cc58,&UNK_10dbb6b18);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007ae100,param_1);
  return;
}



/* Entry: 1005b6840; end: 1005b688f;  */

void FUN_1005b6840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1005b6890; end: 1005b68af;  */

void FUN_1005b6890(void)

{
  func_0x000107c61168(&PTR_PTR_1129719f8);
  return;
}



/* Entry: 1005b68b0; end: 1005b68cb;  */

void FUN_1005b68b0(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cc60,&UNK_10dbb6b20);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007a6d04,param_1);
  return;
}



/* Entry: 1005b68cc; end: 1005b68eb;  */

void FUN_1005b68cc(void)

{
  func_0x000107c61168(&PTR_PTR_1129c8a10);
  return;
}



/* Entry: 1005b68ec; end: 1005b6907;  */

void FUN_1005b68ec(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cbf8,&UNK_10dbb6ab8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007ae2bc,param_1);
  return;
}



/* Entry: 1005b6908; end: 1005b6927;  */

void FUN_1005b6908(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0e20);
  return;
}



/* Entry: 1005b6928; end: 1005b693f;  */

void FUN_1005b6928(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007ac728,param_1);
  return;
}



/* Entry: 1005b6940; end: 1005b698b;  */

void FUN_1005b6940(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007b9b88,param_1);
  return;
}



/* Entry: 1005b698c; end: 1005b69b3;  */

void FUN_1005b698c(undefined8 param_1)

{
  FUN_1000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007ac760,param_1);
  return;
}



/* Entry: 1005b69b4; end: 1005b69d3;  */

void FUN_1005b69b4(void)

{
  func_0x000107c61168(&PTR_PTR_112eef040);
  return;
}



/* Entry: 1005b69d4; end: 1005b69ef;  */

void FUN_1005b69d4(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cc80,&UNK_10dbb6b40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007db21c,param_1);
  return;
}



/* Entry: 1005b69f0; end: 1005b6a0f;  */

void FUN_1005b69f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128f4ec0);
  return;
}



/* Entry: 1005b6a10; end: 1005b6a47;  */

void FUN_1005b6a10(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cb48,&UNK_10dbb5ff0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007ac0ec,param_1);
  return;
}



/* Entry: 1005b6a48; end: 1005b6a67;  */

void FUN_1005b6a48(void)

{
  func_0x000107c61168(&PTR_PTR_11296ae60);
  return;
}



/* Entry: 1005b6a68; end: 1005b6ad7;  */

void FUN_1005b6a68(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cc08,&UNK_10dbb6ac8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007e7af0,param_1);
  return;
}



/* Entry: 1005b6ad8; end: 1005b6af7;  */

void FUN_1005b6ad8(void)

{
  func_0x000107c61168(&PTR_PTR_11296b4c8);
  return;
}



/* Entry: 1005b6af8; end: 1005b6b2f;  */

void FUN_1005b6af8(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cb10,&UNK_10dbb5fb8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007abf04,param_1);
  return;
}



/* Entry: 1005b6b30; end: 1005b6b4f;  */

void FUN_1005b6b30(void)

{
  func_0x000107c61168(&PTR_PTR_11296fd20);
  return;
}



/* Entry: 1005b6b50; end: 1005b6b6b;  */

void FUN_1005b6b50(undefined8 param_1)

{
  FUN_1000285a8(0x112f5caf0,&UNK_10dbb5f98);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007e46dc,param_1);
  return;
}



/* Entry: 1005b6b6c; end: 1005b6b8b;  */

void FUN_1005b6b6c(void)

{
  func_0x000107c61168(&PTR_PTR_112926970);
  return;
}



/* Entry: 1005b6b8c; end: 1005b6ba7;  */

void FUN_1005b6b8c(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cc00,&UNK_10dbb6ac0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007dc33c,param_1);
  return;
}



/* Entry: 1005b6ba8; end: 1005b6bc7;  */

void FUN_1005b6ba8(void)

{
  func_0x000107c61168(&PTR_PTR_1128d0c98);
  return;
}



/* Entry: 1005b6bc8; end: 1005b6be3;  */

void FUN_1005b6bc8(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cc50,&UNK_10dbb6b10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007adf44,param_1);
  return;
}



/* Entry: 1005b6be4; end: 1005b6c03;  */

void FUN_1005b6be4(void)

{
  func_0x000107c61168(&PTR_PTR_11296d150);
  return;
}



/* Entry: 1005b6c04; end: 1005b6c73;  */

void FUN_1005b6c04(undefined8 param_1)

{
  FUN_1000285a8(0x112f5cb08,&UNK_10dbb5fb0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x1007a6a78,param_1);
  return;
}


