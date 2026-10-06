/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a87f100; end: 10a87f1df;  */

void FUN_10a87f100(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    puVar9 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a87ed30();
      lVar8 = *param_1;
      if (lVar8 != 0) {
        lVar3 = param_1[1];
        lVar6 = lVar8;
        if (lVar3 != lVar8) {
          do {
            lVar3 = lVar3 + -0x10;
            FUN_10a297544();
          } while (lVar3 != lVar8);
          lVar6 = *param_1;
        }
        param_1[1] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar6);
        return;
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    puVar4 = param_2;
    plStack_38 = param_1;
    FUN_10a87ed44();
    puVar2 = (undefined8 *)(uVar7 + lVar8);
    uVar10 = *param_2;
    puVar9 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    *param_2 = 0;
    param_2[1] = 0;
    lVar8 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lStack_58 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    lStack_40 = param_1[2];
    param_1[2] = uVar7 + (long)puVar4 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a87ed78(&lStack_58);
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 10a87f1e0; end: 10a87f23b;  */

void FUN_10a87f1e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a297544();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a87f23c; end: 10a87f28f;  */

undefined * FUN_10a87f23c(short param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  FUN_10ae02ea8(0,(int)param_1);
  ppuVar6 = &PTR_PTR_113303070;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  func_0x00010ae02eb8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a87f290; end: 10a87f35f;  */

void FUN_10a87f290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 8) = 10;
  switch(*(undefined1 *)(param_2 + 8)) {
  case 0:
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    break;
  case 1:
    *param_1 = *param_2;
    break;
  case 2:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    break;
  case 3:
    uVar1 = *param_2;
    goto code_r0x00010a87f2e4;
  case 4:
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
code_r0x00010a87f2e4:
    *param_1 = uVar1;
    break;
  case 5:
  case 6:
  case 9:
    uVar2 = param_2[1];
    uVar1 = *param_2;
    goto code_r0x00010a87f334;
  case 7:
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    goto code_r0x00010a87f330;
  case 8:
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    uVar5 = param_2[4];
    uVar7 = param_2[7];
    uVar6 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    param_1[7] = uVar7;
    param_1[6] = uVar6;
code_r0x00010a87f330:
    param_1[3] = uVar4;
    param_1[2] = uVar3;
code_r0x00010a87f334:
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return;
}



/* Entry: 10a87f360; end: 10a87f423;  */

void FUN_10a87f360(long *param_1,undefined8 *param_2)

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
      FUN_10a87f424();
      plVar3 = (long *)&UNK_10f67f21b;
      FUN_109ffde64();
      if ((ulong)param_2 >> 0x3d == 0) {
        __Znwm((long)param_2 << 3);
        return;
      }
      func_0x000109ffded8();
      lVar7 = *plVar3;
      *plVar3 = 0;
      if (lVar7 != 0) {
        if ((char)plVar3[2] == '\x01') {
          func_0x00010a87f4b4(lVar7 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar7);
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
    FUN_10a87f438();
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



/* Entry: 10a87f424; end: 10a87f437;  */

void FUN_10a87f424(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f67f21b;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    if ((char)plVar1[2] == '\x01') {
      func_0x00010a87f4b4(lVar2 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a87f438; end: 10a87f4ef;  */

void FUN_10a87f438(long *param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000109ffded8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a87f4b4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a87f4f0; end: 10a87f8b7;  */

long * FUN_10a87f4f0(long *param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x24;
  
  uVar13 = (ulong)param_2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x24 = uVar5 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar8 = 0;
        if (uVar14 != 0) {
          uVar8 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar8 * uVar14;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar13) {
          if (*(int *)(plVar7 + 2) == param_2) {
            return plVar7;
          }
        }
        else {
          if ((uVar14 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar14 <= uVar8) {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar8 / uVar14;
            }
            uVar8 = uVar8 - uVar6 * uVar14;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x30;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = uVar13;
  *(undefined4 *)(plVar7 + 2) = *param_3;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[3] = 0;
  if ((uVar14 == 0) || (*(float *)(param_1 + 4) * (float)uVar14 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar14) {
      uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar5 = uVar5 | uVar14 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar14 = param_1[1];
    }
    if (uVar14 < uVar5) {
LAB_10a87f658:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a87f8a4);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar14 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar5 != uVar14);
      plVar9 = (long *)param_1[2];
      uVar14 = uVar5;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar5 <= uVar8) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar14) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar14) {
        if (uVar5 != 0) goto LAB_10a87f658;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = param_1[1];
      }
    }
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x24 = uVar14 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        unaff_x24 = uVar13 - uVar5 * uVar14;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_10a87f838;
    uVar13 = *(ulong *)(*plVar7 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar13 = uVar13 & uVar14 - 1;
    }
    else if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      uVar13 = uVar13 - uVar5 * uVar14;
    }
    plVar9 = (long *)(*param_1 + uVar13 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_10a87f838:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10a87f8b8; end: 10a87fb4f;  */

void FUN_10a87f8b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10a0803a0(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a87fb50; end: 10a87ffb7;  */

undefined8 *
FUN_10a87fb50(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined4 *param_5)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x25;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iStack_7c;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  iVar7 = (int)param_2;
  uVar17 = (ulong)iVar7;
  uVar18 = param_3[1];
  iStack_7c = iVar7;
  if (uVar18 != 0) {
    uVar8 = uVar18 - 1;
    if ((uVar18 & uVar8) == 0) {
      unaff_x25 = uVar8 & uVar17;
    }
    else {
      unaff_x25 = uVar17;
      if (uVar18 <= uVar17) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar17 / uVar18;
        }
        unaff_x25 = uVar17 - uVar11 * uVar18;
      }
    }
    puVar10 = *(undefined8 **)(*param_3 + unaff_x25 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar10; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar11 = plVar16[1];
        if (uVar11 == uVar17) {
          if ((int)plVar16[2] == iVar7) goto LAB_10a87fec4;
        }
        else {
          if ((uVar18 & uVar8) == 0) {
            uVar11 = uVar11 & uVar8;
          }
          else if (uVar18 <= uVar11) {
            uVar9 = 0;
            if (uVar18 != 0) {
              uVar9 = uVar11 / uVar18;
            }
            uVar11 = uVar11 - uVar9 * uVar18;
          }
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar16 = (long *)0x58;
  __Znwm();
  uStack_68 = 1;
  *plVar16 = 0;
  plVar16[1] = uVar17;
  *(int *)(plVar16 + 2) = iVar7;
  plVar16[4] = 0;
  plVar16[3] = 0;
  plVar16[6] = 0;
  plVar16[5] = 0;
  plVar16[8] = 0;
  plVar16[7] = 0;
  plVar16[10] = 0;
  plVar16[9] = 0;
  plStack_78 = plVar16;
  plStack_70 = param_3;
  if ((uVar18 == 0) || (*(float *)(param_3 + 4) * (float)uVar18 < (float)(param_3[3] + 1))) {
    uVar8 = 1;
    if (2 < uVar18) {
      uVar8 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar8 = uVar8 | uVar18 << 1;
    uVar11 = (ulong)((float)(param_3[3] + 1) / *(float *)(param_3 + 4));
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar18 = param_3[1];
    }
    if (uVar18 < uVar8) {
LAB_10a87fcd8:
      if (uVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a87ffa4);
        (*pcVar4)();
      }
      lVar5 = uVar8 << 3;
      __Znwm();
      lVar6 = *param_3;
      *param_3 = lVar5;
      if (lVar6 != 0) {
        __ZdlPv();
      }
      uVar18 = 0;
      param_3[1] = uVar8;
      do {
        *(undefined8 *)(*param_3 + uVar18 * 8) = 0;
        uVar18 = uVar18 + 1;
      } while (uVar8 != uVar18);
      plVar12 = (long *)param_3[2];
      uVar18 = uVar8;
      if (plVar12 != (long *)0x0) {
        uVar11 = plVar12[1];
        uVar9 = uVar8 - 1;
        if ((uVar8 & uVar9) == 0) {
          uVar11 = uVar11 & uVar9;
        }
        else if (uVar8 <= uVar11) {
          uVar15 = 0;
          if (uVar8 != 0) {
            uVar15 = uVar11 / uVar8;
          }
          uVar11 = uVar11 - uVar15 * uVar8;
        }
        *(long **)(*param_3 + uVar11 * 8) = param_3 + 2;
        plVar13 = (long *)*plVar12;
        while (plVar13 != (long *)0x0) {
          uVar15 = plVar13[1];
          if ((uVar8 & uVar9) == 0) {
            uVar15 = uVar15 & uVar9;
          }
          else if (uVar8 <= uVar15) {
            uVar3 = 0;
            if (uVar8 != 0) {
              uVar3 = uVar15 / uVar8;
            }
            uVar15 = uVar15 - uVar3 * uVar8;
          }
          plVar14 = plVar13;
          if (uVar15 != uVar11) {
            lVar5 = *param_3;
            if (*(long *)(lVar5 + uVar15 * 8) == 0) {
              *(long **)(lVar5 + uVar15 * 8) = plVar12;
              uVar11 = uVar15;
            }
            else {
              *plVar12 = *plVar13;
              *plVar13 = **(undefined8 **)(lVar5 + uVar15 * 8);
              **(long **)(lVar5 + uVar15 * 8) = (long)plVar13;
              plVar14 = plVar12;
            }
          }
          plVar12 = plVar14;
          plVar13 = (long *)*plVar14;
        }
      }
    }
    else if (uVar8 < uVar18) {
      uVar11 = (ulong)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 < uVar18) {
        if (uVar8 != 0) goto LAB_10a87fcd8;
        lVar5 = *param_3;
        *param_3 = 0;
        if (lVar5 != 0) {
          __ZdlPv();
        }
        param_3[1] = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = param_3[1];
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x25 = uVar18 - 1 & uVar17;
    }
    else {
      unaff_x25 = uVar17;
      if (uVar18 <= uVar17) {
        uVar8 = 0;
        if (uVar18 != 0) {
          uVar8 = uVar17 / uVar18;
        }
        unaff_x25 = uVar17 - uVar8 * uVar18;
      }
    }
  }
  lVar5 = *param_3;
  plVar12 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = param_3 + 2;
    *plVar16 = *plVar12;
    *plVar12 = (long)plVar16;
    *(long **)(lVar5 + unaff_x25 * 8) = plVar12;
    if (*plVar16 == 0) goto LAB_10a87feb8;
    uVar17 = *(ulong *)(*plVar16 + 8);
    if ((uVar18 & uVar18 - 1) == 0) {
      uVar17 = uVar17 & uVar18 - 1;
    }
    else if (uVar18 <= uVar17) {
      uVar8 = 0;
      if (uVar18 != 0) {
        uVar8 = uVar17 / uVar18;
      }
      uVar17 = uVar17 - uVar8 * uVar18;
    }
    plVar12 = (long *)(*param_3 + uVar17 * 8);
  }
  else {
    *plVar16 = *plVar12;
  }
  *plVar12 = (long)plVar16;
LAB_10a87feb8:
  param_3[3] = param_3[3] + 1;
LAB_10a87fec4:
  if (*(char *)((long)plVar16 + 0x2f) < '\0') {
    __ZdlPv(plVar16[3]);
  }
  lVar6 = param_4[1];
  lVar5 = *param_4;
  plVar16[5] = param_4[2];
  plVar16[4] = lVar6;
  plVar16[3] = lVar5;
  *(undefined1 *)((long)param_4 + 0x17) = 0;
  *(undefined1 *)param_4 = 0;
  if (*(char *)((long)plVar16 + 0x47) < '\0') {
    __ZdlPv(plVar16[6]);
  }
  lVar6 = param_4[4];
  lVar5 = param_4[3];
  plVar16[8] = param_4[5];
  plVar16[7] = lVar6;
  plVar16[6] = lVar5;
  *(undefined1 *)((long)param_4 + 0x2f) = 0;
  *(undefined1 *)(param_4 + 3) = 0;
  FUN_10a2d8800(plVar16 + 9,param_4 + 6);
  param_1 = param_1 + 0x140;
  FUN_10a87f4f0(param_1,param_2,&iStack_7c);
  *(undefined4 *)(param_1 + 0x18) = *param_5;
  uVar20 = *(undefined8 *)(param_5 + 4);
  uVar19 = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)(param_5 + 2) = 0;
  *(undefined8 *)(param_5 + 4) = 0;
  plVar16 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar20;
  *(undefined8 *)(param_1 + 0x20) = uVar19;
  if (plVar16 != (long *)0x0) {
    plVar12 = plVar16 + 1;
    do {
      lVar5 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  return (undefined8 *)(param_1 + 0x20);
}



/* Entry: 10a87ffb8; end: 10a8800df;  */

void FUN_10a87ffb8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a880000(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a8800e0; end: 10a8804ff;  */

/* WARNING: Possible PIC construction at 0x00010a8804a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8804ac) */
/* WARNING: Removing unreachable block (ram,0x00010a8804b8) */
/* WARNING: Removing unreachable block (ram,0x00010a8804f0) */
/* WARNING: Removing unreachable block (ram,0x00010a880518) */
/* WARNING: Removing unreachable block (ram,0x00010a880520) */
/* WARNING: Removing unreachable block (ram,0x00010a880528) */
/* WARNING: Removing unreachable block (ram,0x00010a880530) */
/* WARNING: Removing unreachable block (ram,0x00010a880538) */
/* WARNING: Removing unreachable block (ram,0x00010a880540) */

undefined ** FUN_10a8800e0(undefined8 *param_1,code **param_2,undefined **param_3,long param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined **unaff_x20;
  code **unaff_x21;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = *(undefined ***)(param_4 + 0x18);
  if ((ppuVar7 == (undefined **)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), unaff_x20 = param_3, unaff_x21 = param_2,
     ppuVar7 == (undefined **)0x0)) {
    ppuStack_98 = (undefined **)0x0;
    ppuStack_90 = (undefined **)0x0;
    param_2 = unaff_x21;
  }
  else {
    ppuVar11 = *(undefined ***)(param_4 + 0x10);
    ppuStack_98 = ppuVar11;
    ppuStack_90 = ppuVar7;
    if (ppuVar11 != (undefined **)0x0) {
      uVar8 = (uint)(char)*(byte *)((long)param_1 + 0x17);
      uVar3 = param_1[1];
      if (-1 < (int)uVar8) {
        uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      if (uVar3 == 0) {
        ppuVar7 = &PTR_PTR_113304468;
        unaff_x20 = &PTR_PTR_113304468;
        FUN_10ae079a0(0,&PTR_PTR_113304468);
        FUN_10ae07cd4(ppuVar7,&PTR_PTR_113304468);
        puStack_f0 = (undefined *)CONCAT44(puStack_f0._4_4_,2);
        ppuStack_e8 = (undefined **)&UNK_10f67f3f0;
        FUN_10a865734(ppuVar11,&puStack_f0);
      }
      else {
        pcVar4 = param_2[1];
        if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
          pcVar4 = (code *)(ulong)*(byte *)((long)param_2 + 0x17);
        }
        if (pcVar4 == (code *)0x0) {
          ppuVar7 = &PTR_PTR_1133044a0;
          unaff_x20 = &PTR_PTR_1133044a0;
          FUN_10ae079a0(0,&PTR_PTR_1133044a0);
          FUN_10ae07cd4(ppuVar7,&PTR_PTR_1133044a0);
          puStack_f0 = (undefined *)CONCAT44(puStack_f0._4_4_,2);
          ppuStack_e8 = (undefined **)&UNK_10f67f416;
          FUN_10a865734(ppuVar11,&puStack_f0);
        }
        else {
          ppuStack_e8 = *(undefined ***)(param_4 + 0x28);
          puStack_f0 = *(undefined **)(param_4 + 0x20);
          if (*(long *)(param_4 + 0x28) != 0) {
            plVar12 = (long *)(*(long *)(param_4 + 0x28) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar6) {
                *plVar12 = *plVar12 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            uVar8 = (uint)*(byte *)((long)param_1 + 0x17);
          }
          if ((uVar8 >> 7 & 1) == 0) {
            puStack_d8 = (undefined *)param_1[1];
            ppuStack_e0 = (undefined **)*param_1;
            puStack_d0 = (undefined *)param_1[2];
          }
          else {
            func_0x000107c3192c(&ppuStack_e0,*param_1,param_1[1]);
          }
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&ppuStack_c8,*param_2,param_2[1]);
          }
          else {
            pcStack_c0 = param_2[1];
            ppuStack_c8 = (undefined **)*param_2;
            pcStack_b8 = param_2[2];
          }
          ppuStack_b0 = (undefined **)0x0;
          ppuStack_a8 = (undefined **)0x0;
          uStack_a0 = 0;
          FUN_10a05151c(&ppuStack_b0,*param_3,param_3[1],(long)param_3[1] - (long)*param_3);
          pcStack_88 = FUN_10a880550;
          ppuStack_80 = &PTR_FUN_110c24120;
          unaff_x20 = (undefined **)0x58;
          __Znwm();
          unaff_x20[1] = (undefined *)ppuStack_e8;
          *unaff_x20 = puStack_f0;
          puStack_f0 = (undefined *)0x0;
          ppuStack_e8 = (undefined **)0x0;
          if ((long)puStack_d0 < 0) {
            func_0x000107c3192c(unaff_x20 + 2,ppuStack_e0,puStack_d8);
          }
          else {
            unaff_x20[3] = puStack_d8;
            unaff_x20[2] = (undefined *)ppuStack_e0;
            unaff_x20[4] = puStack_d0;
          }
          if ((long)pcStack_b8 < 0) {
            func_0x000107c3192c(unaff_x20 + 5,ppuStack_c8,pcStack_c0);
          }
          else {
            unaff_x20[6] = pcStack_c0;
            unaff_x20[5] = (undefined *)ppuStack_c8;
            unaff_x20[7] = pcStack_b8;
          }
          unaff_x20[8] = (undefined *)0x0;
          unaff_x20[9] = (undefined *)0x0;
          unaff_x20[10] = (undefined *)0x0;
          FUN_10a05151c();
          param_2 = &pcStack_88;
          ppuStack_78 = unaff_x20;
          FUN_10a860860(ppuVar11,&pcStack_88);
          (*(code *)*ppuStack_80)(&ppuStack_80);
          ppuVar11 = ppuStack_b0;
          if (ppuStack_b0 != (undefined **)0x0) {
            ppuStack_a8 = ppuStack_b0;
            __ZdlPv();
          }
          if ((long)pcStack_b8 < 0) {
            ppuVar11 = ppuStack_c8;
            __ZdlPv();
          }
          if ((long)puStack_d0 < 0) {
            ppuVar11 = ppuStack_e0;
            __ZdlPv();
          }
          ppuVar7 = ppuStack_e8;
          if (ppuStack_e8 != (undefined **)0x0) {
            ppuVar2 = ppuStack_e8 + 1;
            do {
              puVar10 = *ppuVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
              if (bVar6) {
                *ppuVar2 = puVar10 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar10 == (undefined *)0x0) {
              (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppuVar11 = ppuVar7;
            }
          }
        }
      }
      goto LAB_10a8801cc;
    }
  }
  ppuVar11 = &PTR_PTR_113304900;
  FUN_10ae079a0(0);
  FUN_10ae07cd4(ppuVar11,&PTR_PTR_113304900);
LAB_10a8801cc:
  ppuVar7 = ppuStack_90;
  if (ppuStack_90 != (undefined **)0x0) {
    ppuVar2 = ppuStack_90 + 1;
    do {
      puVar10 = *ppuVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar6) {
        *ppuVar2 = puVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar10 == (undefined *)0x0) {
      (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar11 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  if (*(char *)((long)unaff_x20 + 0x27) < '\0') {
    __ZdlPv(*param_2);
  }
  plVar12 = (long *)unaff_x20[1];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  return unaff_x20;
}



/* Entry: 10a880500; end: 10a88054f;  */

long FUN_10a880500(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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



/* Entry: 10a880550; end: 10a880adf;  */

void FUN_10a880550(long *param_1,long param_2)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  undefined4 auStack_118 [2];
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  
  if ((*param_1 != 0) && (plVar16 = *(long **)(param_2 + 0x10), **(int **)(*param_1 + 0x1e8) != 4))
  {
    plVar6 = (long *)0x40;
    __Znwm();
    plVar6[1] = 0;
    *plVar6 = 0;
    plVar6[3] = 0;
    plVar6[2] = 0;
    plVar6[5] = 0;
    plVar6[4] = 0;
    plVar6[7] = 0;
    plVar6[6] = 0;
    plVar10 = (long *)*plVar16;
    plVar13 = plVar10;
    if (*(char *)((long)plVar10 + 0x17) < '\0') {
      plVar13 = (long *)*plVar10;
    }
    *plVar6 = (long)plVar13;
    plVar13 = plVar10 + 3;
    if (*(char *)((long)plVar10 + 0x2f) < '\0') {
      plVar13 = (long *)*plVar13;
    }
    plVar6[1] = (long)plVar13;
    uVar5 = *(undefined4 *)((long)plVar10 + 0x34);
    FUN_10a86e53c();
    *(undefined4 *)(plVar6 + 4) = uVar5;
    uVar5 = *(undefined4 *)(*plVar16 + 0x30);
    FUN_10a870330();
    *(undefined4 *)((long)plVar6 + 0x24) = uVar5;
    plVar13 = (long *)(*plVar16 + 0x38);
    if (*(char *)(*plVar16 + 0x4f) < '\0') {
      plVar13 = (long *)*plVar13;
    }
    plVar6[5] = (long)plVar13;
    plVar13 = (long *)0x28;
    __Znwm();
    plVar13[4] = 0;
    plVar13[1] = 0;
    *plVar13 = 0;
    plVar13[3] = 0;
    plVar13[2] = 0;
    FUN_10a1032d4(&puStack_78,plVar16[9] - plVar16[8]);
    puVar1 = (undefined1 *)plVar16[9];
    puVar4 = puStack_78;
    for (puVar14 = (undefined1 *)plVar16[8]; puVar14 != puVar1; puVar14 = puVar14 + 1) {
      *puVar4 = *puVar14;
      puVar4 = puVar4 + 1;
    }
    plVar13[1] = (long)puStack_78;
    plVar13[2] = (long)puStack_70 - (long)puStack_78;
    plVar10 = plVar16 + 5;
    if (*(char *)((long)plVar16 + 0x3f) < '\0') {
      plVar10 = (long *)*plVar10;
    }
    *plVar13 = (long)plVar10;
    lVar11 = *param_1;
    plVar10 = (long *)(lVar11 + 0x408);
    if (*(char *)(lVar11 + 0x41f) < '\0') {
      plVar10 = (long *)*plVar10;
    }
    plVar13[3] = (long)plVar10;
    plVar13[4] = 0x10;
    plVar6[6] = (long)plVar13;
    *(uint *)(plVar6 + 7) = (uint)*(byte *)(lVar11 + 0x4b8);
    ppuStack_98 = &PTR_DAT_110b19d58;
    uStack_90 = 0;
    puStack_88 = &DAT_11383d918;
    uStack_80 = 0;
    func_0x000107c30248(&puStack_88,plVar16 + 2,0);
    pppuVar7 = &ppuStack_98;
    func_0x0001098d161c();
    pppuVar8 = pppuVar7;
    __Znam();
    _bzero();
    func_0x00010b4d1758(&ppuStack_98,pppuVar8,pppuVar7);
    plVar6[2] = (long)pppuVar8;
    plVar6[3] = (long)pppuVar7;
    uStack_a0 = 1;
    plVar10 = (long *)0x10;
    plStack_a8 = plVar6;
    __Znwm();
    FUN_10a8a41a8(&uStack_c0,*param_1 + 0x18);
    if (CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0) == 0) {
      plVar9 = &lStack_100;
    }
    else {
      plStack_f8 = plStack_b8;
      plVar9 = &uStack_c0;
      lStack_100 = CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9 = plStack_f8;
    if (plStack_f8 == (long *)0x0) {
      *plVar10 = lStack_100;
      plVar10[1] = 0;
    }
    else {
      plVar12 = plStack_f8 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *plVar10 = lStack_100;
      plVar10[1] = (long)plStack_f8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      plVar12 = plVar9 + 1;
      do {
        lVar11 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar11 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      }
    }
    plVar9 = *(long **)(*param_1 + 0x368);
    (**(code **)(*plVar9 + 0x60))(plVar9,&plStack_a8,FUN_10a867e00,FUN_10a868058,plVar10);
    uStack_c0._0_4_ = 0x19;
    plVar12 = (long *)*plVar16;
    lVar11 = plVar12[0xc];
    plVar10 = (long *)plVar12[0xd];
    if (plVar10 != (long *)0x0) {
      plVar12 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar12 = (long *)*plVar16;
    }
    lVar15 = *(long *)(*param_1 + 0x3a8);
    plStack_b8 = (long *)lVar11;
    plStack_b0 = plVar10;
    if (*(char *)((long)plVar12 + 0x17) < '\0') {
      func_0x000107c3192c(&lStack_100,*plVar12,plVar12[1]);
      plVar12 = (long *)*plVar16;
    }
    else {
      plStack_f8 = (long *)plVar12[1];
      lStack_100 = *plVar12;
      lStack_f0 = plVar12[2];
    }
    if (*(char *)((long)plVar12 + 0x2f) < '\0') {
      func_0x000107c3192c(&lStack_e8,plVar12[3],plVar12[4]);
      plVar12 = (long *)*plVar16;
    }
    else {
      lStack_e0 = plVar12[4];
      lStack_e8 = plVar12[3];
      lStack_d8 = plVar12[5];
    }
    plStack_c8 = (long *)plVar12[0xb];
    lStack_d0 = plVar12[10];
    if (plVar12[0xb] != 0) {
      plVar16 = (long *)(plVar12[0xb] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    auStack_118[0] = 0x19;
    if (plVar10 != (long *)0x0) {
      plVar16 = plVar10 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar3) {
          *plVar16 = *plVar16 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_110 = lVar11;
    plStack_108 = plVar10;
    FUN_10a87fb50(lVar15,plVar9,lVar15 + 0x118,&lStack_100,auStack_118);
    plVar16 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar10 = plStack_108 + 1;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    plVar16 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar10 = plStack_c8 + 1;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    if (lStack_d8 < 0) {
      __ZdlPv(lStack_e8);
    }
    if (lStack_f0 < 0) {
      __ZdlPv(lStack_100);
    }
    plVar16 = plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar10 = plStack_b0 + 1;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    __ZdaPv(pppuVar8);
    func_0x0001098d14dc(&ppuStack_98);
    if (puStack_78 != (undefined1 *)0x0) {
      puStack_70 = puStack_78;
      __ZdlPv();
    }
    __ZdlPv(plVar13);
    __ZdlPv(plVar6);
  }
  return;
}



/* Entry: 10a880ae0; end: 10a880b43;  */

void FUN_10a880ae0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x40) != 0) {
      *(long *)(lVar1 + 0x48) = *(long *)(lVar1 + 0x40);
      __ZdlPv();
    }
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    func_0x00010a8717fc(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a880b44; end: 10a880b5b;  */

void FUN_10a880b44(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a880b5c; end: 10a880b93;  */

void FUN_10a880b5c(long param_1)

{
  func_0x00010a8717fc(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a880b94; end: 10a880bbb;  */

void FUN_10a880b94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c24138;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a880bbc; end: 10a880d4f;  */

void FUN_10a880bbc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 ******appppppuStack_68 [2];
  char cStack_51;
  undefined4 auStack_50 [2];
  undefined8 ******ppppppuStack_48;
  long lStack_40;
  long *plStack_38;
  
  uVar2 = param_1[1];
  puVar5 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar5 = param_1;
  }
  FUN_10ae03140(0,puVar5,uVar2);
  ppuVar7 = &PTR_PTR_113304198;
  FUN_10ae079a0();
  FUN_10ae0314c();
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_113304198);
  plVar6 = *(long **)(param_2 + 0x18);
  if ((plVar6 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 == (long *)0x0))
  {
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    lStack_40 = lVar8;
    plStack_38 = plVar6;
    if (lVar8 != 0) {
      FUN_10a0ee900(appppppuStack_68,&UNK_10f67f43d,0x20);
      ppppppuStack_48 = appppppuStack_68[0];
      if (-1 < cStack_51) {
        ppppppuStack_48 = appppppuStack_68;
      }
      auStack_50[0] = 2;
      FUN_10a865734(lVar8,auStack_50);
      if (cStack_51 < '\0') {
        __ZdlPv(appppppuStack_68[0]);
      }
      goto LAB_10a880ce8;
    }
  }
  ppuVar7 = &PTR_PTR_113304900;
  FUN_10ae079a0(0,&PTR_PTR_113304900);
  FUN_10ae07cd4(ppuVar7,&PTR_PTR_113304900);
  plVar6 = plStack_38;
  if (plStack_38 == (long *)0x0) {
    return;
  }
LAB_10a880ce8:
  plVar1 = plVar6 + 1;
  do {
    lVar8 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
  return;
}



/* Entry: 10a880d50; end: 10a880d7b;  */

void FUN_10a880d50(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a880d7c; end: 10a880fef;  */

void FUN_10a880d7c(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    func_0x00010a87f948(param_1 + 2);
    __ZdlPv(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 10a880ff0; end: 10a881007;  */

void FUN_10a880ff0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a881008; end: 10a8813e7;  */

undefined *** FUN_10a881008(undefined8 *param_1,undefined **param_2,undefined **param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  code **ppcStack_1b8;
  undefined *puStack_1b0;
  undefined ***pppuStack_1a8;
  undefined *puStack_198;
  undefined ***pppuStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  long lStack_148;
  undefined **ppuStack_f8;
  undefined ***pppuStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  long lStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar13 = (undefined ***)*param_2;
  pppuVar5 = (undefined ***)0x78;
  __Znwm();
  *pppuVar5 = (undefined **)FUN_10a8b3264;
  pppuVar5[1] = (undefined **)FUN_10a8b35cc;
  pppuVar5[0xc] = param_2;
  pppuVar5[0xd] = (undefined **)pppuVar13;
  func_0x0001092ba17c(pppuVar5 + 2);
  ppuVar9 = pppuVar5[7];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar10 = ppuVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar4) {
        *ppuVar10 = *ppuVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = ppuVar9;
  pppuVar5[10] = (undefined **)0x0;
  *(undefined1 *)(pppuVar5 + 0xe) = 0;
  pppuVar6 = pppuVar5 + 10;
  pppuVar7 = pppuVar5;
  FUN_10a057268();
  if (((ulong)pppuVar6 & 1) != 0) goto LAB_10a8812fc;
  pppuVar5[9] = pppuVar5[10];
  iVar2 = *(int *)(pppuVar5[0xc] + 1);
  FUN_109d1a80c();
  param_3 = pppuVar6[0x12];
  if (iVar2 < 0x3d) {
    iVar2 = 0x3c;
  }
  param_2 = (undefined **)(ulong)(iVar2 - 0x1e);
  __ZNSt3__16chrono12steady_clock3nowEv();
  pppuVar7 = pppuVar6 + (long)param_2 * 125000000;
  FUN_109d16728(pppuVar5 + 0xb,pppuVar5 + 9);
  pppuVar5[10] = pppuVar5[0xb];
  ppuVar9 = pppuVar5[0xb] + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
    if (bVar4) {
      *ppuVar9 = *ppuVar9 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)pppuVar5[10][2] >> 1 & 1) == 0) {
    *(undefined1 *)(pppuVar5 + 0xe) = 1;
    ppuVar12 = pppuVar5[10];
    ppuVar9 = ppuVar12 + 2;
    ppuVar10 = pppuVar5[3];
    do {
      puVar11 = *ppuVar9;
      if (puVar11 == (undefined *)0x0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar4) {
          *ppuVar9 = (undefined *)0x1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          ppuStack_78 = (undefined **)0x0;
          pppuVar6 = (undefined ***)(ppuVar12 + 3);
          pppuVar7 = &ppuStack_78;
          pppuStack_70 = pppuVar5;
          ppuStack_68 = ppuVar10;
          func_0x000109d1b588();
          ppuVar12[2] = (undefined *)0x0;
          goto LAB_10a8812fc;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)puVar11 >> 1 & 1) == 0);
  }
  ppuVar9 = pppuVar5[10];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar10 = ppuVar9 + 1;
    do {
      puVar11 = *ppuVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar4) {
        *ppuVar10 = puVar11 + -4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((ulong)puVar11 & 0x1fffffffc) == 4) {
      do {
        puVar11 = *ppuVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 + -1 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 8))();
      }
    }
  }
  ppuVar9 = pppuVar5[0xb];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar10 = ppuVar9 + 1;
    do {
      puVar11 = *ppuVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
      if (bVar4) {
        *ppuVar10 = puVar11 + -4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((ulong)puVar11 & 0x1fffffffc) == 4) {
      do {
        puVar11 = *ppuVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = puVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar11 + -1 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 8))();
      }
    }
  }
  param_2 = (undefined **)pppuVar5[9][2];
  if (((uint)param_2 >> 1 & 1) == 0) {
    ppuVar9 = pppuVar5[0xd];
    puStack_60 = ppuVar9[4];
    ppuStack_68 = (undefined **)ppuVar9[3];
    if (ppuVar9[4] != (undefined *)0x0) {
      plVar1 = (long *)(ppuVar9[4] + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppuVar9 = pppuVar5[0xd];
    }
    pppuVar13 = &ppuStack_78;
    ppuStack_78 = (undefined **)FUN_10a8813e8;
    pppuStack_70 = (undefined ***)&PTR_DAT_110c241b0;
    pppuVar7 = &ppuStack_78;
    FUN_10a860860(ppuVar9);
    (*(code *)*pppuStack_70)(&pppuStack_70);
  }
  else {
    func_0x0001092ba100(pppuVar5 + 2);
  }
  ppuVar9 = pppuVar5[9];
  if (ppuVar9 != (undefined **)0x0) {
    pppuVar13 = (undefined ***)(ppuVar9 + 1);
    do {
      ppuVar10 = *pppuVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
      if (bVar4) {
        *pppuVar13 = (undefined **)((long)ppuVar10 + -4);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((ulong)ppuVar10 & 0x1fffffffc) == 4) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      do {
        ppuVar10 = *pppuVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar4) {
          *pppuVar13 = (undefined **)((long)ppuVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((undefined **)((long)ppuVar10 + -1) == (undefined **)0x0) {
        (**(code **)(*ppuVar9 + 8))(ppuVar9);
      }
    }
  }
  if (((uint)param_2 >> 1 & 1) == 0) {
    func_0x0001092ba100(pppuVar5 + 2);
  }
  while( true ) {
    func_0x000109d1a1d0(pppuVar5 + 2);
    pppuVar6 = pppuVar5;
    __ZdlPv();
LAB_10a8812fc:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return pppuVar6;
    }
    ___stack_chk_fail();
    if ((int)pppuVar7 == 0) break;
    (*(code *)*pppuStack_70)(pppuVar13 + 1);
    param_2 = pppuVar5[9];
    if (param_2 != (undefined **)0x0) {
      pppuVar13 = (undefined ***)(param_2 + 1);
      do {
        ppuVar9 = *pppuVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar4) {
          *pppuVar13 = (undefined **)((long)ppuVar9 + -4);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((ulong)ppuVar9 & 0x1fffffffc) == 4) {
        (**(code **)(*param_2 + 0x10))(param_2);
        do {
          ppuVar9 = *pppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
          if (bVar4) {
            *pppuVar13 = (undefined **)((long)ppuVar9 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((undefined **)((long)ppuVar9 + -1) == (undefined **)0x0) {
          (**(code **)(*param_2 + 8))(param_2);
        }
      }
    }
    ___cxa_begin_catch(pppuVar6);
    func_0x000109d1a178(pppuVar5 + 2);
    ___cxa_end_catch();
  }
  pppuVar13 = pppuVar6;
  __Unwind_Resume();
  pppuStack_a0 = pppuVar6;
  pppuStack_98 = pppuVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  pcStack_88 = FUN_10a8813e8;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f8 = *pppuVar13;
  pppuVar5 = (undefined ***)pppuVar13[1];
  *pppuVar13 = (undefined **)0x0;
  pppuVar13[1] = (undefined **)0x0;
  *(undefined1 *)(ppuStack_f8 + 0x3f) = 0;
  ppuStack_d0 = pppuVar7[3];
  ppuStack_d8 = pppuVar7[2];
  if (pppuVar7[3] != (undefined **)0x0) {
    ppuVar9 = pppuVar7[3] + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar4) {
        *ppuVar9 = *ppuVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_e8 = FUN_10a8814fc;
  ppuStack_e0 = &PTR_DAT_110c24198;
  ppcVar8 = &pcStack_e8;
  pppuStack_f0 = pppuVar5;
  FUN_10a869e80();
  pppuVar13 = &ppuStack_e0;
  (*(code *)*ppuStack_e0)();
  if (pppuVar5 != (undefined ***)0x0) {
    pppuVar6 = pppuVar5 + 1;
    do {
      ppuVar9 = *pppuVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
      if (bVar4) {
        *pppuVar6 = (undefined **)((long)ppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuVar5)[2])(pppuVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar13 = pppuVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a5ca2e0(&ppuStack_f8);
    __Unwind_Resume();
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar6 = (undefined ***)param_3[3];
    pppuVar5 = pppuVar6;
    if ((pppuVar6 != (undefined ***)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), pppuVar5 = pppuVar6, param_2 = param_3,
       pppuStack_190 = pppuVar6, pppuVar6 != (undefined ***)0x0)) {
      puVar11 = param_3[2];
      puStack_198 = puVar11;
      if (puVar11 != (undefined *)0x0) {
        if (*(char *)((long)pppuVar13 + 0x17) < '\0') {
          func_0x000107c3192c(&pppuStack_1d0,*pppuVar13,pppuVar13[1]);
          puStack_1b0 = param_3[2];
        }
        else {
          ppuStack_1c8 = pppuVar13[1];
          pppuStack_1d0 = (undefined ***)*pppuVar13;
          ppuStack_1c0 = pppuVar13[2];
          puStack_1b0 = puVar11;
        }
        pppuStack_1a8 = (undefined ***)param_3[3];
        if (pppuStack_1a8 != (undefined ***)0x0) {
          plVar1 = (long *)((long)pppuStack_1a8 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pcStack_188 = FUN_10a881734;
        ppuStack_180 = &PTR_FUN_110c24180;
        param_3 = (undefined **)0x30;
        ppcStack_1b8 = ppcVar8;
        __Znwm();
        if ((long)ppuStack_1c0 < 0) {
          func_0x000107c3192c(param_3,pppuStack_1d0,ppuStack_1c8);
        }
        else {
          param_3[1] = (undefined *)ppuStack_1c8;
          *param_3 = (undefined *)pppuStack_1d0;
          param_3[2] = (undefined *)ppuStack_1c0;
        }
        param_3[3] = (undefined *)ppcStack_1b8;
        param_3[5] = (undefined *)pppuStack_1a8;
        param_3[4] = puStack_1b0;
        puStack_1b0 = (undefined *)0x0;
        pppuStack_1a8 = (undefined ***)0x0;
        ppuStack_178 = param_3;
        FUN_10a860860(puVar11,&pcStack_188);
        (*(code *)*ppuStack_180)(&ppuStack_180);
        pppuVar5 = pppuStack_1a8;
        if (pppuStack_1a8 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if ((long)ppuStack_1c0 < 0) {
          pppuVar5 = pppuStack_1d0;
          __ZdlPv();
        }
      }
      pppuVar13 = pppuVar6 + 1;
      do {
        ppuVar9 = *pppuVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
        if (bVar4) {
          *pppuVar13 = (undefined **)((long)ppuVar9 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      param_2 = param_3;
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuVar6)[2])(pppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar5 = pppuVar6;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
      ___stack_chk_fail();
      __ZdlPv(param_2);
      FUN_10a8816f8(&pppuStack_1d0);
      FUN_10a5ca2e0(&puStack_198);
      __Unwind_Resume();
      if (pppuVar5[5] != (undefined **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (*(char *)((long)pppuVar5 + 0x17) < '\0') {
        __ZdlPv(*pppuVar5);
      }
      return pppuVar5;
    }
    return pppuVar5;
  }
  return pppuVar13;
}



/* Entry: 10a8813e8; end: 10a8814fb;  */

undefined *** FUN_10a8813e8(long *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  code **ppcVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined8 *unaff_x21;
  undefined ***pppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  code **ppcStack_138;
  long lStack_130;
  undefined ***pppuStack_128;
  long lStack_118;
  undefined ***pppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 *puStack_f8;
  long lStack_c8;
  long lStack_78;
  undefined ***pppuStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_78 = *param_1;
  pppuVar8 = (undefined ***)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(lStack_78 + 0x1f8) = 0;
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  uStack_58 = *(undefined8 *)(param_2 + 0x10);
  if (*(long *)(param_2 + 0x18) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x18) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcStack_68 = FUN_10a8814fc;
  ppuStack_60 = &PTR_DAT_110c24198;
  ppcVar6 = &pcStack_68;
  pppuStack_70 = pppuVar8;
  FUN_10a869e80();
  pppuVar4 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar5 = pppuVar8 + 1;
    do {
      ppuVar7 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar7 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuVar8)[2])(pppuVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  FUN_10a5ca2e0(&lStack_78);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = (undefined ***)param_3[3];
  pppuVar8 = pppuVar5;
  if (pppuVar5 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuVar8 = pppuVar5;
    unaff_x21 = param_3;
    pppuStack_110 = pppuVar5;
    if (pppuVar5 != (undefined ***)0x0) {
      lVar9 = param_3[2];
      lStack_118 = lVar9;
      if (lVar9 != 0) {
        if (*(char *)((long)pppuVar4 + 0x17) < '\0') {
          func_0x000107c3192c(&pppuStack_150,*pppuVar4,pppuVar4[1]);
          lStack_130 = param_3[2];
        }
        else {
          ppuStack_148 = pppuVar4[1];
          pppuStack_150 = (undefined ***)*pppuVar4;
          ppuStack_140 = pppuVar4[2];
          lStack_130 = lVar9;
        }
        pppuStack_128 = (undefined ***)param_3[3];
        if (pppuStack_128 != (undefined ***)0x0) {
          plVar1 = (long *)((long)pppuStack_128 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_108 = FUN_10a881734;
        ppuStack_100 = &PTR_FUN_110c24180;
        param_3 = (undefined8 *)0x30;
        ppcStack_138 = ppcVar6;
        __Znwm();
        if ((long)ppuStack_140 < 0) {
          func_0x000107c3192c(param_3,pppuStack_150,ppuStack_148);
        }
        else {
          param_3[1] = ppuStack_148;
          *param_3 = pppuStack_150;
          param_3[2] = ppuStack_140;
        }
        param_3[3] = ppcStack_138;
        param_3[5] = pppuStack_128;
        param_3[4] = lStack_130;
        lStack_130 = 0;
        pppuStack_128 = (undefined ***)0x0;
        puStack_f8 = param_3;
        FUN_10a860860(lVar9,&pcStack_108);
        (*(code *)*ppuStack_100)(&ppuStack_100);
        pppuVar8 = pppuStack_128;
        if (pppuStack_128 != (undefined ***)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if ((long)ppuStack_140 < 0) {
          pppuVar8 = pppuStack_150;
          __ZdlPv();
        }
      }
      pppuVar4 = pppuVar5 + 1;
      do {
        ppuVar7 = *pppuVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      unaff_x21 = param_3;
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuVar5)[2])(pppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar8 = pppuVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar8;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x21);
  FUN_10a8816f8(&pppuStack_150);
  FUN_10a5ca2e0(&lStack_118);
  __Unwind_Resume();
  if (pppuVar8[5] != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)pppuVar8 + 0x17) < '\0') {
    __ZdlPv(*pppuVar8);
  }
  return pppuVar8;
}



/* Entry: 10a8814fc; end: 10a8816f7;  */

long * FUN_10a8814fc(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x21;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)param_3[3];
  plVar5 = plVar4;
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar5 = plVar4;
    unaff_x21 = param_3;
    plStack_90 = plVar4;
    if (plVar4 != (long *)0x0) {
      lVar6 = param_3[2];
      lStack_98 = lVar6;
      if (lVar6 != 0) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          func_0x000107c3192c(&plStack_d0,*param_1,param_1[1]);
          lStack_b0 = param_3[2];
        }
        else {
          lStack_c8 = param_1[1];
          plStack_d0 = (long *)*param_1;
          lStack_c0 = param_1[2];
          lStack_b0 = lVar6;
        }
        plStack_a8 = (long *)param_3[3];
        if (plStack_a8 != (long *)0x0) {
          plVar5 = (long *)((long)plStack_a8 + 0x10);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = *plVar5 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pcStack_88 = FUN_10a881734;
        ppuStack_80 = &PTR_FUN_110c24180;
        param_3 = (long *)0x30;
        lStack_b8 = param_2;
        __Znwm();
        if (lStack_c0 < 0) {
          func_0x000107c3192c(param_3,plStack_d0,lStack_c8);
        }
        else {
          param_3[1] = lStack_c8;
          *param_3 = (long)plStack_d0;
          param_3[2] = lStack_c0;
        }
        param_3[3] = lStack_b8;
        param_3[5] = (long)plStack_a8;
        param_3[4] = lStack_b0;
        lStack_b0 = 0;
        plStack_a8 = (long *)0x0;
        plStack_78 = param_3;
        FUN_10a860860(lVar6,&pcStack_88);
        (*(code *)*ppuStack_80)(&ppuStack_80);
        plVar5 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (lStack_c0 < 0) {
          plVar5 = plStack_d0;
          __ZdlPv();
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
      unaff_x21 = param_3;
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar5 = plVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x21);
  FUN_10a8816f8(&plStack_d0);
  FUN_10a5ca2e0(&lStack_98);
  __Unwind_Resume();
  if (plVar5[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)plVar5 + 0x17) < '\0') {
    __ZdlPv(*plVar5);
  }
  return plVar5;
}



/* Entry: 10a8816f8; end: 10a881733;  */

undefined8 * FUN_10a8816f8(undefined8 *param_1)

{
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a881734; end: 10a881843;  */

void FUN_10a881734(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_2 + 0x10);
  lVar7 = *param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(long *)(lVar7 + 0x368) != 0) && (**(int **)(lVar7 + 0x1e8) != 4)) {
    func_0x00010ae02ef0(0,puVar8[3]);
    ppuVar5 = &PTR_PTR_113303118;
    FUN_10ae079a0();
    func_0x00010ae02f00();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113303118);
    puVar6 = puVar8;
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      puVar6 = (undefined8 *)*puVar8;
    }
    (**(code **)(**(long **)(lVar7 + 0x368) + 0x98))(*(long **)(lVar7 + 0x368),puVar6);
    FUN_10a87358c(lVar7,*(undefined4 *)(puVar8 + 3));
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 10a881844; end: 10a88188f;  */

void FUN_10a881844(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (puVar1[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a881890; end: 10a8818ff;  */

void FUN_10a881890(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a881900; end: 10a881997;  */

long FUN_10a881900(long param_1)

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



/* Entry: 10a881998; end: 10a8819af;  */

void FUN_10a881998(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8819b0; end: 10a881a5f;  */

void FUN_10a8819b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000109382360(param_1,0,0,0,2);
  lVar2 = param_2[1];
  for (lVar1 = *param_2; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    FUN_10a881a60(auStack_40,lVar1);
    FUN_10a0a4bec(param_1,auStack_40);
    func_0x000109380ffc(auStack_38,auStack_40[0]);
  }
  return;
}



/* Entry: 10a881a60; end: 10a881caf;  */

void FUN_10a881a60(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  char cStack_51;
  undefined1 uStack_50;
  long lStack_48;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  lStack_48 = 0;
  uStack_50 = 3;
  lVar3 = *param_2 + 0x18;
  func_0x00010938229c();
  cStack_51 = '\x06';
  uStack_68 = 0x72657375;
  uStack_64 = 0x6449;
  uStack_62 = 0;
  puVar2 = param_1;
  lStack_48 = lVar3;
  func_0x0001095b7584(param_1,&uStack_68);
  uStack_50 = *puVar2;
  *puVar2 = 3;
  lVar3 = *(long *)(puVar2 + 8);
  *(long *)(puVar2 + 8) = lStack_48;
  lStack_48 = lVar3;
  if (cStack_51 < '\0') {
    __ZdlPv(CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT24(uStack_64,uStack_68))));
  }
  func_0x000109380ffc(&lStack_48,uStack_50);
  lStack_70 = 0;
  uStack_78 = 3;
  lVar3 = *param_2 + 0x48;
  func_0x00010938229c();
  cStack_51 = '\v';
  uStack_60 = 0x6d61;
  uStack_5e = 0x65;
  uStack_68 = 0x70736964;
  uStack_64 = 0x616c;
  uStack_62 = 0x79;
  uStack_61 = 0x4e;
  uStack_5d = 0;
  puVar2 = param_1;
  lStack_70 = lVar3;
  func_0x0001095b7584(param_1,&uStack_68);
  uStack_78 = *puVar2;
  *puVar2 = 3;
  lVar3 = *(long *)(puVar2 + 8);
  *(long *)(puVar2 + 8) = lStack_70;
  lStack_70 = lVar3;
  if (cStack_51 < '\0') {
    __ZdlPv(CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT24(uStack_64,uStack_68))));
  }
  func_0x000109380ffc(&lStack_70,uStack_78);
  lStack_80 = 0;
  lVar3 = *param_2 + 0x68;
  func_0x00010938229c();
  cStack_51 = '\t';
  uStack_68 = 0x6d746962;
  uStack_64 = 0x6a6f;
  uStack_62 = 0x69;
  uStack_61 = 0x49;
  uStack_60 = 100;
  lStack_80 = lVar3;
  func_0x0001095b7584(param_1,&uStack_68);
  uVar1 = *param_1;
  *param_1 = 3;
  lVar3 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = lStack_80;
  lStack_80 = lVar3;
  if (cStack_51 < '\0') {
    __ZdlPv(CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT24(uStack_64,uStack_68))));
  }
  func_0x000109380ffc(&lStack_80,uVar1);
  return;
}



/* Entry: 10a881cb0; end: 10a881d3b;  */

void FUN_10a881cb0(void)

{
  return;
}



/* Entry: 10a881d3c; end: 10a881e1f;  */

long FUN_10a881d3c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c2b05c();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
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
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000107c2b068(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
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



/* Entry: 10a881e20; end: 10a881e3b;  */

void FUN_10a881e20(void)

{
  return;
}



/* Entry: 10a881e3c; end: 10a881eab;  */

void FUN_10a881e3c(long *param_1)

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
        FUN_10a5ca2e0();
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



/* Entry: 10a881eac; end: 10a881eeb;  */

void FUN_10a881eac(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a881eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a881eec; end: 10a881f43;  */

void FUN_10a881eec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_10a8995d8(lVar1 + -0x10);
    FUN_10a5ca2e0(lVar1 + -0x20);
    lVar1 = lVar1 + -0x20;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a881f44; end: 10a881f57;  */

undefined1  [16] FUN_10a881f44(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f67f21b;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3b == 0) {
    lVar2 = (long)plVar1 << 5;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x20;
    FUN_10a8995d8(lVar3 + -0x10);
    FUN_10a5ca2e0(lVar3 + -0x20);
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a881f58; end: 10a881f8b;  */

undefined1  [16] FUN_10a881f58(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3b == 0) {
    lVar1 = (long)param_1 << 5;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10a8995d8(lVar2 + -0x10);
    FUN_10a5ca2e0(lVar2 + -0x20);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a881f8c; end: 10a881feb;  */

long * FUN_10a881f8c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x20;
    FUN_10a8995d8(lVar2 + -0x10);
    FUN_10a5ca2e0(lVar2 + -0x20);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a881fec; end: 10a881fff;  */

undefined8 * FUN_10a881fec(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar4 = (undefined8 *)&UNK_10f67f21b;
  FUN_109ffde64();
  uVar8 = param_2[1];
  uVar7 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (long *)puVar4[1];
  puVar4[1] = uVar8;
  *puVar4 = uVar7;
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
  return puVar4;
}



/* Entry: 10a882000; end: 10a882063;  */

undefined8 * FUN_10a882000(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a882064; end: 10a882077;  */

void FUN_10a882064(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&UNK_10f67f21b;
  FUN_109ffde64();
  if (plVar1 < (long *)0x555555555555556) {
    __Znwm((long)plVar1 * 0x30);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar3 = plVar1[1];
    lVar2 = lVar4;
    if (lVar3 != lVar4) {
      do {
        lVar3 = lVar3 + -0x30;
        FUN_10a882124(lVar3);
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



/* Entry: 10a882078; end: 10a8820bb;  */

void FUN_10a882078(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 < (long *)0x555555555555556) {
    __Znwm((long)param_1 * 0x30);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10a882124(lVar2);
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



/* Entry: 10a8820bc; end: 10a882123;  */

void FUN_10a8820bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10a882124(lVar2);
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



/* Entry: 10a882124; end: 10a8821a7;  */

void FUN_10a882124(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a8821a8; end: 10a8821af;  */

void FUN_10a8821a8(void)

{
  return;
}



/* Entry: 10a8821b0; end: 10a88260b;  */

long * FUN_10a8821b0(long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x25;
  ulong uVar17;
  
  plVar10 = param_2;
  func_0x000107c2b05c(param_2,param_1);
  plVar16 = (long *)param_2[1];
  if (plVar16 != (long *)0x0) {
    uVar17 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar17) == 0) {
      unaff_x25 = (long *)(uVar17 & (ulong)plVar10);
    }
    else {
      unaff_x25 = plVar10;
      if (plVar16 <= plVar10) {
        uVar3 = 0;
        if (plVar16 != (long *)0x0) {
          uVar3 = (ulong)plVar10 / (ulong)plVar16;
        }
        unaff_x25 = (long *)((long)plVar10 - uVar3 * (long)plVar16);
      }
    }
    puVar7 = *(undefined8 **)(*param_2 + (long)unaff_x25 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar7; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        plVar8 = (long *)plVar15[1];
        if (plVar8 == plVar10) {
          plVar8 = param_2;
          func_0x000107c2b068(param_2,plVar15 + 2,param_1);
          if (((ulong)plVar8 & 1) != 0) goto LAB_10a882548;
        }
        else {
          if (((ulong)plVar16 & uVar17) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar17);
          }
          else if (plVar16 <= plVar8) {
            uVar3 = 0;
            if (plVar16 != (long *)0x0) {
              uVar3 = (ulong)plVar8 / (ulong)plVar16;
            }
            plVar8 = (long *)((long)plVar8 - uVar3 * (long)plVar16);
          }
          if (plVar8 != unaff_x25) break;
        }
      }
    }
  }
  plVar15 = (long *)0x48;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = (long)plVar10;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(plVar15 + 2,*param_1,param_1[1]);
  }
  else {
    lVar5 = *param_1;
    plVar15[3] = param_1[1];
    plVar15[2] = lVar5;
    plVar15[4] = param_1[2];
  }
  plVar15[8] = 0;
  plVar15[7] = 0;
  plVar15[6] = 0;
  plVar15[5] = 0;
  if ((plVar16 != (long *)0x0) &&
     ((float)(param_2[3] + 1) <= *(float *)(param_2 + 4) * (float)plVar16)) goto LAB_10a8824d4;
  uVar17 = 1;
  if ((long *)0x2 < plVar16) {
    uVar17 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
  }
  plVar8 = (long *)(uVar17 | (long)plVar16 << 1);
  plVar16 = (long *)(long)((float)(param_2[3] + 1) / *(float *)(param_2 + 4));
  if (plVar8 <= plVar16) {
    plVar8 = plVar16;
  }
  if ((long)plVar8 - 1U == 0) {
    plVar8 = (long *)0x2;
  }
  else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar16 = (long *)param_2[1];
  if (plVar16 < plVar8) {
LAB_10a88235c:
    if ((ulong)plVar8 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8825f4);
      (*pcVar4)();
    }
    lVar5 = (long)plVar8 << 3;
    __Znwm();
    lVar6 = *param_2;
    *param_2 = lVar5;
    if (lVar6 != 0) {
      __ZdlPv();
    }
    plVar16 = (long *)0x0;
    param_2[1] = (long)plVar8;
    do {
      *(undefined8 *)(*param_2 + (long)plVar16 * 8) = 0;
      plVar16 = (long *)((long)plVar16 + 1);
    } while (plVar8 != plVar16);
    plVar9 = (long *)param_2[2];
    plVar16 = plVar8;
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)plVar9[1];
      uVar17 = (long)plVar8 - 1;
      if (((ulong)plVar8 & uVar17) == 0) {
        plVar11 = (long *)((ulong)plVar11 & uVar17);
      }
      else if (plVar8 <= plVar11) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar11 / (ulong)plVar8;
        }
        plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar8);
      }
      *(long **)(*param_2 + (long)plVar11 * 8) = param_2 + 2;
      plVar12 = (long *)*plVar9;
      while (plVar12 != (long *)0x0) {
        plVar14 = (long *)plVar12[1];
        if (((ulong)plVar8 & uVar17) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar17);
        }
        else if (plVar8 <= plVar14) {
          uVar3 = 0;
          if (plVar8 != (long *)0x0) {
            uVar3 = (ulong)plVar14 / (ulong)plVar8;
          }
          plVar14 = (long *)((long)plVar14 - uVar3 * (long)plVar8);
        }
        plVar13 = plVar12;
        if (plVar14 != plVar11) {
          lVar5 = *param_2;
          if (*(long *)(lVar5 + (long)plVar14 * 8) == 0) {
            *(long **)(lVar5 + (long)plVar14 * 8) = plVar9;
            plVar11 = plVar14;
          }
          else {
            *plVar9 = *plVar12;
            *plVar12 = **(undefined8 **)(lVar5 + (long)plVar14 * 8);
            **(long **)(lVar5 + (long)plVar14 * 8) = (long)plVar12;
            plVar13 = plVar9;
          }
        }
        plVar9 = plVar13;
        plVar12 = (long *)*plVar13;
      }
    }
  }
  else if (plVar8 < plVar16) {
    plVar9 = (long *)(long)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar9) {
      plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
    }
    if (plVar8 <= plVar9) {
      plVar8 = plVar9;
    }
    if (plVar8 < plVar16) {
      if (plVar8 != (long *)0x0) goto LAB_10a88235c;
      lVar5 = *param_2;
      *param_2 = 0;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      param_2[1] = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = (long *)param_2[1];
    }
  }
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar16 - 1U & (ulong)plVar10);
  }
  else {
    unaff_x25 = plVar10;
    if (plVar16 <= plVar10) {
      uVar17 = 0;
      if (plVar16 != (long *)0x0) {
        uVar17 = (ulong)plVar10 / (ulong)plVar16;
      }
      unaff_x25 = (long *)((long)plVar10 - uVar17 * (long)plVar16);
    }
  }
LAB_10a8824d4:
  lVar5 = *param_2;
  plVar10 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = param_2 + 2;
    *plVar15 = *plVar10;
    *plVar10 = (long)plVar15;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar10;
    if (*plVar15 != 0) {
      plVar10 = *(long **)(*plVar15 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar10) {
        uVar17 = 0;
        if (plVar16 != (long *)0x0) {
          uVar17 = (ulong)plVar10 / (ulong)plVar16;
        }
        plVar10 = (long *)((long)plVar10 - uVar17 * (long)plVar16);
      }
      *(long **)(*param_2 + (long)plVar10 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar10;
    *plVar10 = (long)plVar15;
  }
  param_2[3] = param_2[3] + 1;
LAB_10a882548:
  lVar6 = param_3[1];
  lVar5 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  plVar10 = (long *)plVar15[6];
  plVar15[6] = lVar6;
  plVar15[5] = lVar5;
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 1;
    do {
      lVar5 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  lVar6 = param_3[3];
  lVar5 = param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  plVar10 = (long *)plVar15[8];
  plVar15[8] = lVar6;
  plVar15[7] = lVar5;
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 1;
    do {
      lVar5 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  return plVar15 + 7;
}



/* Entry: 10a88260c; end: 10a882697;  */

void FUN_10a88260c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a882654(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a882698; end: 10a8826bf;  */

undefined1  [16] FUN_10a882698(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  FUN_109ffde64(&UNK_10f67f21b);
  plVar1 = (long *)&UNK_10f67f21b;
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
    FUN_10a297544();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a8826c0; end: 10a88273f;  */

undefined1  [16] FUN_10a8826c0(long *param_1,undefined8 param_2)

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
    FUN_10a297544();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a882740; end: 10a882767;  */

long * FUN_10a882740(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  FUN_109ffde64(&UNK_10f67f21b);
  plVar2 = (long *)&UNK_10f67f21b;
  FUN_109ffde64();
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
      FUN_10a8827f8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8827dc);
      (*pcVar1)();
    }
    lVar3 = param_2 * 8;
    __Znwm();
    *plVar2 = lVar3;
    plVar2[2] = lVar3 + param_2 * 8;
    _bzero();
    plVar2[1] = lVar3 + param_2 * 8;
  }
  return plVar2;
}



/* Entry: 10a882768; end: 10a8827f7;  */

long * FUN_10a882768(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
      FUN_10a8827f8();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8827dc);
      (*pcVar1)();
    }
    lVar2 = param_2 * 8;
    __Znwm();
    *param_1 = lVar2;
    param_1[2] = lVar2 + param_2 * 8;
    _bzero();
    param_1[1] = lVar2 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10a8827f8; end: 10a88281f;  */

void FUN_10a8827f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_109ffde64(&UNK_10f67f21b);
  puVar5 = (ulong *)&UNK_10f67f21b;
  FUN_109ffde64();
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3c != 0) {
      func_0x00010a8826ac();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8828b0);
      (*pcVar4)();
    }
    puVar6 = param_2;
    FUN_10a8826c0();
    *puVar5 = (ulong)param_4;
    puVar5[1] = (ulong)param_4;
    puVar5[2] = (ulong)(param_4 + (long)puVar6 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar7 = param_2[1];
      uVar8 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar8;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_4 = param_4 + 2;
    }
    puVar5[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 10a882820; end: 10a8828c3;  */

void FUN_10a882820(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3c != 0) {
      func_0x00010a8826ac();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8828b0);
      (*pcVar4)();
    }
    puVar5 = param_2;
    FUN_10a8826c0();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar5 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_4 = param_4 + 2;
    }
    param_1[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 10a8828c4; end: 10a882967;  */

void FUN_10a8828c4(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3c != 0) {
      FUN_10a882968();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a882954);
      (*pcVar4)();
    }
    puVar5 = param_2;
    FUN_10a88297c();
    *param_1 = (ulong)param_4;
    param_1[1] = (ulong)param_4;
    param_1[2] = (ulong)(param_4 + (long)puVar5 * 2);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar6 = param_2[1];
      uVar7 = *param_2;
      param_4[1] = param_2[1];
      *param_4 = uVar7;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_4 = param_4 + 2;
    }
    param_1[1] = (ulong)param_4;
  }
  return;
}



/* Entry: 10a882968; end: 10a88297b;  */

void FUN_10a882968(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&UNK_10f67f21b;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    __Znwm((long)plVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010a8835b0();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10a88297c; end: 10a882b03;  */

void FUN_10a88297c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a8835b0();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a882b04; end: 10a882f83;  */

/* WARNING: Possible PIC construction at 0x00010a882b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a882bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a882bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a882c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a882c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a882c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a882d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a882d74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a882d30) */
/* WARNING: Removing unreachable block (ram,0x00010a882d38) */
/* WARNING: Removing unreachable block (ram,0x00010a882d3c) */
/* WARNING: Removing unreachable block (ram,0x00010a882d44) */
/* WARNING: Removing unreachable block (ram,0x00010a882d4c) */
/* WARNING: Removing unreachable block (ram,0x00010a882d50) */
/* WARNING: Removing unreachable block (ram,0x00010a882d68) */
/* WARNING: Removing unreachable block (ram,0x00010a882c8c) */
/* WARNING: Removing unreachable block (ram,0x00010a882c98) */
/* WARNING: Removing unreachable block (ram,0x00010a882cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a882cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a882cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a882cc8) */
/* WARNING: Removing unreachable block (ram,0x00010a882ccc) */
/* WARNING: Removing unreachable block (ram,0x00010a882ce4) */
/* WARNING: Removing unreachable block (ram,0x00010a882cf0) */
/* WARNING: Removing unreachable block (ram,0x00010a882cf4) */
/* WARNING: Removing unreachable block (ram,0x00010a882cfc) */
/* WARNING: Removing unreachable block (ram,0x00010a882d04) */
/* WARNING: Removing unreachable block (ram,0x00010a882d08) */
/* WARNING: Removing unreachable block (ram,0x00010a882d20) */
/* WARNING: Removing unreachable block (ram,0x00010a882c58) */
/* WARNING: Removing unreachable block (ram,0x00010a882c64) */
/* WARNING: Removing unreachable block (ram,0x00010a882c24) */
/* WARNING: Removing unreachable block (ram,0x00010a882c30) */
/* WARNING: Removing unreachable block (ram,0x00010a882bf0) */
/* WARNING: Removing unreachable block (ram,0x00010a882bfc) */
/* WARNING: Removing unreachable block (ram,0x00010a882bbc) */
/* WARNING: Removing unreachable block (ram,0x00010a882bc8) */
/* WARNING: Removing unreachable block (ram,0x00010a882b88) */
/* WARNING: Removing unreachable block (ram,0x00010a882b94) */
/* WARNING: Removing unreachable block (ram,0x00010a882d78) */
/* WARNING: Removing unreachable block (ram,0x00010a882d80) */
/* WARNING: Removing unreachable block (ram,0x00010a882d84) */
/* WARNING: Removing unreachable block (ram,0x00010a882d8c) */
/* WARNING: Removing unreachable block (ram,0x00010a882d94) */
/* WARNING: Removing unreachable block (ram,0x00010a882d98) */
/* WARNING: Removing unreachable block (ram,0x00010a882db0) */
/* WARNING: Removing unreachable block (ram,0x00010a882dbc) */
/* WARNING: Removing unreachable block (ram,0x00010a882dc0) */
/* WARNING: Removing unreachable block (ram,0x00010a882dc8) */
/* WARNING: Removing unreachable block (ram,0x00010a882dd0) */
/* WARNING: Removing unreachable block (ram,0x00010a882dd4) */
/* WARNING: Removing unreachable block (ram,0x00010a882dec) */
/* WARNING: Removing unreachable block (ram,0x00010a882df8) */
/* WARNING: Removing unreachable block (ram,0x00010a882dfc) */
/* WARNING: Removing unreachable block (ram,0x00010a882e04) */
/* WARNING: Removing unreachable block (ram,0x00010a882e0c) */
/* WARNING: Removing unreachable block (ram,0x00010a882e10) */
/* WARNING: Removing unreachable block (ram,0x00010a882e28) */
/* WARNING: Removing unreachable block (ram,0x00010a882e34) */
/* WARNING: Removing unreachable block (ram,0x00010a882e38) */
/* WARNING: Removing unreachable block (ram,0x00010a882e40) */
/* WARNING: Removing unreachable block (ram,0x00010a882e48) */
/* WARNING: Removing unreachable block (ram,0x00010a882e4c) */
/* WARNING: Removing unreachable block (ram,0x00010a882e64) */
/* WARNING: Removing unreachable block (ram,0x00010a882e70) */
/* WARNING: Removing unreachable block (ram,0x00010a882e74) */
/* WARNING: Removing unreachable block (ram,0x00010a882e7c) */
/* WARNING: Removing unreachable block (ram,0x00010a882e84) */
/* WARNING: Removing unreachable block (ram,0x00010a882e88) */
/* WARNING: Removing unreachable block (ram,0x00010a882ea0) */
/* WARNING: Removing unreachable block (ram,0x00010a882eac) */
/* WARNING: Removing unreachable block (ram,0x00010a882eb0) */
/* WARNING: Removing unreachable block (ram,0x00010a882eb8) */
/* WARNING: Removing unreachable block (ram,0x00010a882ec0) */
/* WARNING: Removing unreachable block (ram,0x00010a882ec4) */
/* WARNING: Removing unreachable block (ram,0x00010a882edc) */
/* WARNING: Removing unreachable block (ram,0x00010a882ee8) */
/* WARNING: Removing unreachable block (ram,0x00010a882eec) */
/* WARNING: Removing unreachable block (ram,0x00010a882ef4) */
/* WARNING: Removing unreachable block (ram,0x00010a882efc) */
/* WARNING: Removing unreachable block (ram,0x00010a882f00) */
/* WARNING: Removing unreachable block (ram,0x00010a882f18) */
/* WARNING: Removing unreachable block (ram,0x00010a882f40) */
/* WARNING: Removing unreachable block (ram,0x00010a882f80) */
/* WARNING: Removing unreachable block (ram,0x00010a882fd8) */
/* WARNING: Removing unreachable block (ram,0x00010a882fc4) */
/* WARNING: Removing unreachable block (ram,0x00010a882fdc) */
/* WARNING: Removing unreachable block (ram,0x00010a883044) */
/* WARNING: Removing unreachable block (ram,0x00010a883004) */
/* WARNING: Removing unreachable block (ram,0x00010a883048) */
/* WARNING: Removing unreachable block (ram,0x00010a883030) */
/* WARNING: Removing unreachable block (ram,0x00010a882f64) */

undefined8 * FUN_10a882b04(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puStack_548;
  undefined8 auStack_540 [8];
  byte bStack_500;
  long lStack_4f8;
  undefined8 *puStack_4f0;
  undefined8 *puStack_4e8;
  undefined8 **ppuStack_4e0;
  undefined8 uStack_4d8;
  undefined8 *puStack_4c8;
  undefined8 auStack_4c0 [8];
  byte bStack_480;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 **ppuStack_460;
  undefined8 uStack_458;
  undefined8 *puStack_448;
  undefined8 auStack_440 [8];
  byte bStack_400;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 **ppuStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3c8;
  undefined8 auStack_3c0 [8];
  byte bStack_380;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined1 **ppuStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_348;
  undefined8 auStack_340 [8];
  byte bStack_300;
  long lStack_2f8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  FUN_10a882f84(param_1 + 0xb0,&uStack_90);
  if (3 < (uStack_50 & 0xff)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a882f80);
    (*pcVar4)();
  }
  (*(code *)(&PTR_FUN_110b9a040)[uStack_50 & 0xff])(&uStack_90);
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  puVar7 = (undefined8 *)(param_1 + 0xf8);
  uStack_2d8 = 0x10a882b88;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_300 = 3;
  puStack_348 = auStack_340;
  puStack_2e0 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    bStack_300 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_348,puVar7);
    bStack_300 = *(byte *)(param_1 + 0x138);
  }
  FUN_10a279ff4(puVar7,&uStack_e0);
  puVar8 = auStack_340;
  FUN_10a279ff4(&uStack_e0);
  if (3 < (ulong)bStack_300) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a883110);
    (*pcVar4)();
  }
  puVar5 = auStack_340;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_300])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f8) {
    return puVar7;
  }
  ___stack_chk_fail();
  uStack_358 = 0x10a883114;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_380 = 3;
  puStack_3c8 = auStack_3c0;
  puStack_370 = &uStack_e0;
  puStack_368 = puVar7;
  ppuStack_360 = &puStack_2e0;
  if (*(char *)(puVar5 + 8) == '\0') {
    bStack_380 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_3c8,puVar5);
    bStack_380 = *(byte *)(puVar5 + 8);
  }
  FUN_10a279ff4(puVar5,puVar8);
  puVar7 = auStack_3c0;
  FUN_10a279ff4(puVar8);
  if (3 < (ulong)bStack_380) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8831d8);
    (*pcVar4)();
  }
  puVar6 = auStack_3c0;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_380])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_378) {
    return puVar5;
  }
  ___stack_chk_fail();
  uStack_3d8 = 0x10a8831dc;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_400 = 3;
  puStack_448 = auStack_440;
  puStack_3f0 = puVar8;
  puStack_3e8 = puVar5;
  ppuStack_3e0 = &ppuStack_360;
  if (*(char *)(puVar6 + 8) == '\0') {
    bStack_400 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_448,puVar6);
    bStack_400 = *(byte *)(puVar6 + 8);
  }
  FUN_10a279ff4(puVar6,puVar7);
  puVar8 = auStack_440;
  FUN_10a279ff4(puVar7);
  if (3 < (ulong)bStack_400) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8832a0);
    (*pcVar4)();
  }
  puVar5 = auStack_440;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_400])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return puVar6;
  }
  ___stack_chk_fail();
  uStack_458 = 0x10a8832a4;
  lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_480 = 3;
  puStack_4c8 = auStack_4c0;
  puStack_470 = puVar7;
  puStack_468 = puVar6;
  ppuStack_460 = &ppuStack_3e0;
  if (*(char *)(puVar5 + 8) == '\0') {
    bStack_480 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_4c8,puVar5);
    bStack_480 = *(byte *)(puVar5 + 8);
  }
  FUN_10a279ff4(puVar5,puVar8);
  puVar7 = auStack_4c0;
  FUN_10a279ff4(puVar8);
  if ((ulong)bStack_480 < 4) {
    puVar6 = auStack_4c0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_480])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_478) {
      return puVar5;
    }
    ___stack_chk_fail();
    uStack_4d8 = 0x10a88336c;
    lStack_4f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bStack_500 = 3;
    puStack_548 = auStack_540;
    puStack_4f0 = puVar8;
    puStack_4e8 = puVar5;
    ppuStack_4e0 = &ppuStack_460;
    if (*(char *)(puVar6 + 8) == '\0') {
      bStack_500 = 0;
    }
    else {
      FUN_10a05fae4(&puStack_548,puVar6);
      bStack_500 = *(byte *)(puVar6 + 8);
    }
    FUN_10a279ff4(puVar6,puVar7);
    puVar8 = auStack_540;
    FUN_10a279ff4(puVar7);
    if ((ulong)bStack_500 < 4) {
      puVar7 = auStack_540;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_500])();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4f8) {
        return puVar6;
      }
      ___stack_chk_fail();
      uVar12 = puVar8[1];
      uVar11 = *puVar8;
      *puVar8 = 0;
      puVar8[1] = 0;
      plVar10 = (long *)puVar7[1];
      puVar7[1] = uVar12;
      *puVar7 = uVar11;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
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
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a883430);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a883368);
  (*pcVar4)();
}



