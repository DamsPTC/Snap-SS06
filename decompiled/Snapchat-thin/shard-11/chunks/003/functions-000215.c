/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084142e4; end: 1084142f7; -[SCSearchResultsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084142e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112774920,param_3);
  return;
}



/* Entry: 1084142f8; end: 108414307; -[SCSearchResultsViewController searchSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1084142f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127748dc);
}



/* Entry: 108414308; end: 108414347; -[SCSearchResultsViewController setSearchSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127748dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108414348; end: 108414357; -[SCSearchResultsViewController isFromPullToSearch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108414348(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127748d4);
}



/* Entry: 108414358; end: 108414367; -[SCSearchResultsViewController setIsFromPullToSearch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414358(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127748d4) = param_3;
  return;
}



/* Entry: 108414368; end: 108414377; -[SCSearchResultsViewController transitionController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108414368(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774938);
}



/* Entry: 108414378; end: 1084143b7; -[SCSearchResultsViewController setTransitionController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112774938;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084143b8; end: 1084143c7; -[SCSearchResultsViewController shouldHandleOverscroll] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1084143b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277492c);
}



/* Entry: 1084143c8; end: 1084143d7; -[SCSearchResultsViewController setShouldHandleOverscroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084143c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277492c) = param_3;
  return;
}



/* Entry: 1084143d8; end: 1084143e7; -[SCSearchResultsViewController resultsCollectionView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1084143d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277490c);
}



/* Entry: 1084143e8; end: 108414427; -[SCSearchResultsViewController setResultsCollectionView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084143e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277490c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108414428; end: 108414437; -[SCSearchResultsViewController contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108414428(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277493c);
}



/* Entry: 108414438; end: 108414477; -[SCSearchResultsViewController setContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277493c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108414478; end: 108414487; -[SCSearchResultsViewController overscrollPercent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108414478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127748d8);
}



/* Entry: 108414488; end: 108414497; -[SCSearchResultsViewController setOverscrollPercent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108414488(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_1127748d8) = param_1;
  return;
}



/* Entry: 108414498; end: 1084144a7; -[SCSearchResultsViewController eventAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108414498(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127748e0);
}



/* Entry: 1084144a8; end: 1084144e7; -[SCSearchResultsViewController setEventAnnouncer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084144a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127748e0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084144e8; end: 10841469f; -[SCSearchResultsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1084144e8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277493c,0);
  _objc_storeStrong(param_1 + _DAT_11277490c,0);
  _objc_storeStrong(param_1 + _DAT_112774938,0);
  _objc_destroyWeak(param_1 + _DAT_112774920);
  _objc_storeStrong(param_1 + _DAT_112774908,0);
  _objc_storeStrong(param_1 + _DAT_1127748fc,0);
  _objc_storeStrong(param_1 + _DAT_1127748f8,0);
  _objc_storeStrong(param_1 + _DAT_1127748ec,0);
  _objc_storeStrong(param_1 + _DAT_112774904,0);
  _objc_storeStrong(param_1 + _DAT_112774910,0);
  _objc_storeStrong(param_1 + _DAT_112774934,0);
  _objc_storeStrong(param_1 + _DAT_112774940,0);
  _objc_storeStrong(param_1 + _DAT_11277491c,0);
  _objc_storeStrong(param_1 + _DAT_112774900,0);
  _objc_storeStrong(param_1 + _DAT_1127748e8,0);
  _objc_storeStrong(param_1 + _DAT_1127748e4,0);
  _objc_storeStrong(param_1 + _DAT_1127748e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127748dc,0);
  return;
}



/* Entry: 1084146a0; end: 1084146b7;  */

