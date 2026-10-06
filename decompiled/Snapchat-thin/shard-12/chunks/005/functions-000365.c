/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109221fc4; end: 109222023; -[SCMapPersonLocationCluster .cxx_destruct] */

void FUN_109221fc4(long param_1)

{
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



/* Entry: 109222024; end: 10922206b; +[SCMapPersonLocationsUpdate didLoadPeopleLocations] */

void FUN_109222024(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bf120;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10922206c; end: 10922208f; -[SCMapPersonLocationsUpdate copyWithZone:] */

undefined8 FUN_10922206c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109222090; end: 109222097; -[SCMapPersonLocationsUpdate hash] */

undefined8 FUN_109222090(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109222098; end: 1092220db; -[SCMapPersonLocationsUpdate internalInit] */

void FUN_109222098(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701180;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092220dc; end: 109222163; -[SCMapPersonLocationsUpdate isEqual:] */

bool FUN_1092220dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109222164; end: 10922217f; -[SCMapPersonLocationsUpdate matchDidLoadPeopleLocations:] */

void FUN_109222164(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000109222178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 109222180; end: 1092221fb; -[SCLocationServicesDataStore clear] */

void FUN_109222180(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x50));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,0);
  return;
}



/* Entry: 1092221fc; end: 10922220b; -[SCLocationServicesDataStore updateLocationDataOnceWithContext:caller:] */

void FUN_1092221fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_updateLocationDataOnceWithLocati_11267f7b8,1,param_3,param_4);
  return;
}



/* Entry: 10922220c; end: 10922228b; -[SCLocationServicesDataStore updateLocationDataOnceWithLocationServices:context:caller:] */

void FUN_10922220c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_5);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar1;
  _objc_release(uVar2);
  func_0x00010bec1f20(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10922228c; end: 109222293; -[SCLocationServicesDataStore stopUpdatingLocationData] */

void FUN_10922228c(long param_1)

{
  *(undefined1 *)(param_1 + 0x3a) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c256dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopUpdatingLocation_112673598);
  return;
}



/* Entry: 109222294; end: 1092222d7; -[SCLocationServicesDataStore stopUpdatingLocation] */

void FUN_109222294(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be00960();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092222d8; end: 1092223bf; -[SCLocationServicesDataStore _didStartLocationUpdatingWithCaller:] */

void FUN_1092222d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  if (param_3 != 0) {
    lVar1 = param_3;
    _objc_retain(param_3);
    func_0x00010b6f99e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar3 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar2,param_2,lVar3,0x20);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79f40(lVar1,param_2,puVar2,puVar4,1);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(lVar3);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x78),param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1092223c0; end: 109222537; -[SCLocationServicesDataStore _didStopLocationUpdating] */

void FUN_1092223c0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  iVar10 = (int)&uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010b6f99e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar14 = *(long *)(param_1 + 0x78);
  _objc_retain(lVar14);
  puVar11 = auStack_e8;
  uVar12 = 0x10;
  lVar3 = lVar14;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(lVar14);
        }
        puVar4 = PTR_PTR_1126aebf0;
        _objc_alloc();
        func_0x00010c011b80();
        func_0x00010bf79f80(lVar1);
        _objc_release(puVar4);
        lVar16 = lVar16 + 1;
      } while (lVar3 != lVar16);
      puVar11 = auStack_e8;
      uVar12 = 0x10;
      lVar3 = lVar14;
      iVar10 = (int)&uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar14);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x78));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar12);
  if (iVar10 == 0) {
    func_0x00010be11e40(lVar1);
    goto LAB_10922289c;
  }
  func_0x00010be789a0(lVar1);
  func_0x00010be007c0(lVar1);
  *(undefined1 **)(lVar1 + 0x40) = puVar11;
  _objc_initWeak(auStack_198,lVar1);
  if (*(char *)(lVar1 + 0x39) == '\x01') {
    puVar2 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar3 = lVar1;
    _objc_opt_class(lVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar2);
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_1092228f8;
    puStack_1a8 = &UNK_110858990;
    _objc_copyWeak(auStack_1a0,auStack_198);
    dVar17 = 10.0;
    func_0x00010c135ca0(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_1a0);
    _objc_release(puVar2);
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    dVar17 = 1.60807493534087e-314;
    _objc_copyWeak(auStack_1c8,auStack_198);
    uVar8 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar8;
    _objc_release(uVar13);
    _objc_release(uVar5);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar9 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bdc5280(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010c1347e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar7;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_1c8);
  }
  lVar14 = *(long *)(lVar1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar14;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar14);
