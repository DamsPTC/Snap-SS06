/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ada3344; end: 10ada343b; -[LSALensComponent clearAllResourcesWithCompletion:] */

void FUN_10ada3344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,5);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ada343c;
  puStack_40 = &UNK_11087bb00;
  uStack_38 = param_1;
  func_0x00010c0f9180(uVar1,param_2,puVar2,&puStack_58,param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada343c; end: 10ada34f7;  */

void FUN_10ada343c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long lStack_30;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf52380(&lStack_40);
    lStack_30 = 0;
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 == (long *)0x0) {
        lVar5 = 0;
      }
      else {
        lStack_30 = lStack_40;
        lVar5 = lStack_40;
      }
      if (plStack_38 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lVar5 != 0) {
        FUN_10a21e1b8(lVar5);
      }
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
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
  return;
}



/* Entry: 10ada34f8; end: 10ada35fb; -[LSALensComponent clearUnusedLensesWithCompletion:] */

void FUN_10ada34f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010c200300(param_1,param_2,1);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10ada35fc;
  puStack_40 = &UNK_11087bb00;
  uStack_38 = param_1;
  func_0x00010c0f91a0(uVar1,param_2,puVar2,&puStack_58,param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada35fc; end: 10ada377b;  */

void FUN_10ada35fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined8 *apuStack_d8 [2];
  undefined8 *puStack_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c06c540();
  if ((int)uVar4 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      puStack_e8 = (undefined8 *)0x0;
      plStack_e0 = (long *)0x0;
      puStack_c8 = (undefined8 *)0x0;
      plStack_c0 = (long *)0x0;
    }
    else {
      func_0x00010bf52380(&puStack_e8);
      puStack_c8 = (undefined8 *)0x0;
      plStack_c0 = (long *)0x0;
      if (plStack_e0 != (long *)0x0) {
        plVar5 = plStack_e0;
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_c0 = plVar5;
        if (plVar5 != (long *)0x0) {
          puStack_c8 = puStack_e8;
          if (puStack_e8 != (undefined8 *)0x0) {
            apuStack_d8[0] = puStack_e8;
            plVar1 = plVar5 + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            FUN_10a219de8(auStack_b8,*puStack_e8);
            FUN_10a22afb0(auStack_b8);
            do {
              lVar7 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
      }
    }
    plVar5 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar1 = plStack_c0 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_e0 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    param_3 = 0;
    func_0x00010c200300();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ad8b754(apuStack_d8);
  FUN_10ad8b754(&puStack_c8);
  if (plStack_e0 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __Unwind_Resume();
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f98a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0f9180(uVar4);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada377c; end: 10ada38b3; -[LSALensComponent removeLensWithId:completion:] */

void FUN_10ada377c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,0xc);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ada38b4;
  puStack_58 = &UNK_110883780;
  uStack_50 = param_1;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010c0f9180(uVar1,param_2,puVar2,&puStack_70,param_4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada38b4; end: 10ada39bf;  */

void FUN_10ada38b4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  long lStack_40;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf52380(&lStack_58);
    lStack_40 = 0;
    if (plStack_50 != (long *)0x0) {
      plVar4 = plStack_50;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 == (long *)0x0) {
        lVar6 = 0;
      }
      else {
        lStack_40 = lStack_58;
        lVar6 = lStack_58;
      }
      if (plStack_50 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (lVar6 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        _objc_retainAutorelease(uVar5);
        func_0x00010bdc3520();
        func_0x000107c31940(&lStack_58,uVar5);
        FUN_10a21d5c0(lVar6,&lStack_58);
        if (cStack_41 < '\0') {
          __ZdlPv(lStack_58);
        }
      }
      if (plVar4 != (long *)0x0) {
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  return;
}



/* Entry: 10ada39c0; end: 10ada3b23; -[LSALensComponent cancelAll] */

void FUN_10ada39c0(undefined8 param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar5 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf2f5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5ae0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010bf52380(&lStack_50,param_1);
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  if (plStack_48 != (long *)0x0) {
    plVar7 = plStack_48;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lStack_40 = lStack_50;
      lVar9 = lStack_50;
    }
    plStack_38 = plVar7;
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lVar9 != 0) {
      FUN_10a21ded0(&plStack_58,lVar9);
      if (plStack_58 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_58 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_58 + 8))();
          }
        }
      }
    }
  }
  plVar7 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10ada3b24; end: 10ada3cfb; -[LSALensComponent cancelLensWithId:] */

void FUN_10ada3b24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lStack_60;
  long *plStack_58;
  char cStack_49;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf2f5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5ae0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010bf52380(&lStack_60,param_1);
  lStack_40 = 0;
  if (plStack_58 != (long *)0x0) {
    plVar7 = plStack_58;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lStack_40 = lStack_60;
      lVar9 = lStack_60;
    }
    plStack_38 = plVar7;
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lVar9 != 0) {
      uVar5 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
      func_0x000107c31940(&lStack_60,uVar5);
      FUN_10a21dc08(&plStack_48,lVar9,&lStack_60);
      if (plStack_48 != (long *)0x0) {
        puVar1 = (ulong *)(plStack_48 + 1);
        do {
          uVar8 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar8 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar8 & 0x1fffffffc) == 4) {
          do {
            uVar8 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar8 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar8 - 1 == 0) {
            (**(code **)(*plStack_48 + 8))();
          }
        }
      }
      plVar7 = plStack_38;
      if (cStack_49 < '\0') {
        __ZdlPv(lStack_60);
        plVar7 = plStack_38;
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ada3cfc; end: 10ada3d03; -[LSALensComponent clearUnusedEffects] */

void FUN_10ada3cfc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3c4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_clearUnusedLensesWithCompletion__1125acad0,0)
  ;
  return;
}



/* Entry: 10ada3d04; end: 10ada3ebb; -[LSALensComponent setPersistentStore:lensId:completion:] */

void FUN_10ada3d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10ada3ebc;
  puStack_80 = &UNK_110896e48;
  uStack_78 = param_1;
  _objc_retain(param_4);
  uStack_70 = param_4;
  _objc_retain(param_3);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10ada40bc;
  puStack_a8 = &UNK_110c72a10;
  uStack_68 = param_3;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  func_0x00010c0f91a0(uVar2,param_2,puVar3,&puStack_98,&puStack_c0);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_a0);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada3ebc; end: 10ada40bb;  */

void FUN_10ada3ebc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar9 = 0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    plStack_58 = (long *)0x0;
    plStack_50 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_78);
    plStack_58 = (long *)0x0;
    plStack_50 = (long *)0x0;
    if (plStack_70 != (long *)0x0) {
      plVar5 = plStack_70;
      __ZNSt3__119__shared_weak_count4lockEv();
      plVar4 = plStack_78;
      plStack_50 = plVar5;
      if (plVar5 != (long *)0x0) {
        plStack_58 = plStack_78;
        lVar9 = 0;
        if (plStack_78 != (long *)0x0) {
          plStack_68 = plStack_78;
          plVar1 = plVar5 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          _objc_retainAutorelease(uVar6);
          func_0x00010bdc3520();
          func_0x000107c31940(&uStack_48,uVar6);
          lVar9 = *plVar4 + 0x178;
          FUN_10ad3f994(lVar9,&uStack_48);
          if (uStack_38._7_1_ < '\0') {
            __ZdlPv(uStack_48);
          }
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        goto LAB_10ada3fa4;
      }
    }
    lVar9 = 0;
  }
LAB_10ada3fa4:
  plVar4 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar5 = plStack_50 + 1;
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plStack_70 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar9 != 0) {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x108) + 0x8a8);
    if (lVar9 != 0) {
      uVar7 = *(ulong *)(param_1 + 0x30);
      func_0x00010c08fa60();
      lVar8 = *(long *)(param_1 + 0x30);
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      if ((lVar8 != 0) && ((uVar7 & 0xffffffff) != 0)) {
        func_0x000109d386d4(&uStack_48,lVar8,lVar8 + (uVar7 & 0xffffffff));
      }
      FUN_10a5a1898(lVar9,&uStack_48);
      if (uStack_38 < 0) {
        __ZdlPv(uStack_48);
      }
    }
  }
  return;
}



/* Entry: 10ada40bc; end: 10ada410f;  */

void FUN_10ada40bc(long param_1,undefined8 param_2)

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



/* Entry: 10ada4110; end: 10ada42cb; +[LSALensComponent getLensStatisticsWithHost:] */

