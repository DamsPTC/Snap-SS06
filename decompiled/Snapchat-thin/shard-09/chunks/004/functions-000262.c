/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cbad50; end: 106cbad5b; -[SCJobSchedulingCoordinator batteryStateDidChange:batteryLevel:] */

void FUN_106cbad50(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_2 + 0x40) = param_4;
  *(undefined4 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 106cbad5c; end: 106cbad5f; -[SCJobSchedulingCoordinator systemJobProvidersDidChange] */

void FUN_106cbad5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleSystemJobs_1125847a0);
  return;
}



/* Entry: 106cbad60; end: 106cbad6b; -[SCJobSchedulingCoordinator onCriticalSectionStarted] */

void FUN_106cbad60(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 106cbad6c; end: 106cbad73; -[SCJobSchedulingCoordinator onCriticalSectionEnded] */

void FUN_106cbad6c(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be9b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleJobs_112584618);
  return;
}



/* Entry: 106cbad74; end: 106cbaedb; -[SCJobSchedulingCoordinator _onEnqueueJobCompleteWithInfo:scope:error:queue:onComplete:] */

void FUN_106cbad74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_6 != 0) && (param_7 != 0)) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106cbaedc;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_7);
    lStack_58 = param_7;
    _objc_retain(param_5);
    lStack_60 = param_5;
    func_0x00010007380c(param_6,&puStack_80);
    _objc_release(lStack_60);
    _objc_release(lStack_58);
  }
  if (param_5 == 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
    func_0x00010c231e00();
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = param_3;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9b1e0(param_1);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000106cbaee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 106cbaedc; end: 106cbaeeb;  */

void FUN_106cbaedc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106cbaee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106cbaeec; end: 106cbaf9b; -[SCJobSchedulingCoordinator _scheduleJob:scope:] */

void FUN_106cbaeec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfa7c60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9b1e0(param_1);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be9b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106cbaf9c; end: 106cbafa7; -[SCJobSchedulingCoordinator _scheduleJobs:] */

void FUN_106cbaf9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__scheduleJobs_jobScheduledCallba_112584628,param_3,0,0);
  return;
}



/* Entry: 106cbafa8; end: 106cbb6e3; -[SCJobSchedulingCoordinator _scheduleJobs:jobScheduledCallback:backgroundTriggerSource:] */

