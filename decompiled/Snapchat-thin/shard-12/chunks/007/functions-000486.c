/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1096b3104; end: 1096b3237;  */

long FUN_1096b3104(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined ***pppuVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  pppuVar4 = &ppuStack_50;
  uStack_48 = param_1[1];
  ppuStack_50 = (undefined **)*param_1;
  param_1[1] = 0;
  ___dynamic_cast(&ppuStack_50,&PTR_DAT_110b01d40,&PTR_DAT_110b03df8,0);
  if (pppuVar4 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lStack_38 = *(long *)((long)pppuVar4 + 8);
  if (lStack_38 == 0) {
    lVar7 = 0;
  }
  else {
    piVar5 = (int *)(lStack_38 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    ppuStack_40 = &PTR_FUN_110b03dd8;
    lVar6 = (*(long **)(param_2 + 0x10))[1] - **(long **)(param_2 + 0x10);
    if (lVar6 == 0) {
      lVar7 = 1;
    }
    else {
      lVar8 = 0;
      lVar6 = lVar6 >> 4;
      do {
        lVar6 = lVar6 + -1;
        lVar7 = **(long **)(param_2 + 0x10) + lVar8;
        (**(code **)(*(long *)(**(long **)(param_2 + 0x10) + lVar8) + 0x40))
                  (lVar7,&ppuStack_40,param_2 + 0x20);
        uVar3 = 0;
        if (lVar6 != 0) {
          uVar3 = (uint)lVar7;
        }
        lVar8 = lVar8 + 0x10;
      } while ((uVar3 & 1) != 0);
    }
  }
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  ppuStack_50 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_50);
  return lVar7;
}



/* Entry: 1096b3238; end: 1096b326b;  */

long FUN_1096b3238(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 1096b326c; end: 1096b32ab;  */

void FUN_1096b326c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110b043b8;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = &PTR_FUN_110b01d60;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[3] = &PTR_FUN_110af5700;
  return;
}



/* Entry: 1096b32ac; end: 1096b32bf;  */

void FUN_1096b32ac(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((long *)0xaaaaaaaaaaaaaaa < plVar1) {
    func_0x000104c4f740();
    plVar2 = plVar1;
    if (plVar1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        lVar3 = *plVar2;
        param_3[1] = plVar2[1];
        *param_3 = lVar3;
        param_3[2] = plVar2[2];
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
        plVar2 = plVar2 + 3;
        param_3 = param_3 + 3;
      } while (plVar2 != param_2);
      do {
        if (*plVar1 != 0) {
          plVar1[1] = *plVar1;
          __ZdlPv();
        }
        plVar1 = plVar1 + 3;
      } while (plVar1 != param_2);
    }
    return;
  }
  __Znwm((long)plVar1 * 0x18);
  return;
}



/* Entry: 1096b32c0; end: 1096b342b;  */

void FUN_1096b32c0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000104c4f740();
    plVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        lVar2 = *plVar1;
        param_3[1] = plVar1[1];
        *param_3 = lVar2;
        param_3[2] = plVar1[2];
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
        plVar1 = plVar1 + 3;
        param_3 = param_3 + 3;
      } while (plVar1 != param_2);
      do {
        if (*param_1 != 0) {
          param_1[1] = *param_1;
          __ZdlPv();
        }
        param_1 = param_1 + 3;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x18);
  return;
}



/* Entry: 1096b342c; end: 1096b35f3;  */

long * FUN_1096b342c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  plVar4 = (long *)param_1[0xb];
  if (plVar4 != (long *)0x0) {
    plVar2 = (long *)param_1[0xc];
    plVar1 = plVar4;
    if (plVar2 != plVar4) {
      do {
        plVar1 = plVar2 + -3;
        if (*plVar1 != 0) {
          plVar2[-2] = *plVar1;
          __ZdlPv();
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar4);
      plVar1 = (long *)param_1[0xb];
    }
    param_1[0xc] = (long)plVar4;
    __ZdlPv(plVar1);
  }
  puVar6 = (undefined8 *)param_1[6];
  puVar8 = puVar6;
  if ((undefined8 *)param_1[7] != puVar6) {
    uVar3 = param_1[9];
    plVar4 = puVar6 + (uVar3 >> 4);
    lVar5 = *plVar4 + (uVar3 & 0xf) * 0x110;
    lVar9 = puVar6[param_1[10] + uVar3 >> 4] + (param_1[10] + uVar3 & 0xf) * 0x110;
    puVar8 = (undefined8 *)param_1[7];
    if (lVar5 != lVar9) {
      do {
        *(undefined ***)(lVar5 + 0xf8) = &PTR_FUN_110b01d60;
        func_0x000107c2acd4();
        FUN_1096b35f4(lVar5);
        lVar5 = lVar5 + 0x110;
        if (lVar5 - *plVar4 == 0x1100) {
          plVar4 = plVar4 + 1;
          lVar5 = *plVar4;
        }
      } while (lVar5 != lVar9);
      puVar6 = (undefined8 *)param_1[6];
      puVar8 = (undefined8 *)param_1[7];
    }
  }
  param_1[10] = 0;
  lVar5 = (long)puVar8 - (long)puVar6;
  while (uVar3 = lVar5 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar6);
    puVar8 = (undefined8 *)param_1[7];
    puVar6 = (undefined8 *)(param_1[6] + 8);
    param_1[6] = (long)puVar6;
    lVar5 = (long)puVar8 - (long)puVar6;
  }
  if (uVar3 == 1) {
    lVar5 = 8;
  }
  else {
    if (uVar3 != 2) goto LAB_1096b3590;
    lVar5 = 0x10;
  }
  param_1[9] = lVar5;
LAB_1096b3590:
  if (puVar6 != puVar8) {
    do {
      puVar7 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != puVar8);
    lVar5 = param_1[7];
    if (lVar5 != param_1[6]) {
      param_1[7] = lVar5 + ((param_1[6] - lVar5) + 7U & 0xfffffffffffffff8);
    }
  }
  if (param_1[5] != 0) {
    __ZdlPv();
  }
  func_0x0001092b0bc4(param_1,param_1[2]);
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096b35f4; end: 1096b3697;  */

long FUN_1096b35f4(long param_1)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0xb8);
  if (((*(byte *)(param_1 + 0xb0) & 1) != 0) && (*(char *)(*(long *)(param_1 + 0x48) + 8) == '\x01')
     ) {
    (**(code **)(param_1 + 0x40))();
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0xb8);
  __ZNSt3__15mutexD1Ev(param_1 + 0xb8);
  FUN_10947688c(param_1 + 0x80);
  (*(code *)**(undefined8 **)(param_1 + 0x48))();
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 1096b3698; end: 1096b379b;  */

ulong * FUN_1096b3698(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined ***pppuVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  ulong uStack_60;
  ulong *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar13 = (ulong *)param_1[2];
  puVar5 = param_1;
  if (puVar13 == (ulong *)param_1[3]) {
    puVar6 = (ulong *)*param_1;
    puVar12 = (ulong *)param_1[1];
    if (puVar12 < puVar6 || (long)puVar12 - (long)puVar6 == 0) {
      uVar8 = (long)puVar13 - (long)puVar6 >> 2;
      if ((long)puVar13 - (long)puVar6 == 0) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3d != 0) {
        puVar13 = param_1;
        uVar8 = param_2;
        func_0x000104c4f740();
        pppuVar7 = &ppuStack_80;
        pcStack_48 = FUN_1096b379c;
        puVar5 = *(ulong **)(uVar8 + 0x10);
        uStack_78 = puVar13[1];
        ppuStack_80 = (undefined **)*puVar13;
        puVar13[1] = 0;
        uStack_60 = param_2;
        puStack_58 = param_1;
        puStack_50 = &stack0xfffffffffffffff0;
        ___dynamic_cast(&ppuStack_80,&PTR_DAT_110b01d40,&PTR_DAT_110af5720,0);
        if (pppuVar7 == (undefined ***)0x0) {
          func_0x000107c2acdc();
        }
        lStack_68 = *(long *)((long)pppuVar7 + 8);
        if (lStack_68 != 0) {
          piVar9 = (int *)(lStack_68 + -8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar3) {
              *piVar9 = *piVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        ppuStack_70 = &PTR_FUN_110af5700;
        (**(code **)(*puVar5 + 0x28))(puVar5,&ppuStack_70);
        ppuStack_70 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_70);
        ppuStack_80 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
        return puVar5;
      }
      puVar5 = (ulong *)(uVar8 << 3);
      __Znwm();
      puVar1 = puVar5 + (uVar8 >> 2);
      lVar10 = (long)puVar13 - (long)puVar12;
      puVar13 = puVar1;
      if (lVar10 != 0) {
        puVar13 = (ulong *)((long)puVar1 + lVar10);
        puVar11 = puVar1;
        do {
          *puVar11 = *puVar12;
          lVar10 = lVar10 + -8;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar10 != 0);
      }
      *param_1 = (ulong)puVar5;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar13;
      param_1[3] = (ulong)(puVar5 + uVar8);
      if (puVar6 != (ulong *)0x0) {
        __ZdlPv(puVar6);
        puVar13 = (ulong *)param_1[2];
        puVar5 = puVar6;
      }
    }
    else {
      lVar10 = (((long)puVar12 - (long)puVar6 >> 3) + 1) / 2;
      puVar6 = puVar12 + -lVar10;
      lVar4 = (long)puVar13 - (long)puVar12;
      if (lVar4 != 0) {
        puVar5 = puVar6;
        _memmove(puVar6,puVar12,lVar4);
        puVar12 = (ulong *)param_1[1];
      }
      puVar13 = (ulong *)((long)puVar6 + lVar4);
      param_1[1] = (ulong)(puVar12 + -lVar10);
      param_1[2] = (ulong)puVar13;
    }
  }
  *puVar13 = param_2;
  param_1[2] = param_1[2] + 8;
  return puVar5;
}



/* Entry: 1096b379c; end: 1096b387f;  */

