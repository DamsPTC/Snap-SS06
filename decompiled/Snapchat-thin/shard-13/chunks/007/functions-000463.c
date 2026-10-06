/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aae29c0; end: 10aae29f7;  */

undefined8 FUN_10aae29c0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c441f0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aae29f8; end: 10aae29fb;  */

void FUN_10aae29f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae29fc; end: 10aae2ab3;  */

long * FUN_10aae29fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x1a8;
    (*(code *)**(undefined8 **)(lVar2 + -0x1a8))();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aae2ab4; end: 10aae2b1b;  */

void FUN_10aae2ab4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_2[1];
  for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x220) {
    (**(code **)(*param_1 + 0x10))(param_1);
    FUN_10aabff3c(lVar1,param_1);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return;
}



/* Entry: 10aae2b1c; end: 10aae2bbb;  */

long FUN_10aae2b1c(long param_1)

{
  FUN_10aad9b98(param_1 + 0x68);
  FUN_10aad9b98(param_1 + 0x40);
  FUN_10a15206c(param_1 + 0x30);
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_10aae4400(param_1 + 8);
  return param_1;
}



/* Entry: 10aae2bbc; end: 10aae2e7f;  */

long * FUN_10aae2bbc(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar7 == plVar4) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aae2e80; end: 10aae2eaf;  */

void FUN_10aae2e80(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  FUN_10aae2eb0();
                    /* WARNING: Could not recover jumptable at 0x00010aae2eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aae2eb0; end: 10aae30bf;  */

void FUN_10aae2eb0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_58;
  undefined **appuStack_50 [2];
  undefined **ppuStack_40;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10aae3054);
    (*pcVar5)();
  }
  lVar9 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  lStack_58 = lVar9;
  FUN_10a4f0cfc(*(undefined8 *)(param_1 + 0x20));
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (-1 < *(char *)(param_1 + 0x1f)) {
    puVar2 = (undefined8 *)(param_1 + 8);
  }
  puVar6 = puVar2;
  _strlen(puVar2);
  func_0x000109697928(appuStack_50,puVar2,puVar6);
  func_0x0001096973b4(&ppuStack_40,appuStack_50);
  appuStack_50[0] = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(appuStack_50);
  ppuStack_70 = &PTR_SUB_110b01d60;
  lStack_68 = 0;
  if (lStack_38 != 0) {
    func_0x000107c2acd4(&ppuStack_70);
    lStack_68 = lStack_38;
    ppuStack_70 = ppuStack_40;
    if (lStack_38 != 0) {
      piVar7 = (int *)(lStack_38 + -8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  ppuStack_40 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_40);
  plVar1 = (long *)(lVar9 + 0x10);
  do {
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(lVar9 + 0xa8) == '\x01') {
          *(undefined ***)(lVar9 + 0x98) = &PTR_SUB_110b01d60;
          func_0x000107c2acd4(lVar9 + 0x98);
        }
        *(long *)(lVar9 + 0xa0) = lStack_68;
        *(undefined ***)(lVar9 + 0x98) = ppuStack_70;
        lStack_68 = 0;
        *(undefined1 *)(lVar9 + 0xa8) = 1;
        *(undefined8 *)(lVar9 + 0x10) = 2;
        FUN_109d1b4dc(lVar9 + 0x18);
        goto LAB_10aae2fec;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10aae2fec:
      ppuStack_70 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(&ppuStack_70);
      if (*(char *)(param_1 + 0x28) == '\x01') {
        if (*(char *)(param_1 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(param_1 + 8));
        }
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      lStack_58 = 0;
      if ((lVar9 != 0) && (func_0x0001092b4274(&lStack_58,lVar9), lStack_58 != 0)) {
        func_0x0001092b4274(&lStack_58);
      }
      return;
    }
  } while( true );
}



/* Entry: 10aae30c0; end: 10aae3163;  */

undefined8 * FUN_10aae30c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44278;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1b) == '\x01') && (*(char *)((long)param_1 + 0xcf) < '\0')) {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_110c442c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aae3164; end: 10aae31fb;  */

void FUN_10aae3164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44278;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1b) == '\x01') && (*(char *)((long)param_1 + 0xcf) < '\0')) {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_110c442c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae31fc; end: 10aae326b;  */

undefined8 * FUN_10aae31fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c442c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aae326c; end: 10aae32cf;  */

void FUN_10aae326c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c442c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae32d0; end: 10aae3373;  */

undefined8 * FUN_10aae32d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c442e8;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1b) == '\x01') && (*(char *)((long)param_1 + 0xcf) < '\0')) {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_110c442c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10aae3374; end: 10aae340b;  */

void FUN_10aae3374(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c442e8;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1b) == '\x01') && (*(char *)((long)param_1 + 0xcf) < '\0')) {
    __ZdlPv(param_1[0x17]);
  }
  *param_1 = &PTR_FUN_110c442c8;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    param_1[0x13] = &PTR_SUB_110b01d60;
    func_0x000107c2acd4();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aae340c; end: 10aae34cf;  */

