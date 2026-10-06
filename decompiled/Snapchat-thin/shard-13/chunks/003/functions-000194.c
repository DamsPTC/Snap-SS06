/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a368df4; end: 10a368e4f;  */

void FUN_10a368df4(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a368e50(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a368e50; end: 10a368f07;  */

void FUN_10a368e50(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc6ca0;
    plStack_40[1] = *param_3;
    plStack_38 = plVar2;
    FUN_10a368f08(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368f04);
  (*pcVar1)();
}



/* Entry: 10a368f08; end: 10a368feb;  */

void FUN_10a368f08(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a368fec);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a368fec; end: 10a369017;  */

undefined8 FUN_10a368fec(void)

{
  return 0;
}



/* Entry: 10a369018; end: 10a369073;  */

void FUN_10a369018(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a369074(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a369074; end: 10a369133;  */

void FUN_10a369074(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc6cd8;
    lVar3 = *param_3;
    *(int *)(plStack_40 + 2) = (int)param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a369134(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a369130);
  (*pcVar1)();
}



/* Entry: 10a369134; end: 10a369217;  */

void FUN_10a369134(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a369218);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a369218; end: 10a369243;  */

undefined8 FUN_10a369218(void)

{
  return 0;
}



/* Entry: 10a369244; end: 10a36929f;  */

void FUN_10a369244(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3692a0(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a3692a0; end: 10a369357;  */

void FUN_10a3692a0(undefined8 param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((*(byte *)(plVar2 + 0x3c) & 1) != 0) {
    plStack_40 = (long *)plVar2[4];
    if (plStack_40 == (long *)0x0) {
      func_0x000109899fd8(plVar2);
      plStack_40 = (long *)plVar2[4];
    }
    plVar2[4] = *plStack_40;
    plStack_40[1] = 0;
    plStack_40[2] = 0;
    *plStack_40 = (long)&PTR_FUN_110bc6d10;
    lVar3 = *param_3;
    plStack_40[2] = param_3[1];
    plStack_40[1] = lVar3;
    plStack_38 = plVar2;
    FUN_10a369358(param_1,param_2,&plStack_40);
    plVar2 = plStack_40;
    plStack_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a369354);
  (*pcVar1)();
}



/* Entry: 10a369358; end: 10a36943b;  */

void FUN_10a369358(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int aiStack_50 [2];
  long *plStack_48;
  
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x58))();
  uVar5 = *param_3;
  *param_3 = 0;
  plVar3 = plVar2;
  FUN_10a065534();
  if (plVar3 == (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a36943c);
      (*pcVar1)();
    }
    plVar3 = plVar2 + 0x1b;
  }
  aiStack_50[0] = 7;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x98))(param_2,*plVar3);
  plStack_48 = plVar4;
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,uVar5,plVar2,&UNK_10989ba24,aiStack_50);
  *param_1 = 7;
  if ((3 < aiStack_50[0]) && (plStack_48 != (long *)0x0)) {
    (**(code **)*plStack_48)();
  }
  return;
}



/* Entry: 10a36943c; end: 10a3694ab;  */

undefined8 FUN_10a36943c(void)

{
  return 0;
}



/* Entry: 10a3694ac; end: 10a3694cb;  */

void FUN_10a3694ac(long param_1)

