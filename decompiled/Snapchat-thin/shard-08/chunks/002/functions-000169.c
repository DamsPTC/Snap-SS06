/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105efad38; end: 105efaf8b; -[SCMapViewController _presentPlaceProfileWithPlaceId:placeBounds:placeType:openSource:sourceType:sourceSessionId:placeLinkButtonData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efad38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lVar6 = (long)_DAT_11273a164;
  lVar5 = param_5 + lVar6;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    iVar1 = (int)*(undefined8 *)(param_5 + _DAT_11273a00c);
    func_0x000109021a5c();
    _objc_release(lVar5);
    if (iVar1 != 0) {
      puVar2 = PTR_PTR_1126c5d38;
      _objc_alloc(PTR_PTR_1126c5d38);
      uVar3 = param_9;
      func_0x000106877cdc(param_9);
      lVar5 = param_10;
      func_0x00010c08fa60();
      if (lVar5 == 0) {
        lVar5 = -1;
      }
      else {
        lVar5 = param_10;
        func_0x00010ba1c784(param_10);
      }
      func_0x00010bff94e0(param_3,param_4,param_1,param_2,puVar2,param_6,param_7,0,uVar3,lVar5,
                          param_11,param_12);
      puVar4 = (undefined *)(param_5 + lVar6);
      _objc_loadWeakRetained(puVar4);
      func_0x00010c0d5ec0();
      goto LAB_105efaf34;
    }
  }
  puVar2 = PTR_PTR_1126b1e78;
  _objc_alloc(PTR_PTR_1126b1e78);
  uVar3 = param_9;
  func_0x000106877cdc(param_9);
  func_0x00010c031b60(puVar2,param_6,uVar3);
  lVar5 = param_10;
  func_0x00010c08fa60();
  if (lVar5 != 0) {
    lVar5 = param_10;
    func_0x00010ba1c784(param_10);
    func_0x00010c1dce20(puVar2,param_6,lVar5);
  }
  func_0x00010c207140(puVar2,param_6,param_11);
  puVar4 = PTR_PTR_1126b1e80;
  _objc_alloc(PTR_PTR_1126b1e80);
  func_0x00010c0364a0();
  func_0x00010c1dc220(param_1,param_2,param_3,param_4);
  func_0x00010c1dc460(puVar4,param_6,param_12);
  func_0x00010c0b9800(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10d8c0();
  _objc_release(lVar5);
  _objc_release(param_5);
LAB_105efaf34:
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105efaf8c; end: 105efafc7; -[SCMapViewController onPlaceProfileHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efaf8c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1b8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3dca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105efafc8; end: 105efafdf; -[SCMapViewController onPlaceProfileRemoved] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efafc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273a1b8);
  *(undefined8 *)(param_1 + _DAT_11273a1b8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105efafe0; end: 105efafe3; -[SCMapViewController requestDismissal] */

void FUN_105efafe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestDismissal_112581d78);
  return;
}



