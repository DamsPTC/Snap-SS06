/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a5e4d70; end: 10a5e4f13;  */

void FUN_10a5e4d70(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a5e4f14; end: 10a5e4f27;  */

void FUN_10a5e4f14(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (-1 < param_2) {
    __Znwm(param_2 << 1);
    return;
  }
  func_0x000109ffded8();
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a5e4f28; end: 10a5e4f87;  */

void FUN_10a5e4f28(undefined8 *param_1,long param_2)

{
  if (-1 < param_2) {
    __Znwm(param_2 << 1);
    return;
  }
  func_0x000109ffded8();
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a5e4f88; end: 10a5e505f;  */

long * FUN_10a5e4f88(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar4 = (uVar3 >> 0x20 ^ uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar2 <= uVar4) {
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar4 / uVar2;
        }
        uVar6 = uVar4 - uVar6 * uVar2;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      do {
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar8 = plVar7[1];
        if (uVar4 - uVar8 == 0) {
          if (plVar7[2] == uVar3) {
            return plVar7;
          }
        }
        else {
          if ((uVar2 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar2 <= uVar8) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar8 / uVar2;
            }
            uVar8 = uVar8 - uVar1 * uVar2;
          }
          if (uVar8 != uVar6) {
            return (long *)0x0;
          }
        }
        plVar7 = (long *)*plVar7;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a5e5060; end: 10a5e5167;  */

long *** FUN_10a5e5060(long ***param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long ***ppplVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  long lVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long lStack_90;
  long **pplStack_88;
  ulong uStack_80;
  long **pplStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  ppplVar8 = (long ***)param_1[1];
  if ((ulong)((long)param_1[2] - (long)ppplVar8 >> 1) < param_2) {
    ppplVar9 = (long ***)*param_1;
    lVar10 = (long)ppplVar8 - (long)ppplVar9;
    uVar6 = param_2 + (lVar10 >> 1);
    uVar4 = param_2;
    if ((long)uVar6 < 0) {
      FUN_10a5e5168();
LAB_10a5e5164:
      func_0x000109ffded8();
      pcStack_58 = FUN_10a5e5168;
      ppplVar8 = (long ***)&DAT_10f62a4d8;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_109ffde64();
      pcStack_68 = FUN_10a5e517c;
      pplVar11 = ppplVar8[1];
      if ((ulong)(((long)ppplVar8[2] - (long)pplVar11 >> 3) * 0x51b3bea3677d46cf) < uVar4) {
        lVar2 = (long)pplVar11 - (long)*ppplVar8;
        uVar6 = uVar4 + (lVar2 >> 3) * 0x51b3bea3677d46cf;
        lStack_90 = lVar10;
        pplStack_88 = (long **)ppplVar9;
        uStack_80 = param_2;
        pplStack_78 = (long **)param_1;
        if (0xae4c415c9882b9 < uVar6) {
          puStack_70 = (undefined1 *)&puStack_60;
          FUN_10a04755c();
          func_0x00010a04784c(&pplStack_b8);
          __Unwind_Resume();
          _memcpy();
          ppplVar8[0x28] = (long **)0x0;
          ppplVar8[0x29] = (long **)0x0;
          ppplVar8[0x27] = (long **)0x0;
          FUN_10a5e5548(ppplVar8 + 0x27,*(long *)(uVar4 + 0x138),*(long *)(uVar4 + 0x140),
                        *(long *)(uVar4 + 0x140) - *(long *)(uVar4 + 0x138) >> 1);
          ppplVar8[0x2a] = (long **)0x0;
          ppplVar8[0x2b] = (long **)0x0;
          ppplVar8[0x2c] = (long **)0x0;
          FUN_10a5e5638(ppplVar8 + 0x2a,*(long *)(uVar4 + 0x150),*(long *)(uVar4 + 0x158),
                        (*(long *)(uVar4 + 0x158) - *(long *)(uVar4 + 0x150) >> 4) *
                        -0x5555555555555555);
          ppplVar8[0x2d] = *(long ***)(uVar4 + 0x168);
          ppplVar8[0x2e] = (long **)0x0;
          ppplVar8[0x2f] = (long **)0x0;
          ppplVar8[0x30] = (long **)0x0;
          FUN_10a18edf0(ppplVar8 + 0x2e,*(long *)(uVar4 + 0x170),*(long *)(uVar4 + 0x178),
                        (*(long *)(uVar4 + 0x178) - *(long *)(uVar4 + 0x170) >> 3) *
                        -0x5555555555555555);
          ppplVar8[0x31] = (long **)0x0;
          ppplVar8[0x32] = (long **)0x0;
          ppplVar8[0x33] = (long **)0x0;
          FUN_10a34e7c8(ppplVar8 + 0x31,*(long *)(uVar4 + 0x188),*(long *)(uVar4 + 400),
                        *(long *)(uVar4 + 400) - *(long *)(uVar4 + 0x188) >> 6);
          pplVar12 = *(long ***)(uVar4 + 0x1a8);
          pplVar11 = *(long ***)(uVar4 + 0x1a0);
          ppplVar8[0x36] = *(long ***)(uVar4 + 0x1b0);
          ppplVar8[0x35] = pplVar12;
          ppplVar8[0x34] = pplVar11;
          return ppplVar8;
        }
        lVar10 = (long)ppplVar8[2] - (long)*ppplVar8 >> 3;
        uVar7 = lVar10 * -0x5c9882b931057262;
        if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
          uVar7 = uVar6;
        }
        if (0x572620ae4c415b < (ulong)(lVar10 * 0x51b3bea3677d46cf)) {
          uVar7 = 0xae4c415c9882b9;
        }
        pplStack_98 = (long **)ppplVar8;
        if (uVar7 == 0) {
          ppplVar3 = (long ***)0x0;
          puStack_70 = (undefined1 *)&puStack_60;
        }
        else {
          ppplVar3 = ppplVar8;
          puStack_70 = (undefined1 *)&puStack_60;
          FUN_10a047570();
        }
        plStack_b0 = (long *)((long)ppplVar3 + lVar2);
        pplVar12 = (long **)(plStack_b0 + uVar4 * 0x2f);
        pplVar11 = (long **)plStack_b0;
        do {
          pplVar11[0x27] = (long *)0x0;
          pplVar11[0x26] = (long *)0x0;
          pplVar11[0x29] = (long *)0x0;
          pplVar11[0x28] = (long *)0x0;
          pplVar11[0x23] = (long *)0x0;
          pplVar11[0x22] = (long *)0x0;
          pplVar11[0x25] = (long *)0x0;
          pplVar11[0x24] = (long *)0x0;
          pplVar11[0x1f] = (long *)0x0;
          pplVar11[0x1e] = (long *)0x0;
          pplVar11[0x21] = (long *)0x0;
          pplVar11[0x20] = (long *)0x0;
          pplVar11[0x1b] = (long *)0x0;
          pplVar11[0x1a] = (long *)0x0;
          pplVar11[0x1d] = (long *)0x0;
          pplVar11[0x1c] = (long *)0x0;
          pplVar11[0x17] = (long *)0x0;
          pplVar11[0x16] = (long *)0x0;
          pplVar11[0x19] = (long *)0x0;
          pplVar11[0x18] = (long *)0x0;
          pplVar11[0x13] = (long *)0x0;
          pplVar11[0x12] = (long *)0x0;
          pplVar11[0x15] = (long *)0x0;
          pplVar11[0x14] = (long *)0x0;
          pplVar11[0xf] = (long *)0x0;
          pplVar11[0xe] = (long *)0x0;
          pplVar11[0x11] = (long *)0x0;
          pplVar11[0x10] = (long *)0x0;
          pplVar11[0xb] = (long *)0x0;
          pplVar11[10] = (long *)0x0;
          pplVar11[0xd] = (long *)0x0;
          pplVar11[0xc] = (long *)0x0;
          pplVar11[7] = (long *)0x0;
          pplVar11[6] = (long *)0x0;
          pplVar11[9] = (long *)0x0;
          pplVar11[8] = (long *)0x0;
          pplVar11[3] = (long *)0x0;
          pplVar11[2] = (long *)0x0;
          pplVar11[5] = (long *)0x0;
          pplVar11[4] = (long *)0x0;
          pplVar11[1] = (long *)0x0;
          *pplVar11 = (long *)0x0;
          *(undefined1 *)(pplVar11 + 4) = 6;
          pplVar11[0x11] = (long *)0x0;
          pplVar11[0x10] = (long *)0x0;
          pplVar11[0x13] = (long *)0x0;
          pplVar11[0x12] = (long *)0x0;
          pplVar11[0x15] = (long *)0x0;
          pplVar11[0x14] = (long *)0x0;
          pplVar11[0x17] = (long *)0x0;
          pplVar11[0x16] = (long *)0x0;
          pplVar11[0x19] = (long *)0x0;
          pplVar11[0x18] = (long *)0x0;
          pplVar11[0x1b] = (long *)0x0;
          pplVar11[0x1a] = (long *)0x0;
          pplVar11[0x1c] = (long *)0xffffffffffffffff;
          *(undefined4 *)(pplVar11 + 0x24) = 0x3f800000;
          pplVar11[0x1e] = (long *)0x0;
          pplVar11[0x1d] = (long *)0x0;
          *(undefined2 *)((long)pplVar11 + 0x1b) = 0x10f;
          *(undefined8 *)((long)pplVar11 + 0x2c) = 0;
          *(undefined8 *)((long)pplVar11 + 0x24) = 0;
          *(undefined8 *)((long)pplVar11 + 0x3c) = 0;
          *(undefined8 *)((long)pplVar11 + 0x34) = 0;
          *(undefined8 *)((long)pplVar11 + 0x4c) = 0;
          *(undefined8 *)((long)pplVar11 + 0x44) = 0;
          *(undefined2 *)((long)pplVar11 + 0x54) = 0;
          *(undefined8 *)((long)pplVar11 + 0x5c) = 0xff000000ff;
          *(undefined1 *)((long)pplVar11 + 0x65) = 7;
          *(undefined4 *)(pplVar11 + 0xd) = 1;
          *(undefined4 *)(pplVar11 + 0xf) = 0x3f800000;
          pplVar11[0x23] = (long *)0x0;
          pplVar11[0x20] = (long *)0x0;
          pplVar11[0x1f] = (long *)0x0;
          pplVar11[0x22] = (long *)0x0;
          pplVar11[0x21] = (long *)0x0;
          pplVar11[0x26] = (long *)0x0;
          pplVar11[0x25] = (long *)0x0;
          pplVar11[0x28] = (long *)0x0;
          pplVar11[0x27] = (long *)0x0;
          *(undefined4 *)(pplVar11 + 0x29) = 0x3f800000;
          pplVar11[0x2a] = (long *)0x0;
          pplVar11[0x2b] = (long *)0x0;
          pplVar11[0x2c] = (long *)0x0;
          pplVar11[0x2d] = (long *)0xffffffffffffffff;
          pplVar11[0x2e] = (long *)0xffffffffffffffff;
          pplVar11 = pplVar11 + 0x2f;
        } while (pplVar11 != pplVar12);
        pplVar11 = (long **)((long)plStack_b0 + ((long)*ppplVar8 - (long)ppplVar8[1]));
        pplStack_b8 = (long **)ppplVar3;
        plStack_a8 = (long *)pplVar12;
        pplStack_a0 = (long **)(ppplVar3 + uVar7 * 0x2f);
        FUN_10a0475b8(ppplVar8,*ppplVar8,ppplVar8[1],pplVar11);
        pplStack_b8 = *ppplVar8;
        *ppplVar8 = pplVar11;
        ppplVar8[1] = pplVar12;
        pplStack_a0 = ppplVar8[2];
        ppplVar8[2] = (long **)(ppplVar3 + uVar7 * 0x2f);
        ppplVar8 = &pplStack_b8;
        plStack_b0 = (long *)pplStack_b8;
        plStack_a8 = (long *)pplStack_b8;
        func_0x00010a04784c(ppplVar8);
      }
      else {
        pplVar12 = pplVar11;
        if (uVar4 != 0) {
          pplVar12 = pplVar11 + uVar4 * 0x2f;
          do {
            pplVar11[0x27] = (long *)0x0;
            pplVar11[0x26] = (long *)0x0;
            pplVar11[0x29] = (long *)0x0;
            pplVar11[0x28] = (long *)0x0;
            pplVar11[0x23] = (long *)0x0;
            pplVar11[0x22] = (long *)0x0;
            pplVar11[0x25] = (long *)0x0;
            pplVar11[0x24] = (long *)0x0;
            pplVar11[0x1f] = (long *)0x0;
            pplVar11[0x1e] = (long *)0x0;
            pplVar11[0x21] = (long *)0x0;
            pplVar11[0x20] = (long *)0x0;
            pplVar11[0x1b] = (long *)0x0;
            pplVar11[0x1a] = (long *)0x0;
            pplVar11[0x1d] = (long *)0x0;
            pplVar11[0x1c] = (long *)0x0;
            pplVar11[0x17] = (long *)0x0;
            pplVar11[0x16] = (long *)0x0;
            pplVar11[0x19] = (long *)0x0;
            pplVar11[0x18] = (long *)0x0;
            pplVar11[0x13] = (long *)0x0;
            pplVar11[0x12] = (long *)0x0;
            pplVar11[0x15] = (long *)0x0;
            pplVar11[0x14] = (long *)0x0;
            pplVar11[0xf] = (long *)0x0;
            pplVar11[0xe] = (long *)0x0;
            pplVar11[0x11] = (long *)0x0;
            pplVar11[0x10] = (long *)0x0;
            pplVar11[0xb] = (long *)0x0;
            pplVar11[10] = (long *)0x0;
            pplVar11[0xd] = (long *)0x0;
            pplVar11[0xc] = (long *)0x0;
            pplVar11[7] = (long *)0x0;
            pplVar11[6] = (long *)0x0;
            pplVar11[9] = (long *)0x0;
            pplVar11[8] = (long *)0x0;
            pplVar11[3] = (long *)0x0;
            pplVar11[2] = (long *)0x0;
            pplVar11[5] = (long *)0x0;
            pplVar11[4] = (long *)0x0;
            pplVar11[1] = (long *)0x0;
            *pplVar11 = (long *)0x0;
            *(undefined1 *)(pplVar11 + 4) = 6;
            pplVar11[0x11] = (long *)0x0;
            pplVar11[0x10] = (long *)0x0;
            pplVar11[0x13] = (long *)0x0;
            pplVar11[0x12] = (long *)0x0;
            pplVar11[0x15] = (long *)0x0;
            pplVar11[0x14] = (long *)0x0;
            pplVar11[0x17] = (long *)0x0;
            pplVar11[0x16] = (long *)0x0;
            pplVar11[0x19] = (long *)0x0;
            pplVar11[0x18] = (long *)0x0;
            pplVar11[0x1b] = (long *)0x0;
            pplVar11[0x1a] = (long *)0x0;
            pplVar11[0x1c] = (long *)0xffffffffffffffff;
            *(undefined4 *)(pplVar11 + 0x24) = 0x3f800000;
            pplVar11[0x1e] = (long *)0x0;
            pplVar11[0x1d] = (long *)0x0;
            *(undefined2 *)((long)pplVar11 + 0x1b) = 0x10f;
            *(undefined8 *)((long)pplVar11 + 0x2c) = 0;
            *(undefined8 *)((long)pplVar11 + 0x24) = 0;
            *(undefined8 *)((long)pplVar11 + 0x3c) = 0;
            *(undefined8 *)((long)pplVar11 + 0x34) = 0;
            *(undefined8 *)((long)pplVar11 + 0x4c) = 0;
            *(undefined8 *)((long)pplVar11 + 0x44) = 0;
            *(undefined2 *)((long)pplVar11 + 0x54) = 0;
            *(undefined8 *)((long)pplVar11 + 0x5c) = 0xff000000ff;
            *(undefined1 *)((long)pplVar11 + 0x65) = 7;
            *(undefined4 *)(pplVar11 + 0xd) = 1;
            *(undefined4 *)(pplVar11 + 0xf) = 0x3f800000;
            pplVar11[0x23] = (long *)0x0;
            pplVar11[0x20] = (long *)0x0;
            pplVar11[0x1f] = (long *)0x0;
            pplVar11[0x22] = (long *)0x0;
            pplVar11[0x21] = (long *)0x0;
            pplVar11[0x26] = (long *)0x0;
            pplVar11[0x25] = (long *)0x0;
            pplVar11[0x28] = (long *)0x0;
            pplVar11[0x27] = (long *)0x0;
            *(undefined4 *)(pplVar11 + 0x29) = 0x3f800000;
            pplVar11[0x2a] = (long *)0x0;
            pplVar11[0x2b] = (long *)0x0;
            pplVar11[0x2c] = (long *)0x0;
            pplVar11[0x2d] = (long *)0xffffffffffffffff;
            pplVar11[0x2e] = (long *)0xffffffffffffffff;
            pplVar11 = pplVar11 + 0x2f;
          } while (pplVar11 != pplVar12);
        }
        ppplVar8[1] = pplVar12;
      }
      return ppplVar8;
    }
    uVar5 = (long)param_1[2] - (long)ppplVar9;
    uVar7 = uVar5;
    if (uVar5 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7ffffffffffffffd < uVar5) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar2 = 0;
    }
    else {
      if ((long)uVar7 < 0) goto LAB_10a5e5164;
      lVar2 = uVar7 << 1;
      __Znwm();
    }
    lVar1 = lVar2 + lVar10;
    _bzero(lVar1,param_2 << 1);
    ppplVar8 = (long ***)(lVar1 + (lVar10 >> 1) * -2);
    ppplVar3 = ppplVar8;
    _memcpy(ppplVar8,ppplVar9,lVar10);
    *param_1 = (long **)ppplVar8;
    param_1[1] = (long **)(lVar1 + param_2 * 2);
    param_1[2] = (long **)(lVar2 + uVar7 * 2);
    if (ppplVar9 != (long ***)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(ppplVar9);
      return ppplVar9;
    }
  }
  else {
    ppplVar3 = param_1;
    if (param_2 != 0) {
      ppplVar3 = ppplVar8;
      _bzero(ppplVar8,param_2 << 1);
      ppplVar8 = (long ***)((long)ppplVar8 + param_2 * 2);
    }
    param_1[1] = (long **)ppplVar8;
  }
  return ppplVar3;
}



/* Entry: 10a5e5168; end: 10a5e517b;  */

long *** FUN_10a5e5168(undefined8 param_1,ulong param_2)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long **pplVar7;
  long **pplVar8;
  long **pplStack_68;
  long *plStack_60;
  long *plStack_58;
  long **pplStack_50;
  long **pplStack_48;
  
  ppplVar1 = (long ***)&DAT_10f62a4d8;
  FUN_109ffde64();
  pplVar7 = ppplVar1[1];
  if ((ulong)(((long)ppplVar1[2] - (long)pplVar7 >> 3) * 0x51b3bea3677d46cf) < param_2) {
    lVar6 = (long)pplVar7 - (long)*ppplVar1;
    uVar4 = param_2 + (lVar6 >> 3) * 0x51b3bea3677d46cf;
    if (0xae4c415c9882b9 < uVar4) {
      FUN_10a04755c();
      func_0x00010a04784c(&pplStack_68);
      __Unwind_Resume();
      _memcpy();
      ppplVar1[0x28] = (long **)0x0;
      ppplVar1[0x29] = (long **)0x0;
      ppplVar1[0x27] = (long **)0x0;
      FUN_10a5e5548(ppplVar1 + 0x27,*(long *)(param_2 + 0x138),*(long *)(param_2 + 0x140),
                    *(long *)(param_2 + 0x140) - *(long *)(param_2 + 0x138) >> 1);
      ppplVar1[0x2a] = (long **)0x0;
      ppplVar1[0x2b] = (long **)0x0;
      ppplVar1[0x2c] = (long **)0x0;
      FUN_10a5e5638(ppplVar1 + 0x2a,*(long *)(param_2 + 0x150),*(long *)(param_2 + 0x158),
                    (*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 4) *
                    -0x5555555555555555);
      ppplVar1[0x2d] = *(long ***)(param_2 + 0x168);
      ppplVar1[0x2e] = (long **)0x0;
      ppplVar1[0x2f] = (long **)0x0;
      ppplVar1[0x30] = (long **)0x0;
      FUN_10a18edf0(ppplVar1 + 0x2e,*(long *)(param_2 + 0x170),*(long *)(param_2 + 0x178),
                    (*(long *)(param_2 + 0x178) - *(long *)(param_2 + 0x170) >> 3) *
                    -0x5555555555555555);
      ppplVar1[0x31] = (long **)0x0;
      ppplVar1[0x32] = (long **)0x0;
      ppplVar1[0x33] = (long **)0x0;
      FUN_10a34e7c8(ppplVar1 + 0x31,*(long *)(param_2 + 0x188),*(long *)(param_2 + 400),
                    *(long *)(param_2 + 400) - *(long *)(param_2 + 0x188) >> 6);
      pplVar8 = *(long ***)(param_2 + 0x1a8);
      pplVar7 = *(long ***)(param_2 + 0x1a0);
      ppplVar1[0x36] = *(long ***)(param_2 + 0x1b0);
      ppplVar1[0x35] = pplVar8;
      ppplVar1[0x34] = pplVar7;
      return ppplVar1;
    }
    lVar3 = (long)ppplVar1[2] - (long)*ppplVar1 >> 3;
    uVar5 = lVar3 * -0x5c9882b931057262;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x572620ae4c415b < (ulong)(lVar3 * 0x51b3bea3677d46cf)) {
      uVar5 = 0xae4c415c9882b9;
    }
    pplStack_48 = (long **)ppplVar1;
    if (uVar5 == 0) {
      ppplVar2 = (long ***)0x0;
    }
    else {
      ppplVar2 = ppplVar1;
      FUN_10a047570();
    }
    plStack_60 = (long *)((long)ppplVar2 + lVar6);
    pplVar8 = (long **)(plStack_60 + param_2 * 0x2f);
    pplVar7 = (long **)plStack_60;
    do {
      pplVar7[0x27] = (long *)0x0;
      pplVar7[0x26] = (long *)0x0;
      pplVar7[0x29] = (long *)0x0;
      pplVar7[0x28] = (long *)0x0;
      pplVar7[0x23] = (long *)0x0;
      pplVar7[0x22] = (long *)0x0;
      pplVar7[0x25] = (long *)0x0;
      pplVar7[0x24] = (long *)0x0;
      pplVar7[0x1f] = (long *)0x0;
      pplVar7[0x1e] = (long *)0x0;
      pplVar7[0x21] = (long *)0x0;
      pplVar7[0x20] = (long *)0x0;
      pplVar7[0x1b] = (long *)0x0;
      pplVar7[0x1a] = (long *)0x0;
      pplVar7[0x1d] = (long *)0x0;
      pplVar7[0x1c] = (long *)0x0;
      pplVar7[0x17] = (long *)0x0;
      pplVar7[0x16] = (long *)0x0;
      pplVar7[0x19] = (long *)0x0;
      pplVar7[0x18] = (long *)0x0;
      pplVar7[0x13] = (long *)0x0;
      pplVar7[0x12] = (long *)0x0;
      pplVar7[0x15] = (long *)0x0;
      pplVar7[0x14] = (long *)0x0;
      pplVar7[0xf] = (long *)0x0;
      pplVar7[0xe] = (long *)0x0;
      pplVar7[0x11] = (long *)0x0;
      pplVar7[0x10] = (long *)0x0;
      pplVar7[0xb] = (long *)0x0;
      pplVar7[10] = (long *)0x0;
      pplVar7[0xd] = (long *)0x0;
      pplVar7[0xc] = (long *)0x0;
      pplVar7[7] = (long *)0x0;
      pplVar7[6] = (long *)0x0;
      pplVar7[9] = (long *)0x0;
      pplVar7[8] = (long *)0x0;
      pplVar7[3] = (long *)0x0;
      pplVar7[2] = (long *)0x0;
      pplVar7[5] = (long *)0x0;
      pplVar7[4] = (long *)0x0;
      pplVar7[1] = (long *)0x0;
      *pplVar7 = (long *)0x0;
      *(undefined1 *)(pplVar7 + 4) = 6;
      pplVar7[0x11] = (long *)0x0;
      pplVar7[0x10] = (long *)0x0;
      pplVar7[0x13] = (long *)0x0;
      pplVar7[0x12] = (long *)0x0;
      pplVar7[0x15] = (long *)0x0;
      pplVar7[0x14] = (long *)0x0;
      pplVar7[0x17] = (long *)0x0;
      pplVar7[0x16] = (long *)0x0;
      pplVar7[0x19] = (long *)0x0;
      pplVar7[0x18] = (long *)0x0;
      pplVar7[0x1b] = (long *)0x0;
      pplVar7[0x1a] = (long *)0x0;
      pplVar7[0x1c] = (long *)0xffffffffffffffff;
      *(undefined4 *)(pplVar7 + 0x24) = 0x3f800000;
      pplVar7[0x1e] = (long *)0x0;
      pplVar7[0x1d] = (long *)0x0;
      *(undefined2 *)((long)pplVar7 + 0x1b) = 0x10f;
      *(undefined8 *)((long)pplVar7 + 0x2c) = 0;
      *(undefined8 *)((long)pplVar7 + 0x24) = 0;
      *(undefined8 *)((long)pplVar7 + 0x3c) = 0;
      *(undefined8 *)((long)pplVar7 + 0x34) = 0;
      *(undefined8 *)((long)pplVar7 + 0x4c) = 0;
      *(undefined8 *)((long)pplVar7 + 0x44) = 0;
      *(undefined2 *)((long)pplVar7 + 0x54) = 0;
      *(undefined8 *)((long)pplVar7 + 0x5c) = 0xff000000ff;
      *(undefined1 *)((long)pplVar7 + 0x65) = 7;
      *(undefined4 *)(pplVar7 + 0xd) = 1;
      *(undefined4 *)(pplVar7 + 0xf) = 0x3f800000;
      pplVar7[0x23] = (long *)0x0;
      pplVar7[0x20] = (long *)0x0;
      pplVar7[0x1f] = (long *)0x0;
      pplVar7[0x22] = (long *)0x0;
      pplVar7[0x21] = (long *)0x0;
      pplVar7[0x26] = (long *)0x0;
      pplVar7[0x25] = (long *)0x0;
      pplVar7[0x28] = (long *)0x0;
      pplVar7[0x27] = (long *)0x0;
      *(undefined4 *)(pplVar7 + 0x29) = 0x3f800000;
      pplVar7[0x2a] = (long *)0x0;
      pplVar7[0x2b] = (long *)0x0;
      pplVar7[0x2c] = (long *)0x0;
      pplVar7[0x2d] = (long *)0xffffffffffffffff;
      pplVar7[0x2e] = (long *)0xffffffffffffffff;
      pplVar7 = pplVar7 + 0x2f;
    } while (pplVar7 != pplVar8);
    pplVar7 = (long **)((long)plStack_60 + ((long)*ppplVar1 - (long)ppplVar1[1]));
    pplStack_68 = (long **)ppplVar2;
    plStack_58 = (long *)pplVar8;
    pplStack_50 = (long **)(ppplVar2 + uVar5 * 0x2f);
    FUN_10a0475b8(ppplVar1,*ppplVar1,ppplVar1[1],pplVar7);
    pplStack_68 = *ppplVar1;
    *ppplVar1 = pplVar7;
    ppplVar1[1] = pplVar8;
    pplStack_50 = ppplVar1[2];
    ppplVar1[2] = (long **)(ppplVar2 + uVar5 * 0x2f);
    ppplVar1 = &pplStack_68;
    plStack_60 = (long *)pplStack_68;
    plStack_58 = (long *)pplStack_68;
    func_0x00010a04784c(ppplVar1);
  }
  else {
    pplVar8 = pplVar7;
    if (param_2 != 0) {
      pplVar8 = pplVar7 + param_2 * 0x2f;
      do {
        pplVar7[0x27] = (long *)0x0;
        pplVar7[0x26] = (long *)0x0;
        pplVar7[0x29] = (long *)0x0;
        pplVar7[0x28] = (long *)0x0;
        pplVar7[0x23] = (long *)0x0;
        pplVar7[0x22] = (long *)0x0;
        pplVar7[0x25] = (long *)0x0;
        pplVar7[0x24] = (long *)0x0;
        pplVar7[0x1f] = (long *)0x0;
        pplVar7[0x1e] = (long *)0x0;
        pplVar7[0x21] = (long *)0x0;
        pplVar7[0x20] = (long *)0x0;
        pplVar7[0x1b] = (long *)0x0;
        pplVar7[0x1a] = (long *)0x0;
        pplVar7[0x1d] = (long *)0x0;
        pplVar7[0x1c] = (long *)0x0;
        pplVar7[0x17] = (long *)0x0;
        pplVar7[0x16] = (long *)0x0;
        pplVar7[0x19] = (long *)0x0;
        pplVar7[0x18] = (long *)0x0;
        pplVar7[0x13] = (long *)0x0;
        pplVar7[0x12] = (long *)0x0;
        pplVar7[0x15] = (long *)0x0;
        pplVar7[0x14] = (long *)0x0;
        pplVar7[0xf] = (long *)0x0;
        pplVar7[0xe] = (long *)0x0;
        pplVar7[0x11] = (long *)0x0;
        pplVar7[0x10] = (long *)0x0;
        pplVar7[0xb] = (long *)0x0;
        pplVar7[10] = (long *)0x0;
        pplVar7[0xd] = (long *)0x0;
        pplVar7[0xc] = (long *)0x0;
        pplVar7[7] = (long *)0x0;
        pplVar7[6] = (long *)0x0;
        pplVar7[9] = (long *)0x0;
        pplVar7[8] = (long *)0x0;
        pplVar7[3] = (long *)0x0;
        pplVar7[2] = (long *)0x0;
        pplVar7[5] = (long *)0x0;
        pplVar7[4] = (long *)0x0;
        pplVar7[1] = (long *)0x0;
        *pplVar7 = (long *)0x0;
        *(undefined1 *)(pplVar7 + 4) = 6;
        pplVar7[0x11] = (long *)0x0;
        pplVar7[0x10] = (long *)0x0;
        pplVar7[0x13] = (long *)0x0;
        pplVar7[0x12] = (long *)0x0;
        pplVar7[0x15] = (long *)0x0;
        pplVar7[0x14] = (long *)0x0;
        pplVar7[0x17] = (long *)0x0;
        pplVar7[0x16] = (long *)0x0;
        pplVar7[0x19] = (long *)0x0;
        pplVar7[0x18] = (long *)0x0;
        pplVar7[0x1b] = (long *)0x0;
        pplVar7[0x1a] = (long *)0x0;
        pplVar7[0x1c] = (long *)0xffffffffffffffff;
        *(undefined4 *)(pplVar7 + 0x24) = 0x3f800000;
        pplVar7[0x1e] = (long *)0x0;
        pplVar7[0x1d] = (long *)0x0;
        *(undefined2 *)((long)pplVar7 + 0x1b) = 0x10f;
        *(undefined8 *)((long)pplVar7 + 0x2c) = 0;
        *(undefined8 *)((long)pplVar7 + 0x24) = 0;
        *(undefined8 *)((long)pplVar7 + 0x3c) = 0;
        *(undefined8 *)((long)pplVar7 + 0x34) = 0;
        *(undefined8 *)((long)pplVar7 + 0x4c) = 0;
        *(undefined8 *)((long)pplVar7 + 0x44) = 0;
        *(undefined2 *)((long)pplVar7 + 0x54) = 0;
        *(undefined8 *)((long)pplVar7 + 0x5c) = 0xff000000ff;
        *(undefined1 *)((long)pplVar7 + 0x65) = 7;
        *(undefined4 *)(pplVar7 + 0xd) = 1;
        *(undefined4 *)(pplVar7 + 0xf) = 0x3f800000;
        pplVar7[0x23] = (long *)0x0;
        pplVar7[0x20] = (long *)0x0;
        pplVar7[0x1f] = (long *)0x0;
        pplVar7[0x22] = (long *)0x0;
        pplVar7[0x21] = (long *)0x0;
        pplVar7[0x26] = (long *)0x0;
        pplVar7[0x25] = (long *)0x0;
        pplVar7[0x28] = (long *)0x0;
        pplVar7[0x27] = (long *)0x0;
        *(undefined4 *)(pplVar7 + 0x29) = 0x3f800000;
        pplVar7[0x2a] = (long *)0x0;
        pplVar7[0x2b] = (long *)0x0;
        pplVar7[0x2c] = (long *)0x0;
        pplVar7[0x2d] = (long *)0xffffffffffffffff;
        pplVar7[0x2e] = (long *)0xffffffffffffffff;
        pplVar7 = pplVar7 + 0x2f;
      } while (pplVar7 != pplVar8);
    }
    ppplVar1[1] = pplVar8;
  }
  return ppplVar1;
}