uint FUN_1084146a0(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0xbffU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 1084146b8; end: 108414733;  */

undefined * FUN_1084146b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b350 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6318,
                        &UNK_10df2d34c,&UNK_10df2d3b8,6,FUN_108414734,0);
    do {
      if (puRam000000011372b350 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b350;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b350,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b350 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b350;
}



/* Entry: 108414734; end: 10841473f;  */

bool FUN_108414734(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 108414740; end: 1084147bb;  */

undefined * FUN_108414740(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b358 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6338,
                        &UNK_10df2d3d0,&UNK_10df2d3e8,3,FUN_1084147bc,0);
    do {
      if (puRam000000011372b358 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b358;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b358,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b358 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b358;
}



/* Entry: 1084147bc; end: 1084147c7;  */

bool FUN_1084147bc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084147c8; end: 108414843;  */

undefined * FUN_1084147c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b360 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6358,
                        &UNK_10df2d3f4,&UNK_10df2d4e8,9,FUN_108414844,0);
    do {
      if (puRam000000011372b360 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b360;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b360,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b360 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b360;
}



/* Entry: 108414844; end: 10841484f;  */

bool FUN_108414844(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 108414850; end: 1084148cb;  */

undefined * FUN_108414850(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b368 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6378,
                        &UNK_10df2d50c,&UNK_10df2d538,2,FUN_1084148cc,0);
    do {
      if (puRam000000011372b368 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b368;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b368,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b368 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b368;
}



/* Entry: 1084148cc; end: 1084148d7;  */

bool FUN_1084148cc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084148d8; end: 108414953;  */

undefined * FUN_1084148d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b370 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6398,
                        &UNK_10df2d540,&UNK_10df2d54c,2,FUN_108414954,0);
    do {
      if (puRam000000011372b370 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b370;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b370,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b370 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b370;
}



/* Entry: 108414954; end: 10841495f;  */

bool FUN_108414954(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108414960; end: 1084149db;  */

undefined * FUN_108414960(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b378 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed63b8,
                        &UNK_10df2d554,&UNK_10df2d568,2,FUN_1084149dc,0);
    do {
      if (puRam000000011372b378 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b378;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b378,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b378 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b378;
}



/* Entry: 1084149dc; end: 1084149e7;  */

bool FUN_1084149dc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084149e8; end: 108414a63;  */

undefined * FUN_1084149e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b380 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed63d8,
                        &UNK_10df2d570,&UNK_10df2da14,0x58,FUN_108414a64,0);
    do {
      if (puRam000000011372b380 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b380;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b380,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b380 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b380;
}



/* Entry: 108414a64; end: 108414a6f;  */

bool FUN_108414a64(uint param_1)

{
  return param_1 < 0x58;
}



/* Entry: 108414a70; end: 108414aeb;  */

undefined * FUN_108414a70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b388 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed63f8,
                        &UNK_10df2db74,&UNK_10df2e194,0x5b,FUN_108414aec,0);
    do {
      if (puRam000000011372b388 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b388;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b388,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b388 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b388;
}



/* Entry: 108414aec; end: 108414af7;  */

bool FUN_108414aec(uint param_1)

{
  return param_1 < 0x5b;
}



/* Entry: 108414af8; end: 108414b73;  */

undefined * FUN_108414af8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b390 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6418,
                        &UNK_10df2e300,&UNK_10df2e30c,2,FUN_108414b74,0);
    do {
      if (puRam000000011372b390 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b390;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b390,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b390 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b390;
}



/* Entry: 108414b74; end: 108414b7f;  */

bool FUN_108414b74(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108414b80; end: 108414bfb;  */

undefined * FUN_108414b80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b398 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6438,
                        &UNK_10df2e314,&UNK_10df2e32c,2,FUN_108414bfc,0);
    do {
      if (puRam000000011372b398 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b398;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b398,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b398 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b398;
}



/* Entry: 108414bfc; end: 108414c07;  */

bool FUN_108414bfc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108414c08; end: 108414c83;  */

undefined * FUN_108414c08(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6458,
                        &UNK_10df2e334,&UNK_10df2e3ac,5,FUN_108414c84,0);
    do {
      if (puRam000000011372b3a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3a0;
}



/* Entry: 108414c84; end: 108414c8f;  */

bool FUN_108414c84(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108414c90; end: 108414d0b;  */

undefined * FUN_108414c90(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6478,
                        &UNK_10df2e3c0,&UNK_10df2e3f4,4,FUN_108414d0c,0);
    do {
      if (puRam000000011372b3a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3a8;
}



/* Entry: 108414d0c; end: 108414d17;  */

bool FUN_108414d0c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108414d18; end: 108414d93;  */

undefined * FUN_108414d18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6498,
                        &UNK_10df2e404,&UNK_10df2e478,10,FUN_108414d94,0);
    do {
      if (puRam000000011372b3b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3b0;
}



/* Entry: 108414d94; end: 108414d9f;  */

bool FUN_108414d94(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 108414da0; end: 108414e1b;  */

undefined * FUN_108414da0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed64b8,
                        &UNK_10df2e4a0,&UNK_10df2e4e4,7,FUN_108414e1c,0);
    do {
      if (puRam000000011372b3b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3b8;
}



/* Entry: 108414e1c; end: 108414e27;  */

bool FUN_108414e1c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 108414e28; end: 108414ea3;  */

undefined * FUN_108414e28(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed64d8,
                        &UNK_10df2e500,&UNK_10df2e518,2,FUN_108414ea4,0);
    do {
      if (puRam000000011372b3c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3c0;
}



/* Entry: 108414ea4; end: 108414eaf;  */

bool FUN_108414ea4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108414eb0; end: 108414f2b;  */

undefined * FUN_108414eb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed64f8,
                        &UNK_10df2e520,&UNK_10df2e578,5,FUN_108414f2c,0);
    do {
      if (puRam000000011372b3c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3c8;
}



/* Entry: 108414f2c; end: 108414f37;  */

bool FUN_108414f2c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108414f38; end: 108414fb3;  */

undefined * FUN_108414f38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6518,
                        &UNK_10df2e58c,&UNK_10df2e5bc,3,FUN_108414fb4,0);
    do {
      if (puRam000000011372b3d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3d0;
}



/* Entry: 108414fb4; end: 108414fbf;  */

bool FUN_108414fb4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108414fc0; end: 10841503b;  */

undefined * FUN_108414fc0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6538,
                        &UNK_10df2e5c8,&UNK_10df2e620,9,FUN_10841503c,0);
    do {
      if (puRam000000011372b3d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3d8;
}



/* Entry: 10841503c; end: 108415047;  */

bool FUN_10841503c(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 108415048; end: 1084150c3;  */

undefined * FUN_108415048(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6558,
                        &UNK_10df2e644,&UNK_10df2e674,3,FUN_1084150c4,0);
    do {
      if (puRam000000011372b3e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3e0;
}



/* Entry: 1084150c4; end: 1084150cf;  */

bool FUN_1084150c4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1084150d0; end: 10841514b;  */

undefined * FUN_1084150d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6578,
                        &UNK_10df2e680,&UNK_10df2e69c,4,FUN_10841514c,0);
    do {
      if (puRam000000011372b3e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3e8;
}



/* Entry: 10841514c; end: 108415157;  */

bool FUN_10841514c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108415158; end: 1084151d3;  */

undefined * FUN_108415158(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6598,
                        &UNK_10df2e6ac,&UNK_10df2e700,8,FUN_1084151d4,0);
    do {
      if (puRam000000011372b3f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3f0;
}



/* Entry: 1084151d4; end: 1084151df;  */

bool FUN_1084151d4(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 1084151e0; end: 10841525b;  */

undefined * FUN_1084151e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b3f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed65b8,
                        &UNK_10df2e720,&UNK_10df2e730,2,FUN_10841525c,0);
    do {
      if (puRam000000011372b3f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b3f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b3f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b3f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b3f8;
}



/* Entry: 10841525c; end: 108415267;  */

bool FUN_10841525c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108415268; end: 1084152e3;  */

undefined * FUN_108415268(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b400 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed65d8,
                        &UNK_10df2e738,&UNK_10df2e75c,4,FUN_1084152e4,0);
    do {
      if (puRam000000011372b400 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b400;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b400,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b400 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b400;
}



/* Entry: 1084152e4; end: 1084152ef;  */

bool FUN_1084152e4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1084152f0; end: 10841536b;  */

undefined * FUN_1084152f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b408 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed65f8,
                        &UNK_10df2e76c,&UNK_10df2e7c4,4,FUN_10841536c,0);
    do {
      if (puRam000000011372b408 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b408;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b408,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b408 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b408;
}



/* Entry: 10841536c; end: 108415377;  */

bool FUN_10841536c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108415378; end: 1084153f3;  */

undefined * FUN_108415378(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372b410 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ed6618,
                        &UNK_10df2e7d4,&UNK_10df2e7f0,3,FUN_1084153f4,0);
    do {
      if (puRam000000011372b410 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372b410;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372b410,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372b410 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372b410;
}



/* Entry: 1084153f4; end: 1084153ff;  */

bool FUN_1084153f4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108415400; end: 10841548f; +[SCR2SearchRequest descriptor] */

undefined * FUN_108415400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99cd0,
                        &PTR____CFConstantStringClassReference_110dec378,&PTR_DAT_1132562e0,
                        &PTR_DAT_1132593f8,0x21,0xf8,0x1c);
    func_0x00010c229040();
    puRam000000011372b418 = puVar1;
  }
  return puRam000000011372b418;
}



/* Entry: 108415490; end: 1084154f7; +[SCR2CognacClientInfo descriptor] */

void FUN_108415490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99d20,
                        &PTR____CFConstantStringClassReference_110e8ca18,&PTR_DAT_1132562e0,
                        &PTR_DAT_1132562f8,1,0x10,0x1c);
    puRam000000011372b420 = puVar1;
  }
  return;
}



/* Entry: 1084154f8; end: 10841555f; +[SCR2PlaceLikelihood descriptor] */

void FUN_1084154f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99d70,
                        &PTR____CFConstantStringClassReference_110ed6638,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256998,3,0x18,0x1c);
    puRam000000011372b428 = puVar1;
  }
  return;
}



/* Entry: 108415560; end: 1084155c7; +[SCR2PreTypeRequest descriptor] */

void FUN_108415560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99dc0,
                        &PTR____CFConstantStringClassReference_110ed6658,&PTR_DAT_1132562e0,
                        &PTR_s_location_1132569f8,3,0x20,0x1c);
    puRam000000011372b430 = puVar1;
  }
  return;
}



/* Entry: 1084155c8; end: 10841562f; +[SCR2PostTypeRequest descriptor] */

void FUN_1084155c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99e10,
                        &PTR____CFConstantStringClassReference_110ed6678,&PTR_DAT_1132562e0,
                        &PTR_s_location_113257198,5,0x28,0x1c);
    puRam000000011372b438 = puVar1;
  }
  return;
}



/* Entry: 108415630; end: 108415697; +[SCR2CategoricalRequest descriptor] */

void FUN_108415630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99e60,
                        &PTR____CFConstantStringClassReference_110ed6698,&PTR_DAT_1132562e0,
                        &PTR_s_location_113256a58,3,0x20,0x1c);
    puRam000000011372b440 = puVar1;
  }
  return;
}



/* Entry: 108415698; end: 1084156ff; +[SCR2MapPipelineRequest descriptor] */

void FUN_108415698(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99eb0,
                        &PTR____CFConstantStringClassReference_110ed66b8,&PTR_DAT_1132562e0,
                        &PTR_s_placeholder_113256318,1,0x10,0x1c);
    puRam000000011372b448 = puVar1;
  }
  return;
}