/* Entry: 105efafe4; end: 105efaff3; -[SCMapViewController headerItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105efafe4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a038);
}



/* Entry: 105efaff4; end: 105efb013; -[SCMapViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efaff4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273a1e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105efb014; end: 105efb027; -[SCMapViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb014(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273a1e4,param_3);
  return;
}



/* Entry: 105efb028; end: 105efb047; -[SCMapViewController baseOperaPresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb028(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273a1e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105efb048; end: 105efb05b; -[SCMapViewController setBaseOperaPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb048(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273a1e8,param_3);
  return;
}



/* Entry: 105efb05c; end: 105efb06b; -[SCMapViewController destination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105efb05c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a184);
}



/* Entry: 105efb06c; end: 105efb07b; -[SCMapViewController customStatusBarStyleContextController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105efb06c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273a174);
}



/* Entry: 105efb07c; end: 105efb0bb; -[SCMapViewController setCustomStatusBarStyleContextController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a174;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105efb0bc; end: 105efb0cb; -[SCMapViewController closeType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105efb0bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112739fb8);
}



/* Entry: 105efb0cc; end: 105efb0db; -[SCMapViewController setCloseType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112739fb8) = param_3;
  return;
}



/* Entry: 105efb0dc; end: 105efb0fb; -[SCMapViewController router] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb0dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273a164);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105efb0fc; end: 105efb10f; -[SCMapViewController setRouter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273a164,param_3);
  return;
}



/* Entry: 105efb110; end: 105efb12f; -[SCMapViewController initialViewportCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb110(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273a170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105efb130; end: 105efb143; -[SCMapViewController setInitialViewportCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb130(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273a170,param_3);
  return;
}



/* Entry: 105efb144; end: 105efb183; -[SCMapViewController setMapPlacesController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a1bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105efb184; end: 105efb1c3; -[SCMapViewController setLocationAccessMonitor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273a1a8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105efb1c4; end: 105efb9cf; -[SCMapViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efb1c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273a1a8,0);
  _objc_storeStrong(param_1 + _DAT_11273a1bc,0);
  _objc_destroyWeak(param_1 + _DAT_11273a170);
  _objc_destroyWeak(param_1 + _DAT_11273a164);
  _objc_storeStrong(param_1 + _DAT_11273a174,0);
  _objc_storeStrong(param_1 + _DAT_11273a184,0);
  _objc_destroyWeak(param_1 + _DAT_11273a1e8);
  _objc_destroyWeak(param_1 + _DAT_11273a1e4);
  _objc_storeStrong(param_1 + _DAT_11273a038,0);
  _objc_storeStrong(param_1 + _DAT_11273a1d8,0);
  _objc_storeStrong(param_1 + _DAT_11273a0d4,0);
  _objc_storeStrong(param_1 + _DAT_11273a0f4,0);
  _objc_storeStrong(param_1 + _DAT_11273a12c,0);
  _objc_storeStrong(param_1 + _DAT_11273a1cc,0);
  _objc_storeStrong(param_1 + _DAT_11273a0cc,0);
  _objc_storeStrong(param_1 + _DAT_11273a194,0);
  _objc_storeStrong(param_1 + _DAT_11273a0c8,0);
  _objc_storeStrong(param_1 + _DAT_11273a1e0,0);
  _objc_storeStrong(param_1 + _DAT_11273a1b8,0);
  _objc_storeStrong(param_1 + _DAT_11273a128,0);
  _objc_storeStrong(param_1 + _DAT_11273a0c4,0);
  _objc_storeStrong(param_1 + _DAT_11273a0c0,0);
  _objc_storeStrong(param_1 + _DAT_11273a0b8,0);
  _objc_storeStrong(param_1 + _DAT_11273a0b4,0);
  _objc_storeStrong(param_1 + _DAT_11273a0b0,0);
  _objc_storeStrong(param_1 + _DAT_11273a0ac,0);
  _objc_storeStrong(param_1 + _DAT_11273a0bc,0);
  _objc_storeStrong(param_1 + _DAT_11273a1d0,0);
  _objc_storeStrong(param_1 + _DAT_11273a0a8,0);
  _objc_storeStrong(param_1 + _DAT_11273a124,0);
  _objc_storeStrong(param_1 + _DAT_11273a09c,0);
  _objc_storeStrong(param_1 + _DAT_11273a1a0,0);
  _objc_storeStrong(param_1 + _DAT_11273a104,0);
  _objc_storeStrong(param_1 + _DAT_11273a118,0);
  _objc_storeStrong(param_1 + _DAT_11273a114,0);
  _objc_storeStrong(param_1 + _DAT_11273a1b0,0);
  _objc_storeStrong(param_1 + _DAT_11273a120,0);
  _objc_storeStrong(param_1 + _DAT_11273a1c0,0);
  _objc_storeStrong(param_1 + _DAT_11273a11c,0);
  _objc_storeStrong(param_1 + _DAT_11273a110,0);
  _objc_storeStrong(param_1 + _DAT_11273a10c,0);
  _objc_storeStrong(param_1 + _DAT_11273a1dc,0);
  _objc_storeStrong(param_1 + _DAT_11273a0e8,0);
  _objc_storeStrong(param_1 + _DAT_11273a0e4,0);
  _objc_storeStrong(param_1 + _DAT_11273a0e0,0);
  _objc_storeStrong(param_1 + _DAT_11273a088,0);
  _objc_storeStrong(param_1 + _DAT_11273a168,0);
  _objc_storeStrong(param_1 + _DAT_11273a084,0);
  _objc_storeStrong(param_1 + _DAT_11273a07c,0);
  _objc_storeStrong(param_1 + _DAT_11273a1c8,0);
  _objc_storeStrong(param_1 + _DAT_11273a078,0);
  _objc_storeStrong(param_1 + _DAT_11273a180,0);
  _objc_storeStrong(param_1 + _DAT_11273a190,0);
  _objc_storeStrong(param_1 + _DAT_11273a18c,0);
  _objc_storeStrong(param_1 + _DAT_11273a074,0);
  _objc_storeStrong(param_1 + _DAT_11273a070,0);
  _objc_storeStrong(param_1 + _DAT_11273a16c,0);
  _objc_storeStrong(param_1 + _DAT_11273a068,0);
  _objc_storeStrong(param_1 + _DAT_11273a064,0);
  _objc_storeStrong(param_1 + _DAT_11273a0ec,0);
  _objc_storeStrong(param_1 + _DAT_11273a090,0);
  _objc_storeStrong(param_1 + _DAT_11273a060,0);
  _objc_storeStrong(param_1 + _DAT_11273a05c,0);
  _objc_storeStrong(param_1 + _DAT_11273a04c,0);
  _objc_storeStrong(param_1 + _DAT_11273a048,0);
  _objc_storeStrong(param_1 + _DAT_11273a02c,0);
  _objc_storeStrong(param_1 + _DAT_11273a028,0);
  _objc_storeStrong(param_1 + _DAT_112739fd0,0);
  _objc_storeStrong(param_1 + _DAT_11273a0a4,0);
  _objc_storeStrong(param_1 + _DAT_11273a1b4,0);
  _objc_storeStrong(param_1 + _DAT_11273a0a0,0);
  _objc_storeStrong(param_1 + _DAT_11273a1a4,0);
  _objc_storeStrong(param_1 + _DAT_11273a144,0);
  _objc_storeStrong(param_1 + _DAT_11273a140,0);
  _objc_storeStrong(param_1 + _DAT_11273a13c,0);
  _objc_storeStrong(param_1 + _DAT_11273a138,0);
  _objc_storeStrong(param_1 + _DAT_11273a100,0);
  _objc_storeStrong(param_1 + _DAT_11273a1ac,0);
  _objc_storeStrong(param_1 + _DAT_11273a15c,0);
  _objc_storeStrong(param_1 + _DAT_11273a158,0);
  _objc_storeStrong(param_1 + _DAT_11273a154,0);
  _objc_storeStrong(param_1 + _DAT_11273a150,0);
  _objc_storeStrong(param_1 + _DAT_11273a130,0);
  _objc_storeStrong(param_1 + _DAT_11273a14c,0);
  _objc_storeStrong(param_1 + _DAT_11273a134,0);
  _objc_storeStrong(param_1 + _DAT_11273a148,0);
  _objc_storeStrong(param_1 + _DAT_11273a098,0);
  _objc_storeStrong(param_1 + _DAT_11273a17c,0);
  _objc_storeStrong(param_1 + _DAT_11273a094,0);
  _objc_storeStrong(param_1 + _DAT_11273a08c,0);
  _objc_destroyWeak(param_1 + _DAT_11273a108);
  _objc_storeStrong(param_1 + _DAT_11273a080,0);
  _objc_storeStrong(param_1 + _DAT_11273a06c,0);
  _objc_storeStrong(param_1 + _DAT_11273a058,0);
  _objc_storeStrong(param_1 + _DAT_11273a0d0,0);
  _objc_storeStrong(param_1 + _DAT_11273a054,0);
  _objc_storeStrong(param_1 + _DAT_11273a050,0);
  _objc_storeStrong(param_1 + _DAT_11273a044,0);
  _objc_storeStrong(param_1 + _DAT_11273a040,0);
  _objc_storeStrong(param_1 + _DAT_11273a03c,0);
  _objc_storeStrong(param_1 + _DAT_11273a034,0);
  _objc_storeStrong(param_1 + _DAT_11273a030,0);
  _objc_storeStrong(param_1 + _DAT_11273a024,0);
  _objc_storeStrong(param_1 + _DAT_11273a018,0);
  _objc_storeStrong(param_1 + _DAT_11273a014,0);
  _objc_storeStrong(param_1 + _DAT_11273a01c,0);
  _objc_storeStrong(param_1 + _DAT_11273a00c,0);
  _objc_storeStrong(param_1 + _DAT_11273a008,0);
  _objc_storeStrong(param_1 + _DAT_11273a004,0);
  _objc_storeStrong(param_1 + _DAT_11273a000,0);
  _objc_storeStrong(param_1 + _DAT_112739ffc,0);
  _objc_storeStrong(param_1 + _DAT_112739fc0,0);
  _objc_storeStrong(param_1 + _DAT_11273a020,0);
  _objc_storeStrong(param_1 + _DAT_11273a010,0);
  _objc_storeStrong(param_1 + _DAT_112739ff8,0);
  _objc_storeStrong(param_1 + _DAT_112739ff4,0);
  _objc_storeStrong(param_1 + _DAT_112739ff0,0);
  _objc_storeStrong(param_1 + _DAT_112739fec,0);
  _objc_storeStrong(param_1 + _DAT_112739fe8,0);
  _objc_storeStrong(param_1 + _DAT_112739fe4,0);
  _objc_storeStrong(param_1 + _DAT_112739fe0,0);
  _objc_storeStrong(param_1 + _DAT_112739fdc,0);
  _objc_storeStrong(param_1 + _DAT_112739fd8,0);
  _objc_storeStrong(param_1 + _DAT_112739fd4,0);
  _objc_storeStrong(param_1 + _DAT_112739fcc,0);
  _objc_storeStrong(param_1 + _DAT_112739fc8,0);
  _objc_storeStrong(param_1 + _DAT_112739fc4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112739fbc,0);
  return;
}



/* Entry: 105efb9d0; end: 105efb9d3; -[SCMapViewController exit] */