/* Entry: 10a5e517c; end: 10a5e5433;  */

long *** FUN_10a5e517c(long ***param_1,ulong param_2)

{
  long ***ppplVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplStack_58;
  long *plStack_50;
  long *plStack_48;
  long **pplStack_40;
  long **pplStack_38;
  
  pplVar6 = param_1[1];
  if ((ulong)(((long)param_1[2] - (long)pplVar6 >> 3) * 0x51b3bea3677d46cf) < param_2) {
    lVar5 = (long)pplVar6 - (long)*param_1;
    uVar3 = param_2 + (lVar5 >> 3) * 0x51b3bea3677d46cf;
    if (0xae4c415c9882b9 < uVar3) {
      FUN_10a04755c();
      func_0x00010a04784c(&pplStack_58);
      __Unwind_Resume();
      _memcpy();
      param_1[0x28] = (long **)0x0;
      param_1[0x29] = (long **)0x0;
      param_1[0x27] = (long **)0x0;
      FUN_10a5e5548(param_1 + 0x27,*(long *)(param_2 + 0x138),*(long *)(param_2 + 0x140),
                    *(long *)(param_2 + 0x140) - *(long *)(param_2 + 0x138) >> 1);
      param_1[0x2a] = (long **)0x0;
      param_1[0x2b] = (long **)0x0;
      param_1[0x2c] = (long **)0x0;
      FUN_10a5e5638(param_1 + 0x2a,*(long *)(param_2 + 0x150),*(long *)(param_2 + 0x158),
                    (*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 4) *
                    -0x5555555555555555);
      param_1[0x2d] = *(long ***)(param_2 + 0x168);
      param_1[0x2e] = (long **)0x0;
      param_1[0x2f] = (long **)0x0;
      param_1[0x30] = (long **)0x0;
      FUN_10a18edf0(param_1 + 0x2e,*(long *)(param_2 + 0x170),*(long *)(param_2 + 0x178),
                    (*(long *)(param_2 + 0x178) - *(long *)(param_2 + 0x170) >> 3) *
                    -0x5555555555555555);
      param_1[0x31] = (long **)0x0;
      param_1[0x32] = (long **)0x0;
      param_1[0x33] = (long **)0x0;
      FUN_10a34e7c8(param_1 + 0x31,*(long *)(param_2 + 0x188),*(long *)(param_2 + 400),
                    *(long *)(param_2 + 400) - *(long *)(param_2 + 0x188) >> 6);
      pplVar7 = *(long ***)(param_2 + 0x1a8);
      pplVar6 = *(long ***)(param_2 + 0x1a0);
      param_1[0x36] = *(long ***)(param_2 + 0x1b0);
      param_1[0x35] = pplVar7;
      param_1[0x34] = pplVar6;
      return param_1;
    }
    lVar2 = (long)param_1[2] - (long)*param_1 >> 3;
    uVar4 = lVar2 * -0x5c9882b931057262;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x572620ae4c415b < (ulong)(lVar2 * 0x51b3bea3677d46cf)) {
      uVar4 = 0xae4c415c9882b9;
    }
    pplStack_38 = (long **)param_1;
    if (uVar4 == 0) {
      ppplVar1 = (long ***)0x0;
    }
    else {
      ppplVar1 = param_1;
      FUN_10a047570();
    }
    plStack_50 = (long *)((long)ppplVar1 + lVar5);
    pplVar7 = (long **)(plStack_50 + param_2 * 0x2f);
    pplVar6 = (long **)plStack_50;
    do {
      pplVar6[0x27] = (long *)0x0;
      pplVar6[0x26] = (long *)0x0;
      pplVar6[0x29] = (long *)0x0;
      pplVar6[0x28] = (long *)0x0;
      pplVar6[0x23] = (long *)0x0;
      pplVar6[0x22] = (long *)0x0;
      pplVar6[0x25] = (long *)0x0;
      pplVar6[0x24] = (long *)0x0;
      pplVar6[0x1f] = (long *)0x0;
      pplVar6[0x1e] = (long *)0x0;
      pplVar6[0x21] = (long *)0x0;
      pplVar6[0x20] = (long *)0x0;
      pplVar6[0x1b] = (long *)0x0;
      pplVar6[0x1a] = (long *)0x0;
      pplVar6[0x1d] = (long *)0x0;
      pplVar6[0x1c] = (long *)0x0;
      pplVar6[0x17] = (long *)0x0;
      pplVar6[0x16] = (long *)0x0;
      pplVar6[0x19] = (long *)0x0;
      pplVar6[0x18] = (long *)0x0;
      pplVar6[0x13] = (long *)0x0;
      pplVar6[0x12] = (long *)0x0;
      pplVar6[0x15] = (long *)0x0;
      pplVar6[0x14] = (long *)0x0;
      pplVar6[0xf] = (long *)0x0;
      pplVar6[0xe] = (long *)0x0;
      pplVar6[0x11] = (long *)0x0;
      pplVar6[0x10] = (long *)0x0;
      pplVar6[0xb] = (long *)0x0;
      pplVar6[10] = (long *)0x0;
      pplVar6[0xd] = (long *)0x0;
      pplVar6[0xc] = (long *)0x0;
      pplVar6[7] = (long *)0x0;
      pplVar6[6] = (long *)0x0;
      pplVar6[9] = (long *)0x0;
      pplVar6[8] = (long *)0x0;
      pplVar6[3] = (long *)0x0;
      pplVar6[2] = (long *)0x0;
      pplVar6[5] = (long *)0x0;
      pplVar6[4] = (long *)0x0;
      pplVar6[1] = (long *)0x0;
      *pplVar6 = (long *)0x0;
      *(undefined1 *)(pplVar6 + 4) = 6;
      pplVar6[0x11] = (long *)0x0;
      pplVar6[0x10] = (long *)0x0;
      pplVar6[0x13] = (long *)0x0;
      pplVar6[0x12] = (long *)0x0;
      pplVar6[0x15] = (long *)0x0;
      pplVar6[0x14] = (long *)0x0;
      pplVar6[0x17] = (long *)0x0;
      pplVar6[0x16] = (long *)0x0;
      pplVar6[0x19] = (long *)0x0;
      pplVar6[0x18] = (long *)0x0;
      pplVar6[0x1b] = (long *)0x0;
      pplVar6[0x1a] = (long *)0x0;
      pplVar6[0x1c] = (long *)0xffffffffffffffff;
      *(undefined4 *)(pplVar6 + 0x24) = 0x3f800000;
      pplVar6[0x1e] = (long *)0x0;
      pplVar6[0x1d] = (long *)0x0;
      *(undefined2 *)((long)pplVar6 + 0x1b) = 0x10f;
      *(undefined8 *)((long)pplVar6 + 0x2c) = 0;
      *(undefined8 *)((long)pplVar6 + 0x24) = 0;
      *(undefined8 *)((long)pplVar6 + 0x3c) = 0;
      *(undefined8 *)((long)pplVar6 + 0x34) = 0;
      *(undefined8 *)((long)pplVar6 + 0x4c) = 0;
      *(undefined8 *)((long)pplVar6 + 0x44) = 0;
      *(undefined2 *)((long)pplVar6 + 0x54) = 0;
      *(undefined8 *)((long)pplVar6 + 0x5c) = 0xff000000ff;
      *(undefined1 *)((long)pplVar6 + 0x65) = 7;
      *(undefined4 *)(pplVar6 + 0xd) = 1;
      *(undefined4 *)(pplVar6 + 0xf) = 0x3f800000;
      pplVar6[0x23] = (long *)0x0;
      pplVar6[0x20] = (long *)0x0;
      pplVar6[0x1f] = (long *)0x0;
      pplVar6[0x22] = (long *)0x0;
      pplVar6[0x21] = (long *)0x0;
      pplVar6[0x26] = (long *)0x0;
      pplVar6[0x25] = (long *)0x0;
      pplVar6[0x28] = (long *)0x0;
      pplVar6[0x27] = (long *)0x0;
      *(undefined4 *)(pplVar6 + 0x29) = 0x3f800000;
      pplVar6[0x2a] = (long *)0x0;
      pplVar6[0x2b] = (long *)0x0;
      pplVar6[0x2c] = (long *)0x0;
      pplVar6[0x2d] = (long *)0xffffffffffffffff;
      pplVar6[0x2e] = (long *)0xffffffffffffffff;
      pplVar6 = pplVar6 + 0x2f;
    } while (pplVar6 != pplVar7);
    pplVar6 = (long **)((long)plStack_50 + ((long)*param_1 - (long)param_1[1]));
    pplStack_58 = (long **)ppplVar1;
    plStack_48 = (long *)pplVar7;
    pplStack_40 = (long **)(ppplVar1 + uVar4 * 0x2f);
    FUN_10a0475b8(param_1,*param_1,param_1[1],pplVar6);
    pplStack_58 = *param_1;
    *param_1 = pplVar6;
    param_1[1] = pplVar7;
    pplStack_40 = param_1[2];
    param_1[2] = (long **)(ppplVar1 + uVar4 * 0x2f);
    param_1 = &pplStack_58;
    plStack_50 = (long *)pplStack_58;
    plStack_48 = (long *)pplStack_58;
    func_0x00010a04784c(param_1);
  }
  else {
    pplVar7 = pplVar6;
    if (param_2 != 0) {
      pplVar7 = pplVar6 + param_2 * 0x2f;
      do {
        pplVar6[0x27] = (long *)0x0;
        pplVar6[0x26] = (long *)0x0;
        pplVar6[0x29] = (long *)0x0;
        pplVar6[0x28] = (long *)0x0;
        pplVar6[0x23] = (long *)0x0;
        pplVar6[0x22] = (long *)0x0;
        pplVar6[0x25] = (long *)0x0;
        pplVar6[0x24] = (long *)0x0;
        pplVar6[0x1f] = (long *)0x0;
        pplVar6[0x1e] = (long *)0x0;
        pplVar6[0x21] = (long *)0x0;
        pplVar6[0x20] = (long *)0x0;
        pplVar6[0x1b] = (long *)0x0;
        pplVar6[0x1a] = (long *)0x0;
        pplVar6[0x1d] = (long *)0x0;
        pplVar6[0x1c] = (long *)0x0;
        pplVar6[0x17] = (long *)0x0;
        pplVar6[0x16] = (long *)0x0;
        pplVar6[0x19] = (long *)0x0;
        pplVar6[0x18] = (long *)0x0;
        pplVar6[0x13] = (long *)0x0;
        pplVar6[0x12] = (long *)0x0;
        pplVar6[0x15] = (long *)0x0;
        pplVar6[0x14] = (long *)0x0;
        pplVar6[0xf] = (long *)0x0;
        pplVar6[0xe] = (long *)0x0;
        pplVar6[0x11] = (long *)0x0;
        pplVar6[0x10] = (long *)0x0;
        pplVar6[0xb] = (long *)0x0;
        pplVar6[10] = (long *)0x0;
        pplVar6[0xd] = (long *)0x0;
        pplVar6[0xc] = (long *)0x0;
        pplVar6[7] = (long *)0x0;
        pplVar6[6] = (long *)0x0;
        pplVar6[9] = (long *)0x0;
        pplVar6[8] = (long *)0x0;
        pplVar6[3] = (long *)0x0;
        pplVar6[2] = (long *)0x0;
        pplVar6[5] = (long *)0x0;
        pplVar6[4] = (long *)0x0;
        pplVar6[1] = (long *)0x0;
        *pplVar6 = (long *)0x0;
        *(undefined1 *)(pplVar6 + 4) = 6;
        pplVar6[0x11] = (long *)0x0;
        pplVar6[0x10] = (long *)0x0;
        pplVar6[0x13] = (long *)0x0;
        pplVar6[0x12] = (long *)0x0;
        pplVar6[0x15] = (long *)0x0;
        pplVar6[0x14] = (long *)0x0;
        pplVar6[0x17] = (long *)0x0;
        pplVar6[0x16] = (long *)0x0;
        pplVar6[0x19] = (long *)0x0;
        pplVar6[0x18] = (long *)0x0;
        pplVar6[0x1b] = (long *)0x0;
        pplVar6[0x1a] = (long *)0x0;
        pplVar6[0x1c] = (long *)0xffffffffffffffff;
        *(undefined4 *)(pplVar6 + 0x24) = 0x3f800000;
        pplVar6[0x1e] = (long *)0x0;
        pplVar6[0x1d] = (long *)0x0;
        *(undefined2 *)((long)pplVar6 + 0x1b) = 0x10f;
        *(undefined8 *)((long)pplVar6 + 0x2c) = 0;
        *(undefined8 *)((long)pplVar6 + 0x24) = 0;
        *(undefined8 *)((long)pplVar6 + 0x3c) = 0;
        *(undefined8 *)((long)pplVar6 + 0x34) = 0;
        *(undefined8 *)((long)pplVar6 + 0x4c) = 0;
        *(undefined8 *)((long)pplVar6 + 0x44) = 0;
        *(undefined2 *)((long)pplVar6 + 0x54) = 0;
        *(undefined8 *)((long)pplVar6 + 0x5c) = 0xff000000ff;
        *(undefined1 *)((long)pplVar6 + 0x65) = 7;
        *(undefined4 *)(pplVar6 + 0xd) = 1;
        *(undefined4 *)(pplVar6 + 0xf) = 0x3f800000;
        pplVar6[0x23] = (long *)0x0;
        pplVar6[0x20] = (long *)0x0;
        pplVar6[0x1f] = (long *)0x0;
        pplVar6[0x22] = (long *)0x0;
        pplVar6[0x21] = (long *)0x0;
        pplVar6[0x26] = (long *)0x0;
        pplVar6[0x25] = (long *)0x0;
        pplVar6[0x28] = (long *)0x0;
        pplVar6[0x27] = (long *)0x0;
        *(undefined4 *)(pplVar6 + 0x29) = 0x3f800000;
        pplVar6[0x2a] = (long *)0x0;
        pplVar6[0x2b] = (long *)0x0;
        pplVar6[0x2c] = (long *)0x0;
        pplVar6[0x2d] = (long *)0xffffffffffffffff;
        pplVar6[0x2e] = (long *)0xffffffffffffffff;
        pplVar6 = pplVar6 + 0x2f;
      } while (pplVar6 != pplVar7);
    }
    param_1[1] = pplVar7;
  }
  return param_1;
}



