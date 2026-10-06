/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad96b14; end: 10ad96cdb;  */

void FUN_10ad96b14(long param_1,code **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  code **unaff_x22;
  long *plStack_b0;
  long *plStack_a8;
  undefined1 uStack_99;
  long *aplStack_98 [2];
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 *puStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_99 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    plStack_b0 = (long *)0x0;
    plStack_a8 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_b0);
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    if (plStack_a8 != (long *)0x0) {
      plVar4 = plStack_a8;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_80 = plVar4;
      if (plVar4 != (long *)0x0) {
        plStack_88 = plStack_b0;
        if (plStack_b0 != (long *)0x0) {
          lStack_68 = param_1 + 0x28;
          lStack_60 = param_1 + 0x30;
          aplStack_98[0] = plStack_b0;
          plVar1 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          unaff_x22 = &pcStack_78;
          pcStack_78 = FUN_10ad97078;
          ppuStack_70 = &PTR_FUN_110c72fc8;
          puStack_58 = &uStack_99;
          param_2 = &pcStack_78;
          FUN_10ad470d8(*(long *)(*plStack_b0 + 0x180) + 0xa8);
          (*(code *)*ppuStack_70)(&ppuStack_70);
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
  }
  plVar4 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = uStack_99;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x22 + 1);
  FUN_10ad8b754(aplStack_98);
  FUN_10ad8b754(&plStack_88);
  if (plStack_a8 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume(plVar4);
  _objc_retain(param_2[4]);
  _objc_retain(param_2[5]);
  __Block_object_assign(plVar4 + 6,param_2[6],7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(plVar4 + 7,param_2[7],8);
  return;
}



/* Entry: 10ad96cdc; end: 10ad96d27;  */

void FUN_10ad96cdc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 10ad96d28; end: 10ad96d43;  */

void FUN_10ad96d28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad96d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),param_2);
  return;
}



/* Entry: 10ad96d44; end: 10ad96e7b; -[LSAExternalImageComponent unsetExternalMediaWithPath:completion:] */

void FUN_10ad96d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010bf9e180(PTR_PTR_1126db570,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ad96e7c;
  puStack_58 = &UNK_110883780;
  uStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010c0f9160(uVar1,param_2,puVar2,&puStack_70,param_4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad96e7c; end: 10ad97023;  */

void FUN_10ad96e7c(long param_1,code **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  code **unaff_x21;
  long *plStack_a8;
  long *plStack_a0;
  long *aplStack_98 [2];
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_a8);
    plStack_88 = (long *)0x0;
    plStack_80 = (long *)0x0;
    if (plStack_a0 != (long *)0x0) {
      plVar4 = plStack_a0;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_80 = plVar4;
      if (plVar4 != (long *)0x0) {
        plStack_88 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          lStack_68 = param_1 + 0x28;
          aplStack_98[0] = plStack_a8;
          plVar1 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          unaff_x21 = &pcStack_78;
          pcStack_78 = FUN_10ad97290;
          ppuStack_70 = &PTR_FUN_110c72fe8;
          param_2 = &pcStack_78;
          FUN_10ad470d8(*(long *)(*plStack_a8 + 0x180) + 0xa8);
          (*(code *)*ppuStack_70)(&ppuStack_70);
          do {
            lVar5 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
      }
    }
  }
  plVar4 = plStack_80;
  if (plStack_80 != (long *)0x0) {
    plVar1 = plStack_80 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  FUN_10ad8b754(aplStack_98);
  FUN_10ad8b754(&plStack_88);
  if (plStack_a0 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010ad97040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2[2] + 0x10))
            (*(long *)param_2[2],*(long *)(*(long *)(*plVar4 + 0x108) + 3000) + 0x18);
  return;
}



/* Entry: 10ad97024; end: 10ad97077;  */

void FUN_10ad97024(long *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad97040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))
            (**(long **)(param_2 + 0x10),*(long *)(*(long *)(*param_1 + 0x108) + 3000) + 0x18);
  return;
}



/* Entry: 10ad97078; end: 10ad97237;  */

void FUN_10ad97078(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long *param_5
                  ,long param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (*param_5 != 0) {
    uVar2 = **(ulong **)(param_6 + 0x10);
    func_0x00010bf529e0();
    if (uVar2 == 0) {
      lVar6 = 0;
      lVar7 = 0;
    }
    else {
      if (uVar2 >> 0x3c != 0) {
        FUN_10ad97238();
        if (unaff_x19 != 0) {
          __ZdlPv();
        }
        __Unwind_Resume(uVar2);
        func_0x000104c4f6cc(&DAT_10f62a4d8);
        return;
      }
      lVar6 = uVar2 << 4;
      __Znwm();
      _bzero();
      lVar7 = lVar6 + uVar2 * 0x10;
    }
    uVar2 = 0;
    auVar9 = NEON_fmov(0x3fe0000000000000,8);
    dVar12 = 0.09999999999999998;
    while( true ) {
      dVar11 = dVar12;
      uVar3 = **(ulong **)(param_6 + 0x10);
      func_0x00010bf529e0();
      if (uVar3 <= uVar2) break;
      uVar4 = **(undefined8 **)(param_6 + 0x10);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      dVar8 = (double)func_0x00010bdc1080();
      _objc_release(uVar4);
      dVar8 = dVar8 + param_3 * 0.09999999999999998 * auVar9._0_8_;
      dVar10 = dVar11 + param_4 * 0.009999999999999898 * auVar9._8_8_;
      dVar12 = param_3 * 0.9 + dVar8;
      puVar1 = (undefined8 *)(lVar6 + uVar2 * 0x10);
      puVar1[1] = CONCAT44((float)(param_4 * 0.9900000000000001 + dVar10),(float)dVar12);
      *puVar1 = CONCAT44((float)dVar10,(float)dVar8);
      uVar2 = uVar2 + 1;
      param_4 = dVar11;
    }
    lVar5 = **(long **)(param_6 + 0x18);
    (**(code **)(lVar5 + 0x10))
              (lVar5,*(long *)(*(long *)(*param_5 + 0x108) + 3000) + 0x18,lVar6,lVar7 - lVar6 >> 4);
    if ((int)lVar5 != 0) {
      **(undefined1 **)(param_6 + 0x20) = 1;
    }
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar6);
      return;
    }
  }
  return;
}



/* Entry: 10ad97238; end: 10ad9724b;  */

void FUN_10ad97238(void)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  return;
}



/* Entry: 10ad9724c; end: 10ad9728f;  */

void FUN_10ad9724c(void)

{
  return;
}



/* Entry: 10ad97290; end: 10ad97383;  */