void FUN_105efb9d0(void)

{
  return;
}



/* Entry: 105efb9d4; end: 105efb9e7; -[SCMapViewController backgroundExitBehavior] */

void FUN_105efb9d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4072c00000000000,PTR_PTR_1126aecb0,PTR_s_exitAfterSpecificTimeWithSeconds_1125c46d8);
  return;
}



/* Entry: 105efb9e8; end: 105efba07; -[SCMapViewController canHandleNotification:] */

bool FUN_105efb9e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c26a060(param_3);
  return param_3 == 0xb;
}



/* Entry: 105efba08; end: 105efba4b;  */

undefined8 FUN_105efba08(long param_1)

{
  if (param_1 - 1U < 10) {
    return *(undefined8 *)(&UNK_10ddd15e8 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 105efba4c; end: 105efbabf; -[SCGrapheneBitmojiInteractionMetric2 init] */

undefined1 * FUN_105efba4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105efbac0; end: 105efbb37;  */

void FUN_105efbac0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f5ef0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbb38; end: 105efbbaf;  */

void FUN_105efbb38(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f5f40,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbbb0; end: 105efbc27;  */

void FUN_105efbbb0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f5f90,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbc28; end: 105efbc9f;  */

void FUN_105efbc28(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f5fe0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbca0; end: 105efbd17;  */

void FUN_105efbca0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f6030,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbd18; end: 105efbd8f;  */

void FUN_105efbd18(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f6080,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbd90; end: 105efbe07;  */

void FUN_105efbd90(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f60d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbe08; end: 105efbe7f;  */

void FUN_105efbe08(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108f6120,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105efbe80; end: 105efc0af; -[SCMapLocationAccessMonitor initWithLocationSharingPrefsProvider:userLocationPermissionsManager:bitmojiLayerManager:presentationViewController:mapLoggerEventSender:mapUserPreferences:fullScreenUIShowsCloseButton:delegate:webBrowsingScopeExposer:deviceLocationPermissionsManager:circumstanceEngine:] */

undefined8 *
FUN_105efbe80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_70,param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_78 = PTR_PTR_1126ede78;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_13);
    uVar2 = puVar1[1];
    puVar1[1] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_5);
    puVar3 = auStack_68;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 4,puVar3);
    _objc_release(puVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x51) = param_9;
    puVar3 = auStack_70;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 7,puVar3);
    _objc_release(puVar3);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    uVar2 = param_14;
    func_0x0001090224b8();
    *(char *)(puVar1 + 10) = (char)uVar2;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105efc0b0; end: 105efc2f3; -[SCMapLocationAccessMonitor setMonitoring:] */

void FUN_105efc0b0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(byte *)(param_1 + 0x80) != param_3) {
    *(char *)(param_1 + 0x80) = (char)param_3;
    if (param_3 == 0) {
      func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
      uVar1 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09eaa0();
    func_0x00010be5c860(param_1);
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c1067e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105efc2f4;
    puStack_68 = &UNK_1108f3470;
    _objc_copyWeak(auStack_60,auStack_58);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    func_0x00010beaddc0(param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0f9ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    uVar3 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 105efc2f4; end: 105efc33b;  */

void FUN_105efc2f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efc33c; end: 105efc42b;  */

void FUN_105efc33c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105efc42c;
  puStack_50 = &UNK_11089ef40;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bd7e0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105efc42c; end: 105efc493;  */

void FUN_105efc42c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efc494; end: 105efc49b; -[SCMapLocationAccessMonitor isShowingLocationAccessPrompt] */

undefined1 FUN_105efc494(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* Entry: 105efc49c; end: 105efc4ab; -[SCMapLocationAccessMonitor isShowingFullScreenPrompt] */

bool FUN_105efc49c(long param_1)

{
  return *(long *)(param_1 + 0x78) != 0;
}



/* Entry: 105efc4ac; end: 105efc54b; -[SCMapLocationAccessMonitor showLocationAccuracyPromptWithSource:] */

void FUN_105efc4ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfcc680(uVar2);
  FUN_105efd850();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10eda0();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x68,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105efc54c; end: 105efc64f; -[SCMapLocationAccessMonitor showLocationAccessPromptIfNecessary] */

void FUN_105efc54c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7020();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfa8200(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105efc650; end: 105efc6cf;  */

void FUN_105efc650(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 1) {
      uVar1 = *(ulong *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c06cae0();
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_105efc6bc;
    }
    func_0x00010c238260(param_1);
  }
LAB_105efc6bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efc6d0; end: 105efc813; -[SCMapLocationAccessMonitor showLocationAccessPromptWithSource:] */

void FUN_105efc6d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf10fa0();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + 0x70) = 1;
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = -(ulong)(param_3 - 4U < 0xfffffffffffffffd);
    uStack_50 = 2;
    if (lVar2 == 3) {
      uStack_50 = 3;
    }
    _objc_copyWeak(auStack_60,auStack_48);
    func_0x00010c1349e0(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105efc814; end: 105efc857;  */

void FUN_105efc814(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efc858; end: 105efc85b; -[SCMapLocationAccessMonitor _onLocationSharingPreferencesUpdated:] */

void FUN_105efc858(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beaddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupLoadingViewIfNecessary_112589118);
  return;
}



/* Entry: 105efc85c; end: 105efc9d3; -[SCMapLocationAccessMonitor _manageUIForAccuracy:] */

void FUN_105efc85c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (param_3 == 2) {
      func_0x00010c190500(*(undefined8 *)(param_1 + 0x30),param_2,0);
    }
    else if (param_3 == 1) {
      uVar1 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf86a60();
      if ((uVar1 & 1) != 0) {
        return;
      }
      lVar2 = param_1 + 0x68;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar2 != 0) {
        return;
      }
      _objc_initWeak(auStack_28,param_1);
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0xc2000000;
      uStack_40 = 0x105efc984;
      puStack_38 = &UNK_1108434b0;
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_50);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
      return;
    }
    lVar2 = param_1 + 0x68;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_1 + 0x68;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf84b00();
      _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,0);
      return;
    }
  }
  return;
}



/* Entry: 105efc9d4; end: 105efca4f; -[SCMapLocationAccessMonitor _handleLocationPromptCompleted:source:dialogType:] */

void FUN_105efc9d4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x70) = 0;
  func_0x00010c23e5c0(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19a9e0();
  _objc_release(uVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b93a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efca50; end: 105efcb3b; -[SCMapLocationAccessMonitor _setupLoadingViewIfNecessary] */

void FUN_105efca50(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bfd7100();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x78) != 0) {
      return;
    }
    puVar3 = PTR_PTR_1126c5d40;
    _objc_alloc();
    func_0x00010bfff260();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x78),param_2,param_1);
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c14c940(*(undefined8 *)(param_1 + 0x78));
  }
  else {
    if (*(long *)(param_1 + 0x78) == 0) {
      return;
    }
    func_0x00010c12c960();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar2);
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b9380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efcb3c; end: 105efcc07; -[SCMapLocationAccessMonitor locationProviderDidUpdateLocationAccuracy:] */