void FUN_10aae340c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010aae3454(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aae34d0; end: 10aae372b;  */

void FUN_10aae34d0(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x25;
  ulong uVar9;
  long lVar10;
  
  plVar5 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x25 = (long *)(uVar9 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar8 <= plVar5) {
        uVar6 = 0;
        if (plVar8 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar6 * (long)plVar8);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      uVar1 = *param_2;
      lVar7 = param_2[1];
      do {
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar5) {
          if (plVar3[3] == lVar7) {
            lVar2 = plVar3[2];
            _memcmp(lVar2,uVar1,lVar7);
            if ((int)lVar2 == 0) {
              return;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar9);
          }
          else if (plVar8 <= plVar4) {
            uVar6 = 0;
            if (plVar8 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar8;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar8);
          }
          if (plVar4 != unaff_x25) break;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  plVar3 = (long *)0x48;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = (long)plVar5;
  lVar7 = *param_3;
  lVar10 = param_3[3];
  lVar2 = param_3[2];
  plVar3[3] = param_3[1];
  plVar3[2] = lVar7;
  plVar3[5] = lVar10;
  plVar3[4] = lVar2;
  plVar3[6] = param_3[4];
  param_3[2] = 0;
  param_3[3] = 0;
  lVar7 = param_3[5];
  plVar3[8] = param_3[6];
  plVar3[7] = lVar7;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[4] = 0;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar6) {
      uVar9 = uVar6;
    }
    FUN_10aad96ec(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar8 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar8 <= plVar5) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar3 = *plVar5;
    *plVar5 = (long)plVar3;
    *(long **)(lVar7 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar3 == 0) goto LAB_10aae36ec;
    plVar5 = *(long **)(*plVar3 + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar5) {
      uVar9 = 0;
      if (plVar8 != (long *)0x0) {
        uVar9 = (ulong)plVar5 / (ulong)plVar8;
      }
      plVar5 = (long *)((long)plVar5 - uVar9 * (long)plVar8);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar3 = *plVar5;
  }
  *plVar5 = (long)plVar3;
LAB_10aae36ec:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10aae372c; end: 10aae37ab;  */

void FUN_10aae372c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  long lVar2;
  long *extraout_x8;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  (**(code **)(*param_1 + 0x1d8))(&uStack_38);
  if ((bStack_28 & 1) == 0) {
    FUN_10a108fd4(param_2);
  }
  else if ((uStack_30 & 3) == 0) {
    func_0x00010742a308(param_3,uStack_30 >> 2);
    if ((bStack_28 & 1) != 0) {
      _memcpy(*param_3,uStack_38,uStack_30);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aae379c);
    (*pcVar1)();
  }
  FUN_10a324f10(param_2);
  lVar2 = 0x238;
  __Znwm();
  FUN_10aae3804();
  *extraout_x8 = lVar2 + 0x18;
  extraout_x8[1] = lVar2;
  return;
}



/* Entry: 10aae37ac; end: 10aae3803;  */

void FUN_10aae37ac(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x238;
  __Znwm();
  FUN_10aae3804();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10aae3804; end: 10aae384b;  */

undefined8 * FUN_10aae3804(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110c44320;
  FUN_10aac68ac(param_1 + 3);
  return param_1;
}



/* Entry: 10aae384c; end: 10aae385b;  */

void FUN_10aae384c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44320;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae385c; end: 10aae387b;  */

void FUN_10aae385c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44320;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae387c; end: 10aae3887;  */

long FUN_10aae387c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  FUN_10aac3548();
  plVar4 = *(long **)(param_1 + 0x70);
  (**(code **)(*plVar4 + 0x10))(plVar4,0);
  FUN_10aae3978(param_1 + 0x220);
  func_0x00010a042d30(param_1 + 0x1d8);
  *(undefined ***)(param_1 + 0x158) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x158);
  func_0x00010aab0284(param_1 + 0x80);
  func_0x00010aae467c((undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  plVar4 = *(long **)(param_1 + 0x40);
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_10aade53c(param_1 + 0x28);
  plVar4 = *(long **)(param_1 + 0x20);
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
  return param_1 + 0x18;
}



/* Entry: 10aae3888; end: 10aae38f7;  */

void FUN_10aae3888(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_SUB_110b01d60;
  param_1[1] = 0;
  if (param_2[1] != 0) {
    func_0x000107c2acd4();
    uVar4 = *param_2;
    param_1[1] = param_2[1];
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
  }
  return;
}



/* Entry: 10aae38f8; end: 10aae38fb;  */

void FUN_10aae38f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae38fc; end: 10aae390f;  */

void FUN_10aae38fc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae3910; end: 10aae3927;  */

void FUN_10aae3910(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aae3920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10aae3928; end: 10aae395f;  */

undefined8 FUN_10aae3928(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c443b0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aae3960; end: 10aae3977;  */

void FUN_10aae3960(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae3978; end: 10aae39cf;  */

long FUN_10aae3978(long param_1)

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



/* Entry: 10aae39d0; end: 10aae39d7;  */

void FUN_10aae39d0(void)

{
  return;
}



/* Entry: 10aae39d8; end: 10aae3a0b;  */

void FUN_10aae39d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c443d0;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10aae3a0c; end: 10aae3a27;  */

void FUN_10aae3a0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c443d0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10aae3a28; end: 10aae3c9f;  */

undefined *** FUN_10aae3a28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [48];
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 *apuStack_90 [7];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_e0 = FUN_10aae3e20;
  ppuStack_d8 = &PTR_FUN_110c44440;
  FUN_10a0a2364(auStack_d0);
  puVar6 = *(undefined8 **)(param_2 + 8);
  __ZNSt3__17promiseIvEC1Ev(&uStack_108);
  __ZNSt3__17promiseIvE10get_futureEv(&uStack_110,&uStack_108);
  uStack_a0 = uStack_108;
  uStack_108 = 0;
  pcStack_98 = pcStack_e0;
  (*(code *)ppuStack_d8[2])(apuStack_90,&ppuStack_d8);
  plVar7 = (long *)puVar6[2];
  puStack_e8 = puVar6;
  if (plVar7 == (long *)0x0) {
    puVar3 = (undefined8 *)0x58;
    __Znwm();
    uVar1 = uStack_a0;
    uStack_a0 = 0;
    *puVar3 = uVar1;
    puVar3[1] = pcStack_98;
    (*(code *)apuStack_90[0][2])(puVar3 + 2,apuStack_90);
    puVar3[10] = 0x10aae3de8;
    pcStack_f8 = FUN_10aae3d18;
    ppcVar5 = &pcStack_f8;
    puStack_f0 = puVar3;
    (**(code **)*puVar6)(puVar6);
  }
  else {
    lStack_100 = 0;
    (**(code **)(*plVar7 + 0x28))(plVar7,0,&lStack_100);
    if (lStack_100 != 0) {
      func_0x0001092af97c(&lStack_100);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10aae3c30);
      (*pcVar2)();
    }
    puVar3 = (undefined8 *)0x60;
    __Znwm();
    uVar1 = uStack_a0;
    uStack_a0 = 0;
    *puVar3 = uVar1;
    puVar3[1] = pcStack_98;
    (*(code *)apuStack_90[0][2])(puVar3 + 2,apuStack_90);
    puVar3[10] = FUN_10aae3db0;
    puVar3[0xb] = plVar7;
    pcStack_f8 = FUN_10aae3ce8;
    ppcVar5 = &pcStack_f8;
    puStack_f0 = puVar3;
    (**(code **)*puVar6)(puVar6);
    __ZNSt13exception_ptrD1Ev(&lStack_100);
  }
  lStack_100 = 0;
  __ZNSt13exception_ptrD1Ev(&lStack_100);
  (*(code *)*apuStack_90[0])(apuStack_90);
  __ZNSt3__17promiseIvED1Ev(&uStack_a0);
  *param_1 = uStack_110;
  uStack_110 = 0;
  __ZNSt3__16futureIvED1Ev(&uStack_110);
  __ZNSt3__17promiseIvED1Ev(&uStack_108);
  pppuVar4 = &ppuStack_d8;
  (*(code *)*ppuStack_d8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  if ((int)ppcVar5 != 0) {
    func_0x000104bd46a0();
    __ZNSt3__17promiseIvED1Ev(&uStack_108);
    (*(code *)*ppuStack_d8)(&ppuStack_d8);
  }
  __Unwind_Resume(pppuVar4);
  FUN_10a042ab0(ppcVar5,&PTR_DAT_110c44460);
  pppuVar4 = pppuVar4 + 1;
  if ((int)ppcVar5 == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  return pppuVar4;
}



/* Entry: 10aae3ca0; end: 10aae3cdb;  */

long FUN_10aae3ca0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c44460);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10aae3cdc; end: 10aae3ce7;  */

undefined ** FUN_10aae3cdc(void)

{
  return &PTR_DAT_110c44460;
}



/* Entry: 10aae3ce8; end: 10aae3d17;  */

void FUN_10aae3ce8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x58);
  FUN_10aae3d18();
                    /* WARNING: Could not recover jumptable at 0x00010aae3d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aae3d18; end: 10aae3daf;  */

void FUN_10aae3d18(long param_1)

{
  (**(code **)(param_1 + 8))();
  __ZNSt3__17promiseIvE9set_valueEv(param_1);
  (**(code **)(param_1 + 0x50))(param_1);
  return;
}



/* Entry: 10aae3db0; end: 10aae3e1f;  */

void FUN_10aae3db0(long param_1)

{
  if (param_1 != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x10))();
    __ZNSt3__17promiseIvED1Ev(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aae3e20; end: 10aae3e3f;  */

void FUN_10aae3e20(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010aae3e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  FUN_10a06186c();
  plVar2 = (long *)plVar1[4];
  if (plVar2 == plVar1 + 1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return;
    }
    lVar3 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aae3e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3))();
  return;
}



/* Entry: 10aae3e40; end: 10aae3e83;  */

void FUN_10aae3e40(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)(param_1 + 8)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar2 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aae3e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}



/* Entry: 10aae3e84; end: 10aae3efb;  */

void FUN_10aae3e84(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c44440;
  plVar1 = *(long **)(param_2 + 0x20);
  if (plVar1 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    if (plVar1 == (long *)(param_2 + 8)) {
      param_1[4] = param_1 + 1;
                    /* WARNING: Could not recover jumptable at 0x00010aae3ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x20) + 0x18))();
      return;
    }
    (**(code **)(*plVar1 + 0x10))();
    param_1[4] = plVar1;
  }
  return;
}



/* Entry: 10aae3efc; end: 10aae3f4f;  */

void FUN_10aae3efc(long param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2d8) & 1) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x2c8) = 3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aae3f1c);
  (*pcVar1)();
}



/* Entry: 10aae3f50; end: 10aae3f9b;  */

void FUN_10aae3f50(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (((*(byte *)(lVar2 + 0x2d8) & 1) != 0) &&
     (__ZNSt13exception_ptraSERKS_(lVar2 + 0x2d0,param_1), (*(byte *)(lVar2 + 0x2d8) & 1) != 0)) {
    *(undefined1 *)(lVar2 + 0x2c8) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aae3f9c);
  (*pcVar1)();
}



/* Entry: 10aae3f9c; end: 10aae3fcf;  */

void FUN_10aae3f9c(void)

{
  return;
}



/* Entry: 10aae3fd0; end: 10aae4007;  */

void FUN_10aae3fd0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10aae3fd0(*param_1);
    FUN_10aae3fd0(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10aae4008; end: 10aae408b;  */

long * FUN_10aae4008(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  plVar4 = (long *)(param_1 + 8);
  while (plVar5 = plVar4, plVar3 != (long *)0x0) {
    while( true ) {
      plVar5 = plVar3;
      uVar1 = *param_3;
      FUN_10a003d5c(uVar1,param_3[1],plVar5[4],plVar5[5]);
      if (((uint)uVar1 >> 7 & 1) != 0) break;
      lVar2 = plVar5[4];
      FUN_10a003d5c(lVar2,plVar5[5],*param_3,param_3[1]);
      if (((uint)lVar2 >> 7 & 1) == 0) goto LAB_10aae4074;
      plVar4 = plVar5 + 1;
      plVar3 = (long *)*plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10aae4074;
    }
    plVar4 = plVar5;
    plVar3 = (long *)*plVar5;
  }
LAB_10aae4074:
  *param_2 = plVar5;
  return plVar4;
}



/* Entry: 10aae408c; end: 10aae409b;  */

void FUN_10aae408c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c444c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae409c; end: 10aae40bb;  */

void FUN_10aae409c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c444c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae40bc; end: 10aae40c3;  */

void FUN_10aae40bc(void)

{
  return;
}



/* Entry: 10aae40c4; end: 10aae42f3;  */

void FUN_10aae40c4(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)0x1137ec208;
  __ZNSt3__15mutex4lockEv(0x1137ec208);
  *param_1 = 0;
  param_1[1] = 0;
  if (plRam00000001137ec250 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = plRam00000001137ec250;
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = plVar8;
    plVar4 = plRam00000001137ec248;
    if ((plVar8 != (long *)0x0) && (*param_1 = plRam00000001137ec248, plVar4 != (long *)0x0))
    goto LAB_10aae4268;
  }
  plVar3 = (long *)0x100;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110c44510;
  ppuStack_a0 = &PTR_SUB_110b01d60;
  lStack_98 = 0;
  plVar4 = plVar3;
  FUN_109d1a80c();
  lStack_90 = *plVar4;
  plVar4 = plVar3 + 3;
  plVar3[4] = 0;
  *plVar4 = 0;
  plVar3[6] = 0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 7) = 0x3f800000;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  *(undefined4 *)(plVar3 + 0xc) = 0x3f800000;
  plVar3[0xd] = 0x32aaaba7;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  plVar3[0x13] = 0;
  plVar3[0x12] = 0;
  plVar3[0x14] = 0;
  plVar3[0x16] = lStack_98;
  plVar3[0x15] = (long)ppuStack_a0;
  if (plVar3[0x16] != 0) {
    piVar6 = (int *)(plVar3[0x16] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3[0x17] = lStack_90;
  plVar3[0x18] = (long)&UNK_1053a6a3c;
  plVar3[0x19] = (long)&PTR_DAT_110ae9180;
  puStack_88 = &UNK_1053a6a3c;
  ppuStack_80 = &PTR_DAT_110ae9180;
  func_0x0001092ba41c(&lStack_90);
  ppuStack_a0 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(&ppuStack_a0);
  *param_1 = plVar4;
  param_1[1] = plVar3;
  if (plVar8 == (long *)0x0) {
LAB_10aae423c:
    plVar8 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    plVar3 = plVar8 + 1;
    do {
      lVar7 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    plVar4 = (long *)*param_1;
    plVar3 = (long *)param_1[1];
    if (plVar3 != (long *)0x0) goto LAB_10aae423c;
  }
  bVar2 = plRam00000001137ec250 != (long *)0x0;
  plRam00000001137ec248 = plVar4;
  plRam00000001137ec250 = plVar3;
  if (bVar2) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10aae4268:
  puVar5 = (undefined8 *)0x1137ec208;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (param_2 != 0) {
      func_0x000104bd46a0();
      func_0x00010969664c(&ppuStack_a0);
      __ZNSt3__119__shared_weak_countD2Ev(plVar3);
      __ZdlPv();
      FUN_10aae4400(param_1);
      __ZNSt3__15mutex6unlockEv(0x1137ec208);
    }
    __Unwind_Resume();
    *puVar5 = &PTR_FUN_110c44510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return;
  }
  return;
}



/* Entry: 10aae42f4; end: 10aae4303;  */

void FUN_10aae42f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae4304; end: 10aae4323;  */

void FUN_10aae4304(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44510;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae4324; end: 10aae43fb;  */

void FUN_10aae4324(long param_1)

{
  long *plVar1;
  long lVar2;
  
  func_0x0001092ba41c(param_1 + 0xb8);
  *(undefined ***)(param_1 + 0xa8) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  plVar1 = (long *)*(long *)(param_1 + 0x50);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010aae3454(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x28);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1[5] = (long)&PTR_SUB_110b01d60;
    func_0x000107c2acd4();
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae43fc; end: 10aae43ff;  */

void FUN_10aae43fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae4400; end: 10aae4457;  */

long FUN_10aae4400(long param_1)

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



/* Entry: 10aae4458; end: 10aae4467;  */

void FUN_10aae4458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44560;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae4468; end: 10aae4487;  */

void FUN_10aae4468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c44560;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae4488; end: 10aae45cf;  */

void FUN_10aae4488(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lStack_28;
  
  if (*(long *)(param_1 + 800) != 0) {
    *(long *)(param_1 + 0x328) = *(long *)(param_1 + 800);
    __ZdlPv();
  }
  func_0x00010a061620(param_1 + 0x2f8);
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    FUN_10aad7da8(param_1 + 0x198);
  }
  FUN_10a235538(param_1 + 0x188);
  (*(code *)**(undefined8 **)(param_1 + 0x140))(param_1 + 0x140);
  *(undefined ***)(param_1 + 0x128) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4(param_1 + 0x128);
  lStack_28 = param_1 + 0x110;
  FUN_10a22d224(&lStack_28);
  FUN_10a22ce48(param_1 + 0xa8);
  if ((*(char *)(param_1 + 0xa0) == '\x01') && (*(long *)(param_1 + 0x88) != 0)) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  FUN_10a15206c(param_1 + 0x60);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  plVar4 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10aae45d0; end: 10aae45d3;  */

void FUN_10aae45d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae45d4; end: 10aae46d3;  */

void FUN_10aae45d4(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = param_1 + 2;
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
    param_2[1] = param_1;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1 != (long *)0x0) {
      plVar1 = param_1 + 1;
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
        (**(code **)(*param_1 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_1);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aae46d4; end: 10aae46e3;  */

void FUN_10aae46d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c445b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aae46e4; end: 10aae4703;  */

void FUN_10aae46e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c445b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae4704; end: 10aae4723;  */

void FUN_10aae4704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aae470c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x28))();
  return;
}



/* Entry: 10aae4724; end: 10aae4743;  */

void FUN_10aae4724(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c44600;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae4744; end: 10aae480f;  */

void FUN_10aae4744(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_58 [4];
  undefined1 auStack_38 [8];
  
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5 + 0x11) & 1) == 0) {
      auStack_58[0] = 0;
      lVar6 = plVar5[2];
      puVar4 = auStack_58;
      __ZNSt13exception_ptrD1Ev(puVar4);
      plVar5 = *(long **)(param_1 + 0x18);
      if ((lVar6 == 0) && (0 < plVar5[1])) {
        __ZNSt3__115future_categoryEv();
        __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_58,4,puVar4);
        FUN_10a084fb0(auStack_38,auStack_58);
        __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(plVar5,auStack_38);
        __ZNSt13exception_ptrD1Ev(auStack_38);
        __ZNSt3__112future_errorD1Ev(auStack_58);
        plVar5 = *(long **)(param_1 + 0x18);
      }
    }
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}