void FUN_10ad97290(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if (*param_1 == 0) {
    return;
  }
  uVar5 = **(ulong **)(param_2 + 0x10);
  if (uVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_opt_isKindOfClass(uVar5,puVar1);
    if ((uVar5 & 1) == 0) {
      lVar2 = **(long **)(param_2 + 0x10);
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        lVar2 = *(long *)(*(long *)(*param_1 + 0x108) + 3000);
        uVar3 = **(undefined8 **)(param_2 + 0x10);
        _objc_retainAutorelease(uVar3);
        func_0x00010bdc3520();
        func_0x000107c31940(auStack_48,uVar3);
        for (plVar4 = *(long **)(lVar2 + 0x88); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          (**(code **)(*(long *)plVar4[2] + 0x28))((long *)plVar4[2],auStack_48);
        }
        if (-1 < cStack_31) {
          return;
        }
        __ZdlPv(auStack_48[0]);
        return;
      }
    }
  }
  puVar1 = &UNK_10f6ac2de;
  FUN_10a0ee06c(&UNK_10f6ac2de);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  __Unwind_Resume(puVar1);
  return;
}



/* Entry: 10ad97384; end: 10ad973b7;  */

void FUN_10ad97384(void)

{
  return;
}



/* Entry: 10ad973b8; end: 10ad973bf; -[LSAExternalStreamComponent setReverseCameraStreamProvider:lensId:] */

void FUN_10ad973b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setExternalStreamProvider_lensI_1125868d8,param_3,param_4,0);
  return;
}



/* Entry: 10ad973c0; end: 10ad973c7; -[LSAExternalStreamComponent clearReverseCameraStreamProviderWithLensId:] */

void FUN_10ad973c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde04d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__clearExternalStreamProviderWith_112555ad0,param_3,0);
  return;
}



/* Entry: 10ad973c8; end: 10ad973cb; -[LSAExternalStreamComponent setExternalStreamProvider:lensId:resourceId:] */

void FUN_10ad973c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setExternalStreamProvider_lensI_1125868d8);
  return;
}



/* Entry: 10ad973cc; end: 10ad973cf; -[LSAExternalStreamComponent clearExternalStreamProviderWithLensId:resourceId:] */

void FUN_10ad973cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde04d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearExternalStreamProviderWith_112555ad0);
  return;
}



/* Entry: 10ad973d0; end: 10ad9755b; -[LSAExternalStreamComponent _setExternalStreamProvider:lensId:resourceId:] */

void FUN_10ad973d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010bf9e640(PTR_PTR_1126db570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10ad9755c;
  puStack_68 = &UNK_110c73008;
  uStack_60 = param_1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_48 = param_5;
  func_0x00010c0f9160(uVar1,param_2,puVar2,&puStack_80,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad9755c; end: 10ad97973;  */

/* WARNING: Removing unreachable block (ram,0x00010ad97858) */

void FUN_10ad9755c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long **pplStack_f8;
  long *plStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  long lStack_e0;
  undefined7 uStack_d8;
  char cStack_d1;
  long *plStack_c0;
  long *plStack_b8;
  undefined2 uStack_b0;
  undefined1 uStack_ae;
  char cStack_a9;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_70 [24];
  long lStack_58;
  long *plStack_50;
  undefined1 uStack_41;
  
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_10ad975b4:
    plStack_50 = (long *)0x0;
    lStack_58 = 0;
    plVar7 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_a0);
    lStack_58 = 0;
    plStack_50 = (long *)0x0;
    if (plStack_98 == (long *)0x0) goto LAB_10ad975b4;
    plVar7 = plStack_98;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lStack_58 = lStack_a0;
      lVar9 = lStack_a0;
    }
    plStack_50 = plVar7;
    if (plStack_98 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lVar9 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retainAutorelease(uVar5);
      func_0x00010bdc3520();
      func_0x000107c31940(auStack_70,uVar5);
      plStack_98 = (long *)0x0;
      lStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0x3f800000;
      lVar6 = *(long *)(param_1 + 0x38);
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        _objc_retainAutorelease(uVar5);
        func_0x00010bdc3520();
        func_0x000107c31940(&uStack_e8,uVar5);
        cStack_a9 = '\x12';
        uStack_b0 = 0x6449;
        plStack_b8 = (long *)0x656372756f736552;
        plStack_c0 = (long *)0x6c616e7265747865;
        uStack_ae = 0;
        pplStack_f8 = &plStack_c0;
        plVar7 = &lStack_a0;
        func_0x000104c5bc74(plVar7,&plStack_c0,&UNK_10dd5b8f9,&pplStack_f8,&uStack_41);
        if (*(char *)((long)plVar7 + 0x3f) < '\0') {
          __ZdlPv(plVar7[5]);
        }
        lVar6 = CONCAT71(uStack_e7,uStack_e8);
        plVar7[6] = lStack_e0;
        plVar7[5] = lVar6;
        plVar7[7] = CONCAT17(cStack_d1,uStack_d8);
        cStack_d1 = '\0';
        uStack_e8 = 0;
        if ((cStack_a9 < '\0') && (__ZdlPv(plStack_c0), cStack_d1 < '\0')) {
          __ZdlPv(CONCAT71(uStack_e7,uStack_e8));
        }
        uVar5 = 1;
      }
      func_0x000107c2791c(&uStack_e8,&lStack_a0);
      lVar6 = *(long *)(param_1 + 0x28);
      plVar7 = (long *)0x30;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = (long)&PTR_FUN_110c73048;
      _objc_retain(lVar6);
      plVar7[3] = (long)&PTR_FUN_110c73098;
      _objc_retain(lVar6);
      plVar7[4] = lVar6;
      puVar8 = (undefined8 *)0x60;
      __Znwm();
      puVar8[0xb] = 0;
      *puVar8 = &PTR_FUN_110c72148;
      puVar8[2] = 0;
      puVar8[1] = 0;
      puVar8[4] = 0;
      puVar8[3] = 0;
      puVar8[6] = 0;
      puVar8[5] = 0;
      puVar8[8] = 0;
      puVar8[7] = 0;
      puVar8[10] = 0;
      puVar8[9] = 0;
      *(undefined4 *)(puVar8 + 0xb) = 0;
      plVar7[5] = (long)puVar8;
      _objc_release(lVar6);
      pplStack_f8 = (long **)0x0;
      plStack_f0 = (long *)0x0;
      plStack_c0 = plVar7 + 3;
      plStack_b8 = plVar7;
      FUN_10a227ed8(lVar9,&plStack_c0,auStack_70,uVar5,&uStack_e8);
      plVar7 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar1 = plStack_b8 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar7 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        plVar1 = plStack_f0 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      func_0x000104c4f944(&uStack_e8);
      func_0x000104c4f944(&lStack_a0);
      plVar7 = plStack_50;
      goto joined_r0x00010ad97618;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
joined_r0x00010ad97618:
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10ad97974; end: 10ad97ac7; -[LSAExternalStreamComponent _clearExternalStreamProviderWithLensId:resourceId:] */