void FUN_105efcb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x105efcbcc;
  puStack_40 = &UNK_110846540;
  _objc_copyWeak(auStack_38,auStack_28);
  uStack_30 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105efcc08; end: 105efcc0b; -[SCMapLocationAccessMonitor locationProviderDidUpdateAuthorization:] */

void FUN_105efcc08(void)

{
  return;
}



/* Entry: 105efcc0c; end: 105efcc3f; -[SCMapLocationAccessMonitor mapLoadingViewDidTapCloseButton:] */

void FUN_105efcc0c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0b93c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efcc40; end: 105efcc87; -[SCMapLocationAccessMonitor webBrowserDidDismiss:] */

void FUN_105efcc40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105efcc88; end: 105efcd13; -[SCMapLocationAccessMonitor _topmostPresentedViewController] */

void FUN_105efcc88(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar1 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105efcd14; end: 105efcd87; -[SCMapLocationAccessMonitor permissionsManagerWantsToPresentPermissionsPrompt:] */

void FUN_105efcd14(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    _objc_retain(param_3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
  }
  else {
    _objc_retain(param_3);
    func_0x00010becd880(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c10eda0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efcd88; end: 105efcdeb; -[SCMapLocationAccessMonitor permissionsManagerModalPresentationContainer] */

void FUN_105efcd88(long param_1)

{
  undefined *puVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
  }
  else {
    func_0x00010becd880();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105efcdec; end: 105efcdf3; -[SCMapLocationAccessMonitor monitoring] */

undefined1 FUN_105efcdec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 105efcdf4; end: 105efce97; -[SCMapLocationAccessMonitor .cxx_destruct] */

void FUN_105efcdf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105efce98; end: 105efceff; -[SCMapLoadingView initWithCloseButtonVisible:] */

undefined1 * FUN_105efce98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ede80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010beb1440(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105efcf00; end: 105efd777; -[SCMapLoadingView _setupViewWithCloseButtonVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efcf00(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  _objc_alloc();
  func_0x00010c00ee20();
  func_0x00010befbb60(param_1);
  func_0x00010bf20c00(param_1);
  func_0x00010c19f0e0(puVar2);
  func_0x00010c16d4a0(puVar2);
  if (param_3 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_11273a234;
    uVar16 = *(undefined8 *)(param_1 + lVar18);
    *(undefined **)(param_1 + lVar18) = puVar3;
    _objc_release(uVar16);
    uVar16 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c08c0e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar16);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fc99999a0000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar18));
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bea00(0x4030000000000000,0x4030000000000000,0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010c1a9fc0(*(undefined8 *)(param_1 + lVar18));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
    func_0x00010befbb60(param_1);
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar5 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    dVar19 = 8.0;
    uVar16 = uVar5;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1;
    func_0x00010c274200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cf80(PTR__OBJC_CLASS___UIScreen_1126aea10);
    uVar8 = uVar7;
    func_0x00010bf493c0(dVar19 + 6.0);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar9;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar18);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010bf49420(0x4044000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar11);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar12);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar17);
    _objc_release(uVar7);
    _objc_release(uVar16);
    _objc_release(lVar6);
    _objc_release(uVar5);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar18));
    _objc_release(puVar4);
  }
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar18 = (long)_DAT_11273a238;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar3;
  _objc_release(uVar16);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar3);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar18));
  func_0x00010c1e0180(0x406f400000000000,*(undefined8 *)(param_1 + lVar18));
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar18));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010bf348e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(lVar17);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(lVar6);
  _objc_release(uVar12);
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc_init();
  lVar17 = (long)_DAT_11273a23c;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar3;
  _objc_release(uVar16);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar3);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010c274200(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010bf493c0(0xc030000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(lVar6);
  _objc_release(uVar12);
  ppuVar14 = &PTR____CFConstantStringClassReference_110e30c78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e30c78,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar17));
  _objc_release(ppuVar14);
  puVar3 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  lVar17 = (long)_DAT_11273a240;
  uVar16 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar3;
  _objc_release(uVar16);
  func_0x00010befbb60(param_1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar12 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010bf493c0(0x4024000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar16);
  _objc_release(lVar6);
  _objc_release(uVar12);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar17));
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105efd778; end: 105efd7af; -[SCMapLoadingView _didTapBackButton] */

