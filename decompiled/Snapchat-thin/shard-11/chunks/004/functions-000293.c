/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10859d398; end: 10859d457; -[POPDecayAnimation _initState] */

void FUN_10859d398(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x170;
  __Znwm();
  *puVar1 = &PTR_FUN_110a57880;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  _objc_initWeak(puVar1 + 8,0);
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *(ushort *)(puVar1 + 0x11) = *(ushort *)(puVar1 + 0x11) & 0x8000 | 6;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  *puVar1 = &PTR_FUN_110a57c00;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0x3fefef9db22d0e56;
  *(undefined4 *)(puVar1 + 2) = 1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10859d458; end: 10859d463; -[POPDecayAnimation deceleration] */

undefined8 FUN_10859d458(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x160);
}



/* Entry: 10859d464; end: 10859d4e3; -[POPDecayAnimation setDeceleration:] */

void FUN_10859d464(double param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar5 = *(long *)(param_2 + 8);
  if (param_1 == *(double *)(lVar5 + 0x160)) {
    return;
  }
  *(double *)(lVar5 + 0x160) = param_1;
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10859cb28(lVar5 + 0xb8,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10859d4e4; end: 10859d5a3; -[POPDecayAnimation toValue] */

void FUN_10859d4e4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar5 = &uStack_30;
  func_0x00010be0a400();
  lVar6 = *(long *)(param_1 + 8);
  plStack_28 = *(long **)(lVar6 + 0xc0);
  uStack_30 = *(undefined8 *)(lVar6 + 0xb8);
  if (*(long *)(lVar6 + 0xc0) != 0) {
    plVar1 = (long *)(*(long *)(lVar6 + 0xc0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(param_1 + 8);
  }
  FUN_108597cdc(&uStack_30,*(undefined4 *)(lVar6 + 0x98),0);
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10859d5a4; end: 10859d5cb; -[POPDecayAnimation duration] */

undefined8 FUN_10859d5a4(long param_1)

{
  func_0x00010be0a400();
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x168);
}



/* Entry: 10859d5cc; end: 10859d63f; -[POPDecayAnimation setFromValue:] */

void FUN_10859d5cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fce20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setFromValue__112645e80,param_3);
  func_0x00010be3d7e0(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 10859d640; end: 10859d667; -[POPDecayAnimation setToValue:] */

void FUN_10859d640(void)

{
  _NSLog(&PTR____CFConstantStringClassReference_110ee4978);
  return;
}



/* Entry: 10859d668; end: 10859d8eb; -[POPDecayAnimation reversedVelocity] */

void FUN_10859d668(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar1 = param_5;
  func_0x00010c0edb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108597a30();
  _objc_release(uVar1);
  iVar3 = (int)uVar2;
  if (iVar3 < 4) {
    if (iVar3 == 1) {
      func_0x00010c0edb20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(param_5);
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar3 == 2) {
      func_0x00010c0edb20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(param_5);
      func_0x00010c0df720(-param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar3 == 3) {
      func_0x00010c0edb20(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1060();
      _objc_release(param_5);
      func_0x00010c297180(-param_1,-param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (iVar3 == 4) {
    func_0x00010c0edb20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    _objc_release(param_5);
    func_0x00010c2971c0(-param_1,-param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar3 == 5) {
    func_0x00010c0edb20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(param_5);
    func_0x00010c2971a0(-param_1,-param_2,-param_3,-param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar3 == 6) {
    func_0x00010c0edb20(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2aa0();
    _objc_release(param_5);
    func_0x00010c297340(-param_1,-param_2,-param_3,-param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10859d8ec; end: 10859d99f; -[POPDecayAnimation originalVelocity] */

void FUN_10859d8ec(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar5 = &uStack_30;
  lVar6 = *(long *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(lVar6 + 0x108);
  plStack_28 = *(long **)(lVar6 + 0x110);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(param_1 + 8);
  }
  FUN_108597cdc(&uStack_30,*(undefined4 *)(lVar6 + 0x98),0);
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10859d9a0; end: 10859da57; -[POPDecayAnimation velocity] */

void FUN_10859d9a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar5 = &uStack_30;
  lVar6 = *(long *)(param_1 + 8);
  plStack_28 = *(long **)(lVar6 + 0x100);
  uStack_30 = *(undefined8 *)(lVar6 + 0xf8);
  if (*(long *)(lVar6 + 0x100) != 0) {
    plVar1 = (long *)(*(long *)(lVar6 + 0x100) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(param_1 + 8);
  }
  FUN_108597cdc(&uStack_30,*(undefined4 *)(lVar6 + 0x98),0);
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10859da58; end: 10859ddcf; -[POPDecayAnimation setVelocity:] */

void FUN_10859da58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  double *pdVar9;
  double *pdVar10;
  long lVar11;
  undefined8 uStack_70;
  long *plStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  uVar7 = param_3;
  FUN_108597a30(param_3,&UNK_10df35d20,6);
  if ((int)uVar7 == 0) {
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    FUN_10859cb28(*(long *)(param_1 + 8) + 0xf8,&plStack_50);
    plVar8 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar11 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    _NSLog(&PTR____CFConstantStringClassReference_110ee4998);
    goto LAB_10859dd6c;
  }
  FUN_108597e30(&plStack_50,param_3,*(long *)(param_1 + 8) + 0x98,*(long *)(param_1 + 8) + 0xa0,1);
  FUN_108597e30(auStack_60,param_3,*(long *)(param_1 + 8) + 0x98,*(long *)(param_1 + 8) + 0xa0,1);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xf8);
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x100);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plStack_50 == plVar2) {
LAB_10859dbc4:
    bVar6 = true;
  }
  else {
    bVar6 = false;
    if ((plStack_50 != (long *)0x0) && (plVar2 != (long *)0x0)) {
      lVar11 = *plStack_50;
      if (lVar11 == *plVar2) {
        if (lVar11 == 0) goto LAB_10859dbc4;
        pdVar9 = (double *)plStack_50[1];
        pdVar10 = (double *)plVar2[1];
        do {
          lVar11 = lVar11 + -1;
          bVar6 = *pdVar9 == *pdVar10;
          if (!bVar6) break;
          pdVar9 = pdVar9 + 1;
          pdVar10 = pdVar10 + 1;
        } while (lVar11 != 0);
      }
      else {
        bVar6 = false;
      }
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3 + 1;
    do {
      lVar11 = *plVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 1;
    do {
      lVar11 = *plVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (!bVar6) {
    func_0x00010859b42c(*(long *)(param_1 + 8) + 0xf8,&plStack_50);
    func_0x00010859b42c(*(long *)(param_1 + 8) + 0x108,auStack_60);
    if ((*(ushort *)(*(long *)(param_1 + 8) + 0x88) >> 10 & 1) != 0) {
      func_0x00010c28bce0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x70));
    }
    func_0x00010be3d7e0(param_1);
    if (((*(ushort *)(*(long *)(param_1 + 8) + 0x88) ^ 0xffff) & 3) == 0) {
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
      FUN_10859cb28(*(long *)(param_1 + 8) + 0xa8,&uStack_70);
      plVar8 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          lVar11 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = *(long **)(param_1 + 8);
      if ((*(ushort *)(plVar8 + 0x11) >> 1 & 1) != 0) {
        *(ushort *)(plVar8 + 0x11) = *(ushort *)(plVar8 + 0x11) & 0xfffd;
        (**(code **)(*plVar8 + 0x48))(plVar8,0);
      }
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar8 = plStack_58 + 1;
    do {
      lVar11 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar11 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *plVar2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_10859dd6c:
  _objc_release(param_3);
  return;
}



/* Entry: 10859ddd0; end: 10859df3f; -[POPDecayAnimation _ensureComputedProperties] */

void FUN_10859ddd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  double dVar9;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  if (*(long *)(*(long *)(param_5 + 8) + 0xb8) == 0) {
    FUN_10859df40();
    lVar7 = *(long *)(param_5 + 8);
    lVar6 = 0xa8;
    plVar2 = (long *)(lVar7 + 0xa8);
    if (*(long *)(lVar7 + 200) != 0) {
      lVar6 = 200;
      plVar2 = (long *)(lVar7 + 200);
    }
    puVar8 = *(undefined8 **)(lVar7 + lVar6);
    plStack_38 = (long *)plVar2[1];
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_40 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      dVar9 = *(double *)(lVar7 + 0x168);
      if (dVar9 == 0.0) {
        FUN_10859df40(lVar7);
      }
      uVar5 = *puVar8;
      func_0x0001085a2564(uVar5,puVar8[1]);
      FUN_108598194(&lStack_50,uVar5);
      FUN_1085a2654(*(undefined8 *)(lVar7 + 0xf8));
      dStack_70 = dVar9;
      uStack_68 = param_2;
      uStack_60 = param_3;
      uStack_58 = param_4;
      FUN_10859e3ec(*(undefined8 *)(lVar7 + 0x168),*(undefined8 *)(lVar7 + 0x160),
                    *(undefined8 *)(lStack_50 + 8),&dStack_70,*(undefined8 *)(lVar7 + 0xa0));
      func_0x00010859b42c(lVar7 + 0xb8,&lStack_50);
      if (plStack_48 != (long *)0x0) {
        plVar2 = plStack_48 + 1;
        do {
          lVar6 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
    }
    plVar2 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  return;
}



/* Entry: 10859df40; end: 10859e093;  */

void FUN_10859df40(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  lVar4 = *(long *)(param_5 + 0xf8);
  plVar5 = *(long **)(param_5 + 0x100);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar4 == 0) {
    param_1 = 0.0;
    param_2 = 0.0;
    param_3 = 0.0;
    param_4 = 0.0;
  }
  else {
    FUN_1085a2654();
  }
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
  dVar6 = *(double *)(param_5 + 0x160);
  dVar9 = (*(double *)(param_5 + 0x158) * 5.0) / 1000.0;
  _log();
  dVar6 = dVar6 * 1000.0;
  dVar7 = ABS(dVar9 / (param_1 / 1000.0));
  _log();
  dVar10 = ABS(dVar9 / (param_2 / 1000.0));
  _log();
  dVar8 = dVar7 / dVar6;
  if (dVar7 / dVar6 <= dVar10 / dVar6) {
    dVar8 = dVar10 / dVar6;
  }
  dVar7 = ABS(dVar9 / (param_3 / 1000.0));
  _log();
  if (dVar8 <= dVar7 / dVar6) {
    dVar8 = dVar7 / dVar6;
  }
  dVar7 = ABS(dVar9 / (param_4 / 1000.0));
  _log();
  if (dVar8 <= dVar7 / dVar6) {
    dVar8 = dVar7 / dVar6;
  }
  if (dVar8 < 0.0) {
    dVar8 = 0.0;
  }
  *(double *)(param_5 + 0x168) = dVar8;
  return;
}



/* Entry: 10859e094; end: 10859e10b; -[POPDecayAnimation _invalidateComputedProperties] */

void FUN_10859e094(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_10859cb28(*(long *)(param_1 + 8) + 0xb8,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x168) = 0;
  return;
}



/* Entry: 10859e10c; end: 10859e1d7; -[POPDecayAnimation _appendDescription:debug:] */

void FUN_10859e10c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fce20;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s__appendDescription_debug__112550db8,param_4,param_5);
  func_0x00010bf8b160(param_2);
  if (param_1 != 0.0) {
    func_0x00010bf8b160(param_2);
    func_0x00010bf06ba0(param_4);
  }
  if (*(double *)(*(long *)(param_2 + 8) + 0x160) != 0.0) {
    func_0x00010bf06ba0(param_4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10859e1d8; end: 10859e287; -[POPDecayAnimation copyWithZone:] */

undefined1 * FUN_10859e1d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fce20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_copyWithZone__1125b2238);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_1;
    func_0x00010c0edb20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220640(puVar1);
    _objc_release(uVar2);
    func_0x00010bf666e0(param_1);
    func_0x00010c18a120(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10859e288; end: 10859e28b;  */

undefined8 * FUN_10859e288(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a57b98;
  if (param_1[0x28] != 0) {
    _free();
    param_1[0x28] = 0;
  }
  _objc_release(param_1[0x27]);
  FUN_108598298(param_1 + 0x23);
  FUN_108598298(param_1 + 0x21);
  FUN_108598298(param_1 + 0x1f);
  FUN_108598298(param_1 + 0x1d);
  FUN_108598298(param_1 + 0x1b);
  FUN_108598298(param_1 + 0x19);
  FUN_108598298(param_1 + 0x17);
  FUN_108598298(param_1 + 0x15);
  _objc_release(param_1[0x12]);
  *param_1 = &PTR_FUN_110a57880;
  uVar1 = param_1[3];
  param_1[3] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xd]);
  _objc_release(param_1[0xc]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_destroyWeak(param_1 + 8);
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 10859e28c; end: 10859e29f;  */

void FUN_10859e28c(void)

{
  FUN_10859c894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10859e2a0; end: 10859e38f;  */

bool FUN_10859e2a0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    if ((*(ushort *)(param_1 + 0x88) >> 0xe & 1) != 0) {
      return true;
    }
  }
  else if (*(long *)(param_1 + 0xa0) == 0) {
    return true;
  }
  dVar7 = *(double *)(param_1 + 0x158);
  lVar5 = *(long *)(param_1 + 0xf8);
  plVar2 = *(long **)(param_1 + 0x100);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar5 == 0) {
    pdVar6 = (double *)0x0;
  }
  else {
    pdVar6 = *(double **)(lVar5 + 8);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  if (lVar5 == 0) {
    return true;
  }
  do {
    lVar5 = lVar5 + -1;
    bVar4 = ABS(*pdVar6) < dVar7 * 5.0;
    if (!bVar4) {
      return bVar4;
    }
    pdVar6 = pdVar6 + 1;
  } while (lVar5 != 0);
  return bVar4;
}



/* Entry: 10859e390; end: 10859e3eb;  */

bool FUN_10859e390(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_3 + 200);
  if (lVar1 != 0) {
    FUN_10859e3ec(param_2,*(undefined8 *)(param_3 + 0x160),*(undefined8 *)(lVar1 + 8),
                  *(undefined8 *)(*(long *)(param_3 + 0xf8) + 8),*(undefined8 *)(param_3 + 0xa0));
    FUN_10859b500(param_3,*(ulong *)(param_3 + 0x130) | 2);
  }
  return lVar1 != 0;
}



/* Entry: 10859e3ec; end: 10859e497;  */

void FUN_10859e3ec(double param_1,double param_2,double *param_3,double *param_4,long param_5)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)param_2;
  _powf(fVar1,(float)(param_1 * 1000.0));
  if (param_5 != 0) {
    do {
      dVar2 = *param_4;
      *param_4 = (double)(fVar1 * (float)(dVar2 / 1000.0)) * 1000.0;
      *param_3 = *param_3 +
                 (double)((float)((param_2 * (double)(1.0 - fVar1)) / (1.0 - param_2)) *
                         (float)(dVar2 / 1000.0));
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 10859e498; end: 10859e557;  */

undefined8 FUN_10859e498(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_c0 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_c0 = uStack_160;
  }
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_160;
}



/* Entry: 10859e558; end: 10859e64f;  */

void FUN_10859e558(double param_1,long param_2)

{
  double dVar1;
  undefined1 auStack_1e0 [128];
  double dStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_c0;
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
  
  _objc_retain();
  dVar1 = 1e-06;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  if (param_2 == 0) {
    dStack_160 = 0.0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&dStack_160,param_2);
  }
  dStack_c0 = dStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&dStack_c0,&dStack_160);
  dStack_160 = dVar1;
  FUN_1085941e8(&dStack_c0,&dStack_160,0);
  func_0x0001085936e8(auStack_1e0,&dStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859e650; end: 10859e70f;  */

undefined8 FUN_10859e650(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_b8 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_b8 = uStack_158;
  }
  uStack_c0 = uStack_160;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_158;
}



/* Entry: 10859e710; end: 10859e807;  */

void FUN_10859e710(double param_1,long param_2)

{
  double dVar1;
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  dVar1 = 1e-06;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  if (param_2 == 0) {
    uStack_160 = 0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = dStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  dStack_158 = dVar1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859e808; end: 10859e8cb;  */

undefined1  [16] FUN_10859e808(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_c0 = uStack_160;
    uStack_b8 = uStack_158;
  }
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  auVar1._8_8_ = uStack_158;
  auVar1._0_8_ = uStack_160;
  _objc_release(param_1);
  return auVar1;
}



/* Entry: 10859e8cc; end: 10859e9db;  */

void FUN_10859e8cc(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1e0 [128];
  double dStack_160;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_c0;
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
  
  _objc_retain();
  dVar2 = 1e-06;
  dVar1 = 1e-06;
  if (param_1 != 0.0 || param_2 != 0.0) {
    dVar2 = param_1;
    dVar1 = param_2;
  }
  if (param_3 == 0) {
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&dStack_160,param_3);
  }
  dStack_c0 = dStack_160;
  uStack_b8 = dStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&dStack_c0,&dStack_160);
  dStack_160 = dVar2;
  dStack_158 = dVar1;
  FUN_1085941e8(&dStack_c0,&dStack_160,0);
  func_0x0001085936e8(auStack_1e0,&dStack_c0);
  func_0x00010c219960(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10859e9dc; end: 10859ea9b;  */

undefined8 FUN_10859e9dc(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_58 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_58 = uStack_f8;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_f8;
}



/* Entry: 10859ea9c; end: 10859eb83;  */

void FUN_10859ea9c(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f8 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859eb84; end: 10859ec43;  */

undefined8 FUN_10859eb84(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_50 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_50 = uStack_f0;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_f0;
}



/* Entry: 10859ec44; end: 10859ed2b;  */

void FUN_10859ec44(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f0 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859ed2c; end: 10859edeb;  */

undefined8 FUN_10859ed2c(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_48 = uStack_e8;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_e8;
}



/* Entry: 10859edec; end: 10859eed3;  */

void FUN_10859edec(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_e8 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859eed4; end: 10859ef97;  */

undefined1  [16] FUN_10859eed4(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_58 = uStack_f8;
    uStack_50 = uStack_f0;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  auVar1._8_8_ = uStack_f0;
  auVar1._0_8_ = uStack_f8;
  _objc_release(param_1);
  return auVar1;
}



/* Entry: 10859ef98; end: 10859f083;  */

void FUN_10859ef98(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_3 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_3);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f8 = param_1;
  uStack_f0 = param_2;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10859f084; end: 10859f143;  */

undefined8 FUN_10859f084(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_90 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_90 = uStack_130;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_130;
}



/* Entry: 10859f144; end: 10859f22b;  */

void FUN_10859f144(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_130 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,1);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859f22c; end: 10859f2eb;  */

undefined8 FUN_10859f22c(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_88 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_88 = uStack_128;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_128;
}



/* Entry: 10859f2ec; end: 10859f3d3;  */

void FUN_10859f2ec(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_128 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,1);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859f3d4; end: 10859f493;  */

undefined8 FUN_10859f3d4(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_80 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_1);
    uStack_80 = uStack_120;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_120;
}



/* Entry: 10859f494; end: 10859f57b;  */

void FUN_10859f494(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_120 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,1);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c219960(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859f57c; end: 10859f63f;  */

undefined1  [16] FUN_10859f57c(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_1);
    uStack_c0 = uStack_160;
    uStack_b8 = uStack_158;
  }
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  auVar1._8_8_ = uStack_158;
  auVar1._0_8_ = uStack_160;
  _objc_release(param_1);
  return auVar1;
}



/* Entry: 10859f640; end: 10859f74f;  */

void FUN_10859f640(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1e0 [128];
  double dStack_160;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_c0;
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
  
  _objc_retain();
  dVar2 = 1e-06;
  dVar1 = 1e-06;
  if (param_1 != 0.0 || param_2 != 0.0) {
    dVar2 = param_1;
    dVar1 = param_2;
  }
  if (param_3 == 0) {
    dStack_160 = 0.0;
    dStack_158 = 0.0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&dStack_160,param_3);
  }
  dStack_c0 = dStack_160;
  uStack_b8 = dStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&dStack_c0,&dStack_160);
  dStack_160 = dVar2;
  dStack_158 = dVar1;
  FUN_1085941e8(&dStack_c0,&dStack_160,0);
  func_0x0001085936e8(auStack_1e0,&dStack_c0);
  func_0x00010c20f020(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10859f750; end: 10859f80f;  */

undefined8 FUN_10859f750(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_58 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_1);
    uStack_58 = uStack_f8;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_f8;
}



/* Entry: 10859f810; end: 10859f8f7;  */

void FUN_10859f810(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f8 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c20f020(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859f8f8; end: 10859f9b7;  */

undefined8 FUN_10859f8f8(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_50 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_1);
    uStack_50 = uStack_f0;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_f0;
}



/* Entry: 10859f9b8; end: 10859fa9f;  */

void FUN_10859f9b8(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f0 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c20f020(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859faa0; end: 10859fb5f;  */

undefined8 FUN_10859faa0(long param_1)

{
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_48 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_1);
    uStack_48 = uStack_e8;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  FUN_108593964(&uStack_c0,&uStack_160);
  _objc_release(param_1);
  return uStack_e8;
}



/* Entry: 10859fb60; end: 10859fc47;  */

void FUN_10859fb60(undefined8 param_1,long param_2)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_2 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_2);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_e8 = param_1;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c20f020(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10859fc48; end: 10859fd0b;  */

undefined1  [16] FUN_10859fc48(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_1 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_1);
    uStack_58 = uStack_f8;
    uStack_50 = uStack_f0;
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  auVar1._8_8_ = uStack_f0;
  auVar1._0_8_ = uStack_f8;
  _objc_release(param_1);
  return auVar1;
}



/* Entry: 10859fd0c; end: 10859fdf7;  */

void FUN_10859fd0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_1e0 [128];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  _objc_retain();
  if (param_3 == 0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
  }
  else {
    func_0x00010c25ec20(&uStack_160,param_3);
  }
  uStack_c0 = uStack_160;
  uStack_b8 = uStack_158;
  uStack_b0 = uStack_150;
  uStack_a8 = uStack_148;
  uStack_a0 = uStack_140;
  uStack_98 = uStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
  uStack_80 = uStack_120;
  uStack_78 = uStack_118;
  uStack_70 = uStack_110;
  uStack_68 = uStack_108;
  uStack_60 = uStack_100;
  uStack_58 = uStack_f8;
  uStack_50 = uStack_f0;
  uStack_48 = uStack_e8;
  FUN_108593964(&uStack_c0,&uStack_160);
  uStack_f8 = param_1;
  uStack_f0 = param_2;
  FUN_1085941e8(&uStack_c0,&uStack_160,0);
  func_0x0001085936e8(auStack_1e0,&uStack_c0);
  func_0x00010c20f020(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10859fdf8; end: 10859fe6f;  */

double FUN_10859fdf8(double param_1,double *param_2)

{
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_30 = *param_2 * 3.0;
  dStack_38 = (param_2[2] - *param_2) * 3.0 - dStack_30;
  dStack_40 = (1.0 - dStack_30) - dStack_38;
  dStack_18 = param_2[1] * 3.0;
  dStack_20 = (param_2[3] - param_2[1]) * 3.0 - dStack_18;
  dStack_28 = (1.0 - dStack_18) - dStack_20;
  FUN_10859ff74(&dStack_40);
  return param_1 * (dStack_18 + param_1 * (dStack_20 + param_1 * dStack_28));
}



/* Entry: 10859fe70; end: 10859ff73;  */

double FUN_10859fe70(double param_1)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 <= 18.0) {
    dVar3 = param_1;
    _pow(param_1,0x4008000000000000);
    dVar3 = param_1 * param_1 * -0.031 + dVar3 * 0.0007 + param_1 * 0.64;
    dVar4 = 1.28;
  }
  else {
    bVar1 = false;
    bVar2 = true;
    if (18.0 < param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 == 44.0;
        bVar2 = 44.0 <= param_1;
      }
    }
    if (!bVar2 || bVar1) {
      dVar3 = param_1;
      _pow(param_1,0x4008000000000000);
      dVar3 = param_1 * param_1 * -0.006 + dVar3 * 4.4e-05 + param_1 * 0.36;
      dVar4 = 2.0;
    }
    else {
      if (param_1 <= 44.0) {
        return 0.0;
      }
      dVar3 = param_1;
      _pow(param_1,0x4008000000000000);
      dVar3 = param_1 * param_1 * -0.000332 + dVar3 * 4.5e-07 + param_1 * 0.1078;
      dVar4 = 5.84;
    }
  }
  return dVar3 + dVar4;
}



/* Entry: 10859ff74; end: 1085a003b;  */

double FUN_10859ff74(double param_1,double param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  iVar1 = 8;
  dVar2 = param_1;
  do {
    dVar6 = dVar2 * (dVar5 + dVar2 * (dVar4 + dVar2 * dVar3));
    if (ABS(dVar6 - param_1) < param_2) {
      return dVar2;
    }
    dVar8 = dVar5 + dVar2 * (dVar4 + dVar4 + dVar2 * dVar3 * 3.0);
    if (ABS(dVar8) < 1e-06) break;
    dVar2 = dVar2 - (dVar6 - param_1) / dVar8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  dVar2 = 0.0;
  if ((0.0 <= param_1) && (dVar2 = 1.0, param_1 <= 1.0)) {
    dVar6 = 0.0;
    dVar8 = 1.0;
    dVar2 = param_1;
    do {
      dVar7 = dVar2 * (dVar5 + dVar2 * (dVar4 + dVar2 * dVar3));
      if (ABS(dVar7 - param_1) < param_2) {
        return dVar2;
      }
      if (param_1 <= dVar7) {
        dVar8 = dVar2;
        dVar2 = dVar6;
      }
      dVar6 = dVar2;
      dVar2 = dVar6 + (dVar8 - dVar6) * 0.5;
    } while (dVar6 < dVar8);
  }
  return dVar2;
}



/* Entry: 1085a003c; end: 1085a00f3; -[POPPropertyAnimation _initState] */

void FUN_1085a003c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x160;
  __Znwm();
  *puVar1 = &PTR_FUN_110a57880;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  _objc_initWeak(puVar1 + 8,0);
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *(ushort *)(puVar1 + 0x11) = *(ushort *)(puVar1 + 0x11) & 0x8000 | 6;
  *puVar1 = &PTR_FUN_110a57b98;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  *(undefined4 *)(puVar1 + 2) = 2;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1085a00f4; end: 1085a0103; -[POPPropertyAnimation isAdditive] */

ushort FUN_1085a00f4(long param_1)

{
  return *(ushort *)(*(long *)(param_1 + 8) + 0x88) >> 8 & 1;
}



/* Entry: 1085a0104; end: 1085a0137; -[POPPropertyAnimation setAdditive:] */

void FUN_1085a0104(long param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x88);
  if (((param_3 ^ (uVar1 & 0x100) == 0) & 1) == 0) {
    uVar2 = 0x100;
    if (param_3 == 0) {
      uVar2 = 0;
    }
    *(ushort *)(*(long *)(param_1 + 8) + 0x88) = uVar1 & 0xfeff | uVar2;
  }
  return;
}



/* Entry: 1085a0138; end: 1085a0143; -[POPPropertyAnimation roundingFactor] */

undefined8 FUN_1085a0138(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x128);
}



/* Entry: 1085a0144; end: 1085a015f; -[POPPropertyAnimation setRoundingFactor:] */

void FUN_1085a0144(double param_1,long param_2)

{
  if (param_1 == *(double *)(*(long *)(param_2 + 8) + 0x128)) {
    return;
  }
  *(double *)(*(long *)(param_2 + 8) + 0x128) = param_1;
  return;
}



/* Entry: 1085a0160; end: 1085a016b; -[POPPropertyAnimation clampMode] */

undefined8 FUN_1085a0160(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x130);
}



/* Entry: 1085a016c; end: 1085a0183; -[POPPropertyAnimation setClampMode:] */

void FUN_1085a016c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(*(long *)(param_1 + 8) + 0x130)) {
    *(long *)(*(long *)(param_1 + 8) + 0x130) = param_3;
  }
  return;
}



/* Entry: 1085a0184; end: 1085a01af; -[POPPropertyAnimation property] */

void FUN_1085a0184(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a01b0; end: 1085a022b; -[POPPropertyAnimation setProperty:] */

void FUN_1085a01b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (param_3 != *(long *)(lVar2 + 0x90)) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(lVar2 + 0x90);
    *(long *)(lVar2 + 0x90) = param_3;
    _objc_release(uVar1);
    (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a022c; end: 1085a0257; -[POPPropertyAnimation progressMarkers] */

void FUN_1085a022c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x138);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085a0258; end: 1085a033b; -[POPPropertyAnimation setProgressMarkers:] */

void FUN_1085a0258(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != *(long *)(*(long *)(param_1 + 8) + 0x138)) {
    lVar3 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x138);
    *(long *)(*(long *)(param_1 + 8) + 0x138) = lVar3;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 8);
    if (*(long *)(lVar3 + 0x140) != 0) {
      _free();
      *(undefined8 *)(lVar3 + 0x140) = 0;
    }
    lVar1 = *(long *)(lVar3 + 0x138);
    func_0x00010bf529e0();
    *(long *)(lVar3 + 0x148) = lVar1;
    if (lVar1 != 0) {
      lVar1 = lVar1 << 4;
      _malloc();
      *(long *)(lVar3 + 0x140) = lVar1;
      puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_40 = 0xc0000000;
      pcStack_38 = FUN_1085a0f8c;
      puStack_30 = &UNK_110a57c70;
      lStack_28 = lVar3;
      func_0x00010bf97e80(*(undefined8 *)(lVar3 + 0x138),param_2,&puStack_48);
    }
    *(undefined8 *)(lVar3 + 0x150) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a033c; end: 1085a03f3; -[POPPropertyAnimation fromValue] */

void FUN_1085a033c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar5 = &uStack_30;
  lVar6 = *(long *)(param_1 + 8);
  plStack_28 = *(long **)(lVar6 + 0xb0);
  uStack_30 = *(undefined8 *)(lVar6 + 0xa8);
  if (*(long *)(lVar6 + 0xb0) != 0) {
    plVar1 = (long *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(param_1 + 8);
  }
  FUN_108597cdc(&uStack_30,*(undefined4 *)(lVar6 + 0x98),0);
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085a03f4; end: 1085a05eb; -[POPPropertyAnimation setFromValue:] */

void FUN_1085a03f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  long lVar11;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  lVar11 = *(long *)(param_1 + 8);
  FUN_108597e30(&plStack_50,param_3,lVar11 + 0x98,lVar11 + 0xa0,1);
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar3 = *(long **)(lVar11 + 0xa8);
  plVar4 = *(long **)(lVar11 + 0xb0);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plStack_50 != plVar3) {
    bVar7 = false;
    if ((plStack_50 == (long *)0x0) || (plVar3 == (long *)0x0)) goto joined_r0x0001085a04d0;
    lVar10 = *plStack_50;
    if (lVar10 != *plVar3) {
      bVar7 = false;
      goto joined_r0x0001085a04d0;
    }
    if (lVar10 != 0) {
      pdVar8 = (double *)plStack_50[1];
      pdVar9 = (double *)plVar3[1];
      do {
        lVar10 = lVar10 + -1;
        bVar7 = *pdVar8 == *pdVar9;
        if (!bVar7) break;
        pdVar8 = pdVar8 + 1;
        pdVar9 = pdVar9 + 1;
      } while (lVar10 != 0);
      goto joined_r0x0001085a04d0;
    }
  }
  bVar7 = true;
joined_r0x0001085a04d0:
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      lVar10 = *plVar3;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      lVar10 = *plVar3;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if ((!bVar7) &&
     (func_0x00010859b42c((long *)(lVar11 + 0xa8),&plStack_50),
     (*(ushort *)(lVar11 + 0x88) >> 10 & 1) != 0)) {
    func_0x00010c286180(*(undefined8 *)(lVar11 + 0x70));
  }
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar11 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085a05ec; end: 1085a06a3; -[POPPropertyAnimation toValue] */

void FUN_1085a05ec(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar5 = &uStack_30;
  lVar6 = *(long *)(param_1 + 8);
  plStack_28 = *(long **)(lVar6 + 0xc0);
  uStack_30 = *(undefined8 *)(lVar6 + 0xb8);
  if (*(long *)(lVar6 + 0xc0) != 0) {
    plVar1 = (long *)(*(long *)(lVar6 + 0xc0) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(param_1 + 8);
  }
  FUN_108597cdc(&uStack_30,*(undefined4 *)(lVar6 + 0x98),0);
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085a06a4; end: 1085a091b; -[POPPropertyAnimation setToValue:] */

void FUN_1085a06a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  double *pdVar9;
  double *pdVar10;
  long lVar11;
  long *plVar12;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  plVar12 = *(long **)(param_1 + 8);
  FUN_108597e30(&plStack_50,param_3,plVar12 + 0x13,plVar12 + 0x14,1);
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = *plVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar3 = (long *)plVar12[0x17];
  plVar4 = (long *)plVar12[0x18];
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if (plStack_50 != plVar3) {
    bVar8 = false;
    if ((plStack_50 == (long *)0x0) || (plVar3 == (long *)0x0)) goto joined_r0x0001085a0780;
    lVar11 = *plStack_50;
    if (lVar11 != *plVar3) {
      bVar8 = false;
      goto joined_r0x0001085a0780;
    }
    if (lVar11 != 0) {
      pdVar9 = (double *)plStack_50[1];
      pdVar10 = (double *)plVar3[1];
      do {
        lVar11 = lVar11 + -1;
        bVar8 = *pdVar9 == *pdVar10;
        if (!bVar8) break;
        pdVar9 = pdVar9 + 1;
        pdVar10 = pdVar10 + 1;
      } while (lVar11 != 0);
      goto joined_r0x0001085a0780;
    }
  }
  bVar8 = true;
joined_r0x0001085a0780:
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      lVar11 = *plVar3;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      lVar11 = *plVar3;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *plVar3 = lVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (!bVar8) {
    func_0x00010859b42c(plVar12 + 0x17,&plStack_50);
    *(ushort *)(plVar12 + 0x11) = *(ushort *)(plVar12 + 0x11) & 0xfdff;
    uStack_60 = 0;
    plStack_58 = (long *)0x0;
    FUN_10859cb28(plVar12 + 0x23,&uStack_60);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar11 = *plVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *plVar3 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    uVar5 = *(ushort *)(plVar12 + 0x11);
    if ((uVar5 >> 10 & 1) != 0) {
      func_0x00010c28b2c0(plVar12[0xe]);
      uVar5 = *(ushort *)(plVar12 + 0x11);
    }
    if (((uVar5 ^ 0xffff) & 3) == 0) {
      *(ushort *)(plVar12 + 0x11) = uVar5 & 0xfffd;
      (**(code **)(*plVar12 + 0x48))(plVar12,0);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar11 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085a091c; end: 1085a0a07; -[POPPropertyAnimation currentValue] */

void FUN_1085a091c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  FUN_10859b3a8(&uStack_40,*(undefined8 *)(param_1 + 8));
  plStack_28 = plStack_38;
  uStack_30 = uStack_40;
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  puVar5 = &uStack_30;
  FUN_108597cdc(puVar5,*(undefined4 *)(*(long *)(param_1 + 8) + 0x98),0);
  _objc_retainAutoreleasedReturnValue();
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085a0a08; end: 1085a0e33; -[POPPropertyAnimation _appendDescription:debug:] */

void FUN_1085a0a08(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  double *pdVar10;
  long *plVar11;
  double dVar12;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined **ppuStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  ppuVar4 = *(undefined ***)(*(long *)(param_1 + 8) + 0xa8);
  plStack_48 = *(long **)(*(long *)(param_1 + 8) + 0xb0);
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_50 = ppuVar4;
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dd2518;
  }
  else {
    FUN_1085a2830();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar5 = *(undefined ***)(*(long *)(param_1 + 8) + 0xb8);
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0xc0);
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppuStack_60 = ppuVar5;
  plStack_58 = plVar6;
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2518;
  }
  else {
    FUN_1085a2830();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee49d8);
  _objc_release(ppuVar5);
  if (plVar6 != (long *)0x0) {
    plVar11 = plVar6 + 1;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  _objc_release(ppuVar4);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar11 = plStack_48 + 1;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  lVar9 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar9 + 0x88) & 1) != 0) {
    FUN_10859b3a8(&ppuStack_80,lVar9);
    plVar6 = plStack_78;
    ppuVar4 = ppuStack_80;
    ppuStack_70 = ppuStack_80;
    plStack_68 = plStack_78;
    ppuStack_80 = (undefined **)0x0;
    plStack_78 = (long *)0x0;
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dd2518;
    }
    else {
      FUN_1085a2830();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee49f8);
    _objc_release(ppuVar4);
    if (plVar6 != (long *)0x0) {
      plVar11 = plVar6 + 1;
      do {
        lVar9 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78 + 1;
      do {
        lVar9 = *plVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    lVar9 = *(long *)(param_1 + 8);
  }
  plVar6 = *(long **)(lVar9 + 0xf8);
  if ((plVar6 != (long *)0x0) && (lVar8 = *plVar6, lVar8 != 0)) {
    dVar12 = 0.0;
    pdVar10 = (double *)plVar6[1];
    do {
      dVar12 = dVar12 + *pdVar10 * *pdVar10;
      lVar8 = lVar8 + -1;
      pdVar10 = pdVar10 + 1;
    } while (lVar8 != 0);
    if (dVar12 != 0.0) {
      plVar11 = *(long **)(lVar9 + 0x100);
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_1085a2830();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4578);
      _objc_release(plVar6);
      if (plVar11 != (long *)0x0) {
        plVar6 = plVar11 + 1;
        do {
          lVar9 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
    }
  }
  uVar7 = param_1;
  func_0x00010c12f4a0();
  if ((uVar7 & 1) == 0) {
    func_0x00010c12f4a0();
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4478);
  }
  lVar8 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(lVar8 + 0x138);
  if (lVar9 != 0) {
    func_0x00010bf446e0(lVar9,param_2,&PTR____CFConstantStringClassReference_110dbf078);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4a18);
    _objc_release(lVar9);
    lVar8 = *(long *)(param_1 + 8);
  }
  if ((*(ushort *)(lVar8 + 0x88) & 1) != 0) {
    func_0x00010bf06ba0(param_3,param_2,&PTR____CFConstantStringClassReference_110ee4a38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085a0e34; end: 1085a0f8b; -[POPPropertyAnimation copyWithZone:] */

undefined1 * FUN_1085a0e34(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fce28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_copyWithZone__1125b2238);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_1;
    func_0x00010c118be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52240();
    func_0x00010c1e5080(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bfbb0a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c272460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216920(puVar1);
    _objc_release(uVar2);
    func_0x00010c141ee0(param_1);
    func_0x00010c1eea00(puVar1);
    func_0x00010bf39bc0(param_1);
    func_0x00010c17c660(puVar1);
    func_0x00010c06ba60(param_1);
    func_0x00010c165bc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1085a0f8c; end: 1085a0fff;  */

void FUN_1085a0f8c(float param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_2 + 0x20);
  *(undefined1 *)(*(long *)(lVar1 + 0x140) + param_4 * 0x10 + 8) = 0;
  func_0x00010bfb2c80(param_3);
  *(double *)(*(long *)(lVar1 + 0x140) + param_4 * 0x10) = (double)param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085a1000; end: 1085a1013; +[POPSpringAnimation animation] */

void FUN_1085a1000(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085a1014; end: 1085a10cb; +[POPSpringAnimation animationWithPropertyNamed:] */

void FUN_1085a1014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf039a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c4940;
  func_0x00010c118de0(PTR_PTR_1126c4940,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5080(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1085a10cc; end: 1085a118f; -[POPSpringAnimation _initState] */

void FUN_1085a10cc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x190;
  __Znwm();
  *puVar1 = &PTR_FUN_110a57880;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[7] = 0;
  _objc_initWeak(puVar1 + 8,0);
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  *(ushort *)(puVar1 + 0x11) = *(ushort *)(puVar1 + 0x11) & 0x8000 | 6;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  *puVar1 = &PTR_FUN_110a57ca0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0x4028000000000000;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[0x2e] = 0x4010000000000000;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 1085a1190; end: 1085a1253; -[POPSpringAnimation init] */

undefined1 * FUN_1085a1190(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fce30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s__init_11256be78);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0xa0;
    __Znwm();
    auVar4 = NEON_fmov(0x3ff0000000000000,8);
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    *(undefined8 *)((long)puVar2 + 0x91) = 0;
    *(undefined8 *)((long)puVar2 + 0x89) = 0;
    puVar2[1] = auVar4._8_8_;
    *puVar2 = auVar4._0_8_;
    puVar2[3] = 0x3fe0000000000000;
    puVar2[2] = 0x3ff0000000000000;
    puVar2[5] = 0x4083880000000000;
    puVar2[4] = 0x4039000000000000;
    puVar2[7] = 0;
    puVar2[6] = 0;
    plVar3 = *(long **)((long)puVar1 + 8);
    plVar3[0x2c] = (long)puVar2;
    (**(code **)(*plVar3 + 0x50))(plVar3);
    FUN_1085a1254(*(undefined8 *)((long)puVar1 + 8));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1085a1254; end: 1085a12a7;  */

void FUN_1085a1254(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf50e60(*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x168),
                      PTR_PTR_1126c4230,param_2,(undefined8 *)(param_1 + 0x178),param_1 + 0x180,
                      param_1 + 0x188);
  puVar1 = *(undefined8 **)(param_1 + 0x160);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x188);
    uVar3 = *(undefined8 *)(param_1 + 0x178);
    puVar1[1] = *(undefined8 *)(param_1 + 0x180);
    *puVar1 = uVar3;
    puVar1[2] = uVar2;
  }
  return;
}



/* Entry: 1085a12a8; end: 1085a1303; -[POPSpringAnimation dealloc] */

void FUN_1085a12a8(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x160) != 0) {
      __ZdlPv();
      lVar1 = *(long *)(param_1 + 8);
    }
    *(undefined8 *)(lVar1 + 0x160) = 0;
  }
  puStack_28 = PTR_PTR_1126fce30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085a1304; end: 1085a13bb; -[POPSpringAnimation velocity] */

void FUN_1085a1304(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar5 = &uStack_30;
  lVar6 = *(long *)(param_1 + 8);
  plStack_28 = *(long **)(lVar6 + 0x100);
  uStack_30 = *(undefined8 *)(lVar6 + 0xf8);
  if (*(long *)(lVar6 + 0x100) != 0) {
    plVar1 = (long *)(*(long *)(lVar6 + 0x100) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar6 = *(long *)(param_1 + 8);
  }
  FUN_108597cdc(&uStack_30,*(undefined4 *)(lVar6 + 0x98),0);
  _objc_retainAutoreleasedReturnValue();
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1085a13bc; end: 1085a161f; -[POPSpringAnimation setVelocity:] */

void FUN_1085a13bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  double *pdVar8;
  double *pdVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  lVar11 = *(long *)(param_1 + 8);
  FUN_108597e30(&plStack_50,param_3,lVar11 + 0x98,lVar11 + 0xa0,1);
  FUN_108597e30(auStack_60,param_3,lVar11 + 0x98,lVar11 + 0xa0,1);
  plVar2 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar3 = plStack_48 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *plVar3 = *plVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar3 = *(long **)(lVar11 + 0xf8);
  plVar4 = *(long **)(lVar11 + 0x100);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plStack_50 != plVar3) {
    bVar7 = false;
    if ((plStack_50 == (long *)0x0) || (plVar3 == (long *)0x0)) goto joined_r0x0001085a14b0;
    lVar10 = *plStack_50;
    if (lVar10 != *plVar3) {
      bVar7 = false;
      goto joined_r0x0001085a14b0;
    }
    if (lVar10 != 0) {
      pdVar8 = (double *)plStack_50[1];
      pdVar9 = (double *)plVar3[1];
      do {
        lVar10 = lVar10 + -1;
        bVar7 = *pdVar8 == *pdVar9;
        if (!bVar7) break;
        pdVar8 = pdVar8 + 1;
        pdVar9 = pdVar9 + 1;
      } while (lVar10 != 0);
      goto joined_r0x0001085a14b0;
    }
  }
  bVar7 = true;
joined_r0x0001085a14b0:
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      lVar10 = *plVar3;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 1;
    do {
      lVar10 = *plVar3;
      cVar6 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (!bVar7) {
    func_0x00010859b42c((long *)(lVar11 + 0xf8),&plStack_50);
    func_0x00010859b42c(lVar11 + 0x108,auStack_60);
    if ((*(ushort *)(lVar11 + 0x88) >> 10 & 1) != 0) {
      func_0x00010c28bce0(*(undefined8 *)(lVar11 + 0x70));
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar11 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar11 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085a1620; end: 1085a162b; -[POPSpringAnimation dynamicsTension] */

undefined8 FUN_1085a1620(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x178);
}



/* Entry: 1085a162c; end: 1085a1647; -[POPSpringAnimation setDynamicsTension:] */

void FUN_1085a162c(double param_1,long param_2)

{
  if (param_1 == *(double *)(*(long *)(param_2 + 8) + 0x178)) {
    return;
  }
  *(double *)(*(long *)(param_2 + 8) + 0x178) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bee52b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updatedDynamicsTension_112596e50);
  return;
}



/* Entry: 1085a1648; end: 1085a1653; -[POPSpringAnimation dynamicsFriction] */

undefined8 FUN_1085a1648(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x180);
}



/* Entry: 1085a1654; end: 1085a166f; -[POPSpringAnimation setDynamicsFriction:] */

void FUN_1085a1654(double param_1,long param_2)

{
  if (param_1 == *(double *)(*(long *)(param_2 + 8) + 0x180)) {
    return;
  }
  *(double *)(*(long *)(param_2 + 8) + 0x180) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bee5270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updatedDynamicsFriction_112596e40);
  return;
}



/* Entry: 1085a1670; end: 1085a167b; -[POPSpringAnimation dynamicsMass] */

undefined8 FUN_1085a1670(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x188);
}



/* Entry: 1085a167c; end: 1085a1697; -[POPSpringAnimation setDynamicsMass:] */

void FUN_1085a167c(double param_1,long param_2)

{
  if (param_1 == *(double *)(*(long *)(param_2 + 8) + 0x188)) {
    return;
  }
  *(double *)(*(long *)(param_2 + 8) + 0x188) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bee5290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updatedDynamicsMass_112596e48);
  return;
}



/* Entry: 1085a1698; end: 1085a16a3; -[POPSpringAnimation springSpeed] */

undefined8 FUN_1085a1698(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x168);
}



/* Entry: 1085a16a4; end: 1085a1713; -[POPSpringAnimation setSpringSpeed:] */

void FUN_1085a16a4(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (((*(ushort *)(lVar1 + 0x88) >> 0xb & 1) != 0) || (param_1 != *(double *)(lVar1 + 0x168))) {
    *(double *)(lVar1 + 0x168) = param_1;
    *(ushort *)(lVar1 + 0x88) = *(ushort *)(lVar1 + 0x88) & 0xf7ff;
    FUN_1085a1254(lVar1);
    if ((*(ushort *)(lVar1 + 0x88) >> 10 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c28a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                ((float)param_1,*(undefined8 *)(lVar1 + 0x70),PTR_s_updateSpeed__1126802c0);
      return;
    }
  }
  return;
}



/* Entry: 1085a1714; end: 1085a171f; -[POPSpringAnimation springBounciness] */

undefined8 FUN_1085a1714(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x170);
}



/* Entry: 1085a1720; end: 1085a178f; -[POPSpringAnimation setSpringBounciness:] */

void FUN_1085a1720(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (((*(ushort *)(lVar1 + 0x88) >> 0xb & 1) != 0) || (param_1 != *(double *)(lVar1 + 0x170))) {
    *(double *)(lVar1 + 0x170) = param_1;
    *(ushort *)(lVar1 + 0x88) = *(ushort *)(lVar1 + 0x88) & 0xf7ff;
    FUN_1085a1254(lVar1);
    if ((*(ushort *)(lVar1 + 0x88) >> 10 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c283e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                ((float)param_1,*(undefined8 *)(lVar1 + 0x70),PTR_s_updateBounciness__11267e9b8);
      return;
    }
  }
  return;
}



/* Entry: 1085a1790; end: 1085a179b; -[POPSpringAnimation solver] */

undefined8 FUN_1085a1790(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x160);
}



/* Entry: 1085a179c; end: 1085a17db; -[POPSpringAnimation setSolver:] */

void FUN_1085a179c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_3 != *(long *)(lVar1 + 0x160)) {
    if (*(long *)(lVar1 + 0x160) != 0) {
      __ZdlPv();
      lVar1 = *(long *)(param_1 + 8);
    }
    *(long *)(lVar1 + 0x160) = param_3;
  }
  return;
}



/* Entry: 1085a17dc; end: 1085a1843; -[POPSpringAnimation _updatedDynamicsTension] */

void FUN_1085a17dc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(ushort *)(*(long *)(param_1 + 8) + 0x88) = *(ushort *)(*(long *)(param_1 + 8) + 0x88) | 0x800;
  lVar1 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar1 + 0x88) >> 10 & 1) != 0) {
    func_0x00010c28ad80((float)*(double *)(lVar1 + 0x178),*(undefined8 *)(lVar1 + 0x70));
    lVar1 = *(long *)(param_1 + 8);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x160);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x188);
    uVar4 = *(undefined8 *)(lVar1 + 0x178);
    puVar2[1] = *(undefined8 *)(lVar1 + 0x180);
    *puVar2 = uVar4;
    puVar2[2] = uVar3;
  }
  return;
}



/* Entry: 1085a1844; end: 1085a18ab; -[POPSpringAnimation _updatedDynamicsFriction] */

void FUN_1085a1844(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(ushort *)(*(long *)(param_1 + 8) + 0x88) = *(ushort *)(*(long *)(param_1 + 8) + 0x88) | 0x800;
  lVar1 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar1 + 0x88) >> 10 & 1) != 0) {
    func_0x00010c286020((float)*(double *)(lVar1 + 0x180),*(undefined8 *)(lVar1 + 0x70));
    lVar1 = *(long *)(param_1 + 8);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x160);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x188);
    uVar4 = *(undefined8 *)(lVar1 + 0x178);
    puVar2[1] = *(undefined8 *)(lVar1 + 0x180);
    *puVar2 = uVar4;
    puVar2[2] = uVar3;
  }
  return;
}



