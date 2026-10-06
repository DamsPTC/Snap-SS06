/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004b359c; end: 004b36e3;  */

void FUN_004b359c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong unaff_x20;
  undefined **ppuVar4;
  
  func_0x004b388c();
  func_0x004b387c();
  func_0x004b3884();
  func_0x00789e00();
  _objc_retainAutoreleasedReturnValue();
  FUN_004b3764();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = unaff_x20;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_intValue_00abc970);
    if ((uVar2 & 1) == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_00a29500;
    }
    else {
      uVar2 = unaff_x20;
      _objc_opt_respondsToSelector(unaff_x20,PTR_s_removeObjectAtIndex__00abda30);
      if ((uVar2 & 1) != 0) {
        func_0x007871a0(param_2);
        func_0x0078b480(unaff_x20);
        goto LAB_004b364c;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_00a294e0;
    }
    func_0x004b3884();
    func_0x00792300();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_opt_class();
    ppuVar3 = ppuVar4;
    func_0x007921a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b3830();
    func_0x00782f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    func_0x004b388c();
    func_0x00780860(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_004b359c(ppuVar4,ppuVar3);
    func_0x004b3874();
  }
  else {
    func_0x0078b4a0(unaff_x20);
LAB_004b364c:
    func_0x004b3858();
    func_0x004b38a0();
    func_0x004b3850();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004b36e4; end: 004b36eb;  */

void FUN_004b36e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x004b388c();
  func_0x00780860(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b359c();
  func_0x004b3874();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b36ec; end: 004b373b;  */

void FUN_004b36ec(undefined8 param_1,undefined8 param_2)

{
  func_0x004b388c();
  func_0x00780860(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b359c();
  func_0x004b3874();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004b373c; end: 004b3763;  */

/* WARNING: Removing unreachable block (ram,0x004b30e8) */

void FUN_004b373c(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = param_1;
  _objc_retain();
  func_0x004b387c();
  func_0x004b387c();
  func_0x004b3860();
  puVar1 = PTR_s_intValue_00abc970;
  puVar2 = PTR_s_objectAtIndex__00abd490;
  puVar3 = PTR_s_objectForKey__00abd4b8;
  do {
    uVar5 = unaff_x20;
    PTR_s_intValue_00abc970 = puVar1;
    PTR_s_objectAtIndex__00abd490 = puVar2;
    PTR_s_objectForKey__00abd4b8 = puVar3;
    if (uVar4 == 0) {
LAB_004b321c:
      func_0x004b3850();
      _objc_retain(param_1);
      uVar4 = uVar5;
LAB_004b3238:
      func_0x004b3850();
      func_0x004b3858();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
        ___stack_chk_fail();
        func_0x004b3894();
        _objc_retain(uVar4);
        while ((uVar5 = uVar4, func_0x007882e0(), uVar5 != 0 &&
               (uVar5 = uVar4, func_0x00780140(), (int)uVar5 == 0x2f))) {
          func_0x00792440();
          _objc_retainAutoreleasedReturnValue();
          func_0x004b3874();
        }
        func_0x00780860(uVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_004b304c(param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x004b3858();
        func_0x004b3874();
        func_0x004b3850();
        param_1 = param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
      return;
    }
    uVar9 = 0;
    do {
      uVar8 = *(ulong *)(uVar9 * 8);
      uVar5 = param_1;
      _objc_opt_respondsToSelector(param_1,puVar3);
      if ((uVar5 & 1) == 0) {
        uVar5 = param_1;
        _objc_opt_respondsToSelector(param_1,puVar2);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = uVar8, _objc_opt_respondsToSelector(uVar8,puVar1), (uVar5 & 1) == 0)) {
LAB_004b3230:
          func_0x004b3850();
          param_1 = 0;
          goto LAB_004b3238;
        }
        puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar6);
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar8);
          uVar5 = uVar8;
          func_0x007882e0();
          if (uVar5 == 0) {
            _objc_release(uVar8);
          }
          else {
            uVar5 = uVar8;
            func_0x00780140();
            _objc_release(uVar8);
            if (9 < (int)uVar5 - 0x30U) goto LAB_004b3230;
          }
        }
        func_0x007871a0(uVar8);
        func_0x00789e00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      unaff_x20 = param_1;
      func_0x004b3858();
      uVar5 = uVar4;
      if (param_1 == 0) goto LAB_004b321c;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
    func_0x004b3860();
    uVar4 = unaff_x20;
    puVar1 = PTR_s_intValue_00abc970;
    puVar2 = PTR_s_objectAtIndex__00abd490;
    puVar3 = PTR_s_objectForKey__00abd4b8;
  } while( true );
}



/* Entry: 004b3764; end: 004b382f;  */

/* WARNING: Possible PIC construction at 0x004b3818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004b381c) */

undefined * FUN_004b3764(void)

{
  undefined *unaff_x19;
  long unaff_x20;
  
  func_0x004b3894();
  _objc_retain();
  func_0x00780e80();
  if (unaff_x20 == 1) {
    func_0x004b387c();
  }
  else {
    func_0x00792300();
    _objc_retainAutoreleasedReturnValue();
    FUN_004b304c();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x19 == (undefined *)0x0) {
      func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      return PTR__OBJC_CLASS___NSException_00ac2f30;
    }
    func_0x004b38a0();
  }
  func_0x004b3874();
  func_0x004b3850();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x19);
  return unaff_x19;
}



/* Entry: 004b3830; end: 004b38bf;  */

undefined * FUN_004b3830(void)

{
  return PTR__OBJC_CLASS___NSException_00ac2f30;
}



/* Entry: 004b38c0; end: 004b3943; -[KSCrashReportSinkSnapAir initWithCrashReportUploadManager:crashMetricLogger:] */

undefined1 * FUN_004b38c0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  FUN_004b3c68();
  func_0x004b3c7c();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_00abbf70);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x004b3c84();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
    func_0x004b3c7c();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    _objc_release(uVar2);
  }
  func_0x004b3c98();
  _objc_release();
  return puVar1;
}



