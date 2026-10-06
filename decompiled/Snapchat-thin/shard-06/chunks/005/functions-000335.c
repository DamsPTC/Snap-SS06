/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10497ff64; end: 104980183;  */

/* WARNING: Possible PIC construction at 0x000104980140: Changing call to branch */

void FUN_10497ff64(long param_1,undefined8 param_2)

{
  double dVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar3 = PTR_PTR_1126add78;
    func_0x00010bf71fc0(PTR_PTR_1126add78,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf64720(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1780();
      _objc_release(uVar4);
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1808e0(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126adf78;
      _objc_alloc(PTR_PTR_1126adf78);
      func_0x00010c020680();
      func_0x00010c180a40(*(undefined8 *)(param_1 + 0x28));
      _objc_release(puVar3);
      lVar5 = *(long *)(param_1 + 0x28);
      func_0x00010bf44020();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar10 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar5);
          }
          (**(code **)(*(long *)(lVar11 * 8) + 0x10))();
          lVar11 = lVar11 + 1;
        } while (lVar10 != lVar11);
        lVar10 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf44020(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12adc0();
      _objc_release(uVar4);
      puVar3 = *(undefined **)(param_1 + 0x28);
      goto code_r0x00010c1b3e80;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
code_r0x00010c1b3e80:
                    /* WARNING: Could not recover jumptable at 0x00010c1b3e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_setIsRequestStarted__11264a9c8,0);
      return;
    }
  }
  ___stack_chk_fail();
  puVar6 = puVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((puVar6 != (undefined *)0x0) &&
     (puVar6 = puVar3, func_0x00010c22eb20(), ((ulong)puVar6 & 1) == 0)) {
    puVar6 = puVar3;
    func_0x00010bf50c20();
    puVar7 = puVar3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c270600();
    _objc_release(puVar7);
    if ((long)puVar6 <= (long)puVar8) {
      puVar6 = puVar3;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c2709c0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar7);
        dVar1 = (double)CONCAT17(in_register_00005007,
                                 CONCAT16(in_register_00005006,
                                          CONCAT15(in_register_00005005,
                                                   CONCAT14(in_register_00005004,
                                                            CONCAT13(in_register_00005003,
                                                                     CONCAT12(in_register_00005002,
                                                                              CONCAT11(
                                                  in_register_00005001,in_b0)))))));
        puVar9 = puVar3;
        func_0x00010bf46560(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2706c0();
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        if (dVar1 < (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))))) {
          return;
        }
      }
      puVar6 = puVar3;
      func_0x00010bf50c20(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bed61b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s__updateConversionValue__112593210,puVar6);
      return;
    }
  }
  return;
}



/* Entry: 104980184; end: 1049802d3; -[FBSDKSKAdNetworkReporter _checkAndRevokeTimer] */

void FUN_104980184(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  
  uVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar1 != 0) && (uVar1 = param_2, func_0x00010c22eb20(), (uVar1 & 1) == 0)) {
    uVar1 = param_2;
    func_0x00010bf50c20();
    uVar2 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c270600();
    _objc_release(uVar2);
    if ((long)uVar1 <= (long)uVar3) {
      uVar1 = param_2;
      func_0x00010c2709c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_2;
        func_0x00010c2709c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(puVar4);
        uVar3 = param_2;
        dVar5 = param_1;
        func_0x00010bf46560(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2706c0();
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(puVar4);
        _objc_release(uVar1);
        if (param_1 < dVar5) {
          return;
        }
      }
      uVar1 = param_2;
      func_0x00010bf50c20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bed61b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateConversionValue__112593210,uVar1);
      return;
    }
  }
  return;
}



/* Entry: 1049802d4; end: 104980683; -[FBSDKSKAdNetworkReporter _recordAndUpdateEvent:currency:value:] */