/* Entry: 1085a18ac; end: 1085a1913; -[POPSpringAnimation _updatedDynamicsMass] */

void FUN_1085a18ac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(ushort *)(*(long *)(param_1 + 8) + 0x88) = *(ushort *)(*(long *)(param_1 + 8) + 0x88) | 0x800;
  lVar1 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar1 + 0x88) >> 10 & 1) != 0) {
    func_0x00010c287800((float)*(double *)(lVar1 + 0x188),*(undefined8 *)(lVar1 + 0x70));
    lVar1 = *(long *)(param_1 + 8);
  }
  puVar2 = *(undefined8 **)(lVar1 + 0x160);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x188);
    uVar4 = *(undefined8 *)(lVar1 + 0x178);
    puVar2[1] = *(undefined8 *)(lVar1 + 0x180);
    *puVar2 = uVar4;
    puVar2[2] = uVar3;
  }
  return;
}



/* Entry: 1085a1914; end: 1085a19df; -[POPSpringAnimation _appendDescription:debug:] */

void FUN_1085a1914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fce30;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s__appendDescription_debug__112550db8,param_3,param_4);
  if ((int)param_4 != 0) {
    if ((*(ushort *)(*(long *)(param_1 + 8) + 0x88) >> 0xb & 1) == 0) {
      func_0x00010bf06ba0(param_3);
    }
    else {
      func_0x00010bf06ba0(param_3);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1085a19e0; end: 1085a1b4b; -[POPSpringAnimation copyWithZone:] */

long * FUN_1085a19e0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar6 = &uStack_50;
  puStack_38 = PTR_PTR_1126fce30;
  plVar5 = &lStack_40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(plVar5,PTR_s_copyWithZone__1125b2238);
  if (plVar5 != (long *)0x0) {
    lVar7 = *(long *)(param_1 + 8);
    uStack_50 = *(undefined8 *)(lVar7 + 0x108);
    plStack_48 = *(long **)(lVar7 + 0x110);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar7 = *(long *)(param_1 + 8);
    }
    FUN_108597cdc(&uStack_50,*(undefined4 *)(lVar7 + 0x98),0);
    _objc_retainAutoreleasedReturnValue();
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      func_0x00010c220640(plVar5);
    }
    func_0x00010c24c980(param_1);
    func_0x00010c208f00(plVar5);
    func_0x00010c24c9e0(param_1);
    func_0x00010c208f20(plVar5);
    func_0x00010bf8bcc0(param_1);
    func_0x00010c193240(plVar5);
    func_0x00010bf8bc80(param_1);
    func_0x00010c193200(plVar5);
    func_0x00010bf8bca0(param_1);
    func_0x00010c193220(plVar5);
    _objc_release(puVar6);
  }
  return plVar5;
}