ulong FUN_106cbafa8(long param_1,undefined **param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined **ppuStack_218;
  ulong uStack_1f8;
  undefined1 auStack_1a8 [8];
  double dStack_1a0;
  undefined4 uStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_106cbb6e4;
  puStack_120 = &UNK_11096f650;
  uVar3 = param_3;
  lStack_118 = param_1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  _objc_retain(uVar3);
  uStack_1f8 = uVar3;
  func_0x00010bf52a60();
  if (uStack_1f8 != 0) {
    lVar10 = *plStack_170;
    ppuStack_218 = &PTR____CFConstantStringClassReference_110e821b8;
    do {
      uVar13 = 0;
      do {
        if (*plStack_170 != lVar10) {
          _objc_enumerationMutation(uVar3);
        }
        uVar14 = *(undefined8 *)(lStack_178 + uVar13 * 8);
        puVar4 = PTR_PTR_1126b7228;
        _objc_alloc();
        uVar12 = uVar14;
        func_0x00010bf45e20(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008360();
        _objc_release(uVar12);
        lStack_188 = 0;
        lVar5 = param_1;
        func_0x00010beb3980();
        lVar9 = lStack_188;
        _objc_retain(lStack_188);
        lVar6 = param_5;
        func_0x00010c08fa60();
        lVar1 = lVar9;
        if (lVar6 != 0) {
          lVar1 = param_5;
        }
        _objc_retain();
        _objc_release(lVar9);
        if (lVar5 == 5) {
          func_0x00010c1503e0(uVar14);
          dVar15 = dVar16;
          _CFAbsoluteTimeGetCurrent();
          func_0x00010c294d60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0857c0(puVar4);
          dVar16 = dVar16 - dVar15;
          func_0x00010be9b0a0(param_1);
          _objc_release(uVar14);
        }
        else if (lVar5 == 1) {
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          _objc_alloc();
          puVar8 = PTR_PTR_1126d2050;
          func_0x00010bf98a40(PTR_PTR_1126d2050);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00e2e0();
          param_2 = ppuStack_218;
          FUN_106cbec30(puVar4,&PTR____CFConstantStringClassReference_110e821b8,puVar7,
                        *(undefined8 *)(param_1 + 0x20));
          _objc_release(puVar7);
          _objc_release(puVar8);
          func_0x00010bdfa2a0(param_1);
        }
        else if (lVar5 == 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          uVar12 = uVar14;
          func_0x00010c294d60(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0857e0(uVar11);
          _objc_release(uVar12);
          func_0x00010c1503e0(uVar14);
          if (dVar16 == 0.0) {
            func_0x00010c25fa00(uVar14);
            dVar15 = dVar16;
          }
          else {
            func_0x00010c1503e0(uVar14);
            dVar15 = dVar16;
          }
          FUN_106cbea78(puVar4,*(undefined8 *)(param_1 + 0x20));
          if (param_4 != 0) {
            (**(code **)(param_4 + 0x10))(param_4,uVar14);
          }
          _CFAbsoluteTimeGetCurrent();
          dVar16 = dVar15;
          _objc_initWeak(&puStack_190,param_1);
          uVar2 = (undefined4)*(undefined8 *)(param_1 + 0x78);
          func_0x00010c251360();
          uVar12 = *(undefined8 *)(param_1 + 0x78);
          puVar7 = puVar4;
          func_0x00010c085940(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6d20(uVar12);
          _objc_release(puVar7);
          puVar7 = puVar4;
          func_0x00010c085840();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c08fa60();
          _objc_release(puVar7);
          if (puVar8 != (undefined *)0x0) {
            uVar12 = *(undefined8 *)(param_1 + 0x78);
            puVar7 = puVar4;
            func_0x00010c085840(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef6d20(uVar12);
            _objc_release(puVar7);
          }
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar12 = *(undefined8 *)(param_1 + 0x78);
          func_0x00010bf07b60(*(undefined8 *)(param_1 + 0x38));
          func_0x00010c0df760(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6d20(uVar12);
          _objc_release(puVar8);
          _objc_release(puVar7);
          lVar9 = lVar1;
          func_0x00010c08fa60();
          if (lVar9 != 0) {
            func_0x00010bef6d20(*(undefined8 *)(param_1 + 0x78));
          }
          uVar12 = uVar14;
          func_0x00010bf0d8c0();
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (0 < (int)uVar12) {
            uVar12 = *(undefined8 *)(param_1 + 0x78);
            func_0x00010bf0d8c0(uVar14);
            func_0x00010c0df760(puVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef6d20(uVar12);
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          lVar9 = param_1;
          func_0x00010beb75c0();
          if ((int)lVar9 != 0) {
            uVar12 = *(undefined8 *)(param_1 + 0x78);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef6d20(uVar12);
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          uVar12 = *(undefined8 *)(param_1 + 0x10);
          puVar7 = puVar4;
          func_0x00010c085940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c065640(uVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0857c0(puVar4);
          param_2 = &puStack_190;
          _objc_copyWeak(auStack_1a8,param_2);
          _objc_retain(puVar4);
          dStack_1a0 = dVar15;
          uStack_198 = uVar2;
          func_0x00010bf9af40(uVar12);
          _objc_release(uVar14);
          _objc_release(puVar7);
          _objc_release(puVar4);
          _objc_destroyWeak(auStack_1a8);
          _objc_destroyWeak(&puStack_190);
        }
        _objc_release(lVar1);
        _objc_release(puVar4);
        uVar13 = uVar13 + 1;
      } while (uStack_1f8 != uVar13);
      uStack_1f8 = uVar3;
      func_0x00010bf52a60();
    } while (uStack_1f8 != 0);
  }
  _objc_release(uVar3);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a8);
  _objc_destroyWeak(&puStack_190);
  __Unwind_Resume();
  uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x28);
  func_0x00010c294d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075e00(uVar12);
  _objc_release(param_2);
  return (ulong)((uint)uVar12 ^ 1);
}



/* Entry: 106cbb6e4; end: 106cbb733;  */

uint FUN_106cbb6e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c294d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075e00(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106cbb734; end: 106cbb79f;  */

void FUN_106cbb734(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be69b80(*(undefined8 *)(param_1 + 0x38),lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cbb7a0; end: 106cbbc6b; -[SCJobSchedulingCoordinator _shouldExecuteJobWithJobInfo:jobConfig:jobTriggerReason:backgroundTriggerSource:] */

undefined8
FUN_106cbb7a0(double param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
             undefined8 *param_6)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c25fa00(param_4);
  dVar13 = param_1;
  _CFAbsoluteTimeGetCurrent();
  uVar3 = param_5;
  FUN_106cbf488(param_1,dVar13,*(undefined8 *)(param_2 + 0x50),param_5,0);
  if ((uVar3 & 1) != 0) {
    uVar9 = 1;
    goto LAB_106cbbc38;
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    uVar3 = param_5;
    func_0x00010c0858c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010c142880();
    _objc_release(uVar3);
    if ((int)uVar11 == 0) {
      uVar9 = 7;
      goto LAB_106cbbc38;
    }
  }
  func_0x00010c1503e0(param_4);
  dVar13 = param_1;
  _CFAbsoluteTimeGetCurrent();
  if (dVar13 <= param_1) {
    uVar9 = 5;
    goto LAB_106cbbc38;
  }
  uVar3 = param_5;
  func_0x00010c085560();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010c0d7960();
  _objc_release(uVar3);
  if ((int)uVar11 == 1) {
    puVar6 = PTR_PTR_1126ba4e8;
    func_0x00010c06f020();
    if ((int)puVar6 == 0) goto LAB_106cbb9f4;
  }
  else if (((int)uVar11 == 2) && (*(long *)(param_2 + 0x30) != 2)) {
LAB_106cbb9f4:
    uVar9 = 4;
    goto LAB_106cbbc38;
  }
  lVar2 = *(long *)(param_2 + 0x38);
  func_0x00010bf07b60();
  if (lVar2 == 2) {
    uVar11 = *(ulong *)(param_2 + 0x80);
    uVar3 = param_5;
    func_0x00010c085940(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(uVar3);
    if ((uVar11 & 1) == 0) goto LAB_106cbb8e4;
  }
  else {
LAB_106cbb8e4:
    bVar1 = *(byte *)(param_2 + 0x60);
    uVar3 = *(ulong *)(param_2 + 0x38);
    func_0x00010bf07b60();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((bVar1 & 1) == 0) {
      if (uVar3 == 0) {
        func_0x00010be1e8e0(param_2);
        func_0x00010c0df760(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c226900(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_5;
        FUN_106cbf778(param_5,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar6);
        if ((uVar3 & 1) != 0) {
          ppuVar8 = &PTR_PTR_11096f888;
LAB_106cbbb1c:
          puVar6 = *ppuVar8;
          _objc_retainAutorelease();
          *param_6 = puVar6;
          goto LAB_106cbbb28;
        }
      }
      else if (uVar3 != 1) {
        if (uVar3 != 2) goto LAB_106cbbb28;
        func_0x00010be1e8e0(param_2);
        func_0x00010c0df760(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c226900(puVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_5;
        FUN_106cbf778(param_5,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar6);
        if ((uVar3 & 1) != 0) {
          ppuVar8 = &PTR_PTR_11096f890;
          goto LAB_106cbbb1c;
        }
      }
    }
    else if (1 < uVar3) {
      if (uVar3 != 2) {
LAB_106cbbb28:
        puVar6 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
        func_0x00010bf5e640();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar6;
        func_0x00010c06d140();
        _objc_release(puVar6);
        if ((int)puVar5 == 0) {
LAB_106cbbbd4:
          uVar3 = param_5;
          func_0x00010c0858c0();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar3;
          func_0x00010c124680();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar11;
          func_0x00010c26d600();
          _objc_release(uVar11);
          _objc_release(uVar3);
          if (((int)uVar7 == 1) &&
             (uVar3 = param_4, FUN_106cbfb78(*(undefined8 *)(param_2 + 0x58),param_4,param_5),
             (uVar3 & 1) != 0)) {
            uVar9 = 6;
          }
          else {
            uVar9 = 0;
          }
        }
        else {
          uVar3 = param_5;
          func_0x00010c085560();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar3;
          func_0x00010bf176e0();
          _objc_release(uVar3);
          iVar10 = (int)uVar11;
          if (iVar10 == 1) {
            if ((*(ulong *)(param_2 + 0x40) & 0xfffffffffffffffe) == 2) goto LAB_106cbbbd4;
          }
          else {
            if (iVar10 == 3) {
              fVar12 = *(float *)(param_2 + 0x48);
              fVar14 = 0.2;
            }
            else {
              if (iVar10 != 4) goto LAB_106cbbbd4;
              fVar12 = *(float *)(param_2 + 0x48);
              fVar14 = 0.8;
            }
            if (fVar14 <= fVar12) goto LAB_106cbbbd4;
          }
          uVar9 = 3;
        }
        goto LAB_106cbbc38;
      }
      func_0x00010be1e8e0(param_2);
      func_0x00010c0df760(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010be1e8e0(param_2);
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c226900(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      FUN_106cbf778(param_5,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar6);
      if ((int)uVar3 != 0) {
        ppuVar8 = &PTR_PTR_11096f898;
        goto LAB_106cbbb1c;
      }
    }
  }
  uVar9 = 2;
LAB_106cbbc38:
  _objc_release(param_5);
  _objc_release(param_4);
  return uVar9;
}



/* Entry: 106cbbc6c; end: 106cbc497; -[SCJobSchedulingCoordinator _onJobExecutionCompleteWithJobInfo:jobConfig:jobResult:jobStartedTime:error:perfLoggerInstanceKey:] */

void FUN_106cbbc6c(double param_1,undefined *param_2,undefined8 param_3,undefined **param_4,
                  ulong param_5,long param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auStack_178 [8];
  double dStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  ulong uStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [8];
  double dStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *apuStack_f0 [5];
  undefined *apuStack_c8 [5];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  FUN_106cbeb28(param_5,param_6,*(undefined8 *)(param_2 + 0x20));
  lVar2 = param_7;
  func_0x000106cba280();
  if ((int)lVar2 != 0) {
    FUN_106cbec30(param_5,&PTR____CFConstantStringClassReference_110e82158,param_7,
                  *(undefined8 *)(param_2 + 0x20));
  }
  lVar2 = param_7;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d2050;
  func_0x00010bf98a40(PTR_PTR_1126d2050);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar4 == 0) {
    _objc_release(puVar3);
    _objc_release(lVar2);
LAB_106cbbd98:
    lVar2 = param_7;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar4 == 0) {
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    else {
      lVar4 = param_7;
      func_0x00010bf3ec40();
      _objc_release(puVar3);
      _objc_release(lVar2);
      if (lVar4 == 6) {
        uVar9 = *(undefined8 *)(param_2 + 0x28);
        ppuVar11 = param_4;
        func_0x00010c294d60(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c085620(uVar9);
        _objc_release(ppuVar11);
        func_0x00010bdfa2a0(param_2);
        goto LAB_106cbc42c;
      }
    }
    uVar5 = param_5;
    FUN_106cbf2dc();
    if (param_6 == 0) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 1.60807493534087e-314;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_106cbc498;
      puStack_88 = &UNK_1108450c8;
      ppuVar11 = &puStack_a0;
      puStack_80 = param_2;
      _objc_retainBlock();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar9 = *(undefined8 *)(param_2 + 0x78);
      func_0x00010bf07b60(*(undefined8 *)(param_2 + 0x38));
      func_0x00010c0df760(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6d20(uVar9);
      _objc_release(puVar7);
      _objc_release(puVar3);
      func_0x00010bf958e0(*(undefined8 *)(param_2 + 0x78));
LAB_106cbc1bc:
      _objc_initWeak(auStack_120,param_2);
LAB_106cbc1c8:
      if ((int)uVar5 != 0) {
        func_0x000106cbf71c(param_5);
        uVar12 = *(undefined8 *)(param_2 + 8);
        ppuVar8 = param_4;
        dVar13 = param_1;
        func_0x00010c294d60(param_4);
        _objc_retainAutoreleasedReturnValue();
        _CFAbsoluteTimeGetCurrent();
        func_0x00010c0857c0(param_5);
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010c11de00(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = auStack_178;
        _objc_copyWeak(puVar10,auStack_120);
        _objc_retain(param_4);
        _objc_retain(param_5);
        dStack_170 = param_1;
        _objc_retain(ppuVar11);
        func_0x00010c286c80(param_1 + dVar13,uVar12);
        _objc_release(uVar9);
        _objc_release(ppuVar8);
        _objc_release(ppuVar11);
        _objc_release(param_5);
        ppuVar8 = param_4;
        goto LAB_106cbc410;
      }
      func_0x00010bdfa2a0(param_2);
    }
    else {
      if (param_6 == 1) {
        ppuVar11 = param_4;
        func_0x00010bf0d8c0(param_4);
        uVar6 = param_5;
        FUN_106cbf3cc(param_5,(long)(int)ppuVar11);
        bVar1 = (int)uVar6 == 0;
        ppuVar11 = apuStack_c8;
        if (bVar1) {
          ppuVar11 = apuStack_f0;
        }
        puVar3 = (undefined *)0x106cbc4a8;
        if (bVar1) {
          puVar3 = (undefined *)0x106cbc4b8;
        }
        *ppuVar11 = PTR___NSConcreteStackBlock_11034bd00;
        param_1 = 1.60807493534087e-314;
        ppuVar11[1] = (undefined *)0xc2000000;
        ppuVar11[2] = puVar3;
        ppuVar11[3] = &UNK_1108450c8;
        ppuVar11[4] = param_2;
        _objc_retainBlock();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar9 = *(undefined8 *)(param_2 + 0x78);
        func_0x00010bf07b60(*(undefined8 *)(param_2 + 0x38));
        func_0x00010c0df760(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6d20(uVar9);
        _objc_release(puVar7);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar9 = *(undefined8 *)(param_2 + 0x78);
        FUN_106cbc4c8(param_7);
        func_0x00010c0df6e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6d20(uVar9);
        _objc_release(puVar7);
        _objc_release(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar9 = *(undefined8 *)(param_2 + 0x78);
        func_0x00010bf3ec40(param_7);
        func_0x00010c0df780(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf958e0(uVar9);
        _objc_release(puVar3);
        _objc_initWeak(auStack_120,param_2);
        if ((uVar6 & 1) == 0) goto LAB_106cbc1c8;
      }
      else {
        if (param_6 == 2) {
          puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
          param_1 = 1.60807493534087e-314;
          uStack_110 = 0xc2000000;
          pcStack_108 = FUN_106cbc540;
          puStack_100 = &UNK_1108450c8;
          ppuVar11 = &puStack_118;
          puStack_f8 = param_2;
          _objc_retainBlock();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar9 = *(undefined8 *)(param_2 + 0x78);
          FUN_106cbc4c8(param_7);
          func_0x00010c0df6e0(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6d20(uVar9);
          _objc_release(puVar7);
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar9 = *(undefined8 *)(param_2 + 0x78);
          func_0x00010bf3ec40(param_7);
          func_0x00010c0df780(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf958e0(uVar9);
          _objc_release(puVar3);
          goto LAB_106cbc1bc;
        }
        _objc_initWeak(auStack_120,param_2);
        ppuVar11 = (undefined **)0x0;
      }
      FUN_106cbf524(param_4,param_5);
      uVar12 = *(undefined8 *)(param_2 + 8);
      ppuVar8 = param_4;
      dVar13 = param_1;
      func_0x00010c294d60(param_4);
      _objc_retainAutoreleasedReturnValue();
      _CFAbsoluteTimeGetCurrent();
      func_0x00010bf0d8c0(param_4);
      func_0x00010c0857c0(param_5);
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      func_0x00010c11de00(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_160 = 0xc2000000;
      pcStack_158 = FUN_106cbc550;
      puStack_150 = &UNK_11096f6b0;
      puVar10 = auStack_130;
      _objc_copyWeak(puVar10,auStack_120);
      _objc_retain(param_4);
      ppuStack_148 = param_4;
      _objc_retain(param_5);
      uStack_140 = param_5;
      dStack_128 = param_1;
      _objc_retain(ppuVar11);
      ppuStack_138 = ppuVar11;
      func_0x00010c286c80(param_1 + dVar13,uVar12);
      _objc_release(uVar9);
      _objc_release(ppuVar8);
      _objc_release(ppuStack_138);
      _objc_release(uStack_140);
      ppuVar8 = ppuStack_148;
LAB_106cbc410:
      _objc_release(ppuVar8);
      _objc_destroyWeak(puVar10);
    }
    _objc_destroyWeak(auStack_120);
  }
  else {
    lVar4 = param_7;
    func_0x00010bf3ec40();
    _objc_release(puVar3);
    _objc_release(lVar2);
    if (lVar4 != 5) goto LAB_106cbbd98;
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    ppuVar11 = param_4;
    func_0x00010c294d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c085620(uVar9);
  }
  _objc_release(ppuVar11);
LAB_106cbc42c:
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106cbc498; end: 106cbc4c7;  */

void FUN_106cbc498(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_jobSucceeded__1125ff030,param_2
            );
  return;
}



/* Entry: 106cbc4c8; end: 106cbc53f;  */

uint FUN_106cbc4c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d2050;
    func_0x00010bf98a40(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0720c0(param_1,param_2,puVar1);
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  return uVar3;
}



/* Entry: 106cbc540; end: 106cbc54f;  */

void FUN_106cbc540(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_jobFailed__1125fef98,param_2);
  return;
}



/* Entry: 106cbc550; end: 106cbc607;  */

void FUN_106cbc550(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be6c240(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cbc608; end: 106cbc71f; -[SCJobSchedulingCoordinator _onUpdateJobScheduledTimeFinish:jobConfig:rescheduleDelay:error:jobStateUpdate:] */

void FUN_106cbc608(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_4;
  func_0x00010c294d60(param_4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_7 + 0x10))(param_7,uVar1);
  _objc_release(param_7);
  _objc_release(uVar1);
  if (param_6 == 0) {
    uVar1 = param_4;
    func_0x00010c294d60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0857c0(param_5);
    func_0x00010be9b0a0(param_1,param_2);
    _objc_release(uVar1);
  }
  else {
    lVar2 = param_6;
    func_0x000106cba280();
    if ((int)lVar2 != 0) {
      FUN_106cbec30(param_5,&PTR____CFConstantStringClassReference_110e82178,param_6,
                    *(undefined8 *)(param_2 + 0x20));
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106cbc720; end: 106cbc82b; -[SCJobSchedulingCoordinator _scheduleFutureJob:scope:delay:] */

void FUN_106cbc720(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_2 + 0x68);
  func_0x00010bf4b900();
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x68));
    _objc_initWeak(auStack_48,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_4);
    uStack_50 = param_5;
    func_0x00010c0f7fe0(param_1,uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106cbc82c; end: 106cbc877;  */

void FUN_106cbc82c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010be9b1a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cbc878; end: 106cbc987; -[SCJobSchedulingCoordinator _onDeleteJobFinish:jobConfig:deletionReason:error:jobStateUpdate:] */

void FUN_106cbc878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 != 0) {
    uVar1 = param_3;
    func_0x00010c294d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_7 + 0x10))(param_7,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = param_6;
  func_0x000106cba280();
  if ((int)uVar1 != 0) {
    FUN_106cbec30(param_4,&PTR____CFConstantStringClassReference_110e82198,param_6,
                  *(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c065640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dd2a0(uVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cbc988; end: 106cbcb27; -[SCJobSchedulingCoordinator _deleteJob:jobConfig:deletionReason:jobStateUpdate:] */

void FUN_106cbc988(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c294d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0857c0(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_70 = param_5;
  _objc_retain(param_6);
  func_0x00010bf6c1c0(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cbcb28; end: 106cbcb83;  */

void FUN_106cbcb28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cbcb84; end: 106cbcf2f; -[SCJobSchedulingCoordinator triggerBackgroundPrefetch:completionHandler:notificaionContext:] */

void FUN_106cbcb84(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined1 auStack_150 [8];
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bf07b60();
  if (lVar2 != 2) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,1);
    }
    goto LAB_106cbceb8;
  }
  FUN_106cbede0(param_3,*(undefined8 *)(param_1 + 0x20));
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_106cbcde8;
    if (param_3 != 1) goto LAB_106cbcee8;
    _objc_initWeak(auStack_68,param_1);
    *(undefined1 *)(param_1 + 0x60) = 1;
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_106cbd0c4;
    puStack_100 = &UNK_11096f6e0;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_106cbd1f8;
    puStack_128 = &UNK_11096f710;
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    puVar3 = auStack_150;
    pcStack_168 = FUN_106cbd204;
    puStack_160 = &UNK_11096f740;
    lStack_120 = param_1;
    lStack_f8 = param_1;
    _objc_copyWeak(puVar3,auStack_68);
    lStack_148 = param_3;
    _objc_retain(param_4);
    lStack_158 = param_4;
    func_0x00010c14fd00(param_1);
    lVar2 = lStack_158;
LAB_106cbcea4:
    _objc_release(lVar2);
LAB_106cbcea8:
    _objc_destroyWeak(puVar3);
  }
  else {
    if ((param_3 == 2) || (param_3 == 3)) {
LAB_106cbcde8:
      _objc_initWeak(auStack_68,param_1);
      *(undefined1 *)(param_1 + 0x60) = 1;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_106cbcf30;
      puStack_78 = &UNK_11096f6e0;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_106cbd060;
      puStack_a0 = &UNK_11096f710;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      puVar3 = auStack_c8;
      pcStack_e0 = FUN_106cbd06c;
      puStack_d8 = &UNK_11096f740;
      lStack_98 = param_1;
      lStack_70 = param_1;
      _objc_copyWeak(puVar3,auStack_68);
      lStack_c0 = param_3;
      _objc_retain(param_4);
      lStack_d0 = param_4;
      func_0x00010c14fd00(param_1);
      lVar2 = lStack_d0;
      goto LAB_106cbcea4;
    }
    if (param_3 == 4) {
      _objc_initWeak(auStack_68,param_1);
      *(undefined1 *)(param_1 + 0x60) = 1;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_198 = 0xc2000000;
      uStack_190 = 0x106cbd25c;
      puStack_188 = &UNK_11096f770;
      puVar3 = auStack_180;
      _objc_copyWeak(puVar3,auStack_68);
      puStack_1c8 = puVar1;
      uStack_1c0 = 0xc2000000;
      pcStack_1b8 = FUN_106cbd2e4;
      puStack_1b0 = &UNK_11096f710;
      lStack_1a8 = param_1;
      _objc_copyWeak(auStack_1d8,auStack_68);
      uStack_1d0 = 4;
      _objc_retain(param_4);
      func_0x00010c14fd00(param_1);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_1d8);
      goto LAB_106cbcea8;
    }
LAB_106cbcee8:
    _objc_initWeak(auStack_68,param_1);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  _objc_destroyWeak(auStack_68);
LAB_106cbceb8:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106cbcf30; end: 106cbd05f;  */

ulong FUN_106cbcf30(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be1e8e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be1e8e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = param_3;
  func_0x00010c085940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_106cbf908();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    func_0x00010befa120(puVar3);
  }
  uVar4 = param_3;
  FUN_106cbf778(param_3,puVar3);
  _objc_release(puVar3);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106cbd060; end: 106cbd06b;  */

void FUN_106cbd060(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
  return;
}



/* Entry: 106cbd06c; end: 106cbd0c3;  */

void FUN_106cbd06c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cbd0c4; end: 106cbd1f7;  */

uint FUN_106cbd0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be1e8e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010be1e8e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c226900(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befa120(puVar3);
  uVar4 = param_3;
  FUN_106cbf778(param_3,puVar3);
  if ((int)uVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = param_3;
    func_0x00010c085940(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_106cbf908();
    uVar6 = (uint)uVar5 ^ 1;
    _objc_release(uVar4);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 106cbd1f8; end: 106cbd203;  */

void FUN_106cbd1f8(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
  return;
}



/* Entry: 106cbd204; end: 106cbd2e3;  */

void FUN_106cbd204(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cbd2e4; end: 106cbd2ef;  */

void FUN_106cbd2e4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x60) = 0;
  return;
}



/* Entry: 106cbd2f0; end: 106cbd347;  */

void FUN_106cbd2f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26300();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cbd348; end: 106cbd50b; -[SCJobSchedulingCoordinator triggerBackgroundTaskExpired:graphene:] */

void FUN_106cbd348(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c142d40();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = auStack_f0;
  lVar11 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010bfa7c60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          lVar4 = lVar3;
          func_0x00010c27dd80(lVar3);
          _objc_retainAutoreleasedReturnValue();
          FUN_106cbf184();
          _objc_release(lVar4);
        }
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010bfa7c60();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar5 = lVar4;
          func_0x00010c27dd80(lVar4);
          _objc_retainAutoreleasedReturnValue();
          FUN_106cbf184();
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar10 = auStack_f0;
      lVar11 = 0x10;
      lVar2 = lVar1;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(lVar11);
  puVar6 = (undefined1 *)puVar9;
  func_0x00010bf9fca0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf529e0();
  _objc_release(puVar6);
  if (puVar7 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)puVar9;
    func_0x00010c261620();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    _objc_release(puVar6);
    if (puVar7 != (undefined1 *)0x0) {
      FUN_106cbf088(puVar10,0,*(undefined8 *)(param_4 + 0x20));
      uVar12 = 0;
      goto joined_r0x000106cbd5c0;
    }
    if (lVar11 == 0) goto LAB_106cbd5e0;
    uVar12 = 1;
  }
  else {
    uVar12 = 2;
    FUN_106cbf088(puVar10,2,*(undefined8 *)(param_4 + 0x20));
joined_r0x000106cbd5c0:
    if (lVar11 == 0) goto LAB_106cbd5e0;
  }
  (**(code **)(lVar11 + 0x10))(lVar11,uVar12);
LAB_106cbd5e0:
  uVar8 = *(undefined8 *)(param_4 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar8;
  func_0x00010bf1f3c0();
  _objc_release(uVar8);
  if ((int)uVar12 != 0) {
    func_0x00010bfb4ba0(*(undefined8 *)(param_4 + 0x90));
  }
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106cbd50c; end: 106cbd62f; -[SCJobSchedulingCoordinator _handleBachJobFinish:source:completionHandler:] */

void FUN_106cbd50c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf9fca0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_3;
    func_0x00010c261620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      FUN_106cbf088(param_4,0,*(undefined8 *)(param_1 + 0x20));
      uVar4 = 0;
      goto joined_r0x000106cbd5c0;
    }
    if (param_5 == 0) goto LAB_106cbd5e0;
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
    FUN_106cbf088(param_4,2,*(undefined8 *)(param_1 + 0x20));
joined_r0x000106cbd5c0:
    if (param_5 == 0) goto LAB_106cbd5e0;
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar4);
LAB_106cbd5e0:
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  if ((int)uVar4 != 0) {
    func_0x00010bfb4ba0(*(undefined8 *)(param_1 + 0x90));
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cbd630; end: 106cbd66f; -[SCJobSchedulingCoordinator _shouldWrapJobInBG:] */

undefined8 FUN_106cbd630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0858c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c142880();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106cbd670; end: 106cbd693; -[SCJobSchedulingCoordinator _getDeprecatedAppState:] */

undefined4 FUN_106cbd670(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 5) {
    return *(undefined4 *)(&UNK_10dded790 + (ulong)param_3 * 4);
  }
  return 0xfbadbeef;
}



/* Entry: 106cbd694; end: 106cbd6bf; -[SCJobSchedulingCoordinator applicationStateToString:] */

undefined ** FUN_106cbd694(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcdf78;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e455f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dcdfb8;
  if (param_3 != 2) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 106cbd6c0; end: 106cbd767; -[SCJobSchedulingCoordinator .cxx_destruct] */

void FUN_106cbd6c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cbd768; end: 106cbd76f; -[SCJobStatusTracker jobStarted:] */

void FUN_106cbd768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 106cbd770; end: 106cbd777; -[SCJobStatusTracker batchJobStarted:] */

void FUN_106cbd770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 106cbd778; end: 106cbd967; -[SCJobStatusTracker jobSucceeded:] */

void FUN_106cbd778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10));
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c085880(uVar7);
      func_0x00010c06d0c0();
      if ((int)uVar7 != 0) {
        func_0x00010befa120(puVar2);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar2);
      }
      func_0x00010c12d360(*(undefined8 *)(param_1 + 8));
      puVar8 = puVar8 + 1;
    } while (puVar4 != puVar8);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c085630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106cbd968; end: 106cbd96b; -[SCJobStatusTracker jobRetrybleFailure:] */

void FUN_106cbd968(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c085630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_jobFailed__1125fef98);
  return;
}



/* Entry: 106cbd96c; end: 106cbdb5b; -[SCJobStatusTracker jobFailed:] */

void FUN_106cbd96c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10));
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      uVar7 = *(undefined8 *)(lVar9 * 8);
      func_0x00010c085620(uVar7);
      func_0x00010c06d0c0();
      if ((int)uVar7 != 0) {
        func_0x00010befa120(puVar2);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(puVar2);
      }
      func_0x00010c12d360(*(undefined8 *)(param_1 + 8));
      puVar8 = puVar8 + 1;
    } while (puVar4 != puVar8);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x10),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 106cbdb5c; end: 106cbdb63; -[SCJobStatusTracker isJobRunning:] */

void FUN_106cbdb5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_containsObject__1125b07e8);
  return;
}



/* Entry: 106cbdb64; end: 106cbdb8b; -[SCJobStatusTracker runningJobs] */

void FUN_106cbdb64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cbdb8c; end: 106cbdbbb; -[SCJobStatusTracker .cxx_destruct] */

void FUN_106cbdb8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cbdbbc; end: 106cbdc2b; +[SCBackgroundTaskStartupRegistration _handleLaunchTask:] */

void FUN_106cbdbbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b6ac8;
  _objc_retain(param_3);
  func_0x00010bf677a0(puVar1);
  lVar2 = 0x1136c7d38;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    func_0x00010c2127a0(param_3,param_2,0);
  }
  else {
    func_0x00010be76420(lVar2,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106cbdc2c; end: 106cbdc4b;  */

void FUN_106cbdc2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2b1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b6ad0,PTR_s__handleLaunchTask__112568608,param_2);
  return;
}



/* Entry: 106cbdc4c; end: 106cbdcf3; -[SCBackgroundTaskRegistration registerBackgroundTaskWithBackgroundTaskRegistrationMonitor:] */

void FUN_106cbdc4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) - 1U < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106cbdcf4;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
    _objc_release(uStack_28);
  }
  else if (*(long *)(param_1 + 0x40) == 0) {
    func_0x00010c23bf20(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106cbdcf4; end: 106cbdcfb;  */

void FUN_106cbdcf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_signalBackgroundTaskRegistration_11266c9f0);
  return;
}



/* Entry: 106cbdcfc; end: 106cbdf8f; -[SCBackgroundTaskRegistration _postBackgroundWakeupNotification:] */

void FUN_106cbdcfc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_initWeak(auStack_68,uVar6);
  _objc_retain();
  uVar1 = uVar6;
  func_0x00010c251360();
  _objc_release(uVar6);
  lVar2 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    puVar4 = auStack_68;
    _objc_loadWeakRetained(puVar4);
    lVar2 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6d20(puVar4);
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
  _objc_initWeak(auStack_70,param_3);
  _objc_initWeak(auStack_78,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106cbdf90;
  puStack_98 = &UNK_11096f800;
  _objc_copyWeak(auStack_90,auStack_78);
  _objc_copyWeak(auStack_88,auStack_70);
  uStack_80 = (int)uVar1;
  func_0x00010c198ba0(param_3);
  func_0x00010becfe20(param_1);
  puVar5 = PTR_PTR_1126b6b48;
  _objc_copyWeak(auStack_c8,auStack_78);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_c0,auStack_68);
  uStack_b8 = (int)uVar1;
  func_0x00010c26a960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_c0);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 106cbdf90; end: 106cbe0a7;  */

void FUN_106cbdf90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfd1120(lVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x30));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106cbe0a8; end: 106cbe187; -[SCBackgroundTaskRegistration handleExpiration:instanceKey:] */

void FUN_106cbe0a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010becfe20(param_1);
  func_0x000106cbee8c();
  func_0x00010becfe20(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = PTR_PTR_1126b6b48;
  func_0x00010c26a7c0(PTR_PTR_1126b6b48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  uVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be95920(param_1);
  _objc_release(uVar2);
  func_0x00010c2127a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf958f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_endTopicWithTopic_instanceKey_st_1125c2fe0,2,
             param_4,2,0);
  return;
}



/* Entry: 106cbe188; end: 106cbe27f; -[SCBackgroundTaskRegistration submitBGTask] */

void FUN_106cbe188(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  if (*(long *)(param_1 + 0x40) - 1U < 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_30);
  }
  else if (*(long *)(param_1 + 0x40) == 0) {
    puVar1 = auStack_28;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bec5e60();
    _objc_release(puVar1);
    puVar1 = auStack_28;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bec5e20();
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106cbe280; end: 106cbe2c7;  */

void FUN_106cbe280(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec5e60();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec5e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106cbe2c8; end: 106cbe447; -[SCBackgroundTaskRegistration _resubmitBGTask:] */

/* WARNING: Removing unreachable block (ram,0x000106cbe408) */

void FUN_106cbe2c8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d2050;
  func_0x00010bf13cc0(PTR_PTR_1126d2050);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126d2050;
    func_0x00010bf14380(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_106cbe428;
    ppuVar4 = &PTR__OBJC_CLASS___BGProcessingTaskRequest_1126d20a0;
  }
  else {
    ppuVar4 = &PTR__OBJC_CLASS___BGAppRefreshTaskRequest_1126d2098;
  }
  puVar3 = *ppuVar4;
  _objc_alloc();
  func_0x00010c01b440();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (puVar3 != (undefined *)0x0) {
    func_0x00010becbf20(param_1);
    func_0x00010bf65600((double)(ulong)(param_1 * 0x3c),puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1932c0(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___BGTaskScheduler_1126d2090;
    func_0x00010c22bf20(PTR__OBJC_CLASS___BGTaskScheduler_1126d2090);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f840();
    _objc_retain(0);
    _objc_release(puVar1);
    _objc_release(0);
    _objc_release(puVar3);
  }
LAB_106cbe428:
  _objc_release(param_3);
  return;
}



/* Entry: 106cbe448; end: 106cbe4bf; -[SCBackgroundTaskRegistration _triggerSourceWithBGTask:] */

undefined8 FUN_106cbe448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d2050;
  func_0x00010bf13cc0(PTR_PTR_1126d2050);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  uVar1 = 3;
  if ((int)uVar3 != 0) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Entry: 106cbe4c0; end: 106cbe55f; -[SCBackgroundTaskRegistration _timeIntervalInMinutesForTaskIdentifier:] */

long FUN_106cbe4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d2050;
  _objc_retain(param_3);
  func_0x00010bf13cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar3 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c067f00(uVar3,param_2,&PTR____CFConstantStringClassReference_110e82118,0x2d0,0);
      lVar2 = (long)(int)uVar3;
      *(long *)(param_1 + 0x20) = lVar2;
    }
  }
  return lVar2;
}



/* Entry: 106cbe560; end: 106cbe63b; -[SCBackgroundTaskRegistration _submitBackgroundProcessingTask] */

/* WARNING: Removing unreachable block (ram,0x000106cbe608) */

void FUN_106cbe560(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (cRam00000001136c7d40 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___BGProcessingTaskRequest_1126d20a0;
    _objc_alloc(PTR__OBJC_CLASS___BGProcessingTaskRequest_1126d20a0);
    puVar2 = PTR_PTR_1126d2050;
    func_0x00010bf14380(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___BGTaskScheduler_1126d2090;
    func_0x00010c22bf20(PTR__OBJC_CLASS___BGTaskScheduler_1126d2090);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f840();
    _objc_retain(0);
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 106cbe63c; end: 106cbe717; -[SCBackgroundTaskRegistration _submitBackgroundAppRefreshTask] */

/* WARNING: Removing unreachable block (ram,0x000106cbe6e4) */

void FUN_106cbe63c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (cRam00000001136c7d41 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___BGAppRefreshTaskRequest_1126d2098;
    _objc_alloc(PTR__OBJC_CLASS___BGAppRefreshTaskRequest_1126d2098);
    puVar2 = PTR_PTR_1126d2050;
    func_0x00010bf13cc0(PTR_PTR_1126d2050);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___BGTaskScheduler_1126d2090;
    func_0x00010c22bf20(PTR__OBJC_CLASS___BGTaskScheduler_1126d2090);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f840();
    _objc_retain(0);
    _objc_release(puVar2);
    _objc_release(0);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 106cbe718; end: 106cbe723; +[SCBackgroundTaskRegistration SCBackgroundTaskRegistrationSettingFromInt:] */

uint FUN_106cbe718(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (2 < param_3) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 106cbe724; end: 106cbe733; +[SCBackgroundTaskRegistration SCBackgroundTaskRegistrationQosSettingFromInt:] */

uint FUN_106cbe724(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (4 < param_3) {
    param_3 = 3;
  }
  return param_3;
}



/* Entry: 106cbe734; end: 106cbe793; -[SCBackgroundTaskRegistration .cxx_destruct] */

void FUN_106cbe734(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cbe794; end: 106cbe7fb; -[SCBackgroundTaskRegistrationMonitor initWithTimeout:] */

undefined1 * FUN_106cbe794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6288;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = 0;
    _dispatch_semaphore_create();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106cbe7fc; end: 106cbe81f; -[SCBackgroundTaskRegistrationMonitor waitForBackgroundTaskRegistration] */

bool FUN_106cbe7fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  _dispatch_semaphore_wait(lVar1,*(undefined8 *)(param_1 + 8));
  return lVar1 == 0;
}



/* Entry: 106cbe820; end: 106cbe827; -[SCBackgroundTaskRegistrationMonitor signalBackgroundTaskRegistrationComplete] */

void FUN_106cbe820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 106cbe828; end: 106cbe82f; -[SCBackgroundTaskRegistrationMonitor dispatchTime] */

undefined8 FUN_106cbe828(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cbe830; end: 106cbe837; -[SCBackgroundTaskRegistrationMonitor setDispatchTime:] */

void FUN_106cbe830(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106cbe838; end: 106cbe83f; -[SCBackgroundTaskRegistrationMonitor semaphore] */

undefined8 FUN_106cbe838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cbe840; end: 106cbe86f; -[SCBackgroundTaskRegistrationMonitor setSemaphore:] */

void FUN_106cbe840(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106cbe870; end: 106cbe87b; -[SCBackgroundTaskRegistrationMonitor .cxx_destruct] */

void FUN_106cbe870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106cbe87c; end: 106cbe90b;  */

void FUN_106cbe87c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d20a8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c085580(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106cbe90c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cbe90c; end: 106cbea77;  */

void FUN_106cbe90c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_1;
  _objc_retain(param_1);
  func_0x0001008a99c8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0857c0(param_2);
  uVar2 = uVar1;
  func_0x00010bf979e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2ac460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c085940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c2ac460(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c085840(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x000106cc1808(uVar1);
  func_0x00010c25d8c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2ac460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106cbea78; end: 106cbeb27;  */

void FUN_106cbea78(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126d20a8;
  dVar3 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c085720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106cbe90c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_3);
  _CFAbsoluteTimeGetCurrent();
  func_0x00010befc000(dVar3 - param_1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cbeb28; end: 106cbec2f;  */

void FUN_106cbeb28(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR_PTR_1126d20a8;
  dVar3 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0855a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106cbe90c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_4);
  _CFAbsoluteTimeGetCurrent();
  func_0x00010befc000(dVar3 - param_1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cbec30; end: 106cbeddf;  */

void FUN_106cbec30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d20a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c085800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106cbe90c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf3ec40(param_3);
  _objc_release(param_3);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar4);
  func_0x00010bfec2a0(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cbede0; end: 106cbef5f;  */

void FUN_106cbede0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d20a8;
  _objc_retain(param_2);
  func_0x00010c0854e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cbef60; end: 106cbf087;  */

void FUN_106cbef60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d20a8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c085520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_2;
  func_0x00010bf87dc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cbf088; end: 106cbf183;  */

void FUN_106cbf088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d20a8;
  _objc_retain(param_3);
  func_0x00010c085520(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bfec2a0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106cbf184; end: 106cbf2db;  */

void FUN_106cbf184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d20a8;
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x00010c085500(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001008a99c8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf979e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar4;
  func_0x00010c2ac460(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar4);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106cbf2dc; end: 106cbf3cb;  */

bool FUN_106cbf2dc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c0858c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142880();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0858c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c124680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c130ba0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      uVar2 = param_1;
      func_0x00010c0858c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c124680();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c26d600();
      _objc_release(uVar3);
      _objc_release(uVar2);
      bVar1 = (int)uVar4 != 0;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 106cbf3cc; end: 106cbf487;  */

bool FUN_106cbf3cc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c13f280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c2b60();
  if ((int)uVar3 == 0) {
    uVar3 = 3;
  }
  else {
    uVar2 = param_1;
    func_0x00010c13f280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0c2b60();
    uVar3 = uVar3 & 0xffffffff;
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13f280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13faa0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 != 0 && param_2 < uVar3;
}



/* Entry: 106cbf488; end: 106cbf523;  */

bool FUN_106cbf488(double param_1,double param_2,double param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  _objc_retain();
  if (((param_5 != 0) && (param_1 < param_3)) ||
     (uVar2 = param_4, func_0x00010c085660(), param_1 < param_3 && (int)uVar2 != 0)) {
    bVar3 = true;
  }
  else {
    uVar2 = param_4;
    func_0x00010c085900();
    uVar1 = 0x93a80;
    if ((uint)uVar2 != 0) {
      uVar1 = (uint)uVar2;
    }
    bVar3 = (double)uVar1 < param_2 - param_1;
  }
  _objc_release(param_4);
  return bVar3;
}



/* Entry: 106cbf524; end: 106cbf6a3;  */

double FUN_106cbf524(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  double dVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c13f280();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c13faa0();
  _objc_release(uVar1);
  dVar7 = 0.0;
  iVar4 = (int)uVar6;
  if (iVar4 < 1) {
    if ((iVar4 == -0x4524111) || (iVar4 == 0)) {
      dVar7 = 3.4028234663852886e+38;
    }
  }
  else if (iVar4 == 1) {
    uVar1 = param_2;
    func_0x00010c13f280();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c0c1de0();
    if ((int)uVar6 == 0) {
      uVar6 = 7;
    }
    else {
      uVar2 = param_2;
      func_0x00010c13f280();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c0c1de0();
      uVar6 = uVar6 & 0xffffffff;
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    uVar3 = param_1;
    func_0x00010bf0d8c0();
    if ((ulong)(long)(int)uVar3 <= uVar6) {
      uVar6 = (long)(int)uVar3;
    }
    uVar1 = param_2;
    func_0x00010c13f280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c13f7e0();
    _objc_release(uVar1);
    uVar5 = (uint)uVar2;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    dVar7 = (double)uVar6;
    _exp2(dVar7);
    dVar7 = dVar7 * (double)uVar5;
  }
  else if (iVar4 == 2) {
    uVar1 = param_2;
    func_0x00010c13f280(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c13f7e0();
    dVar7 = (double)(uVar6 & 0xffffffff);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return dVar7;
}



/* Entry: 106cbf6a4; end: 106cbf777;  */

double FUN_106cbf6a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfd82a0();
  dVar3 = 0.0;
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c0858c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0858e0();
    if ((int)uVar2 == 3) {
      uVar2 = uVar1;
      func_0x00010c1426a0(uVar1);
      dVar3 = (double)(uVar2 & 0xffffffff);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return dVar3;
}



/* Entry: 106cbf778; end: 106cbf88f;  */

undefined1 FUN_106cbf778(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x00010c085560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010bf980c0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106cbf890; end: 106cbf907;  */

void FUN_106cbf890(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar1);
  if (iVar2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 106cbf908; end: 106cbf917;  */

void FUN_106cbf908(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantArray_1111811f0,PTR_s_containsObject__1125b07e8,param_1);
  return;
}



/* Entry: 106cbf918; end: 106cbfb77;  */

undefined * FUN_106cbf918(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  puVar5 = puVar7;
  FUN_106cbf778(param_2,puVar7);
  _objc_release(puVar7);
  if ((int)lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf44740();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    param_1 = 0.0;
    _objc_retain(lVar2);
    lVar1 = lVar2;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar2);
        }
        uVar8 = *(undefined8 *)(lVar9 * 8);
        puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
        func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d0a0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        func_0x00010befa120(puVar7);
        _objc_release(uVar8);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
    puVar3 = puVar7;
    func_0x00010bf51e00();
    _objc_release(puVar7);
    _objc_release(lVar2);
    lVar1 = param_2;
    func_0x00010c085940();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      lVar1 = param_2;
      func_0x00010c085940();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010bf4b900();
      _objc_release(lVar1);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar7;
  }
  ___stack_chk_fail();
  dVar10 = param_1;
  _objc_retain();
  _objc_retain(puVar5);
  lVar1 = param_2;
  func_0x00010bf0d8c0();
  if ((int)lVar1 == 0) {
    func_0x00010c1503e0(param_2);
    dVar11 = dVar10;
    func_0x000106cbf71c(puVar5);
    puVar7 = (undefined *)(ulong)(param_1 < dVar10 - dVar11);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
  _objc_release(param_2);
  return puVar7;
}



/* Entry: 106cbfb78; end: 106cbfbff;  */

bool FUN_106cbfb78(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bf0d8c0();
  if ((int)uVar1 == 0) {
    func_0x00010c1503e0(param_2);
    dVar4 = dVar3;
    func_0x000106cbf71c(param_3);
    bVar2 = param_1 < dVar3 - dVar4;
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar2;
}



/* Entry: 106cbfc00; end: 106cbfc2b;  */

void FUN_106cbfc00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_stringValueForConfigKeySync_defa_112675008,
             &PTR____CFConstantStringClassReference_110e824f8,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 106cbfc2c; end: 106cc036f; -[SCJobSchedulerJobInfoDataSource fetchJobInfoWithContext:jobTypeIdentifier:jobSubtypeIdentifier:scope:] */

void FUN_106cbfc2c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 uStack_33c;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_320;
  undefined4 uStack_318;
  undefined4 uStack_308;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 uStack_2a9;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined2 uStack_290;
  byte bStack_28e;
  byte bStack_28d;
  undefined1 *puStack_270;
  undefined ***pppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long *plStack_248;
  long *plStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined1 uStack_1c1;
  undefined **ppuStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1a8;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined ***pppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined **ppuStack_150;
  undefined4 uStack_148;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar10 = *(undefined8 **)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar10 == (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126d20b0);
    if (param_3 == 0) {
      uStack_b0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_e0,param_3);
    }
    lVar3 = param_5;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      pppuVar6 = &ppuStack_320;
      FUN_106cc3028();
      uStack_1b8 = 0xf;
      uStack_1a8 = 0x100;
      _objc_retain(param_4);
      ppuStack_1c0 = &PTR_DAT_110862760;
      pppuStack_180 = (undefined ***)0x0;
      puStack_188 = (undefined1 *)0x0;
      uStack_170 = 0;
      puStack_178 = (undefined *)0x0;
      plStack_160 = (long *)0x0;
      uStack_168 = 0;
      plStack_158 = (long *)0x0;
      uStack_136 = *(undefined2 *)((long)pppuVar6 + 0x1a);
      uStack_148 = 10;
      uStack_138 = 0x100;
      ppuStack_150 = &PTR_SUB_110862700;
      pppuStack_110 = &ppuStack_1c0;
      uStack_100 = 0;
      puStack_108 = (undefined *)0x0;
      plStack_f0 = (long *)0x0;
      uStack_f8 = 0;
      plStack_e8 = (long *)0x0;
      ppuStack_238 = (undefined **)0x0;
      ppuStack_230 = (undefined **)0x0;
      uStack_228 = 0;
      uStack_2a8 = (undefined **)((ulong)uStack_2a8._4_4_ << 0x20);
      puVar7 = &uStack_e0;
      uStack_190 = param_4;
      pppuStack_118 = pppuVar6;
      func_0x0001000e77a0(puVar7,&ppuStack_150,&ppuStack_238,&uStack_2a8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      if (ppuStack_238 != (undefined **)0x0) {
        ppuStack_230 = ppuStack_238;
        __ZdlPv();
      }
      plVar1 = plStack_e8;
      ppuStack_150 = &PTR_SUB_110862700;
      plStack_e8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_f0;
      plStack_f0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      ppuStack_238 = &puStack_108;
      func_0x000100105004(&ppuStack_238);
      plVar1 = plStack_158;
      ppuStack_1c0 = &PTR_DAT_110862760;
      plStack_158 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_160;
      plStack_160 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      ppuStack_238 = &puStack_178;
      func_0x000100105004(&ppuStack_238);
      uVar9 = uStack_190;
    }
    else {
      puVar4 = &uStack_1c1;
      FUN_106cc3028();
      ppuStack_230 = (undefined **)CONCAT44(ppuStack_230._4_4_,0xf);
      uStack_220 = 0x100;
      _objc_retain(param_4);
      ppuStack_238 = &PTR_DAT_110862760;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      puStack_1f0 = (undefined *)0x0;
      plStack_1d8 = (long *)0x0;
      uStack_1e0 = 0;
      plStack_1d0 = (long *)0x0;
      uStack_1b8 = 10;
      uStack_1a8 = CONCAT22(*(undefined2 *)(puVar4 + 0x1a),0x100);
      ppuStack_1c0 = &PTR_SUB_110862700;
      uStack_170 = 0;
      puStack_178 = (undefined *)0x0;
      plStack_160 = (long *)0x0;
      uStack_168 = 0;
      plStack_158 = (long *)0x0;
      puVar5 = &uStack_2a9;
      uStack_208 = param_4;
      puStack_188 = puVar4;
      pppuStack_180 = &ppuStack_238;
      FUN_106cc31a0();
      uStack_318 = 0xf;
      uStack_308 = 0x100;
      _objc_retain(param_5);
      ppuStack_320 = &PTR_DAT_110862760;
      uStack_2e0 = 0;
      uStack_2e8 = 0;
      uStack_2d0 = 0;
      uStack_2d8 = 0;
      plStack_2c0 = (long *)0x0;
      uStack_2c8 = 0;
      plStack_2b8 = (long *)0x0;
      bStack_28e = puVar5[0x1a];
      bStack_28d = puVar5[0x1b];
      uStack_2a0 = 10;
      uStack_290 = 0x100;
      uStack_2a8 = &PTR_SUB_110862700;
      pppuStack_110 = (undefined ***)&uStack_2a8;
      uStack_258 = 0;
      uStack_260 = 0;
      plStack_248 = (long *)0x0;
      uStack_250 = 0;
      plStack_240 = (long *)0x0;
      uStack_148 = 4;
      uStack_138 = 0x100;
      uStack_136 = CONCAT11(uStack_1a8._3_1_ & bStack_28d,uStack_1a8._2_1_ | bStack_28e);
      ppuStack_150 = &PTR_DAT_1108629c8;
      pppuStack_118 = &ppuStack_1c0;
      plStack_e8 = (long *)0x0;
      plStack_f0 = (long *)0x0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puStack_108 = (undefined *)0x0;
      puStack_338 = (undefined8 *)0x0;
      puStack_330 = (undefined8 *)0x0;
      uStack_328 = 0;
      uStack_33c = 0;
      puVar7 = &uStack_e0;
      lStack_2f0 = param_5;
      puStack_270 = puVar5;
      pppuStack_268 = &ppuStack_320;
      func_0x0001000e77a0(puVar7,&ppuStack_150,&puStack_338,&uStack_33c);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf0a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      if (puStack_338 != (undefined8 *)0x0) {
        puStack_330 = puStack_338;
        __ZdlPv();
      }
      plVar1 = plStack_e8;
      ppuStack_150 = &PTR_DAT_1108629c8;
      plStack_e8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_f0;
      plStack_f0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (puStack_108 != (undefined *)0x0) {
        __ZdlPv();
      }
      plVar1 = plStack_240;
      uStack_2a8 = &PTR_SUB_110862700;
      plStack_240 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_248;
      plStack_248 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_338 = &uStack_260;
      func_0x000100105004(&puStack_338);
      plVar1 = plStack_2b8;
      ppuStack_320 = &PTR_DAT_110862760;
      plStack_2b8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_2c0;
      plStack_2c0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_338 = &uStack_2d8;
      func_0x000100105004(&puStack_338);
      _objc_release(lStack_2f0);
      plVar1 = plStack_158;
      ppuStack_1c0 = &PTR_SUB_110862700;
      plStack_158 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_160;
      plStack_160 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      uStack_2a8 = &puStack_178;
      func_0x000100105004(&uStack_2a8);
      plVar1 = plStack_1d0;
      ppuStack_238 = &PTR_DAT_110862760;
      plStack_1d0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_1d8;
      plStack_1d8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      uStack_2a8 = &puStack_1f0;
      func_0x000100105004(&uStack_2a8);
      uVar9 = uStack_208;
    }
    _objc_release(uVar9);
    func_0x0001000e76e0(&uStack_b8);
    _objc_release(uStack_c8);
    lVar3 = lStack_d0;
  }
  else {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106cc0370;
    puStack_88 = &UNK_11096f8f0;
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_retain(param_4);
    puVar8 = puVar10;
    uStack_78 = param_4;
    func_0x0001006372a4(puVar10,&puStack_a0);
    _objc_release(uStack_78);
    lVar3 = lStack_80;
  }
  _objc_release(lVar3);
  _objc_release(puVar10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106cc0370; end: 106cc046b;  */

undefined8 FUN_106cc0370(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  uVar3 = param_2;
  if (lVar1 == 0) {
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
  }
  else {
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar2 = param_2;
      func_0x00010bfe5ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
    }
  }
  _objc_release(uVar3);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 106cc046c; end: 106cc0817; -[SCJobSchedulerJobInfoDataSource fetchJobInfoWithContext:uuid:scope:] */

void FUN_106cc046c(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_1d4;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined **ppuStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1a0;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long *plStack_150;
  undefined1 uStack_141;
  undefined **ppuStack_140;
  undefined4 uStack_138;
  undefined2 uStack_128;
  undefined2 uStack_126;
  undefined1 *puStack_108;
  undefined ***pppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar6 = *(undefined8 **)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (puVar6 == (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126d20b0);
    if (param_3 == 0) {
      uStack_a0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_d0,param_3);
    }
    puVar3 = &uStack_141;
    FUN_106cc2eb0();
    uStack_1b0 = 0xf;
    uStack_1a0 = 0x100;
    _objc_retain(param_4);
    ppuStack_1b8 = &PTR_DAT_110862760;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    plStack_158 = (long *)0x0;
    uStack_160 = 0;
    plStack_150 = (long *)0x0;
    uStack_126 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_138 = 10;
    uStack_128 = 0x100;
    ppuStack_140 = &PTR_SUB_110862700;
    uStack_f0 = 0;
    uStack_f8 = 0;
    plStack_e0 = (long *)0x0;
    uStack_e8 = 0;
    plStack_d8 = (long *)0x0;
    puStack_1d0 = (undefined8 *)0x0;
    puStack_1c8 = (undefined8 *)0x0;
    uStack_1c0 = 0;
    uStack_1d4 = 0;
    puVar4 = &uStack_d0;
    puStack_188 = param_4;
    puStack_108 = puVar3;
    pppuStack_100 = &ppuStack_1b8;
    func_0x0001000e77a0(puVar4,&ppuStack_140,&puStack_1d0,&uStack_1d4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puStack_1d0 != (undefined8 *)0x0) {
      puStack_1c8 = puStack_1d0;
      __ZdlPv();
    }
    plVar1 = plStack_d8;
    ppuStack_140 = &PTR_SUB_110862700;
    plStack_d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_e0;
    plStack_e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d0 = &uStack_f8;
    func_0x000100105004(&puStack_1d0);
    plVar1 = plStack_150;
    ppuStack_1b8 = &PTR_DAT_110862760;
    plStack_150 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_158;
    plStack_158 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d0 = &uStack_170;
    func_0x000100105004(&puStack_1d0);
    _objc_release(puStack_188);
    func_0x0001000e76e0(&uStack_a8);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    puVar4 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106cc0818;
    puStack_80 = &UNK_11096f920;
    _objc_retain(param_4);
    puVar5 = puVar6;
    puStack_78 = param_4;
    func_0x0001006372a4(puVar6,&puStack_98);
    puVar4 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puStack_78;
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cc0818; end: 106cc0873;  */

undefined8 FUN_106cc0818(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c294d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106cc0874; end: 106cc0a83; -[SCJobSchedulerJobInfoDataSource fetchJobInfo:scope:] */

void FUN_106cc0874(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uStack_ac;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar4 == (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126d20b0);
    if (param_3 == 0) {
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_90,param_3);
    }
    lStack_a8 = 0;
    lStack_a0 = 0;
    uStack_98 = 0;
    uStack_ac = 0;
    puVar2 = &uStack_90;
    func_0x00010054c81c(puVar2,&lStack_a8,&uStack_ac);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (lStack_a8 != 0) {
      lStack_a0 = lStack_a8;
      __ZdlPv();
    }
    func_0x0001000e76e0(&uStack_68);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    if (puVar4 != (undefined8 *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar5);
      _objc_release(puVar1);
    }
  }
  _objc_retain(puVar4);
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106cc0a84; end: 106cc0cd7; -[SCJobSchedulerJobInfoDataSource upsertJobInfoWithContext:jobInfo:scope:] */

void FUN_106cc0a84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar4 != 0) {
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106cc0cd8;
    puStack_88 = &UNK_11096f950;
    puStack_68 = &uStack_70;
    _objc_retain(param_4);
    lVar2 = lVar4;
    uStack_80 = param_4;
    puStack_78 = &uStack_70;
    func_0x000100504554(lVar4,&puStack_a0);
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    _objc_release(lVar2);
    if ((*(byte *)(puStack_68 + 3) & 1) == 0) {
      func_0x00010befa120(lVar3);
    }
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar5);
      _objc_release(puVar1);
    }
    _objc_release(lVar3);
    _objc_release(uStack_80);
    __Block_object_dispose(&uStack_70,8);
  }
  uVar5 = param_4;
  FUN_106cc4038(param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106cc0cd8; end: 106cc0dbb;  */

void FUN_106cc0cd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar3 = param_2;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c294d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = param_2;
  if ((int)uVar2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106cc0dbc; end: 106cc0fc3; -[SCJobSchedulerJobInfoDataSource deleteJobInfoWithContext:jobInfo:scope:] */

void FUN_106cc0dbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar4 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106cc0fc4;
    puStack_60 = &UNK_11096f920;
    _objc_retain(param_4);
    lVar2 = lVar4;
    uStack_58 = param_4;
    func_0x0001006372a4(lVar4,&puStack_78);
    lVar3 = lVar2;
    func_0x00010c0d3c80();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(uVar5);
      _objc_release(puVar1);
    }
    _objc_release(lVar3);
    _objc_release(uStack_58);
  }
  puVar1 = PTR_PTR_1126d20b8;
  FUN_106cc3fc4(PTR_PTR_1126d20b8,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cc0fc4; end: 106cc1057;  */

uint FUN_106cc0fc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c294d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c294d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}