LAB_109222888:
    func_0x00010be11e40(lVar1);
  }
  else {
    _objc_retain(lVar3);
    lVar15 = lVar3;
    func_0x00010c2709c0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    dVar18 = dVar17;
    _objc_release(lVar15);
    func_0x00010bfe4080(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar14);
    if ((60.0 <= ABS(dVar17)) || (dVar18 < 0.0)) goto LAB_109222888;
    func_0x00010c0e4fe0(lVar1);
  }
  _objc_destroyWeak(auStack_198);
LAB_10922289c:
  _objc_release(uVar12);
  return;
}



/* Entry: 109222538; end: 1092228f7; -[SCLocationServicesDataStore _startUpdatingLocationDataWithAuthorization:context:caller:] */

void FUN_109222538(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    func_0x00010be11e40(param_1);
    goto LAB_10922289c;
  }
  func_0x00010be789a0(param_1);
  func_0x00010be007c0(param_1);
  *(undefined8 *)(param_1 + 0x40) = param_4;
  _objc_initWeak(auStack_68,param_1);
  if (*(char *)(param_1 + 0x39) == '\x01') {
    puVar1 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar7 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar1);
    _objc_release(lVar7);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1092228f8;
    puStack_78 = &UNK_110858990;
    _objc_copyWeak(auStack_70,auStack_68);
    dVar11 = 10.0;
    func_0x00010c135ca0(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    dVar11 = 1.60807493534087e-314;
    _objc_copyWeak(auStack_98,auStack_68);
    uVar5 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bdc5280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c1347e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    _objc_release(uVar2);
    _objc_release(lVar7);
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_98);
  }
  lVar8 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar8;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    _objc_release(lVar8);
LAB_109222888:
    func_0x00010be11e40(param_1);
  }
  else {
    _objc_retain(lVar7);
    lVar9 = lVar7;
    func_0x00010c2709c0(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    dVar12 = dVar11;
    _objc_release(lVar9);
    func_0x00010bfe4080(lVar7);
    _objc_release(lVar7);
    _objc_release(lVar7);
    _objc_release(lVar8);
    if ((60.0 <= ABS(dVar11)) || (dVar12 < 0.0)) goto LAB_109222888;
    func_0x00010c0e4fe0(param_1);
  }
  _objc_destroyWeak(auStack_68);
LAB_10922289c:
  _objc_release(param_5);
  return;
}



/* Entry: 1092228f8; end: 109222957;  */

void FUN_1092228f8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  if (param_2 == 0) {
    func_0x00010c0e4f40();
  }
  else {
    func_0x00010c0e4fe0();
  }
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be00960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109222958; end: 109222a47;  */