void FUN_105efd778(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efd7b0; end: 105efd7cf; -[SCMapLoadingView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efd7b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11273a244);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105efd7d0; end: 105efd7e3; -[SCMapLoadingView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efd7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273a244,param_3);
  return;
}



/* Entry: 105efd7e4; end: 105efd84f; -[SCMapLoadingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105efd7e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273a244);
  _objc_storeStrong(param_1 + _DAT_11273a240,0);
  _objc_storeStrong(param_1 + _DAT_11273a234,0);
  _objc_storeStrong(param_1 + _DAT_11273a238,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273a23c,0);
  return;
}



/* Entry: 105efd850; end: 105efe123;  */

void FUN_105efd850(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined8 uVar37;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1);
  _objc_release(puVar2);
  func_0x00010c219b60(puVar1);
  func_0x00010c21e900(puVar1);
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c182220();
  func_0x000105efe20c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  FUN_10667e584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___UISwitch_1126b0680;
  _objc_alloc_init();
  func_0x00010c1d1360();
  _CGAffineTransformMakeScale(&uStack_108,0x3fe99999a0000000,0x3fe99999a0000000);
  uStack_138 = uStack_100;
  uStack_140 = uStack_108;
  uStack_128 = uStack_f0;
  uStack_130 = uStack_f8;
  uStack_118 = uStack_e0;
  uStack_120 = uStack_e8;
  puVar6 = puVar5;
  func_0x00010c219960();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000105efe224();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000105efe17c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  FUN_10667e584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010befbb60(puVar1);
  func_0x00010befbb60(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf493c0(0x403e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  puStack_c0 = puVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  puStack_b8 = puVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar8;
  puStack_b0 = puVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar4;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar8;
  puStack_a8 = puVar18;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  func_0x00010bf493c0(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar8;
  puStack_a0 = puVar21;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar1;
  func_0x00010c2793a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010bf493c0(0xc02e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar8;
  puStack_98 = puVar24;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar1;
  func_0x00010bf1ff80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = puVar25;
  func_0x00010bf493c0(0xc03e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar3;
  puStack_90 = puVar27;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar5;
  func_0x00010c2a5060(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar30 = puVar28;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar30;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar2);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_105efe124;
  puStack_150 = &UNK_11084e500;
  _objc_retain(param_4);
  ppuVar32 = &puStack_168;
  uStack_148 = param_4;
  _objc_retainBlock();
  puStack_190 = puVar2;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x105efe16c;
  puStack_178 = &UNK_11084e500;
  _objc_retain(param_4);
  ppuVar33 = &puStack_190;
  uStack_170 = param_4;
  _objc_retainBlock();
  puVar6 = PTR_PTR_1126aed70;
  ppuVar34 = ppuVar33;
  func_0x000105efe194();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR_PTR_1126aed70;
  func_0x000105efe1ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000105efe1dc();
  _objc_retainAutoreleasedReturnValue();
  ppuVar35 = ppuVar34;
  func_0x000105efe17c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar35);
  _objc_release();
  ppuVar35 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar36 = &PTR____CFConstantStringClassReference_110db5b98;
  if (param_1 != 0) {
    func_0x000105efe1f4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar36 = ppuVar34;
    func_0x000105efe17c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(ppuVar35);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar36);
    _objc_release(ppuVar34);
    ppuVar36 = ppuVar35;
  }
  puVar9 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = puVar6;
  puStack_c8 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x000105efe1c4();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d8 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefea0();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  puVar10 = puVar9;
  uVar37 = param_2;
  func_0x000108065d38(puVar9,param_2,param_3,10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c1bddc0(puVar9);
  _objc_release(puVar10);
  func_0x00010c1611e0(puVar9);
  _objc_release(ppuVar36);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar33);
  _objc_release(uStack_170);
  _objc_release(ppuVar32);
  _objc_release(uStack_148);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar37);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105efe124; end: 105efe16b;  */

void FUN_105efe124(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105efe16c; end: 105efe23b;  */

void FUN_105efe16c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105efe23c; end: 105efe517; -[SCMapPlacesController initWithMapViewport:mapView:circumstanceEngine:delegate:singlePointCameraPadding:placesBasemapLayer:storyPlaybackScopeExposer:storyPlaybackScopeServices:operaPresentingViewController:mapSession:halfTrayEdgeInsets:mapPeopleFriendsProvider:mapStoryPresenter:placeProfileV2ScopeExposer:] */

undefined8 *
FUN_105efe23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_88,param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_90 = PTR_PTR_1126ede88;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
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
    puVar3 = auStack_88;
    _objc_loadWeakRetained(puVar3);
    _objc_storeWeak(puVar1 + 0xd,puVar3);
    _objc_release(puVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    puVar1[3] = in_d4;
    puVar1[4] = in_d5;
    puVar1[5] = in_d6;
    puVar1[6] = in_d7;
    _objc_retain(param_5);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_5;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0x13,param_10);
    _objc_retain(param_12);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_13;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0xb1) = (char)uVar2;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105efe518; end: 105efe72b; -[SCMapPlacesController selectPlaceWithId:placeType:bounds:openSource:sourceType:sourceSessionId:hidePlacePin:placeLinkButtonData:] */

void FUN_105efe518(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  dVar1 = (param_1 + param_3) * 0.5;
  dVar2 = (param_2 + param_4) * 0.5;
  _CLLocationCoordinate2DMake(dVar1,dVar2);
  dVar5 = param_1;
  dVar3 = param_3;
  func_0x000108d312a8(param_1,param_2,param_3,param_4);
  if ((param_8 == 1) || ((param_8 == 0 && (200.0 <= dVar5)))) {
    *(undefined1 *)(param_5 + 0x39) = 0;
    func_0x000108d31494();
    func_0x000108d31494();
    dVar5 = (param_2 - param_4) * (param_2 - param_4) + (param_1 - param_3) * (param_1 - param_3);
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x10));
    if (dVar5 == 0.0) {
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x10));
      dVar5 = INFINITY;
      dVar6 = INFINITY;
    }
    else {
      dVar4 = 512.0;
      dVar6 = ABS(SQRT(dVar5)) * 512.0;
      dVar5 = ABS(dVar3 + -200.0) / dVar6;
      _log2(dVar5);
      func_0x00010bfb68e0(*(undefined8 *)(param_5 + 0x10));
      dVar6 = ABS(dVar4 + -40.0) / dVar6;
      _log2(dVar6);
    }
  }
  else {
    *(undefined1 *)(param_5 + 0x39) = 1;
    dVar5 = 12.0;
    dVar6 = 14.5;
  }
  func_0x00010be054e0(dVar1,dVar2,dVar5,dVar6,param_5,param_6,param_7,param_9,param_10,param_11,
                      param_12,param_13);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105efe72c; end: 105efe747; -[SCMapPlacesController selectPlaceWithId:coordinate:zoomLevel:showAnnotation:openSource:sourceType:hidePlacePin:] */

