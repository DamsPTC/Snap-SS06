/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b28e988; end: 10b28e98b; -[SCLogViewer hidePicker] */

void FUN_10b28e988(void)

{
  return;
}



/* Entry: 10b28e98c; end: 10b28e98f; -[SCLogViewer handleFilterSelected] */

void FUN_10b28e98c(void)

{
  return;
}



/* Entry: 10b28e990; end: 10b28e993; -[SCLogViewer clearLogType:] */

void FUN_10b28e990(void)

{
  return;
}



/* Entry: 10b28e994; end: 10b28e99b; -[SCLogViewer isEnabledFor:] */

undefined8 FUN_10b28e994(void)

{
  return 0;
}



/* Entry: 10b28e99c; end: 10b28e99f; -[SCLogViewer updateBlizzardBlacklist:] */

void FUN_10b28e99c(void)

{
  return;
}



/* Entry: 10b28e9a0; end: 10b28e9a7; -[SCLogViewer blizzardBlacklist] */

undefined8 FUN_10b28e9a0(void)

{
  return 0;
}



/* Entry: 10b28e9a8; end: 10b28e9b3; -[SCLogViewer isListFiltersInitialized] */

byte FUN_10b28e9a8(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 10b28e9b4; end: 10b28e9bb; -[SCLogViewer setIsListFiltersInitialized:] */

void FUN_10b28e9b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b28e9bc; end: 10b28ea1f; -[SCRingBuffer initWithCapacity:] */

undefined8 FUN_10b28e9bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc4e0(param_1,param_2,param_3,puVar1,0);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b28ea20; end: 10b28eaa7; -[SCRingBuffer initWithCapacity:storage:totalObjectsAdded:] */

undefined1 *
FUN_10b28ea20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706100;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b28eaa8; end: 10b28eaf3; -[SCRingBuffer addObject:] */

void FUN_10b28eaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 < uVar1) {
    func_0x00010befa120();
  }
  else {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    func_0x00010c1d04c0(*(undefined8 *)(param_1 + 8),param_2,param_3,uVar2 - uVar3 * uVar1);
  }
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return;
}



/* Entry: 10b28eaf4; end: 10b28eb03; -[SCRingBuffer count] */

ulong FUN_10b28eaf4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = *(ulong *)(param_1 + 0x10);
  }
  return uVar1;
}



/* Entry: 10b28eb04; end: 10b28eb3b; -[SCRingBuffer objectAtIndexedSubscript:] */