/* Entry: 10a5e5434; end: 10a5e5547;  */

long FUN_10a5e5434(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _memcpy(param_1,param_2,0x138);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_10a5e5548(param_1 + 0x138,*(long *)(param_2 + 0x138),*(long *)(param_2 + 0x140),
                *(long *)(param_2 + 0x140) - *(long *)(param_2 + 0x138) >> 1);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  FUN_10a5e5638(param_1 + 0x150,*(long *)(param_2 + 0x150),*(long *)(param_2 + 0x158),
                (*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 4) * -0x5555555555555555
               );
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_10a18edf0(param_1 + 0x170,*(long *)(param_2 + 0x170),*(long *)(param_2 + 0x178),
                (*(long *)(param_2 + 0x178) - *(long *)(param_2 + 0x170) >> 3) * -0x5555555555555555
               );
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  FUN_10a34e7c8(param_1 + 0x188,*(long *)(param_2 + 0x188),*(long *)(param_2 + 400),
                *(long *)(param_2 + 400) - *(long *)(param_2 + 0x188) >> 6);
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  uVar1 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  return param_1;
}



/* Entry: 10a5e5548; end: 10a5e55bf;  */

void FUN_10a5e5548(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a5e55c0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a5e55c0; end: 10a5e55f3;  */

void FUN_10a5e55c0(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  if (-1 < param_2) {
    plVar1 = param_1;
    FUN_10a5e5608();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 2;
    return;
  }
  FUN_10a5e55f4();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (-1 < param_2) {
    __Znwm(param_2 << 1);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a5e56b0();
    lVar3 = *(long *)(puVar2 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar3,param_2,param_3 + -4);
    }
    *(long *)(puVar2 + 8) = lVar3 + param_3;
  }
  return;
}



/* Entry: 10a5e55f4; end: 10a5e5607;  */

void FUN_10a5e55f4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (-1 < param_2) {
    __Znwm(param_2 << 1);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a5e56b0();
    lVar2 = *(long *)(puVar1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3 + -4);
    }
    *(long *)(puVar1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 10a5e5608; end: 10a5e5637;  */

void FUN_10a5e5608(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (-1 < param_2) {
    __Znwm(param_2 << 1);
    return;
  }
  func_0x000109ffded8();
  if (param_4 != 0) {
    FUN_10a5e56b0();
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -4);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a5e5638; end: 10a5e56af;  */

void FUN_10a5e5638(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a5e56b0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3 + -4);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a5e56b0; end: 10a5e56f7;  */

void FUN_10a5e56b0(long *param_1,undefined *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 < (undefined *)0x555555555555556) {
    plVar1 = param_1;
    FUN_10a5e570c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 6);
    return;
  }
  FUN_10a5e56f8();
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined *)0x555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar2 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((undefined *)0x94f2094f2094f2 < puVar2) {
      func_0x000109ffded8();
      puVar3 = puVar2;
      if (puVar2 != param_2) {
        do {
          FUN_10a5e5814(param_3,puVar3);
          puVar3 = puVar3 + 0x1b8;
          param_3 = param_3 + 0x1b8;
        } while (puVar3 != param_2);
        do {
          func_0x00010a5e58d0(puVar2);
          puVar2 = puVar2 + 0x1b8;
        } while (puVar2 != param_2);
      }
      return;
    }
    __Znwm((long)puVar2 * 0x1b8);
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 10a5e56f8; end: 10a5e570b;  */

void FUN_10a5e56f8(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < (undefined *)0x555555555555556) {
    __Znwm((long)param_2 * 0x30);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0x94f2094f2094f2 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        FUN_10a5e5814(param_3,puVar2);
        puVar2 = puVar2 + 0x1b8;
        param_3 = param_3 + 0x1b8;
      } while (puVar2 != param_2);
      do {
        func_0x00010a5e58d0(puVar1);
        puVar1 = puVar1 + 0x1b8;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x1b8);
  return;
}



/* Entry: 10a5e570c; end: 10a5e574f;  */

void FUN_10a5e570c(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 < (undefined *)0x555555555555556) {
    __Znwm((long)param_2 * 0x30);
    return;
  }
  func_0x000109ffded8();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0x94f2094f2094f2 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        FUN_10a5e5814(param_3,puVar2);
        puVar2 = puVar2 + 0x1b8;
        param_3 = param_3 + 0x1b8;
      } while (puVar2 != param_2);
      do {
        func_0x00010a5e58d0(puVar1);
        puVar1 = puVar1 + 0x1b8;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x1b8);
  return;
}



/* Entry: 10a5e5750; end: 10a5e5763;  */

void FUN_10a5e5750(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0x94f2094f2094f2 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        FUN_10a5e5814(param_3,puVar2);
        puVar2 = puVar2 + 0x1b8;
        param_3 = param_3 + 0x1b8;
      } while (puVar2 != param_2);
      do {
        func_0x00010a5e58d0(puVar1);
        puVar1 = puVar1 + 0x1b8;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x1b8);
  return;
}



/* Entry: 10a5e5764; end: 10a5e57ab;  */