/* Entry: 10aae4810; end: 10aae4813;  */

void FUN_10aae4810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aae4814; end: 10aae48af;  */

void FUN_10aae4814(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  __ZNSt13exception_ptrD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10aae48b0; end: 10aae4907;  */

void FUN_10aae48b0(long *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if (param_1[0x14] != 0) {
      param_1[0x15] = param_1[0x14];
      __ZdlPv();
    }
    param_1[0x12] = (long)&PTR_SUB_110b01d60;
    func_0x000107c2acd4(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aae4900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10aae4908; end: 10aae495f;  */

long FUN_10aae4908(long param_1)

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



/* Entry: 10aae4960; end: 10aae4b4f;  */

void FUN_10aae4960(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar9 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_98 = uVar1;
  uStack_90 = uVar2;
  uStack_88 = uVar9;
  FUN_10aac7374(&ppuStack_58,&uStack_98,*(undefined8 *)(param_2 + 0x20));
  func_0x000107c2acec(&ppuStack_80);
  ppuStack_80 = &PTR_DAT_110b05928;
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  if (lStack_78 != lStack_50) {
    func_0x000107c2acd4(&ppuStack_80);
    lStack_78 = lStack_50;
    ppuStack_80 = ppuStack_58;
    if (lStack_50 != 0) {
      piVar6 = (int *)(lStack_50 + -8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = *piVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  lVar8 = **(long **)(param_2 + 0x10);
  lStack_70 = uVar1;
  lStack_68 = uVar2;
  uStack_60 = uVar9;
  if (lVar8 == 0) {
    FUN_10a0843f8(3);
  }
  else {
    __ZNSt3__15mutex4lockEv(lVar8 + 0x18);
    if ((*(byte *)(lVar8 + 0x88) & 1) == 0) {
      uStack_48 = 0;
      lVar7 = *(long *)(lVar8 + 0x10);
      __ZNSt13exception_ptrD1Ev(&uStack_48);
      if (lVar7 == 0) {
        *(long *)(lVar8 + 0x98) = lStack_78;
        *(undefined ***)(lVar8 + 0x90) = ppuStack_80;
        *(long *)(lVar8 + 0xa8) = lStack_68;
        *(long *)(lVar8 + 0xa0) = lStack_70;
        lStack_78 = 0;
        *(undefined ***)(lVar8 + 0x90) = &PTR_DAT_110b05928;
        *(undefined8 *)(lVar8 + 0xb0) = uStack_60;
        lStack_68 = 0;
        uStack_60 = 0;
        lStack_70 = 0;
        *(uint *)(lVar8 + 0x88) = *(uint *)(lVar8 + 0x88) | 5;
        __ZNSt3__118condition_variable10notify_allEv(lVar8 + 0x58);
        __ZNSt3__15mutex6unlockEv(lVar8 + 0x18);
        if (lStack_70 != 0) {
          lStack_68 = lStack_70;
          __ZdlPv();
        }
        ppuStack_80 = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(&ppuStack_80);
        ppuStack_58 = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(&ppuStack_58);
        return;
      }
    }
    FUN_10a0843f8(2);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aae4af8);
  (*pcVar5)();
}



/* Entry: 10aae4b50; end: 10aae4bb7;  */

long FUN_10aae4b50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10aae4bb8; end: 10aae4c67;  */

void FUN_10aae4bb8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  __ZNSt13exception_ptrC1ERKS_(auStack_38,param_1);
  plVar2 = *(long **)(param_2 + 0x10);
  __ZNSt13exception_ptrC1ERKS_(auStack_30,auStack_38);
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_28,auStack_30);
    __ZNSt3__117__assoc_sub_state13set_exceptionESt13exception_ptr(lVar3,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_30);
    __ZNSt13exception_ptrD1Ev(auStack_38);
    return;
  }
  FUN_10a0843f8(3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aae4c3c);
  (*pcVar1)();
}



/* Entry: 10aae4c68; end: 10aae4cbf;  */

long FUN_10aae4c68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
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



/* Entry: 10aae4cc0; end: 10aae4ebf;  */

char * FUN_10aae4cc0(char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar12 = &PTR___tlv_bootstrap_11340d750;
    ppuVar9 = ppuVar12;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar9 & 1) == 0) {
      ppuVar9 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar12 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    plVar15 = (long *)ppuVar10[2];
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[1];
      bVar6 = *(byte *)(lVar13 + 0x42) | *(byte *)(lVar13 + 0x43);
      if ((((bVar6 & 1) != 0) || ((*(byte *)(lVar13 + 0x3f) & 1) != 0)) ||
         (*(char *)(lVar13 + 0x40) == '\x01')) {
        uVar17 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar16 = cntvct_el0;
        if (uVar17 != 1000000000) {
          uVar4 = 0;
          if (uVar17 != 0) {
            uVar4 = uVar16 / uVar17;
          }
          uVar5 = 0;
          if (uVar17 != 0) {
            uVar5 = ((uVar16 - uVar4 * uVar17) * 1000000000) / uVar17;
          }
          uVar16 = uVar5 + uVar4 * 1000000000;
        }
        if (*(char *)(plVar15[1] + 0x40) == '\x01') {
          uVar17 = *(ulong *)(param_1 + 8);
          if (uVar17 <= uVar16) {
            lVar13 = *plVar15;
            __ZNSt3__15mutex4lockEv(lVar13 + 0x700);
            FUN_10a15387c((double)(uVar16 - uVar17),lVar13,lVar13 + 0x700,uVar17,uVar16);
            __ZNSt3__15mutex6unlockEv(lVar13 + 0x700);
          }
        }
        lVar13 = lRam00000001137ec198;
        if ((bVar6 & 1) != 0) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          uVar3 = *(undefined2 *)(param_1 + 2);
          plVar11 = plVar15;
          FUN_10a1333cc();
          if (plVar11 != (long *)0x0) {
            uVar14 = 6;
            if (lRam00000001137ec198 != lVar13) {
              uVar14 = 8;
            }
            lVar1 = 0;
            if (lRam00000001137ec198 != lVar13) {
              lVar1 = lVar13;
            }
            *plVar11 = (long)&UNK_10f68e388;
            plVar11[1] = lVar1;
            plVar11[2] = uVar16;
            *(undefined4 *)(plVar11 + 3) = uVar2;
            *(undefined2 *)((long)plVar11 + 0x1c) = uVar3;
            *(undefined1 *)((long)plVar11 + 0x1e) = uVar14;
            if ((*(byte *)(plVar15 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10aae4eb8);
              (*pcVar8)();
            }
            plVar15[0x18] = plVar15[0x18] + 1;
          }
        }
      }
      if (((*(char *)(plVar15[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
         (plVar15 = (long *)plVar15[0xb], plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(param_1 + 0x10));
      }
    }
  }
  return param_1;
}



/* Entry: 10aae4ec0; end: 10aae4f33;  */

void FUN_10aae4ec0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aae4f34);
  (*pcVar1)();
}



/* Entry: 10aae4f34; end: 10aae4f7b;  */

long * FUN_10aae4f34(long *param_1)

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



/* Entry: 10aae4f7c; end: 10aae500f;  */

long * FUN_10aae4f7c(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    if ((param_2 & uVar2) == 0) {
      uVar3 = uVar2 & param_3;
    }
    else {
      uVar3 = param_3;
      if (param_2 <= param_3) {
        uVar3 = 0;
        if (param_2 != 0) {
          uVar3 = param_3 / param_2;
        }
        uVar3 = param_3 - uVar3 * param_2;
      }
    }
    plVar4 = *(long **)(param_1 + uVar3 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar5 = plVar4[1];
        if (param_3 == uVar5) {
          if (plVar4[2] == param_3) {
            return plVar4;
          }
        }
        else {
          if ((param_2 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (param_2 <= uVar5) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar1 * param_2;
          }
          if (uVar5 != uVar3) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aae5010; end: 10aae519f;  */

long * FUN_10aae5010(long *param_1)

{
  long lVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  puVar10 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  puVar12 = puVar10;
  if (puVar6 != puVar10) {
    uVar9 = param_1[4];
    plVar11 = puVar10 + (uVar9 >> 8);
    lVar7 = *plVar11;
    lVar8 = lVar7 + (uVar9 & 0xff) * 0x10;
    lVar1 = puVar10[param_1[5] + uVar9 >> 8] + (param_1[5] + uVar9 & 0xff) * 0x10;
    puVar12 = puVar6;
    if (lVar8 != lVar1) {
      do {
        plVar5 = *(long **)(lVar8 + 8);
        if (plVar5 != (long *)0x0) {
          puVar2 = (ulong *)(plVar5 + 1);
          do {
            uVar9 = *puVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = uVar9 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          lVar7 = *plVar11;
        }
        lVar8 = lVar8 + 0x10;
        if (lVar8 - lVar7 == 0x1000) {
          plVar11 = plVar11 + 1;
          lVar7 = *plVar11;
          lVar8 = lVar7;
        }
      } while (lVar8 != lVar1);
      puVar10 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
      puVar12 = puVar6;
    }
  }
  param_1[5] = 0;
  lVar8 = (long)puVar12 - (long)puVar10;
  while (uVar9 = lVar8 >> 3, 2 < uVar9) {
    __ZdlPv(*puVar10);
    puVar6 = (undefined8 *)param_1[2];
    puVar10 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar10;
    puVar12 = puVar6;
    lVar8 = (long)puVar6 - (long)puVar10;
  }
  if (uVar9 == 1) {
    lVar8 = 0x80;
  }
  else {
    if (uVar9 != 2) goto LAB_10aae5144;
    lVar8 = 0x100;
  }
  param_1[4] = lVar8;
LAB_10aae5144:
  if (puVar10 != puVar12) {
    do {
      puVar6 = puVar10 + 1;
      __ZdlPv(*puVar10);
      puVar10 = puVar6;
    } while (puVar6 != puVar12);
    puVar12 = (undefined8 *)param_1[1];
    puVar6 = (undefined8 *)param_1[2];
  }
  if (puVar6 != puVar12) {
    param_1[2] = (long)puVar6 + ((long)puVar12 + (7 - (long)puVar6) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aae51a0; end: 10aae5233;  */

long * FUN_10aae51a0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    if ((param_2 & uVar2) == 0) {
      uVar3 = uVar2 & param_3;
    }
    else {
      uVar3 = param_3;
      if (param_2 <= param_3) {
        uVar3 = 0;
        if (param_2 != 0) {
          uVar3 = param_3 / param_2;
        }
        uVar3 = param_3 - uVar3 * param_2;
      }
    }
    plVar4 = *(long **)(param_1 + uVar3 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar5 = plVar4[1];
        if (uVar5 == param_3) {
          if (plVar4[2] == param_3) {
            return plVar4;
          }
        }
        else {
          if ((param_2 & uVar2) == 0) {
            uVar5 = uVar5 & uVar2;
          }
          else if (param_2 <= uVar5) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar1 * param_2;
          }
          if (uVar5 != uVar3) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aae5234; end: 10aae532f;  */

void FUN_10aae5234(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar7 = (undefined8 *)param_1[2];
  if (puVar7 == (undefined8 *)param_1[3]) {
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar5 = (long)((long)puVar7 - uVar3) >> 2;
      if ((long)puVar7 - uVar3 == 0) {
        uVar5 = 1;
      }
      uVar3 = uVar5;
      FUN_10aae5330();
      puVar1 = (undefined8 *)(uVar3 + (uVar5 >> 2) * 8);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (undefined8 *)((long)puVar1 + lVar8);
        puVar6 = (undefined8 *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar5 = *param_1;
      *param_1 = uVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = uVar3 + uVar4 * 8;
      if (uVar5 != 0) {
        __ZdlPv(uVar5);
        puVar7 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar3) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (undefined8 *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 10aae5330; end: 10aae53cb;  */

void FUN_10aae5330(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  if (param_2 != (undefined8 *)0x0) {
    if (param_2[5] != 0) {
      __ZdlPv();
    }
    plVar1 = (long *)param_2[4];
    param_2[4] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    FUN_10aae53cc(param_2 + 3,0);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10aae53cc; end: 10aae541b;  */

void FUN_10aae53cc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010939f86c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10aae541c; end: 10aae545f;  */

void FUN_10aae541c(long param_1)

{
  long lStack_28;
  
  func_0x00010aae53f4(param_1 + 0x18,0);
  lStack_28 = param_1;
  FUN_10aadb0a8(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10aae5460; end: 10aae559b;  */

undefined1 **
FUN_10aae5460(undefined1 **param_1,undefined8 param_2,undefined1 *param_3,long *param_4,long param_5
             )

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  bVar3 = *(byte *)((long)param_4 + 0x17);
  uVar1 = param_4[1];
  if (-1 < (char)bVar3) {
    uVar1 = (ulong)bVar3;
  }
  if (uVar1 == 9) {
    plVar2 = (long *)*param_4;
    if (-1 < (char)bVar3) {
      plVar2 = param_4;
    }
    if (*plVar2 == 0x646f427265707075 && *(char *)(plVar2 + 1) == 'y') {
      lVar8 = *(long *)(**(long **)(param_5 + 0x10) + 0x68);
      if (lVar8 == 0) {
        lStack_50 = 0;
        lStack_48 = 0;
        uStack_40 = 0;
      }
      else {
        lStack_50 = 0;
        lStack_48 = 0;
        uStack_40 = 0;
        FUN_10a4ffb8c(&lStack_50,*(long *)(lVar8 + 0x28),*(long *)(lVar8 + 0x30),
                      (*(long *)(lVar8 + 0x30) - *(long *)(lVar8 + 0x28) >> 5) * -0xf0f0f0f0f0f0f0f)
        ;
      }
      FUN_10aaca728(param_1,param_2,param_3,lStack_50,
                    (lStack_48 - lStack_50 >> 5) * -0xf0f0f0f0f0f0f0f);
      ppuVar6 = &puStack_38;
      puStack_38 = (undefined1 *)&lStack_50;
      FUN_10a4fff4c(ppuVar6);
      return ppuVar6;
    }
  }
  *param_1 = (undefined1 *)0x0;
  param_1[1] = (undefined1 *)0x0;
  param_1[2] = (undefined1 *)0x0;
  if (param_3 != (undefined1 *)0x0) {
    if ((undefined1 *)0x1642c8590b21642 < param_3) {
      FUN_10aadad48();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aadb620);
      (*pcVar4)();
    }
    puVar5 = param_3;
    puVar7 = param_3;
    FUN_10aadad5c();
    *param_1 = puVar5;
    param_1[1] = puVar5;
    param_1[2] = puVar5 + (long)puVar7 * 0xb8;
    lVar8 = (long)param_3 * 0xb8;
    puVar7 = puVar5 + lVar8;
    puVar9 = (undefined8 *)(puVar5 + 0x70);
    do {
      puVar9[-0xe] = &PTR_DAT_110aeb838;
      puVar9[-0xd] = 0;
      puVar9[-0xb] = 0;
      puVar9[-0xc] = 0;
      puVar9[-9] = 0;
      puVar9[-10] = 0;
      puVar9[-7] = 0;
      puVar9[-8] = 0;
      *(undefined8 *)((long)puVar9 + -0x2c) = 0;
      *(undefined8 *)((long)puVar9 + -0x34) = 0;
      *(undefined8 *)((long)puVar9 + -0x24) = 1;
      *(undefined4 *)((long)puVar9 + -0x1c) = 1;
      puVar9[-3] = &DAT_10e5b4a18;
      puVar9[-2] = 0;
      puVar9[-1] = &DAT_11383d918;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      puVar9[7] = 0;
      puVar9[6] = 0;
      puVar9[8] = 0;
      puVar9 = puVar9 + 0x17;
      lVar8 = lVar8 + -0xb8;
    } while (lVar8 != 0);
    param_1[1] = puVar7;
  }
  return param_1;
}



/* Entry: 10aae559c; end: 10aae55d3;  */

void FUN_10aae559c(void)

{
  return;
}



/* Entry: 10aae55d4; end: 10aae56a3;  */

void FUN_10aae55d4(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x208))();
  FUN_10aae56a4(param_2,(ulong)plVar3 & 0xffffffff);
  if ((int)plVar3 != 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar1 = *param_2;
      uVar4 = (param_2[1] - lVar1 >> 3) * -0x3333333333333333;
      if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aae56a4);
        (*pcVar2)();
      }
      (**(code **)(*param_1 + 0x218))(param_1,uVar5);
      FUN_10aac9bc0(lVar1 + lVar6,param_1);
      (**(code **)(*param_1 + 0x220))(param_1);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while (((ulong)plVar3 & 0xffffffff) * 0x28 - lVar6 != 0);
  }
  return;
}



/* Entry: 10aae56a4; end: 10aae5727;  */

void FUN_10aae56a4(long *param_1,ulong param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar7 = param_1[1];
  lVar4 = lVar7 - *param_1 >> 3;
  bVar1 = param_2 < (ulong)(lVar4 * -0x3333333333333333);
  plVar3 = (long *)(param_2 + lVar4 * 0x3333333333333333);
  if (bVar1 || plVar3 == (long *)0x0) {
    if (bVar1) {
      lVar4 = *param_1 + param_2 * 0x28;
      while (lVar7 != lVar4) {
        lVar7 = lVar7 + -0x28;
        FUN_10a291594(lVar7);
      }
      param_1[1] = lVar4;
    }
    return;
  }
  lVar7 = param_1[1];
  if ((long *)((param_1[2] - lVar7 >> 3) * -0x3333333333333333) < plVar3) {
    lVar7 = lVar7 - *param_1;
    uVar5 = (long)plVar3 + (lVar7 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar5) {
      FUN_10a503fec();
      func_0x00010a5040b8(&plStack_68);
      __Unwind_Resume();
      lVar4 = plVar3[1];
      for (lVar7 = *plVar3; lVar7 != lVar4; lVar7 = lVar7 + 0x28) {
        (**(code **)(*param_1 + 0x10))(param_1);
        FUN_10aac9ed0(lVar7,param_1);
        (**(code **)(*param_1 + 0x20))(param_1);
      }
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * -0x6666666666666666;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar6 = 0x666666666666666;
    }
    plStack_48 = param_1;
    if (uVar6 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a504000();
    }
    lVar7 = (long)plVar2 + lVar7;
    lVar4 = (((long)plVar3 * 0x28 - 0x28U) / 0x28) * 0x28 + 0x28;
    plStack_68 = plVar2;
    plStack_60 = (long *)lVar7;
    plStack_50 = plVar2 + uVar6 * 5;
    _bzero(lVar7,lVar4);
    lVar4 = lVar7 + lVar4;
    lVar7 = lVar7 + (*param_1 - param_1[1]);
    plStack_58 = (long *)lVar4;
    func_0x00010a504044(param_1,*param_1,param_1[1],lVar7);
    plStack_68 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = lVar4;
    plStack_50 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar6 * 5);
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    func_0x00010a5040b8(&plStack_68);
  }
  else {
    if (plVar3 != (long *)0x0) {
      lVar4 = (((long)plVar3 * 0x28 - 0x28U) / 0x28) * 0x28 + 0x28;
      _bzero(lVar7,lVar4);
      lVar7 = lVar7 + lVar4;
    }
    param_1[1] = lVar7;
  }
  return;
}



/* Entry: 10aae5728; end: 10aae58af;  */

void FUN_10aae5728(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1];
  if ((long *)((param_1[2] - lVar5 >> 3) * -0x3333333333333333) < param_2) {
    lVar5 = lVar5 - *param_1;
    uVar3 = (long)param_2 + (lVar5 >> 3) * -0x3333333333333333;
    if (0x666666666666666 < uVar3) {
      FUN_10a503fec();
      func_0x00010a5040b8(&plStack_68);
      __Unwind_Resume();
      lVar2 = param_2[1];
      for (lVar5 = *param_2; lVar5 != lVar2; lVar5 = lVar5 + 0x28) {
        (**(code **)(*param_1 + 0x10))(param_1);
        FUN_10aac9ed0(lVar5,param_1);
        (**(code **)(*param_1 + 0x20))(param_1);
      }
      return;
    }
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * -0x6666666666666666;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x333333333333332 < (ulong)(lVar2 * -0x3333333333333333)) {
      uVar4 = 0x666666666666666;
    }
    plStack_48 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a504000();
    }
    lVar5 = (long)plVar1 + lVar5;
    lVar2 = (((long)param_2 * 0x28 - 0x28U) / 0x28) * 0x28 + 0x28;
    plStack_68 = plVar1;
    plStack_60 = (long *)lVar5;
    plStack_50 = plVar1 + uVar4 * 5;
    _bzero(lVar5,lVar2);
    lVar2 = lVar5 + lVar2;
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    plStack_58 = (long *)lVar2;
    func_0x00010a504044(param_1,*param_1,param_1[1],lVar5);
    plStack_68 = (long *)*param_1;
    *param_1 = lVar5;
    param_1[1] = lVar2;
    plStack_50 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar4 * 5);
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    func_0x00010a5040b8(&plStack_68);
  }
  else {
    if (param_2 != (long *)0x0) {
      lVar2 = (((long)param_2 * 0x28 - 0x28U) / 0x28) * 0x28 + 0x28;
      _bzero(lVar5,lVar2);
      lVar5 = lVar5 + lVar2;
    }
    param_1[1] = lVar5;
  }
  return;
}



/* Entry: 10aae58b0; end: 10aae5917;  */

void FUN_10aae58b0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_2[1];
  for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
    (**(code **)(*param_1 + 0x10))(param_1);
    FUN_10aac9ed0(lVar1,param_1);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return;
}



/* Entry: 10aae5918; end: 10aae5983;  */

void FUN_10aae5918(long *param_1,long *param_2)

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



/* Entry: 10aae5984; end: 10aae5be7;  */

long * FUN_10aae5984(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  
  uVar9 = (ulong)param_2;
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == uVar9) {
          if (*(int *)(plVar5 + 2) == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar8 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar1 * uVar8;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = (long *)0x20;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = uVar9;
  *(undefined4 *)(plVar5 + 2) = *param_3;
  puVar2 = (undefined8 *)0xc8;
  __Znwm();
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x18] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  puVar2[6] = 0;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 9) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0xe) = 0x3f800000;
  puVar2[0x12] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x13) = 0x3f800000;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0x3f800000;
  plVar5[3] = (long)puVar2;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    FUN_10aae5be8(param_1,uVar3);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar7;
    if (*plVar5 != 0) {
      uVar9 = *(ulong *)(*plVar5 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      *(long **)(*param_1 + uVar9 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 10aae5be8; end: 10aae5db7;  */

void FUN_10aae5be8(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if ((((ulong)plVar4 & 1) != 0) && (lVar2 = plVar6[3], plVar6[3] = 0, lVar2 != 0)) {
    func_0x00010aae6c54();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10aae5db8; end: 10aae5def;  */

void FUN_10aae5db8(ulong param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 & 1) != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = 0;
    if (lVar1 != 0) {
      func_0x00010aae6c54();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10aae5df0; end: 10aae5fff;  */

void FUN_10aae5df0(undefined8 *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar5 = param_2[1];
  if (uVar5 != 0) {
    uVar9 = (ulong)param_3;
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar10 = uVar6 & uVar9;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    lVar8 = *param_2;
    plVar3 = *(long **)(lVar8 + uVar10 * 8);
    if (plVar3 != (long *)0x0) {
      do {
        while( true ) {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_10aae5e7c;
          uVar7 = plVar3[1];
          if (uVar7 != uVar9) break;
          if ((int)plVar3[2] == param_3) {
            if ((uVar5 & uVar6) == 0) {
              uVar7 = uVar7 & uVar6;
            }
            else if (uVar5 <= uVar7) {
              uVar9 = 0;
              if (uVar5 != 0) {
                uVar9 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar9 * uVar5;
            }
            plVar2 = *(long **)(lVar8 + uVar7 * 8);
            do {
              plVar11 = plVar2;
              plVar2 = (long *)*plVar11;
            } while ((long *)*plVar11 != plVar3);
            if (plVar11 == param_2 + 2) {
LAB_10aae5f00:
              if (*plVar3 != 0) {
                uVar9 = *(ulong *)(*plVar3 + 8);
                if ((uVar5 & uVar6) == 0) {
                  uVar9 = uVar9 & uVar6;
                }
                else if (uVar5 <= uVar9) {
                  uVar10 = 0;
                  if (uVar5 != 0) {
                    uVar10 = uVar9 / uVar5;
                  }
                  uVar9 = uVar9 - uVar10 * uVar5;
                }
                if (uVar9 == uVar7) goto LAB_10aae5f38;
              }
              *(undefined8 *)(lVar8 + uVar7 * 8) = 0;
            }
            else {
              uVar9 = plVar11[1];
              if ((uVar5 & uVar6) == 0) {
                uVar9 = uVar9 & uVar6;
              }
              else if (uVar5 <= uVar9) {
                uVar10 = 0;
                if (uVar5 != 0) {
                  uVar10 = uVar9 / uVar5;
                }
                uVar9 = uVar9 - uVar10 * uVar5;
              }
              if (uVar9 != uVar7) goto LAB_10aae5f00;
            }
LAB_10aae5f38:
            lVar8 = *plVar3;
            if (lVar8 != 0) {
              uVar9 = *(ulong *)(lVar8 + 8);
              if ((uVar5 & uVar6) == 0) {
                uVar9 = uVar9 & uVar6;
              }
              else if (uVar5 <= uVar9) {
                uVar6 = 0;
                if (uVar5 != 0) {
                  uVar6 = uVar9 / uVar5;
                }
                uVar9 = uVar9 - uVar6 * uVar5;
              }
              if (uVar9 != uVar7) {
                *(long **)(*param_2 + uVar9 * 8) = plVar11;
                lVar8 = *plVar3;
              }
            }
            *plVar11 = lVar8;
            *plVar3 = 0;
            param_2[3] = param_2[3] + -1;
            uVar4 = 1;
            goto LAB_10aae5e88;
          }
        }
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar1 * uVar5;
        }
      } while (uVar7 == uVar10);
    }
  }
LAB_10aae5e7c:
  plVar3 = (long *)0x0;
  uVar4 = 0;
  param_1[1] = 0;
LAB_10aae5e88:
  *param_1 = plVar3;
  *(undefined1 *)((long)param_1 + 9) = uVar4;
  return;
}



/* Entry: 10aae6000; end: 10aae6303;  */

undefined8 FUN_10aae6000(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  uVar3 = (ulong)(int)param_2[2];
  param_2[1] = uVar3;
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10aae60a4;
          uVar9 = plVar7[1];
          if (uVar9 != uVar3) break;
          if (*(int *)(plVar7 + 2) == (int)param_2[2]) {
            return 0;
          }
        }
        if ((uVar2 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar2 <= uVar9) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar9 / uVar2;
          }
          uVar9 = uVar9 - uVar1 * uVar2;
        }
      } while (uVar9 == uVar5);
    }
  }
LAB_10aae60a4:
  if ((uVar2 == 0) || (*(float *)(param_1 + 4) * (float)uVar2 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar2) {
      uVar3 = (ulong)((uVar2 & uVar2 - 1) != 0);
    }
    uVar3 = uVar3 | uVar2 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_10aae5be8(param_1,uVar3);
    uVar2 = param_1[1];
    uVar3 = param_2[1];
  }
  uVar4 = uVar2 - 1;
  if ((uVar2 & uVar4) == 0) {
    uVar3 = uVar4 & uVar3;
  }
  else if (uVar2 <= uVar3) {
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar3 / uVar2;
    }
    uVar3 = uVar3 - uVar5 * uVar2;
  }
  lVar8 = *param_1;
  puVar6 = *(undefined8 **)(lVar8 + uVar3 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    plVar7 = param_1 + 2;
    *param_2 = *plVar7;
    *plVar7 = (long)param_2;
    *(long **)(lVar8 + uVar3 * 8) = plVar7;
    if (*param_2 == 0) goto LAB_10aae6190;
    uVar3 = *(ulong *)(*param_2 + 8);
    if ((uVar2 & uVar4) == 0) {
      uVar3 = uVar3 & uVar4;
    }
    else if (uVar2 <= uVar3) {
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar3 / uVar2;
      }
      uVar3 = uVar3 - uVar4 * uVar2;
    }
    puVar6 = (undefined8 *)(*param_1 + uVar3 * 8);
  }
  else {
    *param_2 = *puVar6;
  }
  *puVar6 = param_2;
LAB_10aae6190:
  param_1[3] = param_1[3] + 1;
  return 1;
}



/* Entry: 10aae6304; end: 10aae63db;  */

long FUN_10aae6304(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10aad09b8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar1) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a22c6f0(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10aae63dc; end: 10aae65c3;  */

undefined1  [16] FUN_10aae63dc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  plVar2 = param_1;
  FUN_10aad09b8(param_1,param_2 + 2);
  param_2[1] = (long)plVar2;
  plVar10 = (long *)param_1[1];
  if (plVar10 != (long *)0x0) {
    uVar11 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar11) == 0) {
      plVar12 = (long *)(uVar11 & (ulong)plVar2);
    }
    else {
      plVar12 = plVar2;
      if (plVar10 <= plVar2) {
        uVar6 = 0;
        if (plVar10 != (long *)0x0) {
          uVar6 = (ulong)plVar2 / (ulong)plVar10;
        }
        plVar12 = (long *)((long)plVar2 - uVar6 * (long)plVar10);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar12 * 8);
    if (plVar4 != (long *)0x0) {
      for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        plVar5 = (long *)plVar4[1];
        if (plVar5 == plVar2) {
          uVar6 = (ulong)(plVar4 + 2);
          FUN_10a22c6f0(uVar6,param_2 + 2);
          if ((uVar6 & 1) != 0) {
            uVar3 = 0;
            goto LAB_10aae659c;
          }
        }
        else {
          if (((ulong)plVar10 & uVar11) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar11);
          }
          else if (plVar10 <= plVar5) {
            uVar6 = 0;
            if (plVar10 != (long *)0x0) {
              uVar6 = (ulong)plVar5 / (ulong)plVar10;
            }
            plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar10);
          }
          if (plVar5 != plVar12) break;
        }
      }
    }
  }
  if ((plVar10 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if ((long *)0x2 < plVar10) {
      uVar11 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    uVar11 = uVar11 | (long)plVar10 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar6) {
      uVar11 = uVar6;
    }
    FUN_10aae65c4(param_1,uVar11);
  }
  uVar11 = param_1[1];
  uVar7 = param_2[1];
  uVar6 = uVar11 - 1;
  if ((uVar11 & uVar6) == 0) {
    uVar7 = uVar6 & uVar7;
  }
  else if (uVar11 <= uVar7) {
    uVar1 = 0;
    if (uVar11 != 0) {
      uVar1 = uVar7 / uVar11;
    }
    uVar7 = uVar7 - uVar1 * uVar11;
  }
  lVar9 = *param_1;
  puVar8 = *(undefined8 **)(lVar9 + uVar7 * 8);
  if (puVar8 == (undefined8 *)0x0) {
    plVar2 = param_1 + 2;
    *param_2 = *plVar2;
    *plVar2 = (long)param_2;
    *(long **)(lVar9 + uVar7 * 8) = plVar2;
    if (*param_2 == 0) goto LAB_10aae658c;
    uVar7 = *(ulong *)(*param_2 + 8);
    if ((uVar11 & uVar6) == 0) {
      uVar7 = uVar7 & uVar6;
    }
    else if (uVar11 <= uVar7) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar7 / uVar11;
      }
      uVar7 = uVar7 - uVar6 * uVar11;
    }
    puVar8 = (undefined8 *)(*param_1 + uVar7 * 8);
  }
  else {
    *param_2 = *puVar8;
  }
  *puVar8 = param_2;