{
  FUN_10a3694cc(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a3694cc; end: 10a36956f;  */

void FUN_10a3694cc(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a2a90b0(aiStack_30,*param_1,*param_2,param_2[1] - *param_2 >> 2);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a369570; end: 10a3695cf;  */

void FUN_10a369570(void)

{
  return;
}



/* Entry: 10a3695d0; end: 10a3695ef;  */

void FUN_10a3695d0(long param_1)

{
  FUN_10a3695f0(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a3695f0; end: 10a369693;  */

void FUN_10a3695f0(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a2e43f8(aiStack_30,*param_1,*param_2,param_2[1] - *param_2 >> 2);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a369694; end: 10a3696e3;  */

void FUN_10a369694(void)

{
  return;
}



/* Entry: 10a3696e4; end: 10a369703;  */

void FUN_10a3696e4(long param_1)

{
  FUN_10a369704(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a369704; end: 10a369797;  */

void FUN_10a369704(undefined8 *param_1)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  func_0x00010989a300(aiStack_30,*param_1);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a369798; end: 10a3697f7;  */

void FUN_10a369798(void)

{
  return;
}



/* Entry: 10a3697f8; end: 10a369817;  */

void FUN_10a3697f8(long param_1)

{
  FUN_10a369818(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a369818; end: 10a3698bb;  */

void FUN_10a369818(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a07b090(aiStack_30,*param_1,*param_2,param_2[1] - *param_2 >> 3);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a3698bc; end: 10a36991b;  */

void FUN_10a3698bc(void)

{
  return;
}



/* Entry: 10a36991c; end: 10a36993b;  */

void FUN_10a36991c(long param_1)

{
  FUN_10a36993c(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a36993c; end: 10a3699eb;  */

void FUN_10a36993c(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a3699ec(aiStack_30,*param_1,*param_2,(param_2[1] - *param_2 >> 2) * -0x5555555555555555);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a3699ec; end: 10a369afb;  */

void FUN_10a3699ec(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a0881b8(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0xc;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a369afc; end: 10a369b17;  */

void FUN_10a369afc(void)

{
  return;
}



/* Entry: 10a369b18; end: 10a369bdf;  */

void FUN_10a369b18(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar8[1] = param_2[1];
    *puVar8 = uVar9;
    puVar8 = puVar8 + 2;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a132338();
      if (param_1[1] != 0) {
        param_1[2] = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a13234c();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    uVar9 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    puVar8 = puVar2 + 2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a369be0; end: 10a369c23;  */

void FUN_10a369be0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a369c24; end: 10a369c43;  */

void FUN_10a369c24(long param_1)

{
  FUN_10a369c44(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a369c44; end: 10a369ce7;  */

void FUN_10a369c44(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a369ce8(aiStack_30,*param_1,*param_2,param_2[1] - *param_2 >> 4);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a369ce8; end: 10a369df7;  */

void FUN_10a369ce8(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a1fbd9c(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0x10;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a369df8; end: 10a369e13;  */

void FUN_10a369df8(void)

{
  return;
}



/* Entry: 10a369e14; end: 10a369f67;  */

void FUN_10a369e14(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar4 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar4 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a369fac();
      puVar9 = (undefined8 *)param_1[1];
      if (puVar9 < (undefined8 *)param_1[2]) {
        uVar10 = *param_2;
        puVar9[1] = param_2[1];
        *puVar9 = uVar10;
        puVar9 = puVar9 + 2;
      }
      else {
        lVar4 = (long)puVar9 - *param_1;
        uVar1 = (lVar4 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a369fac();
          if (param_1[1] == 0) {
            return;
          }
          param_1[2] = param_1[1];
          goto code_r0x00010bdbd7ac;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 3;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar7 = 0xfffffffffffffff;
        }
        plVar3 = param_1;
        FUN_10a369fc0();
        puVar2 = (undefined8 *)((long)plVar3 + lVar4);
        uVar10 = *param_2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar10;
        puVar9 = puVar2 + 2;
        lVar6 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lVar4 = *param_1;
        *param_1 = lVar6;
        param_1[1] = (long)puVar9;
        param_1[2] = (long)(plVar3 + uVar7 * 2);
        if (lVar4 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar9;
      return;
    }
    lVar6 = param_1[1];
    plVar3 = param_1;
    FUN_10a369fc0();
    lVar4 = (long)plVar3 + (lVar6 - lVar4);
    lVar8 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar6 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar4;
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    if (lVar6 != 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a369f68; end: 10a369fab;  */

void FUN_10a369f68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a369fac; end: 10a369fbf;  */

void FUN_10a369fac(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  FUN_10a36a014(**(undefined8 **)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));
  return;
}



/* Entry: 10a369fc0; end: 10a369ff3;  */

void FUN_10a369fc0(long param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  FUN_10a36a014(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a369ff4; end: 10a36a013;  */

void FUN_10a369ff4(long param_1)

{
  FUN_10a36a014(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a36a014; end: 10a36a0b7;  */

void FUN_10a36a014(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a36a0b8(aiStack_30,*param_1,*param_2,param_2[1] - *param_2 >> 4);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a36a0b8; end: 10a36a1c7;  */

void FUN_10a36a0b8(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a3682fc(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0x10;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a36a1c8; end: 10a36a1e3;  */

void FUN_10a36a1c8(void)

{
  return;
}



/* Entry: 10a36a1e4; end: 10a36a2f3;  */

void FUN_10a36a1e4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    lVar7 = (long)puVar1 + 0x24;
  }
  else {
    lVar7 = (long)puVar1 - *param_1;
    uVar3 = (lVar7 >> 2) * -0x71c71c71c71c71c7 + 1;
    if (0x71c71c71c71c71c < uVar3) {
      FUN_10a36a338();
      if (param_1[1] != 0) {
        param_1[2] = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 2;
    uVar5 = lVar4 * 0x1c71c71c71c71c72;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar4 * -0x71c71c71c71c71c7)) {
      uVar5 = 0x71c71c71c71c71c;
    }
    plVar2 = param_1;
    FUN_10a36a34c();
    puVar1 = (undefined8 *)((long)plVar2 + lVar7);
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    lVar7 = (long)puVar1 + 0x24;
    lVar6 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar4 = *param_1;
    *param_1 = lVar6;
    param_1[1] = lVar7;
    param_1[2] = (long)plVar2 + uVar5 * 0x24;
    if (lVar4 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar7;
  return;
}



/* Entry: 10a36a2f4; end: 10a36a337;  */

void FUN_10a36a2f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a36a338; end: 10a36a34b;  */

void FUN_10a36a338(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < 0x71c71c71c71c71d) {
    __Znwm(param_2 * 0x24);
    return;
  }
  func_0x000109ffded8();
  FUN_10a36a3b4(**(undefined8 **)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18));
  return;
}



/* Entry: 10a36a34c; end: 10a36a393;  */

void FUN_10a36a34c(long param_1,ulong param_2)

{
  if (param_2 < 0x71c71c71c71c71d) {
    __Znwm(param_2 * 0x24);
    return;
  }
  func_0x000109ffded8();
  FUN_10a36a3b4(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a36a394; end: 10a36a3b3;  */

void FUN_10a36a394(long param_1)

{
  FUN_10a36a3b4(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a36a3b4; end: 10a36a46b;  */

void FUN_10a36a3b4(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a36a46c(aiStack_30,*param_1,*param_2,(param_2[1] - *param_2 >> 2) * -0x71c71c71c71c71c7);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a36a46c; end: 10a36a57b;  */

void FUN_10a36a46c(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a368520(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0x24;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a36a57c; end: 10a36a5db;  */

void FUN_10a36a57c(void)

{
  return;
}



/* Entry: 10a36a5dc; end: 10a36a5fb;  */

void FUN_10a36a5dc(long param_1)

{
  FUN_10a36a5fc(**(undefined8 **)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10a36a5fc; end: 10a36a69f;  */

void FUN_10a36a5fc(undefined8 *param_1,long *param_2)

{
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  FUN_10a36a6a0(aiStack_30,*param_1,*param_2,param_2[1] - *param_2 >> 6);
  func_0x0001098968d0(param_1 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a36a6a0; end: 10a36a7af;  */

void FUN_10a36a6a0(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_10a368650(&iStack_58,param_2,param_3);
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
      param_3 = param_3 + 0x40;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a36a7b0; end: 10a36a80f;  */

void FUN_10a36a7b0(void)

{
  return;
}



/* Entry: 10a36a810; end: 10a36a8b3;  */

void FUN_10a36a810(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  lVar1 = **(long **)(param_1 + 0x18);
  FUN_10a36a8b4(aiStack_30,*puVar2,lVar1,(*(long **)(param_1 + 0x18))[1] - lVar1 >> 2);
  func_0x0001098968d0(puVar2 + 1,aiStack_30);
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a36a8b4; end: 10a36a9c3;  */

void FUN_10a36a8b4(undefined4 *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  (**(code **)(*param_2 + 600))(&iStack_58,param_2,param_4);
  uStack_48 = CONCAT44(uStack_54,iStack_58);
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puStack_50 = (undefined8 *)NEON_ucvtf((ulong)*(uint *)(param_3 + lVar1 * 4));
      iStack_58 = 3;
      (**(code **)(*param_2 + 0x290))(param_2,&uStack_48,lVar1,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar1 = lVar1 + 1;
    } while (param_4 != lVar1);
  }
  *param_1 = 7;
  *(undefined8 *)(param_1 + 2) = uStack_48;
  return;
}



/* Entry: 10a36a9c4; end: 10a36a9df;  */

void FUN_10a36a9c4(void)

{
  return;
}



/* Entry: 10a36a9e0; end: 10a36aaa3;  */

void FUN_10a36a9e0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  else {
    lVar7 = (long)puVar2 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a001940();
      if (param_1[1] != 0) {
        param_1[2] = param_1[1];
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return;
      }
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
    plVar3 = param_1;
    FUN_10a001954();
    puVar2 = (undefined8 *)((long)plVar3 + lVar7);
    puVar8 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar7 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar8;
    param_1[2] = (long)(plVar3 + uVar5);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar8;
  return;
}



/* Entry: 10a36aaa4; end: 10a36aae7;  */

void FUN_10a36aaa4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a36aae8; end: 10a36ac6f;  */

void FUN_10a36aae8(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  lVar1 = **(long **)(param_1 + 0x18);
  lVar4 = (*(long **)(param_1 + 0x18))[1];
  plVar2 = (long *)*puVar5;
  lVar3 = lVar4 - lVar1 >> 3;
  (**(code **)(*plVar2 + 600))(&iStack_58,plVar2,lVar3);
  puStack_48 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
  if (lVar4 != lVar1) {
    lVar4 = 0;
    do {
      FUN_10a3687dc(&iStack_58,plVar2,lVar1);
      (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_48,lVar4,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar4 = lVar4 + 1;
      lVar1 = lVar1 + 8;
    } while (lVar3 != lVar4);
  }
  aiStack_68[0] = 7;
  puStack_60 = puStack_48;
  func_0x0001098968d0(puVar5 + 1,aiStack_68);
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  return;
}



/* Entry: 10a36ac70; end: 10a36ac8b;  */

void FUN_10a36ac70(void)

{
  return;
}



/* Entry: 10a36ac8c; end: 10a36ae2f;  */

void FUN_10a36ac8c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar3 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar3 >> 2) * -0x5555555555555555) < param_2) {
    if ((undefined8 *)0x1555555555555555 < param_2) {
      FUN_10a132248();
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        uVar4 = *param_2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
        *puVar1 = uVar4;
        lVar3 = (long)puVar1 + 0xc;
      }
      else {
        lVar3 = (long)puVar1 - *param_1;
        uVar6 = (lVar3 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar6) {
          FUN_10a132248();
          if (param_1[1] == 0) {
            return;
          }
          param_1[2] = param_1[1];
          goto code_r0x00010bdbd7ac;
        }
        lVar5 = param_1[2] - *param_1 >> 2;
        uVar7 = lVar5 * 0x5555555555555556;
        if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
          uVar7 = uVar6;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
          uVar7 = 0x1555555555555555;
        }
        plVar2 = param_1;
        FUN_10a13225c();
        puVar1 = (undefined8 *)((long)plVar2 + lVar3);
        uVar4 = *param_2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
        *puVar1 = uVar4;
        lVar3 = (long)puVar1 + 0xc;
        lVar8 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar8);
        lVar5 = *param_1;
        *param_1 = lVar8;
        param_1[1] = lVar3;
        param_1[2] = (long)plVar2 + uVar7 * 0xc;
        if (lVar5 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = lVar3;
      return;
    }
    lVar5 = param_1[1];
    plVar2 = param_1;
    FUN_10a13225c();
    lVar3 = (long)plVar2 + (lVar5 - lVar3);
    lVar8 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar5 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar3;
    param_1[2] = (long)plVar2 + (long)param_2 * 0xc;
    if (lVar5 != 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a36ae30; end: 10a36ae73;  */

void FUN_10a36ae30(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a36ae74; end: 10a36b007;  */

void FUN_10a36ae74(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  lVar1 = **(long **)(param_1 + 0x18);
  lVar4 = (*(long **)(param_1 + 0x18))[1];
  plVar2 = (long *)*puVar5;
  lVar3 = (lVar4 - lVar1 >> 2) * -0x5555555555555555;
  (**(code **)(*plVar2 + 600))(&iStack_58,plVar2,lVar3);
  puStack_48 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
  if (lVar4 != lVar1) {
    lVar4 = 0;
    do {
      FUN_10a368a00(&iStack_58,plVar2,lVar1);
      (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_48,lVar4,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar4 = lVar4 + 1;
      lVar1 = lVar1 + 0xc;
    } while (lVar3 - lVar4 != 0);
  }
  aiStack_68[0] = 7;
  puStack_60 = puStack_48;
  func_0x0001098968d0(puVar5 + 1,aiStack_68);
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  return;
}



/* Entry: 10a36b008; end: 10a36b023;  */

void FUN_10a36b008(void)

{
  return;
}



/* Entry: 10a36b024; end: 10a36b177;  */

void FUN_10a36b024(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar4 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar4 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a36b1bc();
      puVar9 = (undefined8 *)param_1[1];
      if (puVar9 < (undefined8 *)param_1[2]) {
        uVar10 = *param_2;
        puVar9[1] = param_2[1];
        *puVar9 = uVar10;
        puVar9 = puVar9 + 2;
      }
      else {
        lVar4 = (long)puVar9 - *param_1;
        uVar1 = (lVar4 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a36b1bc();
          if (param_1[1] == 0) {
            return;
          }
          param_1[2] = param_1[1];
          goto code_r0x00010bdbd7ac;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 3;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7fffffffffffffef < uVar5) {
          uVar7 = 0xfffffffffffffff;
        }
        plVar3 = param_1;
        FUN_10a36b1d0();
        puVar2 = (undefined8 *)((long)plVar3 + lVar4);
        uVar10 = *param_2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar10;
        puVar9 = puVar2 + 2;
        lVar6 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lVar4 = *param_1;
        *param_1 = lVar6;
        param_1[1] = (long)puVar9;
        param_1[2] = (long)(plVar3 + uVar7 * 2);
        if (lVar4 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar9;
      return;
    }
    lVar6 = param_1[1];
    plVar3 = param_1;
    FUN_10a36b1d0();
    lVar4 = (long)plVar3 + (lVar6 - lVar4);
    lVar8 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar6 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar4;
    param_1[2] = (long)(plVar3 + (long)param_2 * 2);
    if (lVar6 != 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a36b178; end: 10a36b1bb;  */

void FUN_10a36b178(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a36b1bc; end: 10a36b1cf;  */

void FUN_10a36b1bc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int aiStack_98 [2];
  undefined8 *puStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3c != 0) {
    func_0x000109ffded8();
    puVar6 = (undefined8 *)**(undefined8 **)(puVar1 + 0x10);
    lVar2 = **(long **)(puVar1 + 0x18);
    lVar5 = (*(long **)(puVar1 + 0x18))[1];
    plVar3 = (long *)*puVar6;
    lVar4 = lVar5 - lVar2 >> 4;
    (**(code **)(*plVar3 + 600))(&iStack_88,plVar3,lVar4);
    puStack_78 = (undefined8 *)CONCAT44(uStack_84,iStack_88);
    if (lVar5 != lVar2) {
      lVar5 = 0;
      do {
        FUN_10a368c2c(&iStack_88,plVar3,lVar2);
        (**(code **)(*plVar3 + 0x290))(plVar3,&puStack_78,lVar5,&iStack_88);
        if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
          (**(code **)*puStack_80)();
        }
        lVar5 = lVar5 + 1;
        lVar2 = lVar2 + 0x10;
      } while (lVar4 != lVar5);
    }
    aiStack_98[0] = 7;
    puStack_90 = puStack_78;
    func_0x0001098968d0(puVar6 + 1,aiStack_98);
    if ((3 < aiStack_98[0]) && (puStack_90 != (undefined8 *)0x0)) {
      (**(code **)*puStack_90)();
    }
    return;
  }
  __Znwm(param_2 << 4);
  return;
}



/* Entry: 10a36b1d0; end: 10a36b203;  */

void FUN_10a36b1d0(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if (param_2 >> 0x3c != 0) {
    func_0x000109ffded8();
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
    lVar1 = **(long **)(param_1 + 0x18);
    lVar4 = (*(long **)(param_1 + 0x18))[1];
    plVar2 = (long *)*puVar5;
    lVar3 = lVar4 - lVar1 >> 4;
    (**(code **)(*plVar2 + 600))(&iStack_78,plVar2,lVar3);
    puStack_68 = (undefined8 *)CONCAT44(uStack_74,iStack_78);
    if (lVar4 != lVar1) {
      lVar4 = 0;
      do {
        FUN_10a368c2c(&iStack_78,plVar2,lVar1);
        (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_68,lVar4,&iStack_78);
        if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
          (**(code **)*puStack_70)();
        }
        lVar4 = lVar4 + 1;
        lVar1 = lVar1 + 0x10;
      } while (lVar3 != lVar4);
    }
    aiStack_88[0] = 7;
    puStack_80 = puStack_68;
    func_0x0001098968d0(puVar5 + 1,aiStack_88);
    if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
      (**(code **)*puStack_80)();
    }
    return;
  }
  __Znwm(param_2 << 4);
  return;
}



/* Entry: 10a36b204; end: 10a36b38b;  */

void FUN_10a36b204(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  lVar1 = **(long **)(param_1 + 0x18);
  lVar4 = (*(long **)(param_1 + 0x18))[1];
  plVar2 = (long *)*puVar5;
  lVar3 = lVar4 - lVar1 >> 4;
  (**(code **)(*plVar2 + 600))(&iStack_58,plVar2,lVar3);
  puStack_48 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
  if (lVar4 != lVar1) {
    lVar4 = 0;
    do {
      FUN_10a368c2c(&iStack_58,plVar2,lVar1);
      (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_48,lVar4,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar4 = lVar4 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar3 != lVar4);
  }
  aiStack_68[0] = 7;
  puStack_60 = puStack_48;
  func_0x0001098968d0(puVar5 + 1,aiStack_68);
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  return;
}



/* Entry: 10a36b38c; end: 10a36b3a7;  */

void FUN_10a36b38c(void)

{
  return;
}



/* Entry: 10a36b3a8; end: 10a36b4f7;  */

void FUN_10a36b3a8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar4 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar4 >> 3) < param_2) {
    if ((ulong)param_2 >> 0x3d != 0) {
      FUN_10a36b53c();
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        puVar9 = puVar2 + 1;
        *puVar2 = *param_2;
      }
      else {
        lVar4 = (long)puVar2 - *param_1;
        uVar1 = (lVar4 >> 3) + 1;
        if (uVar1 >> 0x3d != 0) {
          FUN_10a36b53c();
          if (param_1[1] == 0) {
            return;
          }
          param_1[2] = param_1[1];
          goto code_r0x00010bdbd7ac;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 2;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar5) {
          uVar7 = 0x1fffffffffffffff;
        }
        puVar3 = param_2;
        FUN_10a36b550();
        puVar2 = (undefined8 *)(uVar7 + lVar4);
        puVar9 = puVar2 + 1;
        *puVar2 = *param_2;
        lVar6 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(lVar6);
        lVar4 = *param_1;
        *param_1 = lVar6;
        param_1[1] = (long)puVar9;
        param_1[2] = uVar7 + (long)puVar3 * 8;
        if (lVar4 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar9;
      return;
    }
    lVar6 = param_1[1];
    puVar2 = param_2;
    FUN_10a36b550();
    lVar4 = (long)param_2 + (lVar6 - lVar4);
    lVar8 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar6 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar4;
    param_1[2] = (long)(param_2 + (long)puVar2);
    if (lVar6 != 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a36b4f8; end: 10a36b53b;  */

void FUN_10a36b4f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a36b53c; end: 10a36b54f;  */

void FUN_10a36b53c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int aiStack_98 [2];
  undefined8 *puStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3d != 0) {
    func_0x000109ffded8();
    puVar6 = (undefined8 *)**(undefined8 **)(puVar1 + 0x10);
    lVar2 = **(long **)(puVar1 + 0x18);
    lVar5 = (*(long **)(puVar1 + 0x18))[1];
    plVar3 = (long *)*puVar6;
    lVar4 = lVar5 - lVar2 >> 3;
    (**(code **)(*plVar3 + 600))(&iStack_88,plVar3,lVar4);
    puStack_78 = (undefined8 *)CONCAT44(uStack_84,iStack_88);
    if (lVar5 != lVar2) {
      lVar5 = 0;
      do {
        FUN_10a368e50(&iStack_88,plVar3,lVar2);
        (**(code **)(*plVar3 + 0x290))(plVar3,&puStack_78,lVar5,&iStack_88);
        if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
          (**(code **)*puStack_80)();
        }
        lVar5 = lVar5 + 1;
        lVar2 = lVar2 + 8;
      } while (lVar4 != lVar5);
    }
    aiStack_98[0] = 7;
    puStack_90 = puStack_78;
    func_0x0001098968d0(puVar6 + 1,aiStack_98);
    if ((3 < aiStack_98[0]) && (puStack_90 != (undefined8 *)0x0)) {
      (**(code **)*puStack_90)();
    }
    return;
  }
  __Znwm((long)puVar1 << 3);
  return;
}



/* Entry: 10a36b550; end: 10a36b583;  */

void FUN_10a36b550(ulong param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if (param_1 >> 0x3d != 0) {
    func_0x000109ffded8();
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
    lVar1 = **(long **)(param_1 + 0x18);
    lVar4 = (*(long **)(param_1 + 0x18))[1];
    plVar2 = (long *)*puVar5;
    lVar3 = lVar4 - lVar1 >> 3;
    (**(code **)(*plVar2 + 600))(&iStack_78,plVar2,lVar3);
    puStack_68 = (undefined8 *)CONCAT44(uStack_74,iStack_78);
    if (lVar4 != lVar1) {
      lVar4 = 0;
      do {
        FUN_10a368e50(&iStack_78,plVar2,lVar1);
        (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_68,lVar4,&iStack_78);
        if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
          (**(code **)*puStack_70)();
        }
        lVar4 = lVar4 + 1;
        lVar1 = lVar1 + 8;
      } while (lVar3 != lVar4);
    }
    aiStack_88[0] = 7;
    puStack_80 = puStack_68;
    func_0x0001098968d0(puVar5 + 1,aiStack_88);
    if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
      (**(code **)*puStack_80)();
    }
    return;
  }
  __Znwm(param_1 << 3);
  return;
}



/* Entry: 10a36b584; end: 10a36b70b;  */

void FUN_10a36b584(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  lVar1 = **(long **)(param_1 + 0x18);
  lVar4 = (*(long **)(param_1 + 0x18))[1];
  plVar2 = (long *)*puVar5;
  lVar3 = lVar4 - lVar1 >> 3;
  (**(code **)(*plVar2 + 600))(&iStack_58,plVar2,lVar3);
  puStack_48 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
  if (lVar4 != lVar1) {
    lVar4 = 0;
    do {
      FUN_10a368e50(&iStack_58,plVar2,lVar1);
      (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_48,lVar4,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar4 = lVar4 + 1;
      lVar1 = lVar1 + 8;
    } while (lVar3 != lVar4);
  }
  aiStack_68[0] = 7;
  puStack_60 = puStack_48;
  func_0x0001098968d0(puVar5 + 1,aiStack_68);
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  return;
}



/* Entry: 10a36b70c; end: 10a36b727;  */

void FUN_10a36b70c(void)

{
  return;
}



/* Entry: 10a36b728; end: 10a36b8cb;  */

void FUN_10a36b728(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar3 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar3 >> 2) * -0x5555555555555555) < param_2) {
    if ((undefined8 *)0x1555555555555555 < param_2) {
      FUN_10a144810();
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        uVar4 = *param_2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
        *puVar1 = uVar4;
        lVar3 = (long)puVar1 + 0xc;
      }
      else {
        lVar3 = (long)puVar1 - *param_1;
        uVar6 = (lVar3 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar6) {
          FUN_10a144810();
          if (param_1[1] == 0) {
            return;
          }
          param_1[2] = param_1[1];
          goto code_r0x00010bdbd7ac;
        }
        lVar5 = param_1[2] - *param_1 >> 2;
        uVar7 = lVar5 * 0x5555555555555556;
        if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
          uVar7 = uVar6;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
          uVar7 = 0x1555555555555555;
        }
        plVar2 = param_1;
        FUN_10a144824();
        puVar1 = (undefined8 *)((long)plVar2 + lVar3);
        uVar4 = *param_2;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
        *puVar1 = uVar4;
        lVar3 = (long)puVar1 + 0xc;
        lVar8 = (long)puVar1 - (param_1[1] - *param_1);
        _memcpy(lVar8);
        lVar5 = *param_1;
        *param_1 = lVar8;
        param_1[1] = lVar3;
        param_1[2] = (long)plVar2 + uVar7 * 0xc;
        if (lVar5 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = lVar3;
      return;
    }
    lVar5 = param_1[1];
    plVar2 = param_1;
    FUN_10a144824();
    lVar3 = (long)plVar2 + (lVar5 - lVar3);
    lVar8 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar5 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar3;
    param_1[2] = (long)plVar2 + (long)param_2 * 0xc;
    if (lVar5 != 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a36b8cc; end: 10a36b90f;  */

void FUN_10a36b8cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a36b910; end: 10a36baa3;  */

void FUN_10a36b910(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  lVar1 = **(long **)(param_1 + 0x18);
  lVar4 = (*(long **)(param_1 + 0x18))[1];
  plVar2 = (long *)*puVar5;
  lVar3 = (lVar4 - lVar1 >> 2) * -0x5555555555555555;
  (**(code **)(*plVar2 + 600))(&iStack_58,plVar2,lVar3);
  puStack_48 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
  if (lVar4 != lVar1) {
    lVar4 = 0;
    do {
      FUN_10a369074(&iStack_58,plVar2,lVar1);
      (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_48,lVar4,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar4 = lVar4 + 1;
      lVar1 = lVar1 + 0xc;
    } while (lVar3 - lVar4 != 0);
  }
  aiStack_68[0] = 7;
  puStack_60 = puStack_48;
  func_0x0001098968d0(puVar5 + 1,aiStack_68);
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  return;
}



/* Entry: 10a36baa4; end: 10a36babf;  */

void FUN_10a36baa4(void)

{
  return;
}



/* Entry: 10a36bac0; end: 10a36bc13;  */

void FUN_10a36bac0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar5 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar5 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a36bc58();
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        uVar10 = *param_2;
        puVar3[1] = param_2[1];
        *puVar3 = uVar10;
        puVar3 = puVar3 + 2;
      }
      else {
        lVar5 = (long)puVar3 - *param_1;
        uVar1 = (lVar5 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a36bc58();
          if (param_1[1] == 0) {
            return;
          }
          param_1[2] = param_1[1];
          goto code_r0x00010bdbd7ac;
        }
        uVar6 = param_1[2] - *param_1;
        uVar8 = (long)uVar6 >> 3;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7fffffffffffffef < uVar6) {
          uVar8 = 0xfffffffffffffff;
        }
        puVar4 = param_2;
        FUN_10a36bc6c();
        puVar2 = (undefined8 *)(uVar8 + lVar5);
        uVar10 = *param_2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar10;
        puVar3 = puVar2 + 2;
        lVar7 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(lVar7);
        lVar5 = *param_1;
        *param_1 = lVar7;
        param_1[1] = (long)puVar3;
        param_1[2] = uVar8 + (long)puVar4 * 0x10;
        if (lVar5 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar3;
      return;
    }
    lVar7 = param_1[1];
    puVar3 = param_2;
    FUN_10a36bc6c();
    lVar5 = (long)param_2 + (lVar7 - lVar5);
    lVar9 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lVar7 = *param_1;
    *param_1 = lVar9;
    param_1[1] = lVar5;
    param_1[2] = (long)(param_2 + (long)puVar3 * 2);
    if (lVar7 != 0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10a36bc14; end: 10a36bc57;  */

void FUN_10a36bc14(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a36bc58; end: 10a36bc6b;  */

void FUN_10a36bc58(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int aiStack_98 [2];
  undefined8 *puStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c != 0) {
    func_0x000109ffded8();
    puVar6 = (undefined8 *)**(undefined8 **)(puVar1 + 0x10);
    lVar2 = **(long **)(puVar1 + 0x18);
    lVar5 = (*(long **)(puVar1 + 0x18))[1];
    plVar3 = (long *)*puVar6;
    lVar4 = lVar5 - lVar2 >> 4;
    (**(code **)(*plVar3 + 600))(&iStack_88,plVar3,lVar4);
    puStack_78 = (undefined8 *)CONCAT44(uStack_84,iStack_88);
    if (lVar5 != lVar2) {
      lVar5 = 0;
      do {
        FUN_10a3692a0(&iStack_88,plVar3,lVar2);
        (**(code **)(*plVar3 + 0x290))(plVar3,&puStack_78,lVar5,&iStack_88);
        if ((3 < iStack_88) && (puStack_80 != (undefined8 *)0x0)) {
          (**(code **)*puStack_80)();
        }
        lVar5 = lVar5 + 1;
        lVar2 = lVar2 + 0x10;
      } while (lVar4 != lVar5);
    }
    aiStack_98[0] = 7;
    puStack_90 = puStack_78;
    func_0x0001098968d0(puVar6 + 1,aiStack_98);
    if ((3 < aiStack_98[0]) && (puStack_90 != (undefined8 *)0x0)) {
      (**(code **)*puStack_90)();
    }
    return;
  }
  __Znwm((long)puVar1 << 4);
  return;
}



/* Entry: 10a36bc6c; end: 10a36bc9f;  */

void FUN_10a36bc6c(ulong param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_88 [2];
  undefined8 *puStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if (param_1 >> 0x3c != 0) {
    func_0x000109ffded8();
    puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
    lVar1 = **(long **)(param_1 + 0x18);
    lVar4 = (*(long **)(param_1 + 0x18))[1];
    plVar2 = (long *)*puVar5;
    lVar3 = lVar4 - lVar1 >> 4;
    (**(code **)(*plVar2 + 600))(&iStack_78,plVar2,lVar3);
    puStack_68 = (undefined8 *)CONCAT44(uStack_74,iStack_78);
    if (lVar4 != lVar1) {
      lVar4 = 0;
      do {
        FUN_10a3692a0(&iStack_78,plVar2,lVar1);
        (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_68,lVar4,&iStack_78);
        if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
          (**(code **)*puStack_70)();
        }
        lVar4 = lVar4 + 1;
        lVar1 = lVar1 + 0x10;
      } while (lVar3 != lVar4);
    }
    aiStack_88[0] = 7;
    puStack_80 = puStack_68;
    func_0x0001098968d0(puVar5 + 1,aiStack_88);
    if ((3 < aiStack_88[0]) && (puStack_80 != (undefined8 *)0x0)) {
      (**(code **)*puStack_80)();
    }
    return;
  }
  __Znwm(param_1 << 4);
  return;
}



/* Entry: 10a36bca0; end: 10a36be27;  */

void FUN_10a36bca0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
  lVar1 = **(long **)(param_1 + 0x18);
  lVar4 = (*(long **)(param_1 + 0x18))[1];
  plVar2 = (long *)*puVar5;
  lVar3 = lVar4 - lVar1 >> 4;
  (**(code **)(*plVar2 + 600))(&iStack_58,plVar2,lVar3);
  puStack_48 = (undefined8 *)CONCAT44(uStack_54,iStack_58);
  if (lVar4 != lVar1) {
    lVar4 = 0;
    do {
      FUN_10a3692a0(&iStack_58,plVar2,lVar1);
      (**(code **)(*plVar2 + 0x290))(plVar2,&puStack_48,lVar4,&iStack_58);
      if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
        (**(code **)*puStack_50)();
      }
      lVar4 = lVar4 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar3 != lVar4);
  }
  aiStack_68[0] = 7;
  puStack_60 = puStack_48;
  func_0x0001098968d0(puVar5 + 1,aiStack_68);
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  return;
}



/* Entry: 10a36be28; end: 10a36be43;  */

void FUN_10a36be28(void)

{
  return;
}



/* Entry: 10a36be44; end: 10a36bed3;  */

float FUN_10a36be44(long param_1)

{
  float fVar1;
  code *pcVar2;
  
  if (*(int *)(param_1 + 8) == 3) {
    fVar1 = (float)*(double *)(param_1 + 0x10);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_1 + 0x10))) {
      fVar1 = 0.0;
    }
    return fVar1;
  }
  func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a36bec0);
  (*pcVar2)();
}



/* Entry: 10a36bed4; end: 10a36bf33;  */

void FUN_10a36bed4(undefined8 *param_1)

{
  func_0x000109898518(*param_1,param_1 + 1);
  return;
}



/* Entry: 10a36bf34; end: 10a36bf93;  */

void FUN_10a36bf34(undefined8 *param_1)

{
  func_0x00010989847c(*param_1,param_1 + 1);
  return;
}



/* Entry: 10a36bf94; end: 10a36bff7;  */

undefined4 FUN_10a36bf94(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  FUN_10a05a42c(puVar1,param_1 + 1);
  return *puVar1;
}



/* Entry: 10a36bff8; end: 10a36c05f;  */

undefined4 FUN_10a36bff8(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  func_0x00010a0655d8(puVar1,param_1 + 1);
  return *puVar1;
}



/* Entry: 10a36c060; end: 10a36c0c7;  */

undefined4 FUN_10a36c060(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  func_0x00010a1fba38(puVar1,param_1 + 1);
  return *puVar1;
}



/* Entry: 10a36c0c8; end: 10a36c12f;  */

undefined4 FUN_10a36c0c8(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  FUN_10a36c130(puVar1,param_1 + 1);
  return *puVar1;
}



/* Entry: 10a36c130; end: 10a36c173;  */

undefined8 * FUN_10a36c130(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110bc7bb8) {
    return param_1 + 1;
  }
  plVar1 = (long *)&UNK_10f685496;
  func_0x00010988bd28();
  puVar2 = (undefined8 *)*plVar1;
  func_0x00010a1f8668(puVar2,plVar1 + 1);
  uVar3 = *puVar2;
  uVar5 = puVar2[3];
  uVar4 = puVar2[2];
  extraout_x8[1] = puVar2[1];
  *extraout_x8 = uVar3;
  extraout_x8[3] = uVar5;
  extraout_x8[2] = uVar4;
  *(undefined4 *)(extraout_x8 + 4) = *(undefined4 *)(puVar2 + 4);
  return puVar2;
}



/* Entry: 10a36c174; end: 10a36c1e7;  */

void FUN_10a36c174(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_2;
  func_0x00010a1f8668(puVar1,param_2 + 1);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar1 + 4);
  return;
}



/* Entry: 10a36c1e8; end: 10a36c25b;  */

void FUN_10a36c1e8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_10a36c25c(puVar1,param_2 + 1);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  uVar4 = puVar1[7];
  uVar3 = puVar1[6];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Entry: 10a36c25c; end: 10a36c29f;  */

undefined8 * FUN_10a36c25c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  func_0x000109898688();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else if ((undefined **)*param_1 == &PTR_FUN_110ba79f8) {
    return param_1 + 1;
  }
  puVar1 = (undefined8 *)&UNK_10f685496;
  func_0x00010988bd28();
  puVar2 = (undefined8 *)*puVar1;
  func_0x00010a137904(puVar2,puVar1 + 1);
  return puVar2;
}



/* Entry: 10a36c2a0; end: 10a36c2ff;  */

void FUN_10a36c2a0(undefined8 *param_1)

{
  func_0x00010a137904(*param_1,param_1 + 1);
  return;
}



/* Entry: 10a36c300; end: 10a36c363;  */

undefined8 FUN_10a36c300(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_10a36c364(puVar1,param_1 + 1);
  return *puVar1;
}