void FUN_10a5e5764(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if (0x94f2094f2094f2 < param_1) {
    func_0x000109ffded8();
    uVar1 = param_1;
    if (param_1 != param_2) {
      do {
        FUN_10a5e5814(param_3,uVar1);
        uVar1 = uVar1 + 0x1b8;
        param_3 = param_3 + 0x1b8;
      } while (uVar1 != param_2);
      do {
        func_0x00010a5e58d0(param_1);
        param_1 = param_1 + 0x1b8;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x1b8);
  return;
}



/* Entry: 10a5e57ac; end: 10a5e5813;  */

void FUN_10a5e57ac(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      FUN_10a5e5814(param_3,lVar1);
      lVar1 = lVar1 + 0x1b8;
      param_3 = param_3 + 0x1b8;
    } while (lVar1 != param_2);
    do {
      func_0x00010a5e58d0(param_1);
      param_1 = param_1 + 0x1b8;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10a5e5814; end: 10a5e59df;  */

long FUN_10a5e5814(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _memcpy(param_1,param_2,0x138);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  uVar1 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined8 *)(param_2 + 0x188) = 0;
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(param_2 + 0x198) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  return param_1;
}



/* Entry: 10a5e59e0; end: 10a5e59f3;  */

void FUN_10a5e59e0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (*(long *)(puVar1 + 0xd0) != 0) {
    *(long *)(puVar1 + 0xd8) = *(long *)(puVar1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(puVar1 + 0xb8) != 0) {
    *(long *)(puVar1 + 0xc0) = *(long *)(puVar1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a5e59f4; end: 10a5e5beb;  */

void FUN_10a5e59f4(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a5e5bec; end: 10a5e5d63;  */

undefined1  [16]
FUN_10a5e5bec(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar4 < 0x276276276276277) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * -0x6276276276276276;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar3 * 0x4ec4ec4ec4ec4ec5)) {
      uVar5 = 0x276276276276276;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a045464();
    }
    plStack_50 = (long *)((long)plVar2 + lVar6);
    plStack_50[5] = 0;
    plStack_50[4] = 0;
    plStack_50[7] = 0;
    plStack_50[6] = 0;
    plStack_50[9] = 0;
    plStack_50[8] = 0;
    plStack_50[0xb] = 0;
    plStack_50[10] = 0;
    plStack_50[0xc] = 0;
    plStack_50[1] = 0;
    *plStack_50 = 0;
    plStack_50[3] = 0;
    plStack_50[2] = 0;
    plStack_50[3] = 0x28cd94bfde;
    plStack_50[4] = 0xffffffffffffffff;
    plStack_50[5] = 0xffffffffffffffff;
    *(undefined2 *)(plStack_50 + 7) = 0xd;
    *(undefined4 *)(plStack_50 + 8) = 1;
    *(undefined8 *)((long)plStack_50 + 0x44) = 0;
    *(undefined8 *)((long)plStack_50 + 0x4c) = 0;
    *(undefined8 *)((long)plStack_50 + 0x54) = 0;
    *(undefined8 *)((long)plStack_50 + 0x5a) = 0;
    *(undefined2 *)((long)plStack_50 + 0x62) = 1000;
    puVar1 = plStack_50 + 0xd;
    lVar3 = *param_1;
    lVar6 = (long)plStack_50 + (lVar3 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = puVar1;
    plStack_40 = plVar2 + uVar5 * 0xd;
    func_0x00010a5e5a8c(param_1,lVar3,param_1[1],lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 0xd);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a5e5b64(&plStack_58);
    auVar13._8_8_ = lVar3;
    auVar13._0_8_ = puVar1;
    return auVar13;
  }
  FUN_10a045450();
  func_0x00010a5e5b64(&plStack_58);
  __Unwind_Resume(param_1);
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0xd) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    uVar8 = param_2[1];
    uVar7 = *param_2;
    param_4[2] = param_2[2];
    param_4[1] = uVar8;
    *param_4 = uVar7;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    param_4[3] = param_2[3];
    uVar7 = param_2[4];
    param_4[5] = param_2[5];
    param_4[4] = uVar7;
    uVar8 = param_2[7];
    uVar7 = param_2[6];
    uVar10 = param_2[9];
    uVar9 = param_2[8];
    uVar12 = param_2[0xb];
    uVar11 = param_2[10];
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    param_4[9] = uVar10;
    param_4[8] = uVar9;
    param_4[0xb] = uVar12;
    param_4[10] = uVar11;
    param_4[7] = uVar8;
    param_4[6] = uVar7;
    param_4 = param_4 + 0xd;
    puVar1 = param_3;
  }
  auVar14._8_8_ = param_4;
  auVar14._0_8_ = puVar1;
  return auVar14;
}



/* Entry: 10a5e5d64; end: 10a5e5e03;  */

undefined1  [16]
FUN_10a5e5d64(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar1 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0xd) {
    if (*(char *)((long)param_4 + 0x17) < '\0') {
      __ZdlPv(*param_4);
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_4[2] = param_2[2];
    param_4[1] = uVar3;
    *param_4 = uVar2;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
    *(undefined1 *)param_2 = 0;
    param_4[3] = param_2[3];
    uVar2 = param_2[4];
    param_4[5] = param_2[5];
    param_4[4] = uVar2;
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    uVar7 = param_2[0xb];
    uVar6 = param_2[10];
    *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    param_4[9] = uVar5;
    param_4[8] = uVar4;
    param_4[0xb] = uVar7;
    param_4[10] = uVar6;
    param_4[7] = uVar3;
    param_4[6] = uVar2;
    param_4 = param_4 + 0xd;
    puVar1 = param_3;
  }
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = puVar1;
  return auVar8;
}



/* Entry: 10a5e5e04; end: 10a5e5e17;  */

undefined1  [16] FUN_10a5e5e04(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a5e5e98();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a5e5e18; end: 10a5e5eef;  */

undefined1  [16] FUN_10a5e5e18(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a5e5e98();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a5e5ef0; end: 10a5e5faf;  */

bool FUN_10a5e5ef0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  
  uVar7 = (ulong)(param_2 & 0x3fff);
  lVar1 = *(long *)(param_1 + 0x88);
  uVar5 = (*(long *)(param_1 + 0x90) - lVar1 >> 7) * -0x5555555555555555;
  if ((uVar7 <= uVar5 && uVar5 - uVar7 != 0) &&
     (pcVar6 = (char *)(lVar1 + uVar7 * 0x180), *(uint *)(pcVar6 + 4) == param_2)) {
    if (param_2 == 0) {
      return false;
    }
    cVar3 = *pcVar6;
    if (cVar3 == '\x02') {
      return false;
    }
    uVar2 = *(uint *)(lVar1 + uVar7 * 0x180 + 8);
    uVar5 = (ulong)uVar2 & 0x3fff;
    uVar7 = (*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4) * -0x5555555555555555;
    if ((uVar5 <= uVar7 && uVar7 - uVar5 != 0) &&
       (pcVar6 = (char *)(*(long *)(param_1 + 0x68) + uVar5 * 0x30), *(uint *)(pcVar6 + 4) == uVar2)
       ) {
      cVar4 = *pcVar6;
      if (cVar4 != '\0') {
        return false;
      }
      return (uVar2 != 0 && cVar4 != '\x02') && cVar3 == '\0';
    }
  }
  return false;
}



/* Entry: 10a5e5fb0; end: 10a5e6077;  */

void FUN_10a5e5fb0(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar9;
    puVar5 = puVar5 + 2;
  }
  else {
    lVar8 = (long)puVar5 - *param_1;
    uVar1 = (lVar8 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a5e6120();
      if (param_4 != 0) {
        FUN_10a5e60e8();
        puVar5 = (undefined8 *)param_1[1];
        for (; param_2 != param_3; param_2 = param_2 + 2) {
          uVar9 = *param_2;
          puVar5[1] = param_2[1];
          *puVar5 = uVar9;
          puVar5 = puVar5 + 2;
        }
        param_1[1] = (long)puVar5;
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar6 = (long)uVar4 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar6 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a5e6134();
    puVar2 = (undefined8 *)((long)plVar3 + lVar8);
    uVar9 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    puVar5 = puVar2 + 2;
    lVar7 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar5;
    param_1[2] = (long)(plVar3 + uVar6 * 2);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 10a5e6078; end: 10a5e60e7;  */

void FUN_10a5e6078(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_10a5e60e8(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a5e60e8; end: 10a5e611f;  */

void FUN_10a5e60e8(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10a5e6134();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return;
  }
  FUN_10a5e6120();
  uVar2 = 0;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (((uVar2 & 1) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a5e6120; end: 10a5e6133;  */

void FUN_10a5e6120(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  FUN_109ffde64();
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (((uVar1 & 1) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a5e6134; end: 10a5e619b;  */

void FUN_10a5e6134(ulong param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
    __Znwm(param_2 << 4);
    return;
  }
  func_0x000109ffded8();
  if (((param_1 & 1) != 0) && (*(long *)(param_2 + 0x18) != 0)) {
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a5e619c; end: 10a5e6487;  */

byte * FUN_10a5e619c(byte *param_1,long param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x80;
  param_1[0x27] = 0x3f;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0x3f;
  param_1[0x54] = 1;
  param_1[0x55] = 1;
  param_1[0x56] = 0;
  param_1[0x58] = 0x10;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  fVar7 = 0.0;
  fVar3 = 0.0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0x80;
  param_1[0xa7] = 0x3f;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0x80;
  param_1[0x93] = 0x3f;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x80;
  param_1[0x7f] = 0x3f;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x80;
  param_1[0x6b] = 0x3f;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0x80;
  param_1[0xab] = 0x3f;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0x80;
  param_1[0xbf] = 0x3f;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0x80;
  param_1[0xd3] = 0x3f;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0x80;
  param_1[0xe7] = 0x3f;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe8] = 0xff;
  param_1[0xe9] = 0xff;
  param_1[0xea] = 0xff;
  param_1[0xeb] = 0xff;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x138] = 0xff;
  param_1[0x139] = 0xff;
  param_1[0x13a] = 0xff;
  param_1[0x13b] = 0xff;
  param_1[0x13c] = 0xff;
  param_1[0x13d] = 0xff;
  param_1[0x13e] = 0xff;
  param_1[0x13f] = 0xff;
  param_1[0x140] = 0xff;
  param_1[0x141] = 0xff;
  param_1[0x142] = 0xff;
  param_1[0x143] = 0xff;
  param_1[0x144] = 0xff;
  param_1[0x145] = 0xff;
  param_1[0x146] = 0xff;
  param_1[0x147] = 0xff;
  cVar1 = *(char *)(param_2 + 0x204);
  *param_1 = (*(ushort *)(param_2 + 0x180) & 0x17) == 0;
  uVar5 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 8) = uVar5;
  fVar2 = *(float *)(param_2 + 0x208);
  uVar5 = 0x7f800000;
  if (*(char *)(param_2 + 0x210) == '\0') {
    fVar2 = INFINITY;
  }
  if (*(char *)(param_2 + 0x205) == '\x02') {
    if (fVar2 <= 1.1920929e-07) {
      fVar2 = 1.1920929e-07;
    }
    uVar5 = 0x461c4000;
    if (fVar2 < 10000.0) {
      fVar2 = fVar2 * fVar2;
      *(float *)(param_1 + 0x18) = fVar2;
      uVar5 = 0xc61c4000;
      fVar2 = -10000.0 / (fVar2 * fVar2);
      goto LAB_10a5e62dc;
    }
    param_1[0x18] = 0x20;
    param_1[0x19] = 0xbc;
    param_1[0x1a] = 0xbe;
    param_1[0x1b] = 0x4c;
  }
  else {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  fVar2 = 0.0;
LAB_10a5e62dc:
  *(float *)(param_1 + 0x1c) = fVar2;
  func_0x00010a2c6fdc(param_2);
  *(float *)(param_1 + 0x28) = fVar2;
  fVar11 = (float)uVar5;
  *(float *)(param_1 + 0x2c) = fVar11;
  *(float *)(param_1 + 0x30) = fVar7;
  if (cVar1 == '\x03') {
    func_0x00010a2cd08c(*(undefined8 *)(param_2 + 0x178));
    fVar9 = -(fVar7 * fVar3) + fVar2 * fVar11;
    fVar10 = 0.5 - (fVar2 * fVar2 + fVar7 * fVar7);
    fVar2 = fVar11 * fVar7 + fVar3 * fVar2;
    fVar2 = fVar2 + fVar2;
    uVar5 = CONCAT44(fVar10 + fVar10,fVar9 + fVar9);
    *(undefined8 *)(param_1 + 0x128) = uVar5;
    *(float *)(param_1 + 0x130) = fVar2;
  }
  uVar4 = (undefined4)uVar5;
  func_0x00010a2cd058(*(undefined8 *)(param_2 + 0x178));
  *(float *)(param_1 + 0x34) = fVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(float *)(param_1 + 0x3c) = fVar7;
  FUN_10a2c6eec(param_2);
  uVar8 = *(undefined4 *)(param_2 + 0x20c);
  *(float *)(param_1 + 0x40) = fVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(float *)(param_1 + 0x48) = fVar7;
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  if (cVar1 == '\x01') {
    fVar3 = 1.0;
    fVar2 = 0.0;
  }
  else {
    fVar11 = *(float *)(param_2 + 0x214) * 0.017453292;
    fVar2 = *(float *)(param_2 + 0x218) * 0.017453292;
    fVar3 = fVar2;
    _cosf();
    *(float *)(param_1 + 0x114) = fVar2;
    *(float *)(param_1 + 0x118) = fVar3;
    _cosf();
    fVar2 = fVar11 - fVar3;
    if (fVar11 - fVar3 <= 0.001) {
      fVar2 = 0.001;
    }
    fVar2 = 1.0 / fVar2;
    fVar3 = -(fVar3 * fVar2);
  }
  *(float *)(param_1 + 0x20) = fVar2;
  *(float *)(param_1 + 0x24) = fVar3;
  cVar1 = *(char *)(param_2 + 0x21c);
  *param_1 = *param_1 & 0xfd | cVar1 << 1;
  if (*(char *)(param_2 + 0x21d) == '\x02') {
    uVar4 = *(undefined4 *)(param_2 + 0x230);
    uVar6 = 0;
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    *(undefined4 *)(param_1 + 0x100) = uVar4;
    func_0x00010a2c63b0(param_2);
    *(undefined4 *)(param_1 + 0x104) = uVar4;
    *(undefined4 *)(param_1 + 0x108) = uVar6;
    *(float *)(param_1 + 0x10c) = fVar7;
    *(undefined4 *)(param_1 + 0x110) = uVar8;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x234);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x24c);
    param_1[0x54] = *(byte *)(param_2 + 0x250);
    *(undefined2 *)(param_1 + 0x55) = *(undefined2 *)(param_2 + 0x251);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x254);
    uVar4 = 0x400;
    if (*(char *)(param_2 + 600) != '\x01') {
      uVar4 = 0x800;
    }
    uVar8 = 0x200;
    if (*(char *)(param_2 + 600) != '\0') {
      uVar8 = uVar4;
    }
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x25c);
    *(undefined4 *)(param_1 + 0xec) = uVar8;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x138) = uVar5;
  return param_1;
}



/* Entry: 10a5e6488; end: 10a5e649b;  */

long * FUN_10a5e6488(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  iVar4 = (int)param_3;
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 != 0) {
    uVar6 = ((ulong)(uint)(iVar4 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
    uVar6 = ((ulong)uVar5 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = param_2 - 1;
    if ((param_2 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (param_2 <= uVar6) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar6 / param_2;
        }
        uVar8 = uVar6 - uVar8 * param_2;
      }
    }
    if (*(long **)(puVar2 + uVar8 * 8) != (long *)0x0) {
      plVar3 = (long *)**(long **)(puVar2 + uVar8 * 8);
      do {
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar3[1];
        if (uVar6 - uVar9 == 0) {
          if (plVar3[2] == CONCAT44(uVar5,iVar4)) {
            return plVar3;
          }
        }
        else {
          if ((param_2 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          if (uVar9 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a5e649c; end: 10a5e6567;  */

long * FUN_10a5e649c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
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



/* Entry: 10a5e6568; end: 10a5e671b;  */

byte * FUN_10a5e6568(byte *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[8] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0xff;
  param_1[0x59] = 0xff;
  param_1[0x5a] = 0xff;
  param_1[0x5b] = 0xff;
  param_1[0x5c] = 0xff;
  param_1[0x5d] = 0xff;
  param_1[0x5e] = 0xff;
  param_1[0x5f] = 0xff;
  param_1[0x60] = 0xff;
  param_1[0x61] = 0xff;
  param_1[0x62] = 0xff;
  param_1[99] = 0xff;
  param_1[100] = 0xff;
  param_1[0x65] = 0xff;
  param_1[0x66] = 0xff;
  param_1[0x67] = 0xff;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0x3f;
  param_1[0x6c] = 1;
  param_1[0x6d] = 1;
  param_1[0x6e] = 0;
  param_1[0x70] = 0x10;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  uVar2 = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0x80;
  param_1[0xab] = 0x3f;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0x80;
  param_1[0xbf] = 0x3f;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0x80;
  param_1[0x83] = 0x3f;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0x80;
  param_1[0x97] = 0x3f;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0x80;
  param_1[0xeb] = 0x3f;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0x80;
  param_1[0xff] = 0x3f;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0x80;
  param_1[0xc3] = 0x3f;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0x80;
  param_1[0xd7] = 0x3f;
  param_1[0x100] = 0xff;
  param_1[0x101] = 0xff;
  param_1[0x102] = 0xff;
  param_1[0x103] = 0xff;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  bVar1 = *(char *)(param_2 + 0x21c) * '\x02';
  if ((*(ushort *)(param_2 + 0x180) & 0x17) == 0) {
    bVar1 = bVar1 + 1;
  }
  *param_1 = bVar1 | *(char *)(param_2 + 0x238) << 2 | *(char *)(param_2 + 0x239) << 3;
  param_1[1] = (byte)*(undefined4 *)(param_2 + 500);
  param_1[2] = (byte)*(undefined4 *)(param_2 + 0x308);
  uVar4 = *(undefined8 *)(param_2 + 0x318);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 800);
  *(undefined8 *)(param_1 + 8) = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0x230);
  if (*(char *)(param_2 + 0x21c) == '\0') {
    uVar3 = 0;
  }
  uVar5 = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x234);
  uVar4 = *(undefined8 *)(param_2 + 0x30c);
  *(undefined8 *)(param_1 + 0x24) = uVar4;
  func_0x00010a2c6fdc(param_2);
  uVar3 = (undefined4)uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  FUN_10a2c6eec(param_2);
  uVar6 = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar6;
  func_0x00010a2c63b0(param_2);
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  if (*(char *)(param_2 + 0x21d) == '\x02') {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x234);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x24c);
    param_1[0x6c] = *(byte *)(param_2 + 0x250);
    *(undefined2 *)(param_1 + 0x6d) = *(undefined2 *)(param_2 + 0x251);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x254);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x25c);
    uVar2 = 0x400;
    if (*(char *)(param_2 + 600) != '\x01') {
      uVar2 = 0x800;
    }
    uVar3 = 0x200;
    if (*(char *)(param_2 + 600) != '\0') {
      uVar3 = uVar2;
    }
    *(undefined4 *)(param_1 + 0x104) = uVar3;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  return param_1;
}



/* Entry: 10a5e671c; end: 10a5e672f;  */

undefined1 *
FUN_10a5e671c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             long param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 8) = 1;
  puVar5 = (undefined8 *)(puVar4 + 0x20);
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *puVar5 = 0;
  puVar4[0x18] = 0;
  puVar8 = (undefined8 *)(puVar4 + 0x60);
  *puVar8 = 0;
  *(undefined8 *)(puVar4 + 0x68) = 0;
  *(undefined8 *)(puVar4 + 0x70) = 0;
  *(undefined8 *)(puVar4 + 0x44) = 0;
  *(undefined8 *)(puVar4 + 0x54) = 0;
  *(undefined8 *)(puVar4 + 0x4c) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined2 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
  uVar3 = *(undefined1 *)(param_5 + 0x204);
  bVar1 = *(char *)(param_5 + 0x260) + 3;
  if (*(char *)(param_5 + 0x280) == '\0') {
    bVar1 = 1;
  }
  *puVar4 = (*(ushort *)(param_5 + 0x180) & 0x17) == 0;
  uVar9 = *(undefined8 *)(param_5 + 0x318);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(param_5 + 800);
  *(undefined8 *)(puVar4 + 8) = uVar9;
  puVar4[0x18] = uVar3;
  if ((bVar1 & 7) == 3) {
    uVar6 = 0;
    if (*(long *)(param_5 + 0x290) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x290) + 0x268);
    }
    *puVar5 = uVar6;
    uVar6 = 0;
    if (*(long *)(param_5 + 0x2a0) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x2a0) + 0x268);
    }
    *(undefined8 *)(puVar4 + 0x28) = uVar6;
    if (*(long *)(param_5 + 0x2b0) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(param_5 + 0x2b0) + 0x268);
    }
    uVar6 = 0;
    *(undefined8 *)(puVar4 + 0x30) = uVar7;
  }
  else {
    *puVar5 = 0;
    *(undefined8 *)(puVar4 + 0x28) = 0;
    *(undefined8 *)(puVar4 + 0x30) = 0;
    if (bVar1 == 4) {
      uVar6 = 0;
      if (*(long *)(param_5 + 0x2d0) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x2d0) + 0x268);
      }
    }
    else {
      uVar6 = 0;
    }
  }
  *(undefined8 *)(puVar4 + 0x38) = uVar6;
  cVar2 = *(char *)(param_5 + 0x260) + '\x03';
  if (*(char *)(param_5 + 0x280) == '\0') {
    cVar2 = '\x01';
  }
  puVar4[0x40] = cVar2;
  puVar4[0x41] = 0;
  FUN_10a2c6eec(param_5);
  *(int *)(puVar4 + 0x44) = (int)uVar9;
  *(undefined4 *)(puVar4 + 0x48) = param_2;
  *(undefined4 *)(puVar4 + 0x4c) = param_3;
  *(undefined4 *)(puVar4 + 0x50) = *(undefined4 *)(param_5 + 0x20c);
  *(undefined8 *)(puVar4 + 0x54) = *(undefined8 *)(param_5 + 0x284);
  if (puVar8 != (undefined8 *)(param_5 + 0x268)) {
    FUN_10a12d500(puVar8,*(long *)(param_5 + 0x268),*(long *)(param_5 + 0x270),
                  (*(long *)(param_5 + 0x270) - *(long *)(param_5 + 0x268) >> 2) *
                  -0x5555555555555555);
  }
  uVar9 = *(undefined8 *)(param_5 + 0x40);
  *(undefined8 *)(puVar4 + 0x80) = *(undefined8 *)(param_5 + 0x48);
  *(undefined8 *)(puVar4 + 0x78) = uVar9;
  return puVar4;
}



/* Entry: 10a5e6730; end: 10a5e68e7;  */

undefined1 *
FUN_10a5e6730(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
             long param_5)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  *param_4 = 0;
  *(undefined8 *)(param_4 + 0x10) = 0;
  *(undefined8 *)(param_4 + 8) = 1;
  puVar4 = (undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_4 + 0x28) = 0;
  *puVar4 = 0;
  param_4[0x18] = 0;
  puVar7 = (undefined8 *)(param_4 + 0x60);
  *puVar7 = 0;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x70) = 0;
  *(undefined8 *)(param_4 + 0x44) = 0;
  *(undefined8 *)(param_4 + 0x54) = 0;
  *(undefined8 *)(param_4 + 0x4c) = 0;
  *(undefined8 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x30) = 0;
  *(undefined2 *)(param_4 + 0x40) = 0;
  *(undefined8 *)(param_4 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(param_4 + 0x80) = 0xffffffffffffffff;
  uVar3 = *(undefined1 *)(param_5 + 0x204);
  bVar1 = *(char *)(param_5 + 0x260) + 3;
  if (*(char *)(param_5 + 0x280) == '\0') {
    bVar1 = 1;
  }
  *param_4 = (*(ushort *)(param_5 + 0x180) & 0x17) == 0;
  uVar8 = *(undefined8 *)(param_5 + 0x318);
  *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_5 + 800);
  *(undefined8 *)(param_4 + 8) = uVar8;
  param_4[0x18] = uVar3;
  if ((bVar1 & 7) == 3) {
    uVar5 = 0;
    if (*(long *)(param_5 + 0x290) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x290) + 0x268);
    }
    *puVar4 = uVar5;
    uVar5 = 0;
    if (*(long *)(param_5 + 0x2a0) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x2a0) + 0x268);
    }
    *(undefined8 *)(param_4 + 0x28) = uVar5;
    if (*(long *)(param_5 + 0x2b0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x2b0) + 0x268);
    }
    uVar5 = 0;
    *(undefined8 *)(param_4 + 0x30) = uVar6;
  }
  else {
    *puVar4 = 0;
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined8 *)(param_4 + 0x30) = 0;
    if (bVar1 == 4) {
      uVar5 = 0;
      if (*(long *)(param_5 + 0x2d0) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_5 + 0x2d0) + 0x268);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  *(undefined8 *)(param_4 + 0x38) = uVar5;
  cVar2 = *(char *)(param_5 + 0x260) + '\x03';
  if (*(char *)(param_5 + 0x280) == '\0') {
    cVar2 = '\x01';
  }
  param_4[0x40] = cVar2;
  param_4[0x41] = 0;
  FUN_10a2c6eec(param_5);
  *(int *)(param_4 + 0x44) = (int)uVar8;
  *(undefined4 *)(param_4 + 0x48) = param_2;
  *(undefined4 *)(param_4 + 0x4c) = param_3;
  *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(param_5 + 0x20c);
  *(undefined8 *)(param_4 + 0x54) = *(undefined8 *)(param_5 + 0x284);
  if (puVar7 != (undefined8 *)(param_5 + 0x268)) {
    FUN_10a12d500(puVar7,*(long *)(param_5 + 0x268),*(long *)(param_5 + 0x270),
                  (*(long *)(param_5 + 0x270) - *(long *)(param_5 + 0x268) >> 2) *
                  -0x5555555555555555);
  }
  uVar8 = *(undefined8 *)(param_5 + 0x40);
  *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(param_5 + 0x48);
  *(undefined8 *)(param_4 + 0x78) = uVar8;
  return param_4;
}