long * FUN_1096b379c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  int *piVar4;
  long *plVar5;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  pppuVar3 = &ppuStack_40;
  plVar5 = *(long **)(param_2 + 0x10);
  uStack_38 = param_1[1];
  ppuStack_40 = (undefined **)*param_1;
  param_1[1] = 0;
  ___dynamic_cast(&ppuStack_40,&PTR_DAT_110b01d40,&PTR_DAT_110af5720,0);
  if (pppuVar3 == (undefined ***)0x0) {
    func_0x000107c2acdc();
  }
  lStack_28 = *(long *)((long)pppuVar3 + 8);
  if (lStack_28 != 0) {
    piVar4 = (int *)(lStack_28 + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  ppuStack_30 = &PTR_FUN_110af5700;
  (**(code **)(*plVar5 + 0x28))(plVar5,&ppuStack_30);
  ppuStack_30 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_30);
  ppuStack_40 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  return plVar5;
}



/* Entry: 1096b3880; end: 1096b38c7;  */

void FUN_1096b3880(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1096b38c8; end: 1096b38ef;  */

void FUN_1096b38c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1096b38f0; end: 1096b3937;  */

void FUN_1096b38f0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1096b3938; end: 1096b394f;  */

void FUN_1096b3938(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1096b3950; end: 1096b3b0f;  */

void FUN_1096b3950(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined **appuStack_50 [2];
  
  lVar3 = *(long *)(param_4 + 8);
  if (lVar3 == 0) {
LAB_1096b3a48:
    *param_1 = &PTR_FUN_110b01d60;
    param_1[1] = 0;
    return;
  }
  cVar1 = *(char *)(lVar3 + 0x1f);
  if (cVar1 < '\0') {
    if (*(int *)(lVar3 + 0x10) == 0) goto LAB_1096b3a48;
  }
  else if (cVar1 == '\0') goto LAB_1096b3a48;
  if (*(long *)(param_2 + 8) != 0) {
    puVar4 = (undefined8 *)(lVar3 + 8);
    if (cVar1 < '\0') {
      puVar4 = (undefined8 *)*puVar4;
    }
    puVar2 = puVar4;
    _strncmp(puVar4,&UNK_10dfdca6f,6);
    if ((int)puVar2 == 0) {
      FUN_109696d10(param_1,param_2,(long)puVar4 + 6);
      if (param_1[1] != 0) {
        return;
      }
      *param_1 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(param_1);
    }
  }
  lVar3 = *(long *)(param_3 + 8);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(*(long *)(param_4 + 8) + 8);
    if (*(char *)(*(long *)(param_4 + 8) + 0x1f) < '\0') {
      puVar4 = (undefined8 *)*puVar4;
    }
    puVar2 = puVar4;
    _strncmp(puVar4,&UNK_10dfdca76,8);
    if ((int)puVar2 == 0) {
      FUN_109696d10(param_1,param_3,puVar4 + 1);
      if (param_1[1] != 0) {
        return;
      }
      *param_1 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(param_1);
      lVar3 = *(long *)(param_3 + 8);
      if (lVar3 == 0) goto FUN_1096973b4;
    }
    lVar3 = lVar3 + -0x20;
    func_0x0001096966c0(lVar3,uRam000000011382aa60);
    if (lVar3 != 0) {
      FUN_1096b3b10(appuStack_50,param_3);
      (*(code *)appuStack_50[0][4])(param_1,appuStack_50,param_4);
      appuStack_50[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_50);
      return;
    }
  }
FUN_1096973b4:
  FUN_10969bc60(&stack0xffffffffffffffd0);
  FUN_109697420(param_1,param_4,&stack0xffffffffffffffd0);
  func_0x000107c2acd4(&stack0xffffffffffffffd0);
  return;
}



/* Entry: 1096b3b10; end: 1096b3b7b;  */

void FUN_1096b3b10(undefined8 param_1,undefined8 param_2)

{
  undefined **appuStack_30 [2];
  
  FUN_109696a64(appuStack_30,param_2,0x11382aa60);
  FUN_1096b42cc(param_1,appuStack_30);
  appuStack_30[0] = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(appuStack_30);
  return;
}



/* Entry: 1096b3b7c; end: 1096b3beb;  */

void FUN_1096b3b7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b3bec; end: 1096b3c43;  */

void FUN_1096b3bec(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b041b8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096b3c44; end: 1096b3cbb;  */

void FUN_1096b3c44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  param_1[1] = puVar1;
  *param_1 = &PTR_FUN_110b04540;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096b3cbc; end: 1096b3cef;  */

undefined8 * FUN_1096b3cbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b3cf0; end: 1096b3d23;  */

void FUN_1096b3cf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b3d24; end: 1096b3d2f;  */

void FUN_1096b3d24(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001096b3d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* Entry: 1096b3d30; end: 1096b3d5f;  */

bool FUN_1096b3d30(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b041b8,0);
  return param_1 != 0;
}



/* Entry: 1096b3d60; end: 1096b3d73;  */

void FUN_1096b3d60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b3d74; end: 1096b3da3;  */

void FUN_1096b3d74(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096b3da4; end: 1096b3ddf;  */

void FUN_1096b3da4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096b3de0; end: 1096b3e3f;  */

undefined8 FUN_1096b3de0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096b3e40; end: 1096b3e6b;  */

undefined8 FUN_1096b3e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096b3e6c; end: 1096b3e97;  */

void FUN_1096b3e6c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b041b8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096b3e98; end: 1096b3f7f;  */

void FUN_1096b3e98(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4(&ppuStack_50);
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b3f80; end: 1096b3f8f;  */

void FUN_1096b3f80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b3f90; end: 1096b3fbf;  */

void FUN_1096b3f90(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096b3fc0; end: 1096b400b;  */

void FUN_1096b3fc0(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096b400c; end: 1096b4037;  */

void FUN_1096b400c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b041b8;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096b4038; end: 1096b4173;  */

void FUN_1096b4038(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 *puStack_48;
  long lStack_28;
  
  pppuVar2 = &ppuStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar3 = 0x10b04718;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    uStack_50 = 0;
    ppuStack_60 = &PTR_FUN_110b04740;
    uStack_58 = 0;
    puVar1 = (undefined1 *)0x1;
    _malloc();
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puStack_48 = puVar1;
    func_0x000107c2accc();
    func_0x000107c2ace0();
    if (puStack_48 != (undefined1 *)0x0) {
      _free();
    }
    func_0x000107c2accc();
    iVar3 = 0x10b04718;
    func_0x00010969659c(&ppuStack_60);
    uVar4 = param_1[1];
    param_1[1] = uStack_58;
    *param_1 = ppuStack_60;
    ppuStack_60 = &PTR_FUN_110b01d60;
    uStack_58 = uVar4;
    func_0x000107c2acd4(&ppuStack_60);
    param_2 = (undefined1 *)pppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b4174; end: 1096b418f;  */

void FUN_1096b4174(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(1);
  return;
}



/* Entry: 1096b4190; end: 1096b41d7;  */

void FUN_1096b4190(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uStack_22 = *param_3;
  uStack_21 = 0;
  puVar1 = &uStack_22;
  _strlen(puVar1);
  FUN_109697928(param_1,&uStack_22,puVar1);
  return;
}



/* Entry: 1096b41d8; end: 1096b4243;  */

undefined8 * FUN_1096b41d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1096b4244; end: 1096b429b;  */

void FUN_1096b4244(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b04718;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096b429c; end: 1096b42cb;  */

bool FUN_1096b429c(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b04718,0);
  return param_1 != 0;
}



/* Entry: 1096b42cc; end: 1096b435f;  */

void FUN_1096b42cc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b04718,0);
  if (puVar3 != (undefined8 *)0x0 && param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (param_1[1] != 0) {
      piVar4 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096b4360; end: 1096b43ef;  */

undefined8 * FUN_1096b4360(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b04808;
  param_1[1] = puVar1;
  puVar1 = param_1;
  func_0x000107c2acd0(param_1,0x18);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b04ae0;
  return param_1;
}



/* Entry: 1096b43f0; end: 1096b5093;  */

void FUN_1096b43f0(long param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  int *piVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1096b5094(param_1,0x113735be8);
  func_0x000107c2acdc();
  puVar7 = param_2;
  FUN_1096b5c80(&ppuStack_180);
  ppuStack_e8 = ppuStack_178;
  if (ppuStack_178 != (undefined **)0x0) {
    ppuVar9 = ppuStack_178 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar4) {
        *(int *)ppuVar9 = *(int *)ppuVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_f0 = &PTR_FUN_110b04b98;
  ppuStack_180 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_180);
  ppuVar9 = ppuStack_e8;
  if (ppuStack_e8 == (undefined **)0x0) goto LAB_1096b4e00;
  lVar14 = param_1;
  func_0x0001096b50e4(param_1,0x113735bf0);
  lVar17 = lVar14;
  func_0x000107c2acdc();
  ppuStack_110 = &PTR_FUN_110b01d60;
  ppuStack_108 = (undefined **)0x0;
  if (*(long *)(lVar14 + 8) != 0) {
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_180);
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_140);
    ppuVar1 = ppuStack_138;
    ppuVar10 = ppuStack_178;
    ppuStack_140 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_140);
    ppuStack_180 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_180);
    if (ppuVar10 == ppuVar1) {
      lVar6 = lVar14;
      ___dynamic_cast(lVar14,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
      if (lVar6 == 0) {
        func_0x000107c2acdc();
      }
      ppuStack_178 = *(undefined ***)(lVar6 + 8);
      if (ppuStack_178 != (undefined **)0x0) {
        ppuVar10 = ppuStack_178 + -1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar4) {
            *(int *)ppuVar10 = *(int *)ppuVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_180 = &PTR_FUN_110b00af0;
        if (ppuStack_178 != (undefined **)0x0) {
          FUN_1096b3950(&ppuStack_158,lVar17,param_2,&ppuStack_180);
          FUN_1096b609c(&ppuStack_140,&ppuStack_158);
          ppuVar10 = ppuStack_138;
          ppuStack_138 = ppuStack_108;
          ppuStack_108 = ppuVar10;
          ppuStack_110 = ppuStack_140;
          ppuStack_140 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_140);
          ppuStack_158 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_158);
        }
      }
      ppuStack_180 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_180);
      if (ppuStack_108 != (undefined **)0x0) goto LAB_1096b46fc;
    }
    FUN_1096b609c(&ppuStack_180,lVar14);
    ppuVar10 = ppuStack_178;
    ppuStack_178 = ppuStack_108;
    ppuStack_108 = ppuVar10;
    ppuStack_110 = ppuStack_180;
    ppuStack_180 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_180);
    if (ppuStack_108 == (undefined **)0x0) {
      FUN_1096a4f30(&ppuStack_180,lVar14);
      if (ppuStack_178 != (undefined **)0x0) {
        pppuVar5 = &ppuStack_180;
        (*(code *)ppuStack_180[5])(&ppuStack_140);
        FUN_1096978cc();
        if (ppuStack_138 == pppuVar5[1]) {
          ppuStack_140 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_140);
        }
        else {
          (*(code *)ppuStack_180[5])(&ppuStack_158,&ppuStack_180);
          func_0x000107c2accc();
          func_0x00010969659c(&ppuStack_e0);
          ppuVar1 = ppuStack_d8;
          ppuVar10 = ppuStack_150;
          ppuStack_e0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_e0);
          ppuStack_158 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_158);
          ppuStack_140 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_140);
          if (ppuVar10 != ppuVar1) goto LAB_1096b46f0;
        }
        (*(code *)ppuStack_180[4])(&ppuStack_158,&ppuStack_180);
        FUN_1096b609c(&ppuStack_140,&ppuStack_158);
        ppuVar10 = ppuStack_138;
        ppuStack_138 = ppuStack_108;
        ppuStack_108 = ppuVar10;
        ppuStack_110 = ppuStack_140;
        ppuStack_140 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_140);
        ppuStack_158 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_158);
      }