void FUN_10ada4110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined8 uStack_4e4;
  undefined1 auStack_4d8 [1176];
  
  FUN_10a5adb20(auStack_4d8,param_3);
  ppuStack_5f8 = &PTR_DAT_110b1a818;
  uStack_5f0 = 0;
  uStack_4e4 = 0;
  uStack_4e8 = 0;
  uStack_5e0 = 0;
  uStack_5e8 = 0;
  uStack_5d0 = 0;
  uStack_5d8 = 0;
  uStack_5c0 = 0;
  uStack_5c8 = 0;
  uStack_5b0 = 0;
  uStack_5b8 = 0;
  uStack_5a0 = 0;
  uStack_5a8 = 0;
  uStack_590 = 0;
  uStack_598 = 0;
  uStack_580 = 0;
  uStack_588 = 0;
  uStack_570 = 0;
  uStack_578 = 0;
  uStack_560 = 0;
  uStack_568 = 0;
  uStack_550 = 0;
  uStack_558 = 0;
  uStack_540 = 0;
  uStack_548 = 0;
  uStack_530 = 0;
  uStack_538 = 0;
  uStack_520 = 0;
  uStack_528 = 0;
  uStack_510 = 0;
  uStack_518 = 0;
  uStack_500 = 0;
  uStack_508 = 0;
  uStack_4f0 = 0;
  uStack_4ec = 0;
  uStack_4f8 = 0;
  FUN_10ad676e4(auStack_4d8,&ppuStack_5f8);
  pppuVar1 = &ppuStack_5f8;
  func_0x0001098d6bcc(pppuVar1);
  lVar5 = (long)(int)pppuVar1;
  _malloc(lVar5);
  func_0x00010b4d1758(&ppuStack_5f8,lVar5,pppuVar1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c25d8e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126de150;
  _objc_alloc(PTR_PTR_1126de150);
  func_0x00010c024260();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001098d62b8(&ppuStack_5f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10ada42cc; end: 10ada44a3; -[LSALensComponent getLensStatistics:] */

void FUN_10ada42cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10ada44a4;
  uStack_40 = 0x10ada44b4;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_38 = puVar1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  lVar2 = puStack_58[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = puStack_58[5];
    func_0x00010bf51e00(uVar3);
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10ada44a4; end: 10ada44bb;  */

void FUN_10ada44a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10ada44bc; end: 10ada4637;  */

void FUN_10ada44bc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    plStack_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_68);
    if (plStack_60 != (long *)0x0) {
      plVar4 = plStack_60;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 != (long *)0x0) {
        plStack_40 = plStack_68;
        if (plStack_68 == (long *)0x0) {
          lStack_58 = 0;
          lStack_50 = 0;
          uStack_48 = 0;
        }
        else {
          FUN_10ad3f774(&lStack_58,*plStack_68 + 0x178);
        }
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        goto LAB_10ada4528;
      }
    }
  }
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
LAB_10ada4528:
  if (plStack_60 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_50 != lStack_58) {
    uVar7 = 0;
    do {
      puVar5 = PTR_PTR_1126db508;
      func_0x00010bfc7060(PTR_PTR_1126db508,param_2,*(undefined8 *)(lStack_58 + uVar7 * 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,
                          puVar5);
      _objc_release(puVar5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(lStack_50 - lStack_58 >> 3));
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10ada4638; end: 10ada468b;  */

void FUN_10ada4638(long param_1,undefined8 param_2)

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



/* Entry: 10ada468c; end: 10ada4863; -[LSALensComponent getLensTrace:] */

void FUN_10ada468c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10ada44a4;
  uStack_40 = 0x10ada44b4;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puStack_38 = puVar1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010c0f9140(param_1);
  _objc_release(puVar1);
  _objc_release(param_1);
  lVar2 = puStack_58[5];
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = puStack_58[5];
    func_0x00010bf51e00(uVar3);
  }
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10ada4864; end: 10ada49db;  */

void FUN_10ada4864(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    plStack_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_68);
    if (plStack_60 != (long *)0x0) {
      plVar4 = plStack_60;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 != (long *)0x0) {
        plStack_40 = plStack_68;
        if (plStack_68 == (long *)0x0) {
          lStack_58 = 0;
          lStack_50 = 0;
          uStack_48 = 0;
        }
        else {
          FUN_10ad3f774(&lStack_58,*plStack_68 + 0x178);
        }
        plVar1 = plVar4 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
        goto LAB_10ada48d0;
      }
    }
  }
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
LAB_10ada48d0:
  if (plStack_60 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_50 != lStack_58) {
    uVar7 = 0;
    do {
      puVar5 = PTR_PTR_1126de158;
      _objc_alloc(PTR_PTR_1126de158);
      func_0x00010c01aa00();
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),param_2,
                          puVar5);
      _objc_release(puVar5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(lStack_50 - lStack_58 >> 3));
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10ada49dc; end: 10ada4a2f;  */

void FUN_10ada49dc(long param_1,undefined8 param_2)

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



/* Entry: 10ada4a30; end: 10ada4ba7; -[LSALensComponent setLensTraceConfig:completion:] */