void FUN_10ad97974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010bf9e640(PTR_PTR_1126db570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10ad97ac8;
  puStack_60 = &UNK_110896e48;
  uStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010c0f9160(uVar1,param_2,puVar2,&puStack_78,0);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad97ac8; end: 10ad97d8b;  */

/* WARNING: Removing unreachable block (ram,0x00010ad97cf8) */

void FUN_10ad97ac8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  long lStack_d0;
  undefined7 uStack_c8;
  char cStack_c1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  char cStack_99;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  long *plStack_48;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_10ad97b1c:
    plStack_48 = (long *)0x0;
    lStack_50 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&lStack_90);
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    if (plStack_88 == (long *)0x0) goto LAB_10ad97b1c;
    plVar8 = plStack_88;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar8 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lStack_50 = lStack_90;
      lVar7 = lStack_90;
    }
    plStack_48 = plVar8;
    if (plStack_88 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lVar7 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retainAutorelease(uVar4);
      func_0x00010bdc3520();
      func_0x000107c31940(auStack_68,uVar4);
      plStack_88 = (long *)0x0;
      lStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_70 = 0x3f800000;
      lVar5 = *(long *)(param_1 + 0x30);
      func_0x00010c08fa60();
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_retainAutorelease(uVar4);
        func_0x00010bdc3520();
        func_0x000107c31940(&uStack_d8,uVar4);
        cStack_99 = '\x12';
        uStack_a0 = 0x6449;
        uStack_a8 = 0x656372756f736552;
        uStack_b0 = 0x6c616e7265747865;
        uStack_9e = 0;
        puStack_38 = &uStack_b0;
        plVar6 = &lStack_90;
        func_0x000104c5bc74(plVar6,&uStack_b0,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
        if (*(char *)((long)plVar6 + 0x3f) < '\0') {
          __ZdlPv(plVar6[5]);
        }
        lVar5 = CONCAT71(uStack_d7,uStack_d8);
        plVar6[6] = lStack_d0;
        plVar6[5] = lVar5;
        plVar6[7] = CONCAT17(cStack_c1,uStack_c8);
        cStack_c1 = '\0';
        uStack_d8 = 0;
        if ((cStack_99 < '\0') && (__ZdlPv(uStack_b0), cStack_c1 < '\0')) {
          __ZdlPv(CONCAT71(uStack_d7,uStack_d8));
        }
        uVar4 = 1;
      }
      func_0x000107c2791c(&uStack_d8,&lStack_90);
      FUN_10a227f3c(lVar7,auStack_68,uVar4,&uStack_d8);
      func_0x000104c4f944(&uStack_d8);
      func_0x000104c4f944(&lStack_90);
      goto LAB_10ad97b78;
    }
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
LAB_10ad97b78:
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return;
}



/* Entry: 10ad97d8c; end: 10ad97d9b;  */

void FUN_10ad97d8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73048;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad97d9c; end: 10ad97dbb;  */

void FUN_10ad97d9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73048;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad97dbc; end: 10ad97dcb;  */

void FUN_10ad97dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad97dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ad97dcc; end: 10ad97e63;  */

undefined8 * FUN_10ad97dcc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c73098;
  plVar1 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  _objc_release(param_1[1]);
  return param_1;
}



/* Entry: 10ad97e64; end: 10ad97f1f;  */

void FUN_10ad97e64(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010bf5ec20();
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    uStack_38 = 0;
  }
  else {
    uStack_38 = 0;
    plVar1 = *(long **)(param_2 + 0x10);
    lStack_40 = lVar2;
    if (*(long *)(param_2 + 8) == 0) {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x00010c106f40(&uStack_70);
    }
    (**(code **)(*plVar1 + 0x10))(param_1,plVar1,&lStack_40,&uStack_70,1);
    FUN_10ad579f0(&lStack_40);
  }
  FUN_10ad579f0(&uStack_38);
  return;
}



/* Entry: 10ad97f20; end: 10ad97f77;  */