/* Entry: 10a882f84; end: 10a88391f;  */

undefined8 * FUN_10a882f84(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puStack_2f8;
  undefined8 auStack_2f0 [8];
  byte bStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 **ppuStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_278;
  undefined8 auStack_270 [8];
  byte bStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 **ppuStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_1f8;
  undefined8 auStack_1f0 [8];
  byte bStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_178;
  undefined8 auStack_170 [8];
  byte bStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 **ppuStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_f8;
  undefined8 auStack_f0 [8];
  byte bStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_78;
  undefined8 auStack_70 [8];
  byte bStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_30 = 3;
  puStack_78 = auStack_70;
  if (*(char *)(param_1 + 8) == '\0') {
    bStack_30 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_78,param_1);
    bStack_30 = *(byte *)(param_1 + 8);
  }
  FUN_10a279ff4(param_1,param_2);
  puVar7 = auStack_70;
  FUN_10a279ff4(param_2);
  if (3 < (ulong)bStack_30) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a883048);
    (*pcVar4)();
  }
  puVar5 = auStack_70;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_30])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  uStack_88 = 0x10a88304c;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_b0 = 3;
  puStack_f8 = auStack_f0;
  uStack_a0 = param_2;
  puStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  if (*(char *)(puVar5 + 8) == '\0') {
    bStack_b0 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_f8,puVar5);
    bStack_b0 = *(byte *)(puVar5 + 8);
  }
  FUN_10a279ff4(puVar5,puVar7);
  puVar8 = auStack_f0;
  FUN_10a279ff4(puVar7);
  if (3 < (ulong)bStack_b0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a883110);
    (*pcVar4)();
  }
  puVar6 = auStack_f0;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_b0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar5;
  }
  ___stack_chk_fail();
  uStack_108 = 0x10a883114;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_130 = 3;
  puStack_178 = auStack_170;
  puStack_120 = puVar7;
  puStack_118 = puVar5;
  ppuStack_110 = &puStack_90;
  if (*(char *)(puVar6 + 8) == '\0') {
    bStack_130 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_178,puVar6);
    bStack_130 = *(byte *)(puVar6 + 8);
  }
  FUN_10a279ff4(puVar6,puVar8);
  puVar7 = auStack_170;
  FUN_10a279ff4(puVar8);
  if (3 < (ulong)bStack_130) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8831d8);
    (*pcVar4)();
  }
  puVar5 = auStack_170;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_130])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return puVar6;
  }
  ___stack_chk_fail();
  uStack_188 = 0x10a8831dc;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bStack_1b0 = 3;
  puStack_1f8 = auStack_1f0;
  puStack_1a0 = puVar8;
  puStack_198 = puVar6;
  ppuStack_190 = &ppuStack_110;
  if (*(char *)(puVar5 + 8) == '\0') {
    bStack_1b0 = 0;
  }
  else {
    FUN_10a05fae4(&puStack_1f8,puVar5);
    bStack_1b0 = *(byte *)(puVar5 + 8);
  }
  FUN_10a279ff4(puVar5,puVar7);
  puVar8 = auStack_1f0;
  FUN_10a279ff4(puVar7);
  if ((ulong)bStack_1b0 < 4) {
    puVar6 = auStack_1f0;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_1b0])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return puVar5;
    }
    ___stack_chk_fail();
    uStack_208 = 0x10a8832a4;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bStack_230 = 3;
    puStack_278 = auStack_270;
    puStack_220 = puVar7;
    puStack_218 = puVar5;
    ppuStack_210 = &ppuStack_190;
    if (*(char *)(puVar6 + 8) == '\0') {
      bStack_230 = 0;
    }
    else {
      FUN_10a05fae4(&puStack_278,puVar6);
      bStack_230 = *(byte *)(puVar6 + 8);
    }
    FUN_10a279ff4(puVar6,puVar8);
    puVar7 = auStack_270;
    FUN_10a279ff4(puVar8);
    if (3 < (ulong)bStack_230) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a883368);
      (*pcVar4)();
    }
    puVar5 = auStack_270;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_230])();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
      return puVar6;
    }
    ___stack_chk_fail();
    uStack_288 = 0x10a88336c;
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    bStack_2b0 = 3;
    puStack_2f8 = auStack_2f0;
    puStack_2a0 = puVar8;
    puStack_298 = puVar6;
    ppuStack_290 = &ppuStack_210;
    if (*(char *)(puVar5 + 8) == '\0') {
      bStack_2b0 = 0;
    }
    else {
      FUN_10a05fae4(&puStack_2f8,puVar5);
      bStack_2b0 = *(byte *)(puVar5 + 8);
    }
    FUN_10a279ff4(puVar5,puVar7);
    puVar8 = auStack_2f0;
    FUN_10a279ff4(puVar7);
    if ((ulong)bStack_2b0 < 4) {
      puVar7 = auStack_2f0;
      (*(code *)(&PTR_FUN_110b9a040)[bStack_2b0])();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
        return puVar5;
      }
      ___stack_chk_fail();
      uVar12 = puVar8[1];
      uVar11 = *puVar8;
      *puVar8 = 0;
      puVar8[1] = 0;
      plVar10 = (long *)puVar7[1];
      puVar7[1] = uVar12;
      *puVar7 = uVar11;
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 1;
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
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a883430);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8832a0);
  (*pcVar4)();
}