/* Entry: 108415700; end: 108415767; +[SCR2StoryFetchBySourceRequest descriptor] */

void FUN_108415700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99f00,
                        &PTR____CFConstantStringClassReference_110ed66d8,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256338,1,0x10,0x1c);
    puRam000000011372b450 = puVar1;
  }
  return;
}



/* Entry: 108415768; end: 1084157cf; +[SCR2ShazamRequest descriptor] */

void FUN_108415768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99f50,
                        &PTR____CFConstantStringClassReference_110ed66f8,&PTR_DAT_1132562e0,
                        &PTR_s_location_113256ab8,3,0x20,0x1c);
    puRam000000011372b458 = puVar1;
  }
  return;
}



/* Entry: 1084157d0; end: 108415837; +[SCR2CandidateStoriesRequest descriptor] */

void FUN_1084157d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99fa0,
                        &PTR____CFConstantStringClassReference_110ed6718,&PTR_DAT_1132562e0,
                        &PTR_s_location_113256b18,3,0x20,0x1c);
    puRam000000011372b460 = puVar1;
  }
  return;
}



/* Entry: 108415838; end: 10841589f; +[SCR2SnapPivotStoriesRequest descriptor] */

void FUN_108415838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b99ff0,
                        &PTR____CFConstantStringClassReference_110ed6738,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256b78,3,0x10,0x1c);
    puRam000000011372b468 = puVar1;
  }
  return;
}