/* Entry: 1085a1b4c; end: 1085a1b4f;  */

undefined8 * FUN_1085a1b4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110a57b98;
  if (param_1[0x28] != 0) {
    _free();
    param_1[0x28] = 0;
  }
  _objc_release(param_1[0x27]);
  FUN_108598298(param_1 + 0x23);
  FUN_108598298(param_1 + 0x21);
  FUN_108598298(param_1 + 0x1f);
  FUN_108598298(param_1 + 0x1d);
  FUN_108598298(param_1 + 0x1b);
  FUN_108598298(param_1 + 0x19);
  FUN_108598298(param_1 + 0x17);
  FUN_108598298(param_1 + 0x15);
  _objc_release(param_1[0x12]);
  *param_1 = &PTR_FUN_110a57880;
  uVar1 = param_1[3];
  param_1[3] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = 0;
  _objc_release(uVar1);
  _objc_release(param_1[0xe]);
  _objc_release(param_1[0xd]);
  _objc_release(param_1[0xc]);
  _objc_release(param_1[0xb]);
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  _objc_destroyWeak(param_1 + 8);
  _objc_release(param_1[3]);
  return param_1;
}



/* Entry: 1085a1b50; end: 1085a1b63;  */

void FUN_1085a1b50(void)

{
  FUN_10859c894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