/* Entry: 10a5e68e8; end: 10a5e68fb;  */

long * FUN_10a5e68e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar3[1];
  lVar2 = plVar3[2];
  while (lVar4 = lVar2, lVar4 != lVar1) {
    plVar3[2] = lVar4 + -0x88;
    lVar2 = lVar4 + -0x88;
    if (*(long *)(lVar4 + -0x28) != 0) {
      *(long *)(lVar4 + -0x20) = *(long *)(lVar4 + -0x28);
      __ZdlPv();
      lVar2 = plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10a5e68fc; end: 10a5e695b;  */

long * FUN_10a5e68fc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar3 = lVar2, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x88;
    lVar2 = lVar3 + -0x88;
    if (*(long *)(lVar3 + -0x28) != 0) {
      *(long *)(lVar3 + -0x20) = *(long *)(lVar3 + -0x28);
      __ZdlPv();
      lVar2 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5e695c; end: 10a5e6997;  */

void FUN_10a5e695c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar2 = (undefined8 *)plVar3[1];
  if (puVar2 < (undefined8 *)plVar3[2]) {
    puVar10 = puVar2 + 1;
    *puVar2 = param_2;
LAB_10a5e6a48:
    plVar3[1] = (long)puVar10;
    return;
  }
  lVar8 = *plVar3;
  lVar9 = (long)puVar2 - lVar8;
  uVar1 = (lVar9 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar6 = plVar3[2] - lVar8;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 >> 0x3d == 0) {
      lVar4 = uVar7 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar9);
      puVar10 = puVar2 + 1;
      *puVar2 = param_2;
      _memcpy(puVar2 + -(lVar9 >> 3),lVar8,lVar9);
      *plVar3 = (long)(puVar2 + -(lVar9 >> 3));
      plVar3[1] = (long)puVar10;
      plVar3[2] = lVar4 + uVar7 * 8;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_10a5e6a48;
    }
  }
  else {
    FUN_10a5e6abc();
  }
  func_0x000109ffded8();
  uVar1 = plVar3[1];
  if (uVar1 < (ulong)plVar3[2]) {
    FUN_10a1912d4(uVar1);
    plVar5 = (long *)(uVar1 + 0x7d8);
    plVar3[1] = (long)plVar5;
  }
  else {
    plVar5 = plVar3;
    FUN_10a5e6c68();
  }
  plVar3[1] = (long)plVar5;
  return;
}



/* Entry: 10a5e6998; end: 10a5e6a6b;  */

void FUN_10a5e6998(long *param_1,undefined8 param_2)

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
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = param_2;
LAB_10a5e6a48:
    param_1[1] = (long)puVar9;
    return;
  }
  lVar7 = *param_1;
  lVar8 = (long)puVar2 - lVar7;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - lVar7;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 >> 0x3d == 0) {
      lVar3 = uVar6 << 3;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar8);
      puVar9 = puVar2 + 1;
      *puVar2 = param_2;
      _memcpy(puVar2 + -(lVar8 >> 3),lVar7,lVar8);
      *param_1 = (long)(puVar2 + -(lVar8 >> 3));
      param_1[1] = (long)puVar9;
      param_1[2] = lVar3 + uVar6 * 8;
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
      }
      goto LAB_10a5e6a48;
    }
  }
  else {
    FUN_10a5e6abc();
  }
  func_0x000109ffded8();
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_10a1912d4(uVar1);
    plVar4 = (long *)(uVar1 + 0x7d8);
    param_1[1] = (long)plVar4;
  }
  else {
    plVar4 = param_1;
    FUN_10a5e6c68();
  }
  param_1[1] = (long)plVar4;
  return;
}



/* Entry: 10a5e6a6c; end: 10a5e6abb;  */

void FUN_10a5e6a6c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10a1912d4(uVar1);
    lVar2 = uVar1 + 0x7d8;
    *(long *)(param_1 + 8) = lVar2;
  }
  else {
    lVar2 = param_1;
    FUN_10a5e6c68();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 10a5e6abc; end: 10a5e6acf;  */

long * FUN_10a5e6abc(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  iVar4 = (int)param_3;
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 != 0) {
    uVar6 = ((ulong)(uint)(iVar4 << 3) + 8 ^ (ulong)uVar5) * -0x622015f714c7d297;
    uVar6 = ((ulong)uVar5 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = param_2 - 1;
    if ((param_2 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (param_2 <= uVar6) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar6 / param_2;
        }
        uVar8 = uVar6 - uVar8 * param_2;
      }
    }
    if (*(long **)(puVar2 + uVar8 * 8) != (long *)0x0) {
      plVar3 = (long *)**(long **)(puVar2 + uVar8 * 8);
      do {
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar9 = plVar3[1];
        if (uVar6 - uVar9 == 0) {
          if (plVar3[2] == CONCAT44(uVar5,iVar4)) {
            return plVar3;
          }
        }
        else {
          if ((param_2 & uVar7) == 0) {
            uVar9 = uVar9 & uVar7;
          }
          else if (param_2 <= uVar9) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar9 / param_2;
            }
            uVar9 = uVar9 - uVar1 * param_2;
          }
          if (uVar9 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a5e6ad0; end: 10a5e6ba3;  */

long * FUN_10a5e6ad0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
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



/* Entry: 10a5e6ba4; end: 10a5e6be3;  */

void FUN_10a5e6ba4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_110bf84a8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10a5e6be4; end: 10a5e6c1f;  */

void FUN_10a5e6be4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_110bf84a8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a5e6c20; end: 10a5e6c5b;  */

long FUN_10a5e6c20(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bf8528);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a5e6c5c; end: 10a5e6c67;  */

undefined ** FUN_10a5e6c5c(void)

{
  return &PTR_DAT_110bf8528;
}



/* Entry: 10a5e6c68; end: 10a5e6da7;  */

undefined1  [16] FUN_10a5e6c68(long *param_1,undefined *param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * 0x28cbfbeb9a020a33 + 1;
  if (uVar5 < 0x20a32fefae6809) {
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar4 * 0x5197f7d734041466;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x105197f7d73403 < (ulong)(lVar4 * 0x28cbfbeb9a020a33)) {
      uVar6 = 0x20a32fefae6808;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a5e6dbc();
    }
    lVar7 = (long)plVar3 + lVar7;
    plStack_40 = plVar3 + uVar6 * 0xfb;
    plStack_58 = plVar3;
    plStack_50 = (long *)lVar7;
    plStack_48 = (long *)lVar7;
    FUN_10a1912d4(lVar7,param_2);
    plStack_48 = (long *)(lVar7 + 0x7d8);
    lVar4 = *param_1;
    lVar7 = lVar7 + (lVar4 - param_1[1]);
    FUN_10a5e6e04(param_1,lVar4,param_1[1],lVar7);
    plVar3 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar7;
    lVar7 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar7;
    func_0x00010a5e712c(&plStack_58);
    auVar9._8_8_ = lVar4;
    auVar9._0_8_ = plVar3;
    return auVar9;
  }
  FUN_10a5e6da8();
  func_0x00010a5e712c(&plStack_58);
  __Unwind_Resume(param_1);
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined *)0x20a32fefae6808 < param_2) {
    func_0x000109ffded8();
    puVar2 = param_2;
    puVar8 = param_2;
    if (param_2 != param_3) {
      do {
        puVar2 = puVar8;
        FUN_10a5e6e6c(param_4,puVar8);
        puVar8 = puVar8 + 0x7d8;
        param_4 = param_4 + 0x7d8;
      } while (puVar8 != param_3);
      do {
        puVar1 = param_2;
        func_0x00010a5e70e8(param_2);
        param_2 = param_2 + 0x7d8;
      } while (param_2 != param_3);
    }
    auVar11._8_8_ = puVar2;
    auVar11._0_8_ = puVar1;
    return auVar11;
  }
  lVar7 = (long)param_2 * 0x7d8;
  __Znwm(lVar7);
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = lVar7;
  return auVar10;
}



/* Entry: 10a5e6da8; end: 10a5e6dbb;  */

void FUN_10a5e6da8(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (0x20a32fefae6808 < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a5e6e6c(param_4,uVar1);
        uVar1 = uVar1 + 0x7d8;
        param_4 = param_4 + 0x7d8;
      } while (uVar1 != param_3);
      do {
        FUN_10a5e70e8(param_2);
        param_2 = param_2 + 0x7d8;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x7d8);
  return;
}



/* Entry: 10a5e6dbc; end: 10a5e6e03;  */

void FUN_10a5e6dbc(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0x20a32fefae6808 < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a5e6e6c(param_4,uVar1);
        uVar1 = uVar1 + 0x7d8;
        param_4 = param_4 + 0x7d8;
      } while (uVar1 != param_3);
      do {
        FUN_10a5e70e8(param_2);
        param_2 = param_2 + 0x7d8;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x7d8);
  return;
}



/* Entry: 10a5e6e04; end: 10a5e6e6b;  */

void FUN_10a5e6e04(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a5e6e6c(param_4,lVar1);
      lVar1 = lVar1 + 0x7d8;
      param_4 = param_4 + 0x7d8;
    } while (lVar1 != param_3);
    do {
      FUN_10a5e70e8(param_2);
      param_2 = param_2 + 0x7d8;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a5e6e6c; end: 10a5e7083;  */

undefined8 * FUN_10a5e6e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_2 + 0x3d);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar3 = param_2[10];
  uVar2 = param_2[9];
  uVar4 = param_2[0xb];
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[9] = uVar2;
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x10] = param_2[0x10];
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xe] = 0;
  uVar2 = param_2[0x18];
  uVar1 = param_2[0x17];
  uVar4 = param_2[0x1a];
  uVar3 = param_2[0x19];
  uVar6 = param_2[0x1c];
  uVar5 = param_2[0x1b];
  uVar7 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar7;
  param_1[0x1c] = uVar6;
  param_1[0x1b] = uVar5;
  param_1[0x1a] = uVar4;
  param_1[0x19] = uVar3;
  param_1[0x18] = uVar2;
  param_1[0x17] = uVar1;
  uVar2 = param_2[0x12];
  uVar1 = param_2[0x11];
  uVar3 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar3;
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  uVar2 = param_2[0x20];
  uVar1 = param_2[0x1f];
  uVar4 = param_2[0x22];
  uVar3 = param_2[0x21];
  uVar6 = param_2[0x24];
  uVar5 = param_2[0x23];
  uVar7 = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1d] = uVar7;
  param_1[0x22] = uVar4;
  param_1[0x21] = uVar3;
  param_1[0x24] = uVar6;
  param_1[0x23] = uVar5;
  param_1[0x20] = uVar2;
  param_1[0x1f] = uVar1;
  uVar2 = param_2[0x26];
  uVar1 = param_2[0x25];
  uVar4 = param_2[0x28];
  uVar3 = param_2[0x27];
  uVar5 = param_2[0x29];
  uVar7 = param_2[0x2c];
  uVar6 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x29] = uVar5;
  param_1[0x2c] = uVar7;
  param_1[0x2b] = uVar6;
  param_1[0x26] = uVar2;
  param_1[0x25] = uVar1;
  param_1[0x28] = uVar4;
  param_1[0x27] = uVar3;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2d] = param_2[0x2d];
  uVar1 = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x2e] = uVar1;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x2d] = 0;
  uVar5 = param_2[0x3b];
  uVar4 = param_2[0x3a];
  uVar2 = param_2[0x3d];
  uVar1 = param_2[0x3c];
  uVar3 = *(undefined8 *)((long)param_2 + 0x1e9);
  uVar7 = param_2[0x39];
  uVar6 = param_2[0x38];
  *(undefined8 *)((long)param_1 + 0x1f1) = *(undefined8 *)((long)param_2 + 0x1f1);
  *(undefined8 *)((long)param_1 + 0x1e9) = uVar3;
  param_1[0x3b] = uVar5;
  param_1[0x3a] = uVar4;
  param_1[0x3d] = uVar2;
  param_1[0x3c] = uVar1;
  param_1[0x39] = uVar7;
  param_1[0x38] = uVar6;
  uVar2 = param_2[0x31];
  uVar1 = param_2[0x30];
  uVar4 = param_2[0x33];
  uVar3 = param_2[0x32];
  uVar5 = param_2[0x34];
  uVar7 = param_2[0x37];
  uVar6 = param_2[0x36];
  param_1[0x35] = param_2[0x35];
  param_1[0x34] = uVar5;
  param_1[0x37] = uVar7;
  param_1[0x36] = uVar6;
  param_1[0x31] = uVar2;
  param_1[0x30] = uVar1;
  param_1[0x33] = uVar4;
  param_1[0x32] = uVar3;
  uVar4 = param_2[0x45];
  uVar3 = param_2[0x44];
  uVar2 = param_2[0x47];
  uVar1 = param_2[0x46];
  uVar6 = param_2[0x43];
  uVar5 = param_2[0x42];
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  param_1[0x45] = uVar4;
  param_1[0x44] = uVar3;
  param_1[0x47] = uVar2;
  param_1[0x46] = uVar1;
  param_1[0x43] = uVar6;
  param_1[0x42] = uVar5;
  uVar1 = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = uVar1;
  uVar1 = param_2[0x49];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x49] = uVar1;
  uVar2 = param_2[0x4c];
  uVar1 = param_2[0x4b];
  uVar4 = param_2[0x4e];
  uVar3 = param_2[0x4d];
  uVar6 = param_2[0x50];
  uVar5 = param_2[0x4f];
  uVar7 = *(undefined8 *)((long)param_2 + 0x282);
  *(undefined8 *)((long)param_1 + 0x28a) = *(undefined8 *)((long)param_2 + 0x28a);
  *(undefined8 *)((long)param_1 + 0x282) = uVar7;
  param_1[0x4e] = uVar4;
  param_1[0x4d] = uVar3;
  param_1[0x50] = uVar6;
  param_1[0x4f] = uVar5;
  param_1[0x4c] = uVar2;
  param_1[0x4b] = uVar1;
  param_1[0x53] = 0;
  param_1[0x53] = param_2[0x53];
  FUN_10a5e7084(param_1 + 0x54,param_2 + 0x54);
  uVar1 = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x84] = uVar1;
  uVar2 = param_2[0x87];
  uVar1 = param_2[0x86];
  uVar4 = param_2[0x89];
  uVar3 = param_2[0x88];
  uVar6 = param_2[0x8b];
  uVar5 = param_2[0x8a];
  uVar7 = *(undefined8 *)((long)param_2 + 0x45a);
  *(undefined8 *)((long)param_1 + 0x462) = *(undefined8 *)((long)param_2 + 0x462);
  *(undefined8 *)((long)param_1 + 0x45a) = uVar7;
  param_1[0x8b] = uVar6;
  param_1[0x8a] = uVar5;
  param_1[0x89] = uVar4;
  param_1[0x88] = uVar3;
  param_1[0x87] = uVar2;
  param_1[0x86] = uVar1;
  param_1[0x8e] = 0;
  param_1[0x8e] = param_2[0x8e];
  FUN_10a5e7084(param_1 + 0x8f,param_2 + 0x8f);
  uVar1 = param_2[0xbf];
  param_1[0xc0] = param_2[0xc0];
  param_1[0xbf] = uVar1;
  uVar2 = param_2[0xc2];
  uVar1 = param_2[0xc1];
  uVar4 = param_2[0xc4];
  uVar3 = param_2[0xc3];
  uVar6 = param_2[0xc6];
  uVar5 = param_2[0xc5];
  uVar7 = *(undefined8 *)((long)param_2 + 0x632);
  *(undefined8 *)((long)param_1 + 0x63a) = *(undefined8 *)((long)param_2 + 0x63a);
  *(undefined8 *)((long)param_1 + 0x632) = uVar7;
  param_1[0xc4] = uVar4;
  param_1[0xc3] = uVar3;
  param_1[0xc6] = uVar6;
  param_1[0xc5] = uVar5;
  param_1[0xc2] = uVar2;
  param_1[0xc1] = uVar1;
  param_1[0xc9] = 0;
  param_1[0xc9] = param_2[0xc9];
  FUN_10a5e7084(param_1 + 0xca,param_2 + 0xca);
  param_1[0xfa] = param_2[0xfa];
  return param_1;
}



/* Entry: 10a5e7084; end: 10a5e70e7;  */