/* Entry: 10a883920; end: 10a8839db;  */

void FUN_10a883920(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8839dc(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[3];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a8839dc; end: 10a883a43;  */

void FUN_10a8839dc(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a8839dc(plVar5,param_2);
  FUN_10a052e3c(param_4);
  iVar1 = *(int *)((long)plVar5 + 0x1c);
  *extraout_x8 = 3;
  *(double *)(extraout_x8 + 2) = (double)iVar1;
  plVar5 = plVar6 + 0x4b;
  lVar7 = plVar6[0x59];
  uVar8 = lVar7 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar5[lVar7 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar5;
  lVar12 = plVar6[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar6[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar9 >> 0x3c == 0) {
          lVar3 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar3 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar5 = lVar11;
          plVar6[0x4c] = lVar12 + uVar15 * 0x10;
          plVar6[0x4d] = lVar3 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar6[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar6[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a883a44; end: 10a883aff;  */

void FUN_10a883a44(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8839dc(param_2,param_3);
  FUN_10a052e3c(param_5);
  iVar2 = *(int *)((long)param_2 + 0x1c);
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)iVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a883b00; end: 10a883bc7;  */

void FUN_10a883b00(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8839dc(param_2,param_3);
  FUN_10a052e3c(param_5);
  if (((ulong)param_2[4] >> 0x20 & 1) == 0) {
    uVar5 = 1;
  }
  else {
    *(double *)(param_1 + 2) = (double)(int)param_2[4];
    uVar5 = 3;
  }
  *param_1 = uVar5;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a883bc8; end: 10a883d4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a883cb8) */
/* WARNING: Removing unreachable block (ram,0x00010a883cc0) */

void FUN_10a883bc8(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,long param_5)

{
  uint *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar5 == (long *)0x0) {
    puVar7 = &UNK_10f68f52e;
  }
  else {
    plVar6 = param_2;
    FUN_10a053854(param_2,plVar5);
    if ((plVar6 != (long *)0x0) && (___dynamic_cast(), plVar6 != (long *)0x0)) {
      FUN_10a1d5b5c(param_5);
      puVar1 = (uint *)&stack0xffffffffffffffb0;
      if (param_5 != 0) {
        puVar1 = param_4;
      }
      if (*puVar1 < 2) {
        uVar8 = 0;
      }
      else {
        func_0x000109898518(param_2);
        uVar8 = (ulong)param_2 & 0xffffffff | 0x100000000;
      }
      FUN_10a85d950(plVar6,uVar8);
      *param_1 = 0;
      plVar5 = plVar4 + 0x4b;
      lVar9 = plVar4[0x59];
      uVar8 = lVar9 - 1;
      plVar4[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar5[lVar9 + 2];
        if (plVar4[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar4[0x57] + -8);
        plVar4[0x57] = plVar4[0x57] + -8;
        if (plVar4[0x5a] == uVar8) {
          return;
        }
      }
      lVar9 = *plVar5;
      lVar13 = plVar4[0x4c];
      lVar11 = lVar13 - lVar9;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar8) {
        uVar16 = uVar8 - uVar15;
        lVar14 = plVar4[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar8 >> 0x3c == 0) {
            uVar10 = lVar14 - lVar9 >> 3;
            if (uVar10 <= uVar8) {
              uVar10 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar9)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar5;
            if (uVar10 >> 0x3c == 0) {
              lVar3 = uVar10 << 4;
              __Znwm();
              lVar13 = lVar3 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar9,lVar11);
              *plVar5 = lVar12;
              plVar4[0x4c] = lVar13 + uVar16 * 0x10;
              plVar4[0x4d] = lVar3 + uVar10 * 0x10;
              lStack_88 = lVar9;
              lStack_80 = lVar9;
              lStack_78 = lVar9;
              lStack_70 = lVar14;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar2)();
        }
        _bzero(lVar13,uVar16 * 0x10);
        plVar4[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar8 < uVar15) {
        lVar9 = lVar9 + uVar8 * 0x10;
        while (lVar13 != lVar9) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar4[0x4c] = lVar9;
      }
code_r0x00010988c138:
      plVar4[0x5a] = uVar8;
      return;
    }
    puVar7 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar7);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a883d14);
  (*pcVar2)();
}



/* Entry: 10a883d50; end: 10a8840f3;  */

void FUN_10a883d50(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  uint auStack_e0 [2];
  undefined8 *puStack_d8;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [3];
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a8840f4(param_5);
  auStack_e0[0] = 0;
  puVar1 = auStack_e0;
  if (param_5 != 0) {
    puVar1 = (uint *)param_4;
  }
  plVar11 = param_2;
  func_0x000109898518(param_2,puVar1);
  puVar1 = auStack_e0;
  if (1 < param_5) {
    puVar1 = (uint *)(param_4 + 0x10);
  }
  plVar13 = param_2;
  func_0x000109898518(param_2,puVar1);
  puVar1 = auStack_e0;
  if (2 < param_5) {
    puVar1 = (uint *)(param_4 + 0x20);
  }
  if (*puVar1 < 2) {
    uVar14 = 0;
  }
  else {
    plVar6 = param_2;
    func_0x000109898518(param_2);
    uVar14 = (ulong)plVar6 & 0xffffffff | 0x100000000;
  }
  if ((int)(uint)plVar11 < 1) {
    __ZNSt3__19to_stringEi(auStack_b8,1);
    FUN_109feb280(auStack_a0,&UNK_10f67dbf6,auStack_b8);
    FUN_10a012db0(auStack_88,auStack_a0,&UNK_10f55a4ea);
    __ZNSt3__19to_stringEi(&ppuStack_d0,0x40);
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
      ppuStack_d0 = &ppuStack_d0;
    }
    puVar7 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppuStack_d0,uStack_c8);
    plStack_68 = (long *)puVar7[1];
    plStack_70 = (long *)*puVar7;
    uStack_60 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_10a0029c0(&plStack_70);
  }
  else {
    if (0x40 < (uint)plVar11) {
      func_0x00010a889880(plVar11);
      ppuVar9 = &PTR_PTR_1133054d8;
      FUN_10ae079a0();
      func_0x00010a8898a8();
      FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133054d8);
      plVar11 = (long *)0x40;
    }
    uVar12 = (uint)plVar13;
    if ((int)uVar12 < 2) {
      puVar8 = &UNK_10f67dc16;
    }
    else {
      if ((uint)plVar11 <= uVar12) {
        if (0x40 < uVar12) {
          func_0x00010a889880(plVar13);
          ppuVar9 = &PTR_PTR_113305530;
          FUN_10ae079a0();
          func_0x00010a8898a8();
          FUN_10ae07cd4(ppuVar9,&PTR_PTR_113305530);
          plVar13 = (long *)0x40;
        }
        plVar6 = (long *)0x40;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_FUN_110c245a0;
        plVar6[5] = 0;
        plVar6[4] = 0;
        plVar6[7] = 0;
        plVar6[6] = 0;
        plStack_70 = plVar6 + 3;
        *plStack_70 = (long)&PTR_DAT_110c23eb0;
        *(uint *)(plVar6 + 6) = (uint)plVar11;
        *(int *)((long)plVar6 + 0x34) = (int)plVar13;
        plStack_68 = plVar6;
        FUN_10a85d950(plStack_70,uVar14);
        if ((3 < (int)auStack_e0[0]) && (puStack_d8 != (undefined8 *)0x0)) {
          (**(code **)*puStack_d8)();
        }
        FUN_10a88411c(param_1,param_2,&plStack_70);
        plVar11 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          plVar13 = plStack_68 + 1;
          do {
            lVar10 = *plVar13;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        func_0x00010988c170(plVar5 + 0x4b);
        return;
      }
      puVar8 = &UNK_10f67dc48;
    }
    FUN_10a00946c(puVar8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a884030);
  (*pcVar4)();
}



/* Entry: 10a8840f4; end: 10a88411b;  */

void FUN_10a8840f4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if (((uint)param_1 & 0xfffffffe) == 2) {
    return;
  }
  uVar5 = 3;
  uVar6 = 1;
  FUN_10a052ee0(3,1);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  ppuStack_48 = &PTR_DAT_110c23ef8;
  func_0x000109899de4(uVar5,uVar6,&uStack_40,&ppuStack_48,0,0);
  plVar4 = plStack_38;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a88411c; end: 10a8841ab;  */

void FUN_10a88411c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  ppuStack_38 = &PTR_DAT_110c23ef8;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
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



/* Entry: 10a8841ac; end: 10a884243;  */

void FUN_10a8841ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x3ff0000000000000;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a884244; end: 10a8842db;  */

void FUN_10a884244(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)param_2[0x59] < 8) {
    param_2[param_2[0x59] + 0x4e] = param_2[0x5a];
    param_2[0x59] = param_2[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(param_2 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  *(undefined8 *)(param_1 + 2) = 0x4050000000000000;
  plVar1 = param_2 + 0x4b;
  lVar4 = param_2[0x59];
  uVar5 = lVar4 - 1;
  param_2[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar4 + 2];
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(param_2[0x57] + -8);
    param_2[0x57] = param_2[0x57] + -8;
    if (param_2[0x5a] == uVar5) {
      return;
    }
  }
  lVar4 = *plVar1;
  lVar9 = param_2[0x4c];
  lVar7 = lVar9 - lVar4;
  uVar11 = lVar7 >> 4;
  if (uVar11 < uVar5) {
    uVar12 = uVar5 - uVar11;
    lVar10 = param_2[0x4d];
    if ((ulong)(lVar10 - lVar9 >> 4) < uVar12) {
      if (uVar5 >> 0x3c == 0) {
        uVar6 = lVar10 - lVar4 >> 3;
        if (uVar6 <= uVar5) {
          uVar6 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar10 - lVar4)) {
          uVar6 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar6 >> 0x3c == 0) {
          lVar3 = uVar6 << 4;
          __Znwm();
          lVar9 = lVar3 + lVar7;
          _bzero(lVar9,uVar12 * 0x10);
          lVar8 = lVar9 + uVar11 * -0x10;
          _memcpy(lVar8,lVar4,lVar7);
          *plVar1 = lVar8;
          param_2[0x4c] = lVar9 + uVar12 * 0x10;
          param_2[0x4d] = lVar3 + uVar6 * 0x10;
          lStack_88 = lVar4;
          lStack_80 = lVar4;
          lStack_78 = lVar4;
          lStack_70 = lVar10;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar9,uVar12 * 0x10);
    param_2[0x4c] = lVar9 + uVar12 * 0x10;
  }
  else if (uVar5 < uVar11) {
    lVar4 = lVar4 + uVar5 * 0x10;
    while (lVar9 != lVar4) {
      lVar9 = lVar9 + -0x10;
      func_0x00010988c204(lVar9);
    }
    param_2[0x4c] = lVar4;
  }
code_r0x00010988c138:
  param_2[0x5a] = uVar5;
  return;
}



/* Entry: 10a8842dc; end: 10a8843bb;  */

void FUN_10a8842dc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[7];
  plVar1 = (long *)plVar5[6];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x47)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x47);
    plVar1 = plVar5 + 6;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a8843bc; end: 10a884473;  */

void FUN_10a8843bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8844dc(param_1,param_2,FUN_10a878608,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a884474; end: 10a8844db;  */

void FUN_10a884474(undefined **param_1,undefined **param_2,undefined **param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined8 auStack_88 [2];
  char cStack_71;
  
  ppuVar2 = param_1;
  func_0x000109898688();
  if (ppuVar2 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar2;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_3 = &PTR_DAT_110c23f10;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar3 = (undefined4 *)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = param_2;
  FUN_10a88459c(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_88,param_2,param_6);
  plVar1 = (long *)((long)ppuVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(undefined ***)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*(code *)param_3)(plVar1,auStack_88);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  *puVar3 = 0;
  return;
}



/* Entry: 10a8844dc; end: 10a88459b;  */

void FUN_10a8844dc(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_68 [2];
  char cStack_51;
  
  lVar2 = param_2;
  FUN_10a88459c(param_2,param_5);
  FUN_10a0584c8(param_7);
  func_0x000109898570(auStack_68,param_2,param_6);
  plVar1 = (long *)(lVar2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a88459c; end: 10a884603;  */

void FUN_10a88459c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar4);
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar5 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  FUN_10a884474(plVar5,param_2);
  FUN_10a052e3c(param_4);
  uVar9 = plVar7[10];
  plVar1 = (long *)plVar7[9];
  if (-1 < (char)*(byte *)((long)plVar7 + 0x5f)) {
    uVar9 = (ulong)*(byte *)((long)plVar7 + 0x5f);
    plVar1 = plVar7 + 9;
  }
  (**(code **)(*plVar5 + 0x128))(extraout_x8 + 2,plVar5,plVar1,uVar9);
  *extraout_x8 = 6;
  plVar5 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar9 = lVar8 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar5[lVar8 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar5;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_88 = plVar5;
        if (uVar10 >> 0x3c == 0) {
          lVar3 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar3 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar5 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar3 + uVar10 * 0x10;
          lStack_a8 = lVar8;
          lStack_a0 = lVar8;
          lStack_98 = lVar8;
          lStack_90 = lVar14;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10a884604; end: 10a8846e3;  */

void FUN_10a884604(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar7 = plVar5[10];
  plVar1 = (long *)plVar5[9];
  if (-1 < (char)*(byte *)((long)plVar5 + 0x5f)) {
    uVar7 = (ulong)*(byte *)((long)plVar5 + 0x5f);
    plVar1 = plVar5 + 9;
  }
  (**(code **)(*param_2 + 0x128))(param_1 + 2,param_2,plVar1,uVar7);
  *param_1 = 6;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar7 = lVar6 - 1;
  plVar4[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar4[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar4[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar3 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar3 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar4[0x4c] = lVar11 + uVar14 * 0x10;
          plVar4[0x4d] = lVar3 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar4[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar7;
  return;
}



/* Entry: 10a8846e4; end: 10a88479b;  */

void FUN_10a8846e4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a8844dc(param_1,param_2,FUN_10a877ad8,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a88479c; end: 10a884853;  */

void FUN_10a88479c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[0x15];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a884854; end: 10a884913;  */

void FUN_10a884854(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a88459c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 0x15) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a884914; end: 10a88496b;  */

ulong FUN_10a884914(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10a88496c,FUN_10a884a24);
  }
  return param_1;
}



/* Entry: 10a88496c; end: 10a884a23;  */

void FUN_10a88496c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  uVar2 = *(undefined1 *)((long)param_2 + 0xab);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 2) = uVar2;
  plVar1 = plVar5 + 0x4b;
  lVar6 = plVar5[0x59];
  uVar7 = lVar6 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar1[lVar6 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar7) {
    uVar14 = uVar7 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar4 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar1 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a884a24; end: 10a884ae3;  */

void FUN_10a884a24(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a88459c(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)((long)plVar4 + 0xab) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a884ae4; end: 10a884bb7;  */

void FUN_10a884ae4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x1e] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x16] + 8);
  }
  else {
    *param_1 = 1;
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a884bb8; end: 10a884e2b;  */

/* WARNING: Possible PIC construction at 0x00010a884e20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a884e24) */
/* WARNING: Removing unreachable block (ram,0x00010a884e38) */
/* WARNING: Removing unreachable block (ram,0x00010a884f04) */
/* WARNING: Removing unreachable block (ram,0x00010a884e90) */
/* WARNING: Removing unreachable block (ram,0x00010a884ea8) */
/* WARNING: Removing unreachable block (ram,0x00010a884ee4) */
/* WARNING: Removing unreachable block (ram,0x00010a884ecc) */
/* WARNING: Removing unreachable block (ram,0x00010a884eec) */
/* WARNING: Removing unreachable block (ram,0x00010a884e34) */

void FUN_10a884bb8(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  byte bStack_50;
  long lStack_48;
  
  pplVar11 = &plStack_c0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a88459c(param_2,param_3);
  FUN_10a884e2c(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar9 = param_2;
    plStack_98 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_98);
    if ((int)plVar9 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_98,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a884df4;
      }
      plStack_98 = (long *)0x0;
      lStack_88 = CONCAT44(lStack_88._4_4_,7);
      plStack_80 = plVar8;
      plStack_90 = param_2;
      FUN_10a688ac0(&plStack_c0,&plStack_90,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    if (((ulong)plVar9 & 1) != 0) {
      lStack_88 = lStack_b8;
      plStack_90 = plStack_c0;
      if (lStack_b8 != 0) {
        plVar8 = (long *)(lStack_b8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_78 = lStack_a8;
      plStack_80 = plStack_b0;
      if (lStack_a8 != 0) {
        plVar8 = (long *)(lStack_a8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      bStack_50 = 2;
      FUN_10a882f84(plVar7 + 0x16,&plStack_90);
      if ((ulong)bStack_50 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_50])(&plStack_90);
        FUN_10a688c1c();
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
          ___stack_chk_fail();
          if (plStack_98 != (long *)0x0) {
            (**(code **)*plStack_98)();
          }
          unaff_x30 = 0x10a884e24;
          register0x00000008 = (BADSPACEBASE *)&plStack_c0;
          unaff_x19 = plVar6;
          unaff_x20 = (undefined1 *)pplVar11;
          unaff_x21 = plVar7;
          unaff_x22 = param_2;
          unaff_x23 = plVar9;
          unaff_x24 = param_5;
          unaff_x29 = puVar1;
        }
        plVar7 = plVar6 + 0x4b;
        lVar10 = plVar6[0x59];
        uVar12 = lVar10 - 1;
        plVar6[0x59] = uVar12;
        if (uVar12 < 8) {
          uVar12 = plVar7[lVar10 + 2];
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        else {
          uVar12 = *(ulong *)(plVar6[0x57] + -8);
          plVar6[0x57] = plVar6[0x57] + -8;
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar10 = *plVar7;
        lVar16 = plVar6[0x4c];
        lVar14 = lVar16 - lVar10;
        uVar18 = lVar14 >> 4;
        if (uVar18 < uVar12) {
          uVar19 = uVar12 - uVar18;
          lVar17 = plVar6[0x4d];
          if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
            if (uVar12 >> 0x3c == 0) {
              uVar13 = lVar17 - lVar10 >> 3;
              if (uVar13 <= uVar12) {
                uVar13 = uVar12;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - lVar10)) {
                uVar13 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar7;
              if (uVar13 >> 0x3c == 0) {
                lVar5 = uVar13 << 4;
                __Znwm();
                lVar16 = lVar5 + lVar14;
                _bzero(lVar16,uVar19 * 0x10);
                lVar15 = lVar16 + uVar18 * -0x10;
                _memcpy(lVar15,lVar10,lVar14);
                *plVar7 = lVar15;
                plVar6[0x4c] = lVar16 + uVar19 * 0x10;
                plVar6[0x4d] = lVar5 + uVar13 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar10;
                *(long *)((long)register0x00000008 + -0x70) = lVar17;
                *(long *)((long)register0x00000008 + -0x88) = lVar10;
                *(long *)((long)register0x00000008 + -0x80) = lVar10;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar4)();
          }
          _bzero(lVar16,uVar19 * 0x10);
          plVar6[0x4c] = lVar16 + uVar19 * 0x10;
        }
        else if (uVar12 < uVar18) {
          lVar10 = lVar10 + uVar12 * 0x10;
          while (lVar16 != lVar10) {
            lVar16 = lVar16 + -0x10;
            func_0x00010988c204(lVar16);
          }
          plVar6[0x4c] = lVar10;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar12;
        return;
      }
      goto LAB_10a884df4;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a884df4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a884df8);
  (*pcVar4)();
}



/* Entry: 10a884e2c; end: 10a884e4f;  */

void FUN_10a884e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a884474(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  if ((char)plVar5[0x27] == '\x02') {
    func_0x0001098849a4(extraout_x8,plVar3,plVar5[0x1f] + 8);
  }
  else {
    *extraout_x8 = 1;
  }
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a884e50; end: 10a884f23;  */

void FUN_10a884e50(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x27] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x1f] + 8);
  }
  else {
    *param_1 = 1;
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a884f24; end: 10a885197;  */

/* WARNING: Possible PIC construction at 0x00010a88518c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a885190) */
/* WARNING: Removing unreachable block (ram,0x00010a8851a4) */
/* WARNING: Removing unreachable block (ram,0x00010a885270) */
/* WARNING: Removing unreachable block (ram,0x00010a8851fc) */
/* WARNING: Removing unreachable block (ram,0x00010a885214) */
/* WARNING: Removing unreachable block (ram,0x00010a885250) */
/* WARNING: Removing unreachable block (ram,0x00010a885238) */
/* WARNING: Removing unreachable block (ram,0x00010a885258) */
/* WARNING: Removing unreachable block (ram,0x00010a8851a0) */

void FUN_10a884f24(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  byte bStack_50;
  long lStack_48;
  
  pplVar11 = &plStack_c0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a88459c(param_2,param_3);
  FUN_10a885198(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar9 = param_2;
    plStack_98 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_98);
    if ((int)plVar9 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_98,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a885160;
      }
      plStack_98 = (long *)0x0;
      lStack_88 = CONCAT44(lStack_88._4_4_,7);
      plStack_80 = plVar8;
      plStack_90 = param_2;
      FUN_10a688ac0(&plStack_c0,&plStack_90,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    if (((ulong)plVar9 & 1) != 0) {
      lStack_88 = lStack_b8;
      plStack_90 = plStack_c0;
      if (lStack_b8 != 0) {
        plVar8 = (long *)(lStack_b8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_78 = lStack_a8;
      plStack_80 = plStack_b0;
      if (lStack_a8 != 0) {
        plVar8 = (long *)(lStack_a8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      bStack_50 = 2;
      func_0x00010a88304c(plVar7 + 0x1f,&plStack_90);
      if ((ulong)bStack_50 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_50])(&plStack_90);
        FUN_10a688c1c();
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
          ___stack_chk_fail();
          if (plStack_98 != (long *)0x0) {
            (**(code **)*plStack_98)();
          }
          unaff_x30 = 0x10a885190;
          register0x00000008 = (BADSPACEBASE *)&plStack_c0;
          unaff_x19 = plVar6;
          unaff_x20 = (undefined1 *)pplVar11;
          unaff_x21 = plVar7;
          unaff_x22 = param_2;
          unaff_x23 = plVar9;
          unaff_x24 = param_5;
          unaff_x29 = puVar1;
        }
        plVar7 = plVar6 + 0x4b;
        lVar10 = plVar6[0x59];
        uVar12 = lVar10 - 1;
        plVar6[0x59] = uVar12;
        if (uVar12 < 8) {
          uVar12 = plVar7[lVar10 + 2];
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        else {
          uVar12 = *(ulong *)(plVar6[0x57] + -8);
          plVar6[0x57] = plVar6[0x57] + -8;
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar10 = *plVar7;
        lVar16 = plVar6[0x4c];
        lVar14 = lVar16 - lVar10;
        uVar18 = lVar14 >> 4;
        if (uVar18 < uVar12) {
          uVar19 = uVar12 - uVar18;
          lVar17 = plVar6[0x4d];
          if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
            if (uVar12 >> 0x3c == 0) {
              uVar13 = lVar17 - lVar10 >> 3;
              if (uVar13 <= uVar12) {
                uVar13 = uVar12;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - lVar10)) {
                uVar13 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar7;
              if (uVar13 >> 0x3c == 0) {
                lVar5 = uVar13 << 4;
                __Znwm();
                lVar16 = lVar5 + lVar14;
                _bzero(lVar16,uVar19 * 0x10);
                lVar15 = lVar16 + uVar18 * -0x10;
                _memcpy(lVar15,lVar10,lVar14);
                *plVar7 = lVar15;
                plVar6[0x4c] = lVar16 + uVar19 * 0x10;
                plVar6[0x4d] = lVar5 + uVar13 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar10;
                *(long *)((long)register0x00000008 + -0x70) = lVar17;
                *(long *)((long)register0x00000008 + -0x88) = lVar10;
                *(long *)((long)register0x00000008 + -0x80) = lVar10;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar4)();
          }
          _bzero(lVar16,uVar19 * 0x10);
          plVar6[0x4c] = lVar16 + uVar19 * 0x10;
        }
        else if (uVar12 < uVar18) {
          lVar10 = lVar10 + uVar12 * 0x10;
          while (lVar16 != lVar10) {
            lVar16 = lVar16 + -0x10;
            func_0x00010988c204(lVar16);
          }
          plVar6[0x4c] = lVar10;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar12;
        return;
      }
      goto LAB_10a885160;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a885160:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a885164);
  (*pcVar4)();
}



/* Entry: 10a885198; end: 10a8851bb;  */

void FUN_10a885198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a884474(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  if ((char)plVar5[0x30] == '\x02') {
    func_0x0001098849a4(extraout_x8,plVar3,plVar5[0x28] + 8);
  }
  else {
    *extraout_x8 = 1;
  }
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a8851bc; end: 10a88528f;  */

void FUN_10a8851bc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x30] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x28] + 8);
  }
  else {
    *param_1 = 1;
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a885290; end: 10a885503;  */

/* WARNING: Possible PIC construction at 0x00010a8854f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8854fc) */
/* WARNING: Removing unreachable block (ram,0x00010a885510) */
/* WARNING: Removing unreachable block (ram,0x00010a8855dc) */
/* WARNING: Removing unreachable block (ram,0x00010a885568) */
/* WARNING: Removing unreachable block (ram,0x00010a885580) */
/* WARNING: Removing unreachable block (ram,0x00010a8855bc) */
/* WARNING: Removing unreachable block (ram,0x00010a8855a4) */
/* WARNING: Removing unreachable block (ram,0x00010a8855c4) */
/* WARNING: Removing unreachable block (ram,0x00010a88550c) */

void FUN_10a885290(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  byte bStack_50;
  long lStack_48;
  
  pplVar11 = &plStack_c0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a88459c(param_2,param_3);
  FUN_10a885504(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar9 = param_2;
    plStack_98 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_98);
    if ((int)plVar9 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_98,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a8854cc;
      }
      plStack_98 = (long *)0x0;
      lStack_88 = CONCAT44(lStack_88._4_4_,7);
      plStack_80 = plVar8;
      plStack_90 = param_2;
      FUN_10a688ac0(&plStack_c0,&plStack_90,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    if (((ulong)plVar9 & 1) != 0) {
      lStack_88 = lStack_b8;
      plStack_90 = plStack_c0;
      if (lStack_b8 != 0) {
        plVar8 = (long *)(lStack_b8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_78 = lStack_a8;
      plStack_80 = plStack_b0;
      if (lStack_a8 != 0) {
        plVar8 = (long *)(lStack_a8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      bStack_50 = 2;
      func_0x00010a883114(plVar7 + 0x28,&plStack_90);
      if ((ulong)bStack_50 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_50])(&plStack_90);
        FUN_10a688c1c();
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
          ___stack_chk_fail();
          if (plStack_98 != (long *)0x0) {
            (**(code **)*plStack_98)();
          }
          unaff_x30 = 0x10a8854fc;
          register0x00000008 = (BADSPACEBASE *)&plStack_c0;
          unaff_x19 = plVar6;
          unaff_x20 = (undefined1 *)pplVar11;
          unaff_x21 = plVar7;
          unaff_x22 = param_2;
          unaff_x23 = plVar9;
          unaff_x24 = param_5;
          unaff_x29 = puVar1;
        }
        plVar7 = plVar6 + 0x4b;
        lVar10 = plVar6[0x59];
        uVar12 = lVar10 - 1;
        plVar6[0x59] = uVar12;
        if (uVar12 < 8) {
          uVar12 = plVar7[lVar10 + 2];
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        else {
          uVar12 = *(ulong *)(plVar6[0x57] + -8);
          plVar6[0x57] = plVar6[0x57] + -8;
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar10 = *plVar7;
        lVar16 = plVar6[0x4c];
        lVar14 = lVar16 - lVar10;
        uVar18 = lVar14 >> 4;
        if (uVar18 < uVar12) {
          uVar19 = uVar12 - uVar18;
          lVar17 = plVar6[0x4d];
          if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
            if (uVar12 >> 0x3c == 0) {
              uVar13 = lVar17 - lVar10 >> 3;
              if (uVar13 <= uVar12) {
                uVar13 = uVar12;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - lVar10)) {
                uVar13 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar7;
              if (uVar13 >> 0x3c == 0) {
                lVar5 = uVar13 << 4;
                __Znwm();
                lVar16 = lVar5 + lVar14;
                _bzero(lVar16,uVar19 * 0x10);
                lVar15 = lVar16 + uVar18 * -0x10;
                _memcpy(lVar15,lVar10,lVar14);
                *plVar7 = lVar15;
                plVar6[0x4c] = lVar16 + uVar19 * 0x10;
                plVar6[0x4d] = lVar5 + uVar13 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar10;
                *(long *)((long)register0x00000008 + -0x70) = lVar17;
                *(long *)((long)register0x00000008 + -0x88) = lVar10;
                *(long *)((long)register0x00000008 + -0x80) = lVar10;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar4)();
          }
          _bzero(lVar16,uVar19 * 0x10);
          plVar6[0x4c] = lVar16 + uVar19 * 0x10;
        }
        else if (uVar12 < uVar18) {
          lVar10 = lVar10 + uVar12 * 0x10;
          while (lVar16 != lVar10) {
            lVar16 = lVar16 + -0x10;
            func_0x00010988c204(lVar16);
          }
          plVar6[0x4c] = lVar10;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar12;
        return;
      }
      goto LAB_10a8854cc;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a8854cc:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a8854d0);
  (*pcVar4)();
}



/* Entry: 10a885504; end: 10a885527;  */

void FUN_10a885504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a884474(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  if ((char)plVar5[0x39] == '\x02') {
    func_0x0001098849a4(extraout_x8,plVar3,plVar5[0x31] + 8);
  }
  else {
    *extraout_x8 = 1;
  }
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a885528; end: 10a8855fb;  */

void FUN_10a885528(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x39] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x31] + 8);
  }
  else {
    *param_1 = 1;
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a8855fc; end: 10a88586f;  */

/* WARNING: Possible PIC construction at 0x00010a885864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a885868) */
/* WARNING: Removing unreachable block (ram,0x00010a88587c) */
/* WARNING: Removing unreachable block (ram,0x00010a885948) */
/* WARNING: Removing unreachable block (ram,0x00010a8858d4) */
/* WARNING: Removing unreachable block (ram,0x00010a8858ec) */
/* WARNING: Removing unreachable block (ram,0x00010a885928) */
/* WARNING: Removing unreachable block (ram,0x00010a885910) */
/* WARNING: Removing unreachable block (ram,0x00010a885930) */
/* WARNING: Removing unreachable block (ram,0x00010a885878) */

void FUN_10a8855fc(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  byte bStack_50;
  long lStack_48;
  
  pplVar11 = &plStack_c0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a88459c(param_2,param_3);
  FUN_10a885870(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar9 = param_2;
    plStack_98 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_98);
    if ((int)plVar9 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_98,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a885838;
      }
      plStack_98 = (long *)0x0;
      lStack_88 = CONCAT44(lStack_88._4_4_,7);
      plStack_80 = plVar8;
      plStack_90 = param_2;
      FUN_10a688ac0(&plStack_c0,&plStack_90,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    if (((ulong)plVar9 & 1) != 0) {
      lStack_88 = lStack_b8;
      plStack_90 = plStack_c0;
      if (lStack_b8 != 0) {
        plVar8 = (long *)(lStack_b8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_78 = lStack_a8;
      plStack_80 = plStack_b0;
      if (lStack_a8 != 0) {
        plVar8 = (long *)(lStack_a8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      bStack_50 = 2;
      func_0x00010a8832a4(plVar7 + 0x31,&plStack_90);
      if ((ulong)bStack_50 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_50])(&plStack_90);
        FUN_10a688c1c();
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
          ___stack_chk_fail();
          if (plStack_98 != (long *)0x0) {
            (**(code **)*plStack_98)();
          }
          unaff_x30 = 0x10a885868;
          register0x00000008 = (BADSPACEBASE *)&plStack_c0;
          unaff_x19 = plVar6;
          unaff_x20 = (undefined1 *)pplVar11;
          unaff_x21 = plVar7;
          unaff_x22 = param_2;
          unaff_x23 = plVar9;
          unaff_x24 = param_5;
          unaff_x29 = puVar1;
        }
        plVar7 = plVar6 + 0x4b;
        lVar10 = plVar6[0x59];
        uVar12 = lVar10 - 1;
        plVar6[0x59] = uVar12;
        if (uVar12 < 8) {
          uVar12 = plVar7[lVar10 + 2];
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        else {
          uVar12 = *(ulong *)(plVar6[0x57] + -8);
          plVar6[0x57] = plVar6[0x57] + -8;
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar10 = *plVar7;
        lVar16 = plVar6[0x4c];
        lVar14 = lVar16 - lVar10;
        uVar18 = lVar14 >> 4;
        if (uVar18 < uVar12) {
          uVar19 = uVar12 - uVar18;
          lVar17 = plVar6[0x4d];
          if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
            if (uVar12 >> 0x3c == 0) {
              uVar13 = lVar17 - lVar10 >> 3;
              if (uVar13 <= uVar12) {
                uVar13 = uVar12;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - lVar10)) {
                uVar13 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar7;
              if (uVar13 >> 0x3c == 0) {
                lVar5 = uVar13 << 4;
                __Znwm();
                lVar16 = lVar5 + lVar14;
                _bzero(lVar16,uVar19 * 0x10);
                lVar15 = lVar16 + uVar18 * -0x10;
                _memcpy(lVar15,lVar10,lVar14);
                *plVar7 = lVar15;
                plVar6[0x4c] = lVar16 + uVar19 * 0x10;
                plVar6[0x4d] = lVar5 + uVar13 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar10;
                *(long *)((long)register0x00000008 + -0x70) = lVar17;
                *(long *)((long)register0x00000008 + -0x88) = lVar10;
                *(long *)((long)register0x00000008 + -0x80) = lVar10;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar4)();
          }
          _bzero(lVar16,uVar19 * 0x10);
          plVar6[0x4c] = lVar16 + uVar19 * 0x10;
        }
        else if (uVar12 < uVar18) {
          lVar10 = lVar10 + uVar12 * 0x10;
          while (lVar16 != lVar10) {
            lVar16 = lVar16 + -0x10;
            func_0x00010988c204(lVar16);
          }
          plVar6[0x4c] = lVar10;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar12;
        return;
      }
      goto LAB_10a885838;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a885838:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a88583c);
  (*pcVar4)();
}



/* Entry: 10a885870; end: 10a885893;  */

void FUN_10a885870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar3 = (long *)0x1;
  uVar6 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a884474(plVar3,uVar6);
  FUN_10a052e3c(param_4);
  if ((char)plVar5[0x42] == '\x02') {
    func_0x0001098849a4(extraout_x8,plVar3,plVar5[0x3a] + 8);
  }
  else {
    *extraout_x8 = 1;
  }
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a885894; end: 10a885967;  */

void FUN_10a885894(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x42] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x3a] + 8);
  }
  else {
    *param_1 = 1;
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a885968; end: 10a885bdb;  */

/* WARNING: Possible PIC construction at 0x00010a885bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a885bd4) */
/* WARNING: Removing unreachable block (ram,0x00010a885be8) */
/* WARNING: Removing unreachable block (ram,0x00010a885c2c) */
/* WARNING: Removing unreachable block (ram,0x00010a885c30) */
/* WARNING: Removing unreachable block (ram,0x00010a885c38) */
/* WARNING: Removing unreachable block (ram,0x00010a885c40) */
/* WARNING: Removing unreachable block (ram,0x00010a885c50) */
/* WARNING: Removing unreachable block (ram,0x00010a885c54) */
/* WARNING: Removing unreachable block (ram,0x00010a885c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a885c64) */
/* WARNING: Removing unreachable block (ram,0x00010a885cbc) */
/* WARNING: Removing unreachable block (ram,0x00010a885c84) */
/* WARNING: Removing unreachable block (ram,0x00010a885cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a885d78) */
/* WARNING: Removing unreachable block (ram,0x00010a885d04) */
/* WARNING: Removing unreachable block (ram,0x00010a885d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a885d58) */
/* WARNING: Removing unreachable block (ram,0x00010a885d40) */
/* WARNING: Removing unreachable block (ram,0x00010a885d60) */
/* WARNING: Removing unreachable block (ram,0x00010a885cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a885be4) */

void FUN_10a885968(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long lVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  long *unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  ulong uVar18;
  undefined8 unaff_x25;
  ulong uVar19;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  byte bStack_50;
  long lStack_48;
  
  pplVar11 = &plStack_c0;
  puVar1 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a88459c(param_2,param_3);
  FUN_10a885bdc(param_5);
  if (*param_4 == 7) {
    plVar8 = param_2;
    (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(param_4 + 2));
    plVar9 = param_2;
    plStack_98 = plVar8;
    (**(code **)(*param_2 + 0x228))(param_2,&plStack_98);
    if ((int)plVar9 != 0) {
      plVar8 = param_2;
      (**(code **)(*param_2 + 0x58))();
      lVar10 = plVar8[0x48];
      if ((lVar10 == 0) ||
         (___dynamic_cast(lVar10,&PTR_DAT_110b9fb60,&PTR_DAT_110b9fb70,0), plVar8 = plStack_98,
         lVar10 == 0)) {
        func_0x00010988bd28(&UNK_10f685540);
        goto LAB_10a885ba4;
      }
      plStack_98 = (long *)0x0;
      lStack_88 = CONCAT44(lStack_88._4_4_,7);
      plStack_80 = plVar8;
      plStack_90 = param_2;
      FUN_10a688ac0(&plStack_c0,&plStack_90,*(undefined8 *)(lVar10 + 8));
      if ((3 < (int)lStack_88) && (plStack_80 != (long *)0x0)) {
        (**(code **)*plStack_80)();
      }
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    if (((ulong)plVar9 & 1) != 0) {
      lStack_88 = lStack_b8;
      plStack_90 = plStack_c0;
      if (lStack_b8 != 0) {
        plVar8 = (long *)(lStack_b8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_78 = lStack_a8;
      plStack_80 = plStack_b0;
      if (lStack_a8 != 0) {
        plVar8 = (long *)(lStack_a8 + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      bStack_50 = 2;
      func_0x00010a8831dc(plVar7 + 0x3a,&plStack_90);
      if ((ulong)bStack_50 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_50])(&plStack_90);
        FUN_10a688c1c();
        *param_1 = 0;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
          ___stack_chk_fail();
          if (plStack_98 != (long *)0x0) {
            (**(code **)*plStack_98)();
          }
          unaff_x30 = 0x10a885bd4;
          register0x00000008 = (BADSPACEBASE *)&plStack_c0;
          unaff_x19 = plVar6;
          unaff_x20 = (undefined1 *)pplVar11;
          unaff_x21 = plVar7;
          unaff_x22 = param_2;
          unaff_x23 = plVar9;
          unaff_x24 = param_5;
          unaff_x29 = puVar1;
        }
        plVar7 = plVar6 + 0x4b;
        lVar10 = plVar6[0x59];
        uVar12 = lVar10 - 1;
        plVar6[0x59] = uVar12;
        if (uVar12 < 8) {
          uVar12 = plVar7[lVar10 + 2];
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        else {
          uVar12 = *(ulong *)(plVar6[0x57] + -8);
          plVar6[0x57] = plVar6[0x57] + -8;
          if (plVar6[0x5a] == uVar12) {
            return;
          }
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        lVar10 = *plVar7;
        lVar16 = plVar6[0x4c];
        lVar14 = lVar16 - lVar10;
        uVar18 = lVar14 >> 4;
        if (uVar18 < uVar12) {
          uVar19 = uVar12 - uVar18;
          lVar17 = plVar6[0x4d];
          if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
            if (uVar12 >> 0x3c == 0) {
              uVar13 = lVar17 - lVar10 >> 3;
              if (uVar13 <= uVar12) {
                uVar13 = uVar12;
              }
              if (0x7fffffffffffffef < (ulong)(lVar17 - lVar10)) {
                uVar13 = 0xfffffffffffffff;
              }
              *(long **)((long)register0x00000008 + -0x68) = plVar7;
              if (uVar13 >> 0x3c == 0) {
                lVar5 = uVar13 << 4;
                __Znwm();
                lVar16 = lVar5 + lVar14;
                _bzero(lVar16,uVar19 * 0x10);
                lVar15 = lVar16 + uVar18 * -0x10;
                _memcpy(lVar15,lVar10,lVar14);
                *plVar7 = lVar15;
                plVar6[0x4c] = lVar16 + uVar19 * 0x10;
                plVar6[0x4d] = lVar5 + uVar13 * 0x10;
                *(long *)((long)register0x00000008 + -0x78) = lVar10;
                *(long *)((long)register0x00000008 + -0x70) = lVar17;
                *(long *)((long)register0x00000008 + -0x88) = lVar10;
                *(long *)((long)register0x00000008 + -0x80) = lVar10;
                func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar4)();
          }
          _bzero(lVar16,uVar19 * 0x10);
          plVar6[0x4c] = lVar16 + uVar19 * 0x10;
        }
        else if (uVar12 < uVar18) {
          lVar10 = lVar10 + uVar12 * 0x10;
          while (lVar16 != lVar10) {
            lVar16 = lVar16 + -0x10;
            func_0x00010988c204(lVar16);
          }
          plVar6[0x4c] = lVar10;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar12;
        return;
      }
      goto LAB_10a885ba4;
    }
  }
  func_0x00010988bd28(&UNK_10f6347ad);
LAB_10a885ba4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a885ba8);
  (*pcVar4)();
}



/* Entry: 10a885bdc; end: 10a885cc3;  */

void FUN_10a885bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined4 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  byte bStack_30;
  long lStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar5 = 1;
  plVar8 = (long *)0x0;
  FUN_10a052ee0(1,0,param_1);
  plVar9 = &lStack_70;
  plVar6 = &lStack_70;
  uStack_18 = 0x10a885c00;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_68 = plVar8[1];
  lStack_70 = *plVar8;
  if (plVar8[1] != 0) {
    plVar7 = (long *)(plVar8[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_58 = plVar8[3];
  lStack_60 = plVar8[2];
  if (plVar8[3] != 0) {
    plVar8 = (long *)(plVar8[3] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  bStack_30 = 2;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010a88336c(lVar5 + 0x218,&lStack_70);
  if (3 < (ulong)bStack_30) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a885cc0);
    (*pcVar3)();
  }
  (*(code *)(&PTR_FUN_110b9a040)[bStack_30])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  plVar8 = plVar6;
  (**(code **)(*plVar6 + 0x58))();
  if ((ulong)plVar8[0x59] < 8) {
    plVar8[plVar8[0x59] + 0x4e] = plVar8[0x5a];
    plVar8[0x59] = plVar8[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar8 + 0x4b);
  }
  plVar7 = plVar6;
  FUN_10a884474(plVar6,plVar9);
  FUN_10a052e3c(param_4);
  if ((char)plVar7[0x4b] == '\x02') {
    func_0x0001098849a4(extraout_x8,plVar6,plVar7[0x43] + 8);
  }
  else {
    *extraout_x8 = 1;
  }
  plVar6 = plVar8 + 0x4b;
  lVar5 = plVar8[0x59];
  uVar10 = lVar5 - 1;
  plVar8[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar6[lVar5 + 2];
    if (plVar8[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar8[0x57] + -8);
    plVar8[0x57] = plVar8[0x57] + -8;
    if (plVar8[0x5a] == uVar10) {
      return;
    }
  }
  lVar5 = *plVar6;
  lVar14 = plVar8[0x4c];
  lVar12 = lVar14 - lVar5;
  uVar16 = lVar12 >> 4;
  if (uVar16 < uVar10) {
    uVar17 = uVar10 - uVar16;
    lVar15 = plVar8[0x4d];
    if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
      if (uVar10 >> 0x3c == 0) {
        uVar11 = lVar15 - lVar5 >> 3;
        if (uVar11 <= uVar10) {
          uVar11 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar15 - lVar5)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_d8 = plVar6;
        if (uVar11 >> 0x3c == 0) {
          lVar4 = uVar11 << 4;
          __Znwm();
          lVar14 = lVar4 + lVar12;
          _bzero(lVar14,uVar17 * 0x10);
          lVar13 = lVar14 + uVar16 * -0x10;
          _memcpy(lVar13,lVar5,lVar12);
          *plVar6 = lVar13;
          plVar8[0x4c] = lVar14 + uVar17 * 0x10;
          plVar8[0x4d] = lVar4 + uVar11 * 0x10;
          lStack_f8 = lVar5;
          lStack_f0 = lVar5;
          lStack_e8 = lVar5;
          lStack_e0 = lVar15;
          func_0x00010988c1b8(&lStack_f8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar14,uVar17 * 0x10);
    plVar8[0x4c] = lVar14 + uVar17 * 0x10;
  }
  else if (uVar10 < uVar16) {
    lVar5 = lVar5 + uVar10 * 0x10;
    while (lVar14 != lVar5) {
      lVar14 = lVar14 + -0x10;
      func_0x00010988c204(lVar14);
    }
    plVar8[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar8[0x5a] = uVar10;
  return;
}



/* Entry: 10a885cc4; end: 10a885d97;  */

void FUN_10a885cc4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a884474(param_2,param_3);
  FUN_10a052e3c(param_5);
  if ((char)plVar4[0x4b] == '\x02') {
    func_0x0001098849a4(param_1,param_2,plVar4[0x43] + 8);
  }
  else {
    *param_1 = 1;
  }
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}