/* Entry: 004b3944; end: 004b39a3; -[KSCrashReportSinkSnapAir filterReports:onCompletion:] */

void FUN_004b3944(void)

{
  long unaff_x20;
  
  FUN_004b3c68();
  func_0x004b3c7c();
  func_0x0078aaa0();
  if (unaff_x20 != 0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  func_0x004b3c98();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004b39a4; end: 004b39ab;  */

ulong FUN_004b39a4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  bool bVar2;
  int iVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_490 [2];
  
  func_0x004a3954();
  FUN_004a33e0();
  func_0x004a39d0();
  func_0x004a3940(extraout_x8);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x004a3954();
  FUN_004a36f4();
  func_0x004a39d0();
  func_0x004a3940(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004a3954();
    auStack_490[1] = extraout_x8_01;
    FUN_004a38a0();
    bVar2 = (int)param_2 == iRam0000000000b09290;
    if (iRam0000000000b09290 < (int)param_2) {
      (*(code *)PTR____chkstk_darwin_00999f48)((param_2 & 0xffffffff) * 8 + 0xf & 0xffffffff0);
      param_2 = (long)auStack_490 - extraout_x8_02;
      FUN_004a34f4();
      iVar3 = (int)param_2;
      for (lVar6 = 0; lVar4 = (long)iVar3 - (long)iRam0000000000b09290, bVar2 = lVar6 == lVar4,
          lVar6 < lVar4; lVar6 = lVar6 + 1) {
        param_2 = *(ulong *)(((long)auStack_490 - extraout_x8_02) + lVar6 * 8);
        FUN_004a3754(param_2);
      }
    }
    func_0x004a3940(auStack_490[1]);
    if (!bVar2) {
      ___stack_chk_fail();
      uVar1 = uRam0000000000b66168;
      lVar6 = lRam0000000000b66170;
      _opendir();
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        while (lVar4 = lVar6, _readdir(), lVar4 != 0) {
          lVar4 = lVar4 + 0x15;
          FUN_004a38b4(lVar4,uVar1);
          uVar5 = (ulong)((int)uVar5 + ((uint)((ulong)lVar4 >> 0x3f) ^ 1));
        }
        _closedir(lVar6);
      }
      return uVar5;
    }
    return param_2;
  }
  return param_2;
}