void FUN_105efe72c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *(undefined1 *)(param_1 + 0x39) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010be054f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__doExternallySetPlaceSetupForPla_11255eed8,param_3,param_5,param_6,0,
             param_7,0);
  return;
}



/* Entry: 105efe748; end: 105efe793; -[SCMapPlacesController selectPlaceWithId:openSource:sourceType:sourceSessionId:hidePlacePin:placeLinkButtonData:] */

void FUN_105efe748(long param_1)

{
  *(undefined1 *)(param_1 + 0x39) = 1;
  func_0x00010beb0ca0(*(undefined8 *)PTR__kCLLocationCoordinate2DInvalid_110349b98,
                      *(undefined8 *)(PTR__kCLLocationCoordinate2DInvalid_110349b98 + 8));
  return;
}



/* Entry: 105efe794; end: 105efe85f; -[SCMapPlacesController handlePlace:wasFavorited:] */

void FUN_105efe794(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c1530a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  if (param_4 == 0) {
    func_0x00010c0fd0e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c12c480(uVar2);
  }
  else {
    FUN_106768b84(param_3,&PTR____CFConstantStringClassReference_110e5bfd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bef8340(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105efe860; end: 105efe89f; -[SCMapPlacesController closeTray] */

void FUN_105efe860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b9860(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105efe8a0; end: 105efea1b; -[SCMapPlacesController _setupPlaceProfileTrayForPlace:] */

void FUN_105efe8a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_5);
  *(undefined2 *)(param_3 + 0x38) = 0x100;
  func_0x00010c2bf200(*(undefined8 *)(param_3 + 8));
  *(undefined8 *)(param_3 + 0x40) = param_1;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  *(long *)(param_3 + 0x48) = param_5;
  _objc_release(uVar1);
  _objc_loadWeakRetained(param_3 + 0x88);
  _objc_release();
  lVar2 = param_5;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010be33ec0(param_3,param_4,param_5);
    uVar1 = 5;
    if ((int)lVar2 == 0) {
      uVar1 = 6;
    }
    func_0x00010ba1c764(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_5;
  func_0x00010bfe5ec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80(param_5);
  lVar3 = param_5;
  func_0x00010bf043a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b500();
  func_0x00010beb0ca0(param_1,param_2,param_3,param_4,lVar2,
                      &PTR____CFConstantStringClassReference_110e30ab8,uVar1,0,lVar3,0,0,param_5,0);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c2bf200(*(undefined8 *)(param_3 + 8));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105efea1c; end: 105efece3; -[SCMapPlacesController _doExternallySetPlaceSetupForPlaceId:coordinate:startZoom:endZoom:openSource:sourceType:sourceSessionId:hidePlacePin:placeLinkButtonData:] */

void FUN_105efea1c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  *(double *)(param_5 + 0x40) = param_4;
  if (param_3 != param_4) {
    *(undefined1 *)(param_5 + 0x38) = 1;
    _objc_retain(param_12);
    _objc_retain(param_10);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_7);
    func_0x00010beb0ca0(param_1,param_2,param_5);
    _objc_release(param_12);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_7);
    lVar1 = param_5 + 0x90;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126c5d48;
      _objc_alloc(PTR_PTR_1126c5d48);
      func_0x00010c037c20();
      lVar1 = param_5 + 0x90;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c0d9840();
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
    if ((*(byte *)(param_5 + 0xb1) & 1) == 0) {
      func_0x00010bed4a80(param_1,param_2,param_3,0,param_5);
      _objc_initWeak(auStack_78,param_5);
      uVar3 = 0;
      _dispatch_time(0,500000000);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105efece4;
      puStack_88 = &UNK_1108434b0;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010058c530(uVar3,PTR___dispatch_main_q_11034be20,&puStack_a0);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    return;
  }
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bed4a80(param_1,param_2,param_4,0x3fc999999999999a,param_5);
  func_0x00010beb0ca0(param_1,param_2,param_5);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105efece4; end: 105efed0f;  */

void FUN_105efece4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105efed10; end: 105eff03f; -[SCMapPlacesController _setupTrayForPlaceIdentifier:coordinate:openSource:sourceType:showImmediately:annotations:viewportSessionData:sourceSessionId:basemapPlace:hidePlacePin:isPromoted:placeLinkButtonData:] */

void FUN_105efed10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_5);
  lVar7 = *(long *)(param_3 + 0x48);
  _objc_retain(param_15);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != param_5) {
    uVar1 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(param_3 + 0x48) = 0;
    _objc_release(uVar1);
  }
  lVar7 = param_3 + 0x88;
  _objc_loadWeakRetained();
  if (lVar7 != 0) {
    lVar2 = *(long *)(param_3 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar7);
    if (lVar2 != 0) goto LAB_105efef0c;
  }
  puVar3 = PTR_PTR_1126ae820;
  _objc_alloc_init(PTR_PTR_1126ae820);
  puVar4 = PTR_PTR_1126ae820;
  _objc_alloc_init(PTR_PTR_1126ae820);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar7 = param_3 + 0x98;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c038f40(puVar5);
  _objc_release(lVar7);
  puVar6 = PTR_PTR_1126c5d50;
  _objc_alloc(PTR_PTR_1126c5d50);
  func_0x00010c008a60();
  func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x80));
  _objc_storeWeak(param_3 + 0x88,puVar3);
  _objc_storeWeak(param_3 + 0x90,puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_105efef0c:
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010be1e640();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b20b0;
  _objc_alloc(PTR_PTR_1126b20b0);
  func_0x00010c01b5a0(param_1,param_2);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  lVar7 = param_3 + 0x88;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c0d9840();
  _objc_release(lVar7);
  if (param_8 != 0) {
    func_0x00010bebb900(param_3);
  }
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105eff040; end: 105eff093; -[SCMapPlacesController _getCustomServerRankingIdForOpenSource:] */

void FUN_105eff040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e30ab8);
  ppuVar1 = &PTR_PTR_110939d28;
  if ((int)param_3 == 0) {
    ppuVar1 = &PTR_PTR_110939d48;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105eff094; end: 105eff107; -[SCMapPlacesController _showTray] */

void FUN_105eff094(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf475a0();
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126c5d48;
  _objc_alloc(PTR_PTR_1126c5d48);
  func_0x00010c037c20();
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0d9840();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105eff108; end: 105eff15f; -[SCMapPlacesController _handlePlaceAnimationFire] */

void FUN_105eff108(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((*(long *)(param_3 + 0x48) != 0) && (*(char *)(param_3 + 0x38) == '\x01')) {
    func_0x00010bebb900(param_3);
    func_0x00010bf51c80(*(undefined8 *)(param_3 + 0x48));
    func_0x00010bed4a80(param_1,param_2,*(undefined8 *)(param_3 + 0x40),0x3fe3333333333333,param_3);
    *(undefined1 *)(param_3 + 0x38) = 0;
  }
  return;
}



/* Entry: 105eff160; end: 105eff283; -[SCMapPlacesController _updateCameraForCoordinate:zoomLevel:animationDuration:] */

void FUN_105eff160(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_5 + 0xb1) & 1) != 0) {
    return;
  }
  uVar3 = param_1;
  func_0x00010be06ea0();
  puVar1 = PTR_PTR_1126b1e08;
  func_0x00010c0fc7c0(*(undefined8 *)(param_5 + 8));
  uVar4 = uVar3;
  func_0x00010bf7f0e0(*(undefined8 *)(param_5 + 8));
  func_0x00010bf29880(param_1,param_2,param_3,uVar3,uVar4,puVar1,param_6,
                      *(undefined8 *)(param_5 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  if (param_4 <= 0.0) {
    func_0x00010c176040(*(undefined8 *)(param_5 + 8),param_6,puVar1);
  }
  else {
    puVar2 = PTR_PTR_1126b1e20;
    _objc_alloc(PTR_PTR_1126b1e20);
    func_0x00010c00eb00(param_4);
    func_0x00010c176120(*(undefined8 *)(param_5 + 8),param_6,puVar1,puVar2,0);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105eff284; end: 105eff32b; -[SCMapPlacesController _edgePaddingForHalfishTrayPosition] */

undefined8 FUN_105eff284(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1 + 0x68;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    param_1 = param_1 + 0x68;
    _objc_loadWeakRetained(param_1);
    uVar3 = 0x3fe19999a0000000;
    func_0x00010bf278c0(0x3fe19999a0000000);
    _objc_release(param_1);
  }
  return uVar3;
}



/* Entry: 105eff32c; end: 105eff41f; -[SCMapPlacesController _launchStoryForFriendUserId:touchPoint:] */

void FUN_105eff32c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 == 0) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000);
    uVar3 = *(undefined8 *)(param_3 + 0xa0);
    func_0x00010c0b96e0(uVar3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0xa8);
    param_3 = param_3 + 0x98;
    _objc_loadWeakRetained(param_3);
    func_0x00010c10c2a0(uVar4,param_4,param_3,puVar2,uVar3,0xe,0xb);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105eff420; end: 105eff643; -[SCMapPlacesController _launchStoryForPlace:touchPoint:] */