void FUN_10a5e7084(long param_1,long param_2,long param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if (param_3 != 0) {
    lVar5 = 0;
    puVar6 = (undefined8 *)(param_2 + 0x10);
    puVar7 = (undefined8 *)(param_1 + 0x10);
    do {
      puVar1 = (undefined2 *)(param_1 + lVar5 * 0x30);
      puVar2 = (undefined2 *)(param_2 + lVar5 * 0x30);
      *puVar1 = *puVar2;
      *(undefined8 *)(puVar1 + 4) = 0;
      lVar8 = *(long *)(puVar2 + 4);
      *(long *)(puVar1 + 4) = lVar8;
      puVar3 = puVar6;
      puVar4 = puVar7;
      for (; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar5 = lVar5 + 1;
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
    } while (lVar5 != param_3);
  }
  return;
}



/* Entry: 10a5e70e8; end: 10a5e7177;  */

void FUN_10a5e70e8(long param_1)

{
  if (*(long *)(param_1 + 0x168) != 0) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a5e7178; end: 10a5e7213;  */

void FUN_10a5e7178(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10a5e7214(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
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
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10a5e7214; end: 10a5e724b;  */

long * FUN_10a5e7214(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar2 = param_1;
    FUN_10a438bc4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + (long)param_2 * 2);
    return plVar2;
  }
  FUN_10a438bb0();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x000109ffded8();
    puVar10 = (undefined8 *)plVar2[1];
    if (puVar10 < (undefined8 *)plVar2[2]) {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      puVar10[2] = param_2[2];
      puVar10[1] = uVar12;
      *puVar10 = uVar11;
      puVar10 = puVar10 + 3;
      plVar4 = plVar2;
    }
    else {
      lVar9 = (long)puVar10 - *plVar2;
      uVar7 = (lVar9 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar7) {
        FUN_10a5e724c();
        pcVar5 = "vector";
        FUN_109ffde64();
        if (((0.001 < *(float *)(pcVar5 + 8)) &&
            (((*pcVar5 == '\x01' || (0.01 < *(float *)(pcVar5 + 0x10))) &&
             (*(float *)(pcVar5 + 0x10) < *(float *)(pcVar5 + 0x14))))) &&
           (0.01 < *(float *)(pcVar5 + 0xc))) {
          return (long *)(ulong)(0.0 < *(float *)(pcVar5 + 4));
        }
        return (long *)0x0;
      }
      lVar6 = plVar2[2] - *plVar2 >> 3;
      uVar8 = lVar6 * 0x5555555555555556;
      if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
        uVar8 = uVar7;
      }
      if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      plVar3 = plVar2;
      FUN_10a5e7260();
      puVar1 = (undefined8 *)((long)plVar3 + lVar9);
      uVar12 = param_2[1];
      uVar11 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar12;
      *puVar1 = uVar11;
      puVar10 = puVar1 + 3;
      lVar9 = (long)puVar1 - (plVar2[1] - *plVar2);
      _memcpy(lVar9);
      plVar4 = (long *)*plVar2;
      *plVar2 = lVar9;
      plVar2[1] = (long)puVar10;
      plVar2[2] = (long)(plVar3 + uVar8 * 3);
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
    }
    plVar2[1] = (long)puVar10;
    return plVar4;
  }
  plVar2 = (long *)((long)param_2 * 0x18);
  __Znwm(plVar2);
  return plVar2;
}



/* Entry: 10a5e724c; end: 10a5e725f;  */

long * FUN_10a5e724c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    plVar2 = (long *)((long)param_2 * 0x18);
    __Znwm(plVar2);
    return plVar2;
  }
  func_0x000109ffded8();
  puVar10 = (undefined8 *)plVar2[1];
  if (puVar10 < (undefined8 *)plVar2[2]) {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar10[2] = param_2[2];
    puVar10[1] = uVar12;
    *puVar10 = uVar11;
    puVar10 = puVar10 + 3;
    plVar4 = plVar2;
  }
  else {
    lVar9 = (long)puVar10 - *plVar2;
    uVar7 = (lVar9 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      FUN_10a5e724c();
      pcVar5 = "vector";
      FUN_109ffde64();
      if (((0.001 < *(float *)(pcVar5 + 8)) &&
          (((*pcVar5 == '\x01' || (0.01 < *(float *)(pcVar5 + 0x10))) &&
           (*(float *)(pcVar5 + 0x10) < *(float *)(pcVar5 + 0x14))))) &&
         (0.01 < *(float *)(pcVar5 + 0xc))) {
        return (long *)(ulong)(0.0 < *(float *)(pcVar5 + 4));
      }
      return (long *)0x0;
    }
    lVar6 = plVar2[2] - *plVar2 >> 3;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    plVar3 = plVar2;
    FUN_10a5e7260();
    puVar1 = (undefined8 *)((long)plVar3 + lVar9);
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar12;
    *puVar1 = uVar11;
    puVar10 = puVar1 + 3;
    lVar9 = (long)puVar1 - (plVar2[1] - *plVar2);
    _memcpy(lVar9);
    plVar4 = (long *)*plVar2;
    *plVar2 = lVar9;
    plVar2[1] = (long)puVar10;
    plVar2[2] = (long)(plVar3 + uVar8 * 3);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar2[1] = (long)puVar10;
  return plVar4;
}



/* Entry: 10a5e7260; end: 10a5e72a3;  */

long * FUN_10a5e7260(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
    plVar2 = (long *)((long)param_2 * 0x18);
    __Znwm(plVar2);
    return plVar2;
  }
  func_0x000109ffded8();
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puVar9[2] = param_2[2];
    puVar9[1] = uVar11;
    *puVar9 = uVar10;
    puVar9 = puVar9 + 3;
    plVar3 = param_1;
  }
  else {
    lVar8 = (long)puVar9 - *param_1;
    uVar6 = (lVar8 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      FUN_10a5e724c();
      pcVar4 = "vector";
      FUN_109ffde64();
      if (((0.001 < *(float *)(pcVar4 + 8)) &&
          (((*pcVar4 == '\x01' || (0.01 < *(float *)(pcVar4 + 0x10))) &&
           (*(float *)(pcVar4 + 0x10) < *(float *)(pcVar4 + 0x14))))) &&
         (0.01 < *(float *)(pcVar4 + 0xc))) {
        return (long *)(ulong)(0.0 < *(float *)(pcVar4 + 4));
      }
      return (long *)0x0;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    plVar2 = param_1;
    FUN_10a5e7260();
    puVar1 = (undefined8 *)((long)plVar2 + lVar8);
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar11;
    *puVar1 = uVar10;
    puVar9 = puVar1 + 3;
    lVar8 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar2 + uVar7 * 3);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 10a5e72a4; end: 10a5e739b;  */

long * FUN_10a5e72a4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puVar9[2] = param_2[2];
    puVar9[1] = uVar11;
    *puVar9 = uVar10;
    puVar9 = puVar9 + 3;
    plVar3 = param_1;
  }
  else {
    lVar8 = (long)puVar9 - *param_1;
    uVar6 = (lVar8 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      FUN_10a5e724c();
      pcVar4 = "vector";
      FUN_109ffde64();
      if (((0.001 < *(float *)(pcVar4 + 8)) &&
          (((*pcVar4 == '\x01' || (0.01 < *(float *)(pcVar4 + 0x10))) &&
           (*(float *)(pcVar4 + 0x10) < *(float *)(pcVar4 + 0x14))))) &&
         (0.01 < *(float *)(pcVar4 + 0xc))) {
        return (long *)(ulong)(0.0 < *(float *)(pcVar4 + 4));
      }
      return (long *)0x0;
    }
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    plVar2 = param_1;
    FUN_10a5e7260();
    puVar1 = (undefined8 *)((long)plVar2 + lVar8);
    uVar11 = param_2[1];
    uVar10 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar11;
    *puVar1 = uVar10;
    puVar9 = puVar1 + 3;
    lVar8 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar2 + uVar7 * 3);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar3;
}



/* Entry: 10a5e739c; end: 10a5e73af;  */

bool FUN_10a5e739c(void)

{
  char *pcVar1;
  
  pcVar1 = "vector";
  FUN_109ffde64();
  if (((0.001 < *(float *)(pcVar1 + 8)) &&
      (((*pcVar1 == '\x01' || (0.01 < *(float *)(pcVar1 + 0x10))) &&
       (*(float *)(pcVar1 + 0x10) < *(float *)(pcVar1 + 0x14))))) &&
     (0.01 < *(float *)(pcVar1 + 0xc))) {
    return 0.0 < *(float *)(pcVar1 + 4);
  }
  return false;
}



/* Entry: 10a5e73b0; end: 10a5e7417;  */

bool FUN_10a5e73b0(char *param_1)

{
  if (((0.001 < *(float *)(param_1 + 8)) &&
      (((*param_1 == '\x01' || (0.01 < *(float *)(param_1 + 0x10))) &&
       (*(float *)(param_1 + 0x10) < *(float *)(param_1 + 0x14))))) &&
     (0.01 < *(float *)(param_1 + 0xc))) {
    return 0.0 < *(float *)(param_1 + 4);
  }
  return false;
}



/* Entry: 10a5e7418; end: 10a5e748b;  */

void FUN_10a5e7418(ulong *param_1,ulong *param_2)

{
  long lVar1;
  short sStack_3a;
  ulong uStack_38;
  
  lVar1 = 0;
  *param_1 = *param_1 | *param_2;
  uStack_38 = param_2[1];
  do {
    sStack_3a = *(short *)((long)&uStack_38 + lVar1);
    if (sStack_3a == 0) {
      return;
    }
    FUN_10a5e748c(param_1 + 1,&sStack_3a,&sStack_3a);
    lVar1 = lVar1 + 2;
  } while (lVar1 != 8);
  return;
}



/* Entry: 10a5e748c; end: 10a5e7543;  */

undefined1  [16] FUN_10a5e748c(long param_1,ushort *param_2,undefined2 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar3 = plVar1, *param_2 < *(ushort *)((long)plVar3 + 0x1a)) {
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10a5e74f4;
      }
      if (*param_2 <= *(ushort *)((long)plVar3 + 0x1a)) {
        uVar2 = 0;
        goto LAB_10a5e752c;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_10a5e74f4:
  plVar1 = (long *)0x20;
  __Znwm();
  *(undefined2 *)((long)plVar1 + 0x1a) = *param_3;
  FUN_10a5e7544(param_1,plVar3,plVar4,plVar1);
  uVar2 = 1;
  plVar3 = plVar1;
LAB_10a5e752c:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 10a5e7544; end: 10a5e75ef;  */

void FUN_10a5e7544(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a5e75f0; end: 10a5e7787;  */

void FUN_10a5e75f0(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar10 = *param_1;
  lVar11 = param_1[1];
  lVar9 = lVar11 - lVar10 >> 3;
  bVar2 = param_2 < (undefined8 *)(lVar9 * 0x6fb586fb586fb587);
  uVar13 = (long)param_2 + lVar9 * -0x6fb586fb586fb587;
  if (bVar2 || uVar13 == 0) {
    if (bVar2) {
      lVar10 = lVar10 + (long)param_2 * 0x1b8;
      while (lVar11 != lVar10) {
        lVar11 = lVar11 + -0x1b8;
        func_0x00010a5e58d0(lVar11);
      }
      param_1[1] = lVar10;
    }
  }
  else if ((ulong)((param_1[2] - lVar11 >> 3) * 0x6fb586fb586fb587) < uVar13) {
    if ((undefined8 *)0x94f2094f2094f2 < param_2) {
      FUN_10a5e5750();
      puVar7 = (undefined8 *)param_1[1];
      if (puVar7 < (undefined8 *)param_1[2]) {
        puVar12 = puVar7 + 1;
        *puVar7 = *param_2;
      }
      else {
        lVar11 = (long)puVar7 - *param_1;
        uVar13 = (lVar11 >> 3) + 1;
        if (uVar13 >> 0x3d != 0) {
          FUN_10a5e79e4();
          lVar11 = *param_1;
          lVar10 = param_1[1];
          uVar13 = lVar10 - lVar11 >> 4;
          FUN_10a5e7c20(param_4,uVar13);
          if (lVar10 != lVar11) {
            lVar11 = 0;
            uVar8 = 0;
            do {
              if ((ulong)(param_1[1] - *param_1 >> 4) <= uVar8) {
LAB_10a5e78f4:
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5e78f8);
                (*pcVar1)();
              }
              uVar3 = *(undefined8 *)(*param_1 + lVar11 * 8);
              FUN_10a5e2524(uVar3,param_2,param_3);
              if ((ulong)(param_4[1] - *param_4 >> 1) <= uVar8) goto LAB_10a5e78f4;
              *(short *)(*param_4 + lVar11) = (short)uVar3;
              uVar8 = uVar8 + 1;
              lVar11 = lVar11 + 2;
            } while (uVar13 != uVar8);
          }
          return;
        }
        uVar6 = param_1[2] - *param_1;
        uVar8 = (long)uVar6 >> 2;
        if (uVar8 <= uVar13) {
          uVar8 = uVar13;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar8 = 0x1fffffffffffffff;
        }
        puVar4 = param_2;
        FUN_10a5e79f8();
        puVar7 = (undefined8 *)(uVar8 + lVar11);
        puVar12 = puVar7 + 1;
        *puVar7 = *param_2;
        lVar10 = (long)puVar7 - (param_1[1] - *param_1);
        _memcpy(lVar10);
        lVar11 = *param_1;
        *param_1 = lVar10;
        param_1[1] = (long)puVar12;
        param_1[2] = uVar8 + (long)puVar4 * 8;
        if (lVar11 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar12;
      return;
    }
    lVar5 = param_1[2] - lVar10 >> 3;
    puVar7 = (undefined8 *)(lVar5 * -0x2094f2094f2094f2);
    if (puVar7 < param_2 || (long)puVar7 - (long)param_2 == 0) {
      puVar7 = param_2;
    }
    if (0x4a7904a7904a78 < (ulong)(lVar5 * 0x6fb586fb586fb587)) {
      puVar7 = (undefined8 *)0x94f2094f2094f2;
    }
    puVar4 = param_2;
    plStack_58 = param_1;
    FUN_10a5e5764();
    lVar10 = (long)puVar7 + (lVar11 - lVar10);
    lVar9 = (long)param_2 * 0x1b8 + lVar9 * -8;
    lVar11 = lVar10;
    do {
      FUN_10a5e78f8(lVar11);
      lVar11 = lVar11 + 0x1b8;
      lVar9 = lVar9 + -0x1b8;
    } while (lVar9 != 0);
    lVar11 = lVar10 + (*param_1 - param_1[1]);
    FUN_10a5e57ac(*param_1,param_1[1],lVar11);
    lStack_78 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar10 + uVar13 * 0x1b8;
    lStack_60 = param_1[2];
    param_1[2] = (long)(puVar7 + (long)puVar4 * 0x37);
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    func_0x00010a5e5994(&lStack_78);
  }
  else {
    lVar5 = lVar11 + uVar13 * 0x1b8;
    lVar10 = (long)param_2 * 0x1b8 + lVar9 * -8;
    do {
      FUN_10a5e78f8(lVar11);
      lVar11 = lVar11 + 0x1b8;
      lVar10 = lVar10 + -0x1b8;
    } while (lVar10 != 0);
    param_1[1] = lVar5;
  }
  return;
}



/* Entry: 10a5e7788; end: 10a5e7847;  */

void FUN_10a5e7788(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar9 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    lVar8 = (long)puVar1 - *param_1;
    uVar10 = (lVar8 >> 3) + 1;
    if (uVar10 >> 0x3d != 0) {
      FUN_10a5e79e4();
      lVar8 = *param_1;
      lVar7 = param_1[1];
      uVar10 = lVar7 - lVar8 >> 4;
      FUN_10a5e7c20(param_4,uVar10);
      if (lVar7 != lVar8) {
        lVar8 = 0;
        uVar6 = 0;
        do {
          if ((ulong)(param_1[1] - *param_1 >> 4) <= uVar6) {
LAB_10a5e78f4:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5e78f8);
            (*pcVar2)();
          }
          uVar3 = *(undefined8 *)(*param_1 + lVar8 * 8);
          FUN_10a5e2524(uVar3,param_2,param_3);
          if ((ulong)(param_4[1] - *param_4 >> 1) <= uVar6) goto LAB_10a5e78f4;
          *(short *)(*param_4 + lVar8) = (short)uVar3;
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 2;
        } while (uVar10 != uVar6);
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    puVar4 = param_2;
    FUN_10a5e79f8();
    puVar1 = (undefined8 *)(uVar6 + lVar8);
    puVar9 = puVar1 + 1;
    *puVar1 = *param_2;
    lVar7 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar8 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = uVar6 + (long)puVar4 * 8;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 10a5e7848; end: 10a5e78f7;  */

void FUN_10a5e7848(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_1;
  lVar1 = param_1[1];
  uVar4 = lVar1 - lVar5 >> 4;
  FUN_10a5e7c20(param_4,uVar4);
  if (lVar1 != lVar5) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((ulong)(param_1[1] - *param_1 >> 4) <= uVar6) {
LAB_10a5e78f4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5e78f8);
        (*pcVar2)();
      }
      uVar3 = *(undefined8 *)(*param_1 + lVar5 * 8);
      FUN_10a5e2524(uVar3,param_2,param_3);
      if ((ulong)(param_4[1] - *param_4 >> 1) <= uVar6) goto LAB_10a5e78f4;
      *(short *)(*param_4 + lVar5) = (short)uVar3;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 2;
    } while (uVar4 != uVar6);
  }
  return;
}



/* Entry: 10a5e78f8; end: 10a5e79e3;  */

undefined4 * FUN_10a5e78f8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  *param_1 = 0xffff0117;
  puVar1 = param_1;
  func_0x00010a0fda30();
  *(undefined4 **)(param_1 + 2) = puVar1;
  *(undefined8 *)(param_1 + 4) = param_2;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0x300;
  *(undefined1 *)((long)param_1 + 0x1e) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0x102;
  *(undefined1 *)((long)param_1 + 0x26) = 1;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x29) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x27) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x31) = 0;
  *(undefined8 *)(param_1 + 0x2f) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x33) = 0;
  *(undefined8 *)(param_1 + 0x39) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x37) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0xff7fffff00000000;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return param_1;
}



/* Entry: 10a5e79e4; end: 10a5e79f7;  */

undefined1  [16] FUN_10a5e79e4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar4 >> 0x3d == 0) {
    lVar5 = (long)plVar4 << 3;
    __Znwm(lVar5);
    auVar13._8_8_ = plVar4;
    auVar13._0_8_ = lVar5;
    return auVar13;
  }
  func_0x000109ffded8();
  puVar9 = (undefined8 *)*plVar4;
  puVar3 = (undefined8 *)plVar4[1];
  lVar5 = (long)puVar3 - (long)puVar9 >> 6;
  uVar1 = lVar5 + 1;
  if (uVar1 >> 0x3a == 0) {
    lVar10 = plVar4[2];
    uVar8 = lVar10 - (long)puVar9 >> 5;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffbf < (ulong)(lVar10 - (long)puVar9)) {
      uVar8 = 0x3ffffffffffffff;
    }
    lVar7 = param_2;
    plStack_98 = plVar4;
    if (uVar8 == 0) {
      lVar6 = 0;
    }
    else {
      if (uVar8 >> 0x3a != 0) goto LAB_10a5e7ba4;
      lVar6 = uVar8 << 6;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar6 + ((long)puVar3 - (long)puVar9));
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_110c6a8d8;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = &PTR_FUN_110c6a940;
    uVar12 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((long)puVar2 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((long)puVar2 + 0x24) = uVar12;
    puVar2[7] = *(undefined8 *)(param_2 + 0x38);
    if (puVar9 != puVar3) {
      lVar10 = 0;
      do {
        puVar11 = (undefined8 *)((long)(puVar2 + lVar5 * -8) + lVar10);
        *(undefined1 *)(puVar11 + 4) = 0;
        *puVar11 = &PTR_FUN_110c6a8d8;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = &PTR_FUN_110c6a940;
        *(undefined8 *)((long)puVar11 + 0x24) = *(undefined8 *)((long)puVar9 + lVar10 + 0x24);
        *(undefined8 *)((long)puVar11 + 0x2c) = *(undefined8 *)((long)puVar9 + lVar10 + 0x2c);
        puVar11[7] = *(undefined8 *)((long)puVar9 + lVar10 + 0x38);
        lVar10 = lVar10 + 0x40;
      } while ((undefined8 *)((long)puVar9 + lVar10) != puVar3);
      do {
        puVar11 = puVar9 + 8;
        *puVar9 = &PTR_DAT_110b17898;
        func_0x00010a004dac(puVar9 + 1);
        puVar9 = puVar11;
      } while (puVar11 != puVar3);
      puVar9 = (undefined8 *)*plVar4;
      lVar10 = plVar4[2];
    }
    *plVar4 = (long)(puVar2 + lVar5 * -8);
    plVar4[1] = (long)(puVar2 + 8);
    plVar4[2] = lVar6 + uVar8 * 0x40;
    puStack_b8 = puVar9;
    puStack_b0 = puVar9;
    puStack_a8 = puVar9;
    lStack_a0 = lVar10;
    FUN_10a5e7bbc(&puStack_b8);
    auVar14._8_8_ = lVar7;
    auVar14._0_8_ = puVar2 + 8;
    return auVar14;
  }
  FUN_10a5e7ba8();