LAB_1096b46f0:
      ppuStack_180 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_180);
    }
  }
LAB_1096b46fc:
  ppuStack_f8 = ppuStack_108;
  if (ppuStack_108 != (undefined **)0x0) {
    ppuVar10 = ppuStack_108 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar4) {
        *(int *)ppuVar10 = *(int *)ppuVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_100 = &PTR_FUN_110b0a1c8;
  ppuStack_110 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_110);
  lVar14 = param_1;
  func_0x0001096b50e4(param_1,0x113735bf8);
  lVar17 = lVar14;
  func_0x000107c2acdc();
  ppuStack_120 = &PTR_FUN_110b01d60;
  ppuStack_118 = (undefined **)0x0;
  if (*(long *)(lVar14 + 8) != 0) {
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_180);
    func_0x000107c2accc();
    func_0x00010969659c(&ppuStack_140);
    ppuVar1 = ppuStack_138;
    ppuVar10 = ppuStack_178;
    ppuStack_140 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_140);
    ppuStack_180 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_180);
    if (ppuVar10 == ppuVar1) {
      lVar6 = lVar14;
      ___dynamic_cast(lVar14,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
      if (lVar6 == 0) {
        func_0x000107c2acdc();
      }
      ppuStack_178 = *(undefined ***)(lVar6 + 8);
      if (ppuStack_178 != (undefined **)0x0) {
        ppuVar10 = ppuStack_178 + -1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar4) {
            *(int *)ppuVar10 = *(int *)ppuVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_180 = &PTR_FUN_110b00af0;
        if (ppuStack_178 != (undefined **)0x0) {
          FUN_1096b3950(&ppuStack_158,lVar17,param_2,&ppuStack_180);
          FUN_1096b6134(&ppuStack_140,&ppuStack_158);
          ppuVar10 = ppuStack_138;
          ppuStack_138 = ppuStack_118;
          ppuStack_118 = ppuVar10;
          ppuStack_120 = ppuStack_140;
          ppuStack_140 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_140);
          ppuStack_158 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_158);
        }
      }
      ppuStack_180 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_180);
      if (ppuStack_118 != (undefined **)0x0) goto LAB_1096b499c;
    }
    FUN_1096b6134(&ppuStack_180,lVar14);
    ppuVar10 = ppuStack_178;
    ppuStack_178 = ppuStack_118;
    ppuStack_118 = ppuVar10;
    ppuStack_120 = ppuStack_180;
    ppuStack_180 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_180);
    if (ppuStack_118 == (undefined **)0x0) {
      FUN_1096a4f30(&ppuStack_180,lVar14);
      if (ppuStack_178 != (undefined **)0x0) {
        pppuVar5 = &ppuStack_180;
        (*(code *)ppuStack_180[5])(&ppuStack_140);
        FUN_1096978cc();
        if (ppuStack_138 == pppuVar5[1]) {
          ppuStack_140 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_140);
        }
        else {
          (*(code *)ppuStack_180[5])(&ppuStack_158,&ppuStack_180);
          func_0x000107c2accc();
          func_0x00010969659c(&ppuStack_e0);
          ppuVar10 = ppuStack_150;
          ppuStack_e0 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_e0);
          ppuStack_158 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_158);
          ppuStack_140 = &PTR_FUN_110b01d60;
          func_0x000107c2acd4(&ppuStack_140);
          if (ppuVar10 != ppuStack_d8) goto LAB_1096b4990;
        }
        (*(code *)ppuStack_180[4])(&ppuStack_158,&ppuStack_180);
        FUN_1096b6134(&ppuStack_140,&ppuStack_158);
        ppuVar10 = ppuStack_138;
        ppuStack_138 = ppuStack_118;
        ppuStack_118 = ppuVar10;
        ppuStack_120 = ppuStack_140;
        ppuStack_140 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_140);
        ppuStack_158 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_158);
      }
LAB_1096b4990:
      ppuStack_180 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_180);
    }
  }
LAB_1096b499c:
  ppuStack_108 = ppuStack_118;
  if (ppuStack_118 != (undefined **)0x0) {
    ppuVar10 = ppuStack_118 + -1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar4) {
        *(int *)ppuVar10 = *(int *)ppuVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_110 = &PTR_FUN_110b09130;
  ppuStack_120 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_120);
  FUN_1096b61cc(&ppuStack_180,&ppuStack_140);
  func_0x0001096b5134(*(long *)(param_1 + 8) + 8,&ppuStack_180);
  ppuVar10 = ppuStack_178;
  if (ppuStack_178 != (undefined **)0x0) {
    ppuVar1 = ppuStack_178 + 1;
    do {
      puVar13 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = puVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuStack_178 + 0x10))(ppuStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  puVar13 = ppuStack_e8[5];
  ppuStack_140 = (undefined **)((ulong)ppuStack_140 & 0xffffffff00000000);
  iVar15 = (int)((ulong)((long)ppuStack_e8[6] - (long)puVar13) >> 4);
  if (0 < iVar15) {
    iVar8 = 0;
    do {
      lVar14 = *(long *)(puVar13 + (long)iVar8 * 0x10 + 8);
      ppuStack_178 = (undefined **)(long)*(char *)(lVar14 + 0x1f);
      if ((long)ppuStack_178 < 0) {
        ppuStack_180 = *(undefined ***)(lVar14 + 8);
        ppuStack_178 = *(undefined ***)(lVar14 + 0x10);
      }
      else {
        ppuStack_180 = (undefined **)(lVar14 + 8);
      }
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 8) + 8;
      pppuVar5 = &ppuStack_180;
      FUN_1096b6450(lVar14,pppuVar5,&ppuStack_180,&ppuStack_140);
      if (((ulong)pppuVar5 & 1) == 0) {
        *(int *)(lVar14 + 0x20) = (int)ppuStack_140;
      }
      iVar8 = (int)ppuStack_140 + 1;
      ppuStack_140 = (undefined **)CONCAT44(ppuStack_140._4_4_,iVar8);
    } while (iVar8 < iVar15);
  }
  FUN_109367d10(&ppuStack_140,
                (long)*(int *)((long)ppuStack_e8 + 0x14) + (long)*(int *)(ppuStack_e8 + 2));
  ppuVar10 = ppuStack_e8;
  puVar13 = ppuStack_e8[9];
  if (puVar13 == (undefined *)0x0) {
    iVar15 = 0;
  }
  else {
    iVar15 = (int)((ulong)(*(long *)(puVar13 + 0x10) - *(long *)(puVar13 + 8)) >> 2);
  }
  iVar8 = *(int *)((long)ppuStack_e8 + 0xc);
  if (ppuStack_f8 == (undefined **)0x0) {
    lVar14 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (*(undefined **)(lVar14 + 0x58) != puVar13) {
      func_0x000107c2acd4(lVar14 + 0x50);
      uVar16 = 0;
      puVar20 = ppuVar10[9];
      puVar13 = ppuVar10[8];
      goto LAB_1096b4b58;
    }
    uVar16 = 0;
  }
  else {
    FUN_1096e2e9c(&ppuStack_100,&ppuStack_f0);
    ppuVar10 = ppuStack_f8;
    uVar16 = (ulong)(uint)((int)((ulong)((long)ppuStack_f8[2] - (long)ppuStack_f8[1]) >> 2) *
                          -0x55555555);
    lVar14 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (*(undefined **)(lVar14 + 0x58) != ppuStack_f8[5]) {
      func_0x000107c2acd4(lVar14 + 0x50);
      puVar20 = ppuVar10[5];
      puVar13 = ppuVar10[4];
LAB_1096b4b58:
      *(undefined **)(lVar14 + 0x58) = puVar20;
      *(undefined **)(lVar14 + 0x50) = puVar13;
      if (*(long *)(lVar14 + 0x58) != 0) {
        piVar11 = (int *)(*(long *)(lVar14 + 0x58) + -8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
  }
  uVar2 = iVar15 + iVar8;
  iVar15 = (int)uVar16;
  FUN_109367d10(&ppuStack_158,(long)(int)((iVar15 + uVar2) * 3));
  FUN_1096b6a28(&ppuStack_f0,(ulong)((long)ppuStack_138 - (long)ppuStack_140) >> 2 & 0xffffffff,
                ppuStack_140,uVar2 * 3,ppuStack_158);
  FUN_1096b5198(*(long *)(*(long *)(param_1 + 8) + 8) + 0x38,(long)(int)(iVar15 + uVar2));
  if (0 < (int)uVar2) {
    lVar14 = 0;
    do {
      uVar19 = *(undefined4 *)((undefined8 *)((long)ppuStack_158 + lVar14) + 1);
      puVar7 = (undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x38) + lVar14);
      *puVar7 = *(undefined8 *)((long)ppuStack_158 + lVar14);
      *(undefined4 *)(puVar7 + 1) = uVar19;
      lVar14 = lVar14 + 0xc;
    } while ((ulong)uVar2 * 0xc - lVar14 != 0);
  }
  lVar17 = *(long *)(*(long *)(param_1 + 8) + 8);
  lVar14 = *(long *)(ppuStack_e8[9] + 0x38);
  uVar18 = *(long *)(ppuStack_e8[9] + 0x40) - lVar14;
  puVar7 = (undefined8 *)((long)(uVar18 * 0x20000000) >> 0x20);
  FUN_1096b5544(lVar17 + 0x60);
  if (0 < (int)(uVar18 >> 3)) {
    uVar12 = 0;
    do {
      *(undefined8 *)(*(long *)(lVar17 + 0x60) + uVar12 * 8) = *(undefined8 *)(lVar14 + uVar12 * 8);
      uVar12 = uVar12 + 1;
    } while ((uVar18 >> 3 & 0x7fffffff) != uVar12);
  }
  if (ppuStack_f8 != (undefined **)0x0) {
    lVar14 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (iVar15 != 0) {
      _memmove(*(long *)(lVar14 + 0x40) + (long)iVar15 * -0xc,ppuStack_f8[1],
               ((-(uVar16 >> 0x1f) & 0xfffffffe00000000 | uVar16 << 1) + (long)iVar15) * 4);
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 8);
    }
    lVar17 = *(long *)(ppuStack_f8[5] + 0x38);
    uVar16 = *(long *)(ppuStack_f8[5] + 0x40) - lVar17;
    puVar7 = (undefined8 *)((long)(uVar16 * 0x20000000) >> 0x20);
    FUN_1096b5544(lVar14 + 0x78);
    if (0 < (int)(uVar16 >> 3)) {
      uVar18 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar14 + 0x78) + uVar18 * 8) =
             *(undefined8 *)(lVar17 + uVar18 * 8);
        uVar18 = uVar18 + 1;
      } while ((uVar16 >> 3 & 0x7fffffff) != uVar18);
    }
  }
  if (ppuStack_108 != (undefined **)0x0) {
    ppuStack_190 = &PTR_FUN_110b01d60;
    uStack_188 = 0;
    FUN_1096d7eb8(&ppuStack_180,&ppuStack_110,&ppuStack_190);
    ppuStack_190 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_190);
    lVar17 = *(long *)(*(long *)(param_1 + 8) + 8);
    lVar14 = *(long *)(ppuStack_178[2] + 0x38);
    uVar16 = *(long *)(ppuStack_178[2] + 0x40) - lVar14;
    FUN_1096b5544(lVar17 + 0x90,(long)(uVar16 * 0x20000000) >> 0x20);
    if (0 < (int)(uVar16 >> 3)) {
      uVar18 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar17 + 0x90) + uVar18 * 8) =
             *(undefined8 *)(lVar14 + uVar18 * 8);
        uVar18 = uVar18 + 1;
      } while ((uVar16 >> 3 & 0x7fffffff) != uVar18);
    }
    lVar17 = *(long *)(*(long *)(param_1 + 8) + 8);
    lVar14 = *(long *)(*(long *)(lStack_168 + 0x10) + 0x38);
    uVar16 = *(long *)(*(long *)(lStack_168 + 0x10) + 0x40) - lVar14;
    puVar7 = (undefined8 *)((long)(uVar16 * 0x20000000) >> 0x20);
    FUN_1096b5544(lVar17 + 0xa8);
    if (0 < (int)(uVar16 >> 3)) {
      uVar18 = 0;
      do {
        *(undefined8 *)(*(long *)(lVar17 + 0xa8) + uVar18 * 8) =
             *(undefined8 *)(lVar14 + uVar18 * 8);
        uVar18 = uVar18 + 1;
      } while ((uVar16 >> 3 & 0x7fffffff) != uVar18);
    }
    ppuStack_170 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_170);
    ppuStack_180 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_180);
  }
  if (ppuStack_158 != (undefined **)0x0) {
    ppuStack_150 = ppuStack_158;
    __ZdlPv();
  }
  if (ppuStack_140 != (undefined **)0x0) {
    ppuStack_138 = ppuStack_140;
    __ZdlPv();
  }
  ppuStack_110 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_110);
  ppuStack_100 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_100);