/* Entry: 1084158a0; end: 108415907; +[SCR2SnapToStoriesRequest descriptor] */

void FUN_1084158a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a040,
                        &PTR____CFConstantStringClassReference_110ed6758,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256558,2,0x10,0x1c);
    puRam000000011372b470 = puVar1;
  }
  return;
}



/* Entry: 108415908; end: 10841596f; +[SCR2GeofilterStoryRequest descriptor] */

void FUN_108415908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b478 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a090,
                        &PTR____CFConstantStringClassReference_110ed6778,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256358,1,0x10,0x1c);
    puRam000000011372b478 = puVar1;
  }
  return;
}



/* Entry: 108415970; end: 1084159d7; +[SCR2SharedStoryRequest descriptor] */

void FUN_108415970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a0e0,
                        &PTR____CFConstantStringClassReference_110ed6798,&PTR_DAT_1132562e0,
                        &PTR_s_storyId_113256378,1,0x10,0x1c);
    puRam000000011372b480 = puVar1;
  }
  return;
}



/* Entry: 1084159d8; end: 108415a3f; +[SCR2PartialStoryRequest descriptor] */

void FUN_1084159d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b488 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a130,
                        &PTR____CFConstantStringClassReference_110ed67b8,&PTR_DAT_1132562e0,
                        &PTR_s_storyId_113256598,2,0x10,0x1c);
    puRam000000011372b488 = puVar1;
  }
  return;
}



