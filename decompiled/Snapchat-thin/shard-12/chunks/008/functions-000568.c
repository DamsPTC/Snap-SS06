/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109a04470; end: 109a0448f;  */

void FUN_109a04470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b208f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a04490; end: 109a0449f;  */

void FUN_109a04490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109a04498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109a044a0; end: 109a0454f;  */

void FUN_109a044a0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar4 = param_2[1], lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar5 = *(long **)(param_1 + 8);
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
      plVar1 = plVar5 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
        return;
      }
    }
  }
  return;
}



/* Entry: 109a04550; end: 109a045a7;  */

void FUN_109a04550(long *param_1)

{
  long lVar1;
  
  lVar1 = 200;
  __Znwm();
  FUN_109a045a8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109a045a8; end: 109a045ef;  */

undefined8 * FUN_109a045a8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b20940;
  FUN_109a095b8(param_1 + 3);
  return param_1;
}



/* Entry: 109a045f0; end: 109a045ff;  */

void FUN_109a045f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20940;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a04600; end: 109a0461f;  */

void FUN_109a04600(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20940;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a04620; end: 109a046bb;  */

void FUN_109a04620(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xb0;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x98;
  FUN_109a046c0(&lStack_28);
  func_0x000109a02b20(param_1 + 0x88);
  lStack_28 = param_1 + 0x70;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x58;
  func_0x000109a04754(&lStack_28);
  if (*(long *)(param_1 + 0x50) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 109a046bc; end: 109a046bf;  */

void FUN_109a046bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a046c0; end: 109a046ff;  */

void FUN_109a046c0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_109a04700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 109a04700; end: 109a047c3;  */

void FUN_109a04700(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    lVar3 = -0x10;
    do {
      func_0x000109a02b20(lVar2 + lVar3);
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != -0x30);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 109a047c4; end: 109a04803;  */

undefined8 * FUN_109a047c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *extraout_x8;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  FUN_1092315e8();
  puVar2 = (undefined8 *)0x2a0;
  __Znwm();
  puVar3 = puVar2;
  FUN_109a04864();
  *extraout_x8 = (long)(puVar2 + 3);
  extraout_x8[1] = (long)puVar2;
  return puVar3;
}



/* Entry: 109a04804; end: 109a04863;  */

void FUN_109a04804(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x2a0;
  __Znwm();
  FUN_109a04864();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109a04864; end: 109a048ab;  */

undefined8 * FUN_109a04864(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b20990;
  FUN_109a049bc(param_1 + 3);
  return param_1;
}



/* Entry: 109a048ac; end: 109a048bb;  */

void FUN_109a048ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20990;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a048bc; end: 109a048db;  */

void FUN_109a048bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20990;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a048dc; end: 109a049b7;  */

void FUN_109a048dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x278) != 0) {
    *(long *)(param_1 + 0x280) = *(long *)(param_1 + 0x278);
    __ZdlPv();
  }
  lVar1 = param_1 + 0x230;
  lVar2 = -0xf0;
  do {
    FUN_109a04a40(lVar1);
    lVar1 = lVar1 + -0x18;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x148;
  lVar2 = -0x40;
  do {
    FUN_109a00804(lVar1);
    lVar1 = lVar1 + -0x10;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0);
  FUN_109a00804(param_1 + 0x108);
  FUN_109a00804(param_1 + 0xf8);
  FUN_109a00804(param_1 + 0xe8);
  func_0x000109a04a98(param_1 + 0xd8);
  FUN_109a00804(param_1 + 200);
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x58;
  FUN_109a04af0(&lStack_28);
  func_0x000109a04bb8(param_1 + 0x40);
  func_0x000109a04c10(param_1 + 0x30);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return;
}



/* Entry: 109a049b8; end: 109a049bb;  */

void FUN_109a049b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a049bc; end: 109a04a3f;  */

undefined8 FUN_109a049bc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  FUN_109a052bc();
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



/* Entry: 109a04a40; end: 109a04aef;  */

long FUN_109a04a40(long param_1)

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



/* Entry: 109a04af0; end: 109a04b5f;  */

void FUN_109a04af0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109a04b60();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a04b60; end: 109a04c67;  */

long FUN_109a04b60(long param_1)

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



/* Entry: 109a04c68; end: 109a04cc7;  */

void FUN_109a04c68(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x68;
  __Znwm();
  FUN_109a04cc8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109a04cc8; end: 109a04d0f;  */

undefined8 * FUN_109a04cc8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b209e0;
  FUN_109a04d98(param_1 + 3);
  return param_1;
}



/* Entry: 109a04d10; end: 109a04d1f;  */

void FUN_109a04d10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b209e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a04d20; end: 109a04d3f;  */

void FUN_109a04d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b209e0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a04d40; end: 109a04d93;  */

void FUN_109a04d40(long param_1)

{
  long lStack_28;
  
  FUN_109a04e20(param_1 + 0x58);
  lStack_28 = param_1 + 0x40;
  FUN_109a04e78(&lStack_28);
  lStack_28 = param_1 + 0x28;
  FUN_109a04fe8(&lStack_28);
  func_0x0001099f0ce8(param_1 + 0x18);
  return;
}



/* Entry: 109a04d94; end: 109a04d97;  */

void FUN_109a04d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a04d98; end: 109a04e1f;  */

undefined8 FUN_109a04d98(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)param_2[1];
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_109a13448(param_1,&uStack_30);
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



/* Entry: 109a04e20; end: 109a04e77;  */

long FUN_109a04e20(long param_1)

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



/* Entry: 109a04e78; end: 109a04f57;  */

void FUN_109a04e78(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        func_0x000109a04ee8(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 109a04f58; end: 109a04fe7;  */

long FUN_109a04f58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = param_1 + 0x20;
  lVar5 = -0x20;
  do {
    FUN_109a04a40(lVar4);
    lVar4 = lVar4 + -0x10;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0);
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 109a04fe8; end: 109a05057;  */

void FUN_109a04fe8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x000109a04f90();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a05058; end: 109a050b7;  */

void FUN_109a05058(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x98;
  __Znwm();
  FUN_109a050b8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109a050b8; end: 109a050ff;  */

undefined8 * FUN_109a050b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b20a30;
  FUN_109a05184(param_1 + 3);
  return param_1;
}



/* Entry: 109a05100; end: 109a0510f;  */

void FUN_109a05100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20a30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a05110; end: 109a0512f;  */

void FUN_109a05110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20a30;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a05130; end: 109a0517f;  */

long FUN_109a05130(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109a04a40(param_1 + 0x88);
  FUN_109a04a40(param_1 + 0x78);
  FUN_109a00804(param_1 + 0x68);
  FUN_109a00804(param_1 + 0x58);
  FUN_109a00804(param_1 + 0x48);
  FUN_109a00804(param_1 + 0x38);
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 109a05180; end: 109a05183;  */

void FUN_109a05180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a05184; end: 109a0520b;  */

undefined8 FUN_109a05184(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar5 = (long *)param_2[1];
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_109a1475c(param_1,&uStack_30);
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



/* Entry: 109a0520c; end: 109a052bb;  */

long FUN_109a0520c(long param_1)

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



/* Entry: 109a052bc; end: 109a0543b;  */

undefined8 * FUN_109a052bc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  lVar3 = 0x140;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x230);
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  pcVar2 = "";
  if ((char *)*param_3 != (char *)0x0) {
    pcVar2 = (char *)*param_3;
  }
  func_0x000107c2c4dc(param_1,pcVar2);
  return param_1;
}



/* Entry: 109a0543c; end: 109a06d07;  */

/* WARNING: Removing unreachable block (ram,0x000109a066c8) */
/* WARNING: Removing unreachable block (ram,0x000109a066cc) */
/* WARNING: Removing unreachable block (ram,0x000109a066d4) */
/* WARNING: Removing unreachable block (ram,0x000109a066dc) */
/* WARNING: Removing unreachable block (ram,0x000109a066e0) */

void FUN_109a0543c(long *param_1,long param_2,ulong param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  code *pcVar10;
  bool bVar11;
  long *plVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  byte *pbVar28;
  undefined8 *puVar29;
  undefined4 *puVar30;
  long *plVar31;
  undefined8 uVar32;
  long *plVar33;
  long *plVar34;
  undefined8 uVar35;
  long *plVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  ulong uVar39;
  long *plVar40;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long lStack_258;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined4 uStack_230;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d0;
  long *plStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long lStack_180;
  long *plStack_178;
  long lStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = FUN_109a07d00;
  if (param_5 != (code *)0x0) {
    pcVar10 = param_5;
  }
  if (param_4 == 0) {
    plStack_250 = (long *)0x0;
    plStack_248 = (long *)0x0;
  }
  else {
    (**(code **)(**(long **)(*param_1 + 0x10) + 0x30))
              (&plStack_120,*(long **)(*param_1 + 0x10),param_4,0);
    (**(code **)(*plStack_120 + 0x10))(&plStack_e0,plStack_120,0,0xffffffffffffffff);
    plStack_248 = plStack_d8;
    plStack_250 = plStack_e0;
    if (plStack_118 != (long *)0x0) {
      plVar12 = plStack_118 + 1;
      do {
        lVar24 = *plVar12;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar11) {
          *plVar12 = lVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
      }
    }
  }
  __ZNSt3__115recursive_mutexC1Ev(&plStack_120);
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_160 = 0x3cb0b1bb;
  uStack_138 = 0;
  plVar12 = (long *)0x58;
  __Znwm();
  plVar12[2] = 0;
  plStack_130 = plVar12 + 3;
  *plStack_130 = 0x32aaaba7;
  *plVar12 = (long)&PTR_FUN_110b00d28;
  plVar12[1] = 0;
  plVar12[5] = 0;
  plVar12[4] = 0;
  plVar12[7] = 0;
  plVar12[6] = 0;
  plVar12[9] = 0;
  plVar12[8] = 0;
  plVar12[10] = 0;
  plStack_260 = (long *)0x0;
  lStack_258 = 0;
  plStack_270 = (long *)0x0;
  plStack_268 = (long *)0x0;
  plStack_128 = plVar12;
  if (param_3 == 0) {
    plVar36 = (long *)0x0;
    plVar12 = (long *)0x0;
  }
  else {
    if (0x1c71c71c71c71c7 < param_3) goto LAB_109a06b20;
    plVar12 = (long *)(param_3 * 0x90);
    __Znwm();
    plStack_260 = plVar12 + param_3 * 0x12;
    plStack_270 = plVar12;
    _bzero();
    uVar39 = 0;
    plStack_268 = plVar12 + ((ulong)((long *)(param_3 * 0x90) + -0x12) / 0x90) * 0x12 + 0x12;
    do {
      lVar25 = param_1[1];
      lVar24 = *param_1;
      if (param_1[1] != 0) {
        plVar12 = (long *)(param_1[1] + 8);
        do {
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *plVar12 = *plVar12 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      plVar12 = plStack_270 + uVar39 * 0x12;
      plVar36 = (long *)plVar12[1];
      plVar12[1] = lVar25;
      *plVar12 = lVar24;
      if (plVar36 != (long *)0x0) {
        plVar12 = plVar36 + 1;
        do {
          lVar24 = *plVar12;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *plVar12 = lVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar36 + 0x10))(plVar36);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar36);
        }
      }
      plVar12 = plStack_270;
      func_0x0001099fff20(plStack_270 + uVar39 * 0x12 + 2,&plStack_250);
      plVar12[uVar39 * 0x12 + 4] = (long)&plStack_120;
      plVar12[uVar39 * 0x12 + 5] = (long)&uStack_160;
      lVar24 = param_2 + uVar39 * 0x70;
      plVar12[uVar39 * 0x12 + 6] = (long)&lStack_258;
      plVar12[uVar39 * 0x12 + 7] = lVar24;
      if (*(long *)(lVar24 + 0x18) != 0) {
        uVar3 = *(uint *)(lVar24 + 0x28);
        iVar4 = *(int *)(lVar24 + 0x2c);
        (**(code **)(**(long **)(*param_1 + 0x10) + 0x30))
                  (&plStack_200,*(long **)(*param_1 + 0x10),*(long *)(lVar24 + 0x18),
                   *(uint *)(lVar24 + 0x68) >> 2 & 1);
        lVar25 = 1;
        if (iVar4 != 0) {
          lVar25 = 2;
        }
        (**(code **)(*plStack_200 + 0x10))
                  (&plStack_e0,plStack_200,*(undefined8 *)(lVar24 + 0x20),(ulong)uVar3 << lVar25);
        FUN_109a06d08(plVar12 + uVar39 * 0x12 + 8,&plStack_e0);
        plVar12 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar36 = plStack_d8 + 1;
          do {
            lVar25 = *plVar36;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar11) {
              *plVar36 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar36 = plStack_1f8 + 1;
          do {
            lVar25 = *plVar36;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar11) {
              *plVar36 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      if (*(long *)(lVar24 + 0x40) != 0) {
        lVar25 = *(long *)(lVar24 + 0x48);
        iVar8 = *(int *)(lVar24 + 0x30);
        iVar4 = *(int *)(lVar24 + 0x50);
        iVar5 = *(int *)(lVar24 + 0x54);
        (**(code **)(**(long **)(*param_1 + 0x10) + 0x30))
                  (&plStack_200,*(long **)(*param_1 + 0x10),*(long *)(lVar24 + 0x40),
                   *(uint *)(lVar24 + 0x68) & 1);
        (**(code **)(*plStack_200 + 0x10))
                  (&plStack_e0,plStack_200,lVar25 + (ulong)(uint)(iVar4 * iVar8),iVar5 * iVar4);
        FUN_109a06d08(plStack_270 + uVar39 * 0x12 + 10,&plStack_e0);
        plVar12 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar36 = plStack_d8 + 1;
          do {
            lVar24 = *plVar36;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar11) {
              *plVar36 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar36 = plStack_1f8 + 1;
          do {
            lVar24 = *plVar36;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
            if (bVar11) {
              *plVar36 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
      }
      plVar12 = plStack_268;
      uVar39 = uVar39 + 1;
    } while (uVar39 != param_3);
    plVar36 = plStack_268;
    if (plStack_268 != plStack_270) {
      lVar24 = 0;
      uVar39 = 0;
      do {
        lVar25 = *(long *)((long)plStack_270 + lVar24 + 0x38);
        if ((*(long *)(lVar25 + 0x38) == 0) || (*(long *)(lVar25 + 0x60) == 0)) {
          FUN_109a06d90();
          plVar36 = (long *)((long)plStack_270 + lVar24);
          pcVar13 = FUN_109a077d4;
        }
        else {
          plVar36 = plStack_270 + uVar39 * 0x12;
          pcVar13 = (code *)0x109a06d6c;
        }
        (*pcVar10)(pcVar13,plVar36,param_6);
        uVar39 = uVar39 + 1;
        lVar24 = lVar24 + 0x90;
        plVar36 = plStack_270;
      } while (uVar39 < (ulong)(((long)plVar12 - (long)plStack_270 >> 4) * -0x71c71c71c71c71c7));
    }
  }
  __ZNSt3__115recursive_mutex4lockEv(&plStack_120);
  plVar33 = plStack_200;
  plVar40 = plStack_130;
  while (plVar34 = plStack_128, plStack_200 = plVar40, plStack_130 = plStack_200,
        plStack_128 = plVar34,
        lStack_258 != ((long)plVar12 - (long)plVar36 >> 4) * -0x71c71c71c71c71c7) {
    if (plVar34 != (long *)0x0) {
      plVar33 = plVar34 + 1;
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *plVar33 = *plVar33 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    uVar39 = (ulong)plStack_1f8 >> 8;
    plStack_1f8 = (long *)CONCAT71((int7)uVar39,1);
    plStack_e0 = plStack_200;
    plStack_d8 = plVar34;
    __ZNSt3__15mutex4lockEv();
    __ZNSt3__115recursive_mutex6unlockEv(&plStack_120);
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(&uStack_160,&plStack_200);
    if (((ulong)plStack_1f8 & 1) == 0) {
      __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f406df1);
      goto LAB_109a06b24;
    }
    __ZNSt3__15mutex6unlockEv(plStack_200);
    plStack_1f8 = (long *)((ulong)plStack_1f8 & 0xffffffffffffff00);
    __ZNSt3__115recursive_mutex4lockEv(&plStack_120);
    if ((char)plStack_1f8 == '\x01') {
      __ZNSt3__15mutex6unlockEv(plStack_200);
    }
    plVar33 = plStack_200;
    plVar40 = plStack_130;
    if (plVar34 != (long *)0x0) {
      plVar40 = plVar34 + 1;
      do {
        lVar24 = *plVar40;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar11) {
          *plVar40 = lVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      plVar40 = plStack_130;
      if (lVar24 == 0) {
        (**(code **)(*plVar34 + 0x10))(plVar34);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
        plVar33 = plStack_200;
        plVar40 = plStack_130;
      }
    }
  }
  plStack_200 = plVar33;
  __ZNSt3__115recursive_mutex6unlockEv(&plStack_120);
  plVar36 = plStack_268;
  for (plVar12 = plStack_270; plVar12 != plVar36; plVar12 = plVar12 + 0x12) {
    plStack_168 = (long *)plVar12[1];
    lStack_170 = *plVar12;
    if (plVar12[1] != 0) {
      plVar33 = (long *)(plVar12[1] + 8);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *plVar33 = *plVar33 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    puVar29 = (undefined8 *)plVar12[7];
    plStack_178 = (long *)plVar12[9];
    lStack_180 = plVar12[8];
    if (plVar12[9] != 0) {
      plVar33 = (long *)(plVar12[9] + 8);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *plVar33 = *plVar33 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    plStack_188 = (long *)plVar12[0xb];
    plStack_190 = (long *)plVar12[10];
    if (plVar12[0xb] != 0) {
      plVar33 = (long *)(plVar12[0xb] + 8);
      do {
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar11) {
          *plVar33 = *plVar33 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    if ((*(byte *)(puVar29 + 0xd) >> 4 & 1) == 0) {
      plVar40 = (long *)*puVar29;
      puVar14 = (undefined8 *)0x38;
      __Znwm();
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = &PTR_FUN_110b20ad0;
      puVar14[3] = 0xffffffff;
      puVar14[5] = 0;
      puVar14[6] = 0;
      puVar14[4] = 0;
      lVar24 = *plVar40;
      plVar33 = *(long **)(lVar24 + 0x30);
      *(undefined8 **)(lVar24 + 0x28) = puVar14 + 3;
      *(undefined8 **)(lVar24 + 0x30) = puVar14;
      if (plVar33 != (long *)0x0) {
        plVar34 = plVar33 + 1;
        do {
          lVar24 = *plVar34;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar11) {
            *plVar34 = lVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
        }
      }
      puVar14 = *(undefined8 **)(*plVar40 + 0x28);
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar29 + 5);
      *puVar14 = *(undefined8 *)((long)puVar29 + 0x2c);
      func_0x0001099fff20(puVar14 + 2,plVar12 + 8);
      lVar24 = *plVar40;
      plVar33 = (long *)0x50;
      __Znwm();
      plVar34 = plVar33 + 1;
      *plVar34 = 0;
      plVar33[2] = 0;
      *plVar33 = (long)&PTR_DAT_110b20b20;
      plStack_e0 = plVar33 + 3;
      *plStack_e0 = 0;
      plVar33[4] = 0;
      *(undefined4 *)((long)plVar33 + 0x1c) = 0xffffffff;
      plVar33[6] = 0;
      plVar33[5] = 0;
      plVar33[8] = 0;
      plVar33[7] = 0;
      plVar33[9] = 0;
      puVar37 = (undefined8 *)(lVar24 + 0x40);
      puVar14 = (undefined8 *)*puVar37;
      puVar38 = *(undefined8 **)(lVar24 + 0x50);
      plStack_d8 = plVar33;
      if (puVar38 == puVar14) {
        if (puVar38 != (undefined8 *)0x0) {
          puVar15 = *(undefined8 **)(lVar24 + 0x48);
          puVar18 = puVar14;
          if (puVar15 != puVar38) {
            do {
              puVar15 = puVar15 + -2;
              FUN_109a04b60();
            } while (puVar15 != puVar38);
            puVar18 = (undefined8 *)*puVar37;
          }
          *(undefined8 **)(lVar24 + 0x48) = puVar14;
          __ZdlPv(puVar18);
          *puVar37 = 0;
          *(undefined8 *)(lVar24 + 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x50) = 0;
        }
        puVar37 = (undefined8 *)0x10;
        __Znwm();
        *(undefined8 **)(lVar24 + 0x40) = puVar37;
        *(undefined8 **)(lVar24 + 0x48) = puVar37;
        puVar14 = puVar37 + 2;
        *(undefined8 **)(lVar24 + 0x50) = puVar14;
        *puVar37 = plStack_e0;
        puVar37[1] = plVar33;
        do {
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar11) {
            *plVar34 = *plVar34 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
LAB_109a05cd0:
        *(undefined8 **)(lVar24 + 0x48) = puVar14;
LAB_109a05cd4:
        plVar34 = plVar33 + 1;
        do {
          lVar24 = *plVar34;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar11) {
            *plVar34 = lVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
        }
      }
      else {
        puVar37 = *(undefined8 **)(lVar24 + 0x48);
        if (puVar37 == puVar14) {
          *puVar37 = plStack_e0;
          puVar37[1] = plVar33;
          do {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = *plVar34 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          puVar14 = (undefined8 *)(((long)puVar37 * 2 + 0x10) - (long)puVar14);
          goto LAB_109a05cd0;
        }
        do {
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar11) {
            *plVar34 = *plVar34 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        plVar34 = (long *)puVar14[1];
        *puVar14 = plStack_e0;
        puVar14[1] = plVar33;
        if (plVar34 != (long *)0x0) {
          plVar33 = plVar34 + 1;
          do {
            lVar25 = *plVar33;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar11) {
              *plVar33 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plVar34 + 0x10))(plVar34);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
          }
        }
        puVar37 = *(undefined8 **)(lVar24 + 0x48);
        while (puVar37 != puVar14 + 2) {
          puVar37 = puVar37 + -2;
          FUN_109a04b60();
        }
        *(undefined8 **)(lVar24 + 0x48) = puVar14 + 2;
        plVar33 = plStack_d8;
        if (plStack_d8 != (long *)0x0) goto LAB_109a05cd4;
      }
      puVar30 = (undefined4 *)**(undefined8 **)(*plVar40 + 0x40);
      *puVar30 = (int)puVar29[9];
      puVar16 = *(undefined4 **)(puVar30 + 4);
      *(undefined8 *)(puVar30 + 1) = puVar29[10];
      uVar17 = 1;
      if (*(int *)(puVar29 + 0xb) == 1) {
        uVar17 = 2;
      }
      if (*(undefined4 **)(puVar30 + 8) == puVar16) {
        if (*(undefined4 **)(puVar30 + 8) != (undefined4 *)0x0) {
          *(undefined4 **)(puVar30 + 6) = puVar16;
          __ZdlPv();
          *(undefined8 *)(puVar30 + 4) = 0;
          *(undefined8 *)(puVar30 + 6) = 0;
          *(undefined8 *)(puVar30 + 8) = 0;
        }
        puVar19 = (undefined4 *)0xc;
        __Znwm();
        *(undefined4 **)(puVar30 + 4) = puVar19;
        puVar16 = puVar19 + 3;
        *(undefined4 **)(puVar30 + 8) = puVar16;
        *puVar19 = 0;
        puVar19[1] = uVar17;
        puVar19[2] = 0;
      }
      else {
        puVar19 = *(undefined4 **)(puVar30 + 6);
        if (puVar19 == puVar16) {
          *puVar19 = 0;
          puVar19[1] = uVar17;
          puVar19[2] = 0;
          puVar16 = puVar19 + 3;
        }
        else {
          *puVar16 = 0;
          puVar16[1] = uVar17;
          puVar16[2] = 0;
          puVar16 = puVar16 + 3;
        }
      }
      *(undefined4 **)(puVar30 + 6) = puVar16;
      (**(code **)(*plStack_190 + 0x10))(&plStack_e0);
      FUN_109a082d0(**(long **)(*plVar40 + 0x40) + 0x28,&plStack_e0);
      plVar33 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar34 = plStack_d8 + 1;
        do {
          lVar24 = *plVar34;
          cVar9 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
          if (bVar11) {
            *plVar34 = lVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
        }
      }
      func_0x0001099fff20(*plVar40 + 0xb0,&plStack_190);
      lVar24 = *plVar40;
      *(undefined4 *)(lVar24 + 0x38) = 1;
      uVar17 = *(undefined4 *)(puVar29 + 10);
      puVar16 = *(undefined4 **)(lVar24 + 0x60);
      if (puVar16 < *(undefined4 **)(lVar24 + 0x68)) {
        puVar30 = puVar16 + 1;
        *puVar16 = uVar17;
      }
      else {
        lVar25 = (long)puVar16 - *(long *)(lVar24 + 0x58);
        uVar39 = (lVar25 >> 2) + 1;
        if (uVar39 >> 0x3e != 0) {
          FUN_109a0845c();
          goto LAB_109a06b24;
        }
        uVar20 = (long)*(undefined4 **)(lVar24 + 0x68) - *(long *)(lVar24 + 0x58);
        uVar27 = (long)uVar20 >> 1;
        if (uVar27 <= uVar39) {
          uVar27 = uVar39;
        }
        if (0x7ffffffffffffffb < uVar20) {
          uVar27 = 0x3fffffffffffffff;
        }
        lVar21 = lVar24 + 0x58;
        FUN_109a08470();
        lVar26 = *(long *)(lVar24 + 0x58);
        puVar16 = (undefined4 *)(lVar21 + lVar25);
        lVar22 = (long)puVar16 - (*(long *)(lVar24 + 0x60) - lVar26);
        puVar30 = puVar16 + 1;
        *puVar16 = uVar17;
        _memcpy(lVar22,lVar26);
        lVar25 = *(long *)(lVar24 + 0x58);
        *(long *)(lVar24 + 0x58) = lVar22;
        *(undefined4 **)(lVar24 + 0x60) = puVar30;
        *(ulong *)(lVar24 + 0x68) = lVar21 + uVar27 * 4;
        if (lVar25 != 0) {
          __ZdlPv();
        }
      }
      *(undefined4 **)(lVar24 + 0x60) = puVar30;
      lVar24 = *plVar40;
      uVar17 = 4;
      if (*(int *)(puVar29 + 0xb) != 1) {
        uVar17 = 2;
      }
      puVar16 = *(undefined4 **)(lVar24 + 0x78);
      if (puVar16 < *(undefined4 **)(lVar24 + 0x80)) {
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar30 = puVar16 + 3;
        *puVar16 = uVar17;
      }
      else {
        lVar25 = (long)puVar16 - *(long *)(lVar24 + 0x70);
        uVar39 = (lVar25 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar39) {
          FUN_109a084a4();
          goto LAB_109a06b24;
        }
        lVar21 = (long)*(undefined4 **)(lVar24 + 0x80) - *(long *)(lVar24 + 0x70) >> 2;
        uVar27 = lVar21 * 0x5555555555555556;
        if (uVar27 < uVar39 || uVar27 - uVar39 == 0) {
          uVar27 = uVar39;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar21 * -0x5555555555555555)) {
          uVar27 = 0x1555555555555555;
        }
        lVar21 = lVar24 + 0x70;
        func_0x000109a084b8();
        lVar26 = *(long *)(lVar24 + 0x70);
        lVar22 = *(long *)(lVar24 + 0x78);
        puVar16 = (undefined4 *)(lVar21 + lVar25);
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = uVar17;
        puVar30 = puVar16 + 3;
        lVar22 = (long)puVar16 - (lVar22 - lVar26);
        _memcpy(lVar22,lVar26);
        lVar25 = *(long *)(lVar24 + 0x70);
        *(long *)(lVar24 + 0x70) = lVar22;
        *(undefined4 **)(lVar24 + 0x78) = puVar30;
        *(ulong *)(lVar24 + 0x80) = lVar21 + uVar27 * 0xc;
        if (lVar25 != 0) {
          __ZdlPv();
        }
      }
      lVar25 = lStack_170;
      *(undefined4 **)(lVar24 + 0x78) = puVar30;
      pbVar28 = *(byte **)(*plVar40 + 0x18);
      if ((*pbVar28 >> 1 & 1) != 0) {
        lVar24 = *(ulong *)(pbVar28 + 0x88) * 0xc;
        if (*(ulong *)(pbVar28 + 0x88) < 2) {
          lVar24 = 0;
        }
        lVar21 = *(ulong *)(pbVar28 + 0x90) * 0xc;
        if (*(ulong *)(pbVar28 + 0x90) < 2) {
          lVar21 = 0;
        }
        lVar26 = *(ulong *)(pbVar28 + 0x98) * 0xc;
        if (*(ulong *)(pbVar28 + 0x98) < 2) {
          lVar26 = 0;
        }
        lVar22 = *(ulong *)(pbVar28 + 0xa0) * 0xc;
        if (*(ulong *)(pbVar28 + 0xa0) < 2) {
          lVar22 = 0;
        }
        lVar2 = 0xc;
        if (*(long *)(pbVar28 + 0xa8) != 0) {
          lVar2 = *(long *)(pbVar28 + 0xa8) * 0xc;
        }
        plVar33 = *(long **)(lStack_170 + 0x10);
        (**(code **)(*plVar33 + 0x28))(plVar33,0x20);
        lVar23 = *plVar40;
        uVar39 = -(long)plVar33;
        uVar27 = (long)plVar33 + lVar24 + -1 & uVar39;
        *(undefined8 *)(lVar23 + 0x88) = 0;
        *(ulong *)(lVar23 + 0x90) = uVar27;
        uVar27 = (long)plVar33 + uVar27 + lVar21 + -1 & uVar39;
        uVar39 = (long)plVar33 + uVar27 + lVar26 + -1 & uVar39;
        *(ulong *)(lVar23 + 0x98) = uVar27;
        *(ulong *)(lVar23 + 0xa0) = uVar39;
        lVar1 = uVar39 + lVar22;
        *(long *)(lVar23 + 0xa8) = lVar1;
        plVar33 = *(long **)(lVar25 + 0x10);
        FUN_109a11a78(&plStack_e0,*(undefined8 *)(lVar23 + 0x18),plVar12[0xc],
                      (plVar12[0xd] - plVar12[0xc] >> 2) * -0x5555555555555555);
        (**(code **)(*plVar33 + 0x40))
                  (&plStack_1a0,plVar33,0x20,plStack_e0,(long)plStack_d8 - (long)plStack_e0);
        if (plStack_e0 != (long *)0x0) {
          plStack_d8 = plStack_e0;
          __ZdlPv();
        }
        (**(code **)(*plStack_1a0 + 0x10))(&plStack_e0,plStack_1a0,0,0xffffffffffffffff);
        plStack_1f8 = plStack_d8;
        plStack_200 = plStack_e0;
        FUN_109a06d08(*plVar40 + 0xd0,&plStack_200);
        plVar33 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar34 = plStack_1f8 + 1;
          do {
            lVar25 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        plVar33 = *(long **)(lStack_170 + 0x10);
        func_0x000109a11b4c(&plStack_e0,*(undefined8 *)(*plVar40 + 0x18));
        (**(code **)(*plVar33 + 0x40))
                  (&plStack_1b0,plVar33,0x20,plStack_e0,(long)plStack_d8 - (long)plStack_e0);
        if (plStack_e0 != (long *)0x0) {
          plStack_d8 = plStack_e0;
          __ZdlPv();
        }
        (**(code **)(*plStack_1b0 + 0x10))(&plStack_e0,plStack_1b0,0,0xffffffffffffffff);
        plStack_1f8 = plStack_d8;
        plStack_200 = plStack_e0;
        FUN_109a06d08(*plVar40 + 0xe0,&plStack_200);
        plVar33 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar34 = plStack_1f8 + 1;
          do {
            lVar25 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        (**(code **)(**(long **)(lStack_170 + 0x10) + 0x38))
                  (&plStack_240,*(long **)(lStack_170 + 0x10),0x20,*(long *)(pbVar28 + 0x78) * 0x14)
        ;
        (**(code **)(*plStack_240 + 0x10))(&plStack_e0,plStack_240,0,0xffffffffffffffff);
        plStack_1f8 = plStack_d8;
        plStack_200 = plStack_e0;
        FUN_109a06d08(*plVar40 + 0xf0,&plStack_200);
        plVar33 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar34 = plStack_1f8 + 1;
          do {
            lVar25 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        plVar33 = plStack_238;
        if (plStack_238 != (long *)0x0) {
          plVar34 = plStack_238 + 1;
          do {
            lVar25 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar25 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar25 == 0) {
            (**(code **)(*plStack_238 + 0x10))(plStack_238);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        (**(code **)(**(long **)(lStack_170 + 0x10) + 0x38))
                  (&plStack_1c0,*(long **)(lStack_170 + 0x10),0x20,lVar1 + lVar2);
        if (lVar24 == 0) {
          plStack_e0 = (long *)0x0;
          plStack_d8 = (long *)0x0;
          puStack_d0 = (undefined8 *)0x0;
        }
        else {
          (**(code **)(*plStack_1c0 + 0x10))(&plStack_e0,plStack_1c0,0);
        }
        FUN_109a06d08(*plVar40 + 0x100,&plStack_e0);
        puVar14 = puStack_d0;
        plVar33 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar34 = plStack_d8 + 1;
          do {
            lVar24 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        if (lVar21 == 0) {
          plStack_e0 = (long *)0x0;
          plStack_d8 = (long *)0x0;
          puStack_d0 = puVar14;
        }
        else {
          (**(code **)(*plStack_1c0 + 0x10))(&plStack_e0,plStack_1c0,puVar14);
        }
        FUN_109a06d08(*plVar40 + 0x110,&plStack_e0);
        puVar14 = puStack_d0;
        plVar33 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar34 = plStack_d8 + 1;
          do {
            lVar24 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        if (lVar26 == 0) {
          plStack_e0 = (long *)0x0;
          plStack_d8 = (long *)0x0;
          puStack_d0 = puVar14;
        }
        else {
          (**(code **)(*plStack_1c0 + 0x10))(&plStack_e0,plStack_1c0,puVar14);
        }
        FUN_109a06d08(*plVar40 + 0x120,&plStack_e0);
        puVar14 = puStack_d0;
        plVar33 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar34 = plStack_d8 + 1;
          do {
            lVar24 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        if (lVar2 + lVar22 == 0) {
          plStack_e0 = (long *)0x0;
          plStack_d8 = (long *)0x0;
          puStack_d0 = puVar14;
        }
        else {
          (**(code **)(*plStack_1c0 + 0x10))(&plStack_e0,plStack_1c0,puVar14,lVar2 + lVar22);
        }
        FUN_109a06d08(*plVar40 + 0x130,&plStack_e0);
        plVar33 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar34 = plStack_d8 + 1;
          do {
            lVar24 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        (**(code **)(**(long **)(lStack_170 + 0x10) + 0x48))
                  (&plStack_200,*(long **)(lStack_170 + 0x10),0x60);
        (**(code **)(*plStack_200 + 0x10))(&plStack_e0,plStack_200,0,0x60);
        plVar34 = plStack_d8;
        plVar33 = plStack_e0;
        if (plStack_d8 != (long *)0x0) {
          plVar31 = plStack_d8 + 1;
          do {
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar11) {
              *plVar31 = *plVar31 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (plStack_d8 != (long *)0x0) {
            plVar31 = plStack_d8 + 1;
            do {
              lVar24 = *plVar31;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar31,0x10);
              if (bVar11) {
                *plVar31 = lVar24 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar34);
            }
          }
        }
        lVar24 = *plVar40;
        plVar31 = *(long **)(lVar24 + 200);
        *(long **)(lVar24 + 200) = plVar34;
        *(long **)(lVar24 + 0xc0) = plVar33;
        if (plVar31 != (long *)0x0) {
          plVar33 = plVar31 + 1;
          do {
            lVar24 = *plVar33;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar11) {
              *plVar33 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plVar31 + 0x10))(plVar31);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar31);
          }
        }
        plVar33 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar34 = plStack_1f8 + 1;
          do {
            lVar24 = *plVar34;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
            if (bVar11) {
              *plVar34 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        uVar35 = puVar29[9];
        uVar17 = *(undefined4 *)(puVar29 + 10);
        uVar32 = *(undefined8 *)(pbVar28 + 0x78);
        lVar24 = *plVar40;
        uVar6 = *(undefined8 *)(lVar24 + 0xa0);
        uVar7 = *(undefined8 *)(lVar24 + 0xa8);
        FUN_109a07c08(&plStack_e0,*(undefined8 *)(lVar24 + 0xc0));
        puStack_d0[3] = 0;
        puStack_d0[2] = 0;
        puStack_d0[5] = 0;
        puStack_d0[4] = 0;
        puStack_d0[1] = 0;
        *puStack_d0 = 0;
        *(int *)(puStack_d0 + 6) = (int)uVar35;
        *(undefined4 *)((long)puStack_d0 + 0x34) = uVar17;
        puStack_d0[8] = 0;
        puStack_d0[9] = 0;
        puStack_d0[7] = 0;
        *(int *)(puStack_d0 + 10) = (int)uVar32;
        *(int *)((long)puStack_d0 + 0x54) = (int)uVar7 - (int)uVar6;
        puStack_d0[0xb] = 0;
        FUN_109a086a8(&plStack_e0);
        (**(code **)(**(long **)(lStack_170 + 0x10) + 0x70))
                  (&plStack_1d0,*(long **)(lStack_170 + 0x10),&PTR_DAT_1132e8130);
        uVar39 = *(ulong *)(pbVar28 + 0x80);
        plStack_1f8 = (long *)0x50;
        plStack_200 = (long *)0x48;
        uStack_1e8 = 0x60;
        uStack_1f0 = 0x58;
        uStack_1e0 = 0x68;
        if (2 < uVar39) {
          uVar39 = 3;
        }
        if (*(long *)(pbVar28 + 0xa0) == 0) {
          uVar39 = uVar39 + 1;
        }
        uVar27 = uVar39;
        if (uVar39 < 4) {
          uVar27 = 3;
        }
        do {
          (**(code **)(*plStack_1d0 + 0x10))
                    (&plStack_210,plStack_1d0,*(undefined4 *)(&UNK_10e02a918 + uVar39 * 4));
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          puStack_d0 = (undefined8 *)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          plStack_e0 = *(long **)(*plVar40 + 0xc0);
          plStack_d8 = *(long **)(*plVar40 + 200);
          if (plStack_d8 != (long *)0x0) {
            plVar33 = plStack_d8 + 1;
            do {
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar11) {
                *plVar33 = *plVar33 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          func_0x000109a08334(&uStack_c0,*plVar40 + 0xd0);
          func_0x000109a08334(&uStack_b0,*plVar40 + 0xb0);
          func_0x000109a08334(&uStack_a0,*plVar40 + 0xf0);
          uVar20 = uVar39;
          if (2 < uVar39) {
            uVar20 = 3;
          }
          func_0x000109a08334(&puStack_d0,*plVar40 + uVar20 * 0x10 + 0x100);
          (**(code **)(*plStack_210 + 0x20))(&plStack_220,plStack_210,&plStack_e0,5,0);
          iVar4 = *(int *)(puVar29 + 0xb);
          uStack_230 = *(undefined4 *)(pbVar28 + (long)((&plStack_200)[uVar39] + 8));
          plStack_238 = plStack_218;
          plStack_240 = plStack_220;
          if (plStack_218 != (long *)0x0) {
            plVar33 = plStack_218 + 1;
            do {
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar11) {
                *plVar33 = *plVar33 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          lVar24 = *plVar40 + ((ulong)(iVar4 == 1) | uVar39 << 1) * 0x18;
          func_0x000109a08554(lVar24 + 0x140,&plStack_240);
          plVar33 = plStack_238;
          *(undefined4 *)(lVar24 + 0x150) = uStack_230;
          if (plStack_238 != (long *)0x0) {
            plVar34 = plStack_238 + 1;
            do {
              lVar24 = *plVar34;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar11) {
                *plVar34 = lVar24 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plStack_238 + 0x10))(plStack_238);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
            }
          }
          plVar33 = plStack_218;
          if (plStack_218 != (long *)0x0) {
            plVar34 = plStack_218 + 1;
            do {
              lVar24 = *plVar34;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar11) {
                *plVar34 = lVar24 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plStack_218 + 0x10))(plStack_218);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
            }
          }
          lVar24 = 0x40;
          do {
            func_0x000109a084fc((long)&plStack_e0 + lVar24);
            plVar33 = plStack_208;
            lVar24 = lVar24 + -0x10;
          } while (lVar24 != -0x10);
          if (plStack_208 != (long *)0x0) {
            plVar34 = plStack_208 + 1;
            do {
              lVar24 = *plVar34;
              cVar9 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar34,0x10);
              if (bVar11) {
                *plVar34 = lVar24 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar24 == 0) {
              (**(code **)(*plStack_208 + 0x10))(plStack_208);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
            }
          }
          plVar33 = plStack_1c8;
          bVar11 = uVar39 != uVar27;
          uVar39 = uVar39 + 1;
        } while (bVar11);
        if (plStack_1c8 != (long *)0x0) {
          plVar40 = plStack_1c8 + 1;
          do {
            lVar24 = *plVar40;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar11) {
              *plVar40 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        plVar33 = plStack_1b8;
        if (plStack_1b8 != (long *)0x0) {
          plVar40 = plStack_1b8 + 1;
          do {
            lVar24 = *plVar40;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar11) {
              *plVar40 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        plVar33 = plStack_1a8;
        if (plStack_1a8 != (long *)0x0) {
          plVar40 = plStack_1a8 + 1;
          do {
            lVar24 = *plVar40;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar11) {
              *plVar40 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
        plVar33 = plStack_198;
        if (plStack_198 != (long *)0x0) {
          plVar40 = plStack_198 + 1;
          do {
            lVar24 = *plVar40;
            cVar9 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
            if (bVar11) {
              *plVar40 = lVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar24 == 0) {
            (**(code **)(*plStack_198 + 0x10))(plStack_198);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
          }
        }
      }
    }
    plVar33 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar40 = plStack_188 + 1;
      do {
        lVar24 = *plVar40;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar11) {
          *plVar40 = lVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
      }
    }
    plVar33 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar40 = plStack_178 + 1;
      do {
        lVar24 = *plVar40;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar11) {
          *plVar40 = lVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
      }
    }
    plVar33 = plStack_168;
    if (plStack_168 != (long *)0x0) {
      plVar40 = plStack_168 + 1;
      do {
        lVar24 = *plVar40;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar40,0x10);
        if (bVar11) {
          *plVar40 = lVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar24 == 0) {
        (**(code **)(*plStack_168 + 0x10))(plStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar33);
      }
    }
  }
  FUN_109a07d20(&plStack_270);
  plVar12 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar36 = plStack_128 + 1;
    do {
      lVar24 = *plVar36;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar11) {
        *plVar36 = lVar24 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  __ZNSt3__118condition_variableD1Ev(&uStack_160);
  __ZNSt3__115recursive_mutexD1Ev(&plStack_120);
  plVar12 = plStack_248;
  if (plStack_248 != (long *)0x0) {
    plVar36 = plStack_248 + 1;
    do {
      lVar24 = *plVar36;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar36,0x10);
      if (bVar11) {
        *plVar36 = lVar24 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
LAB_109a06b20:
  FUN_109a07d0c();
LAB_109a06b24:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x109a06b28);
  (*pcVar10)();
}



/* Entry: 109a06d08; end: 109a06d8f;  */

undefined8 * FUN_109a06d08(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 109a06d90; end: 109a077d3;  */

void FUN_109a06d90(long *param_1)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  ushort *puVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  float *pfVar20;
  uint *puVar21;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint *puVar22;
  
  lVar18 = *param_1;
  plStack_78 = (long *)param_1[1];
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar1 = (long *)param_1[2];
  plVar11 = (long *)param_1[3];
  if (plVar11 != (long *)0x0) {
    plVar10 = plVar11 + 1;
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = *plVar10 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  puVar28 = (undefined8 *)param_1[7];
  lVar24 = puVar28[7];
  plStack_90 = plVar1;
  plStack_88 = plVar11;
  lStack_80 = lVar18;
  if (lVar24 == 0) {
    if (plVar1 == (long *)0x0) goto LAB_109a076cc;
    iVar3 = *(int *)(puVar28 + 5);
    uVar12 = 1;
    if (*(int *)((long)puVar28 + 0x2c) != 0) {
      uVar12 = 2;
    }
    plVar10 = plVar1;
    (**(code **)(*plVar1 + 0x20))();
    if (plVar10 < (long *)(ulong)(uint)(iVar3 << (ulong)uVar12)) goto LAB_109a076cc;
    (**(code **)(**(long **)(lVar18 + 0x10) + 0x78))(&plStack_70);
    plStack_98 = (long *)param_1[9];
    lStack_a0 = param_1[8];
    if (param_1[9] != 0) {
      plVar10 = (long *)(param_1[9] + 8);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar9) {
          *plVar10 = *plVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    if (plVar11 != (long *)0x0) {
      plVar10 = plVar11 + 1;
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar9) {
          *plVar10 = *plVar10 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plStack_d0 = (long *)0x0;
    plStack_c8 = (long *)0x0;
    plStack_c0 = (long *)(ulong)(uint)(iVar3 << (ulong)uVar12);
    plStack_b0 = plVar1;
    plStack_a8 = plVar11;
    (**(code **)(*plStack_70 + 0x78))(plStack_70,&lStack_a0,&plStack_b0,&plStack_d0,1);
    plVar1 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar11 = plStack_a8 + 1;
      do {
        lVar18 = *plVar11;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar11 = plStack_98 + 1;
      do {
        lVar18 = *plVar11;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plStack_c8 = plStack_88;
    plStack_d0 = plStack_90;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = *plVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    plStack_c0 = (long *)0x100000001000;
    (**(code **)(*plStack_70 + 0x70))(plStack_70,0x200,0x200,&plStack_d0,1);
    plVar1 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar11 = plStack_c8 + 1;
      do {
        lVar18 = *plVar11;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = (long *)CONCAT44(uStack_64,uStack_68);
    if (plVar1 != (long *)0x0) {
      plVar11 = plVar1 + 1;
      do {
        lVar18 = *plVar11;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    func_0x000109a01180(&plStack_70,plStack_90 + 1);
    FUN_109a0814c(&plStack_d0,&plStack_70);
    plVar1 = (long *)CONCAT44(uStack_64,uStack_68);
    if (plVar1 != (long *)0x0) {
      plVar11 = plVar1 + 1;
      do {
        lVar18 = *plVar11;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_c0;
    uVar12 = *(uint *)(puVar28 + 5);
    uVar23 = (ulong)uVar12 / 3;
    if (*(int *)((long)puVar28 + 0x2c) == 0) {
      plStack_70 = (long *)0x0;
      uStack_68 = 0;
      FUN_109a07e2c(param_1 + 0xc,uVar23,&plStack_70);
      if (2 < uVar12) {
        puVar13 = (ushort *)((long)plVar1 + 4);
        puVar15 = (uint *)(param_1[0xc] + 8);
        do {
          uVar6 = puVar13[-1];
          uVar5 = *puVar13;
          puVar15[-2] = (uint)puVar13[-2];
          puVar15[-1] = (uint)uVar6;
          *puVar15 = (uint)uVar5;
          uVar23 = uVar23 - 1;
          puVar13 = puVar13 + 3;
          puVar15 = puVar15 + 3;
        } while (uVar23 != 0);
      }
    }
    else {
      FUN_109a07fe0(param_1 + 0xc,plStack_c0,(long)plStack_c0 + uVar23 * 0xc,uVar23);
    }
    FUN_109a081b4(&plStack_d0);
  }
  else {
    uVar12 = *(uint *)(puVar28 + 5);
    uVar23 = (ulong)uVar12 / 3;
    if (*(int *)((long)puVar28 + 0x2c) == 0) {
      plStack_d0 = (long *)0x0;
      plStack_c8 = (long *)((ulong)plStack_c8 & 0xffffffff00000000);
      FUN_109a07e2c(param_1 + 0xc,uVar23,&plStack_d0);
      if (2 < uVar12) {
        puVar13 = (ushort *)(lVar24 + 4);
        puVar15 = (uint *)(param_1[0xc] + 8);
        do {
          uVar6 = puVar13[-1];
          uVar5 = *puVar13;
          puVar15[-2] = (uint)puVar13[-2];
          puVar15[-1] = (uint)uVar6;
          *puVar15 = (uint)uVar5;
          uVar23 = uVar23 - 1;
          puVar13 = puVar13 + 3;
          puVar15 = puVar15 + 3;
        } while (uVar23 != 0);
      }
    }
    else {
      FUN_109a07fe0(param_1 + 0xc,lVar24,lVar24 + uVar23 * 0xc,uVar23);
    }
  }
  plVar1 = (long *)*puVar28;
  uVar17 = puVar28[2];
  lVar18 = *plVar1;
  *(undefined8 *)(lVar18 + 0x278) = puVar28[1];
  *(undefined8 *)(lVar18 + 0x280) = uVar17;
  if (*(long *)(*plVar1 + 0x280) != 0) {
    FUN_109a081e8(&plStack_d0,*(undefined8 *)(*plVar1 + 0x278));
    FUN_109a07dc8(*plVar1 + 0x18,&plStack_d0);
    plVar1 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar11 = plStack_c8 + 1;
      do {
        lVar18 = *plVar11;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar9) {
          *plVar11 = lVar18 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    goto LAB_109a076cc;
  }
  puVar15 = (uint *)param_1[0xc];
  puVar2 = (uint *)param_1[0xd];
  if ((puVar15 != puVar2) && (puVar15 + 1 != puVar2)) {
    uVar12 = *puVar15;
    puVar14 = puVar15;
    puVar21 = puVar15 + 1;
    do {
      puVar22 = puVar21 + 1;
      uVar4 = *puVar21;
      bVar9 = uVar4 <= uVar12;
      if (uVar12 <= uVar4) {
        uVar12 = uVar4;
      }
      puVar15 = puVar21;
      if (bVar9) {
        puVar15 = puVar14;
      }
      puVar14 = puVar15;
      puVar21 = puVar22;
    } while (puVar22 != puVar2);
  }
  uVar12 = *puVar15;
  uVar16 = (ulong)(uVar12 + 2);
  lVar24 = param_1[0xf];
  lVar18 = param_1[0x10];
  lVar25 = lVar18 - lVar24;
  bVar9 = uVar16 < (ulong)((lVar25 >> 2) * -0x5555555555555555);
  uVar23 = uVar16 + (lVar25 >> 2) * 0x5555555555555555;
  if (bVar9 || uVar23 == 0) {
    if (bVar9) {
      lVar18 = lVar24 + uVar16 * 0xc;
      goto LAB_109a07370;
    }
  }
  else if ((ulong)((param_1[0x11] - lVar18 >> 2) * -0x5555555555555555) < uVar23) {
    lVar18 = param_1[0x11] - lVar24 >> 2;
    uVar19 = lVar18 * 0x5555555555555556;
    if (uVar19 < uVar16 || uVar19 - uVar16 == 0) {
      uVar19 = uVar16;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
      uVar19 = 0x1555555555555555;
    }
    if (0x1555555555555555 < uVar19) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109a07764);
      (*pcVar8)();
    }
    lVar18 = uVar19 * 0xc;
    __Znwm();
    lVar27 = (((uVar23 & 0xffffffff) * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar18 + lVar25,lVar27);
    _memcpy(lVar18,lVar24,lVar25);
    param_1[0xf] = lVar18;
    param_1[0x10] = lVar18 + lVar25 + lVar27;
    param_1[0x11] = lVar18 + uVar19 * 0xc;
    if (lVar24 != 0) {
      __ZdlPv(lVar24);
    }
  }
  else {
    lVar24 = (((uVar23 & 0xffffffff) * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar18,lVar24);
    lVar18 = lVar18 + lVar24;
LAB_109a07370:
    param_1[0x10] = lVar18;
  }
  plVar1 = plStack_90;
  uVar12 = uVar12 + 1;
  uVar23 = (ulong)uVar12;
  puVar26 = (undefined8 *)param_1[0xf];
  lVar18 = puVar28[0xc];
  if (lVar18 == 0) {
    if (plStack_90 == (long *)0x0) {
      FUN_109a07fe0(param_1 + 0xc,0,0,0);
    }
    else {
      iVar3 = *(int *)(puVar28 + 10);
      plVar11 = plStack_90;
      (**(code **)(*plStack_90 + 0x20))();
      if ((long *)(ulong)(iVar3 * uVar12) <= plVar11) {
        (**(code **)(**(long **)(lStack_80 + 0x10) + 0x78))(&plStack_70);
        plStack_d8 = (long *)param_1[0xb];
        lStack_e0 = param_1[10];
        if (param_1[0xb] != 0) {
          plVar11 = (long *)(param_1[0xb] + 8);
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = *plVar11 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plStack_f0 = plVar1;
        plStack_e8 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plStack_d0 = (long *)puVar28[9];
        plStack_c8 = (long *)0x0;
        plStack_c0 = (long *)(ulong)(iVar3 * uVar12);
        (**(code **)(*plStack_70 + 0x78))(plStack_70,&lStack_e0,&plStack_f0,&plStack_d0,1);
        plVar1 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar11 = plStack_e8 + 1;
          do {
            lVar18 = *plVar11;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar11 = plStack_d8 + 1;
          do {
            lVar18 = *plVar11;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plStack_c8 = plStack_88;
        plStack_d0 = plStack_90;
        if (plStack_88 != (long *)0x0) {
          plVar1 = plStack_88 + 1;
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = *plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        plStack_c0 = (long *)0x100000001000;
        (**(code **)(*plStack_70 + 0x70))(plStack_70,0x200,0x200,&plStack_d0,1);
        plVar1 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar11 = plStack_c8 + 1;
          do {
            lVar18 = *plVar11;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar1 = (long *)CONCAT44(uStack_64,uStack_68);
        if (plVar1 != (long *)0x0) {
          plVar11 = plVar1 + 1;
          do {
            lVar18 = *plVar11;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        func_0x000109a01180(&plStack_70,plStack_90 + 1);
        FUN_109a0814c(&plStack_d0,&plStack_70);
        plVar1 = (long *)CONCAT44(uStack_64,uStack_68);
        if (plVar1 != (long *)0x0) {
          plVar11 = plVar1 + 1;
          do {
            lVar18 = *plVar11;
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar9) {
              *plVar11 = lVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        iVar3 = *(int *)(puVar28 + 10);
        if (*(int *)(puVar28 + 0xb) == 1) {
          if (uVar12 != 0) {
            uVar16 = 0;
            pfVar20 = (float *)(puVar26 + 1);
            do {
              uVar17 = *(undefined8 *)((long)plStack_c0 + uVar16);
              *(ulong *)(pfVar20 + -2) =
                   CONCAT44((float)(float2)((ulong)uVar17 >> 0x10),(float)(float2)uVar17);
              *pfVar20 = (float)(float2)((ulong)uVar17 >> 0x20);
              pfVar20 = pfVar20 + 3;
              uVar16 = (ulong)(uint)((int)uVar16 + iVar3);
              uVar23 = uVar23 - 1;
            } while (uVar23 != 0);
          }
        }
        else if (uVar12 != 0) {
          uVar16 = 0;
          do {
            uVar17 = *(undefined8 *)((long)plStack_c0 + uVar16);
            *(undefined4 *)(puVar26 + 1) =
                 *(undefined4 *)((undefined8 *)((long)plStack_c0 + uVar16) + 1);
            *puVar26 = uVar17;
            uVar16 = (ulong)(uint)((int)uVar16 + iVar3);
            uVar23 = uVar23 - 1;
            puVar26 = (undefined8 *)((long)puVar26 + 0xc);
          } while (uVar23 != 0);
        }
        FUN_109a081b4(&plStack_d0);
        goto LAB_109a076cc;
      }
      FUN_109a07fe0(param_1 + 0xc,0,0,0);
    }
    param_1[0x10] = param_1[0xf];
  }
  else {
    iVar3 = *(int *)(puVar28 + 10);
    if (*(int *)(puVar28 + 0xb) == 1) {
      if (uVar12 != 0) {
        uVar16 = 0;
        pfVar20 = (float *)(puVar26 + 1);
        do {
          uVar17 = *(undefined8 *)(lVar18 + uVar16);
          *(ulong *)(pfVar20 + -2) =
               CONCAT44((float)(float2)((ulong)uVar17 >> 0x10),(float)(float2)uVar17);
          *pfVar20 = (float)(float2)((ulong)uVar17 >> 0x20);
          pfVar20 = pfVar20 + 3;
          uVar16 = (ulong)(uint)((int)uVar16 + iVar3);
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
    }
    else if (uVar12 != 0) {
      uVar16 = 0;
      do {
        uVar17 = *(undefined8 *)(lVar18 + uVar16);
        *(undefined4 *)(puVar26 + 1) = *(undefined4 *)((undefined8 *)(lVar18 + uVar16) + 1);
        *puVar26 = uVar17;
        uVar16 = (ulong)(uint)((int)uVar16 + iVar3);
        uVar23 = uVar23 - 1;
        puVar26 = (undefined8 *)((long)puVar26 + 0xc);
      } while (uVar23 != 0);
    }
  }
LAB_109a076cc:
  plVar1 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar11 = plStack_88 + 1;
    do {
      lVar18 = *plVar11;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar11 = plStack_78 + 1;
    do {
      lVar18 = *plVar11;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar9) {
        *plVar11 = lVar18 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 109a077d4; end: 109a07a3b;  */

void FUN_109a077d4(long *param_1)

{
  char cVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = *param_1;
  plStack_38 = (long *)param_1[1];
  if (plStack_38 != (long *)0x0) {
    plVar9 = plStack_38 + 1;
    do {
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6 = (undefined8 *)param_1[7];
  plVar9 = (long *)*puVar6;
  if (*(long *)(*plVar9 + 0x280) == 0) {
    lVar7 = param_1[0x10] - param_1[0xf];
    lVar4 = 0;
    if (lVar7 != 0) {
      lVar4 = (lVar7 >> 2) * -0x5555555555555555 + -1;
    }
    if ((*(byte *)(puVar6 + 0xd) >> 3 & 1) == 0) {
      bVar3 = 0x2fffc < *(uint *)(puVar6 + 5);
    }
    else {
      bVar3 = true;
    }
    FUN_109a105fc(&lStack_58,param_1[0xc],(param_1[0xd] - param_1[0xc] >> 2) * -0x5555555555555555,
                  param_1[0xf],lVar4,bVar3);
    lVar7 = *plVar9;
    lVar4 = lVar7;
    if (*(long *)(lVar7 + 0x260) != 0) {
      *(long *)(lVar7 + 0x268) = *(long *)(lVar7 + 0x260);
      __ZdlPv();
      *(undefined8 *)(lVar7 + 0x260) = 0;
      *(undefined8 *)(lVar7 + 0x268) = 0;
      *(undefined8 *)(lVar7 + 0x270) = 0;
      lVar4 = *plVar9;
    }
    *(long *)(lVar7 + 0x260) = lStack_58;
    *(undefined8 *)(lVar7 + 0x270) = uStack_48;
    *(long **)(lVar7 + 0x268) = plStack_50;
    *(long *)(lVar4 + 0x278) = lStack_58;
    *(long *)(lVar4 + 0x280) = (long)plStack_50 - lStack_58;
    FUN_109a081e8(&lStack_58,*(undefined8 *)(*plVar9 + 0x278),*(undefined8 *)(*plVar9 + 0x280));
    FUN_109a07dc8(*plVar9 + 0x18,&lStack_58);
    if (plStack_50 != (long *)0x0) {
      plVar2 = plStack_50 + 1;
      do {
        lVar4 = *plVar2;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar3) {
          *plVar2 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_50);
      }
    }
  }
  plVar2 = *(long **)(lStack_40 + 0x10);
  if ((plVar2 != (long *)0x0) && ((**(code **)(*plVar2 + 0x20))(), ((ulong)plVar2 & 1) == 0)) {
    puVar5 = *(uint **)(*plVar9 + 0x18);
    *puVar5 = *puVar5 & 0xfffffffe;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0x3f800000;
    puVar8 = puVar5 + 8;
    if (*(long *)puVar8 != 0) {
      *(long *)(puVar5 + 10) = *(long *)puVar8;
      __ZdlPv();
      puVar8[0] = 0;
      puVar8[1] = 0;
      puVar5[10] = 0;
      puVar5[0xb] = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
    }
    puVar8[0] = 0;
    puVar8[1] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
  }
  lVar4 = param_1[4];
  __ZNSt3__115recursive_mutex4lockEv(lVar4);
  plVar9 = (long *)param_1[6];
  do {
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar7 = param_1[5];
  uVar10 = *(undefined8 *)(lVar7 + 0x30);
  __ZNSt3__15mutex4lockEv(uVar10);
  __ZNSt3__15mutex6unlockEv(uVar10);
  __ZNSt3__118condition_variable10notify_oneEv(lVar7);
  __ZNSt3__115recursive_mutex6unlockEv(lVar4);
  plVar9 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar4 = *plVar2;
      cVar1 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar3) {
        *plVar2 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 109a07a3c; end: 109a07c07;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109a07a3c(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  byte *pbVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plStack_48;
  long *plStack_40;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)(param_2 + 8);
  if ((uVar1 & 1) != 0) {
    plVar4 = *(long **)(**(long **)(param_1 + 0x40) + 0x28);
    (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(param_2 + 0x28));
    uVar1 = *(uint *)(param_2 + 8);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(int *)**(undefined8 **)(param_1 + 0x40) = (int)*(undefined8 *)(param_2 + 0x30);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + 0x10) + 0x10))(&plStack_48);
    (**(code **)(*plStack_48 + 0x18))(plStack_48,*(undefined8 *)(param_2 + 0x38));
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    uVar1 = *(uint *)(param_2 + 8);
  }
  if (((uVar1 >> 3 & 1) == 0) && (pbVar5 = *(byte **)(param_1 + 0x18), (*pbVar5 >> 1 & 1) != 0)) {
    uVar7 = *(undefined4 *)(param_2 + 0x14);
    uVar11 = *(undefined4 *)(param_2 + 0x20);
    uVar16 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(pbVar5 + 0x40) = *(undefined8 *)(param_2 + 0xc);
    *(undefined4 *)(pbVar5 + 0x48) = uVar7;
    *(undefined8 *)(pbVar5 + 0x50) = uVar16;
    *(undefined4 *)(pbVar5 + 0x58) = uVar11;
    lVar6 = *(long *)(param_1 + 0x18);
    fVar9 = *(float *)(lVar6 + 0x44);
    if (*(float *)(lVar6 + 0x40) <= *(float *)(lVar6 + 0x44)) {
      fVar9 = *(float *)(lVar6 + 0x40);
    }
    fVar8 = *(float *)(lVar6 + 0x48);
    if (fVar9 <= *(float *)(lVar6 + 0x48)) {
      fVar8 = fVar9;
    }
    fVar9 = *(float *)(lVar6 + 0x54);
    if (*(float *)(lVar6 + 0x54) <= *(float *)(lVar6 + 0x50)) {
      fVar9 = *(float *)(lVar6 + 0x50);
    }
    fVar12 = *(float *)(lVar6 + 0x58);
    if (*(float *)(lVar6 + 0x58) <= fVar9) {
      fVar12 = fVar9;
    }
    fVar12 = 65535.0 / (fVar12 - fVar8);
    *(float *)(param_1 + 0x230) = fVar12;
    fVar9 = -(fVar8 * fVar12);
    *(undefined8 *)(param_1 + 0x234) = 0;
    *(float *)(param_1 + 0x23c) = fVar9;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(float *)(param_1 + 0x244) = fVar12;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(float *)(param_1 + 0x24c) = fVar9;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(float *)(param_1 + 600) = fVar12;
    *(float *)(param_1 + 0x25c) = fVar9;
    FUN_109a07c08(&plStack_48,*(undefined8 *)(param_1 + 0xc0));
    uVar15 = *(undefined8 *)(param_1 + 0x240);
    uVar10 = *(undefined8 *)(param_1 + 600);
    uVar16 = *(undefined8 *)(param_1 + 0x250);
    uVar14 = *(undefined8 *)(param_1 + 0x238);
    uVar13 = *(undefined8 *)(param_1 + 0x230);
    puStack_38[3] = *(undefined8 *)(param_1 + 0x248);
    puStack_38[2] = uVar15;
    puStack_38[5] = uVar10;
    puStack_38[4] = uVar16;
    puStack_38[1] = uVar14;
    *puStack_38 = uVar13;
    FUN_109a086a8(&plStack_48);
  }
  return;
}



/* Entry: 109a07c08; end: 109a07cff;  */

void FUN_109a07c08(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  func_0x000109a01180(&plStack_40,param_2 + 8);
  plVar2 = plStack_38;
  plVar5 = plStack_40;
  plStack_30 = plStack_40;
  plStack_28 = plStack_38;
  plStack_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  *param_1 = plVar5;
  param_1[1] = plVar2;
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
  (**(code **)(*plVar5 + 0x38))();
  param_1[2] = plVar5;
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 109a07d00; end: 109a07d0b;  */

void FUN_109a07d00(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000109a07d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 109a07d0c; end: 109a07d1f;  */

void FUN_109a07d0c(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = lVar4;
    if (plVar1[1] != lVar4) {
      lVar2 = plVar1[1] + -0x40;
      do {
        if (*(long *)(lVar2 + 0x28) != 0) {
          *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x28);
          __ZdlPv();
        }
        if (*(long *)(lVar2 + 0x10) != 0) {
          *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x10);
          __ZdlPv();
        }
        lVar3 = lVar2 + -0x50;
        FUN_109a00804(lVar2);
        FUN_109a00804(lVar2 + -0x10);
        FUN_109a00804(lVar2 + -0x40);
        func_0x0001099f0ce8(lVar3);
        lVar2 = lVar2 + -0x90;
      } while (lVar3 != lVar4);
      lVar2 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a07d20; end: 109a07dc7;  */

void FUN_109a07d20(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = lVar3;
    if (param_1[1] != lVar3) {
      lVar1 = param_1[1] + -0x40;
      do {
        if (*(long *)(lVar1 + 0x28) != 0) {
          *(long *)(lVar1 + 0x30) = *(long *)(lVar1 + 0x28);
          __ZdlPv();
        }
        if (*(long *)(lVar1 + 0x10) != 0) {
          *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x10);
          __ZdlPv();
        }
        lVar2 = lVar1 + -0x50;
        FUN_109a00804(lVar1);
        FUN_109a00804(lVar1 + -0x10);
        FUN_109a00804(lVar1 + -0x40);
        func_0x0001099f0ce8(lVar2);
        lVar1 = lVar1 + -0x90;
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109a07dc8; end: 109a07e2b;  */

undefined8 * FUN_109a07dc8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 109a07e2c; end: 109a07f7f;  */

void FUN_109a07e2c(long *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  lVar3 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  if ((ulong)((lVar3 - (long)puVar2 >> 2) * -0x5555555555555555) < param_2) {
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = (long)puVar2;
      __ZdlPv();
      lVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar6 = (lVar3 >> 2) * 0x5555555555555556;
    if (uVar6 < param_2 || uVar6 - param_2 == 0) {
      uVar6 = param_2;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar3 >> 2) * -0x5555555555555555)) {
      uVar6 = 0x1555555555555555;
    }
    FUN_109a07f80(param_1,uVar6);
    puVar4 = (undefined8 *)param_1[1];
    lVar3 = param_2 * 0xc;
    puVar2 = puVar4;
    do {
      uVar7 = *param_3;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar2 = uVar7;
      lVar3 = lVar3 + -0xc;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    } while (lVar3 != 0);
    param_1[1] = (long)puVar4 + param_2 * 0xc;
  }
  else {
    lVar3 = param_1[1] - (long)puVar2 >> 2;
    uVar5 = lVar3 * -0x5555555555555555;
    uVar6 = uVar5;
    if (param_2 <= uVar5) {
      uVar6 = param_2;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar7 = *param_3;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
      *puVar2 = uVar7;
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    }
    lVar1 = param_2 + lVar3 * 0x5555555555555555;
    if (param_2 < uVar5 || lVar1 == 0) {
      param_1[1] = *param_1 + param_2 * 0xc;
    }
    else {
      puVar4 = (undefined8 *)param_1[1];
      lVar3 = param_2 * 0xc + lVar3 * -4;
      puVar2 = puVar4;
      do {
        uVar7 = *param_3;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_3 + 1);
        *puVar2 = uVar7;
        lVar3 = lVar3 + -0xc;
        puVar2 = (undefined8 *)((long)puVar2 + 0xc);
      } while (lVar3 != 0);
      param_1[1] = (long)puVar4 + lVar1 * 0xc;
    }
  }
  return;
}



/* Entry: 109a07f80; end: 109a07fcb;  */

void FUN_109a07f80(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if ((undefined8 *)0x1555555555555555 < param_2) {
    FUN_109a07fcc();
    puVar3 = (undefined8 *)&DAT_10f62a4d8;
    func_0x000104c4f6cc();
    lVar2 = puVar3[2];
    puVar8 = (undefined8 *)*puVar3;
    if ((ulong)((lVar2 - (long)puVar8 >> 2) * -0x5555555555555555) < param_4) {
      if (puVar8 != (undefined8 *)0x0) {
        puVar3[1] = puVar8;
        __ZdlPv(puVar8);
        lVar2 = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      uVar6 = (lVar2 >> 2) * 0x5555555555555556;
      if (uVar6 < param_4 || uVar6 - param_4 == 0) {
        uVar6 = param_4;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar2 >> 2) * -0x5555555555555555)) {
        uVar6 = 0x1555555555555555;
      }
      FUN_109a07f80(puVar3,uVar6);
      puVar4 = (undefined8 *)puVar3[1];
      for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
        uVar7 = *param_2;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
        *puVar4 = uVar7;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      }
    }
    else {
      puVar5 = (undefined8 *)puVar3[1];
      if ((ulong)(((long)puVar5 - (long)puVar8 >> 2) * -0x5555555555555555) < param_4) {
        puVar1 = (undefined8 *)((long)param_2 + ((long)puVar5 - (long)puVar8));
        puVar4 = puVar5;
        if (puVar5 != puVar8) {
          _memmove(puVar8,param_2);
          puVar5 = (undefined8 *)puVar3[1];
          puVar4 = puVar5;
        }
        for (; puVar1 != param_3; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
          uVar7 = *puVar1;
          *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar1 + 1);
          *puVar5 = uVar7;
          puVar5 = (undefined8 *)((long)puVar5 + 0xc);
          puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        }
      }
      else {
        lVar2 = (long)param_3 - (long)param_2;
        if (lVar2 != 0) {
          _memmove(puVar8,param_2,lVar2);
        }
        puVar4 = (undefined8 *)((long)puVar8 + lVar2);
      }
    }
    puVar3[1] = puVar4;
    return;
  }
  lVar2 = (long)param_2 * 0xc;
  __Znwm();
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + (long)param_2 * 0xc;
  return;
}



/* Entry: 109a07fcc; end: 109a07fdf;  */

void FUN_109a07fcc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar3 = puVar2[2];
  puVar8 = (undefined8 *)*puVar2;
  if ((ulong)((lVar3 - (long)puVar8 >> 2) * -0x5555555555555555) < param_4) {
    if (puVar8 != (undefined8 *)0x0) {
      puVar2[1] = puVar8;
      __ZdlPv(puVar8);
      lVar3 = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    uVar6 = (lVar3 >> 2) * 0x5555555555555556;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar3 >> 2) * -0x5555555555555555)) {
      uVar6 = 0x1555555555555555;
    }
    FUN_109a07f80(puVar2,uVar6);
    puVar4 = (undefined8 *)puVar2[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar7 = *param_2;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar4 = uVar7;
      puVar4 = (undefined8 *)((long)puVar4 + 0xc);
    }
  }
  else {
    puVar5 = (undefined8 *)puVar2[1];
    if ((ulong)(((long)puVar5 - (long)puVar8 >> 2) * -0x5555555555555555) < param_4) {
      puVar1 = (undefined8 *)((long)param_2 + ((long)puVar5 - (long)puVar8));
      puVar4 = puVar5;
      if (puVar5 != puVar8) {
        _memmove(puVar8,param_2);
        puVar5 = (undefined8 *)puVar2[1];
        puVar4 = puVar5;
      }
      for (; puVar1 != param_3; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
        uVar7 = *puVar1;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar5 = uVar7;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      }
    }
    else {
      lVar3 = (long)param_3 - (long)param_2;
      if (lVar3 != 0) {
        _memmove(puVar8,param_2,lVar3);
      }
      puVar4 = (undefined8 *)((long)puVar8 + lVar3);
    }
  }
  puVar2[1] = puVar4;
  return;
}



/* Entry: 109a07fe0; end: 109a0814b;  */

void FUN_109a07fe0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  lVar2 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if ((ulong)((lVar2 - (long)puVar7 >> 2) * -0x5555555555555555) < param_4) {
    if (puVar7 != (undefined8 *)0x0) {
      param_1[1] = puVar7;
      __ZdlPv(puVar7);
      lVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    uVar5 = (lVar2 >> 2) * 0x5555555555555556;
    if (uVar5 < param_4 || uVar5 - param_4 == 0) {
      uVar5 = param_4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar2 >> 2) * -0x5555555555555555)) {
      uVar5 = 0x1555555555555555;
    }
    FUN_109a07f80(param_1,uVar5);
    puVar3 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar6 = *param_2;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar3 = uVar6;
      puVar3 = (undefined8 *)((long)puVar3 + 0xc);
    }
  }
  else {
    puVar4 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar4 - (long)puVar7 >> 2) * -0x5555555555555555) < param_4) {
      puVar1 = (undefined8 *)((long)param_2 + ((long)puVar4 - (long)puVar7));
      puVar3 = puVar4;
      if (puVar4 != puVar7) {
        _memmove(puVar7,param_2);
        puVar4 = (undefined8 *)param_1[1];
        puVar3 = puVar4;
      }
      for (; puVar1 != param_3; puVar1 = (undefined8 *)((long)puVar1 + 0xc)) {
        uVar6 = *puVar1;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 1);
        *puVar4 = uVar6;
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
        puVar3 = (undefined8 *)((long)puVar3 + 0xc);
      }
    }
    else {
      lVar2 = (long)param_3 - (long)param_2;
      if (lVar2 != 0) {
        _memmove(puVar7,param_2,lVar2);
      }
      puVar3 = (undefined8 *)((long)puVar7 + lVar2);
    }
  }
  param_1[1] = puVar3;
  return;
}



/* Entry: 109a0814c; end: 109a081b3;  */

undefined8 * FUN_109a0814c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  lVar1 = param_2[1];
  *param_1 = plVar4;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*param_2;
  }
  (**(code **)(*plVar4 + 0x38))();
  param_1[2] = plVar4;
  return param_1;
}



/* Entry: 109a081b4; end: 109a081e7;  */

undefined8 * FUN_109a081b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  (**(code **)(*(long *)*param_1 + 0x40))();
  plVar5 = (long *)param_1[1];
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



/* Entry: 109a081e8; end: 109a08257;  */

void FUN_109a081e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0xd0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 4;
  *puVar1 = &PTR_FUN_110b20a80;
  FUN_109a11488(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 109a08258; end: 109a08267;  */

void FUN_109a08258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20a80;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a08268; end: 109a08287;  */

void FUN_109a08268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20a80;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a08288; end: 109a082cb;  */

void FUN_109a08288(long param_1)

{
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109a082cc; end: 109a082cf;  */

void FUN_109a082cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a082d0; end: 109a083af;  */

undefined8 * FUN_109a082d0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 109a083b0; end: 109a083bf;  */

void FUN_109a083b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20ad0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109a083c0; end: 109a083df;  */

void FUN_109a083c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b20ad0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a083e0; end: 109a083fb;  */

long FUN_109a083e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
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
  return param_1 + 0x28;
}



/* Entry: 109a083fc; end: 109a0841b;  */

void FUN_109a083fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b20b20;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a0841c; end: 109a08457;  */

void FUN_109a0841c(long param_1)

{
  FUN_109a00f50(param_1 + 0x40);
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109a08458; end: 109a0845b;  */

void FUN_109a08458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a0845c; end: 109a0846f;  */

undefined1  [16] FUN_109a0845c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3e == 0) {
    lVar4 = param_2 << 2;
    __Znwm(lVar4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  func_0x000104c4f740();
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    lVar4 = param_2 * 0xc;
    __Znwm(lVar4);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar4;
    return auVar8;
  }
  func_0x000104c4f740();
  plVar6 = *(long **)(puVar5 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar5;
  return auVar9;
}



/* Entry: 109a08470; end: 109a084a3;  */

undefined1  [16] FUN_109a08470(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar4 = param_2 << 2;
    __Znwm(lVar4);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  func_0x000104c4f740();
  puVar5 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    lVar4 = param_2 * 0xc;
    __Znwm(lVar4);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar4;
    return auVar8;
  }
  func_0x000104c4f740();
  plVar6 = *(long **)(puVar5 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar5;
  return auVar9;
}



/* Entry: 109a084a4; end: 109a084b7;  */

undefined1  [16] FUN_109a084a4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    lVar5 = param_2 * 0xc;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000104c4f740();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 109a084b8; end: 109a086a7;  */

undefined1  [16] FUN_109a084b8(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 0x1555555555555556) {
    lVar4 = param_2 * 0xc;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000104c4f740();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 109a086a8; end: 109a086db;  */

undefined8 * FUN_109a086a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  (**(code **)(*(long *)*param_1 + 0x40))();
  plVar5 = (long *)param_1[1];
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



/* Entry: 109a086dc; end: 109a08ae7;  */

uint FUN_109a086dc(uint param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 ****ppppuVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  
  pppuStack_70 = (undefined8 ****)0x0;
  uStack_68 = 0;
  pppuStack_78 = &pppuStack_70;
  if (param_1 == 0) {
    lVar9 = *param_4;
    uVar20 = param_4[1] - lVar9 >> 2;
LAB_109a089e8:
    if (uVar20 <= uStack_68) goto LAB_109a08a0c;
    lVar16 = lVar9 + uStack_68 * 4;
  }
  else {
    uVar19 = 0;
    uVar20 = 0;
    do {
      if ((param_1 & 1) >> (ulong)(uVar19 & 0x1f) != 0) {
        puVar13 = (undefined4 *)(param_3 + uVar20 * 0xc);
        uVar14 = (undefined4)uStack_68;
        if ((undefined8 ****)pppuStack_70 == (undefined8 ****)0x0) {
          uVar18 = puVar13[2];
          ppppuVar8 = &pppuStack_70;
          ppppuVar7 = &pppuStack_70;
LAB_109a087dc:
          ppppuVar5 = (undefined8 ****)0x28;
          __Znwm();
          *(uint *)((long)ppppuVar5 + 0x1c) = uVar18;
          *(undefined4 *)(ppppuVar5 + 4) = uVar14;
          *ppppuVar5 = (undefined8 ***)0x0;
          ppppuVar5[1] = (undefined8 ***)0x0;
          ppppuVar5[2] = ppppuVar7;
          *ppppuVar8 = ppppuVar5;
          ppppuVar7 = ppppuVar5;
          if ((undefined8 ****)*pppuStack_78 != (undefined8 ****)0x0) {
            ppppuVar7 = (undefined8 ****)*ppppuVar8;
            pppuStack_78 = (undefined8 ***)*pppuStack_78;
          }
          func_0x000107c27d40(pppuStack_70,ppppuVar7);
          uStack_68 = uStack_68 + 1;
        }
        else {
          uVar18 = puVar13[2];
          ppppuVar8 = (undefined8 ****)pppuStack_70;
          ppppuVar5 = &pppuStack_70;
          do {
            lVar16 = 8;
            if (uVar18 <= *(uint *)((long)ppppuVar8 + 0x1c)) {
              lVar16 = 0;
              ppppuVar5 = ppppuVar8;
            }
            ppppuVar8 = *(undefined8 *****)((long)ppppuVar8 + lVar16);
          } while (ppppuVar8 != (undefined8 ****)0x0);
          ppppuVar12 = (undefined8 ****)pppuStack_70;
          if ((ppppuVar5 == &pppuStack_70) || (uVar18 < *(uint *)((long)ppppuVar5 + 0x1c))) {
            do {
              while (ppppuVar5 = ppppuVar12, ppppuVar7 = ppppuVar5,
                    uVar18 < *(uint *)((long)ppppuVar5 + 0x1c)) {
                ppppuVar12 = (undefined8 ****)*ppppuVar5;
                ppppuVar8 = ppppuVar5;
                if ((undefined8 ****)*ppppuVar5 == (undefined8 ****)0x0) goto LAB_109a087dc;
              }
              if (uVar18 <= *(uint *)((long)ppppuVar5 + 0x1c)) goto LAB_109a08828;
              ppppuVar12 = (undefined8 ****)ppppuVar5[1];
            } while ((undefined8 ****)ppppuVar5[1] != (undefined8 ****)0x0);
            ppppuVar8 = ppppuVar5 + 1;
            goto LAB_109a087dc;
          }
        }
LAB_109a08828:
        uVar14 = *puVar13;
        uVar1 = puVar13[1];
        uVar2 = *(undefined4 *)(ppppuVar5 + 4);
        puVar13 = (undefined4 *)param_5[1];
        if (puVar13 < (undefined4 *)param_5[2]) {
          *puVar13 = uVar14;
          puVar13[1] = uVar1;
          puVar15 = puVar13 + 3;
          puVar13[2] = uVar2;
        }
        else {
          lVar16 = (long)puVar13 - *param_5;
          uVar11 = (lVar16 >> 2) * -0x5555555555555555 + 1;
          if (0x1555555555555555 < uVar11) {
            FUN_109a084a4();
            goto LAB_109a08ac0;
          }
          lVar9 = param_5[2] - *param_5 >> 2;
          uVar10 = lVar9 * 0x5555555555555556;
          if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
            uVar10 = uVar11;
          }
          if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
            uVar10 = 0x1555555555555555;
          }
          plVar6 = param_5;
          FUN_109a084b8();
          puVar13 = (undefined4 *)((long)plVar6 + lVar16);
          *puVar13 = uVar14;
          puVar13[1] = uVar1;
          puVar13[2] = uVar2;
          puVar15 = puVar13 + 3;
          lVar9 = (long)puVar13 - (param_5[1] - *param_5);
          _memcpy(lVar9);
          lVar16 = *param_5;
          *param_5 = lVar9;
          param_5[1] = (long)puVar15;
          param_5[2] = (long)plVar6 + uVar10 * 0xc;
          if (lVar16 != 0) {
            __ZdlPv();
          }
        }
        param_5[1] = (long)puVar15;
      }
      uVar20 = (ulong)((param_1 >> (ulong)(uVar19 & 0x1f) & 1) + (int)uVar20);
      uVar19 = uVar19 + 1;
    } while (param_1 >> (ulong)(uVar19 & 0x1f) != 0);
    lVar16 = param_4[1];
    lVar9 = *param_4;
    uVar20 = lVar16 - lVar9 >> 2;
    if (uStack_68 <= uVar20) goto LAB_109a089e8;
    uVar20 = uStack_68 - uVar20;
    if ((ulong)(param_4[2] - lVar16 >> 2) < uVar20) {
      if (uStack_68 >> 0x3e != 0) {
        FUN_109a0845c();
LAB_109a08ac0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x109a08ac4);
        (*pcVar3)();
      }
      uVar10 = param_4[2] - lVar9;
      uVar11 = (long)uVar10 >> 1;
      if (uVar11 <= uStack_68) {
        uVar11 = uStack_68;
      }
      if (0x7ffffffffffffffb < uVar10) {
        uVar11 = 0x3fffffffffffffff;
      }
      plVar6 = param_4;
      FUN_109a08470();
      lVar16 = (long)plVar6 + (lVar16 - lVar9);
      _bzero(lVar16,uVar20 * 4);
      lVar17 = lVar16 - (param_4[1] - *param_4);
      _memcpy(lVar17);
      lVar9 = *param_4;
      *param_4 = lVar17;
      param_4[1] = lVar16 + uVar20 * 4;
      param_4[2] = (long)plVar6 + uVar11 * 4;
      if (lVar9 != 0) {
        __ZdlPv();
      }
      goto LAB_109a08a0c;
    }
    _bzero(lVar16,uVar20 * 4);
    lVar16 = lVar16 + uVar20 * 4;
  }
  param_4[1] = lVar16;
LAB_109a08a0c:
  if ((undefined8 ****)pppuStack_78 == &pppuStack_70) {
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    lVar16 = *param_4;
    ppppuVar8 = (undefined8 ****)pppuStack_78;
    do {
      *(undefined4 *)(lVar16 + (ulong)*(uint *)(ppppuVar8 + 4) * 4) =
           *(undefined4 *)(param_2 + (ulong)*(uint *)((long)ppppuVar8 + 0x1c) * 4);
      ppppuVar7 = (undefined8 ****)ppppuVar8[1];
      ppppuVar5 = ppppuVar8;
      if ((undefined8 ****)ppppuVar8[1] == (undefined8 ****)0x0) {
        do {
          ppppuVar12 = (undefined8 ****)ppppuVar5[2];
          bVar4 = (undefined8 ****)*ppppuVar12 != ppppuVar5;
          ppppuVar5 = ppppuVar12;
        } while (bVar4);
      }
      else {
        do {
          ppppuVar12 = ppppuVar7;
          ppppuVar7 = (undefined8 ****)*ppppuVar12;
        } while ((undefined8 ****)*ppppuVar12 != (undefined8 ****)0x0);
      }
      uVar19 = uVar19 | *(int *)((long)ppppuVar8 + 0x1c) + 1 <<
                        (ulong)((*(uint *)(ppppuVar8 + 4) & 3) << 3);
      ppppuVar8 = ppppuVar12;
    } while (ppppuVar12 != &pppuStack_70);
  }
  func_0x000109a093d0(&pppuStack_78,pppuStack_70);
  return uVar19;
}



/* Entry: 109a08ae8; end: 109a08ffb;  */

undefined8 * FUN_109a08ae8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 **ppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 ***pppuStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined2 *)((long)param_1 + 0x34) = 0;
  param_1[0x10] = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x11) = 0x7f7fffff;
  param_1[0x12] = 0xff7fffffff7fffff;
  param_1[0x16] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x13) = 0xff7fffff;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  ppuVar8 = (undefined8 **)"";
  if ((undefined8 **)param_2[2] != (undefined8 **)0x0) {
    ppuVar8 = (undefined8 **)param_2[2];
  }
  func_0x000107c2c4dc();
  puVar11 = (undefined8 *)*param_2;
  uVar19 = puVar11[1];
  uVar7 = *puVar11;
  if (puVar11[1] != 0) {
    plVar17 = (long *)(puVar11[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar17 = (long *)param_1[4];
  param_1[4] = uVar19;
  param_1[3] = uVar7;
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 1;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
    }
  }
  *(uint *)(param_1 + 5) = (uint)*(ushort *)((long)param_2 + 0xc);
  *(uint *)((long)param_1 + 0x2c) = (uint)*(ushort *)((long)param_2 + 0xe);
  uVar2 = *(uint *)(param_2 + 1);
  *(uint *)(param_1 + 6) = (uVar2 >> 1 ^ 0xffffffff) & 1;
  *(byte *)((long)param_1 + 0x34) = (byte)uVar2 & 1;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0xe] = 0;
  lVar12 = *(long *)(param_1[3] + 0x18);
  if (lVar12 == 0) {
    uVar7 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar7,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
    goto LAB_109a08f3c;
  }
  lVar14 = *(long *)(lVar12 + 0x28) - *(long *)(lVar12 + 0x20);
  uVar9 = lVar14 >> 4;
  lVar18 = param_1[0x18];
  lVar12 = param_1[0x19];
  uVar16 = lVar12 - lVar18 >> 4;
  if (uVar16 < uVar9) {
    uVar16 = uVar9 - uVar16;
    if ((ulong)(param_1[0x1a] - lVar12 >> 4) < uVar16) {
      if (uVar9 >> 0x3c != 0) {
        FUN_1099f108c();
        goto LAB_109a08f3c;
      }
      puVar11 = param_1 + 0x18;
      uVar13 = param_1[0x1a] - lVar18;
      uVar15 = (long)uVar13 >> 3;
      if (uVar15 <= uVar9) {
        uVar15 = uVar9;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar15 = 0xfffffffffffffff;
      }
      puVar6 = puVar11;
      puStack_48 = puVar11;
      FUN_1099f10a0();
      lVar12 = (long)puVar6 + (lVar12 - lVar18);
      puStack_50 = puVar6 + uVar15 * 2;
      puStack_68 = puVar6;
      lStack_60 = lVar12;
      _bzero(lVar12,uVar16 * 0x10);
      puStack_58 = (undefined8 *)(lVar12 + uVar16 * 0x10);
      ppuVar8 = &puStack_68;
      func_0x0001099f100c(puVar11);
      if (puStack_58 != (undefined8 *)lStack_60) {
        puStack_58 = (undefined8 *)
                     ((long)puStack_58 +
                     ((lStack_60 - (long)puStack_58) + 0xfU & 0xfffffffffffffff0));
      }
      if (puStack_68 != (undefined8 *)0x0) {
        __ZdlPv();
      }
    }
    else {
      ppuVar8 = (undefined8 **)(uVar16 * 0x10);
      _bzero(lVar12);
      lVar12 = lVar12 + uVar16 * 0x10;
LAB_109a08d38:
      param_1[0x19] = lVar12;
    }
  }
  else if (uVar9 < uVar16) {
    lVar12 = lVar18 + lVar14;
    goto LAB_109a08d38;
  }
  lStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  puStack_68 = (undefined8 *)0x0;
  ppuStack_88 = &puStack_68;
  plStack_80 = (long *)((ulong)plStack_80 & 0xffffffffffffff00);
  lVar12 = *(long *)(param_1[3] + 0x48) - *(long *)(param_1[3] + 0x40);
  if (lVar12 != 0) {
    puVar11 = (undefined8 *)(lVar12 >> 4);
    if ((ulong)puVar11 >> 0x3c != 0) {
      FUN_109a08ffc();
LAB_109a08f3c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x109a08f40);
      (*pcVar5)();
    }
    FUN_109a09010();
    puStack_58 = puVar11 + (long)ppuVar8 * 2;
    puStack_68 = puVar11;
    _bzero();
    lStack_60 = (long)puVar11 + lVar12;
    lVar12 = lStack_60 - (long)puStack_68;
    if (lVar12 != 0) {
      lVar18 = 0;
      do {
        puVar10 = *(undefined4 **)(*(long *)(param_1[3] + 0x40) + lVar18 * 0x10);
        (**(code **)(**(long **)(puVar10 + 10) + 0x10))
                  (&ppuStack_88,*(long **)(puVar10 + 10),*puVar10,puVar10[2] * puVar10[1]);
        FUN_109a06d08(puStack_68 + lVar18 * 2,&ppuStack_88);
        plVar17 = plStack_80;
        if (plStack_80 != (long *)0x0) {
          plVar1 = plStack_80 + 1;
          do {
            lVar14 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_80 + 0x10))(plStack_80);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar12 >> 4);
    }
  }
  lVar12 = param_1[3];
  uVar9 = (ulong)*(uint *)(lVar12 + 0x38);
  FUN_109a086dc(uVar9,*(undefined8 *)(lVar12 + 0x58),*(undefined8 *)(lVar12 + 0x70),param_1 + 0x22,
                param_1 + 0x25);
  if (uVar9 != 0) {
    do {
      FUN_109a094bc(param_1 + 0x1c,puStack_68 + (uVar9 & 0xff) * 2 + -2);
      bVar4 = 0xff < uVar9;
      uVar9 = uVar9 >> 8;
    } while (bVar4);
  }
  ppuStack_88 = (undefined8 **)0x0;
  plStack_80 = (long *)0x0;
  uStack_78 = 0;
  lVar12 = param_1[3];
  uVar9 = (ulong)*(uint *)(lVar12 + 0x38);
  FUN_109a086dc(uVar9,*(undefined8 *)(lVar12 + 0x58),*(undefined8 *)(lVar12 + 0x70),param_1 + 0x2a,
                param_1 + 0x2d);
  do {
    FUN_109a094bc(&ppuStack_88,puStack_68 + (uVar9 & 0xff) * 2 + -2);
    bVar4 = 0xff < uVar9;
    uVar9 = uVar9 >> 8;
  } while (bVar4);
  func_0x0001099fff20(param_1 + 0x28,ppuStack_88);
  pppuStack_70 = &ppuStack_88;
  FUN_109a09044(&pppuStack_70);
  ppuStack_88 = &puStack_68;
  FUN_109a09044(&ppuStack_88);
  return param_1;
}



/* Entry: 109a08ffc; end: 109a0900f;  */

void FUN_109a08ffc(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    __Znwm((long)plVar1 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar4 = (long *)*plVar1;
  lVar5 = *plVar4;
  if (lVar5 != 0) {
    lVar2 = plVar4[1];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_109a00804();
      } while (lVar2 != lVar5);
      lVar3 = *(long *)*plVar1;
    }
    plVar4[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109a09010; end: 109a09043;  */

void FUN_109a09010(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109a00804();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a09044; end: 109a090b3;  */

void FUN_109a09044(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109a00804();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a090b4; end: 109a0918f;  */

long FUN_109a090b4(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x138) != 0) {
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x120;
  FUN_109a09190(&lStack_28);
  lStack_28 = param_1 + 0x108;
  FUN_109a09258(&lStack_28);
  func_0x000109a09320(param_1 + 0xf8);
  func_0x000109a09378(param_1 + 0xd0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0);
    __ZdlPv();
  }
  FUN_109a00804(param_1 + 0x90);
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x48);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x30;
  FUN_109a09044(&lStack_28);
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a09190; end: 109a091ff;  */

void FUN_109a09190(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109a09200();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a09200; end: 109a09257;  */

long FUN_109a09200(long param_1)

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



/* Entry: 109a09258; end: 109a092c7;  */

void FUN_109a09258(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109a092c8();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a092c8; end: 109a094bb;  */

long FUN_109a092c8(long param_1)

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



/* Entry: 109a094bc; end: 109a095b7;  */

/* WARNING: Removing unreachable block (ram,0x000109a0986c) */
/* WARNING: Removing unreachable block (ram,0x000109a098c8) */

long * FUN_109a094bc(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  long **pplVar22;
  long *plVar23;
  undefined8 uVar24;
  long **pplVar25;
  undefined8 uVar26;
  undefined4 uStack_1b4;
  undefined1 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 *puStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined4 uStack_184;
  undefined1 uStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined4 uStack_128;
  uint uStack_124;
  long *plStack_120;
  char cStack_111;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *aplStack_f0 [3];
  long lStack_d8;
  long *plStack_d0;
  char acStack_c1 [17];
  long *plStack_b0;
  long lStack_a8;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    lVar14 = param_2[1];
    uVar26 = *param_2;
    puVar9[1] = param_2[1];
    *puVar9 = uVar26;
    if (lVar14 != 0) {
      plVar7 = (long *)(lVar14 + 8);
      do {
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar17) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar9 = puVar9 + 2;
    plVar7 = param_1;
LAB_109a095a0:
    param_1[1] = (long)puVar9;
    return plVar7;
  }
  lVar14 = (long)puVar9 - *param_1;
  uVar13 = (lVar14 >> 4) + 1;
  if (uVar13 >> 0x3c == 0) {
    uVar15 = param_1[2] - *param_1;
    uVar16 = (long)uVar15 >> 3;
    if (uVar16 <= uVar13) {
      uVar16 = uVar13;
    }
    if (0x7fffffffffffffef < uVar15) {
      uVar16 = 0xfffffffffffffff;
    }
    puVar11 = param_2;
    FUN_109a09010();
    puVar2 = (undefined8 *)(uVar16 + lVar14);
    lVar14 = param_2[1];
    uVar26 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar26;
    if (lVar14 != 0) {
      plVar7 = (long *)(lVar14 + 8);
      do {
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar17) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar9 = puVar2 + 2;
    lVar14 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar14);
    plVar7 = (long *)*param_1;
    *param_1 = lVar14;
    param_1[1] = (long)puVar9;
    param_1[2] = uVar16 + (long)puVar11 * 0x10;
    if (plVar7 != (long *)0x0) {
      __ZdlPv();
    }
    goto LAB_109a095a0;
  }
  FUN_109a08ffc();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = param_1 + 8;
  param_1[9] = 0;
  *plVar19 = 0;
  plVar7 = param_1 + 0xb;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  plVar12 = param_1 + 0x10;
  param_1[0x11] = 0;
  *plVar12 = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  (**(code **)(*(long *)*param_2 + 0x70))(&plStack_100,(long *)*param_2,&PTR_DAT_1132e8130);
  lVar14 = param_1[10];
  plVar23 = (long *)param_1[8];
  if ((ulong)(lVar14 - (long)plVar23) < 0x41) {
    lVar20 = param_1[9];
    lVar8 = 0x50;
    plStack_d0 = plVar19;
    __Znwm();
    _memcpy();
    param_1[8] = lVar8;
    param_1[9] = lVar8 + (lVar20 - (long)plVar23);
    param_1[10] = lVar8 + 0x50;
    aplStack_f0[0] = plVar23;
    aplStack_f0[1] = plVar23;
    aplStack_f0[2] = plVar23;
    lStack_d8 = lVar14;
    FUN_109a0a310(aplStack_f0);
  }
  func_0x000107c31930(plVar7,5);
  lVar14 = 0;
  do {
    uVar3 = *(undefined4 *)(&UNK_110b20b68 + lVar14);
    (**(code **)(*plStack_100 + 0x10))(&uStack_128,plStack_100,uVar3);
    plStack_110 = (long *)0x0;
    plStack_108 = (long *)0x0;
    (**(code **)(*(long *)CONCAT44(uStack_124,uStack_128) + 0x10))
              (aplStack_f0,(long *)CONCAT44(uStack_124,uStack_128),&plStack_110);
    FUN_109a0a204(plVar19,aplStack_f0);
    plVar23 = aplStack_f0[1];
    if (aplStack_f0[1] != (long *)0x0) {
      plVar1 = aplStack_f0[1] + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar17) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*aplStack_f0[1] + 0x10))(aplStack_f0[1]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    plVar23 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plVar1 = plStack_120 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar17) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    (**(code **)(*plStack_100 + 0x10))(&uStack_128,plStack_100,uVar3);
    lStack_138 = CONCAT35((int3)((ulong)lStack_138 >> 0x28),0x100000000);
    uStack_130 = uStack_130 & 0xffffffff00000000;
    plStack_108 = (long *)0x1;
    plStack_110 = &lStack_138;
    (**(code **)(*(long *)CONCAT44(uStack_124,uStack_128) + 0x10))
              (aplStack_f0,(long *)CONCAT44(uStack_124,uStack_128),&plStack_110);
    FUN_109a0a204(plVar19,aplStack_f0);
    plVar23 = aplStack_f0[1];
    if (aplStack_f0[1] != (long *)0x0) {
      plVar1 = aplStack_f0[1] + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar17) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*aplStack_f0[1] + 0x10))(aplStack_f0[1]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    plVar23 = plStack_120;
    if (plStack_120 != (long *)0x0) {
      plVar1 = plStack_120 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar17) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    uVar24 = *(undefined8 *)((long)&PTR_DAT_110b20b60 + lVar14);
    func_0x000107c31940(aplStack_f0,uVar24);
    FUN_1094d24d0(plVar7,aplStack_f0);
    cStack_111 = '\x04';
    uStack_128 = 0x3631662d;
    uStack_124 = uStack_124 & 0xffffff00;
    uVar26 = uVar24;
    _strlen(uVar24);
    puVar9 = (undefined8 *)&uStack_128;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar9,0,uVar24,uVar26);
    aplStack_f0[1] = (long *)puVar9[1];
    aplStack_f0[0] = (long *)*puVar9;
    aplStack_f0[2] = (long *)puVar9[2];
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    FUN_1094d24d0(plVar7,aplStack_f0);
    if (cStack_111 < '\0') {
      __ZdlPv(CONCAT44(uStack_124,uStack_128));
    }
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x50);
  (**(code **)(*(long *)*param_2 + 0x70))(&uStack_128,(long *)*param_2,&PTR_DAT_1132e8080);
  (**(code **)(*(long *)CONCAT44(uStack_124,uStack_128) + 0x10))
            (&plStack_110,(long *)CONCAT44(uStack_124,uStack_128),0);
  uStack_130 = 0;
  lStack_138 = 0;
  (**(code **)(*plStack_110 + 0x10))(aplStack_f0,plStack_110,&lStack_138);
  (**(code **)(*(long *)CONCAT44(uStack_124,uStack_128) + 0x10))
            (&plStack_148,(long *)CONCAT44(uStack_124,uStack_128),1);
  uStack_158 = 0;
  uStack_150 = 0;
  (**(code **)(*plStack_148 + 0x10))(aplStack_f0 + 2,plStack_148,&uStack_158);
  (**(code **)(*(long *)CONCAT44(uStack_124,uStack_128) + 0x10))
            (&plStack_168,(long *)CONCAT44(uStack_124,uStack_128),0);
  uStack_184 = 0;
  uStack_180 = 1;
  uStack_17c = 0;
  puStack_178 = &uStack_184;
  uStack_170 = 1;
  (**(code **)(*plStack_168 + 0x10))(&plStack_d0,plStack_168,&puStack_178);
  (**(code **)(*(long *)CONCAT44(uStack_124,uStack_128) + 0x10))
            (&plStack_198,(long *)CONCAT44(uStack_124,uStack_128),1);
  uStack_1b4 = 0;
  uStack_1b0 = 1;
  uStack_1ac = 0;
  puStack_1a8 = &uStack_1b4;
  uStack_1a0 = 1;
  (**(code **)(*plStack_198 + 0x10))(acStack_c1 + 1,plStack_198,&puStack_1a8);
  pplVar25 = &plStack_b0;
  uVar13 = param_1[0x12];
  lVar14 = param_1[0x10];
  if (uVar13 - lVar14 < 0x21) {
    if (lVar14 != 0) {
      FUN_109a04700(plVar12);
      __ZdlPv(*plVar12);
      uVar13 = 0;
      *plVar12 = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
    }
    uVar16 = (long)uVar13 >> 4;
    if (uVar16 < 3) {
      uVar16 = 2;
    }
    if (0x7fffffffffffffdf < uVar13) {
      uVar16 = 0x7ffffffffffffff;
    }
    if (uVar16 >> 0x3b != 0) goto LAB_109a09f38;
    lVar8 = uVar16 << 5;
    __Znwm();
    lVar14 = 0;
    param_1[0x10] = lVar8;
    param_1[0x11] = lVar8;
    param_1[0x12] = lVar8 + uVar16 * 0x20;
    do {
      lVar20 = 0;
      bVar17 = false;
      do {
        puVar9 = (undefined8 *)((long)aplStack_f0 + lVar20 * 0x10 + lVar14);
        lVar18 = puVar9[1];
        uVar26 = *puVar9;
        puVar2 = (undefined8 *)(lVar8 + lVar20 * 0x10);
        puVar2[1] = puVar9[1];
        *puVar2 = uVar26;
        if (lVar18 != 0) {
          plVar7 = (long *)(lVar18 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = *plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar20 = 1;
        bVar5 = !bVar17;
        bVar17 = true;
      } while (bVar5);
      lVar14 = lVar14 + 0x20;
      lVar8 = lVar8 + 0x20;
    } while (lVar14 != 0x40);
    param_1[0x11] = lVar8;
  }
  else {
    lVar8 = param_1[0x11];
    uVar13 = lVar8 - lVar14;
    if (uVar13 < 0x21) {
      if (lVar8 != lVar14) {
        pplVar22 = aplStack_f0;
        do {
          lVar8 = 0;
          do {
            func_0x000109a0a35c(lVar14 + lVar8,*(undefined8 *)((long)pplVar22 + lVar8),
                                ((undefined8 *)((long)pplVar22 + lVar8))[1]);
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != 0x20);
          pplVar22 = pplVar22 + 4;
          lVar14 = lVar14 + 0x20;
        } while (pplVar22 != (long **)((long)aplStack_f0 + uVar13));
        lVar8 = param_1[0x11];
      }
      do {
        lVar14 = 0;
        bVar17 = false;
        do {
          puVar9 = (undefined8 *)((long)aplStack_f0 + lVar14 * 0x10 + uVar13);
          lVar20 = puVar9[1];
          uVar26 = *puVar9;
          puVar2 = (undefined8 *)(lVar8 + lVar14 * 0x10);
          puVar2[1] = puVar9[1];
          *puVar2 = uVar26;
          if (lVar20 != 0) {
            plVar7 = (long *)(lVar20 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *plVar7 = *plVar7 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar14 = 1;
          bVar5 = !bVar17;
          bVar17 = true;
        } while (bVar5);
        uVar13 = uVar13 + 0x20;
        lVar8 = lVar8 + 0x20;
      } while (uVar13 != 0x40);
      param_1[0x11] = lVar8;
    }
    else {
      lVar8 = 0;
      pplVar22 = aplStack_f0;
      do {
        lVar20 = 0;
        do {
          func_0x000109a0a35c(lVar14 + lVar20,*(undefined8 *)((long)pplVar22 + lVar20),
                              ((undefined8 *)((long)pplVar22 + lVar20))[1]);
          lVar20 = lVar20 + 0x10;
        } while (lVar20 != 0x20);
        lVar8 = lVar8 + 0x20;
        lVar14 = lVar14 + 0x20;
        pplVar22 = pplVar22 + 4;
      } while (lVar8 != 0x40);
      for (lVar8 = param_1[0x11]; lVar8 != lVar14; lVar8 = lVar8 + -0x20) {
        lVar20 = -0x10;
        do {
          func_0x000109a02b20(lVar8 + lVar20);
          lVar20 = lVar20 + -0x10;
        } while (lVar20 != -0x30);
      }
      param_1[0x11] = lVar14;
    }
  }
  pcVar21 = acStack_c1 + 1;
  do {
    lVar14 = -0x20;
    pcVar10 = pcVar21;
    do {
      func_0x000109a02b20(pcVar10);
      pcVar10 = pcVar10 + -0x10;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != 0);
    pplVar25 = pplVar25 + -4;
    pcVar21 = pcVar21 + -0x20;
  } while (pplVar25 != aplStack_f0);
  if (plStack_190 != (long *)0x0) {
    plVar7 = plStack_190 + 1;
    do {
      lVar14 = *plVar7;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar17) {
        *plVar7 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_190 + 0x10))(plStack_190);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_190);
    }
  }
  if (plStack_160 != (long *)0x0) {
    plVar7 = plStack_160 + 1;
    do {
      lVar14 = *plVar7;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar17) {
        *plVar7 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
    }
  }
  if (plStack_140 != (long *)0x0) {
    plVar7 = plStack_140 + 1;
    do {
      lVar14 = *plVar7;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar17) {
        *plVar7 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
    }
  }
  plVar7 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar12 = plStack_108 + 1;
    do {
      lVar14 = *plVar12;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar17) {
        *plVar12 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  func_0x000107c31940(aplStack_f0,&UNK_10f593ff9);
  func_0x000107c31940(&lStack_d8,&UNK_10f594003);
  FUN_109508250(param_1 + 0x13,aplStack_f0,acStack_c1 + 1,2);
  lVar14 = 0;
  do {
    if (acStack_c1[lVar14] < '\0') {
      __ZdlPv(*(undefined8 *)((long)&lStack_d8 + lVar14));
    }
    lVar14 = lVar14 + -0x18;
  } while (lVar14 != -0x30);
  (**(code **)(*(long *)*param_2 + 0x70))(&plStack_110,(long *)*param_2,&PTR_DAT_1132e80d8);
  (**(code **)(*plStack_110 + 0x10))(aplStack_f0,plStack_110,0);
  plVar7 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar12 = plStack_108 + 1;
    do {
      lVar14 = *plVar12;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar17) {
        *plVar12 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uStack_130 = 0;
  lStack_138 = 0;
  (**(code **)(*aplStack_f0[0] + 0x10))(&plStack_110,aplStack_f0[0],&lStack_138);
  FUN_1099ffc14(param_1 + 0xe,&plStack_110);
  plVar7 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar12 = plStack_108 + 1;
    do {
      lVar14 = *plVar12;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar17) {
        *plVar12 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = aplStack_f0[1];
  if (aplStack_f0[1] != (long *)0x0) {
    plVar12 = aplStack_f0[1] + 1;
    do {
      lVar14 = *plVar12;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar17) {
        *plVar12 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*aplStack_f0[1] + 0x10))(aplStack_f0[1]);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plStack_120 != (long *)0x0) {
    plVar7 = plStack_120 + 1;
    do {
      lVar14 = *plVar7;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar17) {
        *plVar7 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_120 + 0x10))(plStack_120);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_120);
    }
  }
  if (plStack_f8 != (long *)0x0) {
    plVar7 = plStack_f8 + 1;
    do {
      lVar14 = *plVar7;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar17) {
        *plVar7 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_109a09f38:
  FUN_109a0a3d0();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a09f40);
  (*pcVar6)();
}



/* Entry: 109a095b8; end: 109a0a203;  */

/* WARNING: Removing unreachable block (ram,0x000109a0986c) */
/* WARNING: Removing unreachable block (ram,0x000109a098c8) */

undefined8 * FUN_109a095b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  char *pcVar18;
  long **pplVar19;
  long *plVar20;
  undefined8 uVar21;
  long **pplVar22;
  undefined8 uVar23;
  undefined4 uStack_184;
  undefined1 uStack_180;
  undefined4 uStack_17c;
  undefined4 *puStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  long *plStack_160;
  undefined4 uStack_154;
  undefined1 uStack_150;
  undefined4 uStack_14c;
  undefined4 *puStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  long *plStack_f0;
  char cStack_e1;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *aplStack_c0 [3];
  long lStack_a8;
  undefined8 *puStack_a0;
  char acStack_91 [17];
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_1 + 8;
  param_1[9] = 0;
  *puVar16 = 0;
  puVar1 = param_1 + 0xb;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  puVar10 = param_1 + 0x10;
  param_1[0x11] = 0;
  *puVar10 = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  (**(code **)(*(long *)*param_2 + 0x70))(&plStack_d0,(long *)*param_2,&PTR_DAT_1132e8130);
  lVar15 = param_1[10];
  plVar20 = (long *)param_1[8];
  if ((ulong)(lVar15 - (long)plVar20) < 0x41) {
    lVar17 = param_1[9];
    lVar7 = 0x50;
    puStack_a0 = puVar16;
    __Znwm();
    _memcpy();
    param_1[8] = lVar7;
    param_1[9] = lVar7 + (lVar17 - (long)plVar20);
    param_1[10] = lVar7 + 0x50;
    aplStack_c0[0] = plVar20;
    aplStack_c0[1] = plVar20;
    aplStack_c0[2] = plVar20;
    lStack_a8 = lVar15;
    FUN_109a0a310(aplStack_c0);
  }
  func_0x000107c31930(puVar1,5);
  lVar15 = 0;
  do {
    uVar3 = *(undefined4 *)(&UNK_110b20b68 + lVar15);
    (**(code **)(*plStack_d0 + 0x10))(&uStack_f8,plStack_d0,uVar3);
    plStack_e0 = (long *)0x0;
    plStack_d8 = (long *)0x0;
    (**(code **)(*(long *)CONCAT44(uStack_f4,uStack_f8) + 0x10))
              (aplStack_c0,(long *)CONCAT44(uStack_f4,uStack_f8),&plStack_e0);
    FUN_109a0a204(puVar16,aplStack_c0);
    plVar20 = aplStack_c0[1];
    if (aplStack_c0[1] != (long *)0x0) {
      plVar2 = aplStack_c0[1] + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*aplStack_c0[1] + 0x10))(aplStack_c0[1]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    plVar20 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      plVar2 = plStack_f0 + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    (**(code **)(*plStack_d0 + 0x10))(&uStack_f8,plStack_d0,uVar3);
    lStack_108 = CONCAT35((int3)((ulong)lStack_108 >> 0x28),0x100000000);
    uStack_100 = uStack_100 & 0xffffffff00000000;
    plStack_d8 = (long *)0x1;
    plStack_e0 = &lStack_108;
    (**(code **)(*(long *)CONCAT44(uStack_f4,uStack_f8) + 0x10))
              (aplStack_c0,(long *)CONCAT44(uStack_f4,uStack_f8),&plStack_e0);
    FUN_109a0a204(puVar16,aplStack_c0);
    plVar20 = aplStack_c0[1];
    if (aplStack_c0[1] != (long *)0x0) {
      plVar2 = aplStack_c0[1] + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*aplStack_c0[1] + 0x10))(aplStack_c0[1]);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    plVar20 = plStack_f0;
    if (plStack_f0 != (long *)0x0) {
      plVar2 = plStack_f0 + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    uVar21 = *(undefined8 *)((long)&PTR_DAT_110b20b60 + lVar15);
    func_0x000107c31940(aplStack_c0,uVar21);
    FUN_1094d24d0(puVar1,aplStack_c0);
    cStack_e1 = '\x04';
    uStack_f8 = 0x3631662d;
    uStack_f4 = uStack_f4 & 0xffffff00;
    uVar23 = uVar21;
    _strlen(uVar21);
    puVar8 = (undefined8 *)&uStack_f8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar8,0,uVar21,uVar23);
    aplStack_c0[1] = (long *)puVar8[1];
    aplStack_c0[0] = (long *)*puVar8;
    aplStack_c0[2] = (long *)puVar8[2];
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    FUN_1094d24d0(puVar1,aplStack_c0);
    if (cStack_e1 < '\0') {
      __ZdlPv(CONCAT44(uStack_f4,uStack_f8));
    }
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x50);
  (**(code **)(*(long *)*param_2 + 0x70))(&uStack_f8,(long *)*param_2,&PTR_DAT_1132e8080);
  (**(code **)(*(long *)CONCAT44(uStack_f4,uStack_f8) + 0x10))
            (&plStack_e0,(long *)CONCAT44(uStack_f4,uStack_f8),0);
  uStack_100 = 0;
  lStack_108 = 0;
  (**(code **)(*plStack_e0 + 0x10))(aplStack_c0,plStack_e0,&lStack_108);
  (**(code **)(*(long *)CONCAT44(uStack_f4,uStack_f8) + 0x10))
            (&plStack_118,(long *)CONCAT44(uStack_f4,uStack_f8),1);
  uStack_128 = 0;
  uStack_120 = 0;
  (**(code **)(*plStack_118 + 0x10))(aplStack_c0 + 2,plStack_118,&uStack_128);
  (**(code **)(*(long *)CONCAT44(uStack_f4,uStack_f8) + 0x10))
            (&plStack_138,(long *)CONCAT44(uStack_f4,uStack_f8),0);
  uStack_154 = 0;
  uStack_150 = 1;
  uStack_14c = 0;
  puStack_148 = &uStack_154;
  uStack_140 = 1;
  (**(code **)(*plStack_138 + 0x10))(&puStack_a0,plStack_138,&puStack_148);
  (**(code **)(*(long *)CONCAT44(uStack_f4,uStack_f8) + 0x10))
            (&plStack_168,(long *)CONCAT44(uStack_f4,uStack_f8),1);
  uStack_184 = 0;
  uStack_180 = 1;
  uStack_17c = 0;
  puStack_178 = &uStack_184;
  uStack_170 = 1;
  (**(code **)(*plStack_168 + 0x10))(acStack_91 + 1,plStack_168,&puStack_178);
  pplVar22 = &plStack_80;
  uVar11 = param_1[0x12];
  lVar15 = param_1[0x10];
  if (uVar11 - lVar15 < 0x21) {
    if (lVar15 != 0) {
      FUN_109a04700(puVar10);
      __ZdlPv(*puVar10);
      uVar11 = 0;
      *puVar10 = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
    }
    uVar12 = (long)uVar11 >> 4;
    if (uVar12 < 3) {
      uVar12 = 2;
    }
    if (0x7fffffffffffffdf < uVar11) {
      uVar12 = 0x7ffffffffffffff;
    }
    if (uVar12 >> 0x3b != 0) goto LAB_109a09f38;
    lVar7 = uVar12 << 5;
    __Znwm();
    lVar15 = 0;
    param_1[0x10] = lVar7;
    param_1[0x11] = lVar7;
    param_1[0x12] = lVar7 + uVar12 * 0x20;
    do {
      lVar17 = 0;
      bVar13 = false;
      do {
        puVar1 = (undefined8 *)((long)aplStack_c0 + lVar17 * 0x10 + lVar15);
        lVar14 = puVar1[1];
        uVar23 = *puVar1;
        puVar10 = (undefined8 *)(lVar7 + lVar17 * 0x10);
        puVar10[1] = puVar1[1];
        *puVar10 = uVar23;
        if (lVar14 != 0) {
          plVar20 = (long *)(lVar14 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = *plVar20 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar17 = 1;
        bVar5 = !bVar13;
        bVar13 = true;
      } while (bVar5);
      lVar15 = lVar15 + 0x20;
      lVar7 = lVar7 + 0x20;
    } while (lVar15 != 0x40);
    param_1[0x11] = lVar7;
  }
  else {
    lVar7 = param_1[0x11];
    uVar11 = lVar7 - lVar15;
    if (uVar11 < 0x21) {
      if (lVar7 != lVar15) {
        pplVar19 = aplStack_c0;
        do {
          lVar7 = 0;
          do {
            func_0x000109a0a35c(lVar15 + lVar7,*(undefined8 *)((long)pplVar19 + lVar7),
                                ((undefined8 *)((long)pplVar19 + lVar7))[1]);
            lVar7 = lVar7 + 0x10;
          } while (lVar7 != 0x20);
          pplVar19 = pplVar19 + 4;
          lVar15 = lVar15 + 0x20;
        } while (pplVar19 != (long **)((long)aplStack_c0 + uVar11));
        lVar7 = param_1[0x11];
      }
      do {
        lVar15 = 0;
        bVar13 = false;
        do {
          puVar1 = (undefined8 *)((long)aplStack_c0 + lVar15 * 0x10 + uVar11);
          lVar17 = puVar1[1];
          uVar23 = *puVar1;
          puVar10 = (undefined8 *)(lVar7 + lVar15 * 0x10);
          puVar10[1] = puVar1[1];
          *puVar10 = uVar23;
          if (lVar17 != 0) {
            plVar20 = (long *)(lVar17 + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar5) {
                *plVar20 = *plVar20 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar15 = 1;
          bVar5 = !bVar13;
          bVar13 = true;
        } while (bVar5);
        uVar11 = uVar11 + 0x20;
        lVar7 = lVar7 + 0x20;
      } while (uVar11 != 0x40);
      param_1[0x11] = lVar7;
    }
    else {
      lVar7 = 0;
      pplVar19 = aplStack_c0;
      do {
        lVar17 = 0;
        do {
          func_0x000109a0a35c(lVar15 + lVar17,*(undefined8 *)((long)pplVar19 + lVar17),
                              ((undefined8 *)((long)pplVar19 + lVar17))[1]);
          lVar17 = lVar17 + 0x10;
        } while (lVar17 != 0x20);
        lVar7 = lVar7 + 0x20;
        lVar15 = lVar15 + 0x20;
        pplVar19 = pplVar19 + 4;
      } while (lVar7 != 0x40);
      for (lVar7 = param_1[0x11]; lVar7 != lVar15; lVar7 = lVar7 + -0x20) {
        lVar17 = -0x10;
        do {
          func_0x000109a02b20(lVar7 + lVar17);
          lVar17 = lVar17 + -0x10;
        } while (lVar17 != -0x30);
      }
      param_1[0x11] = lVar15;
    }
  }
  pcVar18 = acStack_91 + 1;
  do {
    lVar15 = -0x20;
    pcVar9 = pcVar18;
    do {
      func_0x000109a02b20(pcVar9);
      pcVar9 = pcVar9 + -0x10;
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0);
    pplVar22 = pplVar22 + -4;
    pcVar18 = pcVar18 + -0x20;
  } while (pplVar22 != aplStack_c0);
  if (plStack_160 != (long *)0x0) {
    plVar20 = plStack_160 + 1;
    do {
      lVar15 = *plVar20;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar13) {
        *plVar20 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_160 + 0x10))(plStack_160);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_160);
    }
  }
  if (plStack_130 != (long *)0x0) {
    plVar20 = plStack_130 + 1;
    do {
      lVar15 = *plVar20;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar13) {
        *plVar20 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
    }
  }
  if (plStack_110 != (long *)0x0) {
    plVar20 = plStack_110 + 1;
    do {
      lVar15 = *plVar20;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar13) {
        *plVar20 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_110 + 0x10))(plStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
    }
  }
  plVar20 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar15 = *plVar2;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  func_0x000107c31940(aplStack_c0,&UNK_10f593ff9);
  func_0x000107c31940(&lStack_a8,&UNK_10f594003);
  FUN_109508250(param_1 + 0x13,aplStack_c0,acStack_91 + 1,2);
  lVar15 = 0;
  do {
    if (acStack_91[lVar15] < '\0') {
      __ZdlPv(*(undefined8 *)((long)&lStack_a8 + lVar15));
    }
    lVar15 = lVar15 + -0x18;
  } while (lVar15 != -0x30);
  (**(code **)(*(long *)*param_2 + 0x70))(&plStack_e0,(long *)*param_2,&PTR_DAT_1132e80d8);
  (**(code **)(*plStack_e0 + 0x10))(aplStack_c0,plStack_e0,0);
  plVar20 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar15 = *plVar2;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  uStack_100 = 0;
  lStack_108 = 0;
  (**(code **)(*aplStack_c0[0] + 0x10))(&plStack_e0,aplStack_c0[0],&lStack_108);
  FUN_1099ffc14(param_1 + 0xe,&plStack_e0);
  plVar20 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar2 = plStack_d8 + 1;
    do {
      lVar15 = *plVar2;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = aplStack_c0[1];
  if (aplStack_c0[1] != (long *)0x0) {
    plVar2 = aplStack_c0[1] + 1;
    do {
      lVar15 = *plVar2;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*aplStack_c0[1] + 0x10))(aplStack_c0[1]);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if (plStack_f0 != (long *)0x0) {
    plVar20 = plStack_f0 + 1;
    do {
      lVar15 = *plVar20;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar13) {
        *plVar20 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f0);
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar20 = plStack_c8 + 1;
    do {
      lVar15 = *plVar20;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar13) {
        *plVar20 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_109a09f38:
  FUN_109a0a3d0();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109a09f40);
  (*pcVar6)();
}



/* Entry: 109a0a204; end: 109a0a2fb;  */

long * FUN_109a0a204(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    puVar9 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    *param_2 = 0;
    param_2[1] = 0;
    plVar4 = param_1;
LAB_109a0a2d8:
    param_1[1] = (long)puVar9;
    return plVar4;
  }
  lVar7 = (long)puVar2 - *param_1;
  uVar1 = (lVar7 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plStack_48 = param_1;
    if (uVar6 >> 0x3c == 0) {
      lVar3 = uVar6 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar7);
      uVar11 = param_2[1];
      uVar10 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      lVar7 = *param_1;
      lVar8 = (long)puVar2 - (param_1[1] - lVar7);
      puVar9 = puVar2 + 2;
      puVar2[1] = uVar11;
      *puVar2 = uVar10;
      _memcpy(lVar8,lVar7);
      *param_1 = lVar8;
      param_1[1] = (long)puVar9;
      lStack_50 = param_1[2];
      param_1[2] = lVar3 + uVar6 * 0x10;
      plVar4 = &lStack_68;
      lStack_68 = lVar7;
      lStack_60 = lVar7;
      lStack_58 = lVar7;
      FUN_109a0a310(plVar4);
      goto LAB_109a0a2d8;
    }
  }
  else {
    FUN_109a0a2fc();
  }
  func_0x000104c4f740();
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar7 = plVar4[1];
  lVar3 = plVar4[2];
  while (lVar3 != lVar7) {
    plVar4[2] = lVar3 + -0x10;
    func_0x000109a02b20();
    lVar3 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 109a0a2fc; end: 109a0a30f;  */

long * FUN_109a0a2fc(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x10;
    func_0x000109a02b20();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 109a0a310; end: 109a0a3cf;  */

long * FUN_109a0a310(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x000109a02b20();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109a0a3d0; end: 109a0a3e3;  */

void FUN_109a0a3d0(undefined8 param_1,undefined8 *param_2,long param_3,byte *param_4,uint param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uStack_170;
  long *plStack_168;
  long lStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar10 = (long *)*param_2;
  if ((plVar10 == (long *)0x0) ||
     (plVar5 = plVar10,
     ___dynamic_cast(plVar10,&PTR_DAT_110b202e0,&PTR_DAT_110b20300,0xfffffffffffffffe),
     plVar5 == (long *)0x0)) {
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
  }
  else {
    plStack_98 = (long *)param_2[1];
    plStack_a0 = plVar5;
    if (plStack_98 != (long *)0x0) {
      plVar10 = plStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar10 = (long *)*param_2;
    }
  }
  uStack_f0 = *(undefined8 *)(param_4 + 0x30);
  plStack_e8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_e0 = 0x100000000060;
  (**(code **)(*plVar10 + 0x70))(plVar10,0x100,0x200,&uStack_f0,1);
  plVar10 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar5 = plStack_e8 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = (long *)*param_2;
  uStack_b0 = *(undefined8 *)(param_4 + 0x40);
  plStack_a8 = *(long **)(param_4 + 0x48);
  if (*(long *)(param_4 + 0x48) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x48) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c0 = *(undefined8 *)(param_4 + 0x30);
  plStack_b8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_e8 = (long *)0x0;
  uStack_f0 = 0;
  lStack_e0 = 0x10;
  (**(code **)(*plVar10 + 0x78))(plVar10,&uStack_b0,&uStack_c0,&uStack_f0,1);
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar5 = plStack_b8 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar5 = plStack_a8 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = (long *)*param_2;
  uStack_f0 = *(undefined8 *)(param_4 + 0x30);
  plStack_e8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_e0 = 0x6000001000;
  uStack_d8 = *(undefined8 *)(param_4 + 0x50);
  uStack_d0 = *(undefined8 *)(param_4 + 0x58);
  if (*(long *)(param_4 + 0x58) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c8 = 0x4000000020;
  (**(code **)(*plVar10 + 0x70))(plVar10,0x300,0x100,&uStack_f0,2);
  lVar9 = 0x18;
  do {
    FUN_109a00804((long)&uStack_f0 + lVar9);
    plVar10 = plStack_a0;
    lVar9 = lVar9 + -0x18;
  } while (lVar9 != -0x18);
  func_0x000107c31940(&uStack_f0,&UNK_10f594010);
  auVar13 = NEON_fmov(0x3f800000,4);
  uVar14 = auVar13._8_8_;
  uVar12 = auVar13._0_8_;
  uStack_110 = uVar12;
  uStack_108 = uVar14;
  FUN_109a0ad8c(auStack_90,plVar10 + 1);
  FUN_109a0adcc(&uStack_100,auStack_90,&uStack_f0,&uStack_110);
  if (plStack_88 != (long *)0x0) {
    plVar10 = plStack_88 + 1;
    do {
      lVar9 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  plVar10 = (long *)*param_2;
  uStack_120 = *(undefined8 *)(puVar4 + 0x70);
  plStack_118 = *(long **)(puVar4 + 0x78);
  if (*(long *)(puVar4 + 0x78) != 0) {
    plVar5 = (long *)(*(long *)(puVar4 + 0x78) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_120);
  plVar10 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar5 = plStack_118 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  plVar10 = (long *)*param_2;
  uStack_130 = *(undefined8 *)(param_4 + 0x60);
  plStack_128 = *(long **)(param_4 + 0x68);
  if (*(long *)(param_4 + 0x68) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x68) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar10 + 0x38))(plVar10,&uStack_130);
  plVar10 = plStack_128;
  if (plStack_128 != (long *)0x0) {
    plVar5 = plStack_128 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_128 + 0x10))(plStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  uStack_f0 = *(undefined8 *)(param_4 + 4);
  plStack_e8 = (long *)CONCAT44(plStack_e8._4_4_,1);
  (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,&uStack_f0);
  FUN_109a0ae38(&uStack_100);
  plVar10 = (long *)*param_2;
  uStack_f0 = *(undefined8 *)(param_4 + 0x30);
  plStack_e8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_e0 = 0x2100000060;
  uStack_d8 = *(undefined8 *)(param_4 + 0x50);
  uStack_d0 = *(undefined8 *)(param_4 + 0x58);
  if (*(long *)(param_4 + 0x58) != 0) {
    plVar5 = (long *)(*(long *)(param_4 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_c8 = 0x2000000040;
  (**(code **)(*plVar10 + 0x70))(plVar10,0x100,0x102,&uStack_f0,2);
  lVar9 = 0x18;
  do {
    FUN_109a00804((long)&uStack_f0 + lVar9);
    lVar9 = lVar9 + -0x18;
  } while (lVar9 != -0x18);
  lVar9 = *(long *)(puVar4 + 0x80);
  lVar8 = *(long *)(puVar4 + 0x88);
  if (lVar8 != lVar9) {
    uVar11 = 0;
    do {
      plVar10 = (long *)(*(long *)(param_3 + 0x28) + uVar11 * 0x18);
      if (*plVar10 != plVar10[1]) {
        lVar9 = *(long *)(puVar4 + 0x98);
        uStack_100 = uVar12;
        uStack_f8 = uVar14;
        FUN_109a0ad8c(&uStack_f0,plStack_a0 + 1);
        FUN_109a0adcc(auStack_90,&uStack_f0,lVar9 + uVar11 * 0x18,&uStack_100);
        plVar10 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar5 = plStack_e8 + 1;
          do {
            lVar9 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x80) + uVar11 * 0x20 + (ulong)*param_4 * 0x10);
        plVar10 = (long *)*param_2;
        uStack_140 = *puVar1;
        plStack_138 = (long *)puVar1[1];
        if (puVar1[1] != 0) {
          plVar5 = (long *)(puVar1[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (**(code **)(*plVar10 + 0x10))(plVar10,&uStack_140);
        plVar10 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar5 = plStack_138 + 1;
          do {
            lVar9 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = (long *)*param_2;
        uStack_150 = *(undefined8 *)(param_4 + 0x70);
        plStack_148 = *(long **)(param_4 + 0x78);
        if (*(long *)(param_4 + 0x78) != 0) {
          plVar5 = (long *)(*(long *)(param_4 + 0x78) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (**(code **)(*plVar10 + 0x38))(plVar10,&uStack_150);
        plVar10 = plStack_148;
        if (plStack_148 != (long *)0x0) {
          plVar5 = plStack_148 + 1;
          do {
            lVar9 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_148 + 0x10))(plStack_148);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = (long *)(*(long *)(param_3 + 0x28) + uVar11 * 0x18);
        plVar5 = (long *)plVar10[1];
        for (plVar10 = (long *)*plVar10; plVar10 != plVar5; plVar10 = plVar10 + 6) {
          lVar9 = *plVar10;
          if ((*(char *)(lVar9 + 0x35) == '\x01') && ((*(uint *)(lVar9 + 0x28) & param_5) != 0)) {
            uStack_110 = uVar12;
            uStack_108 = uVar14;
            FUN_109a0ad8c(&uStack_f0,plStack_a0 + 1);
            FUN_109a0adcc(&uStack_100,&uStack_f0,lVar9,&uStack_110);
            plVar7 = plStack_e8;
            if (plStack_e8 != (long *)0x0) {
              plVar6 = plStack_e8 + 1;
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
                (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            plVar6 = (long *)*param_2;
            plVar7 = plVar10 + (ulong)*param_4 * 2 + 2;
            lStack_160 = *plVar7;
            plStack_158 = (long *)plVar7[1];
            if (plVar7[1] != 0) {
              plVar7 = (long *)(plVar7[1] + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar3) {
                  *plVar7 = *plVar7 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            (**(code **)(*plVar6 + 0x38))(plVar6,&lStack_160);
            plVar7 = plStack_158;
            if (plStack_158 != (long *)0x0) {
              plVar6 = plStack_158 + 1;
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
                (**(code **)(*plStack_158 + 0x10))(plStack_158);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            plVar7 = (long *)*param_2;
            uStack_170 = *(undefined8 *)(param_4 + 0x20);
            plStack_168 = *(long **)(param_4 + 0x28);
            if (*(long *)(param_4 + 0x28) != 0) {
              plVar6 = (long *)(*(long *)(param_4 + 0x28) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = *plVar6 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            (**(code **)(*plVar7 + 0x68))(plVar7,&uStack_170);
            plVar7 = plStack_168;
            if (plStack_168 != (long *)0x0) {
              plVar6 = plStack_168 + 1;
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
                (**(code **)(*plStack_168 + 0x10))(plStack_168);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            FUN_109a0ae38(&uStack_100);
          }
        }
        FUN_109a0ae38(auStack_90);
        lVar9 = *(long *)(puVar4 + 0x80);
        lVar8 = *(long *)(puVar4 + 0x88);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)(lVar8 - lVar9 >> 5));
  }
  plVar10 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar5 = plStack_98 + 1;
    do {
      lVar9 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return;
}



/* Entry: 109a0a3e4; end: 109a0ad8b;  */

void FUN_109a0a3e4(long param_1,undefined8 *param_2,long param_3,byte *param_4,uint param_5)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uStack_160;
  long *plStack_158;
  long lStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 auStack_80 [8];
  long *plStack_78;
  
  plVar9 = (long *)*param_2;
  if ((plVar9 == (long *)0x0) ||
     (plVar4 = plVar9,
     ___dynamic_cast(plVar9,&PTR_DAT_110b202e0,&PTR_DAT_110b20300,0xfffffffffffffffe),
     plVar4 == (long *)0x0)) {
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
  }
  else {
    plStack_88 = (long *)param_2[1];
    plStack_90 = plVar4;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar9 = (long *)*param_2;
    }
  }
  uStack_e0 = *(undefined8 *)(param_4 + 0x30);
  plStack_d8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_d0 = 0x100000000060;
  (**(code **)(*plVar9 + 0x70))(plVar9,0x100,0x200,&uStack_e0,1);
  plVar9 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar4 = plStack_d8 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = (long *)*param_2;
  uStack_a0 = *(undefined8 *)(param_4 + 0x40);
  plStack_98 = *(long **)(param_4 + 0x48);
  if (*(long *)(param_4 + 0x48) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x48) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b0 = *(undefined8 *)(param_4 + 0x30);
  plStack_a8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_d8 = (long *)0x0;
  uStack_e0 = 0;
  lStack_d0 = 0x10;
  (**(code **)(*plVar9 + 0x78))(plVar9,&uStack_a0,&uStack_b0,&uStack_e0,1);
  plVar9 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar4 = plStack_a8 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar4 = plStack_98 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = (long *)*param_2;
  uStack_e0 = *(undefined8 *)(param_4 + 0x30);
  plStack_d8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_d0 = 0x6000001000;
  uStack_c8 = *(undefined8 *)(param_4 + 0x50);
  uStack_c0 = *(undefined8 *)(param_4 + 0x58);
  if (*(long *)(param_4 + 0x58) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b8 = 0x4000000020;
  (**(code **)(*plVar9 + 0x70))(plVar9,0x300,0x100,&uStack_e0,2);
  lVar8 = 0x18;
  do {
    FUN_109a00804((long)&uStack_e0 + lVar8);
    plVar9 = plStack_90;
    lVar8 = lVar8 + -0x18;
  } while (lVar8 != -0x18);
  func_0x000107c31940(&uStack_e0,&UNK_10f594010);
  auVar12 = NEON_fmov(0x3f800000,4);
  uVar13 = auVar12._8_8_;
  uVar11 = auVar12._0_8_;
  uStack_100 = uVar11;
  uStack_f8 = uVar13;
  FUN_109a0ad8c(auStack_80,plVar9 + 1);
  FUN_109a0adcc(&uStack_f0,auStack_80,&uStack_e0,&uStack_100);
  if (plStack_78 != (long *)0x0) {
    plVar9 = plStack_78 + 1;
    do {
      lVar8 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (lStack_d0 < 0) {
    __ZdlPv(uStack_e0);
  }
  plVar9 = (long *)*param_2;
  uStack_110 = *(undefined8 *)(param_1 + 0x70);
  plStack_108 = *(long **)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x78) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x78) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_110);
  plVar9 = plStack_108;
  if (plStack_108 != (long *)0x0) {
    plVar4 = plStack_108 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = (long *)*param_2;
  uStack_120 = *(undefined8 *)(param_4 + 0x60);
  plStack_118 = *(long **)(param_4 + 0x68);
  if (*(long *)(param_4 + 0x68) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x68) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,&uStack_120);
  plVar9 = plStack_118;
  if (plStack_118 != (long *)0x0) {
    plVar4 = plStack_118 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_118 + 0x10))(plStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  uStack_e0 = *(undefined8 *)(param_4 + 4);
  plStack_d8 = (long *)CONCAT44(plStack_d8._4_4_,1);
  (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,&uStack_e0);
  FUN_109a0ae38(&uStack_f0);
  plVar9 = (long *)*param_2;
  uStack_e0 = *(undefined8 *)(param_4 + 0x30);
  plStack_d8 = *(long **)(param_4 + 0x38);
  if (*(long *)(param_4 + 0x38) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_d0 = 0x2100000060;
  uStack_c8 = *(undefined8 *)(param_4 + 0x50);
  uStack_c0 = *(undefined8 *)(param_4 + 0x58);
  if (*(long *)(param_4 + 0x58) != 0) {
    plVar4 = (long *)(*(long *)(param_4 + 0x58) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_b8 = 0x2000000040;
  (**(code **)(*plVar9 + 0x70))(plVar9,0x100,0x102,&uStack_e0,2);
  lVar8 = 0x18;
  do {
    FUN_109a00804((long)&uStack_e0 + lVar8);
    lVar8 = lVar8 + -0x18;
  } while (lVar8 != -0x18);
  lVar8 = *(long *)(param_1 + 0x80);
  lVar7 = *(long *)(param_1 + 0x88);
  if (lVar7 != lVar8) {
    uVar10 = 0;
    do {
      plVar9 = (long *)(*(long *)(param_3 + 0x28) + uVar10 * 0x18);
      if (*plVar9 != plVar9[1]) {
        lVar8 = *(long *)(param_1 + 0x98);
        uStack_f0 = uVar11;
        uStack_e8 = uVar13;
        FUN_109a0ad8c(&uStack_e0,plStack_90 + 1);
        FUN_109a0adcc(auStack_80,&uStack_e0,lVar8 + uVar10 * 0x18,&uStack_f0);
        plVar9 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar4 = plStack_d8 + 1;
          do {
            lVar8 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar10 * 0x20 + (ulong)*param_4 * 0x10);
        plVar9 = (long *)*param_2;
        uStack_130 = *puVar1;
        plStack_128 = (long *)puVar1[1];
        if (puVar1[1] != 0) {
          plVar4 = (long *)(puVar1[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (**(code **)(*plVar9 + 0x10))(plVar9,&uStack_130);
        plVar9 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar4 = plStack_128 + 1;
          do {
            lVar8 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)*param_2;
        uStack_140 = *(undefined8 *)(param_4 + 0x70);
        plStack_138 = *(long **)(param_4 + 0x78);
        if (*(long *)(param_4 + 0x78) != 0) {
          plVar4 = (long *)(*(long *)(param_4 + 0x78) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        (**(code **)(*plVar9 + 0x38))(plVar9,&uStack_140);
        plVar9 = plStack_138;
        if (plStack_138 != (long *)0x0) {
          plVar4 = plStack_138 + 1;
          do {
            lVar8 = *plVar4;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_138 + 0x10))(plStack_138);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
        plVar9 = (long *)(*(long *)(param_3 + 0x28) + uVar10 * 0x18);
        plVar4 = (long *)plVar9[1];
        for (plVar9 = (long *)*plVar9; plVar9 != plVar4; plVar9 = plVar9 + 6) {
          lVar8 = *plVar9;
          if ((*(char *)(lVar8 + 0x35) == '\x01') && ((*(uint *)(lVar8 + 0x28) & param_5) != 0)) {
            uStack_100 = uVar11;
            uStack_f8 = uVar13;
            FUN_109a0ad8c(&uStack_e0,plStack_90 + 1);
            FUN_109a0adcc(&uStack_f0,&uStack_e0,lVar8,&uStack_100);
            plVar6 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar5 = plStack_d8 + 1;
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
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            plVar5 = (long *)*param_2;
            plVar6 = plVar9 + (ulong)*param_4 * 2 + 2;
            lStack_150 = *plVar6;
            plStack_148 = (long *)plVar6[1];
            if (plVar6[1] != 0) {
              plVar6 = (long *)(plVar6[1] + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = *plVar6 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            (**(code **)(*plVar5 + 0x38))(plVar5,&lStack_150);
            plVar6 = plStack_148;
            if (plStack_148 != (long *)0x0) {
              plVar5 = plStack_148 + 1;
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
                (**(code **)(*plStack_148 + 0x10))(plStack_148);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            plVar6 = (long *)*param_2;
            uStack_160 = *(undefined8 *)(param_4 + 0x20);
            plStack_158 = *(long **)(param_4 + 0x28);
            if (*(long *)(param_4 + 0x28) != 0) {
              plVar5 = (long *)(*(long *)(param_4 + 0x28) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar3) {
                  *plVar5 = *plVar5 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            (**(code **)(*plVar6 + 0x68))(plVar6,&uStack_160);
            plVar6 = plStack_158;
            if (plStack_158 != (long *)0x0) {
              plVar5 = plStack_158 + 1;
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
                (**(code **)(*plStack_158 + 0x10))(plStack_158);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            FUN_109a0ae38(&uStack_f0);
          }
        }
        FUN_109a0ae38(auStack_80);
        lVar8 = *(long *)(param_1 + 0x80);
        lVar7 = *(long *)(param_1 + 0x88);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(lVar7 - lVar8 >> 5));
  }
  plVar9 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 109a0ad8c; end: 109a0adcb;  */

undefined8 *
FUN_109a0ad8c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  *param_1 = *param_2;
  if (lVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      return param_1;
    }
  }
  puVar4 = (undefined8 *)0x0;
  FUN_1092315e8();
  plVar5 = (long *)*param_2;
  lVar3 = param_2[1];
  *puVar4 = plVar5;
  puVar4[1] = lVar3;
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = (long *)*param_2;
  }
  (**(code **)(*plVar5 + 8))(plVar5,param_3,param_4);
  return puVar4;
}



/* Entry: 109a0adcc; end: 109a0ae37;  */

undefined8 *
FUN_109a0adcc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  lVar1 = param_2[1];
  *param_1 = plVar4;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    plVar4 = (long *)(lVar1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = (long *)*param_2;
  }
  (**(code **)(*plVar4 + 8))(plVar4,param_3,param_4);
  return param_1;
}



/* Entry: 109a0ae38; end: 109a0ae6b;  */

undefined8 * FUN_109a0ae38(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  (**(code **)(*(long *)*param_1 + 0x10))();
  plVar5 = (long *)param_1[1];
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



/* Entry: 109a0ae6c; end: 109a0af3f;  */

long FUN_109a0ae6c(long param_1)

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



/* Entry: 109a0af40; end: 109a0b813;  */

void FUN_109a0af40(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined *puVar13;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 *extraout_x9;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long *extraout_x10;
  long extraout_x10_00;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long *plStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  
  lVar7 = *param_2;
  if ((lVar7 == 0) ||
     (___dynamic_cast(lVar7,&PTR_DAT_110b202e0,&PTR_DAT_110b20300,0xfffffffffffffffe), lVar7 == 0))
  {
    lStack_b0 = 0;
    plStack_a8 = (long *)0x0;
  }
  else {
    plStack_a8 = (long *)param_2[1];
    lStack_b0 = lVar7;
    if (plStack_a8 != (long *)0x0) {
      plVar18 = plStack_a8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *plVar18 = *plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340d6d8;
  if (param_4 == 0) {
    (*(code *)PTR___tlv_bootstrap_11340d6f0)();
  }
  else {
    plVar18 = param_3 + param_4 * 2;
    (*(code *)PTR___tlv_bootstrap_11340d6d8)();
    ppuVar9 = &PTR___tlv_bootstrap_11340d6f0;
    (*(code *)PTR___tlv_bootstrap_11340d6f0)();
    puVar10 = extraout_x9;
    (*(code *)*extraout_x9)();
    do {
      func_0x000109a0b9dc();
      if (ppuVar8[1] != *ppuVar8) {
        uVar19 = 0;
        do {
          if (*(int *)(*param_3 + uVar19 * 0x18 + 0x150) != 0) {
            func_0x000109a0b9dc();
            plVar20 = (long *)(*ppuVar8 + uVar19 * 0x18);
            plVar12 = (long *)plVar20[1];
            if (plVar12 < (long *)plVar20[2]) {
              lVar14 = param_3[1];
              lVar7 = *param_3;
              plVar12[1] = param_3[1];
              *plVar12 = lVar7;
              if (lVar14 != 0) {
                plVar1 = (long *)(lVar14 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              plVar12 = plVar12 + 2;
            }
            else {
              lVar7 = (long)plVar12 - *plVar20;
              uVar2 = (lVar7 >> 4) + 1;
              if (uVar2 >> 0x3c != 0) {
                FUN_109a04320();
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x109a0b778);
                (*pcVar6)();
              }
              uVar15 = plVar20[2] - *plVar20;
              uVar17 = (long)uVar15 >> 3;
              if (uVar17 <= uVar2) {
                uVar17 = uVar2;
              }
              if (0x7fffffffffffffef < uVar15) {
                uVar17 = 0xfffffffffffffff;
              }
              plVar11 = plVar20;
              plStack_80 = plVar20;
              FUN_109a04334();
              plVar1 = (long *)((long)plVar11 + lVar7);
              lVar14 = param_3[1];
              lVar7 = *param_3;
              plVar1[1] = param_3[1];
              *plVar1 = lVar7;
              if (lVar14 != 0) {
                plVar12 = (long *)(lVar14 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                  if (bVar5) {
                    *plVar12 = *plVar12 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              plVar12 = plVar1 + 2;
              lVar7 = (long)plVar1 - (plVar20[1] - *plVar20);
              _memcpy(lVar7);
              lStack_90 = *plVar20;
              *plVar20 = lVar7;
              uStack_98 = (undefined4)lStack_90;
              uStack_94 = (undefined4)((ulong)lStack_90 >> 0x20);
              plVar20[1] = (long)plVar12;
              lStack_88 = plVar20[2];
              plVar20[2] = (long)(plVar11 + uVar17 * 2);
              uStack_a0 = uStack_98;
              uStack_9c = uStack_94;
              func_0x000109a04368(&uStack_a0);
            }
            plVar20[1] = (long)plVar12;
          }
          uVar19 = uVar19 + 1;
          func_0x000109a0b9dc();
        } while (uVar19 < (ulong)(((long)ppuVar8[1] - (long)*ppuVar8 >> 3) * -0x5555555555555555));
      }
      func_0x000109a0b9dc();
      lVar7 = *param_3;
      uStack_98 = (undefined4)*(undefined8 *)(lVar7 + 0xf8);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xf8) >> 0x20);
      uStack_a0 = (undefined4)*(undefined8 *)(lVar7 + 0xf0);
      uStack_9c = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xf0) >> 0x20);
      if (*(long *)(lVar7 + 0xf8) != 0) {
        plVar12 = (long *)(*(long *)(lVar7 + 0xf8) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_90 = 0x4000000020;
      FUN_109a0b814(ppuVar9,&uStack_a0);
      plVar12 = (long *)CONCAT44(uStack_94,uStack_98);
      if (plVar12 != (long *)0x0) {
        plVar20 = plVar12 + 1;
        do {
          lVar7 = *plVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x000109a0b9dc();
      lVar7 = *param_3;
      uStack_98 = (undefined4)*(undefined8 *)(lVar7 + 0x138);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x138) >> 0x20);
      uStack_a0 = (undefined4)*(undefined8 *)(lVar7 + 0x130);
      uStack_9c = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x130) >> 0x20);
      if (*(long *)(lVar7 + 0x138) != 0) {
        plVar12 = (long *)(*(long *)(lVar7 + 0x138) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_90 = 0x4000000020;
      FUN_109a0b814(ppuVar9,&uStack_a0);
      plVar12 = (long *)CONCAT44(uStack_94,uStack_98);
      if (plVar12 != (long *)0x0) {
        plVar20 = plVar12 + 1;
        do {
          lVar7 = *plVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x000109a0b9dc();
      lVar7 = *param_3;
      uStack_98 = (undefined4)*(undefined8 *)(lVar7 + 0xf8);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xf8) >> 0x20);
      uStack_a0 = (undefined4)*(undefined8 *)(lVar7 + 0xf0);
      uStack_9c = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0xf0) >> 0x20);
      if (*(long *)(lVar7 + 0xf8) != 0) {
        plVar12 = (long *)(*(long *)(lVar7 + 0xf8) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_90 = 0x2000000040;
      FUN_109a0b814(puVar10,&uStack_a0);
      plVar12 = (long *)CONCAT44(uStack_94,uStack_98);
      if (plVar12 != (long *)0x0) {
        plVar20 = plVar12 + 1;
        do {
          lVar7 = *plVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      func_0x000109a0b9dc();
      lVar7 = *param_3;
      uStack_98 = (undefined4)*(undefined8 *)(lVar7 + 0x138);
      uStack_94 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x138) >> 0x20);
      uStack_a0 = (undefined4)*(undefined8 *)(lVar7 + 0x130);
      uStack_9c = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x130) >> 0x20);
      if (*(long *)(lVar7 + 0x138) != 0) {
        plVar12 = (long *)(*(long *)(lVar7 + 0x138) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_90 = 0x2000000040;
      FUN_109a0b814(puVar10,&uStack_a0);
      plVar12 = (long *)CONCAT44(uStack_94,uStack_98);
      if (plVar12 != (long *)0x0) {
        plVar20 = plVar12 + 1;
        do {
          lVar7 = *plVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      param_3 = param_3 + 2;
    } while (param_3 != plVar18);
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340d6d8;
  func_0x000109a0b9dc(*param_2);
  (**(code **)(*extraout_x8 + 0x70))
            (extraout_x8,0x100,0x100,*extraout_x10,
             (extraout_x10[1] - *extraout_x10 >> 3) * -0x5555555555555555);
  func_0x000109a0b9dc();
  (*(code *)PTR___tlv_bootstrap_11340d6d8)();
  if ((long)ppuVar8[1] - (long)*ppuVar8 != 0) {
    lVar7 = ((long)ppuVar8[1] - (long)*ppuVar8 >> 3) * -0x5555555555555555;
    auVar21 = NEON_fmov(0x3f800000,4);
    do {
      lVar7 = lVar7 + -1;
      func_0x000109a0b9dc();
      plVar18 = (long *)(*ppuVar8 + lVar7 * 0x18);
      if (*plVar18 != plVar18[1]) {
        lVar14 = *(long *)(param_1 + 0x58);
        uStack_d0 = auVar21._0_8_;
        uStack_c8 = auVar21._8_8_;
        FUN_109a0ad8c(&uStack_a0,lStack_b0 + 8);
        FUN_109a0adcc(auStack_c0,&uStack_a0,lVar14 + lVar7 * 0x18,&uStack_d0);
        plVar12 = (long *)CONCAT44(uStack_94,uStack_98);
        if (plVar12 != (long *)0x0) {
          plVar20 = plVar12 + 1;
          do {
            lVar14 = *plVar20;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = (long *)*param_2;
        puVar10 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar7 * 0x10);
        uStack_e0 = *puVar10;
        plStack_d8 = (long *)puVar10[1];
        if (puVar10[1] != 0) {
          plVar20 = (long *)(puVar10[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = *plVar20 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        (**(code **)(*plVar12 + 0x10))(plVar12,&uStack_e0);
        plVar12 = plStack_d8;
        if (plStack_d8 != (long *)0x0) {
          plVar20 = plStack_d8 + 1;
          do {
            lVar14 = *plVar20;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar5) {
              *plVar20 = lVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        plVar12 = (long *)plVar18[1];
        for (plVar18 = (long *)*plVar18; plVar18 != plVar12; plVar18 = plVar18 + 2) {
          lVar14 = *plVar18;
          uStack_f0 = auVar21._0_8_;
          uStack_e8 = auVar21._8_8_;
          FUN_109a0ad8c(&uStack_a0,lStack_b0 + 8);
          FUN_109a0adcc(&uStack_d0,&uStack_a0,lVar14,&uStack_f0);
          plVar20 = (long *)CONCAT44(uStack_94,uStack_98);
          if (plVar20 != (long *)0x0) {
            plVar1 = plVar20 + 1;
            do {
              lVar14 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
          lVar14 = *plVar18 + lVar7 * 0x18;
          plVar20 = (long *)*param_2;
          uStack_100 = *(undefined8 *)(lVar14 + 0x140);
          plStack_f8 = *(long **)(lVar14 + 0x148);
          if (*(long *)(lVar14 + 0x148) != 0) {
            plVar1 = (long *)(*(long *)(lVar14 + 0x148) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          (**(code **)(*plVar20 + 0x38))(plVar20,&uStack_100);
          plVar20 = plStack_f8;
          if (plStack_f8 != (long *)0x0) {
            plVar1 = plStack_f8 + 1;
            do {
              lVar16 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
          uStack_a0 = *(undefined4 *)(lVar14 + 0x150);
          uStack_9c = 1;
          uStack_98 = 1;
          (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,&uStack_a0);
          FUN_109a0ae38(&uStack_d0);
        }
        FUN_109a0ae38(auStack_c0);
      }
    } while (lVar7 != 0);
  }
  func_0x000109a0b9dc(*param_2);
  ppuVar9 = &PTR___tlv_bootstrap_11340d708;
  (*(code *)PTR___tlv_bootstrap_11340d708)();
  (**(code **)(*extraout_x8_00 + 0x70))
            (extraout_x8_00,0x100,0x100,*ppuVar9,
             ((long)ppuVar9[1] - (long)*ppuVar9 >> 3) * -0x5555555555555555);
  func_0x000109a0b9dc();
  func_0x000109a0b9dc(ppuVar8[1]);
  if (extraout_x8_01 != extraout_x10_00) {
    uVar19 = 0;
    do {
      plVar18 = (long *)(*ppuVar8 + uVar19 * 0x18);
      lVar7 = *plVar18;
      lVar14 = plVar18[1];
      while (lVar14 != lVar7) {
        lVar14 = lVar14 + -0x10;
        func_0x0001099f0d40();
      }
      plVar18[1] = lVar7;
      uVar19 = uVar19 + 1;
      func_0x000109a0b9dc();
      func_0x000109a0b9dc(((long)ppuVar8[1] - (long)*ppuVar8 >> 3) * -0x5555555555555555);
    } while (uVar19 < extraout_x8_02);
  }
  lVar7 = *extraout_x10;
  lVar14 = extraout_x10[1];
  while (lVar14 != lVar7) {
    lVar14 = lVar14 + -0x18;
    FUN_109a00804();
  }
  extraout_x10[1] = lVar7;
  func_0x000109a0b9dc();
  puVar3 = *ppuVar9;
  puVar13 = ppuVar9[1];
  while (plVar18 = plStack_a8, puVar13 != puVar3) {
    puVar13 = puVar13 + -0x18;
    FUN_109a00804();
  }
  ppuVar9[1] = puVar3;
  if (plStack_a8 != (long *)0x0) {
    plVar12 = plStack_a8 + 1;
    do {
      lVar7 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
    }
  }
  return;
}



/* Entry: 109a0b814; end: 109a0b95f;  */

void FUN_109a0b814(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_78;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar12 = *param_2;
    puVar9[1] = param_2[1];
    *puVar9 = uVar12;
    *param_2 = 0;
    param_2[1] = 0;
    puVar9[2] = param_2[2];
    puVar9 = puVar9 + 3;
LAB_109a0b940:
    param_1[1] = (long)puVar9;
    return;
  }
  lVar10 = (long)puVar9 - *param_1;
  uVar5 = (lVar10 >> 3) * -0x5555555555555555 + 1;
  if (uVar5 < 0xaaaaaaaaaaaaaab) {
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
      uVar8 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 < 0xaaaaaaaaaaaaaab) {
      lVar7 = uVar8 * 0x18;
      __Znwm();
      puVar1 = (undefined8 *)(lVar7 + lVar10);
      uVar12 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar12;
      *param_2 = 0;
      param_2[1] = 0;
      puVar1[2] = param_2[2];
      puVar9 = puVar1 + 3;
      puVar3 = (undefined8 *)*param_1;
      puVar2 = (undefined8 *)param_1[1];
      puVar1 = (undefined8 *)((long)puVar1 + ((long)puVar3 - (long)puVar2));
      puVar4 = puVar3;
      puVar6 = puVar1;
      if ((long)puVar3 - (long)puVar2 != 0) {
        do {
          uVar12 = *puVar4;
          puVar6[1] = puVar4[1];
          *puVar6 = uVar12;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar6[2] = puVar4[2];
          puVar4 = puVar4 + 3;
          puVar6 = puVar6 + 3;
        } while (puVar4 != puVar2);
        do {
          FUN_109a00804();
          puVar3 = puVar3 + 3;
        } while (puVar3 != puVar2);
        puVar3 = (undefined8 *)*param_1;
      }
      *param_1 = (long)puVar1;
      param_1[1] = (long)puVar9;
      param_1[2] = lVar7 + uVar8 * 0x18;
      if (puVar3 != (undefined8 *)0x0) {
        __ZdlPv();
      }
      goto LAB_109a0b940;
    }
  }
  else {
    FUN_109a0b9c8();
  }
  func_0x000104c4f740();
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar11 = param_1[1];
    lVar7 = lVar10;
    if (lVar11 != lVar10) {
      do {
        lVar11 = lVar11 + -0x18;
        lStack_78 = lVar11;
        FUN_109a04268(&lStack_78);
      } while (lVar11 != lVar10);
      lVar7 = *param_1;
    }
    param_1[1] = lVar10;
    __ZdlPv(lVar7);
  }
  return;
}



/* Entry: 109a0b960; end: 109a0b9c7;  */

void FUN_109a0b960(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    lVar1 = lVar2;
    if (lVar3 != lVar2) {
      do {
        lVar3 = lVar3 + -0x18;
        lStack_38 = lVar3;
        FUN_109a04268(&lStack_38);
      } while (lVar3 != lVar2);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 109a0b9c8; end: 109a0bb5b;  */

void FUN_109a0b9c8(void)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined1 *extraout_x8;
  code *extraout_x9;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  ppuVar1 = &PTR___tlv_bootstrap_11340dd80;
  (*(code *)PTR___tlv_bootstrap_11340dd80)();
  if (*(char *)ppuVar1 == '\0') {
    puVar2 = extraout_x8;
    (*extraout_x9)();
    *puVar2 = 1;
    FUN_109a0bb5c();
    ppuVar1 = &PTR___tlv_bootstrap_11340d6f0;
    (*(code *)PTR___tlv_bootstrap_11340d6f0)();
    __tlv_atexit(0x109a0aee8,ppuVar1,0x100000000);
    ppuVar1 = &PTR___tlv_bootstrap_11340d708;
    (*(code *)PTR___tlv_bootstrap_11340d708)();
    __tlv_atexit(0x109a0aee8,ppuVar1,0x100000000);
  }
  return;
}