LAB_1096b4e00:
  ppuStack_f0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_f0);
  uVar16 = (ulong)(ppuVar9 != (undefined **)0x0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  lVar14 = *(long *)(uVar16 + 8) + -0x20;
  func_0x0001096966c0(lVar14,*puVar7);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096b50e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar7 + 0x30))();
  return;
}



/* Entry: 1096b5094; end: 1096b5197;  */

void FUN_1096b5094(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096b50e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096b5198; end: 1096b51d3;  */

void FUN_1096b5198(long *param_1,ulong param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = param_1[1] - *param_1 >> 2;
  bVar1 = param_2 < (ulong)(lVar4 * -0x5555555555555555);
  uVar3 = param_2 + lVar4 * 0x5555555555555555;
  if (bVar1 || uVar3 == 0) {
    if (bVar1) {
      param_1[1] = *param_1 + param_2 * 0xc;
    }
    return;
  }
  lVar4 = param_1[1];
  if ((ulong)((param_1[2] - lVar4 >> 2) * -0x5555555555555555) < uVar3) {
    lVar4 = lVar4 - *param_1;
    uVar7 = uVar3 + (lVar4 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar7) {
      FUN_1094ccafc();
      uVar7 = param_1[1] - *param_1 >> 3;
      if (uVar3 <= uVar7) {
        if (uVar3 < uVar7) {
          param_1[1] = *param_1 + uVar3 * 8;
        }
        return;
      }
      uVar3 = uVar3 - uVar7;
      lVar4 = param_1[1];
      if ((ulong)(param_1[2] - lVar4 >> 3) < uVar3) {
        lVar4 = lVar4 - *param_1;
        uVar7 = uVar3 + (lVar4 >> 3);
        if (uVar7 >> 0x3d != 0) {
          FUN_1096b5670();
          func_0x000104c4f6cc(&DAT_10f62a4d8);
          if (uVar3 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__malloc_11034c5e8)(0x10);
            return;
          }
          __Znwm(uVar3 << 3);
          return;
        }
        uVar6 = param_1[2] - *param_1;
        uVar8 = (long)uVar6 >> 2;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          plVar2 = param_1;
          FUN_1096b5684();
        }
        lVar4 = (long)plVar2 + lVar4;
        _bzero(lVar4,uVar3 * 8);
        lVar9 = lVar4 - (param_1[1] - *param_1);
        _memcpy(lVar9);
        lVar5 = *param_1;
        *param_1 = lVar9;
        param_1[1] = lVar4 + uVar3 * 8;
        param_1[2] = (long)(plVar2 + uVar8);
        if (lVar5 != 0) goto __ZdlPv;
      }
      else {
        if (uVar3 != 0) {
          _bzero(lVar4,uVar3 * 8);
          lVar4 = lVar4 + uVar3 * 8;
        }
        param_1[1] = lVar4;
      }
      return;
    }
    lVar5 = param_1[2] - *param_1 >> 2;
    uVar8 = lVar5 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar8 = 0x1555555555555555;
    }
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1094ccb10();
    }
    lVar4 = (long)plVar2 + lVar4;
    lVar9 = ((uVar3 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar4,lVar9);
    lVar10 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lVar5 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar4 + lVar9;
    param_1[2] = (long)plVar2 + uVar8 * 0xc;
    if (lVar5 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (uVar3 != 0) {
      lVar5 = ((uVar3 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(lVar4,lVar5);
      lVar4 = lVar4 + lVar5;
    }
    param_1[1] = lVar4;
  }
  return;
}



/* Entry: 1096b51d4; end: 1096b527f;  */

undefined8 FUN_1096b51d4(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_2 + 8) + -0x20;
  func_0x0001096966c0(lVar5,puRam000000011382aa70);
  puVar4 = puRam000000011382aa70;
  if ((lVar5 == 0) || (*(long *)(lVar5 + 8) == 0)) {
    lVar5 = *(long *)(param_2 + 8) + -0x20;
    puVar6 = puRam000000011382aa70;
    (**(code **)*puRam000000011382aa70)();
    FUN_109696718(lVar5,puVar4);
    *(undefined8 **)(lVar5 + 8) = puVar6;
    lVar5 = *(long *)(lVar7 + 0x10);
    uVar8 = *(undefined8 *)(lVar7 + 8);
    puVar6[1] = *(undefined8 *)(lVar7 + 0x10);
    *puVar6 = uVar8;
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
  }
  else {
    func_0x0001096b68a4(*(long *)(lVar5 + 8),lVar7 + 8);
  }
  return 1;
}



/* Entry: 1096b5280; end: 1096b52cf;  */

void FUN_1096b5280(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar1,*param_2);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001096b52cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x30))();
  return;
}



/* Entry: 1096b52d0; end: 1096b537f;  */