/* Entry: 004b39ac; end: 004b3bab; -[KSCrashReportSinkSnapAir processReportsWithCompletion:onCompleteReport:] */

void FUN_004b39ac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x004b3c7c();
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x004b3c84();
  uVar1 = param_3;
  func_0x00780ea0();
  if (uVar1 != 0) {
    lVar6 = *plStack_130;
    do {
      uVar5 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        puVar2 = PTR_PTR_00ac2fb8;
        func_0x00784060();
        puVar3 = PTR_PTR_00ac2fb8;
        func_0x00784080(PTR_PTR_00ac2fb8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00792c00(*(undefined8 *)(param_1 + 0x10));
        _objc_initWeak(auStack_148,param_1);
        uVar4 = *(undefined8 *)(param_1 + 8);
        _objc_copyWeak(auStack_158,auStack_148);
        func_0x004b3c7c();
        puStack_150 = puVar2;
        func_0x0078aa00(uVar4);
        _objc_release(param_4);
        func_0x004b3c8c();
        _objc_destroyWeak(auStack_148);
        _objc_release(puVar3);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
      uVar1 = param_3;
      func_0x00780ea0();
    } while (uVar1 != 0);
  }
  _objc_release(param_3);
  func_0x004b3c98();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x004b3c8c();
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  lVar6 = param_3 + 0x28;
  _objc_loadWeakRetained();
  func_0x00792c20(*(undefined8 *)(lVar6 + 0x10));
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))
            (*(long *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar6);
  return;
}



/* Entry: 004b3bac; end: 004b3bef;  */

void FUN_004b3bac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00792c20(*(undefined8 *)(lVar1 + 0x10));
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 004b3bf0; end: 004b3c13; -[KSCrashReportSinkSnapAir manager] */

void FUN_004b3bf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x004b3c84();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004b3c14; end: 004b3c37; -[KSCrashReportSinkSnapAir crashMetricLogger] */

void FUN_004b3c14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x004b3c84();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004b3c38; end: 004b3c67; -[KSCrashReportSinkSnapAir .cxx_destruct] */