/* Entry: 108415a40; end: 108415aa7; +[SCR2PublicUserRequest descriptor] */

void FUN_108415a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a180,
                        &PTR____CFConstantStringClassReference_110ed67d8,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256398,1,4,0x1c);
    puRam000000011372b490 = puVar1;
  }
  return;
}



/* Entry: 108415aa8; end: 108415b0f; +[SCR2WatchNextRequest descriptor] */

void FUN_108415aa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a1d0,
                        &PTR____CFConstantStringClassReference_110ed67f8,&PTR_DAT_1132562e0,
                        &PTR_s_storyId_1132563b8,1,0x10,0x1c);
    puRam000000011372b498 = puVar1;
  }
  return;
}



/* Entry: 108415b10; end: 108415b77; +[SCR2PartialPostTypeRequest descriptor] */

void FUN_108415b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a220,
                        &PTR____CFConstantStringClassReference_110ed6818,&PTR_DAT_1132562e0,
                        &PTR_DAT_1132565d8,2,0x18,0x1c);
    puRam000000011372b4a0 = puVar1;
  }
  return;
}



/* Entry: 108415b78; end: 108415bdf; +[SCR2SnapFeedRequest descriptor] */

void FUN_108415b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a270,
                        &PTR____CFConstantStringClassReference_110ed6838,&PTR_DAT_1132562e0,
                        &PTR_s_start_113256618,2,0xc,0x1c);
    puRam000000011372b4a8 = puVar1;
  }
  return;
}



/* Entry: 108415be0; end: 108415c4b; +[SCR2InfluencerRecommendationRequest descriptor] */

void FUN_108415be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a2c0,
                        &PTR____CFConstantStringClassReference_110ed6858,&PTR_DAT_1132562e0,
                        &PTR_DAT_113257238,5,0x18,0x1c);
    puRam000000011372b4b0 = puVar1;
  }
  return;
}



/* Entry: 108415c4c; end: 108415cb3; +[SCR2InfluencerRecommendationResponse descriptor] */

void FUN_108415c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9b558,
                        &PTR____CFConstantStringClassReference_110ed6878,&PTR_DAT_1132562e0,
                        &PTR_DAT_1132563d8,1,0x10,0x1c);
    puRam000000011372b4b8 = puVar1;
  }
  return;
}