void FUN_105eff420(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x00010c013de0(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000);
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_3 + 0x98;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar3,param_4,lVar1,0);
    _objc_release(lVar1);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar4 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c0bac20(uVar4);
    func_0x00010c0df840(puVar5,param_4,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c067fc0();
    uVar4 = param_5;
    func_0x00010c14de00(puVar7,param_4,&PTR____CFConstantStringClassReference_110db9eb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b1e48;
    func_0x00010c0fd380(PTR_PTR_1126b1e48,param_4,param_5,PTR____NSArray0__struct_11034ab48,0,1,
                        puVar7,3,puVar6,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b1e50;
    _objc_alloc(PTR_PTR_1126b1e50);
    uVar4 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c15ffa0(uVar4);
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    func_0x00010c0bac20(uVar8);
    func_0x00010c028600(puVar6,param_4,uVar4,uVar8,0,0x22,0x22,9,0xe,0);
    uVar4 = *(undefined8 *)(param_3 + 0x78);
    func_0x00010bf235c0(uVar4,param_4,puVar3,puVar2,0,param_5,puVar6,0,param_3,0,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_3 + 0x70),param_4,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105eff644; end: 105eff6c3; -[SCMapPlacesController lockTargetForAltitudeSliderMapZoomWithinCoordinateBounds:] */

/* WARNING: Possible PIC construction at 0x000105eff674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105eff678) */
/* WARNING: Removing unreachable block (ram,0x000105eff67c) */
/* WARNING: Removing unreachable block (ram,0x000105eff680) */
/* WARNING: Removing unreachable block (ram,0x000105eff684) */
/* WARNING: Removing unreachable block (ram,0x000105eff688) */
/* WARNING: Removing unreachable block (ram,0x000105eff6ac) */

undefined1  [16] FUN_105eff644(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  if (*(long *)(param_3 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_3 + 0x48),PTR_s_coordinate_1125b20c8);
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return *(undefined1 (*) [16])PTR__kCLLocationCoordinate2DInvalid_110349b98;
}



/* Entry: 105eff6c4; end: 105eff70f; -[SCMapPlacesController _hasFriendStoryForPlace:] */

undefined8 FUN_105eff6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfcf800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4b900();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105eff710; end: 105eff87f; -[SCMapPlacesController _getFriendUserIdForPlace:] */

void FUN_105eff710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c0ed7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_e8;
  uVar7 = 0x10;
  lVar1 = param_5;
  func_0x00010bf52a60();
  iVar6 = (int)uVar7;
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_5);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar8 = uVar9;
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010c0720c0();
        _objc_release(uVar8);
        iVar6 = (int)uVar7;
        if ((uVar2 & 1) != 0) {
          func_0x00010c27e100();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar9;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          goto LAB_105eff838;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar5 = auStack_e8;
      uVar7 = 0x10;
      lVar1 = param_5;
      func_0x00010bf52a60(param_5,param_4,&uStack_130);
      iVar6 = (int)uVar7;
    } while (lVar1 != 0);
  }
  uVar8 = 0;
LAB_105eff838:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  *(undefined1 *)(param_5 + 0xb0) = 0;
  uVar3 = *(undefined8 *)(param_5 + 0x48);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bfe5ec0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c0720c0(uVar3,param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
  if ((int)uVar7 == 0) {
    if (iVar6 == 0) {
      func_0x00010beaedc0(param_5,param_4,puVar5);
    }
    else {
      puVar4 = puVar5;
      func_0x00010bfe5ec0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be48640(uVar12,param_2,param_5,param_4,puVar4);
      _objc_release(puVar4);
      _objc_retain(puVar5);
      uVar7 = *(undefined8 *)(param_5 + 0x48);
      *(undefined1 **)(param_5 + 0x48) = puVar5;
      _objc_release(uVar7);
      *(undefined1 *)(param_5 + 0xb0) = 1;
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_5 + 0xb8);
    puVar4 = puVar5;
    func_0x00010bfe5ec0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar7,param_4,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105eff880; end: 105eff9af; -[SCMapPlacesController placesBasemapLayer:placeWasTapped:screenPoint:touchWorldLocation:shouldPlayStory:] */

void FUN_105eff880(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  *(undefined1 *)(param_3 + 0xb0) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x48);
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010bfe5ec0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0(uVar1,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    if (param_7 == 0) {
      func_0x00010beaedc0(param_3,param_4,param_6);
    }
    else {
      uVar2 = param_6;
      func_0x00010bfe5ec0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be48640(param_1,param_2,param_3,param_4,uVar2);
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)(param_3 + 0x48);
      *(undefined8 *)(param_3 + 0x48) = param_6;
      _objc_release(uVar2);
      *(undefined1 *)(param_3 + 0xb0) = 1;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_3 + 0xb8);
    uVar2 = param_6;
    func_0x00010bfe5ec0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_4,uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105eff9b0; end: 105eff9b7; -[SCMapPlacesController handleOpenPlaceForBasemapPlace:] */

void FUN_105eff9b0(long param_1)

{
  *(undefined1 *)(param_1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010beaedd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupPlaceProfileTrayForPlace__112589518);
  return;
}



/* Entry: 105eff9b8; end: 105effa9f; -[SCMapPlacesController handleOpenPlaceCalloutWithPlaceID:userID:location:] */

void FUN_105eff9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (((lVar1 != 0) && (lVar1 = param_6, func_0x00010c08fa60(), lVar1 != 0)) &&
     (_CLLocationCoordinate2DIsValid(param_1,param_2), (int)lVar1 != 0)) {
    uVar2 = 0x22;
    func_0x000100c6f294(0x22);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0xb;
    func_0x00010ba1c764(0xb);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c158f60(param_1,param_2,0x402e000000000000,param_3,param_4,param_5,0,uVar2,uVar3,1);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105effaa0; end: 105effaa3; -[SCMapPlacesController handlePlayPlaceStoryForPlaceID:touchPoint:] */

void FUN_105effaa0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be48650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchStoryForPlace_touchPoint__11256fb30);
  return;
}



/* Entry: 105effaa4; end: 105effaab; -[SCMapPlacesController handlePlayFriendStoryForPlaceID:friendID:touchPoint:] */

void FUN_105effaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be48630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__launchStoryForFriendUserId_touc_11256fb28,param_4);
  return;
}