long FUN_10ad97f20(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ad97f78; end: 10ad9801b; -[LSAGeoData initWithWeatherData:taxonomyData:] */

undefined1 *
FUN_10ad97f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701338;
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



/* Entry: 10ad9801c; end: 10ad98023; -[LSAGeoData weatherData] */

undefined8 FUN_10ad9801c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad98024; end: 10ad9802b; -[LSAGeoData taxonomyData] */

undefined8 FUN_10ad98024(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ad9802c; end: 10ad9805b; -[LSAGeoData .cxx_destruct] */

void FUN_10ad9802c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad9805c; end: 10ad9822f; -[LSAGeoDataComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad9805c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_48 = (long *)param_3[1];
  uStack_50 = *param_3;
  if (param_3[1] != 0) {
    plVar7 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_58 = PTR_PTR_112701340;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_50,param_4
                      ,param_5);
  plVar7 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c73110;
  puVar5[3] = &PTR_FUN_110c73198;
  _objc_initWeak(puVar5 + 4,param_1);
  puVar2 = (undefined8 *)(param_1 + _DAT_1127842ec);
  plVar7 = (long *)puVar2[1];
  *puVar2 = puVar5 + 3;
  puVar2[1] = puVar5;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x00010bf9b180(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10ad98230; end: 10ad9827b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad98230(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127842ec);
  uVar8 = puVar2[1];
  uVar7 = *puVar2;
  if (puVar2[1] != 0) {
    plVar1 = (long *)(puVar2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *(long *)(*param_2 + 0x80);
  lVar5 = *(long *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = uVar8;
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ad9827c; end: 10ad983f3; -[LSAGeoDataComponent setGeoData:completion:] */

void FUN_10ad9827c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126db570;
  func_0x00010bfc10a0(PTR_PTR_1126db570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10ad983f4;
  puStack_68 = &UNK_110883780;
  uStack_60 = param_1;
  _objc_retain(param_3);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10ad9854c;
  puStack_90 = &UNK_110c72a10;
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_88 = param_4;
  func_0x00010c0f9180(uVar2,param_2,puVar3,&puStack_80,&puStack_a8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad983f4; end: 10ad98487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad983f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_98 [64];
  undefined8 uStack_58;
  char cStack_41;
  char cStack_40;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = (long)_DAT_1127842f0;
  if (*(long *)(lVar2 + lVar3) != 0) {
    FUN_10ad98488(auStack_98,*(undefined8 *)(param_1 + 0x28));
    lVar1 = *(long *)(lVar2 + lVar3);
    *(undefined8 *)(lVar2 + lVar3) = 0;
    lStack_38 = lVar1;
    FUN_10ad98be0(lVar1,auStack_98);
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_38,lVar1);
    }
    if ((cStack_40 == '\x01') && (cStack_41 < '\0')) {
      __ZdlPv(uStack_58);
    }
    FUN_10ad98a88(auStack_98);
  }
  return;
}



/* Entry: 10ad98488; end: 10ad9854b;  */

void FUN_10ad98488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2a2ce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ad98f14(param_1);
  uVar2 = param_2;
  func_0x00010c26aa60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10ad996bc(param_1 + 0x40);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad9854c; end: 10ad9859f;  */

void FUN_10ad9854c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10ad985a0; end: 10ad985b3; -[LSAGeoDataComponent setDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad985a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127842f4,param_3);
  return;
}



/* Entry: 10ad985b4; end: 10ad98627; -[LSAGeoDataComponent removeDataProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad985b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127842f4;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + lVar2,0);
  return;
}



/* Entry: 10ad98628; end: 10ad986ff; -[LSAGeoDataComponent requestGeoDataAsyncWithGeoDataComponent:] */

void FUN_10ad98628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ad98700;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ad98700; end: 10ad98753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad98700(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_1127842f4;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1355a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10ad98754; end: 10ad987af; -[LSAGeoDataComponent prefetchedGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad98754(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127842f4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c108340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10ad987b0; end: 10ad989d7; -[LSAGeoDataComponent didRequestGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad987b0(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  char cStack_59;
  char cStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  lVar6 = param_2;
  func_0x00010c108340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x100;
    __Znwm();
    puVar4[2] = 0;
    puVar4[1] = 0x200000006;
    *(undefined2 *)(puVar4 + 3) = 4;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = puVar4 + 3;
    puVar4[0x12] = 0;
    *puVar4 = &PTR_DAT_110c73160;
    *(undefined1 *)(puVar4 + 0x13) = 0;
    *(undefined1 *)(puVar4 + 0x1f) = 0;
    lVar6 = (long)_DAT_1127842f0;
    *param_1 = puVar4;
    if (*(long *)(param_2 + lVar6) != 0) {
      func_0x0001092b4274(param_2 + lVar6);
    }
    *(undefined8 **)(param_2 + lVar6) = puVar4;
    func_0x00010c1355a0(param_2);
  }
  else {
    FUN_10ad98488(auStack_b0,lVar6);
    puVar4 = (undefined8 *)0x100;
    __Znwm();
    *(undefined2 *)(puVar4 + 3) = 4;
    puVar4[2] = 0;
    puVar4[1] = 0x200000006;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    puVar4[0xb] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[0xf] = 0;
    puVar4[0xe] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = puVar4 + 3;
    puVar4[0x12] = 0;
    *puVar4 = &PTR_DAT_110c73160;
    *(undefined1 *)(puVar4 + 0x13) = 0;
    *(undefined1 *)(puVar4 + 0x1f) = 0;
    puStack_48 = puVar4;
    FUN_10ad98be0();
    *param_1 = puVar4;
    plStack_50 = (long *)0x0;
    func_0x0001092b4274(&puStack_48,puVar4);
    if (plStack_50 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_50 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plStack_50 + 8))();
        }
      }
    }
    if ((cStack_58 == '\x01') && (cStack_59 < '\0')) {
      __ZdlPv(uStack_70);
    }
    FUN_10ad98a88(auStack_b0);
    _objc_release(lVar6);
  }
  return;
}



/* Entry: 10ad989d8; end: 10ad98a67; -[LSAGeoDataComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad989d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + _DAT_1127842f0) != 0) {
    func_0x0001092b4274(param_1 + _DAT_1127842f0);
  }
  _objc_destroyWeak(param_1 + _DAT_1127842f4);
  plVar5 = *(long **)(param_1 + _DAT_1127842ec + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ad98a68; end: 10ad98a87; -[LSAGeoDataComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ad98a68(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127842ec;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  *(undefined8 *)(param_1 + _DAT_1127842f0) = 0;
  return;
}



/* Entry: 10ad98a88; end: 10ad98adb;  */

undefined8 * FUN_10ad98a88(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)(param_1 + 7) == '\x01') {
    puStack_28 = param_1 + 4;
    FUN_10ad98adc(&puStack_28);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10ad98adc; end: 10ad98b4b;  */

void FUN_10ad98adc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x50;
        FUN_10ad98b4c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ad98b4c; end: 10ad98b9f;  */

void FUN_10ad98b4c(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10ad98ba0; end: 10ad98baf;  */

void FUN_10ad98ba0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73110;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ad98bb0; end: 10ad98bcf;  */

void FUN_10ad98bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73110;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ad98bd0; end: 10ad98bdf;  */

void FUN_10ad98bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ad98bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ad98be0; end: 10ad98e87;  */

void FUN_10ad98be0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0xf8) == '\x01') {
          if ((*(char *)(param_1 + 0xf0) == '\x01') && (*(char *)(param_1 + 0xef) < '\0')) {
            __ZdlPv(*(undefined8 *)(param_1 + 0xd8));
          }
          FUN_10ad98a88(param_1 + 0x98);
          *(undefined1 *)(param_1 + 0xf8) = 0;
        }
        *(undefined1 *)(param_1 + 0x98) = 0;
        *(undefined1 *)(param_1 + 0xd0) = 0;
        if (*(char *)(param_2 + 7) == '\x01') {
          uVar10 = param_2[1];
          uVar4 = *param_2;
          *(undefined8 *)(param_1 + 0xa8) = param_2[2];
          *(undefined8 *)(param_1 + 0xa0) = uVar10;
          *(undefined8 *)(param_1 + 0x98) = uVar4;
          param_2[1] = 0;
          param_2[2] = 0;
          *param_2 = 0;
          uVar4 = param_2[3];
          *(undefined8 *)(param_1 + 0xc0) = 0;
          *(undefined8 *)(param_1 + 200) = 0;
          *(undefined8 *)(param_1 + 0xb0) = uVar4;
          *(undefined8 *)(param_1 + 0xb8) = 0;
          uVar4 = param_2[4];
          *(undefined8 *)(param_1 + 0xc0) = param_2[5];
          *(undefined8 *)(param_1 + 0xb8) = uVar4;
          *(undefined8 *)(param_1 + 200) = param_2[6];
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          *(undefined1 *)(param_1 + 0xd0) = 1;
        }
        *(undefined1 *)(param_1 + 0xd8) = 0;
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (*(char *)(param_2 + 0xb) == '\x01') {
          uVar10 = param_2[9];
          uVar4 = param_2[8];
          *(undefined8 *)(param_1 + 0xe8) = param_2[10];
          *(undefined8 *)(param_1 + 0xe0) = uVar10;
          *(undefined8 *)(param_1 + 0xd8) = uVar4;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[8] = 0;
          *(undefined1 *)(param_1 + 0xf0) = 1;
        }
        *(undefined1 *)(param_1 + 0xf8) = 1;
        *(undefined8 *)(param_1 + 0x10) = 2;
        uStack_78 = *(undefined8 *)(param_1 + 0x60);
        uStack_80 = *(undefined8 *)(param_1 + 0x58);
        uStack_68 = *(undefined8 *)(param_1 + 0x70);
        uStack_70 = *(undefined8 *)(param_1 + 0x68);
        uStack_58 = *(undefined8 *)(param_1 + 0x80);
        uStack_60 = *(undefined8 *)(param_1 + 0x78);
        uStack_c0 = *(undefined8 *)(param_1 + 0x18);
        uStack_b8 = *(undefined8 *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(param_1 + 0x30);
        uStack_b0 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x88) = (undefined8 *)(param_1 + 0x18);
        *(undefined1 *)(param_1 + 0x19) = 0;
        uStack_98 = *(undefined8 *)(param_1 + 0x40);
        uStack_a0 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = *(undefined8 *)(param_1 + 0x50);
        uStack_90 = *(undefined8 *)(param_1 + 0x48);
        puVar6 = &uStack_c0;
        do {
          uVar7 = (ulong)*(byte *)((long)puVar6 + 1);
          if (uVar7 != 0) {
            puVar9 = (undefined8 *)((long)puVar6 + 0x20);
            do {
              uStack_48 = puVar9[-1];
              uStack_50 = puVar9[-2];
              uStack_40 = *puVar9;
              (*(code *)**(undefined8 **)*puVar9)((undefined8 *)*puVar9,&uStack_50);
              uVar7 = uVar7 - 1;
              puVar9 = puVar9 + 3;
            } while (uVar7 != 0);
          }
          puVar8 = *(undefined1 **)((long)puVar6 + 8);
          if (puVar6 != &uStack_c0) {
            _free(puVar6);
          }
          puVar6 = (undefined8 *)puVar8;
        } while (puVar8 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10ad98e88; end: 10ad98f13;  */

void FUN_10ad98e88(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_2 = param_2 + 8;
    _objc_loadWeakRetained();
    if (param_2 == 0) {
      *param_1 = 0;
    }
    else {
      func_0x00010bf79e60(param_1,param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ad98f14; end: 10ad9966b;  */

void FUN_10ad98f14(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined8 *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ***pppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 ***pppuStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 ***pppuStack_140;
  char *pcStack_138;
  char *pcStack_130;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  char *pcStack_100;
  undefined8 ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_2 == (char *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    pppuStack_140 = (undefined8 ****)0x0;
    pcStack_138 = (char *)0x0;
    pcStack_130 = (char *)0x0;
    pcVar5 = param_2;
    func_0x00010bfe47c0();
    _objc_retainAutoreleasedReturnValue();
    pcVar13 = pcVar5;
    func_0x00010bf529e0();
    pcVar6 = pcStack_138;
    pppuVar3 = pppuStack_140;
    if ((char *)(((long)pcStack_130 - (long)pppuStack_140 >> 4) * -0x3333333333333333) < pcVar13) {
      if ((char *)0x333333333333333 < pcVar13) goto LAB_10ad99524;
      pppuStack_1b0 = &pppuStack_140;
      FUN_10ad997b0();
      pcVar6 = pcVar6 + ((long)pcVar13 - (long)pppuVar3);
      lVar11 = (long)param_3 * 0x50;
      lVar9 = (long)pppuStack_140 - (long)pcStack_138;
      func_0x00010ad997f4(pppuStack_140,pcStack_138,pcVar6 + lVar9);
      pppuStack_1c0 = pppuStack_140;
      uStack_1b8 = pcStack_130;
      uStack_1d0 = (undefined8 ****)pppuStack_140;
      pppuStack_1c8 = pppuStack_140;
      param_3 = pcStack_138;
      pppuStack_140 = (undefined8 ***)(pcVar6 + lVar9);
      pcStack_138 = pcVar6;
      pcStack_130 = pcVar13 + lVar11;
      FUN_10acfb6e4(&uStack_1d0);
    }
    _objc_release(pcVar5);
    uVar16 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    pcVar6 = param_2;
    func_0x00010bfe47c0();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar6;
    func_0x00010bf52a60();
    if (pcVar5 != (char *)0x0) {
      pcVar13 = (char *)0x0;
      lVar9 = *plStack_170;
      lVar11 = lVar9;
      do {
        if (lVar11 != lVar9) {
          _objc_enumerationMutation(pcVar6);
        }
        pcVar14 = *(char **)(lStack_178 + (long)pcVar13 * 8);
        _objc_retain(pcVar14);
        uVar16 = 0;
        pppuStack_1c8 = (undefined8 ****)0x0;
        uStack_1d0 = (undefined8 ****)0x0;
        uStack_1b8 = (char *)0x0;
        pppuStack_1c0 = (undefined8 ****)0x0;
        uStack_1a8 = 0;
        pppuStack_1b0 = (undefined8 ****)0x0;
        lStack_198 = 0;
        lStack_1a0 = 0;
        lStack_188 = 0;
        uStack_190 = 0;
        pcVar7 = pcVar14;
        func_0x00010bf34540(pcVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        uStack_1d0 = (undefined8 ****)CONCAT44(uStack_1d0._4_4_,uVar16);
        _objc_release(pcVar7);
        pcVar7 = pcVar14;
        func_0x00010bf9fa60(pcVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        uStack_1d0 = (undefined8 ****)CONCAT44(uVar16,(undefined4)uStack_1d0);
        _objc_release(pcVar7);
        pcVar7 = pcVar14;
        func_0x00010c2a2c40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (pcVar7 != (char *)0x0) {
          pcVar7 = pcVar14;
          func_0x00010c2a2c40();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          param_3 = pcVar7;
          func_0x00010bdc3520();
          func_0x000107c2c4dc(&pppuStack_1b0);
          _objc_release(pcVar7);
        }
        pcVar7 = pcVar14;
        func_0x00010c09e980();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (pcVar7 != (char *)0x0) {
          pcVar7 = pcVar14;
          func_0x00010c09e980();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          param_3 = pcVar7;
          func_0x00010bdc3520();
          func_0x000107c2c4dc(&lStack_198);
          _objc_release(pcVar7);
        }
        pcVar7 = pcVar14;
        func_0x00010bf86680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (pcVar7 != (char *)0x0) {
          pcVar7 = pcVar14;
          func_0x00010bf86680();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          param_3 = pcVar7;
          func_0x00010bdc3520();
          func_0x000107c2c4dc(&pppuStack_1c8);
          _objc_release(pcVar7);
        }
        _objc_release(pcVar14);
        lVar11 = lStack_198;
        if (pcStack_138 < pcStack_130) {
          *(undefined8 *****)pcStack_138 = uStack_1d0;
          *(char **)(pcStack_138 + 0x18) = uStack_1b8;
          *(undefined8 ****)(pcStack_138 + 0x10) = pppuStack_1c0;
          *(undefined8 ****)(pcStack_138 + 8) = pppuStack_1c8;
          pppuStack_1c8 = (undefined8 ****)0x0;
          pppuStack_1c0 = (undefined8 ****)0x0;
          *(undefined8 *)(pcStack_138 + 0x28) = uStack_1a8;
          *(undefined8 ****)(pcStack_138 + 0x20) = pppuStack_1b0;
          *(long *)(pcStack_138 + 0x30) = lStack_1a0;
          uStack_1b8 = (char *)0x0;
          pppuStack_1b0 = (undefined8 ****)0x0;
          uStack_1a8 = 0;
          lStack_1a0 = 0;
          *(long *)(pcStack_138 + 0x48) = lStack_188;
          *(undefined8 *)(pcStack_138 + 0x40) = uStack_190;
          *(long *)(pcStack_138 + 0x38) = lStack_198;
          uStack_190 = 0;
          lStack_188 = 0;
          lStack_198 = 0;
          pcVar7 = pcStack_138 + 0x50;
        }
        else {
          lVar15 = (long)pcStack_138 - (long)pppuStack_140;
          uVar10 = (lVar15 >> 4) * -0x3333333333333333 + 1;
          if (0x333333333333333 < uVar10) {
            FUN_10ad9979c();
            goto LAB_10ad99528;
          }
          lVar11 = (long)pcStack_130 - (long)pppuStack_140 >> 4;
          uVar12 = lVar11 * -0x6666666666666666;
          if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
            uVar12 = uVar10;
          }
          if (0x199999999999998 < (ulong)(lVar11 * -0x3333333333333333)) {
            uVar12 = 0x333333333333333;
          }
          pppuStack_f8 = &pppuStack_140;
          FUN_10ad997b0();
          lVar11 = lStack_198;
          puVar1 = (undefined8 *)(uVar12 + lVar15);
          *puVar1 = uStack_1d0;
          puVar1[3] = uStack_1b8;
          puVar1[2] = pppuStack_1c0;
          puVar1[1] = pppuStack_1c8;
          pppuStack_1c0 = (undefined8 ****)0x0;
          uStack_1b8 = (char *)0x0;
          pppuStack_1c8 = (undefined8 ****)0x0;
          puVar1[6] = lStack_1a0;
          puVar1[5] = uStack_1a8;
          puVar1[4] = pppuStack_1b0;
          uStack_1a8 = 0;
          lStack_1a0 = 0;
          pppuStack_1b0 = (undefined8 ****)0x0;
          puVar1[9] = lStack_188;
          puVar1[8] = uStack_190;
          puVar1[7] = lStack_198;
          uStack_190 = 0;
          lStack_188 = 0;
          lStack_198 = 0;
          pcVar7 = (char *)(puVar1 + 10);
          ppppuVar2 = (undefined8 ****)((long)puVar1 + ((long)pppuStack_140 - (long)pcStack_138));
          func_0x00010ad997f4(pppuStack_140,pcStack_138,ppppuVar2);
          pppuStack_108 = pppuStack_140;
          pcStack_100 = pcStack_130;
          pppuStack_118 = pppuStack_140;
          pppuStack_110 = pppuStack_140;
          pppuStack_140 = ppppuVar2;
          pcVar14 = pcStack_138;
          pcStack_138 = pcVar7;
          pcStack_130 = (char *)(uVar12 + (long)param_3 * 0x50);
          FUN_10acfb6e4(&pppuStack_118);
          param_3 = pcStack_138;
          if (lStack_188 < 0) {
            pcStack_138 = pcVar7;
            __ZdlPv(lStack_198);
            pcVar7 = pcStack_138;
          }
        }
        pcStack_138 = pcVar7;
        uVar16 = (undefined4)lVar11;
        if (lStack_1a0 < 0) {
          __ZdlPv(pppuStack_1b0);
        }
        if ((long)uStack_1b8 < 0) {
          __ZdlPv(pppuStack_1c8);
        }
        pcVar13 = pcVar13 + 1;
        if (pcVar5 <= pcVar13) {
          pcVar5 = pcVar6;
          func_0x00010bf52a60();
          if (pcVar5 == (char *)0x0) break;
          pcVar13 = (char *)0x0;
        }
        lVar11 = *plStack_170;
      } while( true );
    }
    pcVar5 = (char *)0x0;
    _objc_release(pcVar6);
    pcVar6 = param_2;
    func_0x00010c09f000();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar6 == (char *)0x0) {
      pcVar13 = "";
    }
    else {
      pcVar5 = param_2;
      func_0x00010c09f000(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      pcVar13 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    func_0x000107c31940(&uStack_1d0,pcVar13);
    pcVar14 = param_2;
    func_0x00010bf34540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    uStack_1b8 = (char *)CONCAT44(uStack_1b8._4_4_,uVar16);
    pcVar8 = param_2;
    func_0x00010bf9fa60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    pcVar7 = pcStack_130;
    pcVar13 = pcStack_138;
    pppuVar3 = pppuStack_140;
    uStack_1b8 = (char *)CONCAT44(uVar16,(undefined4)uStack_1b8);
    pppuStack_118 = &pppuStack_1b0;
    pcStack_138 = (char *)0x0;
    pcStack_130 = (char *)0x0;
    pppuStack_140 = (undefined8 ****)0x0;
    param_1[1] = pppuStack_1c8;
    *param_1 = uStack_1d0;
    uStack_1d0 = (undefined8 ****)0x0;
    pppuStack_1c8 = (undefined8 ****)0x0;
    param_1[2] = pppuStack_1c0;
    param_1[3] = uStack_1b8;
    param_1[5] = pcVar13;
    param_1[4] = pppuVar3;
    param_1[6] = pcVar7;
    pppuStack_1c0 = (undefined8 ****)0x0;
    pppuStack_1b0 = (undefined8 ****)0x0;
    uStack_1a8 = 0;
    lStack_1a0 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    FUN_10ad98adc(&pppuStack_118);
    if ((long)pppuStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar14);
    if (pcVar6 != (char *)0x0) {
      _objc_release(pcVar5);
    }
    _objc_release(pcVar6);
    uStack_1d0 = &pppuStack_140;
    FUN_10ad98adc(&uStack_1d0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10ad99524:
  FUN_10ad9979c();
LAB_10ad99528:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad9952c);
  (*pcVar4)();
}



/* Entry: 10ad9966c; end: 10ad996bb;  */

long FUN_10ad9966c(long param_1)

{
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10ad996bc; end: 10ad9979b;  */

void FUN_10ad996bc(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010c297ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c297ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x000107c31940(&uStack_48,lVar2);
      param_1[1] = uStack_40;
      *param_1 = uStack_48;
      param_1[2] = uStack_38;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_48 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      _objc_release(lVar1);
      goto LAB_10ad99758;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_10ad99758:
  _objc_release(param_2);
  return;
}



/* Entry: 10ad9979c; end: 10ad997af;  */

void FUN_10ad9979c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x333333333333333 < puVar1) {
    func_0x000104c4f740();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        uVar4 = puVar2[2];
        uVar3 = puVar2[1];
        param_3[3] = puVar2[3];
        param_3[2] = uVar4;
        param_3[1] = uVar3;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[1] = 0;
        uVar4 = puVar2[5];
        uVar3 = puVar2[4];
        param_3[6] = puVar2[6];
        param_3[5] = uVar4;
        param_3[4] = uVar3;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[4] = 0;
        uVar4 = puVar2[8];
        uVar3 = puVar2[7];
        param_3[9] = puVar2[9];
        param_3[8] = uVar4;
        param_3[7] = uVar3;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[7] = 0;
        puVar2 = puVar2 + 10;
        param_3 = param_3 + 10;
      } while (puVar2 != param_2);
      do {
        FUN_10ad98b4c(puVar1);
        puVar1 = puVar1 + 10;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x50);
  return;
}



/* Entry: 10ad997b0; end: 10ad99893;  */

void FUN_10ad997b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x333333333333333 < param_1) {
    func_0x000104c4f740();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        uVar3 = puVar1[2];
        uVar2 = puVar1[1];
        param_3[3] = puVar1[3];
        param_3[2] = uVar3;
        param_3[1] = uVar2;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[1] = 0;
        uVar3 = puVar1[5];
        uVar2 = puVar1[4];
        param_3[6] = puVar1[6];
        param_3[5] = uVar3;
        param_3[4] = uVar2;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[4] = 0;
        uVar3 = puVar1[8];
        uVar2 = puVar1[7];
        param_3[9] = puVar1[9];
        param_3[8] = uVar3;
        param_3[7] = uVar2;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[7] = 0;
        puVar1 = puVar1 + 10;
        param_3 = param_3 + 10;
      } while (puVar1 != param_2);
      do {
        FUN_10ad98b4c(param_1);
        param_1 = param_1 + 10;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x50);
  return;
}



/* Entry: 10ad99894; end: 10ad999c3; -[LSAHourlyForecast initWithCelsius:fahrenheit:weatherCondition:localizedWeatherCondition:displayTime:] */

undefined1 *
FUN_10ad99894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112701348;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
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



/* Entry: 10ad999c4; end: 10ad999cb; -[LSAHourlyForecast celsius] */

undefined8 FUN_10ad999c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad999cc; end: 10ad999d3; -[LSAHourlyForecast fahrenheit] */

undefined8 FUN_10ad999cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ad999d4; end: 10ad999db; -[LSAHourlyForecast weatherCondition] */

undefined8 FUN_10ad999d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10ad999dc; end: 10ad999e3; -[LSAHourlyForecast localizedWeatherCondition] */

undefined8 FUN_10ad999dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10ad999e4; end: 10ad999eb; -[LSAHourlyForecast displayTime] */

undefined8 FUN_10ad999e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10ad999ec; end: 10ad99a3f; -[LSAHourlyForecast .cxx_destruct] */

void FUN_10ad999ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad99a40; end: 10ad99ab7; -[LSATaxonomyData initWithVenueJson:] */

undefined1 * FUN_10ad99a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701350;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad99ab8; end: 10ad99abf; -[LSATaxonomyData venueJson] */

undefined8 FUN_10ad99ab8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad99ac0; end: 10ad99acb; -[LSATaxonomyData .cxx_destruct] */

void FUN_10ad99ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad99acc; end: 10ad99bcf; -[LSAWeatherData initWithCelsius:fahrenheit:locationName:hourlyForecast:] */

undefined1 *
FUN_10ad99acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_112701358;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10ad99bd0; end: 10ad99bd7; -[LSAWeatherData celsius] */

undefined8 FUN_10ad99bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ad99bd8; end: 10ad99bdf; -[LSAWeatherData fahrenheit] */

undefined8 FUN_10ad99bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10ad99be0; end: 10ad99be7; -[LSAWeatherData locationName] */

undefined8 FUN_10ad99be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10ad99be8; end: 10ad99bef; -[LSAWeatherData hourlyForecast] */

undefined8 FUN_10ad99be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10ad99bf0; end: 10ad99c37; -[LSAWeatherData .cxx_destruct] */

void FUN_10ad99bf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad99c38; end: 10ad99e63;  */

undefined * FUN_10ad99c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___AVAudioSession_1126b6de8;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf5fe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  puVar1 = puVar2;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar9 = *plStack_120;
    uVar6 = *(undefined8 *)PTR__AVAudioSessionPortBluetoothA2DP_11034ceb0;
    uVar7 = *(undefined8 *)PTR__AVAudioSessionPortBluetoothHFP_11034ceb8;
    uVar8 = *(undefined8 *)PTR__AVAudioSessionPortBluetoothLE_11034cec0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(puVar1);
        }
        uVar3 = *(ulong *)(lStack_128 + (long)puVar10 * 8);
        func_0x00010c104100();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        if (((((uVar4 & 1) != 0) ||
             (uVar4 = uVar3, func_0x00010c0720c0(uVar3,param_2,uVar6), (uVar4 & 1) != 0)) ||
            (uVar4 = uVar3, func_0x00010c0720c0(uVar3,param_2,uVar7), (uVar4 & 1) != 0)) ||
           (uVar4 = uVar3, func_0x00010c0720c0(uVar3,param_2,uVar8), (uVar4 & 1) != 0)) {
          _objc_release(uVar3);
          puVar5 = (undefined *)0x1;
          goto LAB_10ad99dbc;
        }
        _objc_release(uVar3);
        puVar10 = puVar10 + 1;
      } while (puVar5 != puVar10);
      puVar5 = puVar1;
      func_0x00010bf52a60(puVar1,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar5 != (undefined *)0x0);
  }
  puVar5 = (undefined *)0x0;
LAB_10ad99dbc:
  _objc_release(puVar1);
  puVar10 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar2);
  __Unwind_Resume(puVar10);
  return puVar10;
}



/* Entry: 10ad99e64; end: 10ad99e6b;  */

void FUN_10ad99e64(void)

{
  return;
}



/* Entry: 10ad99e6c; end: 10ad99fbf; -[LSAAudioPlayerBridge init] */

undefined8 * FUN_10ad99e6c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = PTR_PTR_112701360;
  puVar1 = &uStack_48;
  uStack_48 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  lVar3 = 0;
  puVar5 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126de108;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126de110;
    _objc_opt_new();
    puVar5 = puVar1 + 5;
    uVar4 = *puVar5;
    *puVar5 = puVar2;
    _objc_release(uVar4);
    uStack_38 = puVar1[4];
    uStack_30 = *puVar5;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126de118;
    _objc_opt_new();
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    func_0x00010bef9980(puVar1[4]);
    lVar3 = puVar1[5];
    param_3 = puVar1;
    func_0x00010bef9980();
    puVar5 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  __Unwind_Resume();
  _objc_retain(param_3);
  func_0x00010bf0f700(*(undefined8 *)(lVar3 + 0x10));
  func_0x00010be3dd60(lVar3);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return param_3;
}



/* Entry: 10ad99fc0; end: 10ad9a067; -[LSAAudioPlayerBridge muteAllSoundsWithCompletion:] */

void FUN_10ad99fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0f700(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  func_0x00010be3dd60(param_1,param_2,PTR_s_muteAllSoundsWithCompletion__1126129b8,param_3);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9a068; end: 10ad9a10f; -[LSAAudioPlayerBridge unmuteAllSoundsWithCompletion:] */

void FUN_10ad9a068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf0f760(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  func_0x00010be3dd60(param_1,param_2,PTR_s_unmuteAllSoundsWithCompletion__11267e050,param_3);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9a110; end: 10ad9a1ab; -[LSAAudioPlayerBridge suspendAllSoundsWithCompletion:] */

void FUN_10ad9a110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010be3dd60(param_1,param_2,PTR_s_suspendAllSoundsWithCompletion__112676a58,param_3);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9a1ac; end: 10ad9a247; -[LSAAudioPlayerBridge resumeAllSoundsWithCompletion:] */

void FUN_10ad9a1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010be3dd60(param_1,param_2,PTR_s_resumeAllSoundsWithCompletion__11262ceb8,param_3);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9a248; end: 10ad9a257; -[LSAAudioPlayerBridge activateWithCompletion:] */

void FUN_10ad9a248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__invokeSelectorOnAllPlayers_comp_11256d0f8,
             PTR_s_activateWithCompletion__112599990,param_3);
  return;
}



/* Entry: 10ad9a258; end: 10ad9a267; -[LSAAudioPlayerBridge deactivateWithCompletion:] */

void FUN_10ad9a258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__invokeSelectorOnAllPlayers_comp_11256d0f8,
             PTR_s_deactivateWithCompletion__1125b7118,param_3);
  return;
}