/* Entry: 108415cb4; end: 108415d3b; +[SCR2InfluencerRecommendationResponse_InfluencerInfo descriptor] */

undefined * FUN_108415cb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9b580,
                        &PTR____CFConstantStringClassReference_110ed6898,&PTR_DAT_1132562e0,
                        &PTR_DAT_1132572d8,5,0x30,0x1c);
    func_0x00010c228780();
    puRam000000011372b4c0 = puVar1;
  }
  return puRam000000011372b4c0;
}



/* Entry: 108415d3c; end: 108415dc7; +[SCR2SearchTweakParameter descriptor] */

undefined * FUN_108415d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a360,
                        &PTR____CFConstantStringClassReference_110ed68b8,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256e18,4,0x18,0x1c);
    func_0x00010c229040();
    puRam000000011372b4c8 = puVar1;
  }
  return puRam000000011372b4c8;
}



/* Entry: 108415dc8; end: 108415e33; +[SCR2SearchResponse descriptor] */

void FUN_108415dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a3b0,
                        &PTR____CFConstantStringClassReference_110dec398,&PTR_DAT_1132562e0,
                        &PTR_s_requestId_113257d98,10,0x58,0x1c);
    puRam000000011372b4d0 = puVar1;
  }
  return;
}



/* Entry: 108415e34; end: 108415e9b; +[SCR2PageFooter descriptor] */

void FUN_108415e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a400,
                        &PTR____CFConstantStringClassReference_110ed68d8,&PTR_DAT_1132562e0,
                        &PTR_DAT_1132563f8,1,8,0x1c);
    puRam000000011372b4d8 = puVar1;
  }
  return;
}



/* Entry: 108415e9c; end: 108415f03; +[SCR2ErrorBar descriptor] */

void FUN_108415e9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a450,
                        &PTR____CFConstantStringClassReference_110ed68f8,&PTR_DAT_1132562e0,
                        &PTR_s_errorMessage_113256658,2,0x10,0x1c);
    puRam000000011372b4e0 = puVar1;
  }
  return;
}



/* Entry: 108415f04; end: 108415f6f; +[SCR2SearchSection descriptor] */

void FUN_108415f04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a4a0,
                        &PTR____CFConstantStringClassReference_110ed6918,&PTR_DAT_1132562e0,
                        &PTR_s_title_113257b58,9,0x38,0x1c);
    puRam000000011372b4e8 = puVar1;
  }
  return;
}



/* Entry: 108415f70; end: 108415fff; +[SCR2SearchCard descriptor] */

undefined * FUN_108415f70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9b5a8,
                        &PTR____CFConstantStringClassReference_110ed6938,&PTR_DAT_1132562e0,
                        &PTR_DAT_113258d58,0x18,200,0x1c);
    func_0x00010c229040();
    puRam000000011372b4f0 = puVar1;
  }
  return puRam000000011372b4f0;
}



/* Entry: 108416000; end: 108416083; +[SCR2SearchCard_UserInfo descriptor] */

undefined * FUN_108416000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b4f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9b5d0,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256bd8,3,4,0x1c);
    func_0x00010c228780();
    puRam000000011372b4f8 = puVar1;
  }
  return puRam000000011372b4f8;
}



/* Entry: 108416084; end: 1084160ff; +[SCR2SnapStoreCard descriptor] */

undefined * FUN_108416084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b500 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a540,
                        &PTR____CFConstantStringClassReference_110ed6958,&PTR_DAT_1132562e0,
                        &PTR_DAT_113256e98,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam000000011372b500 = puVar1;
  }
  return puRam000000011372b500;
}



/* Entry: 108416100; end: 108416167; +[SCR2BrandProfileCard descriptor] */

void FUN_108416100(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372b508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b9a590,
                        &PTR____CFConstantStringClassReference_110ed6978,&PTR_DAT_1132562e0,
                        &PTR_s_profile_113256418,1,0x10,0x1c);
    puRam000000011372b508 = puVar1;
  }
  return;
}