undefined8 * FUN_1096b52d0(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = *(long *)(param_1 + 8) + -0x20;
  func_0x0001096966c0(lVar4,*param_2);
  if ((lVar4 != 0) && (puVar5 = *(undefined8 **)(lVar4 + 8), puVar5 != (undefined8 *)0x0)) {
    uVar10 = param_3[1];
    uVar9 = *param_3;
    if (param_3[1] != 0) {
      plVar7 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = (long *)puVar5[1];
    puVar5[1] = uVar10;
    *puVar5 = uVar9;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return puVar5;
  }
  puVar8 = (undefined8 *)*param_2;
  puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + -0x20);
  puVar5 = puVar8;
  (**(code **)*puVar8)();
  FUN_109696718(puVar6,puVar8);
  puVar6[1] = puVar5;
  lVar4 = param_3[1];
  uVar9 = *param_3;
  puVar5[1] = param_3[1];
  *puVar5 = uVar9;
  if (lVar4 != 0) {
    plVar7 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar6;
}



/* Entry: 1096b5380; end: 1096b53b3;  */

undefined8 * FUN_1096b5380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 1096b53b4; end: 1096b53e7;  */

void FUN_1096b53b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1096b53e8; end: 1096b5543;  */

void FUN_1096b53e8(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1[1];
  if ((ulong)((param_1[2] - lVar8 >> 2) * -0x5555555555555555) < param_2) {
    lVar8 = lVar8 - *param_1;
    uVar4 = param_2 + (lVar8 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar4) {
      FUN_1094ccafc();
      uVar4 = param_1[1] - *param_1 >> 3;
      if (param_2 <= uVar4) {
        if (param_2 < uVar4) {
          param_1[1] = *param_1 + param_2 * 8;
        }
        return;
      }
      param_2 = param_2 - uVar4;
      lVar8 = param_1[1];
      if ((ulong)(param_1[2] - lVar8 >> 3) < param_2) {
        lVar8 = lVar8 - *param_1;
        uVar4 = param_2 + (lVar8 >> 3);
        if (uVar4 >> 0x3d != 0) {
          FUN_1096b5670();
          func_0x000104c4f6cc(&DAT_10f62a4d8);
          if (param_2 >> 0x3d != 0) {
            func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__malloc_11034c5e8)(0x10);
            return;
          }
          __Znwm(param_2 << 3);
          return;
        }
        uVar3 = param_1[2] - *param_1;
        uVar5 = (long)uVar3 >> 2;
        if (uVar5 <= uVar4) {
          uVar5 = uVar4;
        }
        if (0x7ffffffffffffff7 < uVar3) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 == 0) {
          plVar1 = (long *)0x0;
        }
        else {
          plVar1 = param_1;
          FUN_1096b5684();
        }
        lVar8 = (long)plVar1 + lVar8;
        _bzero(lVar8,param_2 * 8);
        lVar6 = lVar8 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lVar2 = *param_1;
        *param_1 = lVar6;
        param_1[1] = lVar8 + param_2 * 8;
        param_1[2] = (long)(plVar1 + uVar5);
        if (lVar2 != 0) goto __ZdlPv;
      }
      else {
        if (param_2 != 0) {
          _bzero(lVar8,param_2 * 8);
          lVar8 = lVar8 + param_2 * 8;
        }
        param_1[1] = lVar8;
      }
      return;
    }
    lVar2 = param_1[2] - *param_1 >> 2;
    uVar5 = lVar2 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar5 = 0x1555555555555555;
    }
    if (uVar5 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1094ccb10();
    }
    lVar8 = (long)plVar1 + lVar8;
    lVar6 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar8,lVar6);
    lVar7 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar2 = *param_1;
    *param_1 = lVar7;
    param_1[1] = lVar8 + lVar6;
    param_1[2] = (long)plVar1 + uVar5 * 0xc;
    if (lVar2 != 0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = ((param_2 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(lVar8,lVar2);
      lVar8 = lVar8 + lVar2;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 1096b5544; end: 1096b5573;  */

void FUN_1096b5544(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = param_1[1] - *param_1 >> 3;
  if (param_2 <= uVar4) {
    if (param_2 < uVar4) {
      param_1[1] = *param_1 + param_2 * 8;
    }
    return;
  }
  param_2 = param_2 - uVar4;
  lVar7 = param_1[1];
  if ((ulong)(param_1[2] - lVar7 >> 3) < param_2) {
    lVar7 = lVar7 - *param_1;
    uVar4 = param_2 + (lVar7 >> 3);
    if (uVar4 >> 0x3d != 0) {
      FUN_1096b5670();
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      if (param_2 >> 0x3d == 0) {
        __Znwm(param_2 << 3);
        return;
      }
      func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(0x10);
      return;
    }
    uVar3 = param_1[2] - *param_1;
    uVar5 = (long)uVar3 >> 2;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_1096b5684();
    }
    lVar7 = (long)plVar1 + lVar7;
    _bzero(lVar7,param_2 * 8);
    lVar6 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar2 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7 + param_2 * 8;
    param_1[2] = (long)(plVar1 + uVar5);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar7,param_2 * 8);
      lVar7 = lVar7 + param_2 * 8;
    }
    param_1[1] = lVar7;
  }
  return;
}



/* Entry: 1096b5574; end: 1096b566f;  */

void FUN_1096b5574(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = param_1[1];
  if ((ulong)(param_1[2] - lVar7 >> 3) < param_2) {
    lVar7 = lVar7 - *param_1;
    uVar1 = param_2 + (lVar7 >> 3);
    if (uVar1 >> 0x3d != 0) {
      FUN_1096b5670();
      func_0x000104c4f6cc(&DAT_10f62a4d8);
      if (param_2 >> 0x3d == 0) {
        __Znwm(param_2 << 3);
        return;
      }
      func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__malloc_11034c5e8)(0x10);
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_1096b5684();
    }
    lVar7 = (long)plVar2 + lVar7;
    _bzero(lVar7,param_2 << 3);
    lVar6 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar3 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7 + param_2 * 8;
    param_1[2] = (long)(plVar2 + uVar5);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  else {
    if (param_2 != 0) {
      _bzero(lVar7,param_2 << 3);
      lVar7 = lVar7 + param_2 * 8;
    }
    param_1[1] = lVar7;
  }
  return;
}



/* Entry: 1096b5670; end: 1096b5683;  */

void FUN_1096b5670(undefined8 param_1,ulong param_2)