void FUN_109222958(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_109222a48;
  puStack_60 = &UNK_1108434b0;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 109222a48; end: 109222a9f;  */

void FUN_109222a48(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e4fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109222aa0; end: 109222be3; -[SCLocationServicesDataStore _startUpdatingLocationDataWithLocationServices:context:caller:] */

void FUN_109222aa0(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    func_0x00010bec1f00(param_1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfe63a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    _objc_retain(param_5);
    func_0x00010bfa8200(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 109222be4; end: 109222c2f;  */

void FUN_109222be4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109222c30; end: 109222c63; -[SCLocationServicesDataStore _prepareLocationDataUpdate] */

void FUN_109222c30(long param_1)

{
  if ((*(byte *)(param_1 + 0x3a) & 1) == 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x50));
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  return;
}



/* Entry: 109222c64; end: 109222ccf; -[SCLocationServicesDataStore _fetchIpBasedLocationDataWithContext:] */

void FUN_109222c64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c081220(0x4082c00000000000);
    if ((int)puVar1 == 0) {
      return;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be789b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareLocationDataUpdate_11257bc08);
  return;
}



/* Entry: 109222cd0; end: 109222cd7; -[SCLocationServicesDataStore objectForKey:] */

void FUN_109222cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 109222cd8; end: 109222e13; -[SCLocationServicesDataStore _setObject:forKey:] */

undefined **
FUN_109222cd8(double param_1,undefined **param_2,undefined8 param_3,undefined **param_4,
             undefined **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  double dVar7;
  double dVar8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_4;
  ppuVar4 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined **)0x0) {
    ppuVar6 = param_5;
    func_0x00010c12d3e0(param_2[10],param_3,param_5);
  }
  else if (param_5 != (undefined **)0x0) {
    func_0x00010c1d0640(param_2[10],param_3,param_4,param_5);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110f2d378;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110dc1758;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110dbf1f8;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_58 = param_5;
    ppuStack_50 = param_4;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_58,&ppuStack_68,2
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1049a0(puVar1,param_3,&PTR____CFConstantStringClassReference_110f2d378,param_2,
                        puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    ppuVar4 = param_2;
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar4);
  puVar3 = param_4[3];
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09eaa0();
  _objc_release(puVar1);
  _objc_release(puVar3);
  if ((puVar2 == (undefined *)0x1) ||
     (ppuVar5 = param_4, func_0x00010be431c0(param_4,param_3,ppuVar6), (int)ppuVar5 == 0)) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    func_0x00010be431c0(param_4,param_3,ppuVar4);
    if ((int)param_4 == 0) {
      ppuVar5 = (undefined **)0x1;
    }
    else {
      func_0x00010bfe4080(ppuVar6);
      dVar7 = 1000.0;
      if (1000.0 <= param_1) {
        dVar7 = param_1;
      }
      dVar8 = dVar7 + dVar7;
      func_0x00010bfe4080(ppuVar4);
      ppuVar5 = (undefined **)(ulong)(dVar8 <= dVar7);
    }
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar6);
  return ppuVar5;
}



/* Entry: 109222e14; end: 109222f13; -[SCLocationServicesDataStore _legacyShouldUseNewLocation:withOldLocation:] */

bool FUN_109222e14(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0x18);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09eaa0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((lVar3 == 1) ||
     (lVar2 = param_2, func_0x00010be431c0(param_2,param_3,param_4), (int)lVar2 == 0)) {
    bVar4 = false;
  }
  else {
    func_0x00010be431c0(param_2,param_3,param_5);
    if ((int)param_2 == 0) {
      bVar4 = true;
    }
    else {
      func_0x00010bfe4080(param_4);
      dVar5 = 1000.0;
      if (1000.0 <= param_1) {
        dVar5 = param_1;
      }
      dVar6 = dVar5 + dVar5;
      func_0x00010bfe4080(param_5);
      bVar4 = dVar6 <= dVar5;
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar4;
}



/* Entry: 109222f14; end: 109222fa3; -[SCLocationServicesDataStore _isRecentValidLocation:] */

bool FUN_109222f14(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010c2709c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    param_1 = ABS(param_1);
    bVar1 = param_1 < 1800.0;
    _objc_release(lVar2);
    func_0x00010bfe4080(param_4);
    _objc_release(param_4);
    return 0.0 <= param_1 && bVar1;
  }
  return false;
}



/* Entry: 109222fa4; end: 109222fe3; -[SCLocationServicesDataStore _stopUpdatingLocationDataIfNecessary] */

void FUN_109222fa4(double param_1,long param_2)

{
  if ((*(long *)(param_2 + 0x70) != 0) && (func_0x00010c26f3a0(), param_1 <= 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c256df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stopUpdatingLocationData_1126735a0);
    return;
  }
  return;
}



/* Entry: 109222fe4; end: 109223097; -[SCLocationServicesDataStore _activeLocationUpdatesRequest] */

void FUN_109222fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1818;
  _objc_alloc(PTR_PTR_1126c1818);
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2,param_2,param_1,0x20);
  func_0x00010bff4e40(*(undefined8 *)PTR__kCLLocationAccuracyBest_110349b70,
                      *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68,puVar1,param_2,puVar2,1,0)
  ;
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109223098; end: 1092230f7; -[SCLocationServicesDataStore onLocationUpdate] */