/* Entry: 105effaac; end: 105effb87; -[SCMapPlacesController mapPlaceProfileV2ScopeDidDismiss:] */

void FUN_105effaac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_3) {
      lVar1 = param_1 + 0x68;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf475a0();
      _objc_release(lVar1);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      _objc_release(uVar2);
      _objc_storeWeak(param_1 + 0x88,0);
      _objc_storeWeak(param_1 + 0x90,0);
      lVar1 = *(long *)(param_1 + 0x80);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105effb88; end: 105effbd3; -[SCMapPlacesController mapStoryDidFinishPresentingWithTransitionAnimator:] */

void FUN_105effb88(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(param_1 + 0xb0) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    func_0x00010beaedc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105effbd4; end: 105effc1b; -[SCMapPlacesController mapStoryDidDismiss] */

void FUN_105effbd4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105effc1c; end: 105effc63; -[SCMapPlacesController mapStoryManifestRequestDidFailWithResult:] */

void FUN_105effc1c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105effc64; end: 105effc6b; -[SCMapPlacesController switchingBetweenTrays] */

undefined1 FUN_105effc64(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 105effc6c; end: 105effc73; -[SCMapPlacesController setSwitchingBetweenTrays:] */

void FUN_105effc6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 105effc74; end: 105effd3b; -[SCMapPlacesController .cxx_destruct] */

void FUN_105effc74(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