LAB_10a5e7ba4:
  func_0x000109ffded8();
  plVar4 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar5 = plVar4[1];
  lVar10 = plVar4[2];
  while (lVar10 != lVar5) {
    *(undefined8 *)(lVar10 + -0x40) = &PTR_DAT_110b17898;
    plVar4[2] = lVar10 + -0x40;
    func_0x00010a004dac(lVar10 + -0x38);
    lVar10 = plVar4[2];
  }
  if (*plVar4 != 0) {
    __ZdlPv();
  }
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar4;
  return auVar15;
}



/* Entry: 10a5e79f8; end: 10a5e7a2b;  */

undefined1  [16] FUN_10a5e79f8(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long *plStack_88;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar4 = (long)param_1 << 3;
    __Znwm(lVar4);
    auVar13._8_8_ = param_1;
    auVar13._0_8_ = lVar4;
    return auVar13;
  }
  func_0x000109ffded8();
  puVar9 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar4 = (long)puVar3 - (long)puVar9 >> 6;
  uVar1 = lVar4 + 1;
  if (uVar1 >> 0x3a == 0) {
    lVar10 = param_1[2];
    uVar8 = lVar10 - (long)puVar9 >> 5;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffbf < (ulong)(lVar10 - (long)puVar9)) {
      uVar8 = 0x3ffffffffffffff;
    }
    lVar7 = param_2;
    plStack_88 = param_1;
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar8 >> 0x3a != 0) goto LAB_10a5e7ba4;
      lVar5 = uVar8 << 6;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar5 + ((long)puVar3 - (long)puVar9));
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_110c6a8d8;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = &PTR_FUN_110c6a940;
    uVar12 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((long)puVar2 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((long)puVar2 + 0x24) = uVar12;
    puVar2[7] = *(undefined8 *)(param_2 + 0x38);
    if (puVar9 != puVar3) {
      lVar10 = 0;
      do {
        puVar11 = (undefined8 *)((long)(puVar2 + lVar4 * -8) + lVar10);
        *(undefined1 *)(puVar11 + 4) = 0;
        *puVar11 = &PTR_FUN_110c6a8d8;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = &PTR_FUN_110c6a940;
        *(undefined8 *)((long)puVar11 + 0x24) = *(undefined8 *)((long)puVar9 + lVar10 + 0x24);
        *(undefined8 *)((long)puVar11 + 0x2c) = *(undefined8 *)((long)puVar9 + lVar10 + 0x2c);
        puVar11[7] = *(undefined8 *)((long)puVar9 + lVar10 + 0x38);
        lVar10 = lVar10 + 0x40;
      } while ((undefined8 *)((long)puVar9 + lVar10) != puVar3);
      do {
        puVar11 = puVar9 + 8;
        *puVar9 = &PTR_DAT_110b17898;
        func_0x00010a004dac(puVar9 + 1);
        puVar9 = puVar11;
      } while (puVar11 != puVar3);
      puVar9 = (undefined8 *)*param_1;
      lVar10 = param_1[2];
    }
    *param_1 = (long)(puVar2 + lVar4 * -8);
    param_1[1] = (long)(puVar2 + 8);
    param_1[2] = lVar5 + uVar8 * 0x40;
    puStack_a8 = puVar9;
    puStack_a0 = puVar9;
    puStack_98 = puVar9;
    lStack_90 = lVar10;
    FUN_10a5e7bbc(&puStack_a8);
    auVar14._8_8_ = lVar7;
    auVar14._0_8_ = puVar2 + 8;
    return auVar14;
  }
  FUN_10a5e7ba8();
LAB_10a5e7ba4:
  func_0x000109ffded8();
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = plVar6[1];
  lVar10 = plVar6[2];
  while (lVar10 != lVar4) {
    *(undefined8 *)(lVar10 + -0x40) = &PTR_DAT_110b17898;
    plVar6[2] = lVar10 + -0x40;
    func_0x00010a004dac(lVar10 + -0x38);
    lVar10 = plVar6[2];
  }
  if (*plVar6 != 0) {
    __ZdlPv();
  }
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = plVar6;
  return auVar15;
}



/* Entry: 10a5e7a2c; end: 10a5e7ba7;  */

long * FUN_10a5e7a2c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  puVar7 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar3 - (long)puVar7 >> 6;
  uVar1 = lVar10 + 1;
  if (uVar1 >> 0x3a == 0) {
    lVar8 = param_1[2];
    uVar6 = lVar8 - (long)puVar7 >> 5;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffbf < (ulong)(lVar8 - (long)puVar7)) {
      uVar6 = 0x3ffffffffffffff;
    }
    plStack_68 = param_1;
    if (uVar6 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar6 >> 0x3a != 0) goto LAB_10a5e7ba4;
      lVar4 = uVar6 << 6;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar4 + ((long)puVar3 - (long)puVar7));
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_110c6a8d8;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = &PTR_FUN_110c6a940;
    uVar11 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((long)puVar2 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((long)puVar2 + 0x24) = uVar11;
    puVar2[7] = *(undefined8 *)(param_2 + 0x38);
    if (puVar7 != puVar3) {
      lVar8 = 0;
      do {
        puVar9 = (undefined8 *)((long)(puVar2 + lVar10 * -8) + lVar8);
        *(undefined1 *)(puVar9 + 4) = 0;
        *puVar9 = &PTR_FUN_110c6a8d8;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = &PTR_FUN_110c6a940;
        *(undefined8 *)((long)puVar9 + 0x24) = *(undefined8 *)((long)puVar7 + lVar8 + 0x24);
        *(undefined8 *)((long)puVar9 + 0x2c) = *(undefined8 *)((long)puVar7 + lVar8 + 0x2c);
        puVar9[7] = *(undefined8 *)((long)puVar7 + lVar8 + 0x38);
        lVar8 = lVar8 + 0x40;
      } while ((undefined8 *)((long)puVar7 + lVar8) != puVar3);
      do {
        puVar9 = puVar7 + 8;
        *puVar7 = &PTR_DAT_110b17898;
        func_0x00010a004dac(puVar7 + 1);
        puVar7 = puVar9;
      } while (puVar9 != puVar3);
      puVar7 = (undefined8 *)*param_1;
      lVar8 = param_1[2];
    }
    *param_1 = (long)(puVar2 + lVar10 * -8);
    param_1[1] = (long)(puVar2 + 8);
    param_1[2] = lVar4 + uVar6 * 0x40;
    puStack_88 = puVar7;
    puStack_80 = puVar7;
    puStack_78 = puVar7;
    lStack_70 = lVar8;
    FUN_10a5e7bbc(&puStack_88);
    return puVar2 + 8;
  }
  FUN_10a5e7ba8();
LAB_10a5e7ba4:
  func_0x000109ffded8();
  plVar5 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar10 = plVar5[1];
  lVar8 = plVar5[2];
  while (lVar8 != lVar10) {
    *(undefined8 *)(lVar8 + -0x40) = &PTR_DAT_110b17898;
    plVar5[2] = lVar8 + -0x40;
    func_0x00010a004dac(lVar8 + -0x38);
    lVar8 = plVar5[2];
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  return plVar5;
}



/* Entry: 10a5e7ba8; end: 10a5e7bbb;  */

long * FUN_10a5e7ba8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    *(undefined8 *)(lVar3 + -0x40) = &PTR_DAT_110b17898;
    plVar2[2] = lVar3 + -0x40;
    func_0x00010a004dac(lVar3 + -0x38);
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a5e7bbc; end: 10a5e7c1f;  */

long * FUN_10a5e7bbc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    *(undefined8 *)(lVar2 + -0x40) = &PTR_DAT_110b17898;
    param_1[2] = lVar2 + -0x40;
    func_0x00010a004dac(lVar2 + -0x38);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5e7c20; end: 10a5e7d1b;  */

long * FUN_10a5e7c20(long *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar6 = *param_1;
  plVar3 = (long *)param_1[1];
  puVar7 = (ulong *)((long)plVar3 - lVar6 >> 1);
  if (puVar7 < param_2) {
    uVar14 = (long)param_2 - (long)puVar7;
    if ((ulong)(param_1[2] - (long)plVar3 >> 1) < uVar14) {
      if (-1 < (long)param_2) {
        puVar5 = (ulong *)(param_1[2] - lVar6);
        puVar7 = puVar5;
        if (puVar5 <= param_2) {
          puVar7 = param_2;
        }
        if ((ulong *)0x7ffffffffffffffd < puVar5) {
          puVar7 = (ulong *)0x7fffffffffffffff;
        }
        plVar4 = param_1;
        FUN_10a5e5608();
        lVar1 = *param_1;
        lVar12 = param_1[1] - lVar1;
        lVar6 = (long)plVar4 + ((long)plVar3 - lVar6);
        _bzero(lVar6,uVar14 * 2);
        lVar13 = lVar6 - lVar12;
        _memcpy(lVar13,lVar1,lVar12);
        plVar3 = (long *)*param_1;
        *param_1 = lVar13;
        param_1[1] = lVar6 + uVar14 * 2;
        param_1[2] = (long)plVar4 + (long)puVar7 * 2;
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        return plVar3;
      }
      FUN_10a5e55f4();
      uVar14 = param_1[1];
      if (uVar14 != 0) {
        uVar8 = *param_2;
        uVar9 = uVar14 - 1;
        if ((uVar14 & uVar9) == 0) {
          uVar10 = uVar9 & uVar8;
        }
        else {
          uVar10 = uVar8;
          if (uVar14 <= uVar8) {
            uVar10 = 0;
            if (uVar14 != 0) {
              uVar10 = uVar8 / uVar14;
            }
            uVar10 = uVar8 - uVar10 * uVar14;
          }
        }
        plVar3 = *(long **)(*param_1 + uVar10 * 8);
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)*plVar3;
          do {
            if (plVar3 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar11 = plVar3[1];
            if (uVar8 == uVar11) {
              if (plVar3[2] == uVar8) {
                return plVar3;
              }
            }
            else {
              if ((uVar14 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar14 <= uVar11) {
                uVar2 = 0;
                if (uVar14 != 0) {
                  uVar2 = uVar11 / uVar14;
                }
                uVar11 = uVar11 - uVar2 * uVar14;
              }
              if (uVar11 != uVar10) {
                return (long *)0x0;
              }
            }
            plVar3 = (long *)*plVar3;
          } while( true );
        }
      }
      return (long *)0x0;
    }
    plVar4 = plVar3;
    _bzero(plVar3,uVar14 * 2);
    lVar6 = (long)plVar3 + uVar14 * 2;
  }
  else {
    if (puVar7 <= param_2) {
      return param_1;
    }
    lVar6 = lVar6 + (long)param_2 * 2;
    plVar4 = param_1;
  }
  param_1[1] = lVar6;
  return plVar4;
}



/* Entry: 10a5e7d1c; end: 10a5e7e5b;  */

long * FUN_10a5e7d1c(long *param_1,ulong *param_2)

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
    uVar3 = *param_2;
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
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
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



/* Entry: 10a5e7e5c; end: 10a5e809b;  */

void FUN_10a5e7e5c(long *param_1)

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
        lVar2 = lVar2 + -0x1b8;
        func_0x00010a5e58d0(lVar2);
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



/* Entry: 10a5e809c; end: 10a5e81bf;  */

void FUN_10a5e809c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10a5e809c(param_1,*param_2);
    FUN_10a5e809c(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a5e81c0; end: 10a5e8223;  */

undefined * FUN_10a5e81c0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  _bzero();
  *(undefined8 *)(puVar1 + 0xc) = 0x7fc000007fc00000;
  *(undefined8 *)(puVar1 + 4) = 0x7fc000007fc00000;
  *(undefined8 *)(puVar1 + 0x1c) = 0x7fc000007fc00000;
  *(undefined8 *)(puVar1 + 0x14) = 0x7fc000007fc00000;
  *(undefined4 *)(puVar1 + 0x24) = 0x7fa00000;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  puVar1[0x40] = 0;
  *(undefined4 *)(puVar1 + 0x94) = 3;
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(puVar1 + 0x98) = uVar2;
  *(undefined8 *)(puVar1 + 0xa8) = 0;
  *(undefined8 *)(puVar1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0xb8) = 0;
  *(undefined8 *)(puVar1 + 0xb0) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 200) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0xc0) = 0;
  *(undefined8 *)(puVar1 + 0xd8) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0xd0) = 0;
  *(undefined8 *)(puVar1 + 0x1b0) = 0;
  *(undefined8 *)(puVar1 + 0x1a8) = 0;
  *(undefined8 *)(puVar1 + 0x1c0) = 0;
  *(undefined8 *)(puVar1 + 0x1b8) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x1d0) = 0;
  *(undefined8 *)(puVar1 + 0x1c8) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x1e0) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x1d8) = 0;
  *(undefined8 *)(puVar1 + 0x1f0) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x1e8) = 0;
  *(undefined8 *)(puVar1 + 0x200) = 0;
  *(undefined8 *)(puVar1 + 0x1f8) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x210) = 0;
  *(undefined8 *)(puVar1 + 0x208) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x220) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x218) = 0;
  *(undefined8 *)(puVar1 + 0x230) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x228) = 0;
  *(undefined8 *)(puVar1 + 0x240) = 0;
  *(undefined8 *)(puVar1 + 0x238) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x250) = 0;
  *(undefined8 *)(puVar1 + 0x248) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x260) = 0x3f800000;
  *(undefined8 *)(puVar1 + 600) = 0;
  *(undefined8 *)(puVar1 + 0x270) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x268) = 0;
  *(undefined8 *)(puVar1 + 0x2a0) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x298) = 0;
  *(undefined8 *)(puVar1 + 0x2b0) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x2a8) = 0;
  *(undefined8 *)(puVar1 + 0x280) = 0;
  *(undefined8 *)(puVar1 + 0x278) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x290) = 0;
  *(undefined8 *)(puVar1 + 0x288) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x2b8) = 1;
  _memcpy(puVar1 + 0x2c0,&UNK_10e4ceda8,0x110);
  *(undefined8 *)(puVar1 + 0x5b0) = 0;
  *(undefined8 *)(puVar1 + 0x5a8) = 0;
  *(undefined8 *)(puVar1 + 0x5c0) = 0;
  *(undefined8 *)(puVar1 + 0x5b8) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x5d0) = 0;
  *(undefined8 *)(puVar1 + 0x5c8) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x5e0) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x5d8) = 0;
  *(undefined8 *)(puVar1 + 0x5f0) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x5e8) = 0;
  *(undefined8 *)(puVar1 + 0x600) = 0;
  *(undefined8 *)(puVar1 + 0x5f8) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x610) = 0;
  *(undefined8 *)(puVar1 + 0x608) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x620) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x618) = 0;
  *(undefined8 *)(puVar1 + 0x630) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x628) = 0;
  *(undefined8 *)(puVar1 + 0x640) = 0;
  *(undefined8 *)(puVar1 + 0x638) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x650) = 0;
  *(undefined8 *)(puVar1 + 0x648) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x660) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x658) = 0;
  *(undefined8 *)(puVar1 + 0x670) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x668) = 0;
  *(undefined8 *)(puVar1 + 0x680) = 0;
  *(undefined8 *)(puVar1 + 0x678) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x690) = 0;
  *(undefined8 *)(puVar1 + 0x688) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x6a0) = 0x3f800000;
  *(undefined8 *)(puVar1 + 0x698) = 0;
  *(undefined8 *)(puVar1 + 0x6b0) = 0x3f80000000000000;
  *(undefined8 *)(puVar1 + 0x6a8) = 0;
  *(undefined8 *)(puVar1 + 0x6b8) = 1;
  _memcpy(puVar1 + 0x6c0,&UNK_10e4ceda8,0x110);
  *(undefined8 *)(puVar1 + 0x900) = 0;
  *(undefined4 *)(puVar1 + 0x908) = 0;
  *(undefined8 *)(puVar1 + 0x938) = 0;
  *(undefined8 *)(puVar1 + 0x930) = 0;
  *(undefined8 *)(puVar1 + 0x948) = 0;
  *(undefined8 *)(puVar1 + 0x940) = 0;
  puVar1[0x950] = 0;
  *(undefined8 *)(puVar1 + 0x8e0) = 0;
  *(undefined8 *)(puVar1 + 0x8f0) = 0;
  *(undefined8 *)(puVar1 + 0x8e8) = 0;
  puVar1[0x8f8] = 0;
  return puVar1;
}



/* Entry: 10a5e8224; end: 10a5e838f;  */

long FUN_10a5e8224(long param_1)

{
  undefined8 uVar1;
  
  _bzero(param_1,0x958);
  *(undefined8 *)(param_1 + 0xc) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 4) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x1c) = 0x7fc000007fc00000;
  *(undefined8 *)(param_1 + 0x14) = 0x7fc000007fc00000;
  *(undefined4 *)(param_1 + 0x24) = 0x7fa00000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x94) = 3;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 200) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x220) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x260) = 0x3f800000;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2b8) = 1;
  _memcpy(param_1 + 0x2c0,&UNK_10e4ceda8,0x110);
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5b8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x5e0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x620) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x650) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x660) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x678) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x690) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x6a0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 1;
  _memcpy(param_1 + 0x6c0,&UNK_10e4ceda8,0x110);
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined8 *)(param_1 + 0x938) = 0;
  *(undefined8 *)(param_1 + 0x930) = 0;
  *(undefined8 *)(param_1 + 0x948) = 0;
  *(undefined8 *)(param_1 + 0x940) = 0;
  *(undefined1 *)(param_1 + 0x950) = 0;
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  *(undefined8 *)(param_1 + 0x8f0) = 0;
  *(undefined8 *)(param_1 + 0x8e8) = 0;
  *(undefined1 *)(param_1 + 0x8f8) = 0;
  return param_1;
}



/* Entry: 10a5e8390; end: 10a5e83a3;  */

void FUN_10a5e8390(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (0x1b65e2e3beee05 < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a5e8450(param_4,uVar1);
        uVar1 = uVar1 + 0x958;
        param_4 = param_4 + 0x958;
      } while (uVar1 != param_3);
      do {
        func_0x00010a5e80dc(param_2);
        param_2 = param_2 + 0x958;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x958);
  return;
}



/* Entry: 10a5e83a4; end: 10a5e83eb;  */