LAB_10aae658c:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar4 = param_2;
LAB_10aae659c:
  auVar13._8_8_ = uVar3;
  auVar13._0_8_ = plVar4;
  return auVar13;
}



/* Entry: 10aae65c4; end: 10aae6793;  */

long * FUN_10aae65c4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar2 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar2 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return plVar2;
    }
    plVar2 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar2) {
      plVar2 = (long *)(1L << (-LZCOUNT((long)plVar2 + -1) & 0x3fU));
    }
    if (param_2 <= plVar2) {
      param_2 = plVar2;
    }
    if (plVar9 <= param_2) {
      return plVar2;
    }
    if (param_2 == (long *)0x0) {
      plVar2 = (long *)*param_1;
      *param_1 = 0;
      if (plVar2 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return plVar2;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm();
    plVar2 = (long *)*param_1;
    *param_1 = lVar1;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar3 = 0;
        if (param_2 != (long *)0x0) {
          uVar3 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar3 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar7 = (long *)*plVar4;
      while (plVar7 != (long *)0x0) {
        plVar8 = (long *)plVar7[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar3 = 0;
          if (param_2 != (long *)0x0) {
            uVar3 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar3 * (long)param_2);
        }
        plVar6 = plVar7;
        if (plVar8 != plVar9) {
          lVar1 = *param_1;
          if (*(long *)(lVar1 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar1 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar1 + (long)plVar8 * 8);
            **(long **)(lVar1 + (long)plVar8 * 8) = (long)plVar7;
            plVar6 = plVar4;
          }
        }
        plVar4 = plVar6;
        plVar7 = (long *)*plVar6;
      }
    }
    return plVar2;
  }
  func_0x000109ffded8();
  plVar9 = plVar2;
  FUN_10aad09b8();
  plVar7 = (long *)plVar2[1];
  if (plVar7 != (long *)0x0) {
    uVar5 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar5) == 0) {
      plVar8 = (long *)(uVar5 & (ulong)plVar9);
    }
    else {
      plVar8 = plVar9;
      if (plVar7 <= plVar9) {
        uVar3 = 0;
        if (plVar7 != (long *)0x0) {
          uVar3 = (ulong)plVar9 / (ulong)plVar7;
        }
        plVar8 = (long *)((long)plVar9 - uVar3 * (long)plVar7);
      }
    }
    plVar2 = *(long **)(*plVar2 + (long)plVar8 * 8);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      do {
        if (plVar2 == (long *)0x0) {
          return (long *)0x0;
        }
        plVar6 = (long *)plVar2[1];
        if (plVar6 == plVar9) {
          uVar3 = (ulong)(plVar2 + 2);
          FUN_10a22c6f0(uVar3,plVar4);
          if ((uVar3 & 1) != 0) {
            return plVar2;
          }
        }
        else {
          if (((ulong)plVar7 & uVar5) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar5);
          }
          else if (plVar7 <= plVar6) {
            uVar3 = 0;
            if (plVar7 != (long *)0x0) {
              uVar3 = (ulong)plVar6 / (ulong)plVar7;
            }
            plVar6 = (long *)((long)plVar6 - uVar3 * (long)plVar7);
          }
          if (plVar6 != plVar8) {
            return (long *)0x0;
          }
        }
        plVar2 = (long *)*plVar2;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10aae6794; end: 10aae686b;  */

long FUN_10aae6794(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10aad09b8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar1) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a22c6f0(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10aae686c; end: 10aae6957;  */

long * FUN_10aae686c(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar4 = (long)*param_2 + 0x9e3779b9;
    uVar4 = (long)param_2[1] + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
    uVar4 = (ulong)((param_2[2] & 0xff00U | param_2[3] & 0xffU) + 0x9e3779b9) + uVar4 * 0x40 +
            (uVar4 >> 2) ^ uVar4;
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((*(int *)(plVar6 + 2) == *param_2 && *(int *)((long)plVar6 + 0x14) == param_2[1]) &&
             (*(uint *)(plVar6 + 3) == param_2[2] && *(uint *)((long)plVar6 + 0x1c) == param_2[3]))
          {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}


