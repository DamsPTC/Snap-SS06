/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10747e330; end: 10747e3ab;  */

/* WARNING: Possible PIC construction at 0x00010747e35c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010747e360) */
/* WARNING: Removing unreachable block (ram,0x00010747e388) */
/* WARNING: Removing unreachable block (ram,0x00010747e37c) */
/* WARNING: Removing unreachable block (ram,0x000107480230) */

void FUN_10747e330(void)

{
  undefined1 auStack_70 [80];
  
  func_0x00010747fe5c();
  func_0x00010747fe04();
  func_0x00010747d884(auStack_70);
  func_0x00010747ff48();
  func_0x00010747fe5c();
  func_0x000104c2f1f0();
  func_0x00010748012c();
  return;
}



/* Entry: 10747e3ac; end: 10747e3f7;  */

void FUN_10747e3ac(void)

{
  func_0x00010747e3c4();
  return;
}



/* Entry: 10747e3f8; end: 10747e52b;  */

undefined1  [16] FUN_10747e3f8(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x00010747e480(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x000107480164(alStack_50);
    func_0x00010747e4e8();
    FUN_10747e52c(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
    alStack_50[0] = 0;
    func_0x00010747e554(alStack_50);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10747e52c; end: 10747e573;  */

void FUN_10747e52c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010747fde8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010747fe70();
  func_0x000107480010();
  return;
}



/* Entry: 10747e574; end: 10747e58b;  */

void FUN_10747e574(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010748011c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x0001074801f8();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10747e58c; end: 10747e5bf;  */

void FUN_10747e58c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010748011c();
  if ((bool)in_ZR) {
    func_0x0001074801f8();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10747e5c0; end: 10747e677;  */

void FUN_10747e5c0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = param_1 + 1;
  puVar4 = puVar3;
  puVar5 = puVar3;
  while (puVar6 = (undefined8 *)*puVar4, puVar6 != (undefined8 *)0x0) {
    iVar2 = (int)puVar6 + 0x20;
    func_0x00010748007c();
    lVar1 = 8;
    if (iVar2 == 0) {
      lVar1 = 0;
    }
    puVar4 = (undefined8 *)((long)puVar6 + lVar1);
    if (iVar2 == 0) {
      puVar5 = puVar6;
    }
  }
  if ((puVar3 != puVar5) && (func_0x000104c2fc44(param_2,puVar5 + 4), (param_2 & 1) == 0)) {
    puVar3 = puVar5;
    func_0x00010002c7d4();
    if ((undefined8 *)*param_1 == puVar5) {
      *param_1 = puVar3;
    }
    param_1[2] = param_1[2] + -1;
    func_0x00010530d618(param_1[1],puVar5);
    func_0x0001074801f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 10747e678; end: 10747e7b7;  */

void FUN_10747e678(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000104c2fe00();
  lVar4 = param_3[1];
  uVar5 = *param_3;
  *(undefined8 *)(param_1 + 0x40) = param_3[1];
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10747e7b8; end: 10747e7df;  */

long FUN_10747e7b8(long param_1)

{
  FUN_10747e7e0();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10747e7e0; end: 10747e83b;  */

void FUN_10747e7e0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10747e83c; end: 10747e84f;  */

void FUN_10747e83c(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = (long *)(long)((float)param_2 / *(float *)(param_1 + 4));
  plVar3 = param_1;
  plVar5 = plVar4;
  if ((long)plVar4 - 1U == 0) {
    plVar4 = (long *)0x2;
  }
  else if (((ulong)plVar4 & (long)plVar4 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = plVar4;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= plVar4;
  if (plVar4 <= plVar9) {
    if (!bVar2) {
      func_0x0001074800e8();
      if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
        func_0x000107480054();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (plVar4 <= plVar3) {
        plVar4 = plVar3;
      }
      if (plVar4 < plVar9) goto LAB_10747e898;
    }
    return;
  }
LAB_10747e898:
  func_0x000107480020();
  if (plVar5 == (long *)0x0) {
    FUN_10747e9e4(plVar3);
    plVar3[1] = 0;
  }
  else {
    plVar4 = plVar3 + 1;
    FUN_10747e9fc(plVar4);
    FUN_10747e9e4(plVar3,plVar4);
    plVar3[1] = (long)plVar5;
    lVar6 = *plVar3;
    for (plVar4 = (long *)0x0; plVar5 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar4 * 8) = 0;
    }
    plVar4 = (long *)plVar3[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar7 = (long)plVar5 - 1;
      uVar1 = 0;
      if (plVar5 != (long *)0x0) {
        uVar1 = (ulong)plVar9 / (ulong)plVar5;
      }
      plVar8 = plVar9;
      if (plVar5 <= plVar9) {
        plVar8 = (long *)((long)plVar9 - uVar1 * (long)plVar5);
      }
      if (((ulong)plVar5 & uVar7) == 0) {
        plVar8 = (long *)((ulong)plVar9 & uVar7);
      }
      *(long **)(lVar6 + (long)plVar8 * 8) = plVar3 + 2;
      while (plVar3 = plVar4, plVar4 = (long *)*plVar3, plVar4 != (long *)0x0) {
        plVar9 = (long *)plVar4[1];
        if (((ulong)plVar5 & uVar7) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar7);
        }
        else if (plVar5 <= plVar9) {
          uVar1 = 0;
          if (plVar5 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar5;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar5);
        }
        if (plVar9 != plVar8) {
          if (*(long *)(lVar6 + (long)plVar9 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar9 * 8) = plVar3;
            plVar8 = plVar9;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(lVar6 + (long)plVar9 * 8);
            **(long **)(lVar6 + (long)plVar9 * 8) = (long)plVar4;
            plVar4 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10747e850; end: 10747e8e7;  */

void FUN_10747e850(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (param_2 <= plVar9) {
    if (!bVar2) {
      func_0x0001074800e8();
      if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
        func_0x000107480054();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar9) goto LAB_10747e898;
    }
    return;
  }
LAB_10747e898:
  func_0x000107480020();
  if (plVar4 == (long *)0x0) {
    FUN_10747e9e4(plVar3);
    plVar3[1] = 0;
  }
  else {
    plVar9 = plVar3 + 1;
    FUN_10747e9fc(plVar9);
    FUN_10747e9e4(plVar3,plVar9);
    plVar3[1] = (long)plVar4;
    lVar5 = *plVar3;
    for (plVar9 = (long *)0x0; plVar4 != plVar9; plVar9 = (long *)((long)plVar9 + 1)) {
      *(undefined8 *)(lVar5 + (long)plVar9 * 8) = 0;
    }
    plVar9 = (long *)plVar3[2];
    if (plVar9 != (long *)0x0) {
      plVar7 = (long *)plVar9[1];
      uVar6 = (long)plVar4 - 1;
      uVar1 = 0;
      if (plVar4 != (long *)0x0) {
        uVar1 = (ulong)plVar7 / (ulong)plVar4;
      }
      plVar8 = plVar7;
      if (plVar4 <= plVar7) {
        plVar8 = (long *)((long)plVar7 - uVar1 * (long)plVar4);
      }
      if (((ulong)plVar4 & uVar6) == 0) {
        plVar8 = (long *)((ulong)plVar7 & uVar6);
      }
      *(long **)(lVar5 + (long)plVar8 * 8) = plVar3 + 2;
      while (plVar3 = plVar9, plVar9 = (long *)*plVar3, plVar9 != (long *)0x0) {
        plVar7 = (long *)plVar9[1];
        if (((ulong)plVar4 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (plVar4 <= plVar7) {
          uVar1 = 0;
          if (plVar4 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plVar4;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar4);
        }
        if (plVar7 != plVar8) {
          if (*(long *)(lVar5 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar7 * 8) = plVar3;
            plVar8 = plVar7;
          }
          else {
            *plVar3 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar5 + (long)plVar7 * 8);
            **(long **)(lVar5 + (long)plVar7 * 8) = (long)plVar9;
            plVar9 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10747e8e8; end: 10747e9e3;  */

void FUN_10747e8e8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10747e9e4(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_10747e9fc(plVar3);
    FUN_10747e9e4(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10747e9e4; end: 10747e9fb;  */

void FUN_10747e9e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10747e9fc; end: 10747ea4f;  */

void FUN_10747e9fc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010747ea30();
  return;
}



/* Entry: 10747ea50; end: 10747ec4b;  */

undefined1  [16] FUN_10747ea50(ulong param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x19;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  func_0x000107480004();
  uVar8 = unaff_x19[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      unaff_x26 = uVar9 & param_1;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_1 - uVar8) < 0;
      unaff_x26 = param_1;
      if (uVar8 <= param_1) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = param_1 / uVar8;
        }
        unaff_x26 = param_1 - uVar4 * uVar8;
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x26 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10747eb14;
          uVar4 = plVar7[1];
          in_NG = (long)(uVar4 - param_1) < 0;
          if (uVar4 != param_1) break;
          plVar2 = plVar7 + 2;
          func_0x000104c32db4(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10747ec30;
          }
        }
        if ((uVar8 & uVar9) == 0) {
          uVar4 = uVar4 & uVar9;
        }
        else if (uVar8 <= uVar4) {
          uVar1 = 0;
          if (uVar8 != 0) {
            uVar1 = uVar4 / uVar8;
          }
          uVar4 = uVar4 - uVar1 * uVar8;
        }
        in_NG = (long)(uVar4 - unaff_x26) < 0;
      } while (uVar4 == unaff_x26);
    }
  }
LAB_10747eb14:
  plVar2 = unaff_x19 + 2;
  plVar7 = (long *)0x60;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_1;
  func_0x000104c2fe00(plVar7 + 2,param_3);
  lVar5 = *param_4;
  plVar7[10] = param_4[1];
  plVar7[9] = lVar5;
  *(int *)(plVar7 + 0xb) = (int)param_4[2];
  func_0x00010747ffcc();
  if ((uVar8 == 0) || (func_0x000107480270(), (bool)in_NG)) {
    func_0x00010747fe14(uVar8 << 1);
    FUN_10747e850();
    uVar8 = unaff_x19[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x26 = uVar8 - 1 & param_1;
    }
    else {
      unaff_x26 = param_1;
      if (uVar8 <= param_1) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = param_1 / uVar8;
        }
        unaff_x26 = param_1 - uVar9 * uVar8;
      }
    }
  }
  lVar5 = *unaff_x19;
  plVar6 = *(long **)(lVar5 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar7 = *plVar2;
    *plVar2 = (long)plVar7;
    *(long **)(lVar5 + unaff_x26 * 8) = plVar2;
    if (*plVar7 != 0) {
      uVar9 = *(ulong *)(*plVar7 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar4 * uVar8;
      }
      *(long **)(lVar5 + uVar9 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar6;
    *plVar6 = (long)plVar7;
  }
  func_0x00010747febc();
  FUN_10747ec4c();
  uVar3 = 1;
LAB_10747ec30:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10747ec4c; end: 10747ec6b;  */

void FUN_10747ec4c(void)

{
  func_0x000107480194();
  FUN_10747ec6c();
  return;
}



/* Entry: 10747ec6c; end: 10747ec83;  */

void FUN_10747ec6c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010748011c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000104c2f714(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10747ec84; end: 10747ecbb;  */

void FUN_10747ec84(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010748011c();
  if ((bool)in_ZR) {
    func_0x000104c2f714(unaff_x19 + 0x10);
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10747ecbc; end: 10747ed9b;  */

long FUN_10747ecbc(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *unaff_x19;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  uint6 uVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined8 uVar14;
  byte bVar20;
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  uVar5 = (undefined4)param_3;
  func_0x00010747ff54();
  lVar8 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar9 = *param_1;
  uVar7 = uVar9 >> 0xc ^ CONCAT44(uVar6,uVar5) >> 7;
  bVar3 = (byte)uVar5;
  uVar13 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar7 = uVar7 & uVar2;
    uVar14 = *(undefined8 *)(uVar9 + uVar7);
    cVar15 = (char)((ulong)uVar14 >> 8);
    cVar16 = (char)((ulong)uVar14 >> 0x10);
    cVar17 = (char)((ulong)uVar14 >> 0x18);
    cVar18 = (char)((ulong)uVar14 >> 0x20);
    cVar19 = (char)((ulong)uVar14 >> 0x28);
    bVar12 = (byte)((ulong)uVar14 >> 0x30);
    bVar20 = (byte)((ulong)uVar14 >> 0x38);
    for (uVar10 = CONCAT17(-(bVar20 == (bVar3 & 0x7f)),
                           CONCAT16(-(bVar12 == (bVar3 & 0x7f)),
                                    CONCAT15(-(cVar19 == (char)(uVar13 >> 0x28)),
                                             CONCAT14(-(cVar18 == (char)(uVar13 >> 0x20)),
                                                      CONCAT13(-(cVar17 == (char)(uVar13 >> 0x18)),
                                                               CONCAT12(-(cVar16 ==
                                                                         (char)(uVar13 >> 0x10)),
                                                                        CONCAT11(-(cVar15 ==
                                                                                  (char)(uVar13 >> 8
                                                                                        )),
                                                                                 -((char)uVar14 ==
                                                                                  (char)uVar13))))))
                                   )) & 0x8080808080808080; uVar10 != 0;
        uVar10 = uVar10 - 1 & uVar10) {
      uVar11 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar7 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar2;
      iVar4 = (int)uVar1 + (int)uVar11 * 0x80;
      func_0x000104c32db4();
      if (iVar4 != 0) {
        return *unaff_x19 + uVar11;
      }
    }
    bVar12 = NEON_umaxv(CONCAT17(-(bVar20 == 0x80),
                                 CONCAT16(-(bVar12 == 0x80),
                                          CONCAT15(-(cVar19 == -0x80),
                                                   CONCAT14(-(cVar18 == -0x80),
                                                            CONCAT13(-(cVar17 == -0x80),
                                                                     CONCAT12(-(cVar16 == -0x80),
                                                                              CONCAT11(-(cVar15 ==
                                                                                        -0x80),-((
                                                  char)uVar14 == -0x80)))))))),1);
    if ((bVar12 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar7 = lVar8 + uVar7;
  }
  return 0;
}



/* Entry: 10747ed9c; end: 10747ee33;  */

long FUN_10747ed9c(long param_1)

{
  long unaff_x19;
  int unaff_w20;
  
  func_0x00010747ff54();
  func_0x00010747ede8();
  if ((unaff_x19 + 8 == param_1) || (func_0x000104c2fc44(), unaff_w20 != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 10747ee34; end: 10747ee63;  */

undefined8 FUN_10747ee34(undefined8 param_1,long param_2)

{
  FUN_10747ee64();
  func_0x00010747d350(param_2 + 0x20);
  func_0x0001074800c8();
  return param_1;
}



/* Entry: 10747ee64; end: 10747ee93;  */

void FUN_10747ee64(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010747fe7c();
  func_0x00010748013c();
  if ((bool)in_ZR) {
    *unaff_x21 = unaff_x20;
  }
  func_0x00010747fe34();
  return;
}



/* Entry: 10747ee94; end: 10747eecf;  */

bool FUN_10747ee94(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10747ed9c();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x000107480170();
    FUN_10747ee34();
  }
  return bVar1;
}



/* Entry: 10747eed0; end: 10747eed7;  */

void FUN_10747eed0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10747eed8; end: 10747ef03;  */

void FUN_10747eed8(long param_1)

{
  FUN_10747ef04();
  if (param_1 != 0) {
    func_0x000107480170();
    FUN_10747efd8();
  }
  return;
}



/* Entry: 10747ef04; end: 10747efd7;  */

long FUN_10747ef04(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10747efd8; end: 10747f007;  */

undefined8 FUN_10747efd8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10747f008(auStack_38);
  FUN_10747ec4c(auStack_38);
  return uVar1;
}



/* Entry: 10747f008; end: 10747f123;  */

void FUN_10747f008(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10747f0bc;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10747f0bc;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10747f0bc:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10747f124; end: 10747f163;  */

void FUN_10747f124(void)

{
  func_0x00010747ff54();
  FUN_10747f164();
  return;
}



/* Entry: 10747f164; end: 10747f18f;  */

long FUN_10747f164(undefined8 param_1,ulong *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(ulong *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10747f190; end: 10747f1cb;  */

long FUN_10747f190(long param_1,long param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_10747f1cc(param_1,*(undefined8 *)(param_2 + 0x10),0);
  }
  return param_1;
}



/* Entry: 10747f1cc; end: 10747f27f;  */

void FUN_10747f1cc(long param_1)

{
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x00010747ff9c();
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10747f280();
    for (; (unaff_x19 != (long *)0x0 && (unaff_x21 != unaff_x20)); unaff_x21 = (long *)*unaff_x21) {
      FUN_10747f2b0();
      unaff_x19 = (long *)*unaff_x19;
      func_0x0001074800bc();
      func_0x00010747f2dc();
    }
    func_0x0001074800bc();
    func_0x000107470218();
  }
  for (; unaff_x21 != unaff_x20; unaff_x21 = (long *)*unaff_x21) {
    FUN_10747f324();
  }
  return;
}



/* Entry: 10747f280; end: 10747f2af;  */

long FUN_10747f280(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 10747f2b0; end: 10747f323;  */

void FUN_10747f2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107480258();
  func_0x000107262f3c(param_2,param_3);
  *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 10747f324; end: 10747f36f;  */

undefined8 FUN_10747f324(undefined8 param_1)

{
  undefined8 auStack_38 [3];
  
  FUN_10747f748(auStack_38);
  func_0x00010747f2dc(param_1,auStack_38[0]);
  auStack_38[0] = 0;
  func_0x000107480114();
  return param_1;
}



/* Entry: 10747f370; end: 10747f4a7;  */

long * FUN_10747f370(long *param_1)

{
  byte bVar1;
  undefined1 in_NG;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x20;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  func_0x000107480258();
  uVar8 = param_1[1];
  if ((uVar8 == 0) ||
     (func_0x000107480270((float)(param_1[3] + 1),(int)param_1[4],(float)uVar8), (bool)in_NG)) {
    func_0x00010747fe14(uVar8 << 1);
    FUN_10747f57c(param_1);
    uVar8 = param_1[1];
  }
  uVar9 = uVar8 - 1;
  if ((uVar8 & uVar9) == 0) {
    uVar10 = uVar9 & unaff_x20;
  }
  else {
    uVar10 = unaff_x20;
    if (uVar8 <= unaff_x20) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = unaff_x20 / uVar8;
      }
      uVar10 = unaff_x20 - uVar10 * uVar8;
    }
  }
  plVar7 = *(long **)(*param_1 + uVar10 * 8);
  if (plVar7 != (long *)0x0) {
    uVar11 = 0;
    bVar1 = 0;
    for (; lVar4 = *plVar7, lVar4 != 0; plVar7 = (long *)*plVar7) {
      uVar5 = *(ulong *)(lVar4 + 8);
      if ((uVar8 & uVar9) == 0) {
        uVar6 = uVar5 & uVar9;
      }
      else {
        uVar6 = uVar5;
        if (uVar8 <= uVar5) {
          uVar6 = 0;
          if (uVar8 != 0) {
            uVar6 = uVar5 / uVar8;
          }
          uVar6 = uVar5 - uVar6 * uVar8;
        }
      }
      if (uVar6 != uVar10) {
        return plVar7;
      }
      if (uVar5 == unaff_x20) {
        uVar3 = (int)lVar4 + 0x10;
        func_0x000104c32db4();
      }
      else {
        uVar3 = 0;
      }
      bVar2 = uVar3 != uVar11;
      if ((bool)(bVar1 & bVar2)) {
        return plVar7;
      }
      uVar11 = uVar11 | bVar2;
      bVar1 = bVar1 | bVar2;
    }
  }
  return plVar7;
}



/* Entry: 10747f4a8; end: 10747f57b;  */

void FUN_10747f4a8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  uVar1 = param_1[1];
  uVar2 = param_2[1];
  uVar3 = uVar1 - 1;
  if ((uVar1 & uVar3) == 0) {
    uVar2 = uVar3 & uVar2;
  }
  else if (uVar1 <= uVar2) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    uVar2 = uVar2 - uVar4 * uVar1;
  }
  if (param_3 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    lVar5 = *param_1;
    *(long **)(lVar5 + uVar2 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar2 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar2 = uVar2 & uVar3;
      }
      else if (uVar1 <= uVar2) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = uVar2 - uVar3 * uVar1;
      }
      *(long **)(lVar5 + uVar2 * 8) = param_2;
    }
  }
  else {
    *param_2 = *param_3;
    *param_3 = (long)param_2;
    if (*param_2 != 0) {
      uVar4 = *(ulong *)(*param_2 + 8);
      if ((uVar1 & uVar3) == 0) {
        uVar4 = uVar4 & uVar3;
      }
      else if (uVar1 <= uVar4) {
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar4 / uVar1;
        }
        uVar4 = uVar4 - uVar3 * uVar1;
      }
      if (uVar4 != uVar2) {
        *(long **)(*param_1 + uVar4 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10747f57c; end: 10747f613;  */

void FUN_10747f57c(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (param_2 <= plVar9) {
    if (!bVar2) {
      func_0x0001074800e8();
      if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
        func_0x000107480054();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (param_2 <= plVar3) {
        param_2 = plVar3;
      }
      if (param_2 < plVar9) goto LAB_10747f5c4;
    }
    return;
  }
LAB_10747f5c4:
  func_0x000107480020();
  if (plVar5 == (long *)0x0) {
    FUN_1073de718(plVar3);
    plVar3[1] = 0;
  }
  else {
    FUN_1073de730(plVar3 + 1);
    func_0x000107480170();
    FUN_1073de718();
    plVar3[1] = (long)plVar5;
    lVar6 = *plVar3;
    for (plVar9 = (long *)0x0; plVar5 != plVar9; plVar9 = (long *)((long)plVar9 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar9 * 8) = 0;
    }
    plVar9 = (long *)plVar3[2];
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)plVar9[1];
      uVar10 = (long)plVar5 - 1;
      if (((ulong)plVar5 & uVar10) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar10);
      }
      else if (plVar5 <= plVar11) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar11 / (ulong)plVar5;
        }
        plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar5);
      }
      *(long **)(lVar6 + (long)plVar11 * 8) = plVar3 + 2;
      while (plVar12 = plVar9, plVar9 = (long *)*plVar12, plVar9 != (long *)0x0) {
        plVar13 = (long *)plVar9[1];
        if (((ulong)plVar5 & uVar10) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar10);
        }
        else if (plVar5 <= plVar13) {
          uVar1 = 0;
          if (plVar5 != (long *)0x0) {
            uVar1 = (ulong)plVar13 / (ulong)plVar5;
          }
          plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar5);
        }
        if (plVar13 != plVar11) {
          plVar8 = plVar9;
          if (*(long *)(lVar6 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar13 * 8) = plVar12;
            plVar11 = plVar13;
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)0x0;
              if (*plVar7 == 0) break;
              plVar4 = plVar9 + 2;
              func_0x000104c32db4(plVar4,*plVar7 + 0x10);
              plVar8 = (long *)*plVar7;
            } while (((ulong)plVar4 & 1) != 0);
            *plVar12 = (long)plVar8;
            lVar6 = *plVar3;
            *plVar7 = **(long **)(lVar6 + (long)plVar13 * 8);
            **(undefined8 **)(lVar6 + (long)plVar13 * 8) = plVar9;
            plVar9 = plVar12;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10747f614; end: 10747f747;  */

void FUN_10747f614(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    FUN_1073de718(param_1);
    param_1[1] = 0;
  }
  else {
    FUN_1073de730(param_1 + 1);
    func_0x000107480170();
    FUN_1073de718();
    param_1[1] = param_2;
    lVar3 = *param_1;
    for (uVar6 = 0; param_2 != uVar6; uVar6 = uVar6 + 1) {
      *(undefined8 *)(lVar3 + uVar6 * 8) = 0;
    }
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      uVar6 = plVar8[1];
      uVar7 = param_2 - 1;
      if ((param_2 & uVar7) == 0) {
        uVar6 = uVar6 & uVar7;
      }
      else if (param_2 <= uVar6) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar10 * param_2;
      }
      *(long **)(lVar3 + uVar6 * 8) = param_1 + 2;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        if (uVar10 != uVar6) {
          plVar5 = plVar8;
          if (*(long *)(lVar3 + uVar10 * 8) == 0) {
            *(long **)(lVar3 + uVar10 * 8) = plVar9;
            uVar6 = uVar10;
          }
          else {
            do {
              plVar4 = plVar5;
              plVar5 = (long *)0x0;
              if (*plVar4 == 0) break;
              plVar2 = plVar8 + 2;
              func_0x000104c32db4(plVar2,*plVar4 + 0x10);
              plVar5 = (long *)*plVar4;
            } while (((ulong)plVar2 & 1) != 0);
            *plVar9 = (long)plVar5;
            lVar3 = *param_1;
            *plVar4 = **(long **)(lVar3 + uVar10 * 8);
            **(undefined8 **)(lVar3 + uVar10 * 8) = plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10747f748; end: 10747f7a3;  */

void FUN_10747f748(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  long unaff_x20;
  
  func_0x00010747fe5c();
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *extraout_x8 = puVar1;
  extraout_x8[1] = param_1 + 0x10;
  extraout_x8[2] = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1074701d0(puVar1 + 2);
  lVar2 = unaff_x20 + 0x18;
  func_0x00010726364c(lVar2,puVar1 + 2);
  puVar1[1] = lVar2;
  return;
}



/* Entry: 10747f7a4; end: 10747f7f3;  */

long * FUN_10747f7a4(long param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, (ulong)plVar3[4] <= *param_3) {
        if (*param_3 <= (ulong)plVar3[4]) goto LAB_10747f7ec;
        plVar1 = plVar3 + 1;
        plVar3 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_10747f7ec;
      }
      plVar4 = (long *)*plVar3;
      plVar1 = plVar3;
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_10747f7ec:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 10747f7f4; end: 10747f83b;  */

void FUN_10747f7f4(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010747fde8();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x00010747fe70();
  func_0x000107480010();
  return;
}



/* Entry: 10747f83c; end: 10747f853;  */

void FUN_10747f83c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010748011c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107480238();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10747f854; end: 10747f887;  */

void FUN_10747f854(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010748011c();
  if ((bool)in_ZR) {
    func_0x000107480238();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10747f888; end: 10747f8a7;  */

void FUN_10747f888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10747f8a8(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10747f8a8; end: 10747f93f;  */

undefined1  [16] FUN_10747f8a8(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10747f7a4(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x0001074800bc(alStack_60);
    FUN_10747f940();
    FUN_10747f7f4(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
    alStack_60[0] = 0;
    func_0x00010747f81c(alStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10747f940; end: 10747f987;  */

undefined8 * FUN_10747f940(long param_1)

{
  long lVar1;
  long *extraout_x8;
  undefined8 *unaff_x20;
  
  func_0x000107480258();
  lVar1 = param_1 + 8;
  func_0x000107480038();
  *extraout_x8 = param_1;
  extraout_x8[1] = lVar1;
  extraout_x8[2] = 1;
  *(undefined8 *)(param_1 + 0x20) = *unaff_x20;
  func_0x00010747f9b4(param_1 + 0x28);
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 10747f988; end: 10747f9d7;  */

undefined8 * FUN_10747f988(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  func_0x00010747f9b4(param_1 + 1,param_3);
  return param_1;
}



/* Entry: 10747f9d8; end: 10747fa47;  */

void FUN_10747f9d8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10747fa48; end: 10747faaf;  */

bool FUN_10747fa48(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10747f124();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x000107480170();
    func_0x00010747fa84();
  }
  return bVar1;
}



/* Entry: 10747fab0; end: 10747fadf;  */

void FUN_10747fab0(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010747fe7c();
  func_0x00010748013c();
  if ((bool)in_ZR) {
    *unaff_x21 = unaff_x20;
  }
  func_0x00010747fe34();
  return;
}



/* Entry: 10747fae0; end: 10747fb83;  */

bool FUN_10747fae0(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010747fb1c();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x000107480170();
    func_0x00010747fb5c();
  }
  return bVar1;
}



/* Entry: 10747fb84; end: 10747fbaf;  */

long FUN_10747fb84(undefined8 param_1,ulong *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(ulong *)(param_3 + 0x20)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 10747fbb0; end: 10747fbdf;  */

void FUN_10747fbb0(void)

{
  undefined1 in_ZR;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x00010747fe7c();
  func_0x00010748013c();
  if ((bool)in_ZR) {
    *unaff_x21 = unaff_x20;
  }
  func_0x00010747fe34();
  return;
}



/* Entry: 10747fbe0; end: 10747fc0b;  */

undefined1  [16] FUN_10747fbe0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10747d6bc(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10747fc0c; end: 10747fcf7;  */

void FUN_10747fc0c(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  
  func_0x00010747fe5c();
  *param_1 = 0;
  *unaff_x19 = 0;
  FUN_10747e9e4();
  func_0x000107480164();
  FUN_10747e9e4();
  lVar3 = unaff_x20[2];
  lVar4 = unaff_x20[1];
  lVar6 = unaff_x19[2];
  unaff_x20[1] = unaff_x19[1];
  unaff_x20[2] = lVar6;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar3;
  lVar4 = unaff_x20[3];
  unaff_x20[3] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  lVar3 = unaff_x20[4];
  *(int *)(unaff_x20 + 4) = (int)unaff_x19[4];
  *(int *)(unaff_x19 + 4) = (int)lVar3;
  if (unaff_x20[3] != 0) {
    uVar1 = unaff_x20[1];
    uVar5 = *(ulong *)(unaff_x20[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*unaff_x20 + uVar5 * 8) = unaff_x20 + 2;
  }
  if (lVar4 != 0) {
    uVar1 = unaff_x19[1];
    uVar5 = *(ulong *)(unaff_x19[2] + 8);
    if ((uVar1 & uVar1 - 1) == 0) {
      uVar5 = uVar1 - 1 & uVar5;
    }
    else if (uVar1 <= uVar5) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      uVar5 = uVar5 - uVar2 * uVar1;
    }
    *(long **)(*unaff_x19 + uVar5 * 8) = unaff_x19 + 2;
  }
  return;
}



/* Entry: 10747fcf8; end: 10747fdb7;  */

void FUN_10747fcf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  func_0x00010747e77c(param_1,*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10747fdb8; end: 1074802fb;  */

void FUN_10747fdb8(void)

{
  return;
}



/* Entry: 1074802fc; end: 107480327;  */

long FUN_1074802fc(long param_1)

{
  func_0x0001074809c0(param_1 + 0x98);
  func_0x00010748097c(param_1 + 0x28);
  return param_1;
}



/* Entry: 107480328; end: 1074807ff;  */

void FUN_107480328(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined4 uStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_158;
  undefined1 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined1 auStack_c0 [112];
  
  if ((char)param_1[0x28] != '\x01') {
    return;
  }
  if ((char)param_1[0x14] != '\x01') goto LAB_107480614;
  puVar9 = param_1 + 0x12;
  func_0x00010725d8e8();
  lVar13 = *(long *)(param_1 + 2);
  fVar16 = (float)(param_2 - *(long *)puVar9);
  iVar4 = 0;
  if (lVar13 != 0) {
    iVar4 = (int)((param_2 - *(long *)puVar9) / lVar13);
  }
  uVar8 = (float)param_1[4] * (float)lVar13 == fVar16;
  if (fVar16 <= (float)param_1[4] * (float)lVar13) {
    param_1[0x17] = 0;
    func_0x000107480cc4();
    uVar7 = 0;
    if ((bool)uVar8) {
      uVar1 = param_1[0x16] + 1;
      param_1[0x16] = uVar1;
      uVar8 = uVar1 == param_1[1];
      uVar7 = uVar8;
      if (param_1[1] < uVar1) {
        func_0x000107480cac();
        lVar13 = *(long *)(param_1 + 0x1e);
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x000107480c18(0x89);
        FUN_1073c89ec();
        func_0x00010729d56c(&puStack_130,"api",puVar9);
        func_0x000107480c94();
        func_0x000107480c84();
        func_0x000107480c8c(*(undefined8 *)(param_1 + 0x10));
        puVar11 = *(undefined8 **)(param_1 + 6);
        puStack_1a0 = (undefined8 *)((lVar13 - lVar3) / 1000);
        puStack_130 = (undefined8 *)*puVar11;
        uStack_128 = (undefined8 *)CONCAT44(uStack_128._4_4_,3);
        FUN_10743f9dc(puVar11,auStack_c0,&puStack_1a0,&puStack_130,7);
        puStack_1a0._0_4_ = 0x8a;
        uStack_188 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        ppuStack_180 = &PTR_DAT_110996720;
        uStack_178 = 0;
        uStack_160 = 0x8a;
        uStack_158 = 0;
        uStack_154 = 1;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_150 = 0;
        FUN_1073c89ec();
        ppuVar10 = &puStack_1a0;
        func_0x00010729d56c(ppuVar10,"api",puVar11);
        func_0x00010726e6c0(&puStack_130,ppuVar10);
        func_0x000107262330(&puStack_1a0);
        func_0x000107480a18(*(undefined8 *)(param_1 + 0x10),&puStack_130);
        uVar15 = *(undefined8 *)(param_1 + 6);
        func_0x000107480cac();
        puStack_1a0 = (undefined8 *)CONCAT44(puStack_1a0._4_4_,param_1[0x22]);
        puStack_198 = (undefined8 *)CONCAT44(puStack_198._4_4_,1);
        uStack_1b0 = **(undefined8 **)(param_1 + 6);
        uStack_1a8 = 3;
        FUN_10743fa44(uVar15,&puStack_130,&puStack_1a0,&uStack_1b0,7);
        func_0x000107480cc4();
        if ((bool)uVar8) {
          *(undefined1 *)(param_1 + 0x24) = 0;
        }
        func_0x000107480c84();
        goto LAB_10748056c;
      }
    }
  }
  else {
    *(long *)(param_1 + 0x1e) = param_2;
    param_1[0x16] = 0;
    func_0x000107480cc4();
    if ((bool)uVar8) {
      param_1[0x19] = param_1[0x19] + iVar4;
      func_0x000107480cac();
      param_1[0x22] = param_1[0x22] + iVar4;
      *(byte *)(param_1 + 0x1a) = *(byte *)((long)param_1 + 0xa1) | (byte)param_1[0x1a];
      func_0x000107480c18(0x88);
      func_0x000107480c9c();
      func_0x000107480c94();
      func_0x000107480c84();
      func_0x000107480c8c(*(undefined8 *)(param_1 + 0x10));
      puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,1);
      uStack_128 = (undefined8 *)((ulong)uStack_128._4_4_ << 0x20);
      func_0x000107480c54(*(undefined8 *)(param_1 + 6));
      func_0x000107480c68();
      FUN_10743fa9c();
LAB_10748056c:
      func_0x000107480cb4();
      uVar7 = uVar8;
    }
    else {
      if (param_1[0x17] == 0) {
        *(long *)(param_1 + 0x1c) = param_2;
      }
      uVar1 = param_1[0x17] + iVar4;
      param_1[0x17] = uVar1;
      uVar2 = *param_1;
      uVar7 = uVar1 == uVar2;
      if (uVar2 < uVar1) {
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x1c);
        param_1[0x22] = uVar1;
        *(undefined1 *)(param_1 + 0x24) = 1;
        param_1[0x19] = param_1[0x19] + iVar4;
        *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((long)param_1 + 0xa1);
      }
    }
  }
  param_1[0x18] = param_1[0x18] + iVar4;
  func_0x000107480cc4();
  if ((bool)uVar7) {
    func_0x000107480c18(0x87);
    func_0x000107480c9c();
    func_0x000107480c94();
    func_0x000107480c84();
    func_0x000107480c8c(*(undefined8 *)(param_1 + 0x10));
    puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,1);
    uStack_128 = (undefined8 *)((ulong)uStack_128 & 0xffffffff00000000);
    func_0x000107480c54(*(undefined8 *)(param_1 + 6));
    func_0x000107480c68();
    FUN_10743fa9c();
    func_0x000107480cb4();
  }
LAB_107480614:
  if ((param_1[0x14] & 1) == 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  puVar9 = param_1 + 0x18;
  *(long *)(param_1 + 0x12) = param_2;
  if (299 < *puVar9) {
    func_0x000107480c18(0x8b);
    func_0x0001072bbe40(&puStack_130,&UNK_10f41599a,(char)param_1[0x1a]);
    func_0x000107480c94();
    func_0x000107480c84();
    func_0x000107480c8c(*(undefined8 *)(param_1 + 0x10));
    fVar16 = (float)NEON_ucvtf(param_1[0x18]);
    puStack_130 = (undefined8 *)CONCAT44(puStack_130._4_4_,(float)(param_1[0x19] * 100) / fVar16);
    uStack_128 = (undefined8 *)CONCAT44(uStack_128._4_4_,4);
    func_0x000107480c54(*(undefined8 *)(param_1 + 6));
    func_0x000107480c68();
    FUN_10743fa44();
    uVar1 = param_1[0x18];
    uVar2 = param_1[0x19];
    puVar11 = (undefined8 *)0x40;
    __Znwm();
    plVar14 = puVar11 + 1;
    *plVar14 = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_FUN_1109b3a00;
    puVar11[7] = 0;
    puStack_1a0 = puVar11 + 3;
    *puStack_1a0 = &PTR_DAT_110cef500;
    puVar11[4] = &PTR_DAT_110cef568;
    puVar11[5] = 0;
    puVar11[6] = ((double)uVar2 * 100.0) / (double)uVar1;
    *(undefined1 *)(puVar11 + 7) = 1;
    *(ushort *)((long)puVar11 + 0x29) = (byte)param_1[0x1a] | 0x100;
    puVar12 = *(undefined8 **)(param_1 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *plVar14 = *plVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puStack_198 = puVar11;
    puStack_130 = puStack_1a0;
    uStack_128 = puVar11;
    (**(code **)*puVar12)(puVar12,&puStack_1a0);
    func_0x000105979594(&puStack_1a0);
    *(undefined1 *)(param_1 + 0x1a) = 0;
    puVar9[0] = 0;
    puVar9[1] = 0;
    FUN_107480a6c(&puStack_130);
    func_0x000107480cb4();
  }
  return;
}



/* Entry: 107480800; end: 107480817;  */

void FUN_107480800(long param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if (((param_2 & 1) == 0) && ((*(byte *)(param_1 + 0xa0) & 1) != 0)) {
    if (*(char *)(param_1 + 0x50) == '\x01') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0x90) == '\x01') {
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
  *(char *)(param_1 + 0xa0) = (char)param_2;
  return;
}



/* Entry: 107480818; end: 10748084f;  */

void FUN_107480818(long param_1,byte param_2)

{
  if (((param_2 & 1) == 0) && ((*(byte *)(param_1 + 0xa0) & 1) != 0)) {
    if (*(char *)(param_1 + 0x50) == '\x01') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (*(char *)(param_1 + 0x90) == '\x01') {
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
  *(byte *)(param_1 + 0xa0) = param_2;
  return;
}



/* Entry: 107480850; end: 1074808b3;  */

undefined1 * FUN_107480850(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107480a94(auStack_48);
  puVar2 = param_1;
  FUN_107480aec(auStack_48);
  puVar1 = auStack_48;
  FUN_10748097c();
  func_0x000107480cd0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  bVar3 = 1;
  if ((((puVar2[0x5c] & 1) == 0) && ((puVar2[0x5d] & 1) == 0)) && ((puVar2[0x5e] & 1) == 0)) {
    bVar3 = puVar2[0x5f];
  }
  puVar1[0xa1] = bVar3 & 1;
  return puVar1;
}



/* Entry: 1074808b4; end: 1074808e7;  */

void FUN_1074808b4(long param_1,long param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((((*(byte *)(param_2 + 0x5c) & 1) == 0) && ((*(byte *)(param_2 + 0x5d) & 1) == 0)) &&
     ((*(byte *)(param_2 + 0x5e) & 1) == 0)) {
    bVar1 = *(byte *)(param_2 + 0x5f);
  }
  *(byte *)(param_1 + 0xa1) = bVar1 & 1;
  return;
}



/* Entry: 1074808e8; end: 10748090b;  */

void FUN_1074808e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109b3970;
  return;
}



/* Entry: 10748090c; end: 107480937;  */

void FUN_10748090c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b3970;
  return;
}



/* Entry: 107480938; end: 10748096f;  */

long FUN_107480938(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b39e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107480970; end: 10748097b;  */

undefined ** FUN_107480970(void)

{
  return &PTR_DAT_1109b39e0;
}



/* Entry: 10748097c; end: 1074809e3;  */

long * FUN_10748097c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1074809e4; end: 1074809fb;  */

void FUN_1074809e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10743fe8c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074809fc; end: 107480a33;  */

void FUN_1074809fc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10743fe8c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107480a34; end: 107480a37;  */

void FUN_107480a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3a00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107480a38; end: 107480a4b;  */

void FUN_107480a38(void)

{
  func_0x000107480a5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107480a4c; end: 107480a6b;  */

void FUN_107480a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107480a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 107480a6c; end: 107480aeb;  */

long FUN_107480a6c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107480aec; end: 107480c17;  */

void FUN_107480aec(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_2 == param_1;
  plVar4 = param_2;
  if (!(bool)uVar1) {
    plVar2 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    plVar4 = param_1;
    if (plVar2 == param_1) {
      uVar1 = plVar5 == param_2;
      if ((bool)uVar1) {
        func_0x000107480ce4();
        (*extraout_x8)();
        func_0x000107480c48(param_1[3]);
        param_1[3] = 0;
        func_0x000107480ce4(param_2[3]);
        (*extraout_x8_00)();
        func_0x000107480c48(param_2[3]);
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        func_0x000107480cbc(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        plVar4 = param_2;
        func_0x000107480ce4();
        func_0x000107480cbc();
        func_0x000107480c48(param_1[3]);
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else {
      uVar1 = plVar5 == param_2;
      if ((bool)uVar1) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        func_0x000107480c48(param_2[3]);
        param_2[3] = param_1[3];
        param_1[3] = (long)param_1;
      }
      else {
        param_1[3] = (long)plVar5;
        param_2[3] = (long)plVar2;
        plVar4 = param_2;
      }
    }
  }
  iVar3 = (int)plVar4;
  func_0x000107480cd0(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return;
}



/* Entry: 107480c18; end: 107480cef;  */

void FUN_107480c18(void)

{
  return;
}



/* Entry: 107480cf0; end: 107480def;  */

undefined8 * FUN_107480cf0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  FUN_107480df0(auStack_40,param_2);
  FUN_1074834d8(auStack_30,auStack_40);
  func_0x0001074e3a1c(param_1,auStack_30);
  FUN_1073ad37c(auStack_30);
  FUN_1074829f4(auStack_40);
  *param_1 = &PTR_FUN_1109b3a50;
  FUN_107480e30(param_1 + 0xc,param_1[3] + 0x1d8);
  lVar1 = 0;
  param_1[0x48] = *param_3;
  do {
    *(undefined1 *)((long)param_1 + lVar1 + 0x248) = 0;
    *(undefined1 *)((long)param_1 + lVar1 + 0x250) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xa0);
  lVar1 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar1 + 0x2e8) = 0;
    *(undefined1 *)((long)param_1 + lVar1 + 0x2f0) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xa0);
  lVar1 = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar1 + 0x388) = 0;
    *(undefined1 *)((long)param_1 + lVar1 + 0x390) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0xa0);
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  return param_1;
}



/* Entry: 107480df0; end: 107480e2f;  */

void FUN_107480df0(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_107483318(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1074829f4(&uStack_30);
  return;
}



/* Entry: 107480e30; end: 107480f9b;  */

void FUN_107480e30(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_378 [56];
  undefined1 auStack_340 [88];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [152];
  undefined1 auStack_248 [192];
  undefined1 auStack_188 [64];
  undefined1 auStack_148 [96];
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [104];
  undefined8 uStack_38;
  
  func_0x000107484180();
  uStack_38 = extraout_x8;
  FUN_107438188(auStack_e8,param_2);
  func_0x00010743b05c(auStack_a0,auStack_e8);
  FUN_1073398d4(auStack_188,param_2 + 0x70);
  func_0x000107483538(auStack_148,auStack_188);
  func_0x00010727d614(auStack_378,param_2 + 0xd8);
  func_0x00010743b0a8(auStack_340,auStack_378);
  FUN_107483560(auStack_2e0,param_2 + 0x140);
  FUN_1074835f0(auStack_248,auStack_2e8);
  FUN_107483614(param_1,auStack_a0,auStack_148,auStack_340,auStack_248);
  func_0x000107482a54(auStack_248);
  func_0x0001072ca37c(auStack_2e0);
  func_0x000107410c2c(auStack_340);
  func_0x000107266a30(auStack_378);
  FUN_107482af4(auStack_148);
  func_0x0001072ca524(auStack_188);
  func_0x0001074843e0();
  FUN_107432d98(auStack_e8);
  func_0x000107484150(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ca37c(auStack_2e0);
  func_0x000107410c2c(auStack_340);
  func_0x000107266a30(auStack_378);
  FUN_107482af4(auStack_148);
  func_0x0001072ca524(auStack_188);
  do {
    func_0x0001074843e0();
    FUN_107432d98(auStack_e8);
    func_0x0001074841d4();
  } while( true );
}



/* Entry: 107480f9c; end: 107480fcb;  */

undefined8 * FUN_107480f9c(undefined8 *param_1)

{
  func_0x00010730b284(param_1 + 0x89);
  func_0x000107482a1c(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 107480fcc; end: 107480fcf;  */

undefined8 * FUN_107480fcc(undefined8 *param_1)

{
  func_0x00010730b284(param_1 + 0x89);
  func_0x000107482a1c(param_1 + 0xc);
  *param_1 = &PTR_DAT_1109b5ab0;
  FUN_1073ad3c4(param_1 + 8);
  func_0x0001073ad4a0(param_1 + 5);
  func_0x0001073ad4c4(param_1 + 3);
  FUN_1073ad37c(param_1 + 1);
  return param_1;
}



/* Entry: 107480fd0; end: 107480fe3;  */

void FUN_107480fd0(void)

{
  FUN_107480f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107480fe4; end: 10748119b;  */

ulong FUN_107480fe4(ulong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                   long param_5)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  float *pfVar5;
  undefined1 uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined1 auStack_8e0 [192];
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  ulong uStack_7b8;
  undefined1 auStack_7b0 [8];
  undefined8 *puStack_7a8;
  ulong uStack_750;
  ulong uStack_748;
  undefined8 uStack_740;
  undefined1 auStack_730 [200];
  undefined8 uStack_668;
  undefined1 auStack_5d8 [88];
  undefined1 auStack_580 [88];
  ulong auStack_528 [13];
  undefined1 auStack_4c0 [96];
  undefined1 auStack_460 [88];
  undefined1 auStack_408 [192];
  undefined1 auStack_348 [192];
  undefined1 auStack_288 [192];
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [96];
  undefined1 auStack_108 [104];
  undefined1 auStack_a0 [104];
  undefined8 uStack_38;
  
  func_0x0001074844c8();
  func_0x000107484180();
  lVar7 = *(long *)(param_5 + 0x18);
  uStack_38 = extraout_x8;
  func_0x000107432c64(auStack_108,unaff_x19 + 0x60);
  FUN_107437f20(auStack_a0,lVar7 + 0x1d8);
  func_0x000107482cec(auStack_1c8,unaff_x19 + 200);
  FUN_107483670(auStack_168,lVar7 + 0x248);
  func_0x000107432f04(auStack_5d8,unaff_x19 + 0x128);
  FUN_1074380d4(auStack_580,lVar7 + 0x2b0);
  func_0x00010748303c(auStack_348,unaff_x19 + 0x180);
  FUN_10748374c(auStack_288,lVar7 + 0x310);
  FUN_107483614(auStack_528,auStack_a0,auStack_168,auStack_580,auStack_288);
  func_0x000107482a54(auStack_288);
  func_0x000107482a54(auStack_348);
  func_0x000107410c2c(auStack_580);
  func_0x000107410c2c(auStack_5d8);
  FUN_107482af4(auStack_168);
  FUN_107482af4(auStack_1c8);
  func_0x0001074843e0();
  FUN_1074335c8(auStack_108);
  func_0x00010743344c(unaff_x19 + 0x60,auStack_528);
  FUN_107482b94(unaff_x19 + 200,auStack_4c0);
  func_0x0001074334a8(unaff_x19 + 0x128,auStack_460);
  func_0x000107482bc8(unaff_x19 + 0x180,auStack_408);
  puVar3 = auStack_528;
  func_0x000107482a1c();
  func_0x000107484150(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar8 = (undefined4)param_1;
  func_0x000107482a54(auStack_348);
  func_0x000107410c2c(auStack_580);
  func_0x000107410c2c(auStack_5d8);
  FUN_107482af4(auStack_168);
  FUN_107482af4(auStack_1c8);
  func_0x0001074843e0();
  puVar4 = auStack_108;
  FUN_1074335c8(puVar4);
  func_0x0001074841d4();
  func_0x0001074844c8();
  func_0x000107484180();
  uStack_668 = extraout_x8_00;
  FUN_1073db2dc(&uStack_920,puVar4 + 0x18);
  FUN_10748145c(auStack_528[0]);
  uStack_750 = auStack_528[0];
  uVar9 = 0;
  uStack_740 = 0x3f80000000000000;
  uStack_748 = 0;
  uVar15 = param_2;
  uVar17 = param_3;
  FUN_107483980(puVar3 + 0xc,&uStack_750,*(undefined8 *)(auStack_528[0] + 0x10));
  uStack_750 = auStack_528[0];
  uVar10 = 0;
  uStack_748 = 0x3f570a3d00000000;
  uVar16 = uVar15;
  FUN_107483b68(puVar3 + 0x19,&uStack_750,*(undefined8 *)(auStack_528[0] + 0x10));
  uStack_750 = auStack_528[0];
  uStack_748 = CONCAT44(uStack_748._4_4_,0x3f800000);
  uVar11 = uVar10;
  FUN_107483e10(puVar3 + 0x25,&uStack_750,*(undefined8 *)(auStack_528[0] + 0x10));
  uStack_818 = 0;
  uStack_820 = 0;
  uStack_808 = 0;
  uStack_810 = 0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  uStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7c8 = 0;
  uStack_7d0 = 0;
  FUN_1073df1c8(&uStack_820);
  uStack_7b8 = auStack_528[0];
  func_0x00010726ccd4(auStack_7b0,&uStack_820);
  FUN_107483efc(&uStack_750,puVar3 + 0x30,&uStack_7b8,*(undefined8 *)(auStack_528[0] + 0x10));
  func_0x00010726b164(auStack_7b0);
  func_0x00010726b164(&uStack_820);
  uStack_900 = CONCAT44(uVar15,uVar9);
  uStack_8f8 = CONCAT44(param_4,(int)uVar17);
  uStack_8f0 = uVar10;
  uStack_8ec = uVar16;
  uStack_8e8 = uVar11;
  FUN_1073be024(auStack_8e0,&uStack_750);
  func_0x0001073bc804(&uStack_750);
  FUN_1074833c0(&uStack_7b8,1);
  puVar1 = puStack_7a8;
  puStack_7a8[1] = 0;
  puStack_7a8[2] = 0;
  *puStack_7a8 = &PTR_FUN_1109b3bc0;
  uStack_818 = uStack_918;
  uStack_820 = uStack_920;
  uStack_920 = 0;
  uStack_918 = 0;
  FUN_1074840b8(&uStack_750,&uStack_900);
  func_0x0001077868c4(uVar8,param_2,param_3,puVar1 + 3,&uStack_820,&uStack_750);
  func_0x0001073bc804(auStack_730);
  FUN_1073db32c(&uStack_820);
  puVar1 = puStack_7a8;
  puStack_7a8 = (undefined8 *)0x0;
  func_0x0001074834c8(&uStack_7b8);
  uStack_750 = 0;
  uStack_748 = 0;
  func_0x0001074829f4(&uStack_750);
  func_0x0001073bc804(auStack_8e0);
  FUN_1073db32c(&uStack_920);
  fVar12 = *(float *)(puVar1 + 0xb);
  uVar2 = fVar12 == 0.0;
  if ((bool)uVar2) {
    uVar6 = 0;
  }
  else {
    uVar6 = 4;
    uVar2 = fVar12 == 1.0;
    if (((1.0 <= fVar12) && ((int)puVar3[0x47] == 0)) &&
       (uVar2 = *(float *)((long)puVar1 + 0x4c) == 1.0, 1.0 <= *(float *)((long)puVar1 + 0x4c))) {
      uVar6 = 6;
    }
  }
  *(undefined1 *)(puVar3 + 7) = uVar6;
  *(undefined1 *)(puVar1 + 6) = uVar6;
  uStack_910 = 0;
  uStack_908 = 0;
  uStack_900 = 0;
  uStack_8f8 = 0;
  uStack_748 = puVar3[2];
  uVar14 = puVar3[1];
  uStack_750 = uVar14;
  puVar3[1] = (ulong)(puVar1 + 3);
  puVar3[2] = (ulong)puVar1;
  FUN_1073ad37c(&uStack_750);
  func_0x000107483510(&uStack_900);
  func_0x0001074829f4(&uStack_910);
  func_0x000107484150(uStack_668);
  if ((bool)uVar2) {
    return uVar14;
  }
  ___stack_chk_fail();
  func_0x0001073bc804(auStack_8e0);
  pfVar5 = (float *)&uStack_920;
  FUN_1073db32c();
  func_0x0001074841d4();
  uVar13 = 0x3f000000;
  if (pfVar5[8] < *pfVar5) {
    uVar13 = 0x40000000;
  }
  return (ulong)uVar13;
}



/* Entry: 10748119c; end: 10748145b;  */

ulong FUN_10748119c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                   long param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  float *pfVar3;
  undefined1 uVar4;
  undefined8 extraout_x8;
  long unaff_x19;
  ulong *unaff_x20;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined1 auStack_300 [192];
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 *puStack_1c8;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [200];
  undefined8 uStack_88;
  
  func_0x0001074844c8();
  func_0x000107484180();
  uStack_88 = extraout_x8;
  FUN_1073db2dc(&uStack_340,param_5 + 0x18);
  FUN_10748145c(*unaff_x20);
  uVar5 = *unaff_x20;
  uVar6 = 0;
  uStack_160 = 0x3f80000000000000;
  uStack_168 = 0;
  uVar11 = param_2;
  uVar13 = param_3;
  uStack_170 = uVar5;
  FUN_107483980(unaff_x19 + 0x60,&uStack_170,*(undefined8 *)(uVar5 + 0x10));
  uVar7 = 0;
  uStack_168 = 0x3f570a3d00000000;
  uVar12 = uVar11;
  uStack_170 = uVar5;
  FUN_107483b68(unaff_x19 + 200,&uStack_170,*(undefined8 *)(uVar5 + 0x10));
  uStack_168 = CONCAT44(uStack_168._4_4_,0x3f800000);
  uVar8 = uVar7;
  uStack_170 = uVar5;
  FUN_107483e10(unaff_x19 + 0x128,&uStack_170,*(undefined8 *)(uVar5 + 0x10));
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  FUN_1073df1c8(&uStack_240);
  uStack_1d8 = uVar5;
  func_0x00010726ccd4(auStack_1d0,&uStack_240);
  FUN_107483efc(&uStack_170,unaff_x19 + 0x180,&uStack_1d8,*(undefined8 *)(uVar5 + 0x10));
  func_0x00010726b164(auStack_1d0);
  func_0x00010726b164(&uStack_240);
  uStack_320 = CONCAT44(uVar11,uVar6);
  uStack_318 = CONCAT44(param_4,(int)uVar13);
  uStack_310 = uVar7;
  uStack_30c = uVar12;
  uStack_308 = uVar8;
  FUN_1073be024(auStack_300,&uStack_170);
  func_0x0001073bc804(&uStack_170);
  FUN_1074833c0(&uStack_1d8,1);
  puVar1 = puStack_1c8;
  puStack_1c8[1] = 0;
  puStack_1c8[2] = 0;
  *puStack_1c8 = &PTR_FUN_1109b3bc0;
  uStack_238 = uStack_338;
  uStack_240 = uStack_340;
  uStack_340 = 0;
  uStack_338 = 0;
  FUN_1074840b8(&uStack_170,&uStack_320);
  func_0x0001077868c4(param_1,param_2,param_3,puVar1 + 3,&uStack_240,&uStack_170);
  func_0x0001073bc804(auStack_150);
  FUN_1073db32c(&uStack_240);
  puVar1 = puStack_1c8;
  puStack_1c8 = (undefined8 *)0x0;
  func_0x0001074834c8(&uStack_1d8);
  uStack_170 = 0;
  uStack_168 = 0;
  FUN_1074829f4(&uStack_170);
  func_0x0001073bc804(auStack_300);
  FUN_1073db32c(&uStack_340);
  fVar9 = *(float *)(puVar1 + 0xb);
  uVar2 = fVar9 == 0.0;
  if ((bool)uVar2) {
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
    uVar2 = fVar9 == 1.0;
    if (((1.0 <= fVar9) && (*(int *)(unaff_x19 + 0x238) == 0)) &&
       (uVar2 = *(float *)((long)puVar1 + 0x4c) == 1.0, 1.0 <= *(float *)((long)puVar1 + 0x4c))) {
      uVar4 = 6;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x38) = uVar4;
  *(undefined1 *)(puVar1 + 6) = uVar4;
  uStack_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_168 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar5 = *(ulong *)(unaff_x19 + 8);
  *(undefined8 **)(unaff_x19 + 8) = puVar1 + 3;
  *(undefined8 **)(unaff_x19 + 0x10) = puVar1;
  uStack_170 = uVar5;
  FUN_1073ad37c(&uStack_170);
  func_0x000107483510(&uStack_320);
  FUN_1074829f4(&uStack_330);
  func_0x000107484150(uStack_88);
  if ((bool)uVar2) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x0001073bc804(auStack_300);
  pfVar3 = (float *)&uStack_340;
  FUN_1073db32c();
  func_0x0001074841d4();
  uVar10 = 0x3f000000;
  if (pfVar3[8] < *pfVar3) {
    uVar10 = 0x40000000;
  }
  return (ulong)uVar10;
}



/* Entry: 10748145c; end: 107481517;  */

undefined4 FUN_10748145c(float *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f000000;
  if (param_1[8] < *param_1) {
    uVar1 = 0x40000000;
  }
  return uVar1;
}



/* Entry: 107481518; end: 10748277b;  */

void FUN_107481518(double param_1,undefined8 param_2,double param_3,undefined4 param_4,long *param_5
                  ,undefined8 *param_6)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  short *psVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long *plVar15;
  ulong uVar16;
  char cVar17;
  int iVar18;
  int extraout_w8;
  long lVar19;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  long extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  code *extraout_x8_18;
  code *extraout_x8_19;
  code *extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  code *extraout_x8_23;
  code *extraout_x8_24;
  code *extraout_x8_25;
  code *extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  code *extraout_x8_33;
  code *extraout_x8_34;
  code *extraout_x8_35;
  code *extraout_x8_36;
  undefined8 *puVar20;
  code *extraout_x8_37;
  uint uVar21;
  int extraout_w9;
  int extraout_w9_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar22;
  short *psVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  double dVar37;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  long lStack_2d0;
  int iStack_2c8;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined2 uStack_218;
  long alStack_1d0 [2];
  undefined8 uStack_1c0;
  long lStack_1b8;
  byte bStack_158;
  undefined4 uStack_150;
  short sStack_14c;
  undefined2 uStack_14a;
  short sStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  char cStack_e8;
  undefined1 auStack_e0 [28];
  undefined1 auStack_c4 [52];
  
  puVar20 = param_6;
  FUN_1074d8d3c();
  uVar30 = (uint)puVar20;
  if (((ulong)puVar20 & 1) == 0) {
LAB_107482438:
    func_0x00010748448c();
    return;
  }
  func_0x000107484590();
  lStack_248 = param_6[0x14];
  dVar37 = (double)(ulong)(uint)(float)param_1;
  uStack_240 = 0x7fffffffffffffff;
  uStack_228 = 0;
  uStack_250._0_4_ = (float)param_1;
  func_0x0001074844b0();
  FUN_1073dd608();
  uVar29 = uVar30;
  func_0x000107484590();
  lStack_248 = param_6[0x14];
  uStack_250 = CONCAT44(uStack_250._4_4_,(float)dVar37);
  uStack_240 = 0x7fffffffffffffff;
  uStack_228 = 0;
  func_0x0001074844b0();
  FUN_1073dd608();
  lVar19 = param_6[6];
  uVar29 = *(byte *)(lVar19 + 0x1484) & uVar29;
  FUN_1074e6e30();
  lVar27 = param_6[5];
  bVar5 = *(byte *)(lVar27 + 0xa94);
  uVar22 = (ulong)bVar5;
  func_0x0001074843e8();
  iVar11 = (int)lVar27 + 0x948;
  FUN_10748277c(auStack_c4);
  bVar9 = false;
  uVar21 = 3;
  if ((uVar29 & 1) != 0) {
    uVar21 = 4;
  }
  uVar30 = (uint)lVar19 & uVar30;
  uVar2 = 2;
  if (uVar30 == 0) {
    uVar2 = uVar29 & 1;
  }
  if (bVar5 == 0) {
    uVar21 = uVar2;
  }
  cVar17 = *(char *)(param_6 + 0xc);
  iVar18 = 5;
  if (cVar17 != '\x04') {
    iVar18 = 0;
  }
  if (bVar5 == 1) {
    func_0x000107484514();
    bVar9 = iVar11 == 0;
  }
  uVar24 = (ulong)(iVar18 + uVar21);
  lVar19 = param_5[1];
  if ((*(char *)((long)param_6 + 0xad) != '\x01') || ((*(byte *)(param_6 + 0x16) & 1) == 0)) {
    uVar12 = lVar19 + 0xa8;
    func_0x000104c2d614();
    if ((uVar12 & 1) == 0) {
      lVar27 = param_5[1];
      func_0x0001074db204(&uStack_150,param_6[0xb],lVar19 + 0x48);
      func_0x0001074db204(&uStack_1c0,param_6[0xb],lVar19 + 0xa8);
      if ((cStack_e8 == '\x01') && ((bStack_158 & 1) != 0)) {
        uVar21 = 5;
        if ((uVar30 & 1) == 0) {
          uVar21 = (uVar29 | uVar30) & 1;
        }
        uVar2 = uVar21 | 2;
        if (bVar5 == 0) {
          uVar2 = uVar21;
        }
        lVar13 = param_6[0x12];
        uStack_250 = CONCAT44(uStack_250._4_4_,1);
        lStack_248 = 0;
        uStack_240 = CONCAT44(uStack_240._4_4_,uVar2);
        func_0x000107484430(*(undefined4 *)(param_6 + 0xf));
        if (*(char *)(param_6 + 0xc) == '\x02') {
          uStack_230 = 0;
          uStack_228 = 0;
          uStack_220 = uStack_220 & 0xffffffff00000000;
        }
        else {
          uStack_238._0_6_ = CONCAT24(0x501,(float)uStack_238);
          func_0x000107484620();
        }
        func_0x0001074845f4();
        iVar11 = extraout_w9_00 + 0x2e8;
        func_0x0001074845b8(alStack_1d0);
        if (alStack_1d0[0] != 0) {
          func_0x000107484460();
          (*extraout_x8_12)();
          uVar10 = (int)lVar13 == 2;
          if ((bool)uVar10) {
            func_0x000107484270();
            lStack_2d0 = lVar13;
            iStack_2c8 = iVar11;
            func_0x000107484204(7);
            func_0x0001074845d4();
            func_0x000107484264();
            (*extraout_x8_13)();
            func_0x000107484450();
            uVar34 = 0x10100;
            if (!(bool)uVar10) {
              uVar34 = 0x10101;
            }
            uStack_250._0_3_ = CONCAT12(bVar5,(undefined2)uStack_250);
            func_0x000107484440(uVar34);
            func_0x00010748454c();
            plVar15 = (long *)param_6[3];
            (**(code **)(*plVar15 + 0x40))(plVar15,alStack_1d0[0]);
            func_0x000107484298();
            func_0x000107484544();
            (**(code **)(*param_5 + 0x58))(param_5,plVar15);
            func_0x000107484298();
            func_0x00010748453c();
            func_0x0001074841b8(*(undefined8 *)(*param_5 + 0x60));
            if (bVar5 != 0) {
              func_0x000107484480();
              func_0x000107484360();
              func_0x000107484584();
              func_0x0001074843a8();
              func_0x000107484264();
              func_0x000107484534();
              func_0x000107484480();
              func_0x000107484360();
              func_0x00010748456c();
              func_0x0001074843a8();
              func_0x000107484264();
              func_0x00010748451c();
              func_0x000107484304(param_6[3]);
              func_0x000107484338();
              (*extraout_x8_14)();
            }
            if (((uVar29 | uVar30) & 1) != 0) {
              func_0x0001074842a8();
              if (((extraout_x9_00 & 1) != 0) ||
                 (uVar30 = 0, (*(byte *)(extraout_x8_15 + 0x2f9) & 1) == 0)) {
                uVar30 = *(uint *)(uVar24 + 0x1488);
              }
              uVar12 = (ulong)uVar30;
              func_0x000107484668();
              uStack_310 = (undefined4)param_2;
              func_0x000107484498();
              uStack_30c = (undefined4)uVar12;
              uStack_308 = (undefined4)(uVar12 >> 0x20);
              uStack_304 = *(undefined4 *)(uVar24 + 0x1494);
              func_0x0001074843b4();
              (*extraout_x8_16)(param_5,0x15,&lStack_2d0);
              func_0x0001074843b4();
              (*extraout_x8_17)(param_5,0x16,&uStack_310);
              uStack_250 = 0;
              lStack_248 = 0;
              func_0x0001074843b4();
              func_0x000107484264();
              (*extraout_x8_18)();
              (**(code **)(*param_5 + 0xb0))(param_5,0x1c,uVar24 + 0x1498);
              func_0x0001074845c8(0);
              (*extraout_x8_19)(param_5,0x19);
              (**(code **)(*param_5 + 200))(param_5,0x18,auStack_c4);
              FUN_1074e6de8(uVar24,*(undefined8 *)(uVar22 + 0x1e8));
              func_0x000107484190();
              func_0x00010748428c();
              uVar12 = uVar24;
              FUN_1074e6e30();
              if ((int)uVar12 != 0) {
                func_0x000107484578();
                func_0x0001074843a8();
                func_0x000107484264();
                (*extraout_x8_20)();
                func_0x0001074845c8(*(undefined4 *)(uVar24 + 0x1480));
                (*extraout_x8_21)(param_5,0x1b);
                func_0x0001074e6e78(uVar24,*(undefined8 *)(uVar22 + 0x1e0));
                func_0x000107484190();
                func_0x0001074843c0(param_5);
              }
            }
            FUN_1074dbc1c(param_6[0xb] + 200);
            func_0x000107484190();
            func_0x0001074841b8();
            uStack_250 = *(ulong *)(lVar19 + 0x38);
            (**(code **)(*(long *)param_6[3] + 0xa8))((long *)param_6[3],0x14,&uStack_250);
            psVar23 = (short *)param_6[0x30];
            psVar4 = (short *)param_6[0x31];
            lVar13 = 0x3c8;
            if (!bVar9) {
              lVar13 = 0x3b0;
            }
            while( true ) {
              uVar31 = SUB84(param_3,0);
              uVar34 = (undefined4)param_2;
              if (psVar23 == psVar4) break;
              func_0x0001074842ec();
              func_0x000107484398(param_6[5]);
              uVar26 = param_6[5];
              func_0x000107417744(uVar26,&lStack_2d0);
              iVar11 = (int)uVar26;
              func_0x000107484514();
              bVar6 = *(byte *)(psVar23 + 2);
              dVar32 = 1.0;
              _ldexp(iVar11 - (uint)bVar6);
              dVar33 = 1.0;
              _ldexp(bVar6);
              sVar7 = *psVar23;
              uVar30 = *(uint *)(psVar23 + 4);
              iVar11 = *(int *)(psVar23 + 6);
              dVar37 = dVar33;
              func_0x000107482794(&uStack_310,&uStack_250);
              uVar35 = SUB84(dVar37,0);
              func_0x0001074843c8();
              func_0x00010748432c();
              func_0x000107484228();
              plVar15 = (long *)param_6[3];
              func_0x000107482794(&uStack_310,&lStack_2d0);
              func_0x0001074843c8();
              func_0x00010748432c();
              (*extraout_x8_22)();
              if (bVar5 != 0) {
                func_0x000107484344();
                uStack_310 = uVar35;
                uStack_30c = uVar34;
                uStack_308 = uVar31;
                uStack_304 = param_4;
                func_0x00010748432c(*(undefined8 *)(*plVar15 + 0xb8));
                (*extraout_x8_23)();
                lVar28 = param_6[5];
                func_0x0001074843e8();
                func_0x000107482794(&uStack_310,lVar28 + 0xaa0);
                func_0x0001074843c8();
                func_0x00010748432c();
                func_0x000107484534();
                lVar28 = param_6[5];
                func_0x0001074843e8();
                func_0x000107482794(&uStack_310,lVar28 + 0xb20);
                func_0x0001074843c8();
                func_0x00010748432c();
                func_0x00010748451c();
                plVar15 = (long *)param_6[3];
                lVar28 = param_6[5];
                func_0x0001074843e8();
                FUN_10748277c(&uStack_310,lVar28 + 0xc68);
                func_0x00010748432c(*(undefined8 *)(*plVar15 + 200));
                (*extraout_x8_24)();
                func_0x000107484304();
                func_0x000107484338(param_6[3]);
                (*extraout_x8_25)();
              }
              func_0x000107484338(*(undefined4 *)(lVar19 + 0x40),param_6[3]);
              (*extraout_x8_26)();
              uVar31 = NEON_ucvtf(*(undefined4 *)param_6[0xb]);
              uVar35 = NEON_ucvtf(((undefined4 *)param_6[0xb])[1]);
              func_0x0001074841a0(param_6[3]);
              (*extraout_x8_27)();
              func_0x000107484164(sStack_14c + 1,param_6[3]);
              (*extraout_x8_28)();
              func_0x000107484164(sStack_14c + sStack_148 + -1,param_6[3]);
              (*extraout_x8_29)();
              func_0x000107484164(uStack_1c0._4_2_ + 1,param_6[3]);
              (*extraout_x8_30)();
              func_0x000107484164(uStack_1c0._4_2_ + (short)lStack_1b8 + -1,param_6[3]);
              (*extraout_x8_31)();
              plVar15 = (long *)param_6[3];
              func_0x0001074827ac(&uStack_150);
              uVar34 = uVar31;
              func_0x0001074827ac(&uStack_150);
              uStack_310 = uVar31;
              uStack_30c = uVar35;
              func_0x00010748432c(*(undefined8 *)(*plVar15 + 0xa8));
              func_0x0001074842d0();
              plVar15 = (long *)param_6[3];
              func_0x0001074827ac(&uStack_1c0);
              func_0x0001074827ac(&uStack_1c0);
              uStack_310 = uVar34;
              uStack_30c = uVar35;
              func_0x00010748432c(*(undefined8 *)(*plVar15 + 0xa8));
              func_0x0001074843c0();
              func_0x000107484338(*(undefined4 *)(lVar27 + 0x1c),param_6[3]);
              (*extraout_x8_32)();
              func_0x000107484338(*(undefined4 *)(lVar27 + 0x20),param_6[3]);
              (*extraout_x8_33)();
              func_0x000107484338(*(undefined4 *)(lVar27 + 0x24),param_6[3]);
              (*extraout_x8_34)();
              dVar37 = (double)NEON_ucvtf((ulong)uVar30);
              param_3 = (double)(int)(dVar32 * 512.0);
              uVar29 = (uint)((dVar37 + dVar33 * (double)(int)sVar7) * param_3);
              uVar30 = iVar11 * (int)(dVar32 * 512.0);
              func_0x0001074841a0((float)((int)uVar29 >> 0x10),(float)((int)uVar30 >> 0x10),
                                  param_6[3]);
              func_0x0001074845c0();
              uVar22 = param_6[3];
              func_0x0001074841a0((float)(uVar29 & 0xffff),(float)(uVar30 & 0xffff),uVar22);
              (*extraout_x8_35)();
              plVar15 = (long *)param_6[3];
              func_0x000107484514();
              fVar36 = (float)NEON_ucvtf((uint)*(byte *)(psVar23 + 2));
              dVar37 = (double)((float)(uVar22 & 0xffffffff) - fVar36);
              _exp2(dVar37);
              param_2 = 0;
              (**(code **)(*plVar15 + 0xa0))(1.0 / (float)(8192.0 / (dVar37 * 512.0)),plVar15,7);
              lVar3 = ((long *)(param_6[9] + lVar13))[1];
              for (lVar28 = *(long *)(param_6[9] + lVar13); lVar28 != lVar3; lVar28 = lVar28 + 0x28)
              {
                func_0x0001074844e0(auStack_328);
                func_0x00010748452c();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_328);
                uStack_310 = CONCAT31(uStack_310._1_3_,4);
                uStack_30c = 0;
                func_0x000107484318(param_6[3]);
                (*extraout_x8_36)();
              }
              psVar23 = psVar23 + 8;
            }
            func_0x00010748459c();
            func_0x0001074845b0();
            func_0x0001074844f4();
            goto LAB_107482438;
          }
        }
        func_0x00010748448c();
        func_0x00010748459c();
      }
      else {
        func_0x00010748448c();
      }
      func_0x0001074845b0();
      func_0x0001074844f4();
      return;
    }
    uVar12 = (ulong)(uint)*(float *)(lVar19 + 0x34);
    if (1.0 <= *(float *)(lVar19 + 0x34)) {
      uVar12 = (ulong)(uint)*(float *)(lVar19 + 0x40);
      cVar17 = '\x04';
      if ((1.0 <= *(float *)(lVar19 + 0x40)) &&
         (cVar17 = '\x04', *(uint *)(param_6 + 0x37) <= *(uint *)((long)param_6 + 0x1ac))) {
        cVar17 = '\x02';
      }
    }
    else {
      cVar17 = '\x04';
    }
    if (*(char *)(param_6 + 0xc) != cVar17) goto LAB_107482438;
    uVar21 = 5;
    if ((uVar30 & 1) == 0) {
      uVar21 = (uVar29 | uVar30) & 1;
    }
    uVar2 = uVar21 | 2;
    if (bVar5 == 0) {
      uVar2 = uVar21;
    }
    lVar27 = param_6[0x12];
    uStack_250 = uStack_250 & 0xffffffff00000000;
    lStack_248 = 0;
    uStack_240 = CONCAT44(uStack_240._4_4_,uVar2);
    func_0x000107484430(*(undefined4 *)(param_6 + 0xf));
    if (extraout_w8 == 2) {
      uStack_230 = 0;
      uStack_228 = 0;
      uStack_220 = uStack_220 & 0xffffffff00000000;
    }
    else {
      uStack_238._0_6_ = CONCAT24(0x501,(float)uStack_238);
      func_0x000107484620(1);
    }
    func_0x0001074845f4();
    iVar11 = extraout_w9 + 0x248;
    func_0x0001074845b8(&uStack_1c0);
    if (uStack_1c0 != 0) {
      func_0x000107484460();
      (*extraout_x8_00)();
      uVar10 = (int)lVar27 == 2;
      if ((bool)uVar10) {
        func_0x000107484270();
        lStack_2d0 = lVar27;
        iStack_2c8 = iVar11;
        func_0x000107484204(7);
        func_0x0001074845d4();
        func_0x000107484264();
        (*extraout_x8_01)();
        func_0x000107484450();
        uVar34 = 0x10100;
        if (!(bool)uVar10) {
          uVar34 = 0x10101;
        }
        uStack_250._0_3_ = CONCAT12(bVar5,(undefined2)uStack_250);
        func_0x000107484440(uVar34);
        func_0x00010748454c();
        plVar15 = (long *)param_6[3];
        (**(code **)(*plVar15 + 0x40))(plVar15,uStack_1c0);
        func_0x000107484298();
        func_0x000107484544();
        (**(code **)(*param_5 + 0x58))(param_5,plVar15);
        func_0x000107484298();
        func_0x00010748453c();
        func_0x0001074841b8(*(undefined8 *)(*param_5 + 0x60));
        if (bVar5 != 0) {
          func_0x000107484480();
          func_0x000107484360();
          func_0x000107484584();
          func_0x0001074843a8();
          func_0x000107484264();
          func_0x0001074845c0();
          func_0x000107484480();
          func_0x000107484360();
          func_0x00010748456c();
          func_0x0001074843a8();
          func_0x000107484264();
          (*extraout_x8_02)();
          func_0x000107484480();
          func_0x000107484360();
          FUN_10748277c(&uStack_250,uVar24 + 0xc68);
          func_0x000107484264(*(undefined8 *)(*param_5 + 200));
          (*extraout_x8_03)();
          func_0x000107484304(param_6[3]);
          func_0x000107484338();
          (*extraout_x8_04)();
        }
        if (((uVar29 | uVar30) & 1) != 0) {
          func_0x0001074842a8();
          if (((extraout_x9 & 1) != 0) || (uVar29 = 0, (*(byte *)(extraout_x8_05 + 0x2f9) & 1) == 0)
             ) {
            uVar29 = *(uint *)(uVar24 + 0x1488);
          }
          uVar16 = (ulong)uVar29;
          func_0x000107484668();
          uStack_150 = (undefined4)uVar12;
          func_0x000107484498();
          sStack_14c = (short)uVar16;
          uStack_14a = (undefined2)(uVar16 >> 0x10);
          sStack_148 = (short)(uVar16 >> 0x20);
          uStack_146 = (undefined2)(uVar16 >> 0x30);
          uStack_144 = *(undefined4 *)(uVar24 + 0x1494);
          func_0x0001074843b4();
          (*extraout_x8_06)(param_5,9,&lStack_2d0);
          func_0x0001074843b4();
          func_0x000107484534(param_5);
          uStack_250 = 0;
          lStack_248 = 0;
          func_0x0001074843b4();
          func_0x000107484264();
          (*extraout_x8_07)();
          (**(code **)(*param_5 + 0xb0))(param_5,0x10,uVar24 + 0x1498);
          func_0x0001074845c8(0);
          (*extraout_x8_08)(param_5,0xd);
          func_0x00010748451c(*(undefined8 *)(*param_5 + 200),param_5);
          FUN_1074e6de8(uVar24,*(undefined8 *)(uVar22 + 0x1e8));
          func_0x000107484190();
          func_0x0001074841b8();
          uVar16 = uVar24;
          FUN_1074e6e30();
          if ((int)uVar16 != 0) {
            func_0x000107484578();
            func_0x0001074843a8();
            func_0x000107484264();
            (*extraout_x8_09)();
            func_0x0001074845c8(*(undefined4 *)(uVar24 + 0x1480));
            (*extraout_x8_10)(param_5,0xf);
            func_0x0001074e6e78(uVar24,*(undefined8 *)(uVar22 + 0x1e0));
            func_0x000107484190();
            func_0x00010748428c();
          }
        }
        func_0x000107484338(*(undefined4 *)(lVar19 + 0x40),param_6[3]);
        (*extraout_x8_11)();
        lStack_248 = *(undefined8 *)(lVar19 + 0x30);
        uStack_250 = *(undefined8 *)(lVar19 + 0x28);
        (**(code **)(*(long *)param_6[3] + 0xb8))((long *)param_6[3],6,&uStack_250);
        uVar22 = *(ulong *)(lVar19 + 0x38);
        uStack_250 = uVar22;
        (**(code **)(*(long *)param_6[3] + 0xa8))((long *)param_6[3],8,&uStack_250);
        lVar19 = param_6[0x30];
        lVar13 = param_6[0x31];
        lVar27 = 0x3c8;
        if (!bVar9) {
          lVar27 = 0x3b0;
        }
        func_0x000107484634();
        for (; lVar19 != lVar13; lVar19 = lVar19 + 0x10) {
          func_0x0001074842ec();
          func_0x000107484398(param_6[5]);
          func_0x000107417744(param_6[5],&lStack_2d0);
          uVar26 = param_6[3];
          func_0x000107482794(&uStack_150,&uStack_250);
          func_0x0001074843c8();
          func_0x000107484228(uVar26);
          plVar15 = (long *)param_6[3];
          func_0x000107482794(&uStack_150,&lStack_2d0);
          func_0x0001074843c8();
          func_0x0001074842d0(plVar15);
          if (bVar5 != 0) {
            func_0x000107484344();
            uStack_150 = (undefined4)uVar22;
            sStack_14c = (short)uVar12;
            uStack_14a = (undefined2)(uVar12 >> 0x10);
            sStack_148 = SUB82(param_3,0);
            uStack_146 = (undefined2)((ulong)param_3 >> 0x10);
            uStack_144 = param_4;
            func_0x0001074843c0(*(undefined8 *)(*plVar15 + 0xb8),plVar15);
          }
          lVar3 = ((long *)(param_6[9] + lVar27))[1];
          for (lVar28 = *(long *)(param_6[9] + lVar27); lVar28 != lVar3; lVar28 = lVar28 + 0x28) {
            func_0x0001074844e0(auStack_340);
            func_0x00010748452c();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_340);
            uStack_150 = CONCAT31(uStack_150._1_3_,(char)uVar30);
            sStack_14c = 0;
            uStack_14a = 0;
            func_0x000107484318(param_6[3]);
            func_0x000107484554();
          }
        }
        func_0x00010730b734(&uStack_1c0);
        goto LAB_107482438;
      }
    }
    func_0x00010748448c();
    plVar15 = &uStack_1c0;
    goto LAB_107482624;
  }
  if (cVar17 != '\x02') goto LAB_107482438;
  func_0x000104c2d614(lVar19 + 0xa8);
  uStack_250 = CONCAT44(uStack_250._4_4_,2);
  iVar11 = (int)param_6[0x12];
  uVar21 = 5;
  if ((uVar30 & 1) == 0) {
    uVar21 = (uVar29 | uVar30) & 1;
  }
  uVar2 = uVar21 | 2;
  if (bVar5 == 0) {
    uVar2 = uVar21;
  }
  lStack_248 = 0;
  uStack_240 = CONCAT44(uStack_240._4_4_,uVar2);
  func_0x000107484430(*(undefined4 *)(param_6 + 0xf));
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0x101010100000000;
  uStack_218 = 0xf01;
  func_0x0001074845b8(&lStack_2d0);
  if (lStack_2d0 != 0) {
    func_0x000107484460();
    (*extraout_x8)();
    uVar10 = iVar11 == 2;
    if ((bool)uVar10) {
      plVar15 = (long *)param_6[3];
      uVar34 = 0;
      puVar20 = param_6;
      FUN_1074d5bec(param_6,0,1);
      uStack_150 = SUB84(puVar20,0);
      sStack_14c = (short)((ulong)puVar20 >> 0x20);
      uStack_14a = (undefined2)((ulong)puVar20 >> 0x30);
      sStack_148 = (short)uVar34;
      uStack_146 = (undefined2)((uint)uVar34 >> 0x10);
      func_0x000107484204(7);
      uStack_240._0_3_ = CONCAT12(1,(undefined2)uStack_240);
      (**(code **)(*plVar15 + 0x80))(plVar15,&uStack_150,&uStack_250);
      func_0x000107484450();
      uVar34 = 0x10100;
      if (!(bool)uVar10) {
        uVar34 = 0x10101;
      }
      uStack_250._0_3_ = CONCAT12(1,(undefined2)uStack_250);
      func_0x000107484440(uVar34);
      func_0x00010748454c();
      plVar15 = (long *)param_6[3];
      (**(code **)(*plVar15 + 0x40))(plVar15,lStack_2d0);
      plVar25 = (long *)param_6[3];
      func_0x000107484544(param_6[9]);
      (**(code **)(*plVar25 + 0x58))(plVar25,plVar15);
      plVar15 = (long *)param_6[3];
      func_0x00010748453c(param_6[9]);
      func_0x000107484228(*(undefined8 *)(*plVar15 + 0x60),plVar15);
      lStack_248 = *(long *)(lVar19 + 0x30);
      uStack_250 = *(ulong *)(lVar19 + 0x28);
      uStack_240 = *(long *)(lVar19 + 0x38);
      uStack_238 = 0;
      puVar1 = (ulong *)(param_5 + 0x85);
      if (param_5[0x89] == 0) {
        (**(code **)(*(long *)*param_6 + 0xa8))(&uStack_310,(long *)*param_6,0x20);
        lStack_1b8 = CONCAT44(uStack_30c,uStack_310);
        uStack_1c0 = 0x20;
        func_0x000107308d88(&uStack_150,&uStack_1c0);
        func_0x000107308dac(param_5 + 0x89,&uStack_150);
        func_0x00010730b284(&uStack_150);
        lVar19 = lStack_1b8;
        lStack_1b8 = 0;
        if (lVar19 != 0) {
          func_0x0001074845a4();
        }
LAB_1074824bc:
        puVar20 = (undefined8 *)param_5[0x89];
        plVar15 = (long *)puVar20[1];
        (**(code **)(*plVar15 + 0x20))(plVar15,&uStack_250,*puVar20);
        param_5[0x86] = lStack_248;
        *puVar1 = uStack_250;
        param_5[0x88] = uStack_238;
        param_5[0x87] = uStack_240;
      }
      else {
        puVar14 = puVar1;
        func_0x00010730ae80(puVar1,&uStack_250);
        if ((((int)puVar14 == 0) || (*(float *)(param_5 + 0x87) != (float)uStack_240)) ||
           (*(float *)((long)param_5 + 0x43c) != uStack_240._4_4_)) goto LAB_1074824bc;
        bVar8 = false;
        if ((*(float *)(param_5 + 0x88) == (float)uStack_238) &&
           (bVar8 = false, !NAN(*(float *)((long)param_5 + 0x444)) && !NAN(uStack_238._4_4_))) {
          bVar8 = *(float *)((long)param_5 + 0x444) == uStack_238._4_4_;
        }
        if (!bVar8) goto LAB_1074824bc;
      }
      func_0x00010748467c(param_6[3]);
      func_0x000107484228();
      if (((uVar29 | uVar30) & 1) != 0) {
        func_0x00010748467c(param_6[3]);
        func_0x0001074845c0();
        func_0x00010748467c(param_6[3]);
        (*extraout_x8_37)();
        FUN_1074e6de8(param_6[6],*(undefined8 *)(param_6[8] + 0x1e8));
        func_0x000107484190();
        func_0x0001074841b8();
        iVar11 = (int)param_6[6];
        FUN_1074e6e30();
        if (iVar11 != 0) {
          func_0x0001074e6e78(param_6[6],*(undefined8 *)(param_6[8] + 0x1e0));
          func_0x000107484190();
          func_0x00010748428c();
        }
      }
      if (bVar5 != 0) {
        func_0x00010748467c(param_6[3]);
        func_0x0001074843c0();
      }
      lVar19 = param_6[0x30];
      lVar13 = param_6[0x31];
      lVar27 = 0x3c8;
      if (!bVar9) {
        lVar27 = 0x3b0;
      }
      func_0x000107484634();
      for (; lVar19 != lVar13; lVar19 = lVar19 + 0x10) {
        plVar15 = (long *)param_6[3];
        FUN_1074d70d4(param_6,lVar19,0x2000);
        func_0x0001074842d0(*(undefined8 *)(*plVar15 + 0x90),plVar15);
        lVar3 = ((long *)(param_6[9] + lVar27))[1];
        for (lVar28 = *(long *)(param_6[9] + lVar27); lVar28 != lVar3; lVar28 = lVar28 + 0x28) {
          func_0x0001074844e0(auStack_e0);
          func_0x00010748452c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
          uStack_150 = CONCAT31(uStack_150._1_3_,1);
          sStack_14c = 0;
          uStack_14a = 0;
          func_0x000107484318(param_6[3]);
          func_0x000107484554();
        }
      }
    }
  }
  func_0x00010748448c();
  plVar15 = &lStack_2d0;
LAB_107482624:
  func_0x00010730b734(plVar15);
  return;
}



/* Entry: 10748277c; end: 1074827d3;  */

void FUN_10748277c(undefined8 *param_1,long param_2)

{
  undefined1 uStack_11;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_107484124(&uStack_11,param_2,param_2 + 0x48,param_1);
  return;
}



/* Entry: 1074827d4; end: 1074828a7;  */

void FUN_1074827d4(long param_1,long param_2)

{
  undefined8 uVar1;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined2 auStack_60 [12];
  long lStack_48;
  long lStack_40;
  
  if (0.0 < *(float *)(*(long *)(param_1 + 8) + 0x40)) {
    func_0x00010748421c();
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = uVar2;
    FUN_1074178c4(uVar2);
    auStack_60[0] = 0;
    func_0x00010787c6e8(&lStack_48,uVar2,uVar1,auStack_60);
    for (; lStack_48 != lStack_40; lStack_48 = lStack_48 + 0x10) {
      func_0x00010724ef84(auStack_60,*(long *)(unaff_x20 + 0x18) + 8);
      (**(code **)(*unaff_x19 + 0x10))();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
    }
    func_0x0001072ba1a8(&lStack_48);
  }
  return;
}



/* Entry: 1074828a8; end: 1074828fb;  */

void FUN_1074828a8(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_2 + 8);
  iVar1 = (int)lVar3 + 0x48;
  func_0x000104c2d614();
  if ((iVar1 == 0) || (fVar4 = *(float *)(lVar3 + 0x40), fVar4 <= 0.0)) {
    uVar2 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x28);
    param_1[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20) * fVar4,
                          (float)*(undefined8 *)(lVar3 + 0x30) * fVar4);
    *param_1 = CONCAT44((float)((ulong)uVar5 >> 0x20) * fVar4,(float)uVar5 * fVar4);
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}



/* Entry: 1074828fc; end: 107482953;  */

undefined8 FUN_1074828fc(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  func_0x00010748421c();
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = lVar2 + 0xa8;
  func_0x000104c2d614();
  if ((uVar1 & 1) == 0) {
    FUN_107482954(lVar2 + 0x48,*(undefined8 *)(unaff_x20 + 0x240),*(undefined8 *)(unaff_x19 + 8));
    FUN_107482954(lVar2 + 0xa8,*(undefined8 *)(unaff_x20 + 0x240),*(undefined8 *)(unaff_x19 + 8));
  }
  return 0;
}



/* Entry: 107482954; end: 1074829d7;  */

void FUN_107482954(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_120 [112];
  undefined1 auStack_b0 [104];
  byte bStack_48;
  
  func_0x0001074db204(auStack_b0,param_3,param_1);
  FUN_1073bc854(auStack_b0);
  if (((bStack_48 & 1) == 0) && (FUN_10747b8dc(param_2,param_1), param_2 != 0)) {
    FUN_1074db244(auStack_120,param_3,param_2);
    FUN_1073bc854(auStack_120);
  }
  return;
}



/* Entry: 1074829d8; end: 1074829f3;  */

void FUN_1074829d8(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1074829f4; end: 107482a7b;  */

long FUN_1074829f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107482a7c; end: 107482a9b;  */

void FUN_107482a7c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107482a9c();
  }
  return;
}



/* Entry: 107482a9c; end: 107482abf;  */

undefined8 FUN_107482a9c(undefined8 param_1)

{
  FUN_107482ac0(param_1,0);
  return param_1;
}



/* Entry: 107482ac0; end: 107482ad7;  */

void FUN_107482ac0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107482a54(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107482ad8; end: 107482af3;  */

void FUN_107482ad8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107482a54(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107482af4; end: 107482b1b;  */

void FUN_107482af4(long param_1)

{
  func_0x0001072ca524(param_1 + 0x20);
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107482b3c();
  }
  return;
}