void FUN_004b3c38(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b3c68; end: 004b3c9f;  */

void FUN_004b3c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 004b3ca0; end: 004b3d63; -[KSCrashReportSinkSnapAirAppExtension initWithCrashReportUploadManager:crashMetricLogger:reportsPath:appName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_004b3ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  FUN_004b3ec4();
  puStack_48 = PTR_PTR_00ac3dc0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithCrashReportUploadManager_00abc160,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_00ac514c;
    FUN_004b3ec4();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_00ac5150;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 004b3d64; end: 004b3e83; -[KSCrashReportSinkSnapAirAppExtension filterReports:onCompletion:] */

void FUN_004b3d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  FUN_004b3ec4();
  uStack_50 = 0xc2000000;
  uStack_48 = 0x4b3e24;
  puStack_40 = &UNK_009ecb38;
  puStack_60 = PTR_PTR_00ac3dc0;
  puStack_58 = PTR___NSConcreteStackBlock_00999f30;
  uStack_68 = param_1;
  uStack_38 = param_1;
  _objc_msgSendSuper2(&uStack_68,PTR_s_processReportsWithCompletion_onC_00abd7b8,param_3,&puStack_58
                     );
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 004b3e84; end: 004b3ec3; -[KSCrashReportSinkSnapAirAppExtension .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b3e84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_00ac5150,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + _DAT_00ac514c,0);
  return;
}



/* Entry: 004b3ec4; end: 004b3ecb;  */

void FUN_004b3ec4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 004b3ecc; end: 004b3f17; +[KSCrashReportFileUtils getReportIDFromReport:] */

void FUN_004b3ecc(undefined8 param_1)

{
  FUN_004b4034();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b4044();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b3f18; end: 004b3f7b; +[KSCrashReportFileUtils getReportFileIDFromReport:] */

undefined8 FUN_004b3f18(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_004b4034();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00788b40();
  _objc_release(param_1);
  func_0x004b4044();
  return uVar1;
}



/* Entry: 004b3f7c; end: 004b3fe7; +[KSCrashReportFileUtils isNonFatal:] */

undefined8 FUN_004b3f7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_004b4034();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x007878e0();
  _objc_release(param_1);
  func_0x004b4044();
  return uVar1;
}



/* Entry: 004b3fe8; end: 004b4033; +[KSCrashReportFileUtils getNonFatalReportName:] */

void FUN_004b3fe8(undefined8 param_1)

{
  FUN_004b4034();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b4044();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b4034; end: 004b404b;  */

undefined8 FUN_004b4034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



/* Entry: 004b404c; end: 004b40bb; -[KSCrashThreadStackDumper init] */

undefined1 * FUN_004b404c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uStack_28 = 0x40ffffffff;
    pcStack_30 = FUN_004b4380;
    _sigaction(0x1f,&pcStack_30,0);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 004b40bc; end: 004b41df; -[KSCrashThreadStackDumper dumpStackTraceForThread:] */

void FUN_004b40bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_398 [872];
  
  lVar1 = param_1;
  _pthread_self();
  if (param_3 == lVar1) {
    FUN_004ad334(auStack_398,0);
    func_0x0077e0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
  }
  else {
    _pthread_mutex_lock(0xb09898);
    uVar2 = 0;
    _dispatch_semaphore_create();
    uVar3 = uRam0000000000b618e0;
    uRam0000000000b618e0 = uVar2;
    _objc_release(uVar3);
    _pthread_kill(param_3,0x1f);
    if ((int)param_3 == 0) {
      uVar3 = 0;
      _dispatch_time(0,3000000000);
      _dispatch_semaphore_wait(uRam0000000000b618e0,uVar3);
      FUN_004ad0f8(auStack_398,0xb618f0,uRam0000000000b618e8,1);
      func_0x0077e0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _bzero(0xb618f0,800);
      uRam0000000000b618e8 = 0;
      func_0x004b43c4();
      param_3 = param_1;
    }
    else {
      func_0x004b43c4();
      func_0x004b43b8();
      func_0x007868a0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 004b41e0; end: 004b437f; -[KSCrashThreadStackDumper _walkStack:] */

void FUN_004b41e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_00ac2cc0);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  func_0x0078c940(PTR__OBJC_CLASS___NSMutableSet_00ac2ac0);
  _objc_retainAutoreleasedReturnValue();
  iVar7 = 0;
  while (puVar3 = param_3, (*(code *)param_3[7])(), (int)puVar3 != 0) {
    puVar3 = param_3;
    (*(code *)param_3[8])();
    if ((int)puVar3 != 0) {
      lVar4 = param_3[1];
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_004a78e0();
        puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
        func_0x00792140(PTR__OBJC_CLASS___NSString_00ac2988,param_2,lVar4,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077e720(puVar2,param_2,puVar6);
        _objc_release(puVar6);
      }
      uVar8 = *param_3;
      uVar9 = param_3[2];
      puVar6 = PTR_PTR_00ac2fa0;
      func_0x00780b60(PTR_PTR_00ac2fa0,param_2,iVar7,lVar4,uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_00ac2fa0;
      func_0x00780b80(PTR_PTR_00ac2fa0,param_2,uVar9,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a28740);
      iVar7 = iVar7 + 1;
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
  }
  FUN_004b43b8();
  puVar6 = puVar2;
  func_0x0077eb00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x007868a0(puVar3,param_2,puVar1,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 004b4380; end: 004b43b7;  */

void FUN_004b4380(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xb618f0;
  _backtrace_async(0xb618f0,100,0);
  uRam0000000000b618e8 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077a4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_0099a1a0)(uRam0000000000b618e0);
  return;
}



/* Entry: 004b43b8; end: 004b43cf;  */

void FUN_004b43b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_0099acb0)(PTR_PTR_00ac2fc0);
  return;
}



/* Entry: 004b43d0; end: 004b4407; +[KSCString stringWithString:] */

void FUN_004b43d0(void)

{
  undefined8 unaff_x20;
  
  func_0x004b463c();
  _objc_retain();
  _objc_alloc();
  func_0x00786940();
  func_0x004b4654();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x20);
  return;
}



/* Entry: 004b4408; end: 004b442b; +[KSCString stringWithCString:] */

void FUN_004b4408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x00784ec0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004b442c; end: 004b4463; +[KSCString stringWithData:] */

void FUN_004b442c(void)

{
  undefined8 unaff_x20;
  
  func_0x004b463c();
  _objc_retain();
  _objc_alloc();
  func_0x007851c0();
  func_0x004b4654();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x20);
  return;
}



/* Entry: 004b4464; end: 004b448f; +[KSCString stringWithData:length:] */

void FUN_004b4464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00785260(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004b4490; end: 004b44c3; -[KSCString initWithString:] */

void FUN_004b4490(void)

{
  func_0x004b463c();
  _objc_retainAutorelease();
  func_0x0077fea0();
                    /* WARNING: Could not recover jumptable at 0x00784ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 004b44c4; end: 004b450b; -[KSCString initWithCString:] */

long FUN_004b44c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x004b4620();
  if (param_1 != 0) {
    _strdup();
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _strlen();
    *(undefined8 *)(param_1 + 8) = param_3;
  }
  return param_1;
}



/* Entry: 004b450c; end: 004b4563; -[KSCString initWithData:] */

void FUN_004b450c(void)

{
  func_0x004b463c();
  _objc_retainAutorelease();
  _objc_retain();
  func_0x0077fde0();
  func_0x007882e0();
  func_0x004b4654();
                    /* WARNING: Could not recover jumptable at 0x00785270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 004b4564; end: 004b45c7; -[KSCString initWithData:length:] */

long FUN_004b4564(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  func_0x004b4620();
  if (param_1 != 0) {
    *(long *)(param_1 + 8) = param_4;
    uVar1 = (ulong)((int)param_4 + 1);
    _malloc();
    _memcpy();
    *(undefined1 *)(uVar1 + param_4) = 0;
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return param_1;
}



/* Entry: 004b45c8; end: 004b460f; -[KSCString dealloc] */

void FUN_004b45c8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _free(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_00ac3dd0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 004b4610; end: 004b4617; -[KSCString length] */

undefined8 FUN_004b4610(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b4618; end: 004b465b; -[KSCString bytes] */

undefined8 FUN_004b4618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b465c; end: 004b46ef; -[KSThreadDumpInfo initWithStackTraces:imageNames:] */

undefined1 *
FUN_004b465c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3dd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00790640(puVar1);
    func_0x0078e640(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b46f0; end: 004b46f7; -[KSThreadDumpInfo stackTraces] */

undefined8 FUN_004b46f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b46f8; end: 004b46ff; -[KSThreadDumpInfo setStackTraces:] */

void FUN_004b46f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004b4700; end: 004b4707; -[KSThreadDumpInfo imageNames] */

undefined8 FUN_004b4700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b4708; end: 004b470f; -[KSThreadDumpInfo setImageNames:] */

void FUN_004b4708(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 004b4710; end: 004b473f; -[KSThreadDumpInfo .cxx_destruct] */

void FUN_004b4710(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b4740; end: 004b4747; +[FBAllocationTrackerManager sharedManager] */

undefined8 FUN_004b4740(void)

{
  return 0;
}



/* Entry: 004b4748; end: 004b474f; -[FBAllocationTrackerManager isAllocationTrackerEnabled] */

undefined8 FUN_004b4748(void)

{
  return 0;
}



/* Entry: 004b4750; end: 004b4753; -[FBAllocationTrackerManager startTrackingAllocations] */

void FUN_004b4750(void)

{
  return;
}



/* Entry: 004b4754; end: 004b4757; -[FBAllocationTrackerManager stopTrackingAllocations] */

void FUN_004b4754(void)

{
  return;
}



/* Entry: 004b4758; end: 004b475b; -[FBAllocationTrackerManager enableGenerations] */

void FUN_004b4758(void)

{
  return;
}



/* Entry: 004b475c; end: 004b475f; -[FBAllocationTrackerManager disableGenerations] */

void FUN_004b475c(void)

{
  return;
}



/* Entry: 004b4760; end: 004b4763; -[FBAllocationTrackerManager markGeneration] */

void FUN_004b4760(void)

{
  return;
}



/* Entry: 004b4764; end: 004b476b; -[FBAllocationTrackerManager currentAllocationSummary] */

undefined8 FUN_004b4764(void)

{
  return 0;
}



/* Entry: 004b476c; end: 004b4773; -[FBAllocationTrackerManager currentSummaryForGenerations] */

undefined8 FUN_004b476c(void)

{
  return 0;
}



/* Entry: 004b4774; end: 004b477b; -[FBAllocationTrackerManager instancesForClass:inGeneration:] */

undefined8 FUN_004b4774(void)

{
  return 0;
}



/* Entry: 004b477c; end: 004b4783; -[FBAllocationTrackerManager instancesOfClasses:] */

undefined8 FUN_004b477c(void)

{
  return 0;
}



/* Entry: 004b4784; end: 004b478b; -[FBAllocationTrackerManager trackedClasses] */

undefined8 FUN_004b4784(void)

{
  return 0;
}



/* Entry: 004b478c; end: 004b482b; -[FBAllocationTrackerSummary initWithAllocations:deallocations:aliveObjects:className:instanceSize:] */

undefined1 *
FUN_004b478c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac3de0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 004b482c; end: 004b4947; -[FBAllocationTrackerSummary description] */

void FUN_004b482c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,
                  *(long *)(param_1 + 0x28) * *(long *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x007921a0(puVar6,param_2,&PTR____CFConstantStringClassReference_00a29540);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar6);
  return;
}



/* Entry: 004b4948; end: 004b494f; -[FBAllocationTrackerSummary allocations] */

undefined8 FUN_004b4948(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b4950; end: 004b4957; -[FBAllocationTrackerSummary deallocations] */

undefined8 FUN_004b4950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b4958; end: 004b495f; -[FBAllocationTrackerSummary aliveObjects] */

undefined8 FUN_004b4958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004b4960; end: 004b4967; -[FBAllocationTrackerSummary className] */

undefined8 FUN_004b4960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004b4968; end: 004b496f; -[FBAllocationTrackerSummary instanceSize] */

undefined8 FUN_004b4968(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004b4970; end: 004b497b; -[FBAllocationTrackerSummary .cxx_destruct] */

void FUN_004b4970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 004b497c; end: 004b49e7; +[SCExtensionConversation groupWithGroup:] */

void FUN_004b497c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCExtensionConversation_00ac2fc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 004b49e8; end: 004b4a4b; +[SCExtensionConversation snapchatterWithSnapchatter:] */

void FUN_004b49e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCExtensionConversation_00ac2fc8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x007872c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 004b4a4c; end: 004b4beb; -[SCExtensionConversation initWithCoder:] */

undefined8 * FUN_004b4a4c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puStack_60 = PTR__OBJC_CLASS___SCExtensionConversation_00ac3de8;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x007878e0();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x007878e0();
      if ((uVar2 & 1) == 0) goto LAB_004b4b78;
      uVar5 = 1;
      lVar6 = 0x18;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_004b4b78:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_00ac2f30;
  ppuStack_58 = &PTR____CFConstantStringClassReference_00a29640;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  uStack_50 = unaff_x21;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 004b4bec; end: 004b4c0f; -[SCExtensionConversation copyWithZone:] */

undefined8 FUN_004b4bec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004b4c10; end: 004b4c9f; -[SCExtensionConversation encodeWithCoder:] */

void FUN_004b4c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_00a29580;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_00a295a0;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_004b4c8c;
    ppuVar3 = &PTR____CFConstantStringClassReference_00a295c0;
    lVar2 = 0x18;
    ppuVar1 = &PTR____CFConstantStringClassReference_00a295e0;
  }
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x0078bfa0(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_00a29560);
LAB_004b4c8c:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b4ca0; end: 004b4d17; -[SCExtensionConversation hash] */

void FUN_004b4ca0(long param_1)

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
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x007843a0();
  uStack_30 = uVar2;
  func_0x0076fd30(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR__OBJC_CLASS___SCExtensionConversation_00ac3de8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004b4d18; end: 004b4d5b; -[SCExtensionConversation internalInit] */

void FUN_004b4d18(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR__OBJC_CLASS___SCExtensionConversation_00ac3de8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004b4d5c; end: 004b4e13; -[SCExtensionConversation isEqual:] */

long FUN_004b4d5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004b4dec:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004b4df8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x007877e0();
          goto LAB_004b4df8;
        }
        goto LAB_004b4dec;
      }
    }
    lVar3 = 0;
  }
LAB_004b4df8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004b4e14; end: 004b4e97; -[SCExtensionConversation matchSnapchatter:group:] */

void FUN_004b4e14(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_004b4e7c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_004b4e7c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_004b4e7c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b4e98; end: 004b4ec7; -[SCExtensionConversation .cxx_destruct] */

void FUN_004b4e98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 004b4ec8; end: 004b4fef; -[SCExtensionGroup initWithCoder:] */

undefined1 * FUN_004b4ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCExtensionGroup_00ac3df0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b4ff0; end: 004b5127; -[SCExtensionGroup initWithGroupId:groupName:groupParticipants:groupParticipantsUserNames:bitmojiInfos:] */

undefined1 *
FUN_004b4ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR__OBJC_CLASS___SCExtensionGroup_00ac3df0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b5128; end: 004b514b; -[SCExtensionGroup copyWithZone:] */

undefined8 FUN_004b5128(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004b514c; end: 004b51e7; -[SCExtensionGroup encodeWithCoder:] */

void FUN_004b514c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0078bfa0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a29660);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                  &PTR____CFConstantStringClassReference_00a29680);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a296a0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                  &PTR____CFConstantStringClassReference_00a296c0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                  &PTR____CFConstantStringClassReference_00a296e0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b51e8; end: 004b527f; -[SCExtensionGroup hash] */

undefined8 * FUN_004b51e8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x007843a0();
  uStack_30 = uVar1;
  func_0x0076fd30(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_004b5348:
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_004b5354;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x007877e0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x007877e0();
                goto LAB_004b5354;
              }
              goto LAB_004b5348;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_004b5354:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 004b5280; end: 004b536f; -[SCExtensionGroup isEqual:] */

long FUN_004b5280(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004b5348:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004b5354;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x007877e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x007877e0();
                goto LAB_004b5354;
              }
              goto LAB_004b5348;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_004b5354:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004b5370; end: 004b5377; -[SCExtensionGroup groupId] */

undefined8 FUN_004b5370(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b5378; end: 004b537f; -[SCExtensionGroup groupName] */

undefined8 FUN_004b5378(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b5380; end: 004b5387; -[SCExtensionGroup groupParticipants] */

undefined8 FUN_004b5380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004b5388; end: 004b538f; -[SCExtensionGroup groupParticipantsUserNames] */

undefined8 FUN_004b5388(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004b5390; end: 004b5397; -[SCExtensionGroup bitmojiInfos] */

undefined8 FUN_004b5390(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004b5398; end: 004b53eb; -[SCExtensionGroup .cxx_destruct] */

void FUN_004b5398(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b53ec; end: 004b55c7; -[SCExtensionSnapchatter initWithCoder:] */

undefined1 * FUN_004b53ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR__OBJC_CLASS___SCExtensionSnapchatter_00ac3df8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00781a60();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004b55c8; end: 004b57cb; -[SCExtensionSnapchatter initWithUserId:username:nameToDisplay:conversationId:friendmojis:topPriorityFriendmoji:bitmojiInfo:streakInfo:birthday:isMutualFriend:] */

undefined8 *
FUN_004b55c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR__OBJC_CLASS___SCExtensionSnapchatter_00ac3df8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00780e20();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00780e20();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00780e20();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00780e20();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_12;
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
  return puVar1;
}



/* Entry: 004b57cc; end: 004b57ef; -[SCExtensionSnapchatter copyWithZone:] */

undefined8 FUN_004b57cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004b57f0; end: 004b58ef; -[SCExtensionSnapchatter encodeWithCoder:] */

void FUN_004b57f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x0078bfa0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a29700);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                  &PTR____CFConstantStringClassReference_00a29720);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                  &PTR____CFConstantStringClassReference_00a29740);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                  &PTR____CFConstantStringClassReference_00a29760);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                  &PTR____CFConstantStringClassReference_00a29780);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                  &PTR____CFConstantStringClassReference_00a297a0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                  &PTR____CFConstantStringClassReference_00a297c0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                  &PTR____CFConstantStringClassReference_00a297e0);
  func_0x0078bfa0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                  &PTR____CFConstantStringClassReference_00a29800);
  func_0x007826a0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                  &PTR____CFConstantStringClassReference_00a29820);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b58f0; end: 004b59bb; -[SCExtensionSnapchatter hash] */

undefined8 * FUN_004b58f0(long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = uVar2;
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x007843a0();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x007843a0();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_78;
  uStack_38 = uVar1;
  func_0x0076fd30(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_004b5af4:
    puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_004b5b00;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x007877e0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x007877e0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x007877e0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x007877e0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x007877e0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x007877e0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x007877e0(), (int)lVar5 != 0)) {
                      puVar6 = (undefined8 *)puVar3[10];
                      if (puVar6 != (undefined8 *)param_3[10]) {
                        func_0x007877e0();
                        goto LAB_004b5b00;
                      }
                      goto LAB_004b5af4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_004b5b00:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 004b59bc; end: 004b5b1b; -[SCExtensionSnapchatter isEqual:] */

long FUN_004b59bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004b5af4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004b5b00;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x007877e0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x007877e0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x007877e0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x007877e0(), (int)lVar3 != 0)) {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x007877e0(), (int)lVar3 != 0)) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x007877e0(), (int)lVar3 != 0))
                  {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x007877e0(), (int)lVar3 != 0)
                       ) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x007877e0();
                        goto LAB_004b5b00;
                      }
                      goto LAB_004b5af4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_004b5b00:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004b5b1c; end: 004b5b23; -[SCExtensionSnapchatter userId] */

undefined8 FUN_004b5b1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b5b24; end: 004b5b2b; -[SCExtensionSnapchatter username] */

undefined8 FUN_004b5b24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 004b5b2c; end: 004b5b33; -[SCExtensionSnapchatter nameToDisplay] */

undefined8 FUN_004b5b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004b5b34; end: 004b5b3b; -[SCExtensionSnapchatter conversationId] */

undefined8 FUN_004b5b34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004b5b3c; end: 004b5b43; -[SCExtensionSnapchatter friendmojis] */

undefined8 FUN_004b5b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 004b5b44; end: 004b5b4b; -[SCExtensionSnapchatter topPriorityFriendmoji] */

undefined8 FUN_004b5b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