void FUN_109223098(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5000(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092230f8; end: 1092231b7; -[SCLocationServicesDataStore onLocationUpdate:] */

void FUN_1092230f8(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c298e00(param_4);
  if (0.0 <= param_1) {
    func_0x00010bf01f00(param_4);
    func_0x00010be69e60(param_2);
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010be4a180(param_2,param_3,param_4,*(undefined8 *)(param_2 + 8));
    if ((uVar1 & 1) == 0) {
      func_0x00010bec3ae0(param_2);
      goto LAB_1092231a4;
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  _objc_release(uVar2);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(long *)(param_2 + 0x58) = param_4;
  _objc_release(uVar2);
  if (param_4 != 0) {
    func_0x00010bfe4080(param_4);
  }
LAB_1092231a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1092231b8; end: 109223217; -[SCLocationServicesDataStore _onLocationAltitudeChange:] */

void FUN_1092231b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x3a) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea6000(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110f2d3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 109223218; end: 10922326b; -[SCLocationServicesDataStore onLocationError] */

void FUN_109223218(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287640(param_1,param_2,0,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10922326c; end: 10922326f; -[SCLocationServicesDataStore invalidate] */

void FUN_10922326c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clear_1125ac340);
  return;
}



/* Entry: 109223270; end: 109223277; -[SCLocationServicesDataStore requestContext] */

undefined8 FUN_109223270(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109223278; end: 10922327f; -[SCLocationServicesDataStore setRequestContext:] */

void FUN_109223278(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 109223280; end: 109223287; -[SCLocationServicesDataStore locationProvider] */

undefined8 FUN_109223280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109223288; end: 1092232b7; -[SCLocationServicesDataStore setLocationProvider:] */

void FUN_109223288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092232b8; end: 1092232bf; -[SCLocationServicesDataStore datastore] */

undefined8 FUN_1092232b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1092232c0; end: 1092232ef; -[SCLocationServicesDataStore setDatastore:] */

void FUN_1092232c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092232f0; end: 1092232f7; -[SCLocationServicesDataStore fetchingLocationData] */

undefined1 FUN_1092232f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}



/* Entry: 1092232f8; end: 1092232ff; -[SCLocationServicesDataStore setFetchingLocationData:] */

void FUN_1092232f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3a) = param_3;
  return;
}



/* Entry: 109223300; end: 109223307; -[SCLocationServicesDataStore location] */

undefined8 FUN_109223300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109223308; end: 109223337; -[SCLocationServicesDataStore setLocation:] */

void FUN_109223308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109223338; end: 10922333f; -[SCLocationServicesDataStore dataLocation] */

undefined8 FUN_109223338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 109223340; end: 10922336f; -[SCLocationServicesDataStore setDataLocation:] */

void FUN_109223340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109223370; end: 109223377; -[SCLocationServicesDataStore lastIpRequestTime] */

undefined8 FUN_109223370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 109223378; end: 1092233a7; -[SCLocationServicesDataStore setLastIpRequestTime:] */

void FUN_109223378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092233a8; end: 1092233af; -[SCLocationServicesDataStore updateUntil] */

undefined8 FUN_1092233a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1092233b0; end: 1092233df; -[SCLocationServicesDataStore setUpdateUntil:] */

void FUN_1092233b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1092233e0; end: 1092233eb; -[SCLocationServicesDataStore updateLocationCallers] */

void FUN_1092233e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x78,1);
  return;
}



/* Entry: 1092233ec; end: 1092233f3; -[SCLocationServicesDataStore setUpdateLocationCallers:] */

void FUN_1092233ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1092233f4; end: 1092234a3; -[SCLocationServicesDataStore .cxx_destruct] */

void FUN_1092233f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1092234a4; end: 1092235f7; -[SCVoiceMLLensAppEventsServices initWithDeeplinkSendToScopeListener:deeplinkSendToScopeObservable:lensModalListener:lensModalObservable:onboardingListener:onboardingObservable:] */

undefined1 *
FUN_1092234a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112701190;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1092235f8; end: 1092235ff; -[SCVoiceMLLensAppEventsServices deeplinkSendToScopeListener] */

undefined8 FUN_1092235f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109223600; end: 109223607; -[SCVoiceMLLensAppEventsServices deeplinkSendToScopeObservable] */

undefined8 FUN_109223600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109223608; end: 10922360f; -[SCVoiceMLLensAppEventsServices lensModalListener] */

undefined8 FUN_109223608(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109223610; end: 109223617; -[SCVoiceMLLensAppEventsServices lensModalObservable] */

undefined8 FUN_109223610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109223618; end: 10922361f; -[SCVoiceMLLensAppEventsServices onboardingListener] */

undefined8 FUN_109223618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109223620; end: 109223627; -[SCVoiceMLLensAppEventsServices onboardingObservable] */

undefined8 FUN_109223620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109223628; end: 109223687; -[SCVoiceMLLensAppEventsServices .cxx_destruct] */

void FUN_109223628(long param_1)

{
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



/* Entry: 109223688; end: 1092236cf; +[SCVoiceMLLensDeeplinkSendToScopeLifecycleAppEvent sendToScopeBegan] */

void FUN_109223688(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cc680;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1092236d0; end: 10922371b; +[SCVoiceMLLensDeeplinkSendToScopeLifecycleAppEvent sendToScopeEnded] */

void FUN_1092236d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cc680;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10922371c; end: 10922373f; -[SCVoiceMLLensDeeplinkSendToScopeLifecycleAppEvent copyWithZone:] */

undefined8 FUN_10922371c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109223740; end: 109223747; -[SCVoiceMLLensDeeplinkSendToScopeLifecycleAppEvent hash] */

undefined8 FUN_109223740(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109223748; end: 10922378b; -[SCVoiceMLLensDeeplinkSendToScopeLifecycleAppEvent internalInit] */

void FUN_109223748(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701198;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10922378c; end: 109223813; -[SCVoiceMLLensDeeplinkSendToScopeLifecycleAppEvent isEqual:] */

bool FUN_10922378c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109223814; end: 10922388b; -[SCVoiceMLLensDeeplinkSendToScopeLifecycleAppEvent matchSendToScopeBegan:sendToScopeEnded:] */

void FUN_109223814(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_10922385c;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10922385c;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_10922385c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10922388c; end: 1092238d7; +[SCVoiceMLLensModalLifecycleAppEvent lensModalDismissed] */

void FUN_10922388c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddf40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1092238d8; end: 10922391f; +[SCVoiceMLLensModalLifecycleAppEvent lensModalPresented] */

void FUN_1092238d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ddf40;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109223920; end: 109223943; -[SCVoiceMLLensModalLifecycleAppEvent copyWithZone:] */

undefined8 FUN_109223920(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109223944; end: 10922394b; -[SCVoiceMLLensModalLifecycleAppEvent hash] */

undefined8 FUN_109223944(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10922394c; end: 10922398f; -[SCVoiceMLLensModalLifecycleAppEvent internalInit] */

void FUN_10922394c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127011a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109223990; end: 109223a17; -[SCVoiceMLLensModalLifecycleAppEvent isEqual:] */

bool FUN_109223990(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109223a18; end: 109223a8f; -[SCVoiceMLLensModalLifecycleAppEvent matchLensModalPresented:lensModalDismissed:] */

void FUN_109223a18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    lVar1 = param_4;
    if (param_4 == 0) goto LAB_109223a60;
  }
  else {
    lVar1 = param_3;
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_109223a60;
  }
  (**(code **)(lVar1 + 0x10))();
LAB_109223a60:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109223a90; end: 109223af3; +[SCVoiceMLLensOnboardingLifecycleAppEvent onboardingBeganWithLensId:] */

void FUN_109223a90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b58e8;
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



/* Entry: 109223af4; end: 109223b5f; +[SCVoiceMLLensOnboardingLifecycleAppEvent onboardingEndedWithLensId:] */

void FUN_109223af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b58e8;
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



/* Entry: 109223b60; end: 109223b83; -[SCVoiceMLLensOnboardingLifecycleAppEvent copyWithZone:] */

undefined8 FUN_109223b60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109223b84; end: 109223bfb; -[SCVoiceMLLensOnboardingLifecycleAppEvent hash] */

void FUN_109223b84(long param_1)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1127011a8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109223bfc; end: 109223c3f; -[SCVoiceMLLensOnboardingLifecycleAppEvent internalInit] */

void FUN_109223bfc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127011a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109223c40; end: 109223cf7; -[SCVoiceMLLensOnboardingLifecycleAppEvent isEqual:] */

long FUN_109223c40(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109223cd0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109223cdc;
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
          goto LAB_109223cdc;
        }
        goto LAB_109223cd0;
      }
    }
    lVar3 = 0;
  }
LAB_109223cdc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109223cf8; end: 109223d7b; -[SCVoiceMLLensOnboardingLifecycleAppEvent matchOnboardingBegan:onboardingEnded:] */

void FUN_109223cf8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_109223d60;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_109223d60;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_109223d60:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109223d7c; end: 109223dab; -[SCVoiceMLLensOnboardingLifecycleAppEvent .cxx_destruct] */

void FUN_109223d7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109223dac; end: 109223e2b; -[SCIdleTimerManager setIdleTimerDisabled:] */

void FUN_109223dac(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  byte bStack_18;
  
  pbVar1 = (byte *)(param_1 + 8);
  do {
    if ((uint)*pbVar1 != (param_3 ^ 1)) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    bStack_18 = (byte)param_3;
    if (bVar3) {
      *pbVar1 = bStack_18;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_109223ec8;
  puStack_20 = &UNK_110926818;
  func_0x000107c312d0("APPSTORE",&puStack_38);
  return;
}



/* Entry: 109223e2c; end: 109223e37; -[SCIdleTimerManager isIdleTimerDisabled] */

undefined1 FUN_109223e2c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109223e38; end: 109223ec7; -[SCIdleTimerManager dealloc] */

void FUN_109223e38(long param_1)

{
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc0000000;
    pcStack_38 = FUN_109223ec8;
    puStack_30 = &UNK_110926818;
    uStack_28 = 0;
    func_0x000107c312d0("APPSTORE",&puStack_48);
  }
  puStack_50 = PTR_PTR_1127011b0;
  lStack_58 = param_1;
  _objc_msgSendSuper2(&lStack_58,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109223ec8; end: 109223f3f;  */

void FUN_109223ec8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = uRam0000000113732a28 - 1;
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar1 = uRam0000000113732a28 + 1;
  }
  uRam0000000113732a28 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109223f40; end: 109224007;  */

void FUN_109223f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain();
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  func_0x00010c191020(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110f2d3f8);
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109224008; end: 1092240b7;  */

void FUN_109224008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_2);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  FUN_109223f40(param_2);
  func_0x00010c1add40(param_2);
  _objc_release(param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1092240b8; end: 1092240db;  */

ulong FUN_1092240b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aff08;
  func_0x00010c073f00(PTR_PTR_1126aff08,param_2,param_1);
  return (ulong)puVar1 & 0xffffffff;
}



/* Entry: 1092240dc; end: 10922428b; -[SCCaptureScope initWithPublicCameraFeatureCatalog:replyConfiguration:presentingViewController:captureWorkflowDelegate:captureWorkflowResultDelegate:lensDataProvider:timelineDataProvider:shortcutContextAction:startRunningConfig:] */

undefined1 *
FUN_1092240dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1127011b8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_9);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10922428c; end: 1092243cf; -[SCCaptureScope initWithPublicCameraFeatureCatalog:uiContainer:replyConfiguration:captureWorkflowDelegate:captureWorkflowResultDelegate:startRunningConfig:] */

undefined1 *
FUN_10922428c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1127011b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_8;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_7);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1092243d0; end: 1092243d7; -[SCCaptureScope publicCameraFeatureCatalog] */

undefined8 FUN_1092243d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1092243d8; end: 1092243ef; -[SCCaptureScope captureWorkflowResultDelegate] */

void FUN_1092243d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1092243f0; end: 109224407; -[SCCaptureScope captureWorkflowDelegate] */

void FUN_1092243f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109224408; end: 10922440f; -[SCCaptureScope replyConfiguration] */

undefined8 FUN_109224408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109224410; end: 109224417; -[SCCaptureScope uiContainer] */

undefined8 FUN_109224410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109224418; end: 10922442f; -[SCCaptureScope presentingViewController] */

void FUN_109224418(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109224430; end: 109224447; -[SCCaptureScope timelineDataProvider] */

void FUN_109224430(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109224448; end: 10922444f; -[SCCaptureScope shortcutContextAction] */

undefined8 FUN_109224448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109224450; end: 109224457; -[SCCaptureScope startRunningConfig] */

undefined8 FUN_109224450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}


