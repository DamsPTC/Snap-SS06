/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104cc3acc; end: 104cc3c2b; -[SCNGOEmailEntryViewModel isEqual:] */

long FUN_104cc3acc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104cc3c04:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104cc3c10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
            (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))))))) &&
        (*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd))) &&
       (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if (lVar3 != *(long *)(param_3 + 0x30)) {
                func_0x00010c071ae0();
                goto LAB_104cc3c10;
              }
              goto LAB_104cc3c04;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104cc3c10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104cc3c2c; end: 104cc3c33; -[SCNGOEmailEntryViewModel email] */

undefined8 FUN_104cc3c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104cc3c34; end: 104cc3c3b; -[SCNGOEmailEntryViewModel errorMessage] */

undefined8 FUN_104cc3c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104cc3c3c; end: 104cc3c43; -[SCNGOEmailEntryViewModel headerTitle] */

undefined8 FUN_104cc3c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104cc3c44; end: 104cc3c4b; -[SCNGOEmailEntryViewModel headerSubtitle] */

undefined8 FUN_104cc3c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104cc3c4c; end: 104cc3c53; -[SCNGOEmailEntryViewModel canContinue] */

undefined1 FUN_104cc3c4c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104cc3c54; end: 104cc3c5b; -[SCNGOEmailEntryViewModel loading] */

undefined1 FUN_104cc3c54(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104cc3c5c; end: 104cc3c63; -[SCNGOEmailEntryViewModel shouldMoveCursorToStart] */

undefined1 FUN_104cc3c5c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104cc3c64; end: 104cc3c6b; -[SCNGOEmailEntryViewModel is1TLCheckboxSelected] */

undefined1 FUN_104cc3c64(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104cc3c6c; end: 104cc3c73; -[SCNGOEmailEntryViewModel shouldShowBackButton] */

undefined1 FUN_104cc3c6c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 104cc3c74; end: 104cc3c7b; -[SCNGOEmailEntryViewModel shouldDisplay1TL] */

undefined1 FUN_104cc3c74(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 104cc3c7c; end: 104cc3c83; -[SCNGOEmailEntryViewModel shouldShowSwitchButton] */

undefined1 FUN_104cc3c7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 104cc3c84; end: 104cc3c8b; -[SCNGOEmailEntryViewModel continueButtonTitle] */

undefined8 FUN_104cc3c84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104cc3c8c; end: 104cc3cdf; -[SCNGOEmailEntryViewModel .cxx_destruct] */

void FUN_104cc3c8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104cc3ce0; end: 104cc4037; -[SCChannelVerificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc3ce0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af0a8;
  _objc_alloc();
  lVar3 = param_1;
  FUN_104cc4078(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000104cc409c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08d340();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uVar13 = 0;
    lVar12 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + _DAT_112710604);
    _objc_retain(uVar13);
    lVar12 = param_1 + _DAT_112710608;
    _objc_loadWeakRetained(lVar12);
  }
  lVar7 = param_1 + _DAT_1127105d8;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0565e0();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(uVar13);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar10 = PTR_PTR_1126af0b0;
  _objc_alloc();
  lVar3 = param_1;
  FUN_104cc4078(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c298280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000104cc409c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08d340();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x000104cc409c(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar12;
  func_0x00010c08d700();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_104cc4078(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar8;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0608a0();
  lVar14 = (long)_DAT_1127105dc;
  uVar13 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar10;
  _objc_release(uVar13);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar14));
  _objc_release(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104cc4038; end: 104cc4077;  */

void FUN_104cc4038(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104cc4078; end: 104cc40bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc4078(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127105e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc40c0; end: 104cc4343; -[SCChannelVerificationEntryPoint _logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc40c0(long param_1,undefined8 param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar1 = PTR_PTR_1126af0b8;
  _objc_alloc();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127105e4;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar12;
  func_0x00010c0b43e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_1127105ec;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar13;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112710600;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar14;
  func_0x00010bf10be0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127105f0;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar15;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_104cc4344();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_104cc4344();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0b42c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127105f8;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar16;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127105fc;
    _objc_loadWeakRetained();
  }
  lVar11 = param_1;
  func_0x00010bf10d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c140(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar7,lVar9,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cc4344; end: 104cc4367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc4344(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127105f4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc4368; end: 104cc442b; -[SCChannelVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc4368(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112710608);
  _objc_storeStrong(param_1 + _DAT_112710604,0);
  _objc_destroyWeak(param_1 + _DAT_1127105d8);
  _objc_destroyWeak(param_1 + _DAT_112710600);
  _objc_destroyWeak(param_1 + _DAT_1127105fc);
  _objc_destroyWeak(param_1 + _DAT_1127105f8);
  _objc_destroyWeak(param_1 + _DAT_1127105f4);
  _objc_destroyWeak(param_1 + _DAT_1127105f0);
  _objc_destroyWeak(param_1 + _DAT_1127105ec);
  _objc_destroyWeak(param_1 + _DAT_1127105e8);
  _objc_destroyWeak(param_1 + _DAT_1127105e4);
  _objc_destroyWeak(param_1 + _DAT_1127105e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127105dc,0);
  return;
}



/* Entry: 104cc442c; end: 104cc45e3; -[SCChannelVerificationLoggerImpl initWithStateTransitionMomentLogger:userNotTrackedLogger:authenticationFlowLogger:grapheneRegistry:lastLoginInfoRepository:loginSessionService:deviceInfoProvider:authenticationSessionInfoProvider:] */

undefined1 *
FUN_104cc442c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126e3b18;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8b00();
    *(char *)((long)puVar1 + 0x40) = (char)uVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
  }
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



/* Entry: 104cc45e4; end: 104cc45ef; -[SCChannelVerificationLoggerImpl logChannelVerificationLandingPageView:] */

void FUN_104cc45e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLoginFlowPageView_loginSourc_112572fb8,0x9d,param_3);
  return;
}



/* Entry: 104cc45f0; end: 104cc45fb; -[SCChannelVerificationLoggerImpl logChannelVerificationVerificationPageView:] */

void FUN_104cc45f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be55870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logLoginFlowPageView_loginSourc_112572fb8,0x9e,param_3);
  return;
}



/* Entry: 104cc45fc; end: 104cc46d3; -[SCChannelVerificationLoggerImpl logChannelVerificationRequestCodeSubmit:usernameOrEmail:loginSource:] */

void FUN_104cc45fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af0c0;
  _objc_opt_new(PTR_PTR_1126af0c0);
  func_0x00010c1c0a20();
  FUN_104cc46d4(param_5,param_4);
  _objc_release(param_4);
  func_0x00010c1c0920(puVar1);
  func_0x00010c17ab80(puVar1);
  func_0x00010be57be0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc46d4; end: 104cc473f;  */

ulong FUN_104cc46d4(ulong param_1,ulong param_2)

{
  _objc_retain(param_2);
  if (param_1 == 1) {
    param_1 = 3;
  }
  else if (param_1 != 2) {
    if (param_2 == 0) {
      param_1 = 0xffffffffffffffff;
    }
    else {
      param_1 = param_2;
      func_0x00010bf4bb00(param_2);
      param_1 = param_1 & 0xffffffff;
    }
  }
  _objc_release(param_2);
  return param_1;
}



/* Entry: 104cc4740; end: 104cc484b; -[SCChannelVerificationLoggerImpl logChannelVerificationRequestCodeSucceed:usernameOrEmail:loginSource:grpcStatusCode:protoStatusCode:success:] */

void FUN_104cc4740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af0c8;
  _objc_opt_new(PTR_PTR_1126af0c8);
  func_0x00010c1c0a20();
  FUN_104cc46d4(param_5,param_4);
  _objc_release(param_4);
  func_0x00010c1c0920(puVar1);
  func_0x00010c17ab80(puVar1);
  func_0x00010c1a4d40(puVar1);
  func_0x00010c1e5240(puVar1);
  func_0x00010c20f8a0(puVar1);
  func_0x00010be57be0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc484c; end: 104cc4923; -[SCChannelVerificationLoggerImpl logChannelVerificationVerifyCodeSubmit:usernameOrEmail:loginSource:] */

void FUN_104cc484c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0920();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af0d0;
  _objc_opt_new(PTR_PTR_1126af0d0);
  func_0x00010c1c0a20();
  FUN_104cc46d4(param_5,param_4);
  _objc_release(param_4);
  func_0x00010c1c0920(puVar1);
  func_0x00010c17ab80(puVar1);
  func_0x00010be57be0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc4924; end: 104cc4a2f; -[SCChannelVerificationLoggerImpl logChannelVerificationVerifyCodeSucceed:usernameOrEmail:loginSource:grpcStatusCode:protoStatusCode:success:] */

void FUN_104cc4924(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126af0d8;
  _objc_opt_new(PTR_PTR_1126af0d8);
  func_0x00010c1c0a20();
  FUN_104cc46d4(param_5,param_4);
  _objc_release(param_4);
  func_0x00010c1c0920(puVar1);
  func_0x00010c17ab80(puVar1);
  func_0x00010c1a4d40(puVar1);
  func_0x00010c1e5240(puVar1);
  func_0x00010c20f8a0(puVar1);
  func_0x00010be57be0(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc4a30; end: 104cc4af3; -[SCChannelVerificationLoggerImpl _logLoginFlowPageView:loginSource:] */

void FUN_104cc4a30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af0e0;
  _objc_opt_new(PTR_PTR_1126af0e0);
  lVar2 = param_1;
  func_0x00010be204c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0960(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1d7e80(puVar1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010be215a0(param_1,param_2,param_4);
  func_0x00010c1d81a0(puVar1,param_2,lVar2);
  func_0x00010be50980(param_1,param_2,puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc4af4; end: 104cc4c43; -[SCChannelVerificationLoggerImpl _logRequestBlizzardEvent:clientNetworkRequestId:] */

void FUN_104cc4af4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc3a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca20(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca80(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1a63a0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc74a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08c0(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar3 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setClientNetworkRequestId__11263cda8);
  if ((uVar3 & 1) != 0) {
    func_0x00010c0f8f20(param_3);
  }
  func_0x00010be50980(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc4c44; end: 104cc4cff; -[SCChannelVerificationLoggerImpl _logBlizzardEvent:] */

void FUN_104cc4c44(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_setLongClientId__11264dd30);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc1fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f20(param_3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc4d00; end: 104cc4e03; -[SCChannelVerificationLoggerImpl _getLoginMetadata] */

void FUN_104cc4d00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af0e8;
  _objc_opt_new(PTR_PTR_1126af0e8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc74a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1a63a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x40));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17ca80(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104cc4e04; end: 104cc4e23; -[SCChannelVerificationLoggerImpl _getPageTypeFromLoginSource:] */

undefined8 FUN_104cc4e04(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 5) {
    return *(undefined8 *)(&UNK_10dd8b118 + param_3 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 104cc4e24; end: 104cc4e8f; -[SCChannelVerificationLoggerImpl .cxx_destruct] */

void FUN_104cc4e24(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104cc4e90; end: 104cc4fc7; -[SCChannelVerificationLandingBusinessLogic initWithVerification:service:logger:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cc4e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e3b20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11271062c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112710630;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112710634;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112710638),param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271063c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271063c) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cc4fc8; end: 104cc504f; -[SCChannelVerificationLandingBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc4fc8(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e3b20;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_begin_1125a3840);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710634);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(param_1 + _DAT_11271062c));
  func_0x00010c0a2c40(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 104cc5050; end: 104cc50fb; -[SCChannelVerificationLandingBusinessLogic handleAction:] */

void FUN_104cc5050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cc50fc;
  puStack_20 = &UNK_1108450c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cc5194;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104cc519c;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104cc51d4;
  puStack_98 = &UNK_110842e18;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bda00(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 104cc50fc; end: 104cc5193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc50fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271063c);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271063c) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710640);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710640) = 0;
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar1 + 0x10))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc5194; end: 104cc519b;  */

void FUN_104cc5194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be91cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__requestVerificatoinCode_1125820c8);
  return;
}



/* Entry: 104cc519c; end: 104cc520b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc519c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112710638;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf357a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc520c; end: 104cc5297; -[SCChannelVerificationLandingBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc520c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126af0f0;
  _objc_alloc(PTR_PTR_1126af0f0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271063c);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112710640);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112710644);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar3);
  func_0x00010c00f320(puVar1,param_2,uVar3,uVar4,uVar5,
                      ((uint)puVar2 | (uint)*(byte *)(param_1 + _DAT_112710648)) ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104cc5298; end: 104cc551f; -[SCChannelVerificationLandingBusinessLogic _requestVerificatoinCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5298(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126af0f8;
  _objc_alloc();
  lVar5 = (long)_DAT_11271062c;
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010bfb2ee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c294660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0139a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + _DAT_112710648) = 1;
  lVar4 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710634);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c294660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c0a2c60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112710630);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104cc5520;
  puStack_88 = &UNK_110848218;
  _objc_copyWeak(auStack_70,auStack_68);
  puStack_80 = puVar1;
  _objc_retain(lVar4);
  lStack_78 = lVar4;
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(lVar4);
  func_0x00010c134e40(uVar2);
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_a8);
  _objc_release(lStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 104cc5520; end: 104cc5553;  */

void FUN_104cc5520(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc5554; end: 104cc55bf;  */

void FUN_104cc5554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91c20();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc55c0; end: 104cc56d7; -[SCChannelVerificationLandingBusinessLogic _requestVerificationCodeSuccess:networkRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc55c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + _DAT_112710648) = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710634);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11271062c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c294660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0b43a0(uVar2);
  func_0x00010c0a2c80(uVar3,param_2,param_4,uVar1,uVar2,0,0,1);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  lVar4 = param_1 + _DAT_112710638;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf357c0();
  _objc_release(param_3);
  _objc_release(lVar4);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc56d8; end: 104cc5837; -[SCChannelVerificationLandingBusinessLogic _requestVerificationCodeFailure:networkRequestId:grpcStatusCode:protoStatusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc56d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  *(undefined1 *)(param_1 + _DAT_112710648) = 0;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112710634);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11271062c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c294660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0b43a0(uVar2);
  func_0x00010c0a2c80(uVar3,param_2,param_4,uVar1,uVar2,param_5,param_6,0);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104cc5838;
  puStack_60 = &UNK_1108450c8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x104cc5874;
  puStack_88 = &UNK_1108450c8;
  lStack_80 = param_1;
  lStack_58 = param_1;
  func_0x00010c0bfae0(param_3,param_2,&puStack_78,&puStack_a0);
  _objc_release(param_3);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_release(param_1);
  return;
}



/* Entry: 104cc5838; end: 104cc58af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5838(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710640);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112710640) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cc58b0; end: 104cc593b; -[SCChannelVerificationLandingBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc58b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710644,0);
  _objc_storeStrong(param_1 + _DAT_112710640,0);
  _objc_storeStrong(param_1 + _DAT_11271063c,0);
  _objc_destroyWeak(param_1 + _DAT_112710638);
  _objc_storeStrong(param_1 + _DAT_112710634,0);
  _objc_storeStrong(param_1 + _DAT_112710630,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271062c,0);
  return;
}



/* Entry: 104cc593c; end: 104cc5a13; -[SCChannelVerificationLandingViewController initWithScreen:currentPageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104cc593c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  uVar2 = param_4;
  _objc_retain(param_4);
  func_0x000104cc8090();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126e3b28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithContinueButtonText__1125debe8,uVar2);
  _objc_release(uVar2);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11271064c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112710650;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cc5a14; end: 104cc5a1b; -[SCChannelVerificationLandingViewController pageViewName] */

undefined8 FUN_104cc5a14(void)

{
  return 0x26;
}



/* Entry: 104cc5a1c; end: 104cc5a77; -[SCChannelVerificationLandingViewController viewDidLoad] */

void FUN_104cc5a1c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  func_0x00010c177c20(param_1);
  return;
}



/* Entry: 104cc5a78; end: 104cc5ae7; -[SCChannelVerificationLandingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5a78(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e3b28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf179a0(*(undefined8 *)(param_1 + _DAT_112710654));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710650);
  func_0x00010c0f2220(param_1);
  func_0x00010c24fc40(uVar1);
  return;
}



/* Entry: 104cc5ae8; end: 104cc5b5f; -[SCChannelVerificationLandingViewController textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104cc5ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710658);
  func_0x00010bf2c700();
  if ((int)uVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271064c);
    puVar2 = PTR_PTR_1126af100;
    func_0x00010c25ed20(PTR_PTR_1126af100);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8dd80(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  return uVar1;
}



/* Entry: 104cc5b60; end: 104cc5bdf; -[SCChannelVerificationLandingViewController textFieldDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af100;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271064c);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112710654);
  func_0x00010c26bea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8d7a0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104cc5be0; end: 104cc5c2b; -[SCChannelVerificationLandingViewController continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5be0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271064c);
  puVar1 = PTR_PTR_1126af100;
  func_0x00010c25ed20(PTR_PTR_1126af100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc5c2c; end: 104cc5c77; -[SCChannelVerificationLandingViewController backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5c2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271064c);
  puVar1 = PTR_PTR_1126af100;
  func_0x00010bf9b400(PTR_PTR_1126af100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc5c78; end: 104cc5d27; -[SCChannelVerificationLandingViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5c78(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271064c);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104cc5d28; end: 104cc5d6f;  */

void FUN_104cc5d28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc5d70; end: 104cc5eeb; -[SCChannelVerificationLandingViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5d70(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112710658;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = param_3;
    func_0x00010bf2c700(param_3);
    func_0x00010c177be0(param_1,param_2,lVar4);
    lVar4 = param_3;
    func_0x00010c076be0(param_3);
    func_0x00010c1b2440(param_1,param_2,lVar4);
    lVar4 = param_3;
    func_0x00010bf8d6c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_112710654;
    func_0x00010c2133c0(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf98d60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,0);
      uVar2 = 1;
    }
    else {
      lVar4 = param_3;
      func_0x00010bf98d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c161240(*(undefined8 *)(param_1 + lVar5),param_2,lVar4);
      _objc_release(lVar4);
      uVar2 = 4;
    }
    func_0x00010c209fc0(*(undefined8 *)(param_1 + lVar5),param_2,uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar4 = param_3;
    func_0x00010bf98840(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    if (((ulong)puVar3 & 1) == 0) {
      lVar4 = param_3;
      func_0x00010bf98840(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb8e80(param_1,param_2,lVar4);
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc5eec; end: 104cc63b3; -[SCChannelVerificationLandingViewController _initSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc5eec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  double in_d3;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x29);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar16 = (long)_DAT_11271065c;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar1;
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c21ad00(uVar15);
  FUN_104cc8078();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar16));
  _objc_release(uVar15);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar1);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar16));
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126af0a0;
  _objc_alloc();
  func_0x00010c051880();
  lVar17 = (long)_DAT_112710654;
  uVar15 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar15);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar17));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _objc_release(lVar2);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_b8 = uVar15;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar2;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_c8 = uVar15;
  uStack_a8 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_d8 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_d0 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_e0 = lVar2;
  func_0x00010bf493c0(in_d3 / 6.0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar17);
  uStack_e8 = uVar3;
  uStack_a0 = uVar3;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  uStack_100 = uVar4;
  func_0x00010c152980();
  _objc_retainAutoreleasedReturnValue();
  lStack_f8 = lVar2;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_110 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar17);
  uStack_98 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c152980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf4c920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar17);
  uStack_90 = uVar15;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf493c0(0x4052c00000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  func_0x00010beef8c0(puStack_f0);
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lStack_110);
  _objc_release(lStack_108);
  _objc_release(lStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_e8);
  _objc_release(lStack_e0);
  _objc_release(lStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_c8);
  _objc_release(lStack_c0);
  _objc_release(lStack_b0);
  uVar15 = uStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_104cc63b4;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = uVar5;
  uStack_148 = uVar4;
  puStack_140 = puVar10;
  uStack_138 = uVar3;
  uStack_130 = uVar8;
  uStack_128 = uVar9;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar11 = auStack_168;
  _objc_initWeak(puVar11,uVar15);
  puVar10 = PTR_PTR_1126aed70;
  func_0x000104cc80a8();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = auStack_168;
  _objc_copyWeak(auStack_170,puVar14);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar12 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_160 = puVar10;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar12);
  _objc_release(puVar13);
  func_0x00010c211b40(puVar12);
  func_0x00010c10eda0(uVar15);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  __Unwind_Resume(puVar1);
  func_0x00010bf84b00(puVar14);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bdc9a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc63b4; end: 104cc657b; -[SCChannelVerificationLandingViewController _showErrorAlertWithMessage:] */

void FUN_104cc63b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_58;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000104cc80a8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_60,puVar5);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar4);
  func_0x00010c211b40(puVar3);
  func_0x00010c10eda0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume(param_3);
  func_0x00010bf84b00(puVar5);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bdc9a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104cc657c; end: 104cc65bb;  */