void FUN_1049802d4(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar1 == 0) || (uVar1 = param_2, func_0x00010c22eb20(), (uVar1 & 1) != 0))
  goto LAB_104980650;
  uVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf9a240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4b900();
  if ((int)uVar3 == 0) {
    puVar4 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c07f780();
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)puVar5 == 0) goto LAB_104980650;
  }
  else {
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010c123ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010c123ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar1);
  }
  uVar1 = param_5;
  func_0x00010c28ed80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf5dea0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf4b900();
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar3 = uVar1;
  if ((uVar7 & 1) == 0) {
    uVar6 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf691c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar6);
  }
  puVar4 = PTR_PTR_1126add78;
  if (param_6 == 0) {
    if ((uVar2 & 1) == 0) goto LAB_104980638;
  }
  else {
    uVar1 = param_2;
    func_0x00010c123ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010bf71e60(puVar4,param_3,uVar1,param_4,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0d3c80();
    if (puVar5 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      puVar8 = puVar5;
      _objc_retain(puVar5);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126add78;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf71e60(puVar4,param_3,puVar8,uVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      param_1 = 0.0;
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = puVar4;
      _objc_retain(puVar4);
    }
    _objc_release(puVar4);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = PTR_PTR_1126add78;
    func_0x00010bf885a0(puVar5);
    dVar10 = param_1;
    func_0x00010bf885a0(param_6);
    func_0x00010c0df720(param_1 + dVar10,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_3,puVar8,puVar9,uVar3);
    _objc_release(puVar9);
    puVar4 = PTR_PTR_1126add78;
    uVar1 = param_2;
    func_0x00010c123ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar4,param_3,uVar1,puVar8,param_4);
    _objc_release(uVar1);
    _objc_release(puVar5);
    _objc_release(puVar8);
LAB_104980638:
    func_0x00010bddd400(param_2);
    func_0x00010be998a0(param_2);
  }
  _objc_release(uVar3);
LAB_104980650:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104980684; end: 104980823; -[FBSDKSKAdNetworkReporter _checkAndUpdateConversionValue] */

void FUN_104980684(ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf50c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar3 == 0) {
LAB_1049807e0:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        return;
      }
      ___stack_chk_fail();
      iVar2 = 2;
      func_0x000100029b9c(2,0xe,0,0);
      if ((iVar2 != 0) && (uVar3 = uVar4, func_0x00010c22eb20(), (uVar3 & 1) == 0)) {
        iVar2 = 2;
        func_0x000100029b9c(2,0xf,4,0);
        func_0x00010bf50c60(uVar4);
        if (iVar2 == 0) {
          func_0x00010c284a80();
        }
        else {
          func_0x00010c288aa0();
        }
        func_0x00010c183e20(uVar4);
        puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c215dc0(uVar4);
        _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010be998b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s__saveReportData_112583fc8);
        return;
      }
      return;
    }
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar4);
      }
      lVar10 = *(long *)(uVar11 * 8);
      lVar5 = lVar10;
      func_0x00010bf50c20();
      uVar6 = param_1;
      func_0x00010bf50c20();
      if (lVar5 < (long)uVar6) goto LAB_1049807e0;
      uVar6 = param_1;
      func_0x00010c123ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_1;
      func_0x00010c123ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar10;
      func_0x00010c077740();
      _objc_release(uVar7);
      _objc_release(uVar6);
      if ((int)lVar5 != 0) {
        func_0x00010bf50c20(lVar10);
        func_0x00010bed61a0(param_1);
        goto LAB_1049807e0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
    uVar3 = uVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104980824; end: 1049808f3; -[FBSDKSKAdNetworkReporter _updateConversionValue:] */

void FUN_104980824(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if ((iVar1 != 0) && (uVar2 = param_1, func_0x00010c22eb20(), (uVar2 & 1) == 0)) {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x00010bf50c60(param_1);
    if (iVar1 == 0) {
      func_0x00010c284a80();
    }
    else {
      func_0x00010c288aa0();
    }
    func_0x00010c183e20(param_1);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215dc0(param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be998b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveReportData_112583fc8);
    return;
  }
  return;
}



/* Entry: 1049808f4; end: 104980a0f; -[FBSDKSKAdNetworkReporter shouldCutoff] */

bool FUN_1049808f4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  
  lVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf63060();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar4 = true;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf64720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar1 = lVar2;
    func_0x00010c075f00(lVar2,param_3,puVar3);
    if ((int)lVar1 == 0) {
      bVar4 = false;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bf63060();
      bVar4 = (double)(lVar1 * 0x15180) < param_1;
      _objc_release(param_2);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  return bVar4;
}



/* Entry: 104980a10; end: 104980abb; -[FBSDKSKAdNetworkReporter isReportingEvent:] */

long FUN_104980a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf9a240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104980abc; end: 104980ebb; -[FBSDKSKAdNetworkReporter _loadReportData] */

void FUN_104980abc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf64720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126adf78;
  _objc_alloc(PTR_PTR_1126adf78);
  func_0x00010c020680();
  func_0x00010c180a40(param_1,param_2,puVar3);
  _objc_release(puVar3);
  uVar1 = param_1;
  func_0x00010bf64720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x00010c1e8e80(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420();
  func_0x00010c1e8ea0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar1 = uVar4;
  func_0x00010c075f00(uVar4,param_2,puVar3);
  puVar8 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR_PTR_1126add78;
  if ((int)uVar1 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar5;
    func_0x00010bf39c40();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar6;
    func_0x00010bf39c40();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puStack_88 = puVar5;
    func_0x00010bf39c40();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar6;
    func_0x00010bf39c40();
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puStack_78 = puVar5;
    func_0x00010bf39c40();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar7,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f260(puVar8,param_2,puVar7,uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71fc0(puVar3,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar7 = PTR_PTR_1126add78;
    if (puVar3 != (undefined *)0x0) {
      puVar8 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da59b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fe0(puVar7,param_2,puVar8);
      func_0x00010c183e20(param_1,param_2,puVar7);
      _objc_release(puVar8);
      puVar7 = PTR_PTR_1126add78;
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010bf71e60(puVar7,param_2,puVar3,&PTR____CFConstantStringClassReference_110dc1558,
                          puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215dc0(param_1,param_2,puVar7);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126add78;
      puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSSet_1126ae870);
      func_0x00010bf71e60(puVar7,param_2,puVar3,&PTR____CFConstantStringClassReference_110da59d8,
                          puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d3c80();
      if (puVar8 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        func_0x00010c1e8e80(param_1,param_2,puVar5);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c1e8e80(param_1,param_2,puVar8);
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126add78;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010bf71e60(puVar7,param_2,puVar3,&PTR____CFConstantStringClassReference_110da59f8,
                          puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d3c80();
      if (puVar8 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        func_0x00010c1e8ea0(param_1,param_2,puVar5);
        _objc_release(puVar5);
      }
      else {
        func_0x00010c1e8ea0(param_1,param_2,puVar8);
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
    }
    _objc_release(puVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar3 = PTR_PTR_1126add78;
  uVar1 = uVar2;
  func_0x00010bf50c20(uVar2);
  func_0x00010c0df780(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar3,param_2,puVar8,puVar7,&PTR____CFConstantStringClassReference_110da59b8)
  ;
  _objc_release(puVar7);
  puVar3 = PTR_PTR_1126add78;
  uVar1 = uVar2;
  func_0x00010c2709c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar3,param_2,puVar8,uVar1,&PTR____CFConstantStringClassReference_110dc1558);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126add78;
  uVar1 = uVar2;
  func_0x00010c123ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar3,param_2,puVar8,uVar1,&PTR____CFConstantStringClassReference_110da59d8);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126add78;
  uVar1 = uVar2;
  func_0x00010c123ce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar3,param_2,puVar8,uVar1,&PTR____CFConstantStringClassReference_110da59f8);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar8,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    func_0x00010bf64720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(uVar2);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 104980ebc; end: 10498104f; -[FBSDKSKAdNetworkReporter _saveReportData] */

void FUN_104980ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010bf50c20(param_1);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,puVar3,&PTR____CFConstantStringClassReference_110da59b8)
  ;
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c2709c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110dc1558);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c123ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da59d8);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c123ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da59f8);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bf64720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(param_1);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104981050; end: 1049810c7; -[FBSDKSKAdNetworkReporter dispatchOnQueue:block:] */

void FUN_104981050(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  if (param_4 != 0) {
    uVar2 = param_3;
    _dispatch_queue_get_label();
    iVar1 = (int)uVar2;
    _strcmp();
    if (iVar1 == 0) {
      func_0x00010007380c(param_3,param_4);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049810c8; end: 10498116b; -[FBSDKSKAdNetworkReporter _isConfigRefreshTimestampValid] */

bool FUN_1049810c8(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_2;
  func_0x00010bf46200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar3,param_3,param_2);
    bVar1 = param_1 < 86400.0;
    _objc_release(param_2);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10498116c; end: 104981173; -[FBSDKSKAdNetworkReporter graphRequestFactory] */

undefined8 FUN_10498116c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104981174; end: 10498117f; -[FBSDKSKAdNetworkReporter setGraphRequestFactory:] */

void FUN_104981174(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104981180; end: 104981187; -[FBSDKSKAdNetworkReporter dataStore] */

undefined8 FUN_104981180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104981188; end: 104981193; -[FBSDKSKAdNetworkReporter setDataStore:] */

void FUN_104981188(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104981194; end: 10498119b; -[FBSDKSKAdNetworkReporter conversionValueUpdater] */

undefined8 FUN_104981194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10498119c; end: 1049811a7; -[FBSDKSKAdNetworkReporter setConversionValueUpdater:] */

void FUN_10498119c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049811a8; end: 1049811af; -[FBSDKSKAdNetworkReporter isSKAdNetworkReportEnabled] */

undefined1 FUN_1049811a8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1049811b0; end: 1049811b7; -[FBSDKSKAdNetworkReporter setIsSKAdNetworkReportEnabled:] */

void FUN_1049811b0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1049811b8; end: 1049811bf; -[FBSDKSKAdNetworkReporter completionBlocks] */

undefined8 FUN_1049811b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049811c0; end: 1049811cb; -[FBSDKSKAdNetworkReporter setCompletionBlocks:] */

void FUN_1049811c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049811cc; end: 1049811d3; -[FBSDKSKAdNetworkReporter isRequestStarted] */

undefined1 FUN_1049811cc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1049811d4; end: 1049811db; -[FBSDKSKAdNetworkReporter setIsRequestStarted:] */

void FUN_1049811d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1049811dc; end: 1049811e3; -[FBSDKSKAdNetworkReporter serialQueue] */

undefined8 FUN_1049811dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049811e4; end: 1049811ef; -[FBSDKSKAdNetworkReporter setSerialQueue:] */

void FUN_1049811e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1049811f0; end: 1049811f7; -[FBSDKSKAdNetworkReporter configuration] */

undefined8 FUN_1049811f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1049811f8; end: 104981203; -[FBSDKSKAdNetworkReporter setConfiguration:] */

void FUN_1049811f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104981204; end: 10498120b; -[FBSDKSKAdNetworkReporter configRefreshTimestamp] */

undefined8 FUN_104981204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10498120c; end: 104981217; -[FBSDKSKAdNetworkReporter setConfigRefreshTimestamp:] */

void FUN_10498120c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104981218; end: 10498121f; -[FBSDKSKAdNetworkReporter conversionValue] */

undefined8 FUN_104981218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104981220; end: 104981227; -[FBSDKSKAdNetworkReporter setConversionValue:] */

void FUN_104981220(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 104981228; end: 10498122f; -[FBSDKSKAdNetworkReporter timestamp] */

undefined8 FUN_104981228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104981230; end: 10498123b; -[FBSDKSKAdNetworkReporter setTimestamp:] */

void FUN_104981230(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 10498123c; end: 104981243; -[FBSDKSKAdNetworkReporter recordedEvents] */

undefined8 FUN_10498123c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104981244; end: 10498124f; -[FBSDKSKAdNetworkReporter setRecordedEvents:] */

void FUN_104981244(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 104981250; end: 104981257; -[FBSDKSKAdNetworkReporter recordedValues] */

undefined8 FUN_104981250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 104981258; end: 104981263; -[FBSDKSKAdNetworkReporter setRecordedValues:] */

void FUN_104981258(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 104981264; end: 1049812f3; -[FBSDKSKAdNetworkReporter .cxx_destruct] */

void FUN_104981264(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1049812f4; end: 1049813a7; -[FBSDKSKAdNetworkReporterV2 initWithGraphRequestFactory:dataStore:conversionValueUpdater:] */

undefined1 *
FUN_1049812f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_50;
  uVar1 = param_3;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e3440;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x10),param_3);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x18),param_4);
    _objc_storeStrong((undefined1 *)((long)puVar3 + 0x20),param_5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (undefined1 *)puVar3;
}



/* Entry: 1049813a8; end: 10498151f; -[FBSDKSKAdNetworkReporterV2 enable] */

void FUN_1049813a8(undefined8 param_1)

{
  int iVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x104981438;
    puStack_30 = &UNK_110842e18;
    if (lRam000000011369d4f0 != -1) {
      uStack_28 = param_1;
      func_0x00010002a2fc(0x11369d4f0,&puStack_48);
    }
  }
  return;
}



/* Entry: 104981520; end: 104981523; -[FBSDKSKAdNetworkReporterV2 checkAndRevokeTimer] */

void FUN_104981520(void)

{
  return;
}



/* Entry: 104981524; end: 104981527; -[FBSDKSKAdNetworkReporterV2 recordAndUpdateEvent:currency:value:parameters:] */

void FUN_104981524(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c123490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_recordAndUpdateEvent_currency_va_112626740);
  return;
}



/* Entry: 104981528; end: 10498163f; -[FBSDKSKAdNetworkReporterV2 recordAndUpdateEvent:currency:value:] */

void FUN_104981528(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (((iVar1 != 0) && (uVar2 = param_1, func_0x00010c07cdc0(), (int)uVar2 != 0)) &&
     (lVar3 = param_3, func_0x00010c08fa60(), lVar3 != 0)) {
    lVar3 = param_3;
    _objc_retain();
    uVar2 = param_4;
    _objc_retain();
    uVar4 = param_5;
    _objc_retain();
    func_0x00010be4ce00(param_1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104981640; end: 10498164f;  */

void FUN_104981640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordAndUpdateEvent_currency_v_11257f6b0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104981650; end: 1049817cb; -[FBSDKSKAdNetworkReporterV2 _loadConfigurationWithBlock:] */

void FUN_104981650(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar5 = &puStack_90;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c15e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) goto LAB_1049817b0;
  lVar1 = param_1;
  func_0x00010be3f140();
  lVar3 = param_1;
  if ((int)lVar1 == 0) {
LAB_104981738:
    func_0x00010c15e780(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104981930;
    puStack_78 = &UNK_11084aaa8;
    puVar6 = &uStack_68;
    uVar4 = param_3;
    lStack_70 = param_1;
    _objc_retain();
    uStack_68 = uVar4;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf64720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) goto LAB_104981738;
    func_0x00010c15e780(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1049817cc;
    puStack_48 = &UNK_11084aaa8;
    puVar6 = &uStack_38;
    uVar4 = param_3;
    lStack_40 = param_1;
    _objc_retain();
    ppuVar5 = &puStack_60;
    uStack_38 = uVar4;
  }
  func_0x00010bf851a0(param_1,param_2,lVar3,ppuVar5);
  _objc_release(lVar3);
  _objc_release(*puVar6);
LAB_1049817b0:
  _objc_release(param_3);
  return;
}



/* Entry: 1049817cc; end: 10498192f;  */

void FUN_1049817cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar6 = PTR_PTR_1126add78;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retainBlock();
  func_0x00010bf09f20(puVar6,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar10 = *plStack_100;
    do {
      unaff_x23 = (undefined *)0x0;
      do {
        if (*plStack_100 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        (**(code **)(*(long *)(lStack_108 + (long)unaff_x23 * 8) + 0x10))();
        unaff_x23 = unaff_x23 + 1;
      } while (puVar6 != unaff_x23);
      puVar6 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  lVar10 = *(long *)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR_PTR_1126add78;
  pcStack_118 = FUN_104981930;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = *(undefined ***)(lVar10 + 0x20);
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = *(undefined ***)(lVar10 + 0x28);
  _objc_retainBlock();
  ppuVar8 = ppuVar4;
  ppuVar9 = ppuVar5;
  func_0x00010bf09f20(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  puVar3 = *(undefined **)(lVar10 + 0x20);
  func_0x00010c07c620();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c1b3e80(*(undefined8 *)(lVar10 + 0x20),param_2,1);
    puVar6 = *(undefined **)(lVar10 + 0x20);
    func_0x00010bfcde20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar4 = (undefined **)PTR_PTR_1126ade50;
    func_0x00010c22bfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_1c0 = ppuVar5;
    func_0x00010c25d9e0(unaff_x23,param_2,&PTR____CFConstantStringClassReference_110da5978);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_188 = &PTR____CFConstantStringClassReference_110dd5c18;
    unaff_x24 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = unaff_x24;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_180 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_180,&ppuStack_188,
                        1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    ppuVar9 = ppuVar8;
    func_0x00010bf565e0(puVar6,param_2,unaff_x23,ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(puVar7);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(puVar6);
    puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_104981b68;
    puStack_198 = &UNK_1107b94c8;
    uStack_190 = *(undefined8 *)(lVar10 + 0x20);
    ppuVar8 = &puStack_1b0;
    func_0x00010c251a80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = FUN_104981b68;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  ppuStack_1f0 = ppuVar5;
  ppuStack_1e8 = ppuVar4;
  puStack_1e0 = puVar6;
  lStack_1d8 = lVar10;
  ppuStack_1d0 = &puStack_120;
  _objc_retain();
  _objc_retain();
  uVar2 = *(undefined8 *)(puVar3 + 0x20);
  uVar1 = uVar2;
  func_0x00010c15e780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_104981c58;
  puStack_220 = &UNK_110848ba8;
  uStack_210 = *(undefined8 *)(puVar3 + 0x20);
  ppuStack_218 = ppuVar9;
  ppuStack_208 = ppuVar8;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar9);
  func_0x00010bf851a0(uVar2,param_2,uVar1,&puStack_238);
  _objc_release(uVar1);
  _objc_release(ppuStack_208);
  _objc_release(ppuStack_218);
  _objc_release(ppuVar8);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 104981930; end: 104981b67;  */

void FUN_104981930(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar4 = PTR_PTR_1126add78;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = *(undefined ***)(param_1 + 0x20);
  func_0x00010bf44020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = *(undefined ***)(param_1 + 0x28);
  _objc_retainBlock();
  ppuVar6 = ppuVar1;
  ppuVar7 = ppuVar2;
  func_0x00010bf09f20(puVar4);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar3 = *(undefined **)(param_1 + 0x20);
  func_0x00010c07c620();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010c1b3e80(*(undefined8 *)(param_1 + 0x20),param_2,1);
    puVar4 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfcde20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar1 = (undefined **)PTR_PTR_1126ade50;
    func_0x00010c22bfc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = ppuVar2;
    func_0x00010c25d9e0(unaff_x23,param_2,&PTR____CFConstantStringClassReference_110da5978);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_78 = &PTR____CFConstantStringClassReference_110dd5c18;
    unaff_x24 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = unaff_x24;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_78,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    ppuVar7 = ppuVar6;
    func_0x00010bf565e0(puVar4,param_2,unaff_x23,ppuVar6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    _objc_release(puVar4);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_104981b68;
    puStack_88 = &UNK_1107b94c8;
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    ppuVar6 = &puStack_a0;
    func_0x00010c251a80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_104981b68;
  puStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  ppuStack_e0 = ppuVar2;
  ppuStack_d8 = ppuVar1;
  puStack_d0 = puVar4;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain();
  uVar9 = *(undefined8 *)(puVar3 + 0x20);
  uVar8 = uVar9;
  func_0x00010c15e780(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_104981c58;
  puStack_110 = &UNK_110848ba8;
  uStack_100 = *(undefined8 *)(puVar3 + 0x20);
  ppuStack_108 = ppuVar7;
  ppuStack_f8 = ppuVar6;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  func_0x00010bf851a0(uVar9,param_2,uVar8,&puStack_128);
  _objc_release(uVar8);
  _objc_release(ppuStack_f8);
  _objc_release(ppuStack_108);
  _objc_release(ppuVar6);
  _objc_release(ppuVar7);
  return;
}



/* Entry: 104981b68; end: 104981c57;  */

void FUN_104981b68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010c15e780(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104981c58;
  puStack_60 = &UNK_110848ba8;
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_4;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf851a0(uVar2,param_2,uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 104981c58; end: 104981e77;  */

/* WARNING: Possible PIC construction at 0x000104981e34: Changing call to branch */

void FUN_104981c58(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,long param_6)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x20) == 0) {
    param_4 = *(undefined8 *)(param_2 + 0x30);
    puVar4 = PTR_PTR_1126add78;
    func_0x00010bf71fc0(PTR_PTR_1126add78,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf64720(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1780();
      _objc_release(uVar5);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1808e0(*(undefined8 *)(param_2 + 0x28));
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126adf78;
      _objc_alloc(PTR_PTR_1126adf78);
      func_0x00010c020680();
      func_0x00010c180a40(*(undefined8 *)(param_2 + 0x28));
      _objc_release(puVar4);
      lVar6 = *(long *)(param_2 + 0x28);
      func_0x00010bf44020();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar6;
      func_0x00010bf52a60();
      lVar3 = lRam0000000000000000;
      while (lVar12 != 0) {
        lVar13 = 0;
        do {
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar6);
          }
          (**(code **)(*(long *)(lVar13 * 8) + 0x10))();
          lVar13 = lVar13 + 1;
        } while (lVar12 != lVar13);
        lVar12 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf44020(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12adc0();
      _objc_release(uVar5);
      puVar4 = *(undefined **)(param_2 + 0x28);
      goto code_r0x00010c1b3e80;
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      return;
    }
  }
  else {
    puVar4 = *(undefined **)(param_2 + 0x28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
code_r0x00010c1b3e80:
                    /* WARNING: Could not recover jumptable at 0x00010c1b3e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_setIsRequestStarted__11264a9c8,0);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain();
  puVar7 = puVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((puVar7 == (undefined *)0x0) ||
     ((puVar7 = puVar4, func_0x00010c22eb20(), (int)puVar7 != 0 &&
      (puVar7 = puVar4, func_0x00010be1e4a0(), puVar7 == (undefined *)0x1)))) goto LAB_10498258c;
  puVar7 = puVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf9a240();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf4b900();
  if ((int)puVar9 == 0) {
    puVar9 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c07f780();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    if ((int)puVar10 != 0) goto LAB_104981f88;
LAB_104981fb4:
    bVar1 = 0;
  }
  else {
    _objc_release(puVar8);
    _objc_release(puVar7);
LAB_104981f88:
    puVar7 = puVar4;
    func_0x00010c123ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf4b900();
    _objc_release(puVar7);
    if (((ulong)puVar8 & 1) != 0) goto LAB_104981fb4;
    puVar7 = puVar4;
    func_0x00010c123ca0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar7);
    bVar1 = 1;
  }
  puVar7 = puVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf3ec20();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf4b900();
  if ((int)puVar9 == 0) {
    puVar9 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c07f780();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    if ((int)puVar10 != 0) goto LAB_104982064;
LAB_104982090:
    bVar2 = 0;
  }
  else {
    _objc_release(puVar8);
    _objc_release(puVar7);
LAB_104982064:
    puVar7 = puVar4;
    func_0x00010c123c60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf4b900();
    _objc_release(puVar7);
    if (((ulong)puVar8 & 1) != 0) goto LAB_104982090;
    puVar7 = puVar4;
    func_0x00010c123c60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar7);
    bVar2 = 1;
  }
  puVar7 = param_5;
  func_0x00010c28ed80(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf5dea0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf4b900();
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = puVar7;
  if (((ulong)puVar10 & 1) == 0) {
    puVar9 = puVar4;
    func_0x00010bf46560(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf691c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar9);
  }
  if (param_6 == 0) {
LAB_10498243c:
    if ((bool)(bVar2 | bVar1)) goto LAB_10498256c;
  }
  else {
    puVar7 = puVar4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf9a240();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf4b900();
    if ((int)puVar10 == 0) {
      puVar10 = PTR_PTR_1126ade48;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c07f780();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
      if ((int)puVar11 != 0) goto LAB_1049821d8;
    }
    else {
      _objc_release(puVar9);
      _objc_release(puVar7);
LAB_1049821d8:
      puVar7 = PTR_PTR_1126add78;
      puVar9 = puVar4;
      func_0x00010c123ce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010bf71e60();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010c0d3c80();
      if (puVar10 == (undefined *)0x0) {
        puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      }
      else {
        puVar11 = puVar10;
        _objc_retain(puVar10);
      }
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar9);
      puVar7 = PTR_PTR_1126add78;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x00010bf71e60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        param_1 = 0.0;
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = puVar7;
        _objc_retain(puVar7);
      }
      _objc_release(puVar7);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar7 = PTR_PTR_1126add78;
      func_0x00010bf885a0(puVar9);
      dVar14 = param_1;
      func_0x00010bf885a0(param_6);
      param_1 = param_1 + dVar14;
      func_0x00010c0df720(param_1,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar7);
      _objc_release(puVar10);
      puVar7 = PTR_PTR_1126add78;
      puVar10 = puVar4;
      func_0x00010c123ce0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar7);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar11);
      bVar1 = 1;
    }
    puVar7 = puVar4;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf3ec20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf4b900();
    if ((int)puVar10 == 0) {
      puVar10 = PTR_PTR_1126ade48;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c07f780();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
      if ((int)puVar11 == 0) goto LAB_10498243c;
    }
    else {
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
    puVar7 = PTR_PTR_1126add78;
    puVar9 = puVar4;
    func_0x00010c123c80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c0d3c80();
    if (puVar10 == (undefined *)0x0) {
      puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      puVar11 = puVar10;
      _objc_retain(puVar10);
    }
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar9);
    puVar7 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      param_1 = 0.0;
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = puVar7;
      _objc_retain(puVar7);
    }
    _objc_release(puVar7);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar7 = PTR_PTR_1126add78;
    func_0x00010bf885a0(puVar9);
    dVar14 = param_1;
    func_0x00010bf885a0(param_6);
    func_0x00010c0df720(param_1 + dVar14,puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar7);
    _objc_release(puVar10);
    puVar7 = PTR_PTR_1126add78;
    puVar10 = puVar4;
    func_0x00010c123c80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar11);
LAB_10498256c:
    func_0x00010bddd400(puVar4);
    func_0x00010bddd3e0(puVar4);
    func_0x00010be998a0(puVar4);
  }
  _objc_release(puVar8);
LAB_10498258c:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104981e78; end: 1049825c3; -[FBSDKSKAdNetworkReporterV2 _recordAndUpdateEvent:currency:value:] */

void FUN_104981e78(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  long param_6)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain();
  uVar3 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((uVar3 == 0) ||
     ((uVar3 = param_2, func_0x00010c22eb20(), (int)uVar3 != 0 &&
      (uVar3 = param_2, func_0x00010be1e4a0(), uVar3 == 1)))) goto LAB_10498258c;
  uVar3 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf9a240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4b900();
  if ((int)uVar5 == 0) {
    puVar6 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c07f780();
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)puVar7 != 0) goto LAB_104981f88;
LAB_104981fb4:
    bVar1 = 0;
  }
  else {
    _objc_release(uVar4);
    _objc_release(uVar3);
LAB_104981f88:
    uVar3 = param_2;
    func_0x00010c123ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_104981fb4;
    uVar3 = param_2;
    func_0x00010c123ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar3);
    bVar1 = 1;
  }
  uVar3 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf3ec20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4b900();
  if ((int)uVar5 == 0) {
    puVar6 = PTR_PTR_1126ade48;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c07f780();
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)puVar7 != 0) goto LAB_104982064;
LAB_104982090:
    bVar2 = 0;
  }
  else {
    _objc_release(uVar4);
    _objc_release(uVar3);
LAB_104982064:
    uVar3 = param_2;
    func_0x00010c123c60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_104982090;
    uVar3 = param_2;
    func_0x00010c123c60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar3);
    bVar2 = 1;
  }
  uVar3 = param_5;
  func_0x00010c28ed80(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5dea0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf4b900();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = uVar3;
  if ((uVar8 & 1) == 0) {
    uVar5 = param_2;
    func_0x00010bf46560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf691c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
  }
  if (param_6 == 0) {
LAB_10498243c:
    if ((bool)(bVar2 | bVar1)) goto LAB_10498256c;
  }
  else {
    uVar3 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf9a240();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf4b900();
    if ((int)uVar8 == 0) {
      puVar6 = PTR_PTR_1126ade48;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c07f780();
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      if ((int)puVar7 != 0) goto LAB_1049821d8;
    }
    else {
      _objc_release(uVar5);
      _objc_release(uVar3);
LAB_1049821d8:
      puVar6 = PTR_PTR_1126add78;
      uVar3 = param_2;
      func_0x00010c123ce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010bf71e60(puVar6,param_3,uVar3,param_4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0d3c80();
      if (puVar7 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      }
      else {
        puVar9 = puVar7;
        _objc_retain(puVar7);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(uVar3);
      puVar6 = PTR_PTR_1126add78;
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x00010bf71e60(puVar6,param_3,puVar9,uVar4,puVar7);
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 == (undefined *)0x0) {
        param_1 = 0.0;
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar7 = puVar6;
        _objc_retain(puVar6);
      }
      _objc_release(puVar6);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = PTR_PTR_1126add78;
      func_0x00010bf885a0(puVar7);
      dVar11 = param_1;
      func_0x00010bf885a0(param_6);
      param_1 = param_1 + dVar11;
      func_0x00010c0df720(param_1,puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar6,param_3,puVar9,puVar10,uVar4);
      _objc_release(puVar10);
      puVar6 = PTR_PTR_1126add78;
      uVar3 = param_2;
      func_0x00010c123ce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71e80(puVar6,param_3,uVar3,puVar9,param_4);
      _objc_release(uVar3);
      _objc_release(puVar7);
      _objc_release(puVar9);
      bVar1 = 1;
    }
    uVar3 = param_2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf3ec20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf4b900();
    if ((int)uVar8 == 0) {
      puVar6 = PTR_PTR_1126ade48;
      func_0x00010c22b6a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c07f780();
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      if ((int)puVar7 == 0) goto LAB_10498243c;
    }
    else {
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    puVar6 = PTR_PTR_1126add78;
    uVar3 = param_2;
    func_0x00010c123c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010bf71e60(puVar6,param_3,uVar3,param_4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0d3c80();
    if (puVar7 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    }
    else {
      puVar9 = puVar7;
      _objc_retain(puVar7);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126add78;
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf71e60(puVar6,param_3,puVar9,uVar4,puVar7);
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 == (undefined *)0x0) {
      param_1 = 0.0;
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(0,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = puVar6;
      _objc_retain(puVar6);
    }
    _objc_release(puVar6);
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar6 = PTR_PTR_1126add78;
    func_0x00010bf885a0(puVar7);
    dVar11 = param_1;
    func_0x00010bf885a0(param_6);
    func_0x00010c0df720(param_1 + dVar11,puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar6,param_3,puVar9,puVar10,uVar4);
    _objc_release(puVar10);
    puVar6 = PTR_PTR_1126add78;
    uVar3 = param_2;
    func_0x00010c123c80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar6,param_3,uVar3,puVar9,param_4);
    _objc_release(uVar3);
    _objc_release(puVar7);
    _objc_release(puVar9);
LAB_10498256c:
    func_0x00010bddd400(param_2);
    func_0x00010bddd3e0(param_2);
    func_0x00010be998a0(param_2);
  }
  _objc_release(uVar4);
LAB_10498258c:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1049825c4; end: 104982763; -[FBSDKSKAdNetworkReporterV2 _checkAndUpdateConversionValue] */

void FUN_1049825c4(ulong param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf50c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar3 == 0) {
LAB_104982720:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      ___stack_chk_fail();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar3 = uVar4;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar3;
      func_0x00010bf3ebe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar16;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      do {
        if (uVar3 == 0) {
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
            return;
          }
          ___stack_chk_fail();
          iVar2 = 2;
          func_0x000100029b9c(2,0xe,0,0);
          if ((iVar2 != 0) && (uVar3 = uVar16, func_0x00010c22eb20(), (uVar3 & 1) == 0)) {
            iVar2 = 2;
            func_0x000100029b9c(2,0xf,4,0);
            func_0x00010bf50c60(uVar16);
            if (iVar2 == 0) {
              func_0x00010c284a80();
            }
            else {
              func_0x00010c288aa0();
            }
            func_0x00010c183e20(uVar16);
            func_0x00010c1b8e00(uVar16);
            puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c215dc0(uVar16);
            _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010be998b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_msgSend_11034d288)(uVar16,PTR_s__saveReportData_112583fc8);
            return;
          }
          return;
        }
        uVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar16);
          }
          uVar15 = *(ulong *)(uVar12 * 8);
          uVar6 = uVar15;
          func_0x00010c105640();
          uVar13 = uVar4;
          func_0x00010be1e4a0();
          if (uVar6 == uVar13) {
            func_0x00010bf630c0();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar15;
            func_0x00010bf52a60();
            lVar5 = lRam0000000000000000;
            while (uVar6 != 0) {
              uVar13 = 0;
              do {
                if (lRam0000000000000000 != lVar5) {
                  _objc_enumerationMutation(uVar15);
                }
                lVar14 = *(long *)(uVar13 * 8);
                if (lVar14 != 0) {
                  uVar7 = uVar4;
                  func_0x00010c123c60(uVar4);
                  _objc_retainAutoreleasedReturnValue();
                  uVar8 = uVar4;
                  func_0x00010c123c80(uVar4);
                  _objc_retainAutoreleasedReturnValue();
                  lVar9 = lVar14;
                  func_0x00010c077720();
                  _objc_release(uVar8);
                  _objc_release(uVar7);
                  if ((int)lVar9 != 0) {
                    func_0x00010bf3ec00(lVar14);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bed55a0(uVar4);
                    _objc_release(lVar14);
                    goto LAB_104982948;
                  }
                }
                uVar13 = uVar13 + 1;
              } while (uVar6 != uVar13);
              uVar6 = uVar15;
              func_0x00010bf52a60();
            }
LAB_104982948:
            _objc_release(uVar15);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar3);
        uVar3 = uVar16;
        func_0x00010bf52a60();
      } while( true );
    }
    uVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar4);
      }
      lVar14 = *(long *)(uVar16 * 8);
      lVar5 = lVar14;
      func_0x00010bf50c20();
      uVar12 = param_1;
      func_0x00010bf50c20();
      if (lVar5 < (long)uVar12) goto LAB_104982720;
      uVar12 = param_1;
      func_0x00010c123ca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_1;
      func_0x00010c123ce0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar14;
      func_0x00010c077740();
      _objc_release(uVar6);
      _objc_release(uVar12);
      if ((int)lVar5 != 0) {
        func_0x00010bf50c20(lVar14);
        func_0x00010bed61a0(param_1);
        goto LAB_104982720;
      }
      uVar16 = uVar16 + 1;
    } while (uVar3 != uVar16);
    uVar3 = uVar4;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104982764; end: 1049829bf; -[FBSDKSKAdNetworkReporterV2 _checkAndUpdateCoarseConversionValue] */

void FUN_104982764(ulong param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf3ebe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar4 == 0) {
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        return;
      }
      ___stack_chk_fail();
      iVar3 = 2;
      func_0x000100029b9c(2,0xe,0,0);
      if ((iVar3 != 0) && (uVar4 = uVar5, func_0x00010c22eb20(), (uVar4 & 1) == 0)) {
        iVar3 = 2;
        func_0x000100029b9c(2,0xf,4,0);
        func_0x00010bf50c60(uVar5);
        if (iVar3 == 0) {
          func_0x00010c284a80();
        }
        else {
          func_0x00010c288aa0();
        }
        func_0x00010c183e20(uVar5);
        func_0x00010c1b8e00(uVar5);
        puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c215dc0(uVar5);
        _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010be998b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s__saveReportData_112583fc8);
        return;
      }
      return;
    }
    uVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      uVar14 = *(ulong *)(uVar12 * 8);
      uVar6 = uVar14;
      func_0x00010c105640();
      uVar13 = param_1;
      func_0x00010be1e4a0();
      if (uVar6 == uVar13) {
        func_0x00010bf630c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar14;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (uVar6 != 0) {
          uVar13 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(uVar14);
            }
            lVar15 = *(long *)(uVar13 * 8);
            if (lVar15 != 0) {
              uVar7 = param_1;
              func_0x00010c123c60(param_1);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = param_1;
              func_0x00010c123c80(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar15;
              func_0x00010c077720();
              _objc_release(uVar8);
              _objc_release(uVar7);
              if ((int)lVar9 != 0) {
                func_0x00010bf3ec00(lVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bed55a0(param_1);
                _objc_release(lVar15);
                goto LAB_104982948;
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar6 != uVar13);
          uVar6 = uVar14;
          func_0x00010bf52a60();
        }
LAB_104982948:
        _objc_release(uVar14);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
    uVar4 = uVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1049829c0; end: 104982a9b; -[FBSDKSKAdNetworkReporterV2 _updateConversionValue:] */

void FUN_1049829c0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if ((iVar1 != 0) && (uVar2 = param_1, func_0x00010c22eb20(), (uVar2 & 1) == 0)) {
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    func_0x00010bf50c60(param_1);
    if (iVar1 == 0) {
      func_0x00010c284a80();
    }
    else {
      func_0x00010c288aa0();
    }
    func_0x00010c183e20(param_1);
    func_0x00010c1b8e00(param_1);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215dc0(param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be998b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveReportData_112583fc8);
    return;
  }
  return;
}



/* Entry: 104982a9c; end: 104982bc7; -[FBSDKSKAdNetworkReporterV2 _updateCoarseConversionValue:] */

void FUN_104982a9c(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,1,0);
  if (((iVar1 != 0) &&
      ((lVar2 = param_1, func_0x00010c22eb20(), (int)lVar2 == 0 ||
       (lVar2 = param_1, func_0x00010be1e4a0(), lVar2 != 1)))) &&
     ((uVar3 = param_3, func_0x00010c0720c0(), (uVar3 & 1) != 0 ||
      ((uVar3 = param_3, func_0x00010c0720c0(), (uVar3 & 1) != 0 ||
       (uVar3 = param_3, func_0x00010c0720c0(), (int)uVar3 != 0)))))) {
    lVar2 = param_1;
    func_0x00010bf50c60(param_1);
    func_0x00010c08a7c0(param_1);
    func_0x00010c288a60(lVar2);
    func_0x00010c17db80(param_1);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17db60(param_1);
    _objc_release(puVar4);
    func_0x00010be998a0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104982bc8; end: 104982ce3; -[FBSDKSKAdNetworkReporterV2 shouldCutoff] */

bool FUN_104982bc8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  
  lVar1 = param_2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf63060();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar4 = true;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf64720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfa16e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
    lVar1 = lVar2;
    func_0x00010c075f00(lVar2,param_3,puVar3);
    if ((int)lVar1 == 0) {
      bVar4 = false;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bf63060();
      bVar4 = (double)(lVar1 * 0x15180) < param_1;
      _objc_release(param_2);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  return bVar4;
}



/* Entry: 104982ce4; end: 104982d8f; -[FBSDKSKAdNetworkReporterV2 isReportingEvent:] */

long FUN_104982ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf9a240();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4b900();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104982d90; end: 1049833b3; -[FBSDKSKAdNetworkReporterV2 _loadReportData] */

void FUN_104982d90(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010bf64720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126adf78;
  _objc_alloc(PTR_PTR_1126adf78);
  func_0x00010c020680();
  func_0x00010c180a40(param_1,param_2,puVar4);
  _objc_release(puVar4);
  uVar2 = param_1;
  func_0x00010bf64720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x00010c1e8e80(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1e8ea0(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x00010c1e8e40(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420();
  func_0x00010c1e8e60(param_1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar2 = uVar5;
  func_0x00010c075f00(uVar5,param_2,puVar4);
  puVar9 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar4 = PTR_PTR_1126add78;
  if ((int)uVar2 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf39c40();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_98 = puVar6;
    func_0x00010bf39c40();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar7;
    func_0x00010bf39c40();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    puStack_88 = puVar6;
    func_0x00010bf39c40();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar7;
    func_0x00010bf39c40();
    puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puStack_78 = puVar6;
    func_0x00010bf39c40();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar7;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar8,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f260(puVar9,param_2,puVar8,uVar5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71fc0(puVar4,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    puVar8 = PTR_PTR_1126add78;
    if (puVar4 != (undefined *)0x0) {
      puVar9 = puVar4;
      func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da59b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fe0(puVar8,param_2,puVar9);
      func_0x00010c183e20(param_1,param_2,puVar8);
      _objc_release(puVar9);
      puVar8 = PTR_PTR_1126add78;
      puVar9 = puVar4;
      func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da5a18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fe0(puVar8,param_2,puVar9);
      func_0x00010c1b8e00(param_1,param_2,puVar8);
      _objc_release(puVar9);
      ppuVar10 = (undefined **)PTR_PTR_1126add78;
      puVar8 = puVar4;
      func_0x00010c0e00e0(puVar4,param_2,&PTR____CFConstantStringClassReference_110da5a38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d860(ppuVar10,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar1 = ppuVar10;
      }
      func_0x00010c17db80(param_1,param_2,ppuVar1);
      _objc_release(ppuVar10);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126add78;
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010bf71e60(puVar8,param_2,puVar4,&PTR____CFConstantStringClassReference_110dc1558,
                          puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215dc0(param_1,param_2,puVar8);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126add78;
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010bf71e60(puVar8,param_2,puVar4,&PTR____CFConstantStringClassReference_110da5a58,
                          puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17db60(param_1,param_2,puVar8);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126add78;
      puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSSet_1126ae870);
      func_0x00010bf71e60(puVar8,param_2,puVar4,&PTR____CFConstantStringClassReference_110da59d8,
                          puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0d3c80();
      if (puVar9 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        func_0x00010c1e8e80(param_1,param_2,puVar6);
        _objc_release(puVar6);
      }
      else {
        func_0x00010c1e8e80(param_1,param_2,puVar9);
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126add78;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010bf71e60(puVar8,param_2,puVar4,&PTR____CFConstantStringClassReference_110da59f8,
                          puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0d3c80();
      if (puVar9 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        func_0x00010c1e8ea0(param_1,param_2,puVar6);
        _objc_release(puVar6);
      }
      else {
        func_0x00010c1e8ea0(param_1,param_2,puVar9);
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126add78;
      puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSSet_1126ae870);
      func_0x00010bf71e60(puVar8,param_2,puVar4,&PTR____CFConstantStringClassReference_110da5a78,
                          puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0d3c80();
      if (puVar9 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
        func_0x00010c1e8e40(param_1,param_2,puVar6);
        _objc_release(puVar6);
      }
      else {
        func_0x00010c1e8e40(param_1,param_2,puVar9);
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126add78;
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      func_0x00010bf71e60(puVar8,param_2,puVar4,&PTR____CFConstantStringClassReference_110da5a98,
                          puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0d3c80();
      if (puVar9 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        func_0x00010c1e8e60(param_1,param_2,puVar6);
        _objc_release(puVar6);
      }
      else {
        func_0x00010c1e8e60(param_1,param_2,puVar9);
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    _objc_release(puVar4);
  }
  _objc_release(uVar5);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010bf50c20(uVar3);
  func_0x00010c0df780(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,puVar8,&PTR____CFConstantStringClassReference_110da59b8)
  ;
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010c08a7c0(uVar3);
  func_0x00010c0df780(puVar8,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,puVar8,&PTR____CFConstantStringClassReference_110da5a18)
  ;
  _objc_release(puVar8);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010bf3ebc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,uVar2,&PTR____CFConstantStringClassReference_110da5a38);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010c2709c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,uVar2,&PTR____CFConstantStringClassReference_110dc1558);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010bf3eba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,uVar2,&PTR____CFConstantStringClassReference_110da5a58);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010c123ca0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,uVar2,&PTR____CFConstantStringClassReference_110da59d8);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010c123ce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,uVar2,&PTR____CFConstantStringClassReference_110da59f8);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010c123c60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,uVar2,&PTR____CFConstantStringClassReference_110da5a78);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = uVar3;
  func_0x00010c123c80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar9,uVar2,&PTR____CFConstantStringClassReference_110da5a98);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar9,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bf64720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(uVar3);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1049833b4; end: 10498366f; -[FBSDKSKAdNetworkReporterV2 _saveReportData] */

void FUN_1049833b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010c0d8420(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010bf50c20(param_1);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,puVar3,&PTR____CFConstantStringClassReference_110da59b8)
  ;
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c08a7c0(param_1);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,puVar3,&PTR____CFConstantStringClassReference_110da5a18)
  ;
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010bf3ebc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da5a38);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c2709c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110dc1558);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010bf3eba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da5a58);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c123ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da59d8);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c123ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da59f8);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c123c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da5a78);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126add78;
  uVar2 = param_1;
  func_0x00010c123c80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar4,param_2,puVar1,uVar2,&PTR____CFConstantStringClassReference_110da5a98);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,puVar1,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bf64720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1780();
    _objc_release(param_1);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104983670; end: 1049836e7; -[FBSDKSKAdNetworkReporterV2 dispatchOnQueue:block:] */

void FUN_104983670(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain();
  if (param_4 != 0) {
    uVar2 = param_3;
    _dispatch_queue_get_label();
    iVar1 = (int)uVar2;
    _strcmp();
    if (iVar1 == 0) {
      func_0x00010007380c(param_3,param_4);
    }
    else {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1049836e8; end: 10498378b; -[FBSDKSKAdNetworkReporterV2 _isConfigRefreshTimestampValid] */

bool FUN_1049836e8(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = param_2;
  func_0x00010bf46200();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf46200(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar3,param_3,param_2);
    bVar1 = param_1 < 86400.0;
    _objc_release(param_2);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 10498378c; end: 104983873; -[FBSDKSKAdNetworkReporterV2 _getCurrentPostbackSequenceIndex] */

undefined8 FUN_10498378c(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  func_0x00010bf64720();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar5);
  if ((param_1 < 0.0) || (172800.0 < param_1)) {
    if ((param_1 <= 172800.0) || (604800.0 < param_1)) {
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (param_1 <= 3024000.0) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_1)) {
          bVar1 = param_1 < 604800.0;
          bVar2 = param_1 == 604800.0;
          bVar3 = false;
        }
      }
      uVar6 = 3;
      if (bVar2 || bVar1 != bVar3) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 1;
  }
  _objc_release(uVar4);
  return uVar6;
}



/* Entry: 104983874; end: 10498387b; -[FBSDKSKAdNetworkReporterV2 graphRequestFactory] */

undefined8 FUN_104983874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10498387c; end: 104983887; -[FBSDKSKAdNetworkReporterV2 setGraphRequestFactory:] */

void FUN_10498387c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104983888; end: 10498388f; -[FBSDKSKAdNetworkReporterV2 dataStore] */

undefined8 FUN_104983888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104983890; end: 10498389b; -[FBSDKSKAdNetworkReporterV2 setDataStore:] */

void FUN_104983890(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10498389c; end: 1049838a3; -[FBSDKSKAdNetworkReporterV2 conversionValueUpdater] */

undefined8 FUN_10498389c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1049838a4; end: 1049838af; -[FBSDKSKAdNetworkReporterV2 setConversionValueUpdater:] */

void FUN_1049838a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1049838b0; end: 1049838b7; -[FBSDKSKAdNetworkReporterV2 isSKAdNetworkReportEnabled] */

undefined1 FUN_1049838b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1049838b8; end: 1049838bf; -[FBSDKSKAdNetworkReporterV2 setIsSKAdNetworkReportEnabled:] */

void FUN_1049838b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1049838c0; end: 1049838c7; -[FBSDKSKAdNetworkReporterV2 completionBlocks] */

undefined8 FUN_1049838c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1049838c8; end: 1049838d3; -[FBSDKSKAdNetworkReporterV2 setCompletionBlocks:] */

void FUN_1049838c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 1049838d4; end: 1049838db; -[FBSDKSKAdNetworkReporterV2 isRequestStarted] */

undefined1 FUN_1049838d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1049838dc; end: 1049838e3; -[FBSDKSKAdNetworkReporterV2 setIsRequestStarted:] */

void FUN_1049838dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 1049838e4; end: 1049838eb; -[FBSDKSKAdNetworkReporterV2 serialQueue] */

undefined8 FUN_1049838e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1049838ec; end: 1049838f7; -[FBSDKSKAdNetworkReporterV2 setSerialQueue:] */

void FUN_1049838ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1049838f8; end: 1049838ff; -[FBSDKSKAdNetworkReporterV2 configuration] */

undefined8 FUN_1049838f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104983900; end: 10498390b; -[FBSDKSKAdNetworkReporterV2 setConfiguration:] */

void FUN_104983900(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10498390c; end: 104983913; -[FBSDKSKAdNetworkReporterV2 configRefreshTimestamp] */

undefined8 FUN_10498390c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104983914; end: 10498391f; -[FBSDKSKAdNetworkReporterV2 setConfigRefreshTimestamp:] */

void FUN_104983914(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 104983920; end: 104983927; -[FBSDKSKAdNetworkReporterV2 conversionValue] */

undefined8 FUN_104983920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104983928; end: 10498392f; -[FBSDKSKAdNetworkReporterV2 setConversionValue:] */

void FUN_104983928(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 104983930; end: 104983937; -[FBSDKSKAdNetworkReporterV2 lastUpdatedConversionValue] */

undefined8 FUN_104983930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 104983938; end: 10498393f; -[FBSDKSKAdNetworkReporterV2 setLastUpdatedConversionValue:] */

void FUN_104983938(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 104983940; end: 104983947; -[FBSDKSKAdNetworkReporterV2 coarseConversionValue] */

undefined8 FUN_104983940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 104983948; end: 104983953; -[FBSDKSKAdNetworkReporterV2 setCoarseConversionValue:] */

void FUN_104983948(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 104983954; end: 10498395b; -[FBSDKSKAdNetworkReporterV2 timestamp] */

undefined8 FUN_104983954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10498395c; end: 104983967; -[FBSDKSKAdNetworkReporterV2 setTimestamp:] */

void FUN_10498395c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 104983968; end: 10498396f; -[FBSDKSKAdNetworkReporterV2 coarseCVUpdateTimestamp] */

undefined8 FUN_104983968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 104983970; end: 10498397b; -[FBSDKSKAdNetworkReporterV2 setCoarseCVUpdateTimestamp:] */

void FUN_104983970(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 10498397c; end: 104983983; -[FBSDKSKAdNetworkReporterV2 recordedEvents] */

undefined8 FUN_10498397c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104983984; end: 10498398f; -[FBSDKSKAdNetworkReporterV2 setRecordedEvents:] */

void FUN_104983984(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 104983990; end: 104983997; -[FBSDKSKAdNetworkReporterV2 recordedValues] */

undefined8 FUN_104983990(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 104983998; end: 1049839a3; -[FBSDKSKAdNetworkReporterV2 setRecordedValues:] */

void FUN_104983998(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 1049839a4; end: 1049839ab; -[FBSDKSKAdNetworkReporterV2 recordedCoarseEvents] */

undefined8 FUN_1049839a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1049839ac; end: 1049839b7; -[FBSDKSKAdNetworkReporterV2 setRecordedCoarseEvents:] */

void FUN_1049839ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 1049839b8; end: 1049839bf; -[FBSDKSKAdNetworkReporterV2 recordedCoarseValues] */

undefined8 FUN_1049839b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1049839c0; end: 1049839cb; -[FBSDKSKAdNetworkReporterV2 setRecordedCoarseValues:] */

void FUN_1049839c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 1049839cc; end: 104983a8b; -[FBSDKSKAdNetworkReporterV2 .cxx_destruct] */

void FUN_1049839cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 104983a8c; end: 104983c17; -[FBSDKSKAdNetworkRule initWithJSON:] */

undefined1 * FUN_104983a8c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e3448;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
LAB_104983bc0:
    puVar7 = (undefined1 *)puVar1;
    _objc_retain(puVar1);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126add78;
    func_0x00010bf71fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126add78;
    if (puVar2 == (undefined *)0x0) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_104983bf4;
    }
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010bf71e60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126adf70;
    puVar4 = PTR_PTR_1126add78;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010bf71e60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f4040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if ((puVar3 != (undefined *)0x0) && (puVar5 != (undefined *)0x0)) {
      puVar4 = puVar3;
      func_0x00010c067fc0();
      uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined **)((long)puVar1 + 8) = puVar4;
      *(undefined **)((long)puVar1 + 0x10) = puVar5;
      _objc_release(uVar6);
      _objc_release(puVar3);
      param_3 = puVar2;
      goto LAB_104983bc0;
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar7 = (undefined1 *)0x0;
  }
  _objc_release(puVar2);
LAB_104983bf4:
  _objc_release(puVar1);
  return puVar7;
}



/* Entry: 104983c18; end: 104983f9b; -[FBSDKSKAdNetworkRule isMatchedWithRecordedEvents:recordedValues:] */

ulong FUN_104983c18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar5 = param_4;
  _objc_retain();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf52a60();
  if (lVar6 == 0) {
    uVar14 = 1;
  }
  else {
    lVar12 = *plStack_1b0;
    do {
      param_4 = 0;
      do {
        if (*plStack_1b0 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        lVar16 = *(long *)(lStack_1b8 + param_4 * 8);
        lVar15 = lVar16;
        func_0x00010bf9a060(lVar16);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = param_3;
        func_0x00010bf4b900(param_3,param_2,lVar15);
        _objc_release(lVar15);
        if ((int)lVar13 == 0) {
          uVar14 = 0;
          param_4 = 0;
          goto LAB_104983f3c;
        }
        lVar15 = lVar16;
        func_0x00010c297360();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar8 = PTR_PTR_1126add78;
        if (lVar15 != 0) {
          lVar6 = lVar16;
          func_0x00010bf9a060(lVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          func_0x00010bf71e60(puVar8,param_2,lVar5,lVar6,puVar7);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          if (puVar8 == (undefined *)0x0) {
            param_4 = 0;
            goto LAB_104983f30;
          }
          uVar18 = 0;
          uVar19 = 0;
          uVar20 = 0;
          uVar21 = 0;
          uVar22 = 0;
          uVar23 = 0;
          uVar24 = 0;
          uVar25 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          lStack_1f8 = 0;
          uStack_200 = 0;
          uStack_1e8 = 0;
          plStack_1f0 = (long *)0x0;
          lVar6 = lVar16;
          func_0x00010c297360();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar6;
          func_0x00010bf52a60();
          if (lVar12 != 0) {
            lVar15 = *plStack_1f0;
            goto LAB_104983e00;
          }
          param_4 = 0;
          goto LAB_104983f28;
        }
        param_4 = param_4 + 1;
      } while (lVar6 != param_4);
      lVar6 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_1c0,auStack_100,0x10);
      uVar14 = 1;
    } while (lVar6 != 0);
  }
  goto LAB_104983f3c;
LAB_104983e00:
  do {
    lVar13 = 0;
    do {
      if (*plStack_1f0 != lVar15) {
        _objc_enumerationMutation(lVar6);
      }
      puVar7 = PTR_PTR_1126add78;
      uVar17 = *(undefined8 *)(lStack_1f8 + lVar13 * 8);
      lVar9 = lVar16;
      func_0x00010c297360(lVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x00010bf71e60(puVar7,param_2,lVar9,uVar17,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      puVar10 = PTR_PTR_1126add78;
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x00010bf71e60(puVar10,param_2,puVar8,uVar17,puVar11);
      _objc_retainAutoreleasedReturnValue();
      if (puVar10 != (undefined *)0x0 && puVar7 != (undefined *)0x0) {
        func_0x00010bf885a0(puVar10);
        dVar2 = (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13(
                                                  uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18)))))
                                                ));
        func_0x00010bf885a0(puVar7);
        bVar3 = false;
        bVar4 = false;
        bVar1 = NAN((double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,CONCAT13
                                                  (uVar21,CONCAT12(uVar20,CONCAT11(uVar19,uVar18))))
                                                  ))));
        if (!NAN(dVar2) && !bVar1) {
          bVar3 = dVar2 < (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18)))))));
          bVar4 = dVar2 == (double)CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(uVar22,
                                                  CONCAT13(uVar21,CONCAT12(uVar20,CONCAT11(uVar19,
                                                  uVar18)))))));
        }
        if (!bVar4 && bVar3 == (NAN(dVar2) || bVar1)) {
          _objc_release(puVar10);
          _objc_release(puVar7);
          param_4 = 1;
          goto LAB_104983f28;
        }
      }
      _objc_release(puVar10);
      _objc_release(puVar7);
      lVar13 = lVar13 + 1;
    } while (lVar12 != lVar13);
    lVar12 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_200,auStack_180,0x10);
  } while (lVar12 != 0);
  param_4 = 0;
LAB_104983f28:
  _objc_release(lVar6);
LAB_104983f30:
  _objc_release(puVar8);
  uVar14 = 0;
LAB_104983f3c:
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return (ulong)(uVar14 | (uint)param_4 & 1);
  }
  ___stack_chk_fail();
  return *(ulong *)(param_3 + 8);
}