void FUN_10ada4a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10ada4ba8;
  puStack_68 = &UNK_110883780;
  uStack_60 = param_1;
  _objc_retain(param_3);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10ada52bc;
  puStack_90 = &UNK_110c72a10;
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_88 = param_4;
  func_0x00010c0f9140(uVar2,param_2,puVar3,&puStack_80,&puStack_a8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada4ba8; end: 10ada51d3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada4ba8(long *******param_1,long *******param_2,long ****param_3)

{
  long *plVar1;
  long *****ppppplVar2;
  long *******ppppppplVar3;
  char cVar4;
  bool bVar5;
  undefined8 *******pppppppuVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long ******pppppplVar9;
  long ******pppppplVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long ******pppppplVar14;
  undefined8 *puVar15;
  long lVar16;
  long *******unaff_x20;
  long *******unaff_x22;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  long *******ppppppplStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *puStack_108;
  byte bStack_f9;
  long *******ppppppplStack_f8;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  char cStack_e1;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  undefined8 *puStack_c8;
  long *******ppppppplStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a0;
  long *******appppppplStack_98 [2];
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppplStack_188 = (long *******)0x0;
  if (param_1[4] != (long ******)0x0) {
    func_0x00010bf52380(&ppppppplStack_e0);
    appppppplStack_98[0] = (long *******)0x0;
    ppppppplStack_188 = ppppppplStack_d8;
    if (ppppppplStack_d8 != (long *******)0x0) {
      ppppppplVar7 = ppppppplStack_d8;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (ppppppplVar7 == (long *******)0x0) {
        unaff_x20 = (long *******)0x0;
      }
      else {
        appppppplStack_98[0] = ppppppplStack_e0;
        unaff_x20 = ppppppplStack_e0;
      }
      ppppppplVar8 = ppppppplStack_d8;
      if (ppppppplStack_d8 != (long *******)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (unaff_x20 != (long *******)0x0) {
        pppppplVar9 = param_1[5];
        func_0x00010c247780();
        if (pppppplVar9 == (long ******)0x0) {
          pppppplVar9 = param_1[5];
          func_0x00010c09a460();
          if (pppppplVar9 == (long ******)0x0) {
            puVar15 = (undefined8 *)((long)param_1[4] + (long)_DAT_1127843cc);
            if (*(char *)(puVar15 + 1) == '\x01') {
              param_3 = (long ****)*puVar15;
              *(undefined1 *)(puVar15 + 1) = 0;
            }
            else {
              param_3 = (long ****)0x0;
            }
            ppppppplStack_e0 = (long *******)((ulong)ppppppplStack_e0 & 0xffffffffffffff00);
            uStack_a0 = 0;
            param_2 = (long *******)&ppppppplStack_e0;
            FUN_10ada51d4(unaff_x20);
            ppppppplVar8 = (long *******)&ppppppplStack_e0;
            func_0x00010ada8d30();
            goto joined_r0x00010ada4fe4;
          }
        }
        puVar15 = (undefined8 *)((long)param_1[4] + (long)_DAT_1127843cc);
        if ((*(byte *)(puVar15 + 1) & 1) == 0) {
          *puVar15 = (*unaff_x20)[0x30][0x26];
          *(undefined1 *)(puVar15 + 1) = 1;
        }
        ppppppplStack_f8 = (long *******)0x0;
        uStack_f0 = 0;
        uStack_e9 = 0;
        uStack_e8 = 0;
        cStack_e1 = '\0';
        pppppplVar9 = param_1[5];
        func_0x00010bfe66e0();
        if ((int)pppppplVar9 == 0) {
          pppppplVar9 = param_1[5];
          func_0x00010bf69b60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (pppppplVar9 != (long ******)0x0) {
            pppppplVar10 = param_1[5];
            func_0x00010bf69b60(pppppplVar10);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            pppppplVar9 = pppppplVar10;
            func_0x00010bdc3520(pppppplVar10);
            func_0x000107c2c4dc(&ppppppplStack_f8,pppppplVar9);
            _objc_release(pppppplVar10);
          }
        }
        else {
          func_0x00010ad0321c();
          ppppplVar2 = pppppplVar9[1];
          if (-1 < (char)*(byte *)((long)pppppplVar9 + 0x17)) {
            ppppplVar2 = (long *****)(ulong)*(byte *)((long)pppppplVar9 + 0x17);
          }
          func_0x000104c4f768(&ppppppplStack_150,(long)ppppplVar2 + 0x13,&pppppppuStack_110);
          ppppppplVar8 = ppppppplStack_150;
          if (-1 < uStack_140) {
            ppppppplVar8 = (long *******)&ppppppplStack_150;
          }
          if (ppppplVar2 != (long *****)0x0) {
            pppppplVar10 = (long ******)*pppppplVar9;
            if (-1 < *(char *)((long)pppppplVar9 + 0x17)) {
              pppppplVar10 = pppppplVar9;
            }
            _memmove(ppppppplVar8,pppppplVar10,ppppplVar2);
          }
          puVar15 = (undefined8 *)((long)ppppppplVar8 + (long)ppppplVar2);
          puVar15[1] = 0x74617263735f6572;
          *puVar15 = 0x6f635f736e656c2f;
          *(undefined4 *)((long)puVar15 + 0xf) = 0x5f686374;
          *(undefined1 *)((long)puVar15 + 0x13) = 0;
          __ZNSt3__16chrono12steady_clock3nowEv();
          __ZNSt3__19to_stringEx(&pppppppuStack_110);
          pppppppuVar6 = pppppppuStack_110;
          if (-1 < (char)bStack_f9) {
            puStack_108 = (undefined8 *)(ulong)bStack_f9;
            pppppppuVar6 = &pppppppuStack_110;
          }
          ppppppplVar8 = (long *******)&ppppppplStack_150;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar8,pppppppuVar6,puStack_108);
          ppppppplStack_d8 = (long *******)ppppppplVar8[1];
          ppppppplStack_e0 = (long *******)*ppppppplVar8;
          pppppplStack_d0 = ppppppplVar8[2];
          ppppppplVar8[1] = (long ******)0x0;
          ppppppplVar8[2] = (long ******)0x0;
          *ppppppplVar8 = (long ******)0x0;
          ppppppplVar8 = (long *******)&ppppppplStack_e0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar8,&UNK_10f6ad33f,8);
          ppppppplVar3 = (long *******)*ppppppplVar8;
          uStack_88 = SUB87(ppppppplVar8[1],0);
          uStack_81 = (undefined1)*(undefined8 *)((long)ppppppplVar8 + 0xf);
          uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppppppplVar8 + 0xf) >> 8);
          cVar4 = *(char *)((long)ppppppplVar8 + 0x17);
          ppppppplVar8[1] = (long ******)0x0;
          ppppppplVar8[2] = (long ******)0x0;
          *ppppppplVar8 = (long ******)0x0;
          if (cStack_e1 < '\0') {
            __ZdlPv(ppppppplStack_f8);
          }
          uStack_f0 = uStack_88;
          uStack_e9 = uStack_81;
          uStack_e8 = uStack_80;
          ppppppplStack_f8 = ppppppplVar3;
          cStack_e1 = cVar4;
          if ((long)pppppplStack_d0 < 0) {
            __ZdlPv(ppppppplStack_e0);
          }
          if ((char)bStack_f9 < '\0') {
            __ZdlPv(pppppppuStack_110);
          }
          if (uStack_140._7_1_ < '\0') {
            __ZdlPv(ppppppplStack_150);
          }
        }
        pppppplVar10 = param_1[5];
        func_0x00010c2777e0();
        _objc_retainAutoreleasedReturnValue();
        pppppplVar9 = pppppplVar10;
        func_0x00010c277760();
        _objc_release(pppppplVar10);
        pppppplVar11 = param_1[5];
        func_0x00010c2777e0();
        _objc_retainAutoreleasedReturnValue();
        pppppplVar10 = pppppplVar11;
        func_0x00010c2777c0();
        _objc_release(pppppplVar11);
        pppppplVar12 = param_1[5];
        func_0x00010c2777e0();
        _objc_retainAutoreleasedReturnValue();
        pppppplVar11 = pppppplVar12;
        func_0x00010c277780();
        _objc_release(pppppplVar12);
        pppppplVar13 = param_1[5];
        func_0x00010c2777e0();
        _objc_retainAutoreleasedReturnValue();
        pppppplVar12 = pppppplVar13;
        func_0x00010c277740();
        _objc_release(pppppplVar13);
        pppppplVar14 = param_1[5];
        func_0x00010c2777e0();
        _objc_retainAutoreleasedReturnValue();
        pppppplVar13 = pppppplVar14;
        func_0x00010c2777a0();
        _objc_release(pppppplVar14);
        puVar15 = (undefined8 *)0x48;
        __Znwm();
        puVar15[1] = 0;
        puVar15[2] = 0;
        *puVar15 = &PTR_FUN_110c73778;
        pppppplVar14 = (long ******)(puVar15 + 3);
        *pppppplVar14 = (long *****)&PTR_DAT_110c70e08;
        puVar15[4] = pppppplVar9;
        puVar15[5] = pppppplVar10;
        puVar15[6] = pppppplVar11;
        puVar15[7] = pppppplVar12;
        puVar15[8] = pppppplVar13;
        unaff_x22 = (long *******)param_1[5];
        pppppppuStack_110 = (undefined8 *******)pppppplVar14;
        puStack_108 = puVar15;
        func_0x00010c247780();
        param_1 = (long *******)param_1[5];
        func_0x00010c09a460();
        if (cStack_e1 < '\0') {
          func_0x000107c3192c(&ppppppplStack_170,ppppppplStack_f8,CONCAT17(uStack_e9,uStack_f0));
        }
        else {
          uStack_168 = CONCAT17(uStack_e9,uStack_f0);
          ppppppplStack_170 = ppppppplStack_f8;
          uStack_160 = CONCAT17(cStack_e1,uStack_e8);
        }
        uStack_b0 = uStack_160;
        uStack_b8 = uStack_168;
        ppppppplStack_c0 = ppppppplStack_170;
        pppppppuStack_110 = (undefined8 *******)0x0;
        puStack_108 = (undefined8 *)0x0;
        uStack_128 = 0;
        ppppppplStack_170 = (long *******)0x0;
        uStack_168 = 0;
        uStack_160 = 0;
        uStack_118 = 100;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_130 = 0;
        uStack_120 = 0;
        uStack_a8 = 100;
        uStack_a0 = 1;
        param_2 = (long *******)&ppppppplStack_e0;
        param_3 = (long ****)0x1;
        ppppppplStack_150 = unaff_x22;
        ppppppplStack_148 = param_1;
        ppppppplStack_e0 = unaff_x22;
        ppppppplStack_d8 = param_1;
        pppppplStack_d0 = pppppplVar14;
        puStack_c8 = puVar15;
        FUN_10ada51d4(unaff_x20);
        ppppppplVar8 = (long *******)&ppppppplStack_e0;
        func_0x00010ada8d30();
        if (cStack_e1 < '\0') {
          ppppppplVar8 = ppppppplStack_f8;
          __ZdlPv();
        }
      }
joined_r0x00010ada4fe4:
      ppppppplStack_188 = ppppppplVar8;
      if (ppppppplVar7 != (long *******)0x0) {
        ppppppplVar8 = ppppppplVar7 + 1;
        do {
          pppppplVar9 = *ppppppplVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppplVar8,0x10);
          if (bVar5) {
            *ppppppplVar8 = (long ******)((long)pppppplVar9 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppplVar9 == (long ******)0x0) {
          (*(code *)(*ppppppplVar7)[2])(ppppppplVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppplStack_188 = ppppppplVar7;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ada8d30(&ppppppplStack_e0);
  FUN_10ad8b754(appppppplStack_98);
  ppppppplVar7 = ppppppplStack_188;
  __Unwind_Resume();
  pcStack_178 = FUN_10ada51d4;
  ppppppplStack_1a0 = unaff_x22;
  ppppppplStack_198 = param_1;
  ppppppplStack_190 = unaff_x20;
  puStack_180 = &stack0xfffffffffffffff0;
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_10ad6816c(&uStack_1b0,0);
    FUN_10ad44d9c(*ppppppplVar7 + 0x2f,&uStack_1b0);
    if (plStack_1a8 == (long *)0x0) goto LAB_10ada5284;
    plVar1 = plStack_1a8 + 1;
    do {
      lVar16 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    uStack_1b0 = 0;
    plStack_1a8 = (long *)0x0;
    FUN_10ad44d9c(*ppppppplVar7 + 0x2f,&uStack_1b0);
    if (plStack_1a8 == (long *)0x0) goto LAB_10ada5284;
    plVar1 = plStack_1a8 + 1;
    do {
      lVar16 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar1 = plStack_1a8;
  if (lVar16 == 0) {
    (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
LAB_10ada5284:
  (*ppppppplVar7)[0x30][0x26] = param_3;
  return;
}



/* Entry: 10ada51d4; end: 10ada52bb;  */

void FUN_10ada51d4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_10ad6816c(&uStack_40,0);
    FUN_10ad44d9c(*param_1 + 0x178,&uStack_40);
    if (plStack_38 == (long *)0x0) goto LAB_10ada5284;
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
    FUN_10ad44d9c(*param_1 + 0x178,&uStack_40);
    if (plStack_38 == (long *)0x0) goto LAB_10ada5284;
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar1 = plStack_38;
  if (lVar4 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
  }
LAB_10ada5284:
  *(undefined8 *)(*(long *)(*param_1 + 0x180) + 0x130) = param_3;
  return;
}



/* Entry: 10ada52bc; end: 10ada530f;  */

void FUN_10ada52bc(long param_1,undefined8 param_2)

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



/* Entry: 10ada5310; end: 10ada53a7; -[LSALensComponent setLensMetricsCollectionEnabled:] */

void FUN_10ada5310(undefined8 param_1)

{
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f92c0();
  _objc_release(param_1);
  return;
}



/* Entry: 10ada53a8; end: 10ada5533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada53a8(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long *plStack_40;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf52380(&plStack_d0);
    plStack_40 = (long *)0x0;
    if (plStack_c8 != (long *)0x0) {
      plVar4 = plStack_c8;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plStack_40 = plStack_d0;
        plVar7 = plStack_d0;
      }
      if (plStack_c8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (plVar7 != (long *)0x0) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843d0);
        if (*(char *)(param_1 + 0x28) == '\x01') {
          if ((*(byte *)(puVar1 + 1) & 1) == 0) {
            *puVar1 = *(undefined8 *)(*(long *)(*plVar7 + 0x180) + 0x130);
            *(undefined1 *)(puVar1 + 1) = 1;
          }
          uStack_78 = 1;
          uStack_80 = 0xfffffff0;
          uStack_48 = 100;
          plStack_c8 = (long *)0x1;
          plStack_d0 = (long *)0xfffffff0;
          uStack_c0 = 0;
          uStack_b8 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_b0 = 0;
          uStack_58 = 0;
          uStack_50 = 0;
          uStack_60 = 0;
          uStack_98 = 100;
          uStack_90 = 1;
          FUN_10ada51d4(plVar7,&plStack_d0,0);
          func_0x00010ada8d30(&plStack_d0);
        }
        else {
          if (*(byte *)(puVar1 + 1) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar1;
            *(undefined1 *)(puVar1 + 1) = 0;
          }
          *(undefined8 *)(*(long *)(*plVar7 + 0x180) + 0x130) = uVar5;
        }
      }
      if (plVar4 != (long *)0x0) {
        plVar7 = plVar4 + 1;
        do {
          lVar6 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
  }
  return;
}



/* Entry: 10ada5534; end: 10ada560b; -[LSALensComponent retrieveCurrentLensMemoryUsage:] */

void FUN_10ada5534(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ada560c;
  puStack_48 = &UNK_1107d0af0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00010c0f92c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada560c; end: 10ada57cf;  */

void FUN_10ada560c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plStack_50;
  long *plStack_48;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10ada572c;
    plVar4 = plStack_48;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      if (plStack_50 == (long *)0x0) {
        lVar8 = 0;
      }
      else {
        plVar1 = plVar4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long *)(*(long *)(*plStack_50 + 0x180) + 0xb8) == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(*(long *)(*(long *)(*plStack_50 + 0x180) + 0xa8) + 0x28);
        }
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar8 != 0) {
    FUN_10a1dfc78(*(undefined8 *)(*(long *)(lVar8 + 0x108) + 0x828),0);
  }
LAB_10ada572c:
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf047a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar7);
  func_0x00010c0f88c0(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar7);
  return;
}



/* Entry: 10ada57d0; end: 10ada57ef;  */

void FUN_10ada57d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010ada57e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,(long)*(double *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10ada57f0; end: 10ada57ff; -[LSALensComponent addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada57f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c0),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10ada5800; end: 10ada580f; -[LSALensComponent removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada5800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10ada5810; end: 10ada61db; -[LSALensComponent setCoreManager:announcer:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada5810(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_68 = (long *)param_3[1];
  uStack_70 = *param_3;
  if (param_3[1] != 0) {
    plVar10 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_78 = PTR_PTR_112701390;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_70,param_4
                      ,param_5);
  plVar10 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  uVar4 = param_5;
  func_0x00010bf8f580();
  if ((int)uVar4 != 0) {
    lVar11 = (long)_DAT_1127843bc;
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    func_0x00010c14f940(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar6 = puVar5 + 3;
    *puVar5 = &PTR_DAT_110c737c8;
    FUN_10ad9be48(puVar6,uVar4,lVar7);
    puVar2 = (undefined8 *)(param_1 + _DAT_1127843d4);
    plVar10 = (long *)puVar2[1];
    *puVar2 = puVar6;
    puVar2[1] = puVar5;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    _objc_release(lVar7);
    _objc_release(uVar4);
    uVar4 = *param_3;
    puStack_88 = (undefined8 *)puVar2[1];
    puStack_90 = (undefined8 *)*puVar2;
    if (puVar2[1] != 0) {
      plVar10 = (long *)(puVar2[1] + 0x10);
      do {
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar9) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a2249d4(uVar4,&puStack_90);
    if (puStack_88 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar10 = (long *)*param_3;
    lVar7 = *(long *)(param_1 + lVar11);
    func_0x00010bf10120();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      puStack_90 = (undefined8 *)0x0;
      puStack_88 = (undefined8 *)0x0;
      lVar11 = *(long *)(*(long *)(*plVar10 + 0x180) + 0x2d8);
    }
    else {
      func_0x00010c2481c0(&puStack_90,lVar7);
      lVar11 = *(long *)(*(long *)(*plVar10 + 0x180) + 0x2d8);
      if (puStack_88 != (undefined8 *)0x0) {
        plVar10 = (long *)((long)puStack_88 + 0x10);
        do {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    lVar8 = *(long *)(lVar11 + 0x10);
    *(undefined8 **)(lVar11 + 8) = puStack_90;
    *(undefined8 **)(lVar11 + 0x10) = puStack_88;
    if (lVar8 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (puStack_88 != (undefined8 *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    _objc_release(lVar7);
  }
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c73818;
  puVar6 = puVar5 + 3;
  *puVar6 = &PTR_FUN_110c731e8;
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843d8);
  plVar10 = (long *)puVar2[1];
  *puVar2 = puVar6;
  puVar2[1] = puVar5;
  if (plVar10 == (long *)0x0) {
    uVar4 = *param_3;
    puStack_90 = puVar6;
    puStack_88 = puVar5;
LAB_10ada5aec:
    plVar10 = puVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    uVar4 = *param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_88 = (undefined8 *)puVar2[1];
    puStack_90 = (undefined8 *)*puVar2;
    if (puVar5 != (undefined8 *)0x0) goto LAB_10ada5aec;
  }
  FUN_10a224a50(uVar4,&puStack_90);
  if (puStack_88 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c73868;
  puVar6 = puVar5 + 3;
  *puVar6 = &PTR_DAT_110c73ae8;
  _objc_initWeak(puVar5 + 4,param_1);
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843dc);
  plVar10 = (long *)puVar2[1];
  *puVar2 = puVar6;
  puVar2[1] = puVar5;
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)*param_3;
    puStack_90 = puVar6;
    puStack_88 = puVar5;
LAB_10ada5bbc:
    plVar1 = puVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar9 = false;
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    plVar10 = (long *)*param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_88 = (undefined8 *)puVar2[1];
    puStack_90 = (undefined8 *)*puVar2;
    if (puVar5 != (undefined8 *)0x0) goto LAB_10ada5bbc;
    bVar9 = true;
  }
  FUN_10ad3fb8c(*plVar10 + 0x178,&puStack_90);
  if (!bVar9) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar5);
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c738b8;
  puVar6 = puVar5 + 3;
  *puVar6 = &PTR_FUN_110c73690;
  _objc_initWeak(puVar5 + 4,param_1);
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843e0);
  plVar10 = (long *)puVar2[1];
  *puVar2 = puVar6;
  puVar2[1] = puVar5;
  if (plVar10 == (long *)0x0) {
    uVar4 = *param_3;
    puStack_90 = puVar6;
    puStack_88 = puVar5;
LAB_10ada5c90:
    plVar10 = puVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    uVar4 = *param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_88 = (undefined8 *)puVar2[1];
    puStack_90 = (undefined8 *)*puVar2;
    if (puVar5 != (undefined8 *)0x0) goto LAB_10ada5c90;
  }
  FUN_10a22649c(uVar4,&puStack_90);
  if (puStack_88 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c73908;
  puVar6 = puVar5 + 3;
  *puVar6 = &PTR_DAT_110c73640;
  _objc_initWeak(puVar5 + 4,param_1);
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843e4);
  plVar10 = (long *)puVar2[1];
  *puVar2 = puVar6;
  puVar2[1] = puVar5;
  if (plVar10 == (long *)0x0) {
    uVar4 = *param_3;
    puStack_90 = puVar6;
    puStack_88 = puVar5;
LAB_10ada5d58:
    plVar10 = puVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    uVar4 = *param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_88 = (undefined8 *)puVar2[1];
    puStack_90 = (undefined8 *)*puVar2;
    if (puVar5 != (undefined8 *)0x0) goto LAB_10ada5d58;
  }
  FUN_10a226c1c(uVar4,&puStack_90);
  if (puStack_88 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar5 = (undefined8 *)0x40;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar6 = puVar5 + 3;
  *puVar6 = &PTR_FUN_110c73548;
  *puVar5 = &PTR_DAT_110c73958;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[4] = puVar5 + 5;
  _objc_initWeak(puVar5 + 7,param_1);
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843e8);
  plVar10 = (long *)puVar2[1];
  *puVar2 = puVar6;
  puVar2[1] = puVar5;
  if (plVar10 == (long *)0x0) {
    uVar4 = *param_3;
    puStack_90 = puVar6;
    puStack_88 = puVar5;
LAB_10ada5e30:
    plVar10 = puVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    uVar4 = *param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_88 = (undefined8 *)puVar2[1];
    puStack_90 = (undefined8 *)*puVar2;
    if (puVar5 != (undefined8 *)0x0) goto LAB_10ada5e30;
  }
  FUN_10a226c98(uVar4,&puStack_90);
  if (puStack_88 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c739a8;
  puVar6 = puVar5 + 3;
  *puVar6 = &PTR_FUN_110c73b28;
  _objc_initWeak(puVar5 + 4,param_1);
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843ec);
  plVar10 = (long *)puVar2[1];
  *puVar2 = puVar6;
  puVar2[1] = puVar5;
  if (plVar10 == (long *)0x0) {
    uVar4 = *param_3;
    puStack_90 = puVar6;
    puStack_88 = puVar5;
LAB_10ada5ef8:
    plVar10 = puVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    uVar4 = *param_3;
    puVar5 = (undefined8 *)puVar2[1];
    puStack_88 = (undefined8 *)puVar2[1];
    puStack_90 = (undefined8 *)*puVar2;
    if (puVar5 != (undefined8 *)0x0) goto LAB_10ada5ef8;
  }
  FUN_10a227444(uVar4,&puStack_90);
  if (puStack_88 != (undefined8 *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar5 = puVar6 + 3;
  *puVar6 = &PTR_DAT_110c739f8;
  FUN_10ad53ddc();
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843f0);
  plVar10 = (long *)puVar2[1];
  *puVar2 = puVar5;
  puVar2[1] = puVar6;
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)*param_3;
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
    plVar10 = (long *)*param_3;
    puVar5 = (undefined8 *)*puVar2;
    puVar6 = (undefined8 *)puVar2[1];
    if (puVar6 == (undefined8 *)0x0) {
      lVar7 = *(long *)(*plVar10 + 0x180);
      bVar9 = true;
      goto LAB_10ada5fd8;
    }
  }
  plVar1 = puVar6 + 2;
  do {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar7 = *(long *)(*plVar10 + 0x180);
  do {
    cVar3 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar9) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  bVar9 = false;
LAB_10ada5fd8:
  *(undefined8 **)(lVar7 + 0x400) = puVar5;
  lVar11 = *(long *)(lVar7 + 0x408);
  *(undefined8 **)(lVar7 + 0x408) = puVar6;
  if (lVar11 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (!bVar9) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar6);
  }
  plVar10 = (long *)*param_3;
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843f4);
  lVar7 = puVar2[1];
  uVar12 = puVar2[1];
  uVar4 = *puVar2;
  if (lVar7 == 0) {
    lVar11 = *(long *)(*plVar10 + 0x180);
  }
  else {
    plVar1 = (long *)(lVar7 + 0x10);
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar11 = *(long *)(*plVar10 + 0x180);
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar8 = *(long *)(lVar11 + 0x2c0);
  *(undefined8 *)(lVar11 + 0x2c0) = uVar12;
  *(undefined8 *)(lVar11 + 0x2b8) = uVar4;
  if (lVar8 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar7 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127843c4);
  plVar10 = (long *)param_3[1];
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010c184180(uVar4);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10ada61dc; end: 10ada63df; -[LSALensComponent willTurnOnLensWithId:] */

void FUN_10ada61dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar2 = param_2;
  func_0x00010c0f98c0();
  if ((int)uVar2 == 0) {
    _CACurrentMediaTime();
    uVar2 = param_2;
    func_0x00010c0f98a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10ada63f4;
    puStack_a0 = &UNK_110896ea8;
    uStack_98 = param_2;
    _objc_retain(param_4);
    uStack_90 = param_4;
    uStack_88 = param_1;
    func_0x00010c0f7fc0(uVar2,param_3,&puStack_b8);
    _objc_release(uVar2);
    uVar2 = param_2;
    func_0x00010bf047a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10ada645c;
    puStack_d0 = &UNK_110883780;
    uStack_c8 = param_2;
    _objc_retain(param_4);
    uStack_c0 = param_4;
    func_0x00010c0f88c0(uVar2,param_3,&puStack_e8);
    puVar3 = &uStack_90;
    _objc_release(uVar2);
    uVar2 = uStack_c0;
  }
  else {
    uVar2 = param_2;
    func_0x00010bf047a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10ada63e0;
    puStack_68 = &UNK_110883780;
    uStack_60 = param_2;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010c0f88c0(uVar2,param_3,&puStack_80);
    puVar3 = &uStack_58;
  }
  _objc_release(uVar2);
  _objc_release(*puVar3);
  _objc_release(param_4);
  return;
}



/* Entry: 10ada63e0; end: 10ada63f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada63e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_willTurnOnLensWith_1126020c0,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ada63f4; end: 10ada645b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada63f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(*(undefined8 *)(param_1 + 0x30),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c8),param_2,
                      puVar1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ada645c; end: 10ada646f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada645c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_willTurnOnLensWith_1126020c0,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ada6470; end: 10ada655f; -[LSALensComponent didTurnOnEffect:lensId:] */

void FUN_10ada6470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bfcaf20();
  uVar2 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10ada6560;
  puStack_50 = &UNK_110896ea8;
  uStack_48 = param_1;
  _objc_retain(param_4);
  uStack_40 = param_4;
  uStack_38 = uVar1;
  func_0x00010c0f88c0(uVar2,param_2,&puStack_68);
  _objc_release(uVar2);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10ada6560; end: 10ada657b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada6560(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_didTurnOnLensWithI_112602070,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ada657c; end: 10ada666b; -[LSALensComponent willTurnOffEffect:lensId:] */

void FUN_10ada657c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  _objc_opt_class();
  func_0x00010bfcaf20();
  uVar2 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10ada666c;
  puStack_50 = &UNK_110896ea8;
  uStack_48 = param_1;
  _objc_retain(param_4);
  uStack_40 = param_4;
  uStack_38 = uVar1;
  func_0x00010c0f88c0(uVar2,param_2,&puStack_68);
  _objc_release(uVar2);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10ada666c; end: 10ada6687;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada666c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_willTurnOffLensWit_1126020b8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ada6688; end: 10ada68af; -[LSALensComponent didTurnOffEffect:lensId:] */

void FUN_10ada6688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar2 = param_1;
  func_0x00010c0f98c0();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    _objc_opt_class();
    func_0x00010bfcaf20();
    uVar3 = param_1;
    func_0x00010bf047a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x10ada68cc;
    puStack_a8 = &UNK_110896ea8;
    uStack_a0 = param_1;
    _objc_retain(param_4);
    uStack_98 = param_4;
    uStack_90 = uVar2;
    func_0x00010c0f88c0(uVar3,param_2,&puStack_c0);
    _objc_release(uVar3);
    uVar2 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x10ada68e8;
    puStack_d8 = &UNK_110883780;
    uStack_d0 = param_1;
    _objc_retain(param_4);
    uStack_c8 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_f0);
    puVar4 = &uStack_98;
    _objc_release(uVar2);
    uVar2 = uStack_c8;
  }
  else {
    uVar3 = param_1;
    _objc_opt_class();
    func_0x00010bfcaf20();
    uVar2 = param_1;
    func_0x00010bf047a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10ada68b0;
    puStack_70 = &UNK_110896ea8;
    uStack_68 = param_1;
    _objc_retain(param_4);
    uStack_60 = param_4;
    uStack_58 = uVar3;
    func_0x00010c0f88c0(uVar2,param_2,&puStack_88);
    puVar4 = &uStack_60;
  }
  _objc_release(uVar2);
  _objc_release(*puVar4);
  _objc_release(param_4);
  return;
}



/* Entry: 10ada68b0; end: 10ada68fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada68b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_didTurnOffLensWith_112602068,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ada68fc; end: 10ada6b03; -[LSALensComponent didLoadEffectResources:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada68fc(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_5);
  _CACurrentMediaTime();
  uVar1 = param_2;
  dVar4 = param_1;
  func_0x00010c0f98c0();
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_1127843c8;
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar2);
    if (dVar4 <= 0.0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        uVar2 = param_5;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x00010ae06f08(0,1,&UNK_10f6ad1fc,&UNK_10f6ad348,0x291,&UNK_10f6ad3bc,param_8,param_9,
                            uVar2);
      }
    }
    else {
      dVar4 = (param_1 - dVar4) * 1000.0;
      if ((dVar4 < 0.0) && ((bRam000000011330a9e8 & 1) != 0)) {
        uVar2 = param_5;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x00010ae06f08(0,1,&UNK_10f6ad1fc,&UNK_10f6ad348,0x28d,&UNK_10f6ad37b,param_8,param_9,
                            uVar2,dVar4);
      }
    }
    func_0x00010c12d3e0(*(undefined8 *)(param_2 + lVar3));
  }
  func_0x00010bf047a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c0f88c0(param_2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 10ada6b04; end: 10ada6b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada6b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_didLoadResourcesFo_112602060,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ada6b20; end: 10ada6bf7; -[LSALensComponent firstFrameDidBecomeReady:lensId:] */

void FUN_10ada6b20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10ada6bf8;
  puStack_48 = &UNK_110883780;
  uStack_40 = param_1;
  _objc_retain(param_4);
  uStack_38 = param_4;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 10ada6bf8; end: 10ada6c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada6bf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0919b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_firstFrameDidBecom_112602078,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ada6c0c; end: 10ada6d1b; -[LSALensComponent lensWithId:showHintWithId:] */

void FUN_10ada6c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10ada6d1c;
  puStack_50 = &UNK_110896e48;
  uStack_48 = param_1;
  _objc_retain(param_3);
  uStack_40 = param_3;
  _objc_retain(param_4);
  uStack_38 = param_4;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada6d1c; end: 10ada6d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada6d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_lensId_showHintWit_1126020a8,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ada6d38; end: 10ada6e0f; -[LSALensComponent lensWithIdHideAllHints:] */

void FUN_10ada6d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_10ada6e10;
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



/* Entry: 10ada6e10; end: 10ada6e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada6e10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0919d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_hideAllHintsForLen_112602080,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ada6e24; end: 10ada6f03; -[LSALensComponent lensWithId:performHapticFeedback:] */

void FUN_10ada6e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10ada6f04;
  puStack_50 = &UNK_11089a850;
  uStack_48 = param_1;
  _objc_retain(param_3);
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada6f04; end: 10ada6f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada6f04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  piVar4 = (int *)&UNK_10e512ff0;
  if (iVar1 < 2) {
    piVar3 = (int *)&UNK_10e513000;
  }
  else {
    piVar3 = piVar4;
    piVar4 = (int *)&UNK_10e513010;
  }
  if (iVar1 < 1) {
    piVar4 = piVar3;
  }
  if ((piVar4 != (int *)&UNK_10e513010) && (*piVar4 <= iVar1)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0919f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
               PTR_s_lensComponent_lensId_performHapt_112602088,*(long *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(piVar4 + 2));
    return;
  }
  puVar2 = &UNK_10f61d92d;
  func_0x0001093fd0ac();
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf047a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c0f88c0(puVar2);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada6f84; end: 10ada70a7; -[LSALensComponent lensWithId:performInterfaceAction:interfaceControl:interfaceData:] */

void FUN_10ada6f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10ada70a8;
  puStack_68 = &UNK_110ad78e8;
  uStack_60 = param_1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  uStack_48 = param_4;
  uStack_44 = param_5;
  _objc_retain(param_6);
  uStack_50 = param_6;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_80);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada70a8; end: 10ada71cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada70a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  piVar4 = (int *)&UNK_10e5130a8;
  while( true ) {
    for (; piVar5 = (int *)(&UNK_10e513018 + uVar3 * 0x10), *piVar5 < *(int *)(param_1 + 0x38);
        uVar3 = uVar3 * 2 + 2) {
      piVar5 = piVar4;
      if (3 < uVar3) goto LAB_10ada711c;
    }
    if (3 < uVar3) break;
    uVar3 = uVar3 << 1 | 1;
    piVar4 = piVar5;
  }
LAB_10ada711c:
  if ((piVar5 != (int *)&UNK_10e5130a8) &&
     (*piVar5 <= *(int *)(param_1 + 0x38) && piVar5 != (int *)&UNK_10e5130a8)) {
    uVar3 = 0;
    piVar4 = (int *)&UNK_10e513180;
    while( true ) {
      for (; piVar5 = (int *)(&UNK_10e5130b0 + uVar3 * 0x10), *piVar5 < *(int *)(param_1 + 0x3c);
          uVar3 = uVar3 * 2 + 2) {
        piVar5 = piVar4;
        if (5 < uVar3) goto LAB_10ada7194;
      }
      if (5 < uVar3) break;
      uVar3 = uVar3 << 1 | 1;
      piVar4 = piVar5;
    }
LAB_10ada7194:
    if ((piVar5 != (int *)&UNK_10e513180) &&
       (*piVar5 <= *(int *)(param_1 + 0x3c) && piVar5 != (int *)&UNK_10e513180)) {
                    /* WARNING: Could not recover jumptable at 0x00010c091a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(lVar2 + _DAT_1127843c0),
                 PTR_s_lensComponent_lensId_performInte_112602090);
      return;
    }
  }
  puVar1 = &UNK_10f61d92d;
  func_0x0001093fd0ac();
  _objc_retain(lVar2);
  if (lVar2 == 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6ad1fc,&UNK_10f6ad3f3,0x30e,&UNK_10f6ad42c);
    }
  }
  else {
    func_0x00010c0f98a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    func_0x00010c0f7fc0(puVar1);
    _objc_release(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10ada71cc; end: 10ada72f3; -[LSALensComponent lensWithId:interfaceControl:didShow:] */

void FUN_10ada71cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 == 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6ad1fc,&UNK_10f6ad3f3,0x30e,&UNK_10f6ad42c);
    }
  }
  else {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ada72f4; end: 10ada73ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada72f4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843e8);
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainAutorelease(uVar2);
    func_0x00010bdc3520();
    func_0x000107c31940(auStack_38,uVar2);
    puVar3 = *(undefined **)(param_1 + 0x30);
    FUN_10ada8d74();
    if (puVar3 == &UNK_10e513248) {
      func_0x0001093fd0ac(&UNK_10f61d92d);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ada7390);
      (*pcVar1)();
    }
    FUN_10ad9fd04(lVar4,auStack_38,*(undefined4 *)(puVar3 + 8),*(undefined1 *)(param_1 + 0x38));
    if (cStack_21 < '\0') {
      __ZdlPv(auStack_38[0]);
    }
  }
  return;
}



/* Entry: 10ada73ac; end: 10ada74d3; -[LSALensComponent lensWithId:interfaceControl:didPerformAction:] */

void FUN_10ada73ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 == 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6ad1fc,&UNK_10f6ad446,799,&UNK_10f6ad42c);
    }
  }
  else {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c0f7fc0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ada74d4; end: 10ada770b;  */

void FUN_10ada74d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plStack_50;
  long *plStack_48;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar12 = 0;
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_50);
    if (plStack_48 == (long *)0x0) {
      return;
    }
    plVar11 = plStack_48;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar11 == (long *)0x0) {
      lVar12 = 0;
    }
    else {
      if (plStack_50 == (long *)0x0) {
        lVar12 = 0;
      }
      else {
        plVar1 = plVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long *)(*(long *)(*plStack_50 + 0x180) + 0xb8) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(*(long *)(*(long *)(*plStack_50 + 0x180) + 0xa8) + 0x28);
        }
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar1 = plVar11 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
  }
  if (plStack_48 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar12 != 0) {
    lVar13 = *(long *)(lVar12 + 0xf8);
    plVar11 = (long *)(lVar13 + 0x208);
    lVar5 = *(long *)(param_1 + 0x28);
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    lVar7 = lVar5;
    _strlen();
    if ((long)*(char *)(lVar13 + 0x21f) < 0) {
      if (lVar7 != *(long *)(lVar13 + 0x210)) {
        return;
      }
      if (lVar7 == -1) goto LAB_10ada7700;
      plVar11 = (long *)*plVar11;
    }
    else if (lVar7 != *(char *)(lVar13 + 0x21f)) {
      return;
    }
    _memcmp(plVar11,lVar5);
    if (((int)plVar11 == 0) && (lVar12 = *(long *)(*(long *)(lVar12 + 0xf8) + 0x200), lVar12 != 0))
    {
      puVar6 = *(undefined **)(param_1 + 0x30);
      FUN_10ada8d74();
      if (puVar6 != &UNK_10e513248) {
        uVar10 = 0;
        puVar8 = (ulong *)&UNK_10e5132e0;
        while( true ) {
          for (; puVar9 = (ulong *)(&UNK_10e513250 + uVar10 * 0x10),
              *puVar9 < *(ulong *)(param_1 + 0x38); uVar10 = uVar10 * 2 + 2) {
            puVar9 = puVar8;
            if (3 < uVar10) goto LAB_10ada76b8;
          }
          if (3 < uVar10) break;
          uVar10 = uVar10 << 1 | 1;
          puVar8 = puVar9;
        }
LAB_10ada76b8:
        if ((puVar9 != (ulong *)&UNK_10e5132e0) &&
           (*puVar9 <= *(ulong *)(param_1 + 0x38) && puVar9 != (ulong *)&UNK_10e5132e0)) {
          FUN_10ad3b250(lVar12,*(undefined4 *)(puVar6 + 8),(int)puVar9[1]);
          return;
        }
      }
      func_0x0001093fd0ac(&UNK_10f61d92d);
LAB_10ada7700:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ada7708);
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10ada770c; end: 10ada7827; -[LSALensComponent lensWithId:setScreenDimmingEnabled:] */

void FUN_10ada770c(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 == 0) {
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f6ad1fc,&UNK_10f6ad488,0x333,&UNK_10f6ad42c);
    }
  }
  else {
    func_0x00010bf047a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c0f88c0(param_1);
    _objc_release(param_1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10ada7828; end: 10ada7843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_lensId_setScreenDi_1126020a0,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ada7844; end: 10ada791b; -[LSALensComponent loadPersistentStoreForLensWithId:] */

void FUN_10ada7844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_10ada791c;
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



/* Entry: 10ada791c; end: 10ada792f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada791c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_loadPersistentStor_1126020b0,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10ada7930; end: 10ada7a3f; -[LSALensComponent lensWithId:savePersistentStore:] */

void FUN_10ada7930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf047a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10ada7a40;
  puStack_50 = &UNK_110896e48;
  uStack_48 = param_1;
  _objc_retain(param_3);
  uStack_40 = param_3;
  _objc_retain(param_4);
  uStack_38 = param_4;
  func_0x00010c0f88c0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada7a40; end: 10ada7a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127843c0),
             PTR_s_lensComponent_lensId_savePersist_112602098,*(long *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10ada7a5c; end: 10ada7c27; -[LSALensComponent sendWillTurnOffCurrentEffectIfNeeded] */

void FUN_10ada7a5c(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_50;
  long *plStack_48;
  
  func_0x00010bf52380(&plStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      if (plStack_50 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        plVar1 = plVar4 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (*(long *)(*(long *)(*plStack_50 + 0x180) + 0xb8) == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(*(long *)(*(long *)(*plStack_50 + 0x180) + 0xa8) + 0x28);
        }
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0xf8);
      if (*(char *)(lVar7 + 0x21f) < '\0') {
        func_0x000107c3192c(&uStack_70,*(undefined8 *)(lVar7 + 0x208),*(undefined8 *)(lVar7 + 0x210)
                           );
      }
      else {
        uStack_68 = *(undefined8 *)(lVar7 + 0x210);
        uStack_70 = *(undefined8 *)(lVar7 + 0x208);
        lStack_60 = *(long *)(lVar7 + 0x218);
      }
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c25d8e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a70e0(param_1);
      _objc_release(puVar5);
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
    }
  }
  return;
}



/* Entry: 10ada7c28; end: 10ada7c87; +[LSALensComponent getSupportedFeaturesOfEffect:] */

ulong FUN_10ada7c28(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0xf8) + 0x1d8);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x28) != '\x01')) {
    uVar3 = 0x83;
  }
  else {
    uVar3 = 0x1c3;
    if (*(char *)(lVar2 + 0x29) == '\0') {
      uVar3 = 0xc3;
    }
  }
  FUN_10a5ad828();
  uVar1 = uVar3 | 4;
  if ((int)param_3 == 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Entry: 10ada7c88; end: 10ada7e1f; -[LSALensComponent setupVideoCodecFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7c88(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c73a48;
  puVar5[4] = 0;
  puVar2 = (undefined8 *)(param_1 + _DAT_1127843f4);
  plVar8 = (long *)puVar2[1];
  puVar2[1] = puVar5;
  puVar5[3] = &PTR_FUN_110c722c0;
  *puVar2 = puVar5 + 3;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10ada7e20; end: 10ada7e37; -[LSALensComponent _disableAudio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7e20(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + _DAT_1127843f4) + 9) = 1;
  return;
}



/* Entry: 10ada7e38; end: 10ada7e4b; -[LSALensComponent _enableAudio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7e38(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + _DAT_1127843f4) + 9) = 0;
  return;
}



/* Entry: 10ada7e4c; end: 10ada7e63; -[LSALensComponent _muteAudio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7e4c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + _DAT_1127843f4) + 8) = 1;
  return;
}



/* Entry: 10ada7e64; end: 10ada7e77; -[LSALensComponent _unmuteAudio] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7e64(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + _DAT_1127843f4) + 8) = 0;
  return;
}



/* Entry: 10ada7e78; end: 10ada7e87; -[LSALensComponent addLensWithLensInfo:async:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c4),
             PTR_s_addLensWithLensInfo_async_comple_11259bfb8);
  return;
}



/* Entry: 10ada7e88; end: 10ada7e97; -[LSALensComponent warmupLensWithLensInfo:async:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a1f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c4),
             PTR_s_warmupLensWithLensInfo_async_com_1126861e8);
  return;
}



/* Entry: 10ada7e98; end: 10ada7ea7; -[LSALensComponent removeLensWithLensId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7e98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c4),
             PTR_s_removeLensWithLensId_completion__112628de0);
  return;
}



/* Entry: 10ada7ea8; end: 10ada7eb7; -[LSALensComponent setLensRectangles:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bc990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c4),PTR_s_setLensRectangles_completion__11264cc88
            );
  return;
}



/* Entry: 10ada7eb8; end: 10ada7ef3; -[LSALensComponent setLensRectangles:rectanglesTransform:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_28 = param_4[3];
  uStack_30 = param_4[2];
  uStack_18 = param_4[5];
  uStack_20 = param_4[4];
  func_0x00010c1bc9a0(*(undefined8 *)(param_1 + _DAT_1127843c4),param_2,param_3,&uStack_40);
  return;
}



/* Entry: 10ada7ef4; end: 10ada7f03; -[LSALensComponent setDestinationRect:forLensWithId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c18c3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c4),
             PTR_s_setDestinationRect_forLensWithId_112640b08);
  return;
}



/* Entry: 10ada7f04; end: 10ada7f13; -[LSALensComponent setSourceRect:forLensWithId:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada7f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c207070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c4),
             PTR_s_setSourceRect_forLensWithId_comp_11265f640);
  return;
}



/* Entry: 10ada7f14; end: 10ada801b; -[LSALensComponent setRestartTrackersOnNewLenses:completion:] */

void FUN_10ada7f14(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126db570;
  func_0x00010c091b40(PTR_PTR_1126db570,param_2,0xd);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ada801c;
  puStack_58 = &UNK_110ad8878;
  uStack_50 = param_1;
  uStack_48 = param_3;
  func_0x00010c0f9180(uVar1,param_2,puVar2,&puStack_70,param_4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10ada801c; end: 10ada80fb;  */

void FUN_10ada801c(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    plStack_30 = (long *)0x0;
    plStack_28 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_30);
    if (plStack_28 == (long *)0x0) {
      return;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x28);
    plVar5 = plStack_28;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (plStack_30 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(undefined1 *)(*plStack_30 + 0x7d8) = uVar2;
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
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_28 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10ada80fc; end: 10ada824b; -[LSALensComponent suspendSceneUpdatesForLensId:completion:] */

void FUN_10ada80fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c264300(PTR_PTR_1126db570,param_2,0xe);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ada824c;
  puStack_58 = &UNK_110883780;
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_48 = param_1;
  _objc_retainBlock(&puStack_70);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f91a0();
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(uStack_50);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada824c; end: 10ada842b;  */

void FUN_10ada824c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_51;
  long *plStack_50;
  long *plStack_40;
  long *plStack_38;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if ((lVar4 == 0) || (func_0x00010c08fa60(), lVar4 == 0)) {
    pcVar5 = "";
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x20);
    _objc_retainAutorelease(pcVar5);
    func_0x00010bdc3520();
  }
  func_0x000107c31940(&uStack_68,pcVar5);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar4 = 0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_78);
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    if (plStack_70 != (long *)0x0) {
      plVar6 = plStack_70;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_38 = plVar6;
      if (plVar6 != (long *)0x0) {
        plStack_40 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plStack_50 = plStack_78;
          plVar1 = plVar6 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (-1 < (char)bStack_51) {
            uStack_60 = (ulong)bStack_51;
          }
          if (uStack_60 == 0) {
            lVar4 = *(long *)(*plStack_78 + 0x180);
            if (*(long *)(lVar4 + 0xb8) == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = *(long *)(*(long *)(lVar4 + 0xa8) + 0x28);
            }
          }
          else {
            lVar4 = *plStack_78 + 0x178;
            FUN_10ad3f994(lVar4,&uStack_68);
          }
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
          goto LAB_10ada8378;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10ada8378:
  plVar6 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plStack_70 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar4 != 0) {
    FUN_10a3dce20(*(undefined8 *)(lVar4 + 0x108));
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 10ada842c; end: 10ada857b; -[LSALensComponent resumeSceneUpdatesForLensId:completion:] */

void FUN_10ada842c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126db570;
  func_0x00010c264300(PTR_PTR_1126db570,param_2,0xf);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10ada857c;
  puStack_58 = &UNK_110883780;
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_48 = param_1;
  _objc_retainBlock(&puStack_70);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f91a0();
  _objc_release(param_1);
  _objc_release(ppuVar2);
  _objc_release(uStack_50);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10ada857c; end: 10ada875b;  */

void FUN_10ada857c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_51;
  long *plStack_50;
  long *plStack_40;
  long *plStack_38;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if ((lVar4 == 0) || (func_0x00010c08fa60(), lVar4 == 0)) {
    pcVar5 = "";
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x20);
    _objc_retainAutorelease(pcVar5);
    func_0x00010bdc3520();
  }
  func_0x000107c31940(&uStack_68,pcVar5);
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar4 = 0;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_78);
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    if (plStack_70 != (long *)0x0) {
      plVar6 = plStack_70;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_38 = plVar6;
      if (plVar6 != (long *)0x0) {
        plStack_40 = plStack_78;
        if (plStack_78 != (long *)0x0) {
          plStack_50 = plStack_78;
          plVar1 = plVar6 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (-1 < (char)bStack_51) {
            uStack_60 = (ulong)bStack_51;
          }
          if (uStack_60 == 0) {
            lVar4 = *(long *)(*plStack_78 + 0x180);
            if (*(long *)(lVar4 + 0xb8) == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = *(long *)(*(long *)(lVar4 + 0xa8) + 0x28);
            }
          }
          else {
            lVar4 = *plStack_78 + 0x178;
            FUN_10ad3f994(lVar4,&uStack_68);
          }
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
          goto LAB_10ada86a8;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10ada86a8:
  plVar6 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (plStack_70 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar4 != 0) {
    FUN_10a3dce84(*(undefined8 *)(lVar4 + 0x108));
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(uStack_68);
  }
  return;
}



/* Entry: 10ada875c; end: 10ada876f; -[LSALensComponent audioPlayerDidStartPlayingAudio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada875c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c0),
             PTR_s_lensComponentDidStartPlayingAudi_1126020d0,param_1);
  return;
}



/* Entry: 10ada8770; end: 10ada8783; -[LSALensComponent audioPlayerDidStopPlayingAudio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada8770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c091b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127843c0),
             PTR_s_lensComponentDidStopPlayingAudio_1126020d8,param_1);
  return;
}



/* Entry: 10ada8784; end: 10ada8843; -[LSALensComponent audioPlayerDidMuteAllSounds:] */

void FUN_10ada8784(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  
  func_0x00010bf52380(&plStack_40);
  plStack_30 = (long *)0x0;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plStack_30 = plStack_40;
      plVar5 = plStack_40;
    }
    if (plStack_38 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      FUN_10ad41ef0(*plVar5 + 0x178,1,0);
    }
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10ada8844; end: 10ada8903; -[LSALensComponent audioPlayerDidUnmuteAllSounds:] */

void FUN_10ada8844(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  
  func_0x00010bf52380(&plStack_40);
  plStack_30 = (long *)0x0;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar3 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plStack_30 = plStack_40;
      plVar5 = plStack_40;
    }
    if (plStack_38 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar5 != (long *)0x0) {
      FUN_10ad41ef0(*plVar5 + 0x178,0,0);
    }
    if (plVar3 != (long *)0x0) {
      plVar5 = plVar3 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  return;
}



/* Entry: 10ada8904; end: 10ada8913; -[LSALensComponent pendingEffectKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada8904(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_1127843f8,1);
  return;
}



/* Entry: 10ada8914; end: 10ada891f; -[LSALensComponent setPendingEffectKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada8914(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10ada8920; end: 10ada8933; -[LSALensComponent shouldClearUnusedResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10ada8920(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127843b4) & 1;
}



/* Entry: 10ada8934; end: 10ada8943; -[LSALensComponent setShouldClearUnusedResources:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada8934(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127843b4) = param_3;
  return;
}



/* Entry: 10ada8944; end: 10ada8957; -[LSALensComponent isApplicationActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10ada8944(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127843b8) & 1;
}



/* Entry: 10ada8958; end: 10ada8967; -[LSALensComponent setApplicationActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada8958(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127843b8) = param_3;
  return;
}



/* Entry: 10ada8968; end: 10ada8c3f; -[LSALensComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada8968(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  _objc_storeStrong(param_1 + _DAT_1127843f8,0);
  _objc_storeStrong(param_1 + _DAT_1127843c8,0);
  _objc_storeStrong(param_1 + _DAT_1127843c4,0);
  plVar5 = *(long **)(param_1 + _DAT_1127843f0 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843f4 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843ec + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843e8 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843d8 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843d4 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843e4 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843e0 + 8);
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
  plVar5 = *(long **)(param_1 + _DAT_1127843dc + 8);
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
  _objc_storeStrong(param_1 + _DAT_1127843bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127843c0,0);
  return;
}



/* Entry: 10ada8c40; end: 10ada8cd7; -[LSALensComponent .cxx_construct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10ada8c40(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127843dc;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843e0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843e4;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843d4;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843d8;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843e8;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843ec;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843f4;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843f0;
  *(undefined8 *)(param_1 + lVar1) = 0;
  ((undefined8 *)(param_1 + lVar1))[1] = 0;
  lVar1 = (long)_DAT_1127843cc;
  *(undefined1 *)(param_1 + lVar1) = 0;
  ((undefined1 *)(param_1 + lVar1))[8] = 0;
  lVar1 = (long)_DAT_1127843d0;
  *(undefined1 *)(param_1 + lVar1) = 0;
  ((undefined1 *)(param_1 + lVar1))[8] = 0;
  return;
}



/* Entry: 10ada8cd8; end: 10ada8d73;  */

long FUN_10ada8cd8(long param_1)

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



/* Entry: 10ada8d74; end: 10ada8def;  */

ulong * FUN_10ada8d74(ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = 0;
  puVar1 = (ulong *)&UNK_10e513248;
  while( true ) {
    for (; puVar2 = (ulong *)(&UNK_10e513188 + uVar3 * 0x10), *puVar2 < param_1;
        uVar3 = uVar3 * 2 + 2) {
      puVar2 = puVar1;
      if (4 < uVar3) goto LAB_10ada8dcc;
    }
    if (5 < uVar3) break;
    uVar3 = uVar3 << 1 | 1;
    puVar1 = puVar2;
  }
LAB_10ada8dcc:
  if ((puVar2 == (ulong *)&UNK_10e513248) || (param_1 < *puVar2)) {
    puVar2 = (ulong *)&UNK_10e513248;
  }
  return puVar2;
}



/* Entry: 10ada8df0; end: 10ada8e47;  */

long FUN_10ada8df0(long param_1)

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



/* Entry: 10ada8e48; end: 10ada8e57;  */

void FUN_10ada8e48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c73778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