/* Entry: 10ad9a268; end: 10ad9a283; -[LSAAudioPlayerBridge isPlayingAudio] */

bool FUN_10ad9a268(int param_1)

{
  func_0x00010bef0480();
  return param_1 != 0;
}



/* Entry: 10ad9a284; end: 10ad9a28b; -[LSAAudioPlayerBridge addListener:] */

void FUN_10ad9a284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ad9a28c; end: 10ad9a293; -[LSAAudioPlayerBridge removeListener:] */

void FUN_10ad9a28c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10ad9a294; end: 10ad9a2f7; -[LSAAudioPlayerBridge audioPlayerDidStartPlayingAudio:] */

void FUN_10ad9a294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef0480(param_1);
  func_0x00010c162520(param_1,param_2,(int)lVar1 + 1U & 0xffff);
  func_0x00010bf0f720(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9a2f8; end: 10ad9a367; -[LSAAudioPlayerBridge audioPlayerDidStopPlayingAudio:] */

void FUN_10ad9a2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef0480(param_1);
  func_0x00010c162520(param_1,param_2,(int)lVar1 - 1U & 0xffff);
  lVar1 = param_1;
  func_0x00010bef0480();
  if ((int)lVar1 == 0) {
    func_0x00010bf0f740(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9a368; end: 10ad9a513; -[LSAAudioPlayerBridge _invokeSelectorOnAllPlayers:completion:] */

void FUN_10ad9a368(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
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
  
  ppuVar3 = &puStack_a0;
  lVar2 = param_4;
  _objc_retain();
  if (param_4 == 0) {
    func_0x00010c0b7540(*(undefined8 *)(param_1 + 8));
  }
  else {
    _dispatch_group_create();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar5 = *(undefined8 *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10ad9a514;
    puStack_60 = &UNK_110c73228;
    _objc_retain();
    lStack_58 = lVar2;
    func_0x00010bf97e80(uVar5);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x10ad9a51c;
    puStack_88 = &UNK_11087bb00;
    _objc_retain(lVar2);
    lStack_80 = lVar2;
    _objc_retainBlock(&puStack_a0);
    uVar5 = *(undefined8 *)(param_1 + 8);
    puVar4 = (undefined1 *)ppuVar3;
    _objc_retainBlock();
    func_0x00010c0b7540(uVar5);
    _objc_release(puVar4);
    uVar5 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c27d98(lVar2,uVar5,param_4);
    _objc_release(uVar5);
    _objc_release(ppuVar3);
    _objc_release(lStack_80);
    _objc_release(lStack_58);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10ad9a514; end: 10ad9a523;  */

void FUN_10ad9a514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_enter_11034c078)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10ad9a524; end: 10ad9a52b; -[LSAAudioPlayerBridge scenariumAudioPlayer] */

undefined8 FUN_10ad9a524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10ad9a52c; end: 10ad9a533; -[LSAAudioPlayerBridge audioToolboxPlayer] */

undefined8 FUN_10ad9a52c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10ad9a534; end: 10ad9a53b; -[LSAAudioPlayerBridge activeAudioPlayersCounter] */

undefined2 FUN_10ad9a534(long param_1)

{
  return *(undefined2 *)(param_1 + 0x18);
}



/* Entry: 10ad9a53c; end: 10ad9a543; -[LSAAudioPlayerBridge setActiveAudioPlayersCounter:] */

void FUN_10ad9a53c(long param_1,undefined8 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10ad9a544; end: 10ad9a58b; -[LSAAudioPlayerBridge .cxx_destruct] */

void FUN_10ad9a544(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10ad9a58c; end: 10ad9a707; -[LSAAudioPlayerListenerAnnouncer description] */

void FUN_10ad9a58c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10ad9a708(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ad9a708; end: 10ad9a767;  */

void FUN_10ad9a708(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10ad9a768; end: 10ad9aa13; -[LSAAudioPlayerListenerAnnouncer addListener:] */

undefined8 FUN_10ad9a768(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c73268;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10ad9aa14(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10ad9ab54(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10ad9a91c:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10ad9a93c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10ad9aa14(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10ad9aa14(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10ad9ab54(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10ad9a91c;
    }
  }
  uVar9 = 1;
LAB_10ad9a93c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10ad9aa14; end: 10ad9ab53;  */

void FUN_10ad9aa14(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10ad9b290();
LAB_10ad9ab50:
      func_0x000104c4f740();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar9;
      lVar9 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10ad9ab50;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar10 = lVar8;
    lVar11 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar11,lVar10);
        lVar10 = lVar10 + 8;
        lVar11 = lVar11 + 8;
      } while (lVar10 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10ad9ab54; end: 10ad9abab;  */

void FUN_10ad9ab54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10ad9abac; end: 10ad9addb; -[LSAAudioPlayerListenerAnnouncer removeListener:] */

void FUN_10ad9abac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10ad9ad60;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10ad9ac14;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10ad9ab54(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10ad9ad60;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10ad9ac14:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110c73268;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10ad9aa14(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10ad9ab54(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10ad9ad60;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10ad9ad60:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ad9addc; end: 10ad9ae27; -[LSAAudioPlayerListenerAnnouncer hasAnyListeners] */

bool FUN_10ad9addc(long param_1)

{
  bool bVar1;
  long *plVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = plVar2[1] != *plVar2;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  return bVar1;
}