void FUN_10a5e83a4(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (0x1b65e2e3beee05 < param_2) {
    func_0x000109ffded8();
    uVar1 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a5e8450(param_4,uVar1);
        uVar1 = uVar1 + 0x958;
        param_4 = param_4 + 0x958;
      } while (uVar1 != param_3);
      do {
        func_0x00010a5e80dc(param_2);
        param_2 = param_2 + 0x958;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm(param_2 * 0x958);
  return;
}



/* Entry: 10a5e83ec; end: 10a5e844f;  */

void FUN_10a5e83ec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a5e8450(param_4,lVar1);
      lVar1 = lVar1 + 0x958;
      param_4 = param_4 + 0x958;
    } while (lVar1 != param_3);
    do {
      func_0x00010a5e80dc(param_2);
      param_2 = param_2 + 0x958;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a5e8450; end: 10a5e8663;  */

undefined8 * FUN_10a5e8450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  uVar1 = param_2[4];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[4] = uVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  param_1[7] = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  uVar1 = param_2[0x10];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  uVar10 = param_2[0xd];
  uVar9 = param_2[0xc];
  uVar8 = param_2[0xf];
  uVar7 = param_2[0xe];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar7;
  uVar1 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  uVar5 = param_2[0x15];
  uVar1 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  uVar8 = param_2[0x18];
  uVar10 = param_2[0x1b];
  uVar9 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar8;
  param_1[0x1b] = uVar10;
  param_1[0x1a] = uVar9;
  param_1[0x15] = uVar5;
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x1c] = 0;
  lVar2 = param_2[0x1c];
  param_1[0x1c] = lVar2;
  if (lVar2 != 0) {
    puVar3 = param_1 + 0x1d;
    puVar4 = param_2 + 0x1d;
    do {
      uVar1 = *puVar4;
      uVar6 = puVar4[3];
      uVar5 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar1;
      puVar3[3] = uVar6;
      puVar3[2] = uVar5;
      uVar5 = puVar4[5];
      uVar1 = puVar4[4];
      uVar7 = puVar4[7];
      uVar6 = puVar4[6];
      uVar8 = puVar4[8];
      uVar10 = puVar4[0xb];
      uVar9 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar8;
      puVar3[0xb] = uVar10;
      puVar3[10] = uVar9;
      puVar3[5] = uVar5;
      puVar3[4] = uVar1;
      puVar3[7] = uVar7;
      puVar3[6] = uVar6;
      puVar4 = puVar4 + 0xc;
      puVar3 = puVar3 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  _memcpy(param_1 + 0x35,param_2 + 0x35,0x110);
  param_1[0x57] = 0;
  lVar2 = param_2[0x57];
  param_1[0x57] = lVar2;
  if (lVar2 != 0) {
    puVar3 = param_1 + 0x58;
    puVar4 = param_2 + 0x58;
    do {
      _memcpy(puVar3,puVar4,0x110);
      puVar4 = puVar4 + 0x22;
      puVar3 = puVar3 + 0x22;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[0x9c] = 0;
  lVar2 = param_2[0x9c];
  param_1[0x9c] = lVar2;
  if (lVar2 != 0) {
    puVar3 = param_1 + 0x9d;
    puVar4 = param_2 + 0x9d;
    do {
      uVar1 = *puVar4;
      uVar6 = puVar4[3];
      uVar5 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar1;
      puVar3[3] = uVar6;
      puVar3[2] = uVar5;
      uVar5 = puVar4[5];
      uVar1 = puVar4[4];
      uVar7 = puVar4[7];
      uVar6 = puVar4[6];
      uVar8 = puVar4[8];
      uVar10 = puVar4[0xb];
      uVar9 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar8;
      puVar3[0xb] = uVar10;
      puVar3[10] = uVar9;
      puVar3[5] = uVar5;
      puVar3[4] = uVar1;
      puVar3[7] = uVar7;
      puVar3[6] = uVar6;
      puVar4 = puVar4 + 0xc;
      puVar3 = puVar3 + 0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  _memcpy(param_1 + 0xb5,param_2 + 0xb5,0x110);
  param_1[0xd7] = 0;
  lVar2 = param_2[0xd7];
  param_1[0xd7] = lVar2;
  if (lVar2 != 0) {
    puVar3 = param_1 + 0xd8;
    puVar4 = param_2 + 0xd8;
    do {
      _memcpy(puVar3,puVar4,0x110);
      puVar4 = puVar4 + 0x22;
      puVar3 = puVar3 + 0x22;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[0x11e] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  uVar1 = param_2[0x11c];
  param_1[0x11d] = param_2[0x11d];
  param_1[0x11c] = uVar1;
  param_1[0x11e] = param_2[0x11e];
  param_2[0x11e] = 0;
  param_2[0x11d] = 0;
  param_2[0x11c] = 0;
  *(undefined1 *)(param_1 + 0x11f) = *(undefined1 *)(param_2 + 0x11f);
  uVar5 = param_2[0x121];
  uVar1 = param_2[0x120];
  param_1[0x122] = param_2[0x122];
  param_1[0x121] = uVar5;
  param_1[0x120] = uVar1;
  FUN_10a5e8664(param_1 + 0x123,param_2 + 0x123);
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[0x127] = 0;
  param_1[0x127] = param_2[0x127];
  uVar1 = param_2[0x128];
  param_1[0x129] = param_2[0x129];
  param_1[0x128] = uVar1;
  param_2[0x129] = 0;
  param_2[0x128] = 0;
  param_2[0x127] = 0;
  *(undefined1 *)(param_1 + 0x12a) = *(undefined1 *)(param_2 + 0x12a);
  return param_1;
}



/* Entry: 10a5e8664; end: 10a5e86c7;  */

long FUN_10a5e8664(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10a5e86c8; end: 10a5e8713;  */

long * FUN_10a5e86c8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x958;
    func_0x00010a5e80dc();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a5e8714; end: 10a5e8983;  */

undefined8 * FUN_10a5e8714(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_110bf85d0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x6e) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = 0x3f80000000000000;
  param_1[0x16] = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x18] = 0x3f80000000000000;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0x3f80000000000000;
  param_1[0x20] = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x22] = 0x3f80000000000000;
  param_1[0x21] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  lVar2 = 0x240;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  puVar1 = param_1;
  puVar3 = (undefined8 *)&UNK_110baa5e0;
  do {
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
      *(undefined8 **)((long)param_1 + lVar2) = puVar1;
    }
    lVar2 = lVar2 + 8;
    puVar3 = puVar3 + 0xf;
  } while (lVar2 != 0x2f8);
  param_1[0x60] = 0;
  param_1[0x5f] = 0x3f800000;
  param_1[0x62] = 0;
  param_1[0x61] = 0x3f80000000000000;
  param_1[100] = 0x3f800000;
  param_1[99] = 0;
  param_1[0x66] = 0x3f80000000000000;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined1 *)((long)param_1 + 0x342) = 0;
  *(undefined4 *)((long)param_1 + 0x344) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  _bzero(param_1 + 0x6c,0x250);
  *(undefined4 *)(param_1 + 0xb6) = 0x3f800000;
  return param_1;
}



/* Entry: 10a5e8984; end: 10a5e8a07;  */

void FUN_10a5e8984(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)puVar2[1];
  puVar1 = puVar3;
  if (puVar4 != puVar3) {
    do {
      puVar1 = puVar4 + -8;
      *puVar1 = &PTR_DAT_110b17898;
      func_0x00010a004dac(puVar4 + -7);
      puVar4 = puVar1;
    } while (puVar1 != puVar3);
    puVar1 = *(undefined8 **)*param_1;
  }
  puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10a5e8a08; end: 10a5e8a47;  */

void FUN_10a5e8a08(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a5e24d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a5e8a48; end: 10a5e8b27;  */

void FUN_10a5e8a48(long *param_1)

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
        lVar2 = lVar2 + -0x178;
        FUN_10a0477e8(lVar2);
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



/* Entry: 10a5e8b28; end: 10a5e8b67;  */

void FUN_10a5e8b28(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a5e4d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a5e8b68; end: 10a5e8ccb;  */

undefined8 * FUN_10a5e8b68(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puStack_38;
  
  FUN_10a5e8ccc(param_1 + 0xb2);
  lVar2 = 0;
  do {
    lVar1 = *(long *)((long)param_1 + lVar2 + 0x578);
    if (lVar1 != 0) {
      *(long *)((long)param_1 + lVar2 + 0x580) = lVar1;
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x228);
  puVar3 = (undefined8 *)&UNK_110baa5f8;
  lVar2 = 0x240;
  do {
    if (*(long *)((long)param_1 + lVar2) != 0) {
      (*(code *)*puVar3)();
      *(undefined8 *)((long)param_1 + lVar2) = 0;
    }
    lVar2 = lVar2 + 8;
    puVar3 = puVar3 + 0xf;
  } while (lVar2 != 0x2f8);
  puStack_38 = param_1 + 0x45;
  FUN_10a5e8984(&puStack_38);
  puStack_38 = param_1 + 0x42;
  FUN_10a5e8a08(&puStack_38);
  puStack_38 = param_1 + 0x3f;
  FUN_10a5e7e5c(&puStack_38);
  puStack_38 = param_1 + 0x3b;
  FUN_10a5e8a48(&puStack_38);
  if (param_1[0x38] != 0) {
    param_1[0x39] = param_1[0x38];
    __ZdlPv();
  }
  if (param_1[0x35] != 0) {
    param_1[0x36] = param_1[0x35];
    __ZdlPv();
  }
  puStack_38 = param_1 + 0x32;
  func_0x00010a5e8ab8(&puStack_38);
  if (param_1[0x2f] != 0) {
    param_1[0x30] = param_1[0x2f];
    __ZdlPv();
  }
  if (param_1[0x2c] != 0) {
    param_1[0x2d] = param_1[0x2c];
    __ZdlPv();
  }
  puStack_38 = param_1 + 0x29;
  FUN_10a5e8b28(&puStack_38);
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    __ZdlPv();
  }
  if (param_1[0x23] != 0) {
    param_1[0x24] = param_1[0x23];
    __ZdlPv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a5e8ccc; end: 10a5e8d13;  */

long * FUN_10a5e8ccc(long *param_1)

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



/* Entry: 10a5e8d14; end: 10a5e8d73;  */

long FUN_10a5e8d14(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  puVar2 = (undefined8 *)&UNK_110baa618;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      *(undefined8 *)(param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
    puVar2 = puVar2 + 0xf;
  } while (lVar1 != 0xb8);
  return param_1;
}



/* Entry: 10a5e8d74; end: 10a5e8fef;  */

long * FUN_10a5e8d74(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  uVar4 = param_1[2];
  plVar11 = (long *)*param_1;
  plVar2 = param_1;
  if ((ulong)((long)(uVar4 - (long)plVar11) >> 1) < param_4) {
    plVar12 = param_1;
    uVar7 = param_2;
    uVar8 = param_3;
    uVar9 = param_4;
    if (plVar11 != (long *)0x0) {
      param_1[1] = (long)plVar11;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar12 = plVar11;
    }
    if ((long)param_4 < 0) {
      FUN_10a5e55f4();
      lVar5 = plVar12[2];
      plVar11 = (long *)*plVar12;
      plVar2 = plVar12;
      if ((ulong)((lVar5 - (long)plVar11 >> 4) * -0x5555555555555555) < uVar9) {
        plVar13 = plVar12;
        uVar4 = uVar7;
        uVar3 = uVar8;
        if (plVar11 != (long *)0x0) {
          plVar12[1] = (long)plVar11;
          __ZdlPv();
          lVar5 = 0;
          *plVar12 = 0;
          plVar12[1] = 0;
          plVar12[2] = 0;
          plVar13 = plVar11;
        }
        if (0x555555555555555 < uVar9) {
          FUN_10a5e56f8();
          if (uVar4 != 0) {
            uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
            uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
            uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
            uVar8 = uVar4 - 1;
            if ((uVar4 & uVar8) == 0) {
              uVar9 = uVar7 & uVar8;
            }
            else {
              uVar9 = uVar7;
              if (uVar4 <= uVar7) {
                uVar9 = 0;
                if (uVar4 != 0) {
                  uVar9 = uVar7 / uVar4;
                }
                uVar9 = uVar7 - uVar9 * uVar4;
              }
            }
            if ((long *)plVar13[uVar9] != (long *)0x0) {
              plVar2 = *(long **)plVar13[uVar9];
              do {
                if (plVar2 == (long *)0x0) {
                  return (long *)0x0;
                }
                uVar10 = plVar2[1];
                if (uVar7 - uVar10 == 0) {
                  if (plVar2[2] == uVar3) {
                    return plVar2;
                  }
                }
                else {
                  if ((uVar4 & uVar8) == 0) {
                    uVar10 = uVar10 & uVar8;
                  }
                  else if (uVar4 <= uVar10) {
                    uVar1 = 0;
                    if (uVar4 != 0) {
                      uVar1 = uVar10 / uVar4;
                    }
                    uVar10 = uVar10 - uVar1 * uVar4;
                  }
                  if (uVar10 != uVar9) {
                    return (long *)0x0;
                  }
                }
                plVar2 = (long *)*plVar2;
              } while( true );
            }
          }
          return (long *)0x0;
        }
        uVar4 = (lVar5 >> 4) * 0x5555555555555556;
        if (uVar4 < uVar9 || uVar4 - uVar9 == 0) {
          uVar4 = uVar9;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar5 >> 4) * -0x5555555555555555)) {
          uVar4 = 0x555555555555555;
        }
        FUN_10a5e56b0(plVar12,uVar4);
        plVar11 = (long *)plVar12[1];
        lVar6 = uVar8 - uVar7;
        if (lVar6 != 0) {
          plVar2 = plVar11;
          _memmove(plVar11,uVar7,lVar6 + -4);
        }
        lVar6 = (long)plVar11 + lVar6;
      }
      else {
        plVar13 = (long *)plVar12[1];
        lVar5 = (long)plVar13 - (long)plVar11;
        if ((ulong)((lVar5 >> 4) * -0x5555555555555555) < uVar9) {
          if (plVar13 != plVar11) {
            _memmove(plVar11,uVar7,lVar5 + -4);
            plVar13 = (long *)plVar12[1];
            plVar2 = plVar11;
          }
          lVar6 = uVar8 - (uVar7 + lVar5);
          if (lVar6 != 0) {
            plVar2 = plVar13;
            _memmove(plVar13,uVar7 + lVar5,lVar6 + -4);
          }
          lVar6 = (long)plVar13 + lVar6;
        }
        else {
          lVar6 = uVar8 - uVar7;
          if (lVar6 != 0) {
            plVar2 = plVar11;
            _memmove(plVar11,uVar7,lVar6 + -4);
          }
          lVar6 = (long)plVar11 + lVar6;
        }
      }
      plVar12[1] = lVar6;
      return plVar2;
    }
    uVar7 = uVar4;
    if (uVar4 <= param_4) {
      uVar7 = param_4;
    }
    if (0x7ffffffffffffffd < uVar4) {
      uVar7 = 0x7fffffffffffffff;
    }
    FUN_10a5e55c0(param_1,uVar7);
    plVar11 = (long *)param_1[1];
    lVar5 = param_3 - param_2;
    if (lVar5 != 0) {
      plVar2 = plVar11;
      _memmove(plVar11,param_2,lVar5);
    }
    lVar5 = (long)plVar11 + lVar5;
  }
  else {
    plVar12 = (long *)param_1[1];
    if ((ulong)((long)plVar12 - (long)plVar11 >> 1) < param_4) {
      lVar6 = param_2 + ((long)plVar12 - (long)plVar11);
      if (plVar12 != plVar11) {
        _memmove(plVar11,param_2);
        plVar12 = (long *)param_1[1];
        plVar2 = plVar11;
      }
      lVar5 = param_3 - lVar6;
      if (lVar5 != 0) {
        plVar2 = plVar12;
        _memmove(plVar12,lVar6,lVar5);
      }
      lVar5 = (long)plVar12 + lVar5;
    }
    else {
      lVar5 = param_3 - param_2;
      if (lVar5 != 0) {
        plVar2 = plVar11;
        _memmove(plVar11,param_2,lVar5);
      }
      lVar5 = (long)plVar11 + lVar5;
    }
  }
  param_1[1] = lVar5;
  return plVar2;
}



/* Entry: 10a5e8ff0; end: 10a5e90bb;  */

long * FUN_10a5e8ff0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  if (param_2 != 0) {
    uVar3 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ (ulong)uVar2) * -0x622015f714c7d297;
    uVar3 = ((ulong)uVar2 ^ uVar3 >> 0x2f ^ uVar3) * -0x622015f714c7d297;
    uVar3 = (uVar3 ^ uVar3 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = param_2 - 1;
    if ((param_2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (param_2 <= uVar3) {
        uVar5 = 0;
        if (param_2 != 0) {
          uVar5 = uVar3 / param_2;
        }
        uVar5 = uVar3 - uVar5 * param_2;
      }
    }
    plVar6 = *(long **)(param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 - uVar7 == 0) {
          if (plVar6[2] == param_3) {
            return plVar6;
          }
        }
        else {
          if ((param_2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
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



/* Entry: 10a5e90bc; end: 10a5e92ff;  */

undefined1  [16] FUN_10a5e90bc(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10a5e92cc;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x20;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *(long *)*param_4;
  *(undefined2 *)(plVar10 + 3) = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    func_0x00010a5e7ecc(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10a5e92bc;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10a5e92bc:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a5e92cc:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a5e9300; end: 10a5e958f;  */

undefined1  [16] FUN_10a5e9300(long *param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined1 auVar12 [16];
  
  uVar11 = *(ulong *)(param_2 + 0x18);
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar5 = uVar10 - 1;
    if ((uVar10 & uVar5) == 0) {
      unaff_x25 = uVar5 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar8 * uVar10;
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar3 = (long *)*puVar7; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        uVar8 = plVar3[1];
        if (uVar8 == uVar11) {
          if (plVar3[5] == uVar11) {
            uVar4 = 0;
            goto LAB_10a5e9550;
          }
        }
        else {
          if ((uVar10 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            uVar8 = uVar8 - uVar2 * uVar10;
          }
          if (uVar8 != unaff_x25) break;
        }
      }
    }
  }
  plVar3 = (long *)0x68;
  __Znwm();
  *plVar3 = 0;
  plVar3[1] = uVar11;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar3 + 2,*param_3,param_3[1]);
  }
  else {
    lVar6 = *param_3;
    plVar3[3] = param_3[1];
    plVar3[2] = lVar6;
    plVar3[4] = param_3[2];
  }
  plVar3[5] = param_3[3];
  lVar6 = *param_4;
  plVar3[7] = param_4[1];
  plVar3[6] = lVar6;
  *param_4 = 0;
  param_4[1] = 0;
  lVar6 = param_4[2];
  lVar1 = param_4[3];
  param_4[2] = 0;
  plVar3[8] = lVar6;
  plVar3[9] = lVar1;
  lVar6 = param_4[4];
  plVar3[0xb] = param_4[5];
  plVar3[10] = lVar6;
  param_4[4] = 0;
  param_4[5] = 0;
  plVar3[0xc] = param_4[6];
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    FUN_10a046b78(param_1,uVar5);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar5 * uVar10;
      }
    }
  }
  lVar6 = *param_1;
  plVar9 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar3 = *plVar9;
    *plVar9 = (long)plVar3;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar9;
    if (*plVar3 != 0) {
      uVar11 = *(ulong *)(*plVar3 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar5 * uVar10;
      }
      *(long **)(*param_1 + uVar11 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar9;
    *plVar9 = (long)plVar3;
  }
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10a5e9550:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar3;
  return auVar12;
}



/* Entry: 10a5e9590; end: 10a5e959f;  */

void FUN_10a5e9590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf8580;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