void FUN_10b28eb04(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 <= *(ulong *)(param_1 + 0x18)) {
    uVar1 = *(ulong *)(param_1 + 0x18) + param_3;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    param_3 = uVar1 - uVar3 * uVar2;
  }
  func_0x00010c0dfd40(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b28eb3c; end: 10b28eb63; -[SCRingBuffer removeAllObjects] */

void FUN_10b28eb3c(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b28eb64; end: 10b28ebcf; -[SCRingBuffer copyWithZone:] */

undefined * FUN_10b28eb64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126e0088;
  _objc_alloc(PTR_PTR_1126e0088);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d3ca0(uVar3,param_2,param_3);
  func_0x00010bffc4e0(puVar2,param_2,uVar1,uVar3,*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar3);
  return puVar2;
}



/* Entry: 10b28ebd0; end: 10b28ec0f; -[SCRingBuffer lastObject] */

void FUN_10b28ebd0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf529e0(param_1);
    func_0x00010c0dfd40(param_1,param_2,lVar1 + -1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b28ec10; end: 10b28ec1b; -[SCRingBuffer .cxx_destruct] */

void FUN_10b28ec10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b28ec1c; end: 10b28ecaf; -[SCLineGraphViewPoint copyWithZone:] */

undefined * FUN_10b28ec1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126e0090;
  _objc_opt_new(PTR_PTR_1126e0090);
  func_0x00010c296d80(param_1);
  func_0x00010c220160(puVar1);
  uVar2 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1b71a0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c27dd80(param_1);
  func_0x00010c21acc0(puVar1,param_2,param_1);
  return puVar1;
}



/* Entry: 10b28ecb0; end: 10b28ecb7; -[SCLineGraphViewPoint type] */

undefined8 FUN_10b28ecb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b28ecb8; end: 10b28ecbf; -[SCLineGraphViewPoint setType:] */

void FUN_10b28ecb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b28ecc0; end: 10b28ecc7; -[SCLineGraphViewPoint value] */

undefined8 FUN_10b28ecc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b28ecc8; end: 10b28eccf; -[SCLineGraphViewPoint setValue:] */

void FUN_10b28ecc8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10b28ecd0; end: 10b28ecd7; -[SCLineGraphViewPoint label] */

undefined8 FUN_10b28ecd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b28ecd8; end: 10b28ecdf; -[SCLineGraphViewPoint setLabel:] */

void FUN_10b28ecd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b28ece0; end: 10b28eceb; -[SCLineGraphViewPoint .cxx_destruct] */

void FUN_10b28ece0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b28ecec; end: 10b28ed1f; -[SCLineGraphView initWithFrame:] */

void FUN_10b28ecec(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112706108;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 10b28ed20; end: 10b28ed23; -[SCLineGraphView clear] */

void FUN_10b28ed20(void)

{
  return;
}



/* Entry: 10b28ed24; end: 10b28ed27; -[SCLineGraphView drawRect:] */

void FUN_10b28ed24(void)

{
  return;
}



/* Entry: 10b28ed28; end: 10b28ed5b; -[SCLineGraphView layoutSubviews] */

void FUN_10b28ed28(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112706108;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 10b28ed5c; end: 10b28eec7; -[SCLineGraphView addPoint:series:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b28ed5c(double param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  
  _objc_retain(param_4);
  lVar5 = (long)_DAT_11278dfb8;
  uVar1 = *(ulong *)(param_2 + lVar5);
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126e0088;
  while (PTR_PTR_1126e0088 = puVar2, uVar1 <= param_5) {
    uVar3 = *(undefined8 *)(param_2 + lVar5);
    _objc_alloc(puVar2);
    func_0x00010bffc4a0();
    func_0x00010befa120(uVar3,param_3,puVar2);
    _objc_release(puVar2);
    uVar1 = *(ulong *)(param_2 + lVar5);
    func_0x00010bf529e0();
    puVar2 = PTR_PTR_1126e0088;
  }
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c0dfd40(uVar3,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar3);
  lVar5 = param_4;
  func_0x00010c27dd80();
  if (lVar5 == 0) {
    lVar5 = (long)_DAT_11278dfcc;
    if (*(long *)(param_2 + lVar5) == 0) {
      func_0x00010c296d80(param_4);
      *(double *)(param_2 + _DAT_11278dfd4) = param_1;
      *(double *)(param_2 + _DAT_11278dfd0) = param_1;
    }
    else {
      lVar4 = (long)_DAT_11278dfd0;
      dVar6 = *(double *)(param_2 + lVar4);
      func_0x00010c296d80(param_4);
      if (param_1 <= dVar6) {
        param_1 = dVar6;
      }
      *(double *)(param_2 + lVar4) = param_1;
      lVar4 = (long)_DAT_11278dfd4;
      dVar6 = *(double *)(param_2 + lVar4);
      func_0x00010c296d80(param_4);
      if (param_1 <= dVar6) {
        dVar6 = param_1;
      }
      *(double *)(param_2 + lVar4) = dVar6;
    }
    *(long *)(param_2 + lVar5) = *(long *)(param_2 + lVar5) + 1;
    func_0x00010c1cbd40(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b28eec8; end: 10b28eed7; -[SCLineGraphView unitsSuffix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b28eec8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dfd8);
}



/* Entry: 10b28eed8; end: 10b28eee3; -[SCLineGraphView setUnitsSuffix:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b28eed8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b28eee4; end: 10b28eef3; -[SCLineGraphView currentValueLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b28eee4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dfc0);
}



/* Entry: 10b28eef4; end: 10b28ef33; -[SCLineGraphView setCurrentValueLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b28eef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278dfc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b28ef34; end: 10b28ef43; -[SCLineGraphView minValueLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b28ef34(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dfc8);
}



/* Entry: 10b28ef44; end: 10b28ef83; -[SCLineGraphView setMinValueLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b28ef44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278dfc8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b28ef84; end: 10b28ef93; -[SCLineGraphView maxValueLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b28ef84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dfc4);
}



/* Entry: 10b28ef94; end: 10b28efd3; -[SCLineGraphView setMaxValueLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b28ef94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278dfc4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b28efd4; end: 10b28f053; -[SCLineGraphView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b28efd4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278dfc4,0);
  _objc_storeStrong(param_1 + _DAT_11278dfc8,0);
  _objc_storeStrong(param_1 + _DAT_11278dfc0,0);
  _objc_storeStrong(param_1 + _DAT_11278dfd8,0);
  _objc_storeStrong(param_1 + _DAT_11278dfbc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278dfb8,0);
  return;
}



/* Entry: 10b28f054; end: 10b28f0f3; -[SCLogViewerButton hitTest:withEvent:] */

void FUN_10b28f054(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  int iVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar2;
  
  dVar3 = param_1;
  dVar5 = param_2;
  func_0x00010bf20c00();
  uVar2 = param_5;
  dVar4 = dVar3;
  dVar6 = dVar5;
  dVar7 = param_3;
  dVar8 = param_4;
  func_0x00010bfe3a60();
  iVar1 = (int)uVar2;
  _CGRectContainsPoint
            (dVar3 + dVar6,dVar5 + dVar4,param_3 - (dVar6 + dVar8),param_4 - (dVar4 + dVar7),param_1
             ,param_2);
  if (iVar1 == 0) {
    param_5 = 0;
  }
  else {
    _objc_retain(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b28f0f4; end: 10b28f10b; -[SCLogViewerButton hitTestEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b28f0f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278dfdc);
}



/* Entry: 10b28f10c; end: 10b28f123; -[SCLogViewerButton setHitTestEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b28f10c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278dfdc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b28f124; end: 10b28f24f;  */

byte * FUN_10b28f124(undefined8 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  pbVar2 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  pbVar3 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  pbVar4 = pbVar2;
  func_0x00010bf433a0();
  _objc_release(pbVar3);
  _objc_release(pbVar2);
  if (pbVar4 == (byte *)0x0) {
    pbVar4 = param_2;
    func_0x00010befd580();
    bVar1 = *pbVar4;
    pbVar4 = param_3;
    func_0x00010befd580();
    if (bVar1 < *pbVar4) {
      pbVar4 = (byte *)0xffffffffffffffff;
    }
    else {
      pbVar4 = param_2;
      func_0x00010befd580();
      bVar1 = *pbVar4;
      pbVar4 = param_3;
      func_0x00010befd580();
      if (*pbVar4 < bVar1) {
        pbVar4 = (byte *)0x1;
      }
      else {
        pbVar2 = param_2;
        func_0x00010befd580();
        pbVar4 = param_3;
        func_0x00010befd580(param_3);
        pbVar3 = param_2;
        func_0x00010befd580();
        _memcmp(pbVar2,pbVar4,*pbVar3);
        pbVar4 = (byte *)(ulong)(0 < (int)pbVar2);
        if ((int)pbVar2 < 0) {
          pbVar4 = (byte *)0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return pbVar4;
}



/* Entry: 10b28f250; end: 10b28f30b; -[SCNetworkInterfaceAddress initWithName:address:] */

undefined1 * FUN_10b28f250(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706110;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar5 = (ulong)*param_4;
    _malloc();
    *(ulong *)((long)puVar1 + 0x10) = uVar5;
    if (uVar5 == 0) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b28f2ec;
    }
    _memcpy();
  }
  _objc_retain(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_10b28f2ec:
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10b28f30c; end: 10b28f357; -[SCNetworkInterfaceAddress dealloc] */

void FUN_10b28f30c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  puStack_28 = PTR_PTR_112706110;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b28f358; end: 10b28f3c3; -[SCNetworkInterfaceAddress isEqual:] */

bool FUN_10b28f358(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126e0098;
  _objc_opt_class(PTR_PTR_1126e0098);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    FUN_10b28f124();
    bVar1 = uVar3 == 0;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b28f3c4; end: 10b28f407; -[SCNetworkInterfaceAddress isWifi] */

undefined8 FUN_10b28f3c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfda7c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b28f408; end: 10b28f44b; -[SCNetworkInterfaceAddress isWwan] */

undefined8 FUN_10b28f408(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfda7c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b28f44c; end: 10b28f45f; -[SCNetworkInterfaceAddress isIPv6] */

bool FUN_10b28f44c(long param_1)

{
  return *(char *)(*(long *)(param_1 + 0x10) + 1) == '\x1e';
}



/* Entry: 10b28f460; end: 10b28f4bb; -[SCNetworkInterfaceAddress hasRoutableAddress] */

bool FUN_10b28f460(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010c074ee0();
  lVar3 = *(long *)(param_1 + 0x10);
  if ((int)lVar2 == 0) {
    bVar1 = *(short *)(lVar3 + 6) != -0x5602;
  }
  else if (*(char *)(lVar3 + 8) == -2) {
    bVar1 = -0x41 < *(char *)(lVar3 + 9);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b28f4bc; end: 10b28f4c3; -[SCNetworkInterfaceAddress name] */

undefined8 FUN_10b28f4bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b28f4c4; end: 10b28f4cb; -[SCNetworkInterfaceAddress address] */

undefined8 FUN_10b28f4c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b28f4cc; end: 10b28f4d7; -[SCNetworkInterfaceAddress .cxx_destruct] */

void FUN_10b28f4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b28f4d8; end: 10b28f637; +[SCNetworkInterfaces wifiInterfaceIPv4Address] */

undefined * FUN_10b28f4d8(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x21;
  long *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *unaff_x23;
  long unaff_x24;
  long lVar14;
  long unaff_x25;
  undefined *puVar15;
  ulong unaff_x26;
  long *plStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined1 *puStack_4a8;
  undefined1 ****ppppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long *plStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_3c8;
  ulong uStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined1 ***pppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_2a8;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar8 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  FUN_10b28fb88();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bf52a60();
  if (lVar14 != 0) {
    unaff_x24 = *plStack_120;
    unaff_x21 = lVar14;
    do {
      unaff_x25 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        puVar12 = *(undefined **)(lStack_128 + unaff_x25 * 8);
        unaff_x23 = puVar12;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = unaff_x23;
        ppuVar8 = &PTR____CFConstantStringClassReference_110f60ff8;
        func_0x00010c0720c0();
        if ((int)puVar4 == 0) {
          _objc_release(unaff_x23);
        }
        else {
          puVar4 = puVar12;
          func_0x00010befd580();
          bVar1 = puVar4[1];
          unaff_x26 = (ulong)bVar1;
          _objc_release(unaff_x23);
          if (bVar1 == 2) {
            _objc_retain(puVar12);
            goto LAB_10b28f5f0;
          }
        }
        unaff_x25 = unaff_x25 + 1;
      } while (unaff_x21 != unaff_x25);
      unaff_x21 = param_1;
      ppuVar8 = &puStack_130;
      func_0x00010bf52a60();
    } while (unaff_x21 != 0);
  }
  puVar12 = (undefined *)0x0;
LAB_10b28f5f0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puStack_140 = &stack0xfffffffffffffff0;
    pcStack_138 = FUN_10b28f638;
    lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((ppuVar8 == (undefined **)0x0) ||
       (*(char *)((long)ppuVar8 + 1) != '\x1e' && *(char *)((long)ppuVar8 + 1) != '\x02')) {
      puVar12 = (undefined *)0x0;
    }
    else {
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      lStack_248 = 0;
      uStack_250 = 0;
      uStack_238 = 0;
      puStack_240 = (undefined8 *)0x0;
      FUN_10b28fb88();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010bf52a60();
      if (lVar14 != 0) {
        unaff_x23 = (undefined *)*puStack_240;
        unaff_x21 = lVar14;
        do {
          unaff_x24 = 0;
          do {
            if ((undefined *)*puStack_240 != unaff_x23) {
              _objc_enumerationMutation(param_1);
            }
            puVar12 = *(undefined **)(lStack_248 + unaff_x24 * 8);
            puVar4 = puVar12;
            func_0x00010befd580();
            cVar2 = puVar4[1];
            if (cVar2 == *(char *)((long)ppuVar8 + 1)) {
              if (cVar2 == '\x1e') {
                puVar4 = puVar12;
                func_0x00010befd580();
                if (*(undefined **)(puVar4 + 8) == ppuVar8[1] &&
                    *(undefined **)(puVar4 + 0x10) == ppuVar8[2]) goto LAB_10b28f774;
              }
              else if ((cVar2 == '\x02') &&
                      (puVar4 = puVar12, func_0x00010befd580(),
                      *(int *)(puVar4 + 4) == *(int *)((long)ppuVar8 + 4))) {
LAB_10b28f774:
                _objc_retain(puVar12);
                goto LAB_10b28f77c;
              }
            }
            unaff_x24 = unaff_x24 + 1;
          } while (unaff_x21 != unaff_x24);
          unaff_x21 = param_1;
          func_0x00010bf52a60();
        } while (unaff_x21 != 0);
      }
      puVar12 = (undefined *)0x0;
LAB_10b28f77c:
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
      ___stack_chk_fail();
      puVar9 = &uStack_370;
      pcStack_258 = FUN_10b28f7c0;
      lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      puStack_360 = (undefined8 *)0x0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      ppuStack_260 = &puStack_140;
      FUN_10b28fb88();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = param_1;
      func_0x00010bf52a60();
      if (lVar14 == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        unaff_x23 = (undefined *)*puStack_360;
        do {
          unaff_x24 = 0;
          do {
            if ((undefined *)*puStack_360 != unaff_x23) {
              _objc_enumerationMutation(param_1);
            }
            unaff_x21 = *(long *)(lStack_368 + unaff_x24 * 8);
            lVar5 = unaff_x21;
            func_0x00010c083dc0();
            if (((int)lVar5 != 0) && (lVar5 = unaff_x21, func_0x00010bfdb500(), (int)lVar5 != 0)) {
              if (((int)uVar13 != 0) || (lVar5 = unaff_x21, func_0x00010c074ee0(), (int)lVar5 == 0))
              {
                uVar10 = 0;
                goto LAB_10b28f8b8;
              }
              uVar13 = 1;
            }
            unaff_x24 = unaff_x24 + 1;
          } while (lVar14 != unaff_x24);
          lVar14 = param_1;
          puVar9 = &uStack_370;
          func_0x00010bf52a60();
        } while (lVar14 != 0);
      }
      uVar10 = 1;
LAB_10b28f8b8:
      _objc_release(param_1);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
        return (undefined *)(ulong)((uint)uVar13 & (uint)uVar10);
      }
      ___stack_chk_fail();
      pcStack_378 = FUN_10b28f8fc;
      lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_3c0 = unaff_x26;
      lStack_3b8 = unaff_x25;
      lStack_3b0 = unaff_x24;
      puStack_3a8 = unaff_x23;
      uStack_3a0 = uVar13;
      lStack_398 = unaff_x21;
      uStack_390 = uVar10;
      lStack_388 = param_1;
      pppuStack_380 = &ppuStack_260;
      _objc_retain(puVar9);
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_488 = 0;
      uStack_490 = 0;
      uStack_478 = 0;
      plStack_480 = (long *)0x0;
      uStack_468 = 0;
      uStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      puVar12 = puVar4;
      FUN_10b28fb88();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar12;
      func_0x00010bf52a60();
      if (puVar6 != (undefined *)0x0) {
        lVar14 = *plStack_480;
        do {
          puVar15 = (undefined *)0x0;
          do {
            if (*plStack_480 != lVar14) {
              _objc_enumerationMutation(puVar12);
            }
            if ((puVar9 != (undefined8 *)0x0) &&
               (puVar7 = (undefined1 *)puVar9,
               (**(code **)((long)puVar9 + 0x10))
                         (puVar9,*(undefined8 *)(lStack_488 + (long)puVar15 * 8)), (int)puVar7 != 0)
               ) {
              func_0x00010befa120(puVar4);
            }
            puVar15 = puVar15 + 1;
          } while (puVar6 != puVar15);
          puVar6 = puVar12;
          func_0x00010bf52a60();
          uVar13 = 0;
        } while (puVar6 != (undefined *)0x0);
      }
      _objc_release(puVar12);
      puVar12 = puVar4;
      func_0x00010bf51e00();
      _objc_release(puVar4);
      _objc_release(puVar9);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
        ___stack_chk_fail();
        pcStack_498 = FUN_10b28fa58;
        puVar6 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
        uStack_4c0 = uVar13;
        puStack_4b8 = puVar12;
        puStack_4b0 = puVar4;
        puStack_4a8 = (undefined1 *)puVar9;
        ppppuStack_4a0 = &pppuStack_380;
        _objc_opt_new(PTR__OBJC_CLASS___NSCountedSet_1126ba498);
        iVar3 = (int)&plStack_4c8;
        _getifaddrs();
        puVar12 = puVar6;
        if (iVar3 == 0) {
          plVar11 = plStack_4c8;
          if (plStack_4c8 == (long *)0x0) {
            plStack_4c8 = (long *)0x0;
          }
          else {
            do {
              if ((*(byte *)(plVar11 + 2) & 1) != 0) {
                puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar6);
                _objc_release(puVar4);
              }
              plVar11 = (long *)*plVar11;
            } while (plVar11 != (long *)0x0);
          }
          _freeifaddrs(plStack_4c8);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return puVar12;
}



/* Entry: 10b28f638; end: 10b28f7bf; +[SCNetworkInterfaces interfaceForAddress:] */

undefined * FUN_10b28f638(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long *plStack_398;
  undefined8 uStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined1 *puStack_378;
  undefined1 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long *plStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_298;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3 == 0) || (*(char *)(param_3 + 1) != '\x1e' && *(char *)(param_3 + 1) != '\x02')) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    FUN_10b28fb88();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010bf52a60();
    if (lVar14 != 0) {
      lVar12 = *plStack_110;
      do {
        lVar13 = 0;
        do {
          if (*plStack_110 != lVar12) {
            _objc_enumerationMutation(param_1);
          }
          puVar10 = *(undefined **)(lStack_118 + lVar13 * 8);
          puVar3 = puVar10;
          func_0x00010befd580();
          cVar1 = puVar3[1];
          if (cVar1 == *(char *)(param_3 + 1)) {
            if (cVar1 == '\x1e') {
              puVar3 = puVar10;
              func_0x00010befd580();
              if (*(long *)(puVar3 + 8) == *(long *)(param_3 + 8) &&
                  *(long *)(puVar3 + 0x10) == *(long *)(param_3 + 0x10)) goto LAB_10b28f774;
            }
            else if ((cVar1 == '\x02') &&
                    (puVar3 = puVar10, func_0x00010befd580(),
                    *(int *)(puVar3 + 4) == *(int *)(param_3 + 4))) {
LAB_10b28f774:
              _objc_retain(puVar10);
              goto LAB_10b28f77c;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = param_1;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    puVar10 = (undefined *)0x0;
LAB_10b28f77c:
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = &uStack_240;
    pcStack_128 = FUN_10b28f7c0;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puStack_130 = &stack0xfffffffffffffff0;
    FUN_10b28fb88();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1;
    func_0x00010bf52a60();
    if (lVar14 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      lVar12 = *plStack_230;
      do {
        lVar13 = 0;
        do {
          if (*plStack_230 != lVar12) {
            _objc_enumerationMutation(param_1);
          }
          iVar8 = (int)*(undefined8 *)(lStack_238 + lVar13 * 8);
          iVar2 = iVar8;
          func_0x00010c083dc0();
          if ((iVar2 != 0) && (iVar2 = iVar8, func_0x00010bfdb500(), iVar2 != 0)) {
            if (((int)uVar11 != 0) || (func_0x00010c074ee0(), iVar8 == 0)) {
              uVar7 = 0;
              goto LAB_10b28f8b8;
            }
            uVar11 = 1;
          }
          lVar13 = lVar13 + 1;
        } while (lVar14 != lVar13);
        lVar14 = param_1;
        puVar6 = &uStack_240;
        func_0x00010bf52a60();
      } while (lVar14 != 0);
    }
    uVar7 = 1;
LAB_10b28f8b8:
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return (undefined *)(ulong)((uint)uVar11 & uVar7);
    }
    ___stack_chk_fail();
    pcStack_248 = FUN_10b28f8fc;
    lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_250 = &puStack_130;
    _objc_retain(puVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    plStack_350 = (long *)0x0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    puVar10 = puVar3;
    FUN_10b28fb88();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar14 = *plStack_350;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_350 != lVar14) {
            _objc_enumerationMutation(puVar10);
          }
          if ((puVar6 != (undefined8 *)0x0) &&
             (puVar5 = (undefined1 *)puVar6,
             (**(code **)((long)puVar6 + 0x10))
                       (puVar6,*(undefined8 *)(lStack_358 + (long)puVar15 * 8)), (int)puVar5 != 0))
          {
            func_0x00010befa120(puVar3);
          }
          puVar15 = puVar15 + 1;
        } while (puVar4 != puVar15);
        puVar4 = puVar10;
        func_0x00010bf52a60();
        uVar11 = 0;
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar10);
    puVar10 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_298) {
      ___stack_chk_fail();
      pcStack_368 = FUN_10b28fa58;
      puVar4 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
      uStack_390 = uVar11;
      puStack_388 = puVar10;
      puStack_380 = puVar3;
      puStack_378 = (undefined1 *)puVar6;
      pppuStack_370 = &ppuStack_250;
      _objc_opt_new(PTR__OBJC_CLASS___NSCountedSet_1126ba498);
      iVar2 = (int)&plStack_398;
      _getifaddrs();
      puVar10 = puVar4;
      if (iVar2 == 0) {
        plVar9 = plStack_398;
        if (plStack_398 == (long *)0x0) {
          plStack_398 = (long *)0x0;
        }
        else {
          do {
            if ((*(byte *)(plVar9 + 2) & 1) != 0) {
              puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(puVar3);
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        _freeifaddrs(plStack_398);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 10b28f7c0; end: 10b28f8fb; +[SCNetworkInterfaces isWwanInterfaceIPv6Only] */

undefined * FUN_10b28f7c0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long *plStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined1 *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  FUN_10b28fb88();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf52a60();
  if (lVar13 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar11 = *plStack_110;
    do {
      lVar12 = 0;
      do {
        if (*plStack_110 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        iVar8 = (int)*(undefined8 *)(lStack_118 + lVar12 * 8);
        iVar1 = iVar8;
        func_0x00010c083dc0();
        if ((iVar1 != 0) && (iVar1 = iVar8, func_0x00010bfdb500(), iVar1 != 0)) {
          if (((int)uVar10 != 0) || (func_0x00010c074ee0(), iVar8 == 0)) {
            uVar7 = 0;
            goto LAB_10b28f8b8;
          }
          uVar10 = 1;
        }
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      lVar13 = param_1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  uVar7 = 1;
LAB_10b28f8b8:
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10b28f8fc;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puVar3 = puVar2;
    FUN_10b28fb88();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar13 = *plStack_230;
      do {
        puVar14 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar13) {
            _objc_enumerationMutation(puVar3);
          }
          if ((puVar6 != (undefined8 *)0x0) &&
             (puVar5 = (undefined1 *)puVar6,
             (**(code **)((long)puVar6 + 0x10))
                       (puVar6,*(undefined8 *)(lStack_238 + (long)puVar14 * 8)), (int)puVar5 != 0))
          {
            func_0x00010befa120(puVar2);
          }
          puVar14 = puVar14 + 1;
        } while (puVar4 != puVar14);
        puVar4 = puVar3;
        func_0x00010bf52a60();
        uVar10 = 0;
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf51e00();
    _objc_release(puVar2);
    _objc_release(puVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      pcStack_248 = FUN_10b28fa58;
      puVar4 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
      uStack_270 = uVar10;
      puStack_268 = puVar3;
      puStack_260 = puVar2;
      puStack_258 = (undefined1 *)puVar6;
      ppuStack_250 = &puStack_130;
      _objc_opt_new(PTR__OBJC_CLASS___NSCountedSet_1126ba498);
      iVar1 = (int)&plStack_278;
      _getifaddrs();
      puVar3 = puVar4;
      if (iVar1 == 0) {
        plVar9 = plStack_278;
        if (plStack_278 == (long *)0x0) {
          plStack_278 = (long *)0x0;
        }
        else {
          do {
            if ((*(byte *)(plVar9 + 2) & 1) != 0) {
              puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(puVar2);
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        _freeifaddrs(plStack_278);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  return (undefined *)(ulong)((uint)uVar10 & uVar7);
}



/* Entry: 10b28f8fc; end: 10b28fa57; +[SCNetworkInterfaces interfacesThatMatch:] */

void FUN_10b28f8fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 unaff_x22;
  long lVar7;
  undefined *puVar8;
  long *plStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = puVar2;
  FUN_10b28fb88();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(puVar3);
        }
        if ((param_3 != 0) &&
           (lVar5 = param_3,
           (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(lStack_118 + (long)puVar8 * 8)),
           (int)lVar5 != 0)) {
          func_0x00010befa120(puVar2);
        }
        puVar8 = puVar8 + 1;
      } while (puVar4 != puVar8);
      puVar4 = puVar3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10b28fa58;
    puVar4 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
    uStack_150 = unaff_x22;
    puStack_148 = puVar3;
    puStack_140 = puVar2;
    lStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_opt_new(PTR__OBJC_CLASS___NSCountedSet_1126ba498);
    iVar1 = (int)&plStack_158;
    _getifaddrs();
    puVar3 = puVar4;
    if (iVar1 == 0) {
      plVar6 = plStack_158;
      if (plStack_158 == (long *)0x0) {
        plStack_158 = (long *)0x0;
      }
      else {
        do {
          if ((*(byte *)(plVar6 + 2) & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4);
            _objc_release(puVar2);
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      _freeifaddrs(plStack_158);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b28fa58; end: 10b28faf7; +[SCNetworkInterfaces _interfaceNames] */

void FUN_10b28fa58(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  _objc_opt_new(PTR__OBJC_CLASS___NSCountedSet_1126ba498);
  iVar1 = (int)&plStack_38;
  _getifaddrs();
  if (iVar1 == 0) {
    plVar4 = plStack_38;
    if (plStack_38 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      do {
        if ((*(byte *)(plVar4 + 2) & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar4[1]);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2,param_2,puVar3);
          _objc_release(puVar3);
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    _freeifaddrs(plStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b28faf8; end: 10b28fb3f; +[SCNetworkInterfaces isWiFiEnabled] */

bool FUN_10b28faf8(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be3d3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52b00();
  _objc_release(param_1);
  return 1 < uVar1;
}



/* Entry: 10b28fb40; end: 10b28fb87; +[SCNetworkInterfaces isConnectedToWiFi] */

bool FUN_10b28fb40(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010be3d3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52b00();
  _objc_release(param_1);
  return 1 < uVar1;
}



/* Entry: 10b28fb88; end: 10b28fc63;  */

void FUN_10b28fb88(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)&plStack_38;
  _getifaddrs();
  if (iVar1 == 0) {
    plVar4 = plStack_38;
    if (plStack_38 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      do {
        if (*(char *)(plVar4[3] + 1) == '\x1e' || *(char *)(plVar4[3] + 1) == '\x02') {
          puVar3 = PTR_PTR_1126e0098;
          _objc_alloc();
          func_0x00010c02d520();
          if (puVar3 != (undefined *)0x0) {
            func_0x00010befa120(puVar2,param_2,puVar3);
          }
          _objc_release(puVar3);
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    _freeifaddrs(plStack_38);
  }
  func_0x00010c246ba0(puVar2,param_2,&PTR___NSConcreteGlobalBlock_110cd0748);
  puVar3 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b28fc64; end: 10b28fc6b; -[SCExponentialGeometricFilter reset] */

void FUN_10b28fc64(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10b28fc6c; end: 10b28fd93; -[SCExponentialGeometricFilter performFilteringWithNewSample:] */

void FUN_10b28fc6c(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  func_0x00010bfaeb60();
  func_0x00010c1b5420(param_2);
  dVar3 = 2000.0;
  if (param_1 <= 2000.0) {
    param_1 = dVar3;
  }
  uVar1 = param_2;
  func_0x00010c149760();
  if (*(ulong *)(param_2 + 8) < uVar1) {
    func_0x00010bfadb20(param_2);
    dVar4 = dVar3;
    func_0x00010bfaeb60(param_2);
    _log();
    dVar5 = dVar4;
    func_0x00010bfadb20(param_2);
  }
  else {
    uVar1 = param_2;
    func_0x00010c149760();
    if ((uVar1 == 0) && (uVar1 = param_2, func_0x00010bfebb40(), (int)uVar1 == 0))
    goto LAB_10b28fd64;
    func_0x00010bfadb20(param_2);
    uVar1 = param_2;
    func_0x00010c149760(param_2);
    uVar2 = param_2;
    func_0x00010c149760(param_2);
    dVar4 = (double)uVar2 + 1.0;
    dVar5 = (dVar3 * (double)uVar1) / dVar4;
    func_0x00010bfaeb60(param_2);
    _log();
    dVar3 = dVar5;
  }
  _log(param_1);
  param_1 = param_1 * (1.0 - dVar3) + dVar5 * dVar4;
  _exp(param_1);
LAB_10b28fd64:
  func_0x00010c19c880(param_1,param_2);
  uVar1 = param_2;
  func_0x00010c149760(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setSampleCount__11265af08,uVar1 + 1);
  return;
}



/* Entry: 10b28fd94; end: 10b28fd9b; -[SCExponentialGeometricFilter filteredValue] */

undefined8 FUN_10b28fd94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b28fd9c; end: 10b28fda3; -[SCExponentialGeometricFilter setFilteredValue:] */

void FUN_10b28fd9c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10b28fda4; end: 10b28fdab; -[SCExponentialGeometricFilter sampleCount] */

undefined8 FUN_10b28fda4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b28fdac; end: 10b28fdb3; -[SCExponentialGeometricFilter setSampleCount:] */

void FUN_10b28fdac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b28fdb4; end: 10b28fdbb; -[SCExponentialGeometricFilter filterCoefficient] */

undefined8 FUN_10b28fdb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b28fdbc; end: 10b28fdc3; -[SCExponentialGeometricFilter setFilterCoefficient:] */

void FUN_10b28fdbc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 10b28fdc4; end: 10b28fdcb; -[SCExponentialGeometricFilter includeInitialValueInFiltering] */

undefined1 FUN_10b28fdc4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b28fdcc; end: 10b28fdd3; -[SCExponentialGeometricFilter setIncludeInitialValueInFiltering:] */

void FUN_10b28fdcc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b28fdd4; end: 10b28fddb; -[SCExponentialGeometricFilter isUnderestimate] */

undefined1 FUN_10b28fdd4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10b28fddc; end: 10b28fde3; -[SCExponentialGeometricFilter setIsUnderestimate:] */

void FUN_10b28fddc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10b28fde4; end: 10b28fe43; -[SCLinearFilter initWithFilterCoefficient:initialValue:includeInitialValueInFiltering:] */

void FUN_10b28fde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112706120;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 10b28fe44; end: 10b28fe4b; -[SCLinearFilter reset] */

void FUN_10b28fe44(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b28fe4c; end: 10b28fef3; -[SCLinearFilter performFilteringWithNewSample:] */

void FUN_10b28fe4c(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = param_1;
  func_0x00010bfaeb60();
  func_0x00010c1b5420(param_2);
  lVar1 = param_2;
  func_0x00010c149760();
  if ((lVar1 != 0) || (lVar1 = param_2, func_0x00010bfebb40(), (int)lVar1 != 0)) {
    func_0x00010bfadb20(param_2);
    dVar3 = dVar2;
    func_0x00010bfaeb60(param_2);
    dVar4 = dVar3;
    func_0x00010bfadb20(param_2);
    param_1 = param_1 * (1.0 - dVar4) + dVar3 * dVar2;
  }
  func_0x00010c19c880(param_1,param_2);
  lVar1 = param_2;
  func_0x00010c149760(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c1f5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setSampleCount__11265af08,lVar1 + 1);
  return;
}



/* Entry: 10b28fef4; end: 10b28fefb; -[SCLinearFilter filteredValue] */

undefined8 FUN_10b28fef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b28fefc; end: 10b28ff03; -[SCLinearFilter setFilteredValue:] */

void FUN_10b28fefc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10b28ff04; end: 10b28ff0b; -[SCLinearFilter sampleCount] */

undefined8 FUN_10b28ff04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b28ff0c; end: 10b28ff13; -[SCLinearFilter setSampleCount:] */

void FUN_10b28ff0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b28ff14; end: 10b28ff1b; -[SCLinearFilter filterCoefficient] */

undefined8 FUN_10b28ff14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b28ff1c; end: 10b28ff23; -[SCLinearFilter setFilterCoefficient:] */

void FUN_10b28ff1c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10b28ff24; end: 10b28ff2b; -[SCLinearFilter includeInitialValueInFiltering] */

undefined1 FUN_10b28ff24(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b28ff2c; end: 10b28ff33; -[SCLinearFilter setIncludeInitialValueInFiltering:] */

void FUN_10b28ff2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b28ff34; end: 10b28ff3b; -[SCLinearFilter isUnderestimate] */

undefined1 FUN_10b28ff34(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b28ff3c; end: 10b28ff43; -[SCLinearFilter setIsUnderestimate:] */

void FUN_10b28ff3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b28ff44; end: 10b28ffab; +[NetworkConditionEnums descriptor] */

void FUN_10b28ff44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f47b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c731b0,
                        &PTR____CFConstantStringClassReference_110f61138,&PTR_DAT_11336f2a0,0,0,4,
                        0x1c);
    puRam00000001137f47b8 = puVar1;
  }
  return;
}



/* Entry: 10b28ffac; end: 10b28ffb7; +[SCCertificateTrust authChallengeBlock] */

undefined ** FUN_10b28ffac(void)

{
  return &PTR___NSConcreteGlobalBlock_110cd0788;
}



/* Entry: 10b28ffb8; end: 10b2900e3;  */

void FUN_10b28ffb8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  FUN_10b2900e4();
  if ((int)puVar1 != 0) {
    puVar1 = param_3;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c15f640();
    _objc_release(puVar1);
    puVar1 = puVar2;
    FUN_10b290170();
    if ((int)puVar1 == 0) {
      puVar1 = param_3;
      func_0x00010c15dac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2dee0();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSURLCredential_1126c8020;
      func_0x00010bf5bfa0(PTR__OBJC_CLASS___NSURLCredential_1126c8020,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c15dac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c290060();
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2900e4; end: 10b29016f;  */

undefined8 FUN_10b2900e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c118f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf10c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b290170; end: 10b29036f;  */

bool FUN_10b290170(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  int iStack_7c;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  uVar2 = param_1;
  FUN_10b2904ac();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (uVar6 = 0; uVar4 = uVar2, func_0x00010bf529e0(), uVar6 < uVar4; uVar6 = uVar6 + 1) {
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar4 = uVar2;
    func_0x00010c0dfd40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar5);
    func_0x00010befa120(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b2905f8;
  puStack_60 = &UNK_110cd07c8;
  _objc_retain();
  puStack_58 = puVar5;
  func_0x00010bf97e80(puVar3);
  if (((puVar5 == (undefined *)0x0) ||
      (uVar6 = param_1, _SecTrustSetAnchorCertificates(param_1,puVar5), (int)uVar6 != 0)) ||
     (uVar6 = param_1, _SecTrustSetAnchorCertificatesOnly(param_1,1), (int)uVar6 != 0)) {
    bVar1 = false;
  }
  else {
    iStack_7c = 0;
    _SecTrustEvaluate(param_1,&iStack_7c);
    bVar1 = (int)param_1 == 0 && iStack_7c == 4;
  }
  _objc_release(puStack_58);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 10b290370; end: 10b2904ab; +[SCCertificateTrust didReceiveChallenge:completionHandler:] */

void FUN_10b290370(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar4 = param_3;
  FUN_10b2900e4();
  if ((int)uVar4 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = param_3;
    func_0x00010c118f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c15f640();
    iVar1 = (int)uVar2;
    FUN_10b290170();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSURLCredential_1126c8020;
    if (iVar1 != 0) {
      uVar4 = param_3;
      func_0x00010c118f00(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15f640();
      func_0x00010bf5bfa0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      (**(code **)(param_4 + 0x10))(param_4,0,puVar3);
      _objc_release(puVar3);
      goto LAB_10b29044c;
    }
    uVar4 = 2;
  }
  (**(code **)(param_4 + 0x10))(param_4,uVar4,0);
LAB_10b29044c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2904ac; end: 10b2904ff;  */

void FUN_10b2904ac(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f47c8 != -1) {
    func_0x000107c27d9c(0x1137f47c8,&PTR___NSConcreteGlobalBlock_110cd07a8);
  }
  uVar1 = uRam00000001137f47d0;
  _objc_retain(uRam00000001137f47d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b290500; end: 10b2905f7;  */

void FUN_10b290500(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,(long)iRam000000011383a2f8)
  ;
  _objc_retainAutoreleasedReturnValue();
  if (iRam000000011383a2f8 != 0) {
    uVar4 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,(&PTR_DAT_11330a928)[uVar4]);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar3);
      _objc_release(puVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(long)iRam000000011383a2f8);
  }
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f47d0;
  puRam00000001137f47d0 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b2905f8; end: 10b290643;  */

void FUN_10b2905f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = 0;
  _SecCertificateCreateWithData(0);
  func_0x00010befa120(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b290644; end: 10b2906b3; +[SCCertificateTrust certsExpirationDate] */

void FUN_10b290644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
  _objc_alloc_init(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
  func_0x00010c189b60();
  puVar2 = puVar1;
  func_0x00010bf65160(puVar1,param_2,&PTR____CFConstantStringClassReference_110f61178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b2906b4; end: 10b29084f; +[SCCertificateTrust def1] */

undefined * FUN_10b2906b4(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined *puVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b2904ac();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_1);
      }
      func_0x00010bf070e0(puVar2);
      func_0x00010bf070e0(puVar2);
      func_0x00010bf070e0(puVar2);
      puVar5 = puVar5 + 1;
    } while (puVar3 != puVar5);
    puVar3 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  puVar3 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
    __Unwind_Resume(puVar3);
    func_0x00010015bc80(extraout_x8,0x1138369f8);
    func_0x00010015bcc4();
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10b290850; end: 10b29085f;  */

void FUN_10b290850(undefined8 param_1)

{
  func_0x00010015bc80(param_1,0x1138369f8);
  func_0x00010015bcc4();
  return;
}



/* Entry: 10b290860; end: 10b290887; +[SCAuthBaseUrlTweaksHelper endpointURLForKey:defaultURL:] */

void FUN_10b290860(void)

{
  undefined8 in_x3;
  
  _objc_retain(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(in_x3);
  return;
}



/* Entry: 10b290888; end: 10b29093b; +[SCAuthBaseUrlTweaksHelper setEndpointURL:key:] */

void FUN_10b290888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b6660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c14ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x00010c04f740();
  func_0x00010c1d0560();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c266b80(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