void FUN_104cc657c(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc9a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc65bc; end: 104cc6607; -[SCChannelVerificationLandingViewController _alertAcknowledged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc65bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271064c);
  puVar1 = PTR_PTR_1126af100;
  func_0x00010beedb20(PTR_PTR_1126af100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc6608; end: 104cc6677; -[SCChannelVerificationLandingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104cc6608(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112710650,0);
  _objc_storeStrong(param_1 + _DAT_112710658,0);
  _objc_storeStrong(param_1 + _DAT_112710654,0);
  _objc_storeStrong(param_1 + _DAT_11271065c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271064c,0);
  return;
}



/* Entry: 104cc6678; end: 104cc67ef; -[SCChannelVerificationFeatureUIRouteActions initWithUIContainer:channelVerificationService:logger:codeVerificationScopeExposer:ngoCodeVerificationScopeServices:currentPageTracker:] */

undefined1 *
FUN_104cc6678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e3b30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126af108;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010bf0c980(*(undefined8 *)((long)puVar1 + 8));
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
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



/* Entry: 104cc67f0; end: 104cc68db; -[SCChannelVerificationFeatureUIRouteActions showChannelVerificationLandingScreen:verification:] */

void FUN_104cc67f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af110;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0608c0();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af118;
  _objc_alloc(PTR_PTR_1126af118);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c150e00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0423c0(puVar2,param_2,uVar3,*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc68dc; end: 104cc68e7; -[SCChannelVerificationFeatureUIRouteActions removeChannelVerificationLandingScreen] */

void FUN_104cc68dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 104cc68e8; end: 104cc69af; -[SCChannelVerificationFeatureUIRouteActions showChannelVerificationChannel:service:delegate:] */

void FUN_104cc68e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126aead8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010c038f40();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf24120(uVar3,param_2,puVar2,param_3,1,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010bf9d620(uVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cc69b0; end: 104cc69cf; -[SCChannelVerificationFeatureUIRouteActions removeChannelVerificationCodeVerification] */

void FUN_104cc69b0(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104cc69d0; end: 104cc6a47; -[SCChannelVerificationFeatureUIRouteActions .cxx_destruct] */

void FUN_104cc69d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 104cc6a48; end: 104cc6b93; -[SCChannelVerificationWorkflow initWithVerification:router:channelVerificationService:loginService:logger:delegate:] */

undefined1 *
FUN_104cc6a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126e3b38;
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104cc6b94; end: 104cc6beb; -[SCChannelVerificationWorkflow beginWorkflow] */

void FUN_104cc6b94(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cc6bec;
  puStack_20 = &UNK_1108482d8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 104cc6bec; end: 104cc6bfb;  */

void FUN_104cc6bec(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_showChannelVerificationLandingSc_11266b440,*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return;
}



/* Entry: 104cc6bfc; end: 104cc6c8b; -[SCChannelVerificationWorkflow channelVerificationLandingFinished:] */

void FUN_104cc6bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cc6c8c;
  puStack_48 = &UNK_110848308;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cc6c8c; end: 104cc6d73;  */

void FUN_104cc6c8c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar4 = *(undefined8 *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + 8) = uVar2;
  _objc_retain(param_2);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126af120;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf8d6c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8db60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c236840(param_2);
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  func_0x00010c0a2ca0(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 104cc6d74; end: 104cc6dcb; -[SCChannelVerificationWorkflow channelVerificationLandingExited] */

void FUN_104cc6d74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cc6dcc;
  puStack_20 = &UNK_1108482d8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 104cc6dcc; end: 104cc6e07;  */

void FUN_104cc6dcc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010c12b700(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf35740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc6e08; end: 104cc6e97; -[SCChannelVerificationWorkflow codeVerificationFinished:] */

void FUN_104cc6e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104cc6e98;
  puStack_48 = &UNK_110848308;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1429e0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104cc6e98; end: 104cc6ef3;  */

void FUN_104cc6e98(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c12b6e0(param_2);
  func_0x00010c12b700(param_2);
  _objc_release(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf35760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc6ef4; end: 104cc6f0b; -[SCChannelVerificationWorkflow codeVerificationExited] */

void FUN_104cc6ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1429f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_runRouteWithAction__11262e498,
             &PTR___NSConcreteGlobalBlock_110848358);
  return;
}



/* Entry: 104cc6f0c; end: 104cc6f63; -[SCChannelVerificationWorkflow codeVerificationExitedWithUnretryableError] */

void FUN_104cc6f0c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104cc6f64;
  puStack_20 = &UNK_1108482d8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 104cc6f64; end: 104cc6fbb;  */

void FUN_104cc6f64(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  func_0x00010c12b6e0(param_2);
  func_0x00010c12b700(param_2);
  _objc_release(param_2);
  lVar1 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf35740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104cc6fbc; end: 104cc71d3; -[SCChannelVerificationWorkflow requestCodeResendWithSuccessBlock:failureBlock:] */

void FUN_104cc6fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c0a2c60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104cc71d4;
  puStack_88 = &UNK_110848378;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  uStack_80 = uVar1;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010c134e40(uVar2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cc71d4; end: 104cc7207;  */

void FUN_104cc71d4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc7208; end: 104cc7273;  */

void FUN_104cc7208(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91c40();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc7274; end: 104cc74a3; -[SCChannelVerificationWorkflow verifyCodeWithCode:isAutofill:successBlock:failureBlock:] */

void FUN_104cc7274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c0a2cc0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104cc74a4;
  puStack_88 = &UNK_1108483d8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  uStack_80 = uVar1;
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(uVar1);
  _objc_retain(param_6);
  func_0x00010bf43860(uVar2);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104cc74a4; end: 104cc754b;  */

void FUN_104cc74a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee8820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104cc754c; end: 104cc760b; -[SCChannelVerificationWorkflow _requestVerificationCodeSuccess:successBlock:] */

void FUN_104cc754c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b43a0(uVar2);
  func_0x00010c0a2c80(uVar3,param_2,param_3,uVar1,uVar2,0,0,1);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  (**(code **)(param_4 + 0x10))(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104cc760c; end: 104cc776b; -[SCChannelVerificationWorkflow _requestVerificationCodeFailure:networkRequestId:grpcStatusCode:protoStatusCode:failureBlock:] */

void FUN_104cc760c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_7);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0b43a0(uVar3);
  func_0x00010c0a2c80(uVar4,param_2,param_4,uVar2,uVar3,param_5,param_6,0);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104cc776c;
  puStack_70 = &UNK_110848438;
  _objc_retain(param_7);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x104cc77b8;
  puStack_98 = &UNK_110848438;
  uStack_90 = param_7;
  uStack_68 = param_7;
  _objc_retain(param_7);
  func_0x00010c0bfae0(param_3,param_2,&puStack_88,&puStack_b0);
  _objc_release(param_3);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 104cc776c; end: 104cc7803;  */

void FUN_104cc776c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126af128;
  func_0x00010c13fb20(PTR_PTR_1126af128,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104cc7804; end: 104cc78ff; -[SCChannelVerificationWorkflow _verifyVerificationCodeSuccess:networkRequestId:successBlock:] */

void FUN_104cc7804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(param_1 + 8));
  func_0x00010c0a2ce0(uVar3);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126af130;
  _objc_alloc(PTR_PTR_1126af130);
  func_0x00010c03fb60();
  _objc_release(param_3);
  (**(code **)(param_5 + 0x10))(param_5,puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104cc7900; end: 104cc7c13; -[SCChannelVerificationWorkflow _verifyVerificationCodeFailure:networkRequestId:failureBlock:] */

void FUN_104cc7900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c294660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b43a0(*(undefined8 *)(param_1 + 8));
  func_0x00010bfcfaa0(param_3);
  func_0x00010c119500(param_3);
  func_0x00010c0a2ce0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_104cc7c14;
  uStack_60 = 0x104cc7c24;
  uStack_58 = 0;
  uVar1 = param_3;
  func_0x00010c0b3f80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bd200();
  _objc_release(uVar1);
  (**(code **)(param_5 + 0x10))(param_5,puStack_78[5]);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104cc7c14; end: 104cc7c2b;  */

void FUN_104cc7c14(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104cc7c2c; end: 104cc801b;  */

void FUN_104cc7c2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126af138;
  func_0x00010c13fb20(PTR_PTR_1126af138,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104cc801c; end: 104cc8077; -[SCChannelVerificationWorkflow .cxx_destruct] */

void FUN_104cc801c(long param_1)

{
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



/* Entry: 104cc8078; end: 104cc80bf;  */

void FUN_104cc8078(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dae698;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dae698,
                      &PTR____CFConstantStringClassReference_110dae6b8,0);
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



/* Entry: 104cc80c0; end: 104cc810b; +[SCChannelVerificationLandingAction acknowledgeAlert] */

void FUN_104cc80c0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc810c; end: 104cc816f; +[SCChannelVerificationLandingAction emailDidChangeWithEmail:] */

void FUN_104cc810c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af100;
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



/* Entry: 104cc8170; end: 104cc81bb; +[SCChannelVerificationLandingAction exit] */

void FUN_104cc8170(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af100;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104cc81bc; end: 104cc8207; +[SCChannelVerificationLandingAction submit] */

void FUN_104cc81bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af100;
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