{
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b5684; end: 1096b56b7;  */

void FUN_1096b5684(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b56b8; end: 1096b56c7;  */

void FUN_1096b56b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b56c8; end: 1096b56f7;  */

void FUN_1096b56c8(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096b56f8; end: 1096b5707;  */

void FUN_1096b56f8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  ___dynamic_cast(param_3,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
  if (param_3 == (undefined8 *)0x0) {
    func_0x000107c2acdc();
  }
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096b5708; end: 1096b5767;  */

undefined8 FUN_1096b5708(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096b5768; end: 1096b577b;  */

undefined8 FUN_1096b5768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096b577c; end: 1096b57a7;  */

void FUN_1096b577c(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b04850;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096b57a8; end: 1096b588f;  */

void FUN_1096b57a8(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b01d40;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    FUN_109694d40("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b01d40;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4();
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
  pcStack_58 = FUN_1096b5890;
  puStack_70 = param_2;
  puStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_1096b4360(&ppuStack_80);
  extraout_x8[1] = uStack_78;
  *extraout_x8 = ppuStack_80;
  ppuStack_80 = &PTR_FUN_110b01d60;
  uStack_78 = 0;
  func_0x000107c2acd4(&ppuStack_80);
  return;
}



/* Entry: 1096b5890; end: 1096b58db;  */

void FUN_1096b5890(undefined8 *param_1)

{
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  FUN_1096b4360(&ppuStack_30);
  param_1[1] = uStack_28;
  *param_1 = ppuStack_30;
  ppuStack_30 = &PTR_FUN_110b01d60;
  uStack_28 = 0;
  func_0x000107c2acd4(&ppuStack_30);
  return;
}



/* Entry: 1096b58dc; end: 1096b590b;  */

bool FUN_1096b58dc(long param_1)

{
  ___dynamic_cast(param_1,&PTR_DAT_110b01d40,&PTR_DAT_110b04850,0);
  return param_1 != 0;
}



/* Entry: 1096b590c; end: 1096b591f;  */

void FUN_1096b590c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b5920; end: 1096b594f;  */

void FUN_1096b5920(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_2);
  return;
}



/* Entry: 1096b5950; end: 1096b598b;  */

void FUN_1096b5950(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar4 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar4;
  if (param_1[1] != 0) {
    piVar3 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00af0;
  return;
}



/* Entry: 1096b598c; end: 1096b59eb;  */

undefined8 FUN_1096b598c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (param_3[1] != param_2[1]) {
    func_0x000107c2acd4(param_3);
    uVar4 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar4;
    if (param_3[1] != 0) {
      piVar3 = (int *)(param_3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar2) {
          *piVar3 = *piVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return 1;
}



/* Entry: 1096b59ec; end: 1096b5a17;  */

undefined8 FUN_1096b59ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1096b5a18; end: 1096b5a43;  */

void FUN_1096b5a18(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b04850;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096b5a44; end: 1096b5b2b;  */

void FUN_1096b5a44(undefined8 *param_1,undefined1 *param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  long lStack_28;
  
  pppuVar1 = &ppuStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2accc();
  iVar2 = 0x10b00b10;
  func_0x00010969659c(param_1);
  FUN_1096978cc();
  if (param_1[1] == *(long *)(param_2 + 8)) {
    func_0x000107c2acbc("",0);
    func_0x000107c2accc();
    iVar2 = 0x10b00b10;
    func_0x00010969659c(&ppuStack_50);
    uVar3 = param_1[1];
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    ppuStack_50 = &PTR_FUN_110b01d60;
    uStack_48 = uVar3;
    func_0x000107c2acd4(&ppuStack_50);
    param_2 = (undefined1 *)pppuVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar2 != 0) {
    func_0x000104bd46a0(param_2);
    FUN_109696618(param_1);
  }
  __Unwind_Resume(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b5b2c; end: 1096b5b3f;  */

void FUN_1096b5b2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(0x10);
  return;
}



/* Entry: 1096b5b40; end: 1096b5b57;  */

void FUN_1096b5b40(undefined8 param_1,undefined8 param_2)

{
  FUN_1096b63f8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 1096b5b58; end: 1096b5ba7;  */

void FUN_1096b5b58(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  long lVar6;
  
  lVar3 = 0x21;
  __Znam();
  lVar6 = 0x10;
  pcVar4 = (char *)(lVar3 + 1);
  do {
    bVar2 = *param_3;
    cVar5 = '0';
    cVar1 = '0';
    if (9 < (bVar2 & 0xf)) {
      cVar1 = '7';
    }
    pcVar4[-1] = cVar1 + (bVar2 & 0xf);
    if (0x9f < bVar2) {
      cVar5 = '7';
    }
    *pcVar4 = cVar5 + (bVar2 >> 4);
    lVar6 = lVar6 + -1;
    pcVar4 = pcVar4 + 2;
    param_3 = param_3 + 1;
  } while (lVar6 != 0);
  *(undefined1 *)(lVar3 + 0x20) = 0;
  lVar6 = lVar3;
  _strlen(lVar3);
  FUN_109697928(param_1,lVar3,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar3);
  return;
}



/* Entry: 1096b5ba8; end: 1096b5bff;  */

void FUN_1096b5ba8(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined **ppuStack_28;
  
  func_0x000107c2accc();
  ppuStack_28 = &PTR_DAT_110b04850;
  param_2 = param_2 + 0x28;
  FUN_109698fb4(param_2,&ppuStack_28);
  if (param_2 == 0) {
    FUN_1096978cc();
    puVar3 = (undefined8 *)0x11382a968;
  }
  else {
    puVar3 = (undefined8 *)(param_2 + 0x18);
  }
  uVar5 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  if (param_1[1] != 0) {
    piVar4 = (int *)(param_1[1] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = &PTR_FUN_110b00f28;
  return;
}



/* Entry: 1096b5c00; end: 1096b5c2f;  */

void FUN_1096b5c00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1096b5c30; end: 1096b5c7f;  */

long FUN_1096b5c30(long param_1)

{
  FUN_1096b63f8(param_1 + 8);
  return param_1;
}



/* Entry: 1096b5c80; end: 1096b6007;  */

void FUN_1096b5c80(undefined8 *param_1,undefined ***param_2,undefined **param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  int iVar6;
  undefined8 *extraout_x8;
  int *piVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  ppuVar8 = param_3;
  if (*(long *)(param_4 + 8) == 0) goto LAB_1096b5f0c;
  func_0x000107c2accc();
  func_0x00010969659c(&ppuStack_a0);
  func_0x000107c2accc();
  ppuVar8 = &PTR_DAT_110b00b10;
  func_0x00010969659c(&ppuStack_b0);
  ppuVar3 = ppuStack_98;
  ppuVar9 = ppuStack_a8;
  ppuStack_b0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_b0);
  ppuStack_a0 = &PTR_FUN_110b01d60;
  func_0x000107c2acd4(&ppuStack_a0);
  if (ppuVar3 == ppuVar9) {
    ppuVar8 = &PTR_DAT_110b01d40;
    lVar5 = param_4;
    ___dynamic_cast(param_4,&PTR_DAT_110b01d40,&PTR_DAT_110b00b10,0);
    if (lVar5 == 0) {
      func_0x000107c2acdc();
    }
    ppuStack_98 = *(undefined ***)(lVar5 + 8);
    if (ppuStack_98 != (undefined **)0x0) {
      ppuVar9 = ppuStack_98 + -1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar2) {
          *(int *)ppuVar9 = *(int *)ppuVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppuStack_a0 = &PTR_FUN_110b00af0;
      if (ppuStack_98 != (undefined **)0x0) {
        FUN_1096b3950(&ppuStack_c0,param_2,param_3,&ppuStack_a0);
        FUN_1096b6008(&ppuStack_b0,&ppuStack_c0);
        ppuVar8 = (undefined **)param_1[1];
        param_1[1] = ppuStack_a8;
        *param_1 = ppuStack_b0;
        ppuStack_b0 = &PTR_FUN_110b01d60;
        ppuStack_a8 = ppuVar8;
        func_0x000107c2acd4(&ppuStack_b0);
        ppuStack_c0 = &PTR_FUN_110b01d60;
        func_0x000107c2acd4(&ppuStack_c0);
        ppuVar8 = param_3;
      }
    }
    ppuStack_a0 = &PTR_FUN_110b01d60;
    param_2 = &ppuStack_a0;
    func_0x000107c2acd4();
    if (param_1[1] != 0) goto LAB_1096b5f0c;
  }
  FUN_1096b6008(&ppuStack_a0,param_4);
  ppuVar9 = (undefined **)param_1[1];
  param_1[1] = ppuStack_98;
  *param_1 = ppuStack_a0;
  ppuStack_a0 = &PTR_FUN_110b01d60;
  param_2 = &ppuStack_a0;
  ppuStack_98 = ppuVar9;
  func_0x000107c2acd4();
  if (param_1[1] != 0) goto LAB_1096b5f0c;
  FUN_1096a4f30(&ppuStack_a0,param_4);
  if (ppuStack_98 != (undefined **)0x0) {
    pppuVar4 = &ppuStack_a0;
    (*(code *)ppuStack_a0[5])(&ppuStack_b0);
    FUN_1096978cc();
    if (ppuStack_a8 == pppuVar4[1]) {
      ppuStack_b0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_b0);
    }
    else {
      (*(code *)ppuStack_a0[5])(&ppuStack_c0,&ppuStack_a0);
      func_0x000107c2accc();
      ppuVar8 = &PTR_DAT_110b04bf8;
      func_0x00010969659c(&ppuStack_d0);
      ppuStack_d0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_d0);
      ppuStack_c0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_c0);
      ppuStack_b0 = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(&ppuStack_b0);
      if (lStack_b8 != lStack_c8) goto LAB_1096b5f00;
    }
    (*(code *)ppuStack_a0[4])(&ppuStack_c0,&ppuStack_a0);
    FUN_1096b6008(&ppuStack_b0,&ppuStack_c0);
    ppuVar9 = (undefined **)param_1[1];
    param_1[1] = ppuStack_a8;
    *param_1 = ppuStack_b0;
    ppuStack_b0 = &PTR_FUN_110b01d60;
    ppuStack_a8 = ppuVar9;
    func_0x000107c2acd4(&ppuStack_b0);
    ppuStack_c0 = &PTR_FUN_110b01d60;
    func_0x000107c2acd4(&ppuStack_c0);
  }
LAB_1096b5f00:
  ppuStack_a0 = &PTR_FUN_110b01d60;
  param_2 = &ppuStack_a0;
  func_0x000107c2acd4();
LAB_1096b5f0c:
  iVar6 = (int)ppuVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
    FUN_109696618(&ppuStack_a0);
    FUN_10969664c(param_1);
  }
  __Unwind_Resume();
  *extraout_x8 = &PTR_FUN_110b01d60;
  extraout_x8[1] = 0;
  pppuVar4 = param_2;
  ___dynamic_cast();
  if (pppuVar4 != (undefined ***)0x0 && param_2[1] != (undefined **)0x0) {
    func_0x000107c2acd4(extraout_x8);
    ppuVar8 = *param_2;
    extraout_x8[1] = param_2[1];
    *extraout_x8 = ppuVar8;
    if (extraout_x8[1] != 0) {
      piVar7 = (int *)(extraout_x8[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096b6008; end: 1096b609b;  */

void FUN_1096b6008(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b04bf8,0);
  if (puVar3 != (undefined8 *)0x0 && param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (param_1[1] != 0) {
      piVar4 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096b609c; end: 1096b6133;  */

void FUN_1096b609c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b0a200,0);
  if (puVar3 != (undefined8 *)0x0 && param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (param_1[1] != 0) {
      piVar4 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096b6134; end: 1096b61cb;  */

void FUN_1096b6134(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b01d60;
  param_1[1] = 0;
  puVar3 = param_2;
  ___dynamic_cast(param_2,&PTR_DAT_110b01d40,&PTR_DAT_110b09168,0);
  if (puVar3 != (undefined8 *)0x0 && param_2[1] != 0) {
    func_0x000107c2acd4(param_1);
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    if (param_1[1] != 0) {
      piVar4 = (int *)(param_1[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 1096b61cc; end: 1096b6213;  */

void FUN_1096b61cc(long *param_1)

{
  long lVar1;
  
  lVar1 = 0xd8;
  __Znwm();
  FUN_1096b6214();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 1096b6214; end: 1096b625b;  */

undefined8 * FUN_1096b6214(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b04b48;
  FUN_1096b6298(param_1 + 3);
  return param_1;
}



/* Entry: 1096b625c; end: 1096b626b;  */

void FUN_1096b625c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b04b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1096b626c; end: 1096b628b;  */

void FUN_1096b626c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b04b48;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1096b628c; end: 1096b6297;  */

long * FUN_1096b628c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(long *)(param_1 + 200) = *(long *)(param_1 + 0xc0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x68) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = *(long **)(param_1 + 0x30);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1096b6298; end: 1096b6327;  */

undefined8 * FUN_1096b6298(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1096b81dc();
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 1096b6328; end: 1096b636f;  */

long * FUN_1096b6328(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1096b6370; end: 1096b63f7;  */

long * FUN_1096b6370(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xa8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x90);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x78);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x60);
    __ZdlPv();
  }
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_110b01d60;
  func_0x000107c2acd4();
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  plVar1 = (long *)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x18);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 1096b63f8; end: 1096b644f;  */

long FUN_1096b63f8(long param_1)

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



/* Entry: 1096b6450; end: 1096b6697;  */

undefined1  [16] FUN_1096b6450(long *param_1,undefined8 *param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x27;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  plVar5 = param_1;
  func_0x000107c2ac8c(param_1,*param_2,param_2[1]);
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x27 = (long *)(uVar10 & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar9 <= plVar5) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar6 * (long)plVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar3, plVar8 != (long *)0x0)) {
      uVar2 = *param_2;
      lVar7 = param_2[1];
      do {
        plVar4 = (long *)plVar8[1];
        if (plVar4 == plVar5) {
          if (plVar8[3] == lVar7) {
            lVar1 = plVar8[2];
            _memcmp(lVar1,uVar2,lVar7);
            if ((int)lVar1 == 0) {
              uVar2 = 0;
              goto LAB_1096b665c;
            }
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar9);
          }
          if (plVar4 != unaff_x27) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x28;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = (long)plVar5;
  lVar7 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar7;
  *(undefined4 *)(plVar8 + 4) = *param_4;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    FUN_1096b6698(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar9 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar9 <= plVar5) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar7 + (long)unaff_x27 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_1096b664c;
    plVar5 = *(long **)(*plVar8 + 8);
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar9 - 1U);
    }
    else if (plVar9 <= plVar5) {
      uVar10 = 0;
      if (plVar9 != (long *)0x0) {
        uVar10 = (ulong)plVar5 / (ulong)plVar9;
      }
      plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar9);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_1096b664c:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1096b665c:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1096b6698; end: 1096b6767;  */

long * FUN_1096b6698(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar5 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar11 = (long *)param_1[1];
  if (plVar11 < param_2) {
LAB_1096b66e0:
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)*param_1;
      *param_1 = 0;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        lVar12 = param_2[1];
        lVar4 = *param_2;
        if (param_2[1] != 0) {
          plVar5 = (long *)(param_2[1] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar5 = (long *)param_1[1];
        param_1[1] = lVar12;
        *param_1 = lVar4;
        if (plVar5 != (long *)0x0) {
          plVar11 = plVar5 + 1;
          do {
            lVar4 = *plVar11;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        return param_1;
      }
      lVar4 = (long)param_2 << 3;
      __Znwm();
      plVar5 = (long *)*param_1;
      *param_1 = lVar4;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
      }
      plVar11 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar11 * 8) = 0;
        plVar11 = (long *)((long)plVar11 + 1);
      } while (param_2 != plVar11);
      plVar11 = (long *)param_1[2];
      if (plVar11 != (long *)0x0) {
        plVar7 = (long *)plVar11[1];
        uVar6 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar3 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar7 * 8) = param_1 + 2;
        plVar8 = (long *)*plVar11;
        while (plVar8 != (long *)0x0) {
          plVar10 = (long *)plVar8[1];
          if (((ulong)param_2 & uVar6) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar6);
          }
          else if (param_2 <= plVar10) {
            uVar3 = 0;
            if (param_2 != (long *)0x0) {
              uVar3 = (ulong)plVar10 / (ulong)param_2;
            }
            plVar10 = (long *)((long)plVar10 - uVar3 * (long)param_2);
          }
          plVar9 = plVar8;
          if (plVar10 != plVar7) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + (long)plVar10 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar10 * 8) = plVar11;
              plVar7 = plVar10;
            }
            else {
              *plVar11 = *plVar8;
              *plVar8 = **(undefined8 **)(lVar4 + (long)plVar10 * 8);
              **(long **)(lVar4 + (long)plVar10 * 8) = (long)plVar8;
              plVar9 = plVar11;
            }
          }
          plVar11 = plVar9;
          plVar8 = (long *)*plVar9;
        }
      }
    }
    return plVar5;
  }
  if (param_2 < plVar11) {
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar11 < (long *)0x3) || (((ulong)plVar11 & (long)plVar11 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar5) {
      plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (param_2 < plVar11) goto LAB_1096b66e0;
  }
  return plVar5;
}



/* Entry: 1096b6768; end: 1096b691f;  */

long * FUN_1096b6768(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if (param_2 == (long *)0x0) {
    plVar5 = (long *)*param_1;
    *param_1 = 0;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      lVar12 = param_2[1];
      lVar4 = *param_2;
      if (param_2[1] != 0) {
        plVar5 = (long *)(param_2[1] + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar5 = (long *)param_1[1];
      param_1[1] = lVar12;
      *param_1 = lVar4;
      if (plVar5 != (long *)0x0) {
        plVar6 = plVar5 + 1;
        do {
          lVar4 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      return param_1;
    }
    lVar4 = (long)param_2 << 3;
    __Znwm();
    plVar5 = (long *)*param_1;
    *param_1 = lVar4;
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
    plVar6 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar6 * 8) = 0;
      plVar6 = (long *)((long)plVar6 + 1);
    } while (param_2 != plVar6);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)plVar6[1];
      uVar7 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar7) == 0) {
        plVar8 = (long *)((ulong)plVar8 & uVar7);
      }
      else if (param_2 <= plVar8) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar8 / (ulong)param_2;
        }
        plVar8 = (long *)((long)plVar8 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar6;
      while (plVar9 != (long *)0x0) {
        plVar11 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (param_2 <= plVar11) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar11 / (ulong)param_2;
          }
          plVar11 = (long *)((long)plVar11 - uVar3 * (long)param_2);
        }
        plVar10 = plVar9;
        if (plVar11 != plVar8) {
          lVar4 = *param_1;
          if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar11 * 8) = plVar6;
            plVar8 = plVar11;
          }
          else {
            *plVar6 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar4 + (long)plVar11 * 8);
            **(long **)(lVar4 + (long)plVar11 * 8) = (long)plVar9;
            plVar10 = plVar6;
          }
        }
        plVar6 = plVar10;
        plVar9 = (long *)*plVar10;
      }
    }
  }
  return plVar5;
}



/* Entry: 1096b6920; end: 1096b699b;  */

undefined8 * FUN_1096b6920(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b04b98;
  param_1[1] = puVar1;
  FUN_1096b699c(param_1);
  return param_1;
}



/* Entry: 1096b699c; end: 1096b6a27;  */

void FUN_1096b699c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  func_0x000107c2acd0(param_1,0x50);
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110b01d60;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  puVar3 = param_1;
  func_0x000107c2acdc();
  param_1[8] = &PTR_FUN_110b01d60;
  uVar5 = *puVar3;
  param_1[9] = puVar3[1];
  param_1[8] = uVar5;
  if (param_1[9] != 0) {
    piVar4 = (int *)(param_1[9] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[8] = &PTR_FUN_110b04dd8;
  *param_1 = &PTR_FUN_110b04d00;
  return;
}



/* Entry: 1096b6a28; end: 1096b6ad3;  */

void FUN_1096b6a28(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  iVar2 = *(int *)(lVar3 + 8) * *(int *)(lVar3 + 0xc);
  (**(code **)(*(long *)(lVar3 + 0x18) + 0x30))((long *)(lVar3 + 0x18),param_2,param_3,iVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  if (lVar3 != 0) {
    piVar5 = *(int **)(lVar3 + 8);
    uVar4 = *(long *)(lVar3 + 0x10) - (long)piVar5;
    if (0 < (int)(uVar4 >> 2)) {
      iVar1 = *(int *)(*(long *)(param_1 + 8) + 8);
      lVar3 = param_5 + (long)iVar2 * 4;
      uVar4 = uVar4 >> 2 & 0x7fffffff;
      do {
        if (iVar1 != 0) {
          _memmove(lVar3,param_5 + (long)(*piVar5 * iVar1) * 4,(long)iVar1 * 4);
        }
        piVar5 = piVar5 + 1;
        lVar3 = lVar3 + (long)iVar1 * 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}



/* Entry: 1096b6ad4; end: 1096b6b1f;  */

void FUN_1096b6ad4(long param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5
                  ,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(int *)(lVar1 + 0xc) <= param_2) {
    param_2 = *(int *)(*(long *)(*(long *)(lVar1 + 0x48) + 8) +
                      (ulong)(uint)(param_2 - *(int *)(lVar1 + 0xc)) * 4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001096b6b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x18) + 0x38))
            ((long *)(lVar1 + 0x18),param_3,param_4,param_5,param_6,*(int *)(lVar1 + 8) * param_2);
  return;
}



/* Entry: 1096b6b20; end: 1096b6deb;  */

void FUN_1096b6b20(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  byte bStack_49;
  undefined1 uStack_48;
  byte bStack_47;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  undefined1 uStack_42;
  byte bStack_41;
  
  uStack_4b = 0;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_4b,1,1);
  lVar3 = *(long *)(param_1 + 8);
  uVar5 = (ulong)(int)*(uint *)(lVar3 + 8);
  uVar4 = uVar5;
  if (0x7f < *(uint *)(lVar3 + 8)) {
    do {
      bStack_47 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_47,1,1);
      uVar5 = uVar4 >> 7;
      uVar2 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_48 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_48,1,1);
  uVar5 = (ulong)(int)*(uint *)(lVar3 + 0xc);
  uVar4 = uVar5;
  if (0x7f < *(uint *)(lVar3 + 0xc)) {
    do {
      bStack_45 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_45,1,1);
      uVar5 = uVar4 >> 7;
      uVar2 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_46 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_46,1,1);
  uVar5 = (ulong)(int)*(uint *)(lVar3 + 0x10);
  uVar4 = uVar5;
  if (0x7f < *(uint *)(lVar3 + 0x10)) {
    do {
      bStack_43 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_43,1,1);
      uVar5 = uVar4 >> 7;
      uVar2 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_44 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_44,1,1);
  uVar5 = (ulong)(int)*(uint *)(lVar3 + 0x14);
  uVar4 = uVar5;
  if (0x7f < *(uint *)(lVar3 + 0x14)) {
    do {
      bStack_41 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_41,1,1);
      uVar5 = uVar4 >> 7;
      uVar2 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_42 = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_42,1,1);
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x18);
  lVar3 = *(long *)(param_1 + 8);
  uVar5 = *(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x28) >> 4;
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      bStack_49 = (byte)uVar4 | 0x80;
      (**(code **)(*param_2 + 0x48))(param_2,&bStack_49,1,1);
      uVar5 = uVar4 >> 7;
      uVar2 = uVar4 >> 0xe;
      uVar4 = uVar5;
    } while (uVar2 != 0);
  }
  uStack_4a = (undefined1)uVar5;
  (**(code **)(*param_2 + 0x48))(param_2,&uStack_4a,1,1);
  lVar1 = *(long *)(lVar3 + 0x30);
  for (lVar3 = *(long *)(lVar3 + 0x28); lVar3 != lVar1; lVar3 = lVar3 + 0x10) {
    FUN_109697ca4(param_2,lVar3);
  }
  (**(code **)(*param_3 + 0x20))(param_3,param_2,*(long *)(param_1 + 8) + 0x40);
  return;
}



/* Entry: 1096b6dec; end: 1096b72bb;  */

long * FUN_1096b6dec(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined ***pppuVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined **appuStack_a0 [2];
  undefined **ppuStack_90;
  ulong uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = &ppuStack_90;
  uVar11 = 1;
  uVar13 = 1;
  plVar17 = param_2;
  (**(code **)(*param_2 + 0x40))();
  while( true ) {
    iVar5 = (int)pppuVar6;
    iVar10 = (int)uVar11;
    if ((int)plVar17 != 1) break;
    if (-1 < (char)ppuStack_90) {
      lVar16 = *(long *)(param_1 + 8);
      iVar5 = (int)&ppuStack_90;
      iVar10 = 1;
      uVar13 = 1;
      plVar17 = param_2;
      (**(code **)(*param_2 + 0x40))();
      if ((int)plVar17 == 1) {
        uVar18 = 0;
        uVar20 = 0;
        goto LAB_1096b6ea0;
      }
      break;
    }
    pppuVar6 = &ppuStack_90;
    uVar11 = 1;
    uVar13 = 1;
    plVar17 = param_2;
    (**(code **)(*param_2 + 0x40))();
  }
  goto LAB_1096b7110;
  while( true ) {
    iVar5 = (int)&ppuStack_90;
    iVar10 = 1;
    uVar13 = 1;
    plVar17 = param_2;
    (**(code **)(*param_2 + 0x40))();
    uVar20 = uVar20 + 7;
    if ((int)plVar17 != 1) break;
LAB_1096b6ea0:
    uVar18 = ((ulong)ppuStack_90 & 0x7f) << (uVar20 & 0x3f) | uVar18;
    if (-1 < (char)ppuStack_90) {
      *(int *)(lVar16 + 8) = (int)uVar18;
      iVar5 = (int)&ppuStack_90;
      iVar10 = 1;
      uVar13 = 1;
      plVar17 = param_2;
      (**(code **)(*param_2 + 0x40))();
      if ((int)plVar17 == 1) {
        uVar18 = 0;
        uVar20 = 0;
        goto LAB_1096b6f10;
      }
      break;
    }
  }
  goto LAB_1096b7110;
  while( true ) {
    iVar5 = (int)&ppuStack_90;
    iVar10 = 1;
    uVar13 = 1;
    plVar17 = param_2;
    (**(code **)(*param_2 + 0x40))();
    uVar20 = uVar20 + 7;
    if ((int)plVar17 != 1) break;
LAB_1096b6f10:
    uVar18 = ((ulong)ppuStack_90 & 0x7f) << (uVar20 & 0x3f) | uVar18;
    if (-1 < (char)ppuStack_90) {
      *(int *)(lVar16 + 0xc) = (int)uVar18;
      iVar5 = (int)&ppuStack_90;
      iVar10 = 1;
      uVar13 = 1;
      plVar17 = param_2;
      (**(code **)(*param_2 + 0x40))();
      if ((int)plVar17 == 1) {
        uVar18 = 0;
        uVar20 = 0;
        goto LAB_1096b6f80;
      }
      break;
    }
  }
  goto LAB_1096b7110;
  while( true ) {
    iVar5 = (int)&ppuStack_90;
    iVar10 = 1;
    uVar13 = 1;
    plVar17 = param_2;
    (**(code **)(*param_2 + 0x40))();
    uVar20 = uVar20 + 7;
    if ((int)plVar17 != 1) break;
LAB_1096b6f80:
    uVar18 = ((ulong)ppuStack_90 & 0x7f) << (uVar20 & 0x3f) | uVar18;
    if (-1 < (char)ppuStack_90) {
      *(int *)(lVar16 + 0x10) = (int)uVar18;
      iVar5 = (int)&ppuStack_90;
      uVar11 = 1;
      uVar13 = 1;
      plVar17 = param_2;
      (**(code **)(*param_2 + 0x40))();
      iVar10 = (int)uVar11;
      if ((int)plVar17 == 1) {
        uVar18 = 0;
        uVar20 = 0;
        goto LAB_1096b6ff0;
      }
      break;
    }
  }
  goto LAB_1096b7110;
  while( true ) {
    iVar5 = (int)&ppuStack_90;
    uVar11 = 1;
    uVar13 = 1;
    plVar17 = param_2;
    (**(code **)(*param_2 + 0x40))();
    iVar10 = (int)uVar11;
    uVar20 = uVar20 + 7;
    if ((int)plVar17 != 1) break;
LAB_1096b6ff0:
    iVar10 = (int)uVar11;
    uVar18 = ((ulong)ppuStack_90 & 0x7f) << (uVar20 & 0x3f) | uVar18;
    if (-1 < (char)ppuStack_90) {
      *(int *)(lVar16 + 0x14) = (int)uVar18;
      lVar16 = *(long *)(param_1 + 8);
      (**(code **)(*param_3 + 0x28))(appuStack_a0,param_3,param_2);
      FUN_1096b7c7c(&ppuStack_90,appuStack_a0);
      uVar20 = *(ulong *)(lVar16 + 0x20);
      *(ulong *)(lVar16 + 0x20) = uStack_88;
      *(undefined ***)(lVar16 + 0x18) = ppuStack_90;
      ppuStack_90 = &PTR_FUN_110b01d60;
      uStack_88 = uVar20;
      func_0x000107c2acd4(&ppuStack_90);
      appuStack_a0[0] = &PTR_FUN_110b01d60;
      func_0x000107c2acd4(appuStack_a0);
      lVar16 = param_3[1] + -0x20;
      uVar11 = uRam000000011382aa08;
      func_0x0001096966c0();
      iVar5 = (int)uVar11;
      if (lVar16 == 0) {
        lVar16 = *(long *)(param_1 + 8);
        iVar5 = (int)&ppuStack_90;
        uVar11 = 1;
        uVar13 = 1;
        plVar17 = param_2;
        (**(code **)(*param_2 + 0x40))();
        iVar10 = (int)uVar11;
        if ((int)plVar17 == 1) {
          uVar18 = 0;
          uVar20 = 0;
          goto LAB_1096b70d4;
        }
      }
      break;
    }
  }
  goto LAB_1096b7110;
  while( true ) {
    iVar5 = (int)&ppuStack_90;
    uVar11 = 1;
    uVar13 = 1;
    plVar17 = param_2;
    (**(code **)(*param_2 + 0x40))();
    iVar10 = (int)uVar11;
    uVar20 = uVar20 + 7;
    if ((int)plVar17 != 1) break;
LAB_1096b70d4:
    uVar18 = ((ulong)ppuStack_90 & 0x7f) << (uVar20 & 0x3f) | uVar18;
    iVar5 = (int)uVar18;
    if (-1 < (char)ppuStack_90) {
      FUN_1096b7d10(lVar16 + 0x28);
      iVar10 = (int)uVar11;
      lVar19 = *(long *)(lVar16 + 0x28);
      lVar16 = *(long *)(lVar16 + 0x30);
      if (lVar19 == lVar16) {
        plVar17 = (long *)0x1;
      }
      else {
        do {
          plVar17 = param_2;
          lVar9 = lVar19;
          FUN_109697d7c();
          iVar5 = (int)lVar9;
          iVar10 = (int)uVar11;
          lVar19 = lVar19 + 0x10;
          uVar3 = 0;
          if (lVar19 != lVar16) {
            uVar3 = (uint)plVar17;
          }
        } while ((uVar3 & 1) != 0);
      }
      goto LAB_1096b7114;
    }
  }
LAB_1096b7110:
  plVar17 = (long *)0x0;
LAB_1096b7114:
  uVar12 = (undefined4)uVar13;
  uVar14 = (undefined4)param_5;
  puVar1 = *(ulong **)(*(long *)(param_1 + 8) + 0x30);
  puVar2 = *(ulong **)(*(long *)(param_1 + 8) + 0x28);
  do {
    if (puVar2 == puVar1) {
      if (((ulong)plVar17 & 1) == 0) {
        param_2 = (long *)0x0;
      }
      else {
        iVar10 = (int)*(undefined8 *)(param_1 + 8) + 0x40;
        FUN_1096b7f8c();
        iVar5 = (int)param_3;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
        return param_2;
      }
      ___stack_chk_fail();
      if (iVar5 != 0) {
        func_0x000104bd46a0();
      }
      __Unwind_Resume();
      *param_2 = (long)&PTR_FUN_110b01d60;
      puVar4 = (undefined8 *)0x28;
      _malloc();
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 3) = 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 4;
        *puVar4 = &PTR_DAT_110b00de0;
      }
      *param_2 = (long)&PTR_FUN_110b04bc8;
      param_2[1] = (long)puVar4;
      FUN_1096b7364(param_2);
      lVar16 = param_2[1];
      *(int *)(lVar16 + 8) = iVar5;
      *(int *)(lVar16 + 0xc) = iVar10;
      *(undefined4 *)(lVar16 + 0x10) = uVar12;
      *(undefined4 *)(lVar16 + 0x14) = uVar14;
      return param_2;
    }
    uVar20 = puVar2[1];
    lVar16 = (long)*(char *)(uVar20 + 0x1f);
    if (lVar16 < 0) {
      pbVar7 = *(byte **)(uVar20 + 8);
      lVar16 = *(long *)(uVar20 + 0x10);
    }
    else {
      pbVar7 = (byte *)(uVar20 + 8);
    }
    pbVar15 = pbVar7 + lVar16;
    if (lVar16 == 0) {
LAB_1096b7174:
      pbVar8 = pbVar7;
      if (pbVar7 != pbVar15) {
        lVar16 = (long)pbVar15 - (long)pbVar7;
        do {
          if ((4 < pbVar7[lVar16 + -1] - 9) && (pbVar7[lVar16 + -1] != 0x20)) {
            pbVar15 = pbVar7 + lVar16;
            break;
          }
          lVar16 = lVar16 + -1;
          pbVar15 = pbVar7;
        } while (lVar16 != 0);
      }
    }
    else {
      do {
        if ((4 < *pbVar7 - 9) && (*pbVar7 != 0x20)) goto LAB_1096b7174;
        pbVar7 = pbVar7 + 1;
        lVar16 = lVar16 + -1;
        pbVar8 = pbVar15;
      } while (lVar16 != 0);
    }
    iVar5 = (int)pbVar8;
    iVar10 = (int)pbVar15 - iVar5;
    FUN_109697928(&ppuStack_90);
    uVar20 = puVar2[1];
    puVar2[1] = uStack_88;
    *puVar2 = (ulong)ppuStack_90;
    ppuStack_90 = &PTR_FUN_110b01d60;
    uStack_88 = uVar20;
    func_0x000107c2acd4(&ppuStack_90);
    uVar12 = (undefined4)uVar13;
    uVar14 = (undefined4)param_5;
    puVar2 = puVar2 + 2;
  } while( true );
}



/* Entry: 1096b72bc; end: 1096b7363;  */

undefined8 *
FUN_1096b72bc(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b01d60;
  puVar1 = (undefined8 *)0x28;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_DAT_110b00de0;
  }
  *param_1 = &PTR_FUN_110b04bc8;
  param_1[1] = puVar1;
  FUN_1096b7364(param_1);
  lVar2 = param_1[1];
  *(undefined4 *)(lVar2 + 8) = param_2;
  *(undefined4 *)(lVar2 + 0xc) = param_3;
  *(undefined4 *)(lVar2 + 0x10) = param_4;
  *(undefined4 *)(lVar2 + 0x14) = param_5;
  return param_1;
}



/* Entry: 1096b7364; end: 1096b73ef;  */

void FUN_1096b7364(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  func_0x000107c2acd0(param_1,0x50);
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_DAT_110b00de0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_FUN_110b01d60;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  puVar3 = param_1;
  func_0x000107c2acdc();
  param_1[8] = &PTR_FUN_110b01d60;
  uVar5 = *puVar3;
  param_1[9] = puVar3[1];
  param_1[8] = uVar5;
  if (param_1[9] != 0) {
    piVar4 = (int *)(param_1[9] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[8] = &PTR_FUN_110b04dd8;
  *param_1 = &PTR_FUN_110b04d68;
  return;
}


