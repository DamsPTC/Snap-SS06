/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a31ecd8; end: 10a31ed0f;  */

void FUN_10a31ecd8(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar2 = &puStack_20;
  puVar1 = &stack0xfffffffffffffff0;
  puStack_20 = &UNK_10f64ecc2;
  uStack_18 = 0x50;
  if ((param_1[0x60] & 1) == 0) {
    unaff_x30 = FUN_10a31ed10;
    FUN_10a0edfc4();
    register0x00000008 = (BADSPACEBASE *)&puStack_20;
    param_1 = (undefined1 *)ppuVar2;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (param_1[0x60] == '\x01') {
    func_0x00010a09a9f4();
    param_1[0x60] = 0;
  }
  return;
}



/* Entry: 10a31ed10; end: 10a31ed37;  */

void FUN_10a31ed10(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010a09a9f4();
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10a31ed38; end: 10a31ed87;  */

void FUN_10a31ed38(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10a08ef58(param_2 + 0x68);
    if (*(char *)(param_2 + 0x60) == '\x01') {
      func_0x00010a09a9f4(param_2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10a31ed88; end: 10a31ee4f;  */

undefined8 *
FUN_10a31ed88(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    *(undefined1 *)(param_4 + 3) = *(undefined1 *)(param_2 + 3);
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  FUN_10a31ee50(&uStack_60);
  return param_4;
}



/* Entry: 10a31ee50; end: 10a31eef7;  */

/* WARNING: Removing unreachable block (ram,0x00010a31eea0) */

long FUN_10a31ee50(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x20) {
    }
  }
  return param_1;
}



/* Entry: 10a31eef8; end: 10a31ef0b;  */

void FUN_10a31eef8(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  FUN_10a31ef78();
  puVar2 = *(undefined1 **)(puVar1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 **)(puVar1 + 8) = puVar2;
  return;
}



/* Entry: 10a31ef0c; end: 10a31ef77;  */

void FUN_10a31ef0c(long param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  
  FUN_10a31ef78(param_1,param_4);
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10a31ef78; end: 10a31efb3;  */

undefined * FUN_10a31ef78(long *param_1,undefined *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  if ((long)param_2 < 0) {
    FUN_10a31efb4();
    puVar2 = &DAT_10f62a4d8;
    FUN_109ffde64();
    if ((puVar2[0x18] & 1) == 0) {
      plVar3 = (long *)**(undefined8 **)(puVar2 + 8);
      plVar4 = (long *)**(long **)(puVar2 + 0x10);
      while (plVar1 = plVar4, plVar1 != plVar3) {
        plVar4 = plVar1 + -3;
        if (*plVar4 != 0) {
          plVar1[-2] = *plVar4;
          __ZdlPv();
        }
      }
    }
    return puVar2;
  }
  puVar2 = param_2;
  __Znwm();
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar2;
  param_1[2] = (long)(puVar2 + (long)param_2);
  return puVar2;
}



/* Entry: 10a31efb4; end: 10a31efc7;  */

undefined * FUN_10a31efb4(void)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((puVar2[0x18] & 1) == 0) {
    plVar3 = (long *)**(undefined8 **)(puVar2 + 8);
    plVar4 = (long *)**(long **)(puVar2 + 0x10);
    while (plVar1 = plVar4, plVar1 != plVar3) {
      plVar4 = plVar1 + -3;
      if (*plVar4 != 0) {
        plVar1[-2] = *plVar4;
        __ZdlPv();
      }
    }
  }
  return puVar2;
}



/* Entry: 10a31efc8; end: 10a31f09f;  */

long FUN_10a31efc8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)**(undefined8 **)(param_1 + 8);
    plVar3 = (long *)**(long **)(param_1 + 0x10);
    while (plVar1 = plVar3, plVar1 != plVar2) {
      plVar3 = plVar1 + -3;
      if (*plVar3 != 0) {
        plVar1[-2] = *plVar3;
        __ZdlPv();
      }
    }
  }
  return param_1;
}



/* Entry: 10a31f0a0; end: 10a31f0b3;  */

void FUN_10a31f0a0(void)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (*plVar1 != 0) {
    func_0x00010a31eeac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*plVar1);
    return;
  }
  return;
}



/* Entry: 10a31f0b4; end: 10a31f0e3;  */

void FUN_10a31f0b4(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010a31eeac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a31f0e4; end: 10a31f1a7;  */

undefined1  [16] FUN_10a31f0e4(ulong *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined *puVar15;
  long *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 < (undefined8 *)param_1[2]) {
    puVar13 = puVar6 + 1;
    *puVar6 = *param_2;
    puVar3 = param_1;
    puVar6 = param_2;
LAB_10a31f190:
    param_1[1] = (ulong)puVar13;
    auVar17._8_8_ = puVar6;
    auVar17._0_8_ = puVar3;
    return auVar17;
  }
  lVar12 = (long)puVar6 - *param_1;
  uVar11 = (lVar12 >> 3) + 1;
  if (uVar11 >> 0x3d == 0) {
    uVar7 = (long)param_1[2] - *param_1;
    uVar10 = (long)uVar7 >> 2;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    puVar2 = param_1;
    FUN_10a31f1bc();
    puVar6 = (undefined8 *)*param_1;
    puVar1 = (undefined8 *)((long)puVar2 + lVar12);
    uVar11 = (long)puVar1 - (param_1[1] - (long)puVar6);
    puVar13 = puVar1 + 1;
    *puVar1 = *param_2;
    _memcpy(uVar11,puVar6);
    puVar3 = (ulong *)*param_1;
    *param_1 = uVar11;
    param_1[1] = (ulong)puVar13;
    param_1[2] = (ulong)(puVar2 + uVar10);
    if (puVar3 != (ulong *)0x0) {
      __ZdlPv();
    }
    goto LAB_10a31f190;
  }
  FUN_10a31f1a8();
  plVar8 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar12 = (long)param_2 << 3;
    __Znwm(lVar12);
    auVar18._8_8_ = param_2;
    auVar18._0_8_ = lVar12;
    return auVar18;
  }
  func_0x000109ffded8();
  plVar4 = plVar8;
  puVar6 = param_2;
  FUN_10a054838();
  plVar14 = (long *)plVar8[1];
  if (plVar14 != (long *)0x0) {
    puVar15 = (undefined *)((long)plVar14 + -1);
    if (((ulong)plVar14 & (ulong)puVar15) == 0) {
      plVar16 = (long *)((ulong)puVar15 & (ulong)plVar4);
    }
    else {
      plVar16 = plVar4;
      if (plVar14 <= plVar4) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar4 / (ulong)plVar14;
        }
        plVar16 = (long *)((long)plVar4 - uVar11 * (long)plVar14);
      }
    }
    plVar8 = *(long **)(*plVar8 + (long)plVar16 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        plVar9 = (long *)plVar8[1];
        if (plVar4 == plVar9) {
          if (plVar8[3] == param_3) {
            uVar5 = plVar8[2];
            puVar6 = param_2;
            _memcmp(uVar5,param_2,param_3);
            if ((int)uVar5 == 0) break;
          }
        }
        else {
          if (((ulong)plVar14 & (ulong)puVar15) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (ulong)puVar15);
          }
          else if (plVar14 <= plVar9) {
            uVar11 = 0;
            if (plVar14 != (long *)0x0) {
              uVar11 = (ulong)plVar9 / (ulong)plVar14;
            }
            plVar9 = (long *)((long)plVar9 - uVar11 * (long)plVar14);
          }
          if (plVar9 != plVar16) goto LAB_10a31f2c4;
        }
      }
      goto LAB_10a31f2c8;
    }
  }
LAB_10a31f2c4:
  plVar8 = (long *)0x0;
LAB_10a31f2c8:
  auVar19._8_8_ = puVar6;
  auVar19._0_8_ = plVar8;
  return auVar19;
}



/* Entry: 10a31f1a8; end: 10a31f1bb;  */

undefined1  [16] FUN_10a31f1a8(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar3 = plVar6;
  uVar5 = param_2;
  FUN_10a054838();
  plVar8 = (long *)plVar6[1];
  if (plVar8 != (long *)0x0) {
    puVar9 = (undefined *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)puVar9) == 0) {
      plVar10 = (long *)((ulong)puVar9 & (ulong)plVar3);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar3 - uVar1 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*plVar6 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar7 = (long *)plVar6[1];
        if (plVar3 == plVar7) {
          if (plVar6[3] == param_3) {
            uVar4 = plVar6[2];
            uVar5 = param_2;
            _memcmp(uVar4,param_2,param_3);
            if ((int)uVar4 == 0) break;
          }
        }
        else {
          if (((ulong)plVar8 & (ulong)puVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & (ulong)puVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar8);
          }
          if (plVar7 != plVar10) goto LAB_10a31f2c4;
        }
      }
      goto LAB_10a31f2c8;
    }
  }
LAB_10a31f2c4:
  plVar6 = (long *)0x0;
LAB_10a31f2c8:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = plVar6;
  return auVar12;
}



/* Entry: 10a31f1bc; end: 10a31f1ef;  */

undefined1  [16] FUN_10a31f1bc(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  func_0x000109ffded8();
  plVar3 = param_1;
  uVar5 = param_2;
  FUN_10a054838();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar3);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar3 - uVar1 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      for (plVar6 = (long *)*plVar6; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        plVar7 = (long *)plVar6[1];
        if (plVar3 == plVar7) {
          if (plVar6[3] == param_3) {
            uVar4 = plVar6[2];
            uVar5 = param_2;
            _memcmp(uVar4,param_2,param_3);
            if ((int)uVar4 == 0) break;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar1 = 0;
            if (plVar8 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar8);
          }
          if (plVar7 != plVar10) goto LAB_10a31f2c4;
        }
      }
      goto LAB_10a31f2c8;
    }
  }
LAB_10a31f2c4:
  plVar6 = (long *)0x0;
LAB_10a31f2c8:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = plVar6;
  return auVar12;
}



/* Entry: 10a31f1f0; end: 10a31f2e3;  */

long FUN_10a31f1f0(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar2 = param_1;
  FUN_10a054838();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)(uVar7 & (ulong)plVar2);
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
    plVar4 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)*plVar4;
      do {
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        plVar5 = (long *)plVar4[1];
        if (plVar2 == plVar5) {
          if (plVar4[3] == param_3) {
            uVar3 = plVar4[2];
            _memcmp(uVar3,param_2,param_3);
            if ((int)uVar3 == 0) {
              return (long)plVar4;
            }
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar5 = (long *)((ulong)plVar5 & uVar7);
          }
          else if (plVar6 <= plVar5) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar5 / (ulong)plVar6;
            }
            plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar6);
          }
          if (plVar5 != plVar8) {
            return 0;
          }
        }
        plVar4 = (long *)*plVar4;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a31f2e4; end: 10a31f3e7;  */

undefined8 * FUN_10a31f2e4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    func_0x00010a31f3b0();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a31f3e8; end: 10a320427;  */

/* WARNING: Removing unreachable block (ram,0x00010a31f744) */
/* WARNING: Removing unreachable block (ram,0x00010a31f770) */
/* WARNING: Type propagation algorithm not settling */

long FUN_10a31f3e8(long param_1,byte *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  undefined2 *puVar18;
  long *plVar19;
  long lVar20;
  byte **ppbVar21;
  byte **ppbVar22;
  long lVar23;
  undefined1 uStack_2cc;
  undefined1 uStack_2cb;
  undefined1 uStack_2ca;
  undefined1 uStack_2c9;
  undefined2 uStack_2c8;
  undefined2 uStack_2c6;
  undefined4 uStack_2c4;
  undefined2 uStack_2c0;
  undefined1 auStack_2be [3];
  undefined1 uStack_2bb;
  undefined1 uStack_2ba;
  undefined1 uStack_2b9;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 **ppuStack_298;
  undefined8 **ppuStack_290;
  undefined1 uStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  byte *pbStack_270;
  long alStack_268 [2];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long alStack_198 [4];
  undefined1 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 uStack_158;
  undefined1 auStack_150 [24];
  undefined1 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined1 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _bzero(param_1,0x478);
  func_0x000107c2b054(&pbStack_270,&DAT_10f416774);
  uStack_258 = CONCAT71(uStack_258._1_7_,6);
  func_0x000107c2b054(&uStack_250,&UNK_10f6109c6);
  uStack_238 = CONCAT71(uStack_238._1_7_,9);
  func_0x000107c2b054(&uStack_230,"+");
  uStack_218 = uStack_218 & 0xffffffffffffff00;
  func_0x000107c2b054(&uStack_210,"-");
  uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
  func_0x000107c2b054(&uStack_1f0,"*");
  uStack_1d8 = CONCAT71(uStack_1d8._1_7_,2);
  func_0x000107c2b054(&uStack_1d0,"/");
  uStack_1b8 = CONCAT71(uStack_1b8._1_7_,3);
  func_0x000107c2b054(&uStack_1b0,&DAT_10f5af57c);
  alStack_198[0] = CONCAT71(alStack_198[0]._1_7_,7);
  func_0x000107c2b054(alStack_198 + 1,&DAT_10f5fa831);
  uStack_178 = 8;
  func_0x000107c2b054(auStack_170,">");
  uStack_158 = 10;
  func_0x000107c2b054(auStack_150,&DAT_10f41676e);
  uStack_138 = 0xb;
  func_0x000107c2b054(auStack_130,"<");
  uStack_118 = 0xc;
  func_0x000107c2b054(auStack_110,&DAT_10f41676b);
  uStack_f8 = 0xd;
  func_0x000107c2b054(auStack_f0,&DAT_10f2f497c);
  uStack_d8 = 0xe;
  func_0x000107c2b054(auStack_d0,&DAT_10f416771);
  uStack_b8 = 0xf;
  func_0x000107c2b054(auStack_b0,&DAT_10f68e8ec);
  uStack_98 = 0x10;
  func_0x000107c2b054(auStack_90,&UNK_10f64d489);
  uStack_78 = 0x11;
  uVar11 = *(ulong *)(param_1 + 0x40);
  lVar20 = *(long *)(param_1 + 0x30);
  if (uVar11 - lVar20 < 0x200) {
    if (lVar20 != 0) {
      func_0x00010a31eeac(param_1 + 0x30);
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
      uVar11 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    uVar13 = (long)uVar11 >> 4;
    if (uVar13 < 0x11) {
      uVar13 = 0x10;
    }
    if (0x7fffffffffffffdf < uVar11) {
      uVar13 = 0x7ffffffffffffff;
    }
    if (uVar13 >> 0x3b == 0) {
      lVar8 = uVar13 << 5;
      __Znwm();
      *(long *)(param_1 + 0x30) = lVar8;
      *(long *)(param_1 + 0x38) = lVar8;
      *(ulong *)(param_1 + 0x40) = lVar8 + uVar13 * 0x20;
      lVar20 = param_1 + 0x30;
      FUN_10a31ed88(lVar20,&pbStack_270,alStack_70,lVar8);
LAB_10a31f6f8:
      *(long *)(param_1 + 0x38) = lVar20;
      goto LAB_10a31f754;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x38);
    if ((ulong)(lVar8 - lVar20) < 0x200) {
      ppbVar21 = (byte **)((long)&pbStack_270 + (lVar8 - lVar20));
      if (lVar8 != lVar20) {
        ppbVar22 = &pbStack_270;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar20,ppbVar22);
          *(undefined1 *)(lVar20 + 0x18) = *(undefined1 *)(ppbVar22 + 3);
          ppbVar22 = ppbVar22 + 4;
          lVar20 = lVar20 + 0x20;
        } while (ppbVar22 != ppbVar21);
        lVar8 = *(long *)(param_1 + 0x38);
      }
      lVar20 = param_1 + 0x30;
      FUN_10a31ed88(lVar20,ppbVar21,alStack_70,lVar8);
      goto LAB_10a31f6f8;
    }
    ppbVar21 = &pbStack_270;
    lVar8 = 0x200;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar20,ppbVar21);
      *(undefined1 *)(lVar20 + 0x18) = *(undefined1 *)(ppbVar21 + 3);
      lVar20 = lVar20 + 0x20;
      ppbVar21 = ppbVar21 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
    for (lVar8 = *(long *)(param_1 + 0x38); lVar20 != lVar8; lVar8 = lVar8 + -0x20) {
    }
    *(long *)(param_1 + 0x38) = lVar20;
LAB_10a31f754:
    lVar20 = 0x200;
    do {
      lVar20 = lVar20 + -0x20;
    } while (lVar20 != 0);
    uStack_2b9 = 0x11;
    alStack_268[0] = 0;
    alStack_268[1] = 0;
    pbStack_270 = (byte *)0x0;
    FUN_10a31ef0c(&pbStack_270,&uStack_2b9,&puStack_2b8,1);
    uStack_2ba = 8;
    uStack_248 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    FUN_10a31ef0c(&uStack_258,&uStack_2ba,&uStack_2b9,1);
    uStack_2bb = 7;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_240 = 0;
    FUN_10a31ef0c(&uStack_240,&uStack_2bb,&uStack_2ba,1);
    uStack_2c4 = 0xd0c0b0a;
    uStack_2c0 = 0xf0e;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_228 = 0;
    FUN_10a31ef0c(&uStack_228,&uStack_2c4,auStack_2be,6);
    uStack_2c6 = 0x100;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_210 = 0;
    FUN_10a31ef0c(&uStack_210,&uStack_2c6,&uStack_2c4,2);
    uStack_2c8 = 0x302;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1f8 = 0;
    FUN_10a31ef0c(&uStack_1f8,&uStack_2c8,&uStack_2c6,2);
    uStack_2c9 = 6;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e0 = 0;
    FUN_10a31ef0c(&uStack_1e0,&uStack_2c9,&uStack_2c8,1);
    uStack_2ca = 9;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1c8 = 0;
    FUN_10a31ef0c(&uStack_1c8,&uStack_2ca,&uStack_2c9,1);
    uStack_2cb = 4;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b0 = 0;
    FUN_10a31ef0c(&uStack_1b0,&uStack_2cb,&uStack_2ca,1);
    uStack_2cc = 0x10;
    alStack_198[1] = 0;
    alStack_198[2] = 0;
    alStack_198[0] = 0;
    FUN_10a31ef0c(alStack_198,&uStack_2cc,&uStack_2cb,1);
    puStack_2b8 = (undefined8 *)0x0;
    puStack_2b0 = (undefined8 *)0x0;
    puStack_2a8 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0xf0;
    __Znwm();
    lVar20 = 0;
    puStack_2a8 = puVar9 + 0x1e;
    uStack_2a0 = &puStack_2b8;
    ppuStack_298 = &puStack_280;
    ppuStack_290 = &puStack_278;
    uStack_288 = 0;
    puStack_2b8 = puVar9;
    puStack_2b0 = puVar9;
    puStack_280 = puVar9;
    do {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      lVar8 = *(long *)((long)&pbStack_270 + lVar20);
      lVar6 = *(long *)((long)alStack_268 + lVar20) - lVar8;
      puStack_278 = puVar9;
      if (lVar6 != 0) {
        FUN_10a31ef78(puVar9,lVar6);
        lVar23 = puVar9[1];
        _memmove(lVar23,lVar8,lVar6);
        puVar9[1] = lVar23 + lVar6;
      }
      lVar20 = lVar20 + 0x18;
      puVar9 = puStack_278 + 3;
    } while (lVar20 != 0xf0);
    uStack_288 = 1;
    puStack_278 = puVar9;
    FUN_10a31efc8(&uStack_2a0);
    lVar20 = 0;
    puStack_2b0 = puVar9;
    do {
      if (*(long *)((long)alStack_198 + lVar20) != 0) {
        *(long *)((long)alStack_198 + lVar20 + 8U) = *(long *)((long)alStack_198 + lVar20);
        __ZdlPv();
      }
      lVar20 = lVar20 + -0x18;
    } while (lVar20 != -0xf0);
    uVar11 = *(ulong *)(param_1 + 0x58);
    lVar20 = *(long *)(param_1 + 0x48);
    if (uVar11 - lVar20 < 0x100) {
      if (lVar20 != 0) {
        *(long *)(param_1 + 0x50) = lVar20;
        __ZdlPv(lVar20);
        uVar11 = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      uVar13 = uVar11 * 2;
      if (uVar13 < 0x101) {
        uVar13 = 0x100;
      }
      if (0x3ffffffffffffffe < uVar11) {
        uVar13 = 0x7fffffffffffffff;
      }
      FUN_10a31ef78(param_1 + 0x48,uVar13);
      puVar12 = *(undefined8 **)(param_1 + 0x50);
      puVar12[0x1d] = 0x1212121212121212;
      puVar12[0x1c] = 0x1212121212121212;
      puVar12[0x1f] = 0x1212121212121212;
      puVar12[0x1e] = 0x1212121212121212;
      puVar12[0x19] = 0x1212121212121212;
      puVar12[0x18] = 0x1212121212121212;
      puVar12[0x1b] = 0x1212121212121212;
      puVar12[0x1a] = 0x1212121212121212;
      puVar12[0x15] = 0x1212121212121212;
      puVar12[0x14] = 0x1212121212121212;
      puVar12[0x17] = 0x1212121212121212;
      puVar12[0x16] = 0x1212121212121212;
      puVar12[0x11] = 0x1212121212121212;
      puVar12[0x10] = 0x1212121212121212;
      puVar12[0x13] = 0x1212121212121212;
      puVar12[0x12] = 0x1212121212121212;
      puVar12[0xd] = 0x1212121212121212;
      puVar12[0xc] = 0x1212121212121212;
      puVar12[0xf] = 0x1212121212121212;
      puVar12[0xe] = 0x1212121212121212;
      puVar12[9] = 0x1212121212121212;
      puVar12[8] = 0x1212121212121212;
      puVar12[0xb] = 0x1212121212121212;
      puVar12[10] = 0x1212121212121212;
      puVar12[5] = 0x1212121212121212;
      puVar12[4] = 0x1212121212121212;
      puVar12[7] = 0x1212121212121212;
      puVar12[6] = 0x1212121212121212;
      puVar9 = puVar12 + 0x20;
      puVar12[1] = 0x1212121212121212;
      *puVar12 = 0x1212121212121212;
      puVar12[3] = 0x1212121212121212;
      puVar12[2] = 0x1212121212121212;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x50);
      uVar11 = lVar8 - lVar20;
      if (uVar11 != 0) {
        uVar13 = uVar11;
        if (0xff < uVar11) {
          uVar13 = 0x100;
        }
        _memset(lVar20,0x12,uVar13);
        if (0xff < uVar11) {
          puVar9 = (undefined8 *)(lVar20 + 0x100);
          goto LAB_10a31fb00;
        }
      }
      _memset(lVar8,0x12,0x100 - uVar11);
      puVar9 = (undefined8 *)(lVar8 + (0x100 - uVar11));
    }
LAB_10a31fb00:
    *(undefined8 **)(param_1 + 0x50) = puVar9;
    uVar11 = *(ulong *)(param_1 + 0x70);
    puVar10 = *(undefined2 **)(param_1 + 0x60);
    if (uVar11 - (long)puVar10 < 0x200) {
      if (puVar10 != (undefined2 *)0x0) {
        *(undefined2 **)(param_1 + 0x68) = puVar10;
        __ZdlPv();
        uVar11 = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      uVar13 = uVar11;
      if (uVar11 < 0x101) {
        uVar13 = 0x100;
      }
      if (0x7ffffffffffffffd < uVar11) {
        uVar13 = 0x7fffffffffffffff;
      }
      if ((long)uVar13 < 0) {
        FUN_10a31f0a0();
        goto LAB_10a3201e4;
      }
      puVar10 = (undefined2 *)(uVar13 << 1);
      __Znwm();
      uVar11 = 0;
      *(undefined2 **)(param_1 + 0x60) = puVar10;
      *(undefined2 **)(param_1 + 0x70) = puVar10 + uVar13;
      do {
        puVar10[uVar11] = 0x1200;
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0x100);
LAB_10a31fbf4:
      puVar10 = puVar10 + 0x100;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x68);
      lVar20 = lVar8 - (long)puVar10;
      uVar11 = lVar20 >> 1;
      if (lVar20 != 0) {
        uVar13 = uVar11;
        puVar18 = puVar10;
        if (0xff < uVar11) {
          uVar13 = 0x100;
        }
        do {
          *puVar18 = 0x1200;
          uVar13 = uVar13 - 1;
          puVar18 = puVar18 + 1;
        } while (uVar13 != 0);
        if (0xff < uVar11) goto LAB_10a31fbf4;
      }
      uVar13 = 0;
      do {
        *(undefined2 *)(lVar8 + uVar13 * 2) = 0x1200;
        uVar13 = uVar13 + 1;
      } while (uVar13 < (0x1feU - lVar20 >> 1) + 1);
      puVar10 = (undefined2 *)(lVar8 + (0x100 - uVar11) * 2);
    }
    *(undefined2 **)(param_1 + 0x68) = puVar10;
    pcVar2 = *(char **)(param_1 + 0x38);
    for (pcVar14 = *(char **)(param_1 + 0x30); pcVar14 != pcVar2; pcVar14 = pcVar14 + 0x20) {
      cVar4 = pcVar14[0x18];
      cVar5 = pcVar14[0x17];
      if (cVar5 < '\0') {
        if (*(long *)(pcVar14 + 8) != 1) {
          if (*(long *)(pcVar14 + 8) != 2) goto LAB_10a31fc90;
          pcVar15 = *(char **)pcVar14;
          goto LAB_10a31fc4c;
        }
        pcVar15 = *(char **)pcVar14;
LAB_10a31fc74:
        if ((ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48)) <= (ulong)(long)*pcVar15)
        goto LAB_10a3201e4;
        pcVar16 = (char *)(*(long *)(param_1 + 0x48) + (long)*pcVar15);
LAB_10a31fc8c:
        *pcVar16 = cVar4;
      }
      else {
        pcVar15 = pcVar14;
        if (cVar5 == '\x02') {
LAB_10a31fc4c:
          if ((ulong)(long)*pcVar15 < (ulong)((long)puVar10 - *(long *)(param_1 + 0x60) >> 1)) {
            pcVar1 = (char *)(*(long *)(param_1 + 0x60) + (long)*pcVar15 * 2);
            pcVar16 = pcVar1 + 1;
            *pcVar1 = pcVar15[1];
            goto LAB_10a31fc8c;
          }
          goto LAB_10a3201e4;
        }
        if (cVar5 == '\x01') goto LAB_10a31fc74;
      }
LAB_10a31fc90:
    }
    if ((long)puStack_2b0 - (long)puStack_2b8 != 0) {
      lVar20 = 0;
      do {
        pbVar3 = (byte *)(puStack_2b8 + lVar20 * 3)[1];
        for (pbVar17 = (byte *)puStack_2b8[lVar20 * 3]; pbVar17 != pbVar3; pbVar17 = pbVar17 + 1) {
          *(int *)(param_1 + 0x78 + (ulong)*pbVar17 * 4) = (int)lVar20;
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 != ((long)puStack_2b0 - (long)puStack_2b8 >> 3) * -0x5555555555555555);
    }
    _memset_pattern16(param_1 + 0x478,&UNK_10e4aa690,0x400);
    uStack_2a0 = (undefined8 **)CONCAT44(uStack_2a0._4_4_,0x4050906);
    alStack_268[0] = 0;
    alStack_268[1] = 0;
    pbStack_270 = (byte *)0x0;
    FUN_10a31ef0c(&pbStack_270,&uStack_2a0,(long)&uStack_2a0 + 4,4);
    for (pbVar17 = pbStack_270; pbVar17 != (byte *)alStack_268[0]; pbVar17 = pbVar17 + 1) {
      *(undefined4 *)(param_1 + 0x478 + (ulong)*pbVar17 * 4) = 1;
    }
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    if (pbStack_270 != (byte *)0x0) {
      __ZdlPv();
    }
    func_0x00010a31f02c(&puStack_2b8);
    *(undefined8 *)(param_1 + 0x888) = 0;
    *(undefined8 *)(param_1 + 0x880) = 0;
    *(undefined8 *)(param_1 + 0x878) = 0;
    *(undefined8 *)(param_1 + 0x8a0) = 0;
    *(undefined8 *)(param_1 + 0x898) = 0;
    *(undefined8 **)(param_1 + 0x890) = (undefined8 *)(param_1 + 0x898);
    *(undefined8 *)(param_1 + 0x8b0) = 0;
    *(undefined8 *)(param_1 + 0x8a8) = 0;
    *(undefined8 *)(param_1 + 0x8c0) = 0;
    *(undefined8 *)(param_1 + 0x8b8) = 0;
    *(undefined8 *)(param_1 + 0x8d0) = 0;
    *(undefined8 *)(param_1 + 0x8c8) = 0;
    *(undefined8 *)(param_1 + 0x8d8) = 0;
    *(undefined4 *)(param_1 + 0x8e0) = *(undefined4 *)(param_3 + 0x20);
    FUN_10a320490(param_1 + 0x8c0,*(undefined8 *)(param_3 + 8));
    for (plVar19 = *(long **)(param_3 + 0x10); plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
      FUN_10a32069c(param_1 + 0x8c0,plVar19 + 2,plVar19 + 2);
    }
    *(undefined8 *)(param_1 + 0x8f0) = 0;
    *(undefined8 *)(param_1 + 0x8e8) = 0;
    *(undefined8 *)(param_1 + 0x900) = 0;
    *(undefined8 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0x908) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x910) = 0;
    *(undefined8 *)(param_1 + 0x920) = 0;
    *(undefined8 *)(param_1 + 0x918) = 0;
    *(undefined8 *)(param_1 + 0x928) = 45000;
    if ((-1 < *(char *)(param_1 + 0x88f)) ||
       ((*(ulong *)(param_1 + 0x888) & 0x7fffffffffffffff) - 1 < 45000)) {
      FUN_10a1057dc((undefined8 *)(param_1 + 0x878),0xafcf);
    }
    pbStack_270 = (byte *)0x10f20833c;
    alStack_268[1] = 1;
    alStack_268[0] = 4;
    FUN_10a3232f8(param_1 + 0x8c0,"true",4,&pbStack_270);
    pbStack_270 = &DAT_10f6842c6;
    alStack_268[1] = 0;
    alStack_268[0] = 5;
    FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f6842c6,5,&pbStack_270);
    if (*param_2 == 1) {
      pbStack_270 = &UNK_10f610b3e;
      alStack_268[1] = 1;
      alStack_268[0] = 5;
      FUN_10a3232f8(param_1 + 0x8c0,&UNK_10f610b3e,5,&pbStack_270);
      pbStack_270 = &UNK_10f610487;
      alStack_268[1] = 100;
      alStack_268[0] = 0xb;
      FUN_10a3232f8(param_1 + 0x8c0,&UNK_10f610487,0xb,&pbStack_270);
    }
    else {
      pbStack_270 = &UNK_10f610487;
      alStack_268[1] = 0x78;
      alStack_268[0] = 0xb;
      FUN_10a3232f8(param_1 + 0x8c0,&UNK_10f610487,0xb,&pbStack_270);
    }
    alStack_268[1] = (long)param_2[0xc];
    pbStack_270 = &UNK_10f64ed61;
    alStack_268[0] = 0x1d;
    FUN_10a3232f8(param_1 + 0x8c0,&UNK_10f64ed61,0x1d,&pbStack_270);
    if ((param_2[0xc] == 1) && ((*param_2 & 1) != 0)) {
      pbStack_270 = &UNK_10f610b6d;
      alStack_268[1] = 1;
      alStack_268[0] = 0x1a;
      FUN_10a3232f8(param_1 + 0x8c0,&UNK_10f610b6d,0x1a,&pbStack_270);
    }
    if (param_2[0x11] == 1) {
      pbStack_270 = &DAT_10f560328;
      alStack_268[1] = 1;
      alStack_268[0] = 0x1f;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f560328,0x1f,&pbStack_270);
    }
    if (param_2[0x10] == 1) {
      pbStack_270 = &DAT_10f560348;
      alStack_268[1] = 1;
      alStack_268[0] = 0x1f;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f560348,0x1f,&pbStack_270);
    }
    if (param_2[0x12] == 1) {
      pbStack_270 = &DAT_10f613b69;
      alStack_268[1] = 1;
      alStack_268[0] = 0x1b;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f613b69,0x1b,&pbStack_270);
    }
    if (param_2[0x15] == 1) {
      pbStack_270 = &DAT_10f613fb9;
      alStack_268[1] = 1;
      alStack_268[0] = 0x14;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f613fb9,0x14,&pbStack_270);
    }
    if (param_2[0x13] == 1) {
      pbStack_270 = &DAT_10f613f4e;
      alStack_268[1] = 1;
      alStack_268[0] = 0x19;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f613f4e,0x19,&pbStack_270);
    }
    if (param_2[0x14] == 1) {
      pbStack_270 = &DAT_10f613786;
      alStack_268[1] = 1;
      alStack_268[0] = 0x19;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f613786,0x19,&pbStack_270);
    }
    if (param_2[0x17] == 1) {
      pbStack_270 = &DAT_10f433091;
      alStack_268[1] = 1;
      alStack_268[0] = 0x15;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f433091,0x15,&pbStack_270);
    }
    if (param_2[0x18] == 1) {
      pbStack_270 = &DAT_10f43307b;
      alStack_268[1] = 1;
      alStack_268[0] = 0x15;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f43307b,0x15,&pbStack_270);
    }
    if (param_2[0x1a] == 1) {
      pbStack_270 = &DAT_10f560ff8;
      alStack_268[1] = 1;
      alStack_268[0] = 0x19;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f560ff8,0x19,&pbStack_270);
    }
    if (param_2[0x19] == 1) {
      pbStack_270 = &DAT_10f5603f0;
      alStack_268[1] = 1;
      alStack_268[0] = 0x16;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f5603f0,0x16,&pbStack_270);
    }
    if (param_2[0x1b] == 1) {
      pbStack_270 = &DAT_10f613dee;
      alStack_268[1] = 1;
      alStack_268[0] = 0x12;
      FUN_10a3232f8(param_1 + 0x8c0,&DAT_10f613dee,0x12,&pbStack_270);
    }
    *(undefined1 *)(param_1 + 0x910) = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  FUN_10a31eef8();
LAB_10a3201e4:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a3201e8);
  (*pcVar7)();
}



/* Entry: 10a320428; end: 10a32048f;  */

long * FUN_10a320428(long *param_1)

{
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  FUN_10a31f0b4(param_1 + 6);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a320490; end: 10a32055f;  */

undefined1  [16] FUN_10a320490(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x26;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  plVar8 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = param_2;
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 > param_2 || param_2 == plVar13) {
    if (plVar13 <= param_2) {
LAB_10a320550:
      auVar14._8_8_ = plVar5;
      auVar14._0_8_ = plVar8;
      return auVar14;
    }
    plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (param_2 <= plVar8) {
      param_2 = plVar8;
    }
    if (plVar13 <= param_2) goto LAB_10a320550;
  }
  plVar8 = param_2;
  if (param_2 == (long *)0x0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
      plVar8 = param_2;
    }
    param_1[1] = 0;
LAB_10a32068c:
    auVar15._8_8_ = plVar8;
    auVar15._0_8_ = lVar2;
    return auVar15;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm();
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar13 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar13 = (long *)((ulong)plVar13 & uVar6);
      }
      else if (param_2 <= plVar13) {
        uVar9 = 0;
        if (param_2 != (long *)0x0) {
          uVar9 = (ulong)plVar13 / (ulong)param_2;
        }
        plVar13 = (long *)((long)plVar13 - uVar9 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar13 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar5;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar6);
        }
        else if (param_2 <= plVar12) {
          uVar9 = 0;
          if (param_2 != (long *)0x0) {
            uVar9 = (ulong)plVar12 / (ulong)param_2;
          }
          plVar12 = (long *)((long)plVar12 - uVar9 * (long)param_2);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar13) {
          lVar1 = *param_1;
          if (*(long *)(lVar1 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar1 + (long)plVar12 * 8) = plVar5;
            plVar13 = plVar12;
          }
          else {
            *plVar5 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar1 + (long)plVar12 * 8);
            **(long **)(lVar1 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar5;
          }
        }
        plVar5 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
    goto LAB_10a32068c;
  }
  func_0x000109ffded8();
  plVar8 = param_1;
  FUN_10a054838();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      unaff_x26 = (long *)(uVar6 & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar5 <= plVar8) {
        uVar9 = 0;
        if (plVar5 != (long *)0x0) {
          uVar9 = (ulong)plVar8 / (ulong)plVar5;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar9 * (long)plVar5);
      }
    }
    puVar7 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar7, plVar13 != (long *)0x0)) {
      lVar2 = *param_2;
      lVar1 = param_2[1];
      do {
        plVar10 = (long *)plVar13[1];
        if (plVar10 == plVar8) {
          if (plVar13[3] == lVar1) {
            lVar3 = plVar13[2];
            _memcmp(lVar3,lVar2,lVar1);
            if ((int)lVar3 == 0) {
              uVar4 = 0;
              goto LAB_10a3208a4;
            }
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar6);
          }
          else if (plVar5 <= plVar10) {
            uVar9 = 0;
            if (plVar5 != (long *)0x0) {
              uVar9 = (ulong)plVar10 / (ulong)plVar5;
            }
            plVar10 = (long *)((long)plVar10 - uVar9 * (long)plVar5);
          }
          if (plVar10 != unaff_x26) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  plVar13 = (long *)0x28;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = (long)plVar8;
  lVar2 = *param_3;
  plVar13[3] = param_3[1];
  plVar13[2] = lVar2;
  plVar13[4] = param_3[2];
  if ((plVar5 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar5 < (float)(param_1[3] + 1))
     ) {
    uVar6 = 1;
    if ((long *)0x2 < plVar5) {
      uVar6 = (ulong)(((ulong)plVar5 & (long)plVar5 - 1U) != 0);
    }
    uVar6 = uVar6 | (long)plVar5 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    FUN_10a320490(param_1,uVar6);
    plVar5 = (long *)param_1[1];
    if (((ulong)plVar5 & (long)plVar5 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar5 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar5 <= plVar8) {
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          uVar6 = (ulong)plVar8 / (ulong)plVar5;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar6 * (long)plVar5);
      }
    }
  }
  lVar2 = *param_1;
  plVar8 = *(long **)(lVar2 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar13 = *plVar8;
    *plVar8 = (long)plVar13;
    *(long **)(lVar2 + (long)unaff_x26 * 8) = plVar8;
    if (*plVar13 == 0) goto LAB_10a320894;
    plVar8 = *(long **)(*plVar13 + 8);
    if (((ulong)plVar5 & (long)plVar5 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar5 - 1U);
    }
    else if (plVar5 <= plVar8) {
      uVar6 = 0;
      if (plVar5 != (long *)0x0) {
        uVar6 = (ulong)plVar8 / (ulong)plVar5;
      }
      plVar8 = (long *)((long)plVar8 - uVar6 * (long)plVar5);
    }
    plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
  }
  else {
    *plVar13 = *plVar8;
  }
  *plVar8 = (long)plVar13;
LAB_10a320894:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10a3208a4:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = plVar13;
  return auVar16;
}



/* Entry: 10a320560; end: 10a32069b;  */

undefined1  [16] FUN_10a320560(long *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *unaff_x26;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar6 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
      puVar6 = param_2;
    }
    param_1[1] = 0;
LAB_10a32068c:
    auVar13._8_8_ = puVar6;
    auVar13._0_8_ = lVar2;
    return auVar13;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm();
    lVar2 = *param_1;
    *param_1 = lVar1;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    puVar4 = (undefined8 *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)puVar4 * 8) = 0;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    } while (param_2 != puVar4);
    plVar8 = (long *)param_1[2];
    if (plVar8 != (long *)0x0) {
      puVar4 = (undefined8 *)plVar8[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        puVar4 = (undefined8 *)((ulong)puVar4 & uVar5);
      }
      else if (param_2 <= puVar4) {
        uVar9 = 0;
        if (param_2 != (undefined8 *)0x0) {
          uVar9 = (ulong)puVar4 / (ulong)param_2;
        }
        puVar4 = (undefined8 *)((long)puVar4 - uVar9 * (long)param_2);
      }
      *(long **)(*param_1 + (long)puVar4 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        puVar11 = (undefined8 *)plVar10[1];
        if (((ulong)param_2 & uVar5) == 0) {
          puVar11 = (undefined8 *)((ulong)puVar11 & uVar5);
        }
        else if (param_2 <= puVar11) {
          uVar9 = 0;
          if (param_2 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar11 / (ulong)param_2;
          }
          puVar11 = (undefined8 *)((long)puVar11 - uVar9 * (long)param_2);
        }
        plVar12 = plVar10;
        if (puVar11 != puVar4) {
          lVar1 = *param_1;
          if (*(long *)(lVar1 + (long)puVar11 * 8) == 0) {
            *(long **)(lVar1 + (long)puVar11 * 8) = plVar8;
            puVar4 = puVar11;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar1 + (long)puVar11 * 8);
            **(long **)(lVar1 + (long)puVar11 * 8) = (long)plVar10;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar10 = (long *)*plVar12;
      }
    }
    goto LAB_10a32068c;
  }
  func_0x000109ffded8();
  plVar8 = param_1;
  FUN_10a054838();
  plVar10 = (long *)param_1[1];
  if (plVar10 != (long *)0x0) {
    uVar5 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar5) == 0) {
      unaff_x26 = (long *)(uVar5 & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar10 <= plVar8) {
        uVar9 = 0;
        if (plVar10 != (long *)0x0) {
          uVar9 = (ulong)plVar8 / (ulong)plVar10;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar9 * (long)plVar10);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar6, plVar12 != (long *)0x0)) {
      uVar3 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar12[1];
        if (plVar7 == plVar8) {
          if (plVar12[3] == lVar2) {
            lVar1 = plVar12[2];
            _memcmp(lVar1,uVar3,lVar2);
            if ((int)lVar1 == 0) {
              uVar3 = 0;
              goto LAB_10a3208a4;
            }
          }
        }
        else {
          if (((ulong)plVar10 & uVar5) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar5);
          }
          else if (plVar10 <= plVar7) {
            uVar9 = 0;
            if (plVar10 != (long *)0x0) {
              uVar9 = (ulong)plVar7 / (ulong)plVar10;
            }
            plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar10);
          }
          if (plVar7 != unaff_x26) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  plVar12 = (long *)0x28;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar8;
  lVar2 = *param_3;
  plVar12[3] = param_3[1];
  plVar12[2] = lVar2;
  plVar12[4] = param_3[2];
  if ((plVar10 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar10 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if ((long *)0x2 < plVar10) {
      uVar5 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
    }
    uVar5 = uVar5 | (long)plVar10 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_10a320490(param_1,uVar5);
    plVar10 = (long *)param_1[1];
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar10 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar10 <= plVar8) {
        uVar5 = 0;
        if (plVar10 != (long *)0x0) {
          uVar5 = (ulong)plVar8 / (ulong)plVar10;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
      }
    }
  }
  lVar2 = *param_1;
  plVar8 = *(long **)(lVar2 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
    *(long **)(lVar2 + (long)unaff_x26 * 8) = plVar8;
    if (*plVar12 == 0) goto LAB_10a320894;
    plVar8 = *(long **)(*plVar12 + 8);
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar10 - 1U);
    }
    else if (plVar10 <= plVar8) {
      uVar5 = 0;
      if (plVar10 != (long *)0x0) {
        uVar5 = (ulong)plVar8 / (ulong)plVar10;
      }
      plVar8 = (long *)((long)plVar8 - uVar5 * (long)plVar10);
    }
    plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
  }
  else {
    *plVar12 = *plVar8;
  }
  *plVar8 = (long)plVar12;
LAB_10a320894:
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
LAB_10a3208a4:
  auVar14._8_8_ = uVar3;
  auVar14._0_8_ = plVar12;
  return auVar14;
}



/* Entry: 10a32069c; end: 10a3208df;  */

undefined1  [16] FUN_10a32069c(long *param_1,undefined8 *param_2,long *param_3)

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
  long *unaff_x26;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  plVar5 = param_1;
  FUN_10a054838(param_1,*param_2,param_2[1]);
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x26 = (long *)(uVar10 & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar9 <= plVar5) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar6 * (long)plVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
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
              goto LAB_10a3208a4;
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
          if (plVar4 != unaff_x26) break;
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
  plVar8[4] = param_3[2];
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
    FUN_10a320490(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar9 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar9 <= plVar5) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_10a320894;
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
LAB_10a320894:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a3208a4:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a3208e0; end: 10a3209f7;  */

long * FUN_10a3208e0(long *param_1)

{
  func_0x000107c2826c(param_1 + 0x11d);
  func_0x00010a1954dc(param_1 + 0x118);
  if (param_1[0x115] != 0) {
    param_1[0x116] = param_1[0x115];
    __ZdlPv();
  }
  func_0x000107c34f24(param_1 + 0x112,param_1[0x113]);
  if (*(char *)((long)param_1 + 0x88f) < '\0') {
    __ZdlPv(param_1[0x10f]);
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  FUN_10a31f0b4(param_1 + 6);
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a3209f8; end: 10a320abf;  */

long * FUN_10a3209f8(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_10a320a68;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_10a320a68:
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      __ZdlPv(*puVar4);
      puVar4 = puVar5;
    } while (puVar5 != puVar1);
    lVar3 = param_1[2];
    if (lVar3 != param_1[1]) {
      param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a320ac0; end: 10a320c63;  */

long FUN_10a320ac0(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long alStack_98 [2];
  char cStack_81;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 **ppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_40;
  long *plStack_38;
  undefined8 **ppuStack_30;
  long lStack_28;
  
  param_1 = param_1 + param_2 * 0x10;
  plVar7 = *(long **)(param_1 + 0x50);
  lVar6 = *(long *)(param_1 + 0x48);
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lStack_40 = lVar6;
  plStack_38 = plVar7;
  __ZNSt3__19to_stringEi(alStack_98,param_2);
  plVar4 = alStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (plVar4,0,&UNK_10f64ee24,0x17);
  lStack_78 = plVar4[1];
  lStack_80 = *plVar4;
  lStack_70 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  plVar4 = &lStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar4,&UNK_10f64676f,10);
  lStack_58 = plVar4[1];
  ppuStack_60 = (undefined8 **)*plVar4;
  uStack_50 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  lStack_28 = (long)uStack_50._7_1_;
  if (lStack_28 < 0) {
    ppuStack_30 = ppuStack_60;
    lStack_28 = lStack_58;
    if (lVar6 != 0) {
      __ZdlPv();
      goto LAB_10a320b94;
    }
  }
  else {
    ppuStack_30 = &ppuStack_60;
    if (lVar6 != 0) {
LAB_10a320b94:
      if (lStack_70 < 0) {
        __ZdlPv(lStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      if (plVar7 != (long *)0x0) {
        plVar4 = plVar7 + 1;
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      return lVar6;
    }
  }
  FUN_10a0edfc4(&ppuStack_30);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a320c08);
  (*pcVar3)();
}



/* Entry: 10a320c64; end: 10a320c93;  */

void FUN_10a320c64(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  FUN_10a320c94();
                    /* WARNING: Could not recover jumptable at 0x00010a320c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a320c94; end: 10a320dc3;  */

void FUN_10a320c94(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a320d98);
    (*pcVar4)();
  }
  lVar7 = param_1[5];
  param_1[5] = 0;
  lStack_38 = lVar7;
  if (*param_1 == 0) {
    ppuVar5 = &PTR_PTR_113301118;
    FUN_10ae079a0(0,&PTR_PTR_113301118);
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113301118);
  }
  else if (*(long *)(*(long *)(*(long *)param_1[2] + 0x50) + 0x10) != 0) {
    func_0x00010a301cd0();
  }
  plVar1 = (long *)(lVar7 + 0x10);
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar7 + 0x18);
        goto LAB_10a320d44;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a320d44:
      if ((char)param_1[4] == '\x01') {
        FUN_10a325b2c(param_1);
        *(undefined1 *)(param_1 + 4) = 0;
      }
      lStack_38 = 0;
      if ((lVar7 != 0) && (func_0x0001092b4274(&lStack_38,lVar7), lStack_38 != 0)) {
        func_0x0001092b4274(&lStack_38);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a320dc4; end: 10a320f9b;  */

undefined8 * FUN_10a320dc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3e58;
  if (param_1[0x19] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10a325b2c(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a320f9c; end: 10a3212df;  */

/* WARNING: Removing unreachable block (ram,0x00010a3210ec) */
/* WARNING: Removing unreachable block (ram,0x00010a3210f0) */
/* WARNING: Removing unreachable block (ram,0x00010a3210f8) */
/* WARNING: Removing unreachable block (ram,0x00010a321100) */
/* WARNING: Removing unreachable block (ram,0x00010a321104) */
/* WARNING: Removing unreachable block (ram,0x00010a321124) */
/* WARNING: Removing unreachable block (ram,0x00010a321128) */
/* WARNING: Removing unreachable block (ram,0x00010a321130) */
/* WARNING: Removing unreachable block (ram,0x00010a321138) */
/* WARNING: Removing unreachable block (ram,0x00010a32113c) */

void FUN_10a320f9c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plStack_90;
  long *plStack_88;
  long lStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a321274);
    (*pcVar4)();
  }
  lVar9 = param_1[0xf];
  param_1[0xf] = 0;
  puVar8 = (ulong *)(param_1 + 2);
  uVar10 = *(undefined8 *)(*puVar8 + 0x18);
  lVar7 = param_1[0xc];
  plStack_88 = (long *)0xa8;
  lStack_78 = lVar9;
  __Znwm();
  plStack_88[1] = 0;
  plStack_88[2] = 0;
  *plStack_88 = (long)&PTR_FUN_110baa4d8;
  plStack_90 = plStack_88 + 3;
  FUN_10a1b2a84(plStack_90,uVar10,(int)lVar7,0);
  plVar6 = (long *)*puVar8;
  (**(code **)(*plVar6 + 0x28))();
  iVar5 = (int)plVar6;
  if ((((ulong)plVar6 & 1) == 0) && (FUN_10ad4bd78(), 2999 < iVar5)) {
    FUN_10a301c14(*(undefined8 *)(*param_1 + 0x10));
  }
  else {
    FUN_10a301b88(*(undefined8 *)(*param_1 + 0x10));
  }
  plVar6 = (long *)*puVar8;
  (**(code **)(*plVar6 + 0x10))
            (plVar6,plStack_88[8],plStack_88[6],0,*(undefined4 *)((long)plVar6 + 0x1c));
  if (*(char *)(param_1[5] + 8) == '\x01') {
    plStack_60 = plStack_90;
    plStack_58 = plStack_88;
    (*(code *)param_1[4])(&plStack_70,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plStack_88 = plStack_68;
    plStack_90 = plStack_70;
    plStack_68 = (long *)0x0;
    plStack_70 = (long *)0x0;
  }
  plVar6 = (long *)(lVar9 + 0x10);
  do {
    lVar7 = *plVar6;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        if (*(char *)(lVar9 + 0xa8) == '\x01') {
          FUN_10a0d92c8(lVar9 + 0x98);
        }
        *(long **)(lVar9 + 0xa0) = plStack_88;
        *(long **)(lVar9 + 0x98) = plStack_90;
        *(undefined1 *)(lVar9 + 0xa8) = 1;
        *(undefined8 *)(lVar9 + 0x10) = 2;
        FUN_109d1b4dc(lVar9 + 0x18);
        goto LAB_10a321200;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar7 >> 1 & 1) != 0) {
      if (plStack_88 != (long *)0x0) {
        plVar6 = plStack_88 + 1;
        do {
          lVar7 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
        }
      }
LAB_10a321200:
      if ((char)param_1[0xe] == '\x01') {
        (**(code **)param_1[5])();
        func_0x00010a09db0c(puVar8);
        FUN_10a325b2c(param_1);
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      lVar7 = lStack_78;
      lStack_78 = 0;
      if ((lVar7 != 0) && (func_0x0001092b4274(&lStack_78), lStack_78 != 0)) {
        func_0x0001092b4274(&lStack_78);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a3212e0; end: 10a321687;  */

undefined8 * FUN_10a3212e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3ec8;
  if (param_1[0x25] != 0) {
    func_0x0001092b4274(param_1 + 0x25);
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    (**(code **)param_1[0x1b])(param_1 + 0x1b);
    func_0x00010a09db0c(param_1 + 0x18);
    FUN_10a325b2c(param_1 + 0x16);
  }
  *param_1 = &PTR_DAT_110bc3f18;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10a0d92c8(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a321688; end: 10a32180b;  */

long * FUN_10a321688(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar7 = puVar5;
  if (puVar2 != puVar5) {
    uVar4 = param_1[4];
    plVar6 = puVar5 + uVar4 / 0xaa;
    plVar8 = (long *)(*plVar6 + (uVar4 % 0xaa) * 0x18);
    plVar9 = (long *)(puVar5[(param_1[5] + uVar4) / 0xaa] + ((param_1[5] + uVar4) % 0xaa) * 0x18);
    puVar7 = puVar2;
    if (plVar8 != plVar9) {
      do {
        FUN_10a232e34(plVar8 + 1);
        plVar1 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        plVar8 = plVar8 + 3;
        if ((long)plVar8 - *plVar6 == 0xff0) {
          plVar6 = plVar6 + 1;
          plVar8 = (long *)*plVar6;
        }
      } while (plVar8 != plVar9);
      puVar5 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar7 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar7 - (long)puVar5;
  while (uVar4 = lVar3 >> 3, 2 < uVar4) {
    __ZdlPv(*puVar5);
    puVar2 = (undefined8 *)param_1[2];
    puVar5 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar5;
    puVar7 = puVar2;
    lVar3 = (long)puVar2 - (long)puVar5;
  }
  if (uVar4 == 1) {
    lVar3 = 0x55;
  }
  else {
    if (uVar4 != 2) goto LAB_10a3217b0;
    lVar3 = 0xaa;
  }
  param_1[4] = lVar3;
LAB_10a3217b0:
  if (puVar5 != puVar7) {
    do {
      puVar2 = puVar5 + 1;
      __ZdlPv(*puVar5);
      puVar5 = puVar2;
    } while (puVar2 != puVar7);
    puVar7 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar7) {
    param_1[2] = (long)puVar2 + ((long)puVar7 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a32180c; end: 10a321853;  */

undefined8 * FUN_10a32180c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3990;
  func_0x00010a32162c(param_1 + 0xf);
  FUN_10a321688(param_1 + 9);
  FUN_10a325960(param_1 + 3);
  return param_1;
}



/* Entry: 10a321854; end: 10a3218b7;  */

void FUN_10a321854(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar2 != param_2) {
    plVar1 = *(long **)(lVar2 + -0x10);
    *(undefined8 *)(lVar2 + -0x10) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar2 = lVar2 + -0x20;
    FUN_10a232e34(lVar2);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a3218b8; end: 10a321b8f;  */

long * FUN_10a3218b8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  puVar5 = puVar6;
  if (puVar2 != puVar6) {
    uVar3 = param_1[4];
    plVar7 = puVar6 + (uVar3 >> 7);
    lVar4 = *plVar7 + (uVar3 & 0x7f) * 0x20;
    lVar1 = puVar6[param_1[5] + uVar3 >> 7] + (param_1[5] + uVar3 & 0x7f) * 0x20;
    puVar5 = puVar2;
    if (lVar4 != lVar1) {
      do {
        FUN_10a232e34(lVar4 + 0x10);
        FUN_10a0d92c8(lVar4);
        lVar4 = lVar4 + 0x20;
        if (lVar4 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar4 = *plVar7;
        }
      } while (lVar4 != lVar1);
      puVar6 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)param_1[2];
      puVar5 = puVar2;
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar5 - (long)puVar6;
  while (uVar3 = lVar4 >> 3, 2 < uVar3) {
    __ZdlPv(*puVar6);
    puVar2 = (undefined8 *)param_1[2];
    puVar6 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar6;
    puVar5 = puVar2;
    lVar4 = (long)puVar2 - (long)puVar6;
  }
  if (uVar3 == 1) {
    lVar4 = 0x40;
  }
  else {
    if (uVar3 != 2) goto LAB_10a3219b8;
    lVar4 = 0x80;
  }
  param_1[4] = lVar4;
LAB_10a3219b8:
  if (puVar6 != puVar5) {
    do {
      puVar2 = puVar6 + 1;
      __ZdlPv(*puVar6);
      puVar6 = puVar2;
    } while (puVar2 != puVar5);
    puVar5 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
  }
  if (puVar2 != puVar5) {
    param_1[2] = (long)puVar2 + ((long)puVar5 + (7 - (long)puVar2) & 0xfffffffffffffff8U);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a321b90; end: 10a321d53;  */

void FUN_10a321b90(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a321854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10a321d54; end: 10a321deb;  */

undefined8 * FUN_10a321d54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = param_2;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  uVar1 = param_1[1];
  func_0x000107c2b054(auStack_48,param_3);
  FUN_10a1ad018(param_2,uVar1,auStack_48,param_1 + 3);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a321dec; end: 10a321e43;  */

long FUN_10a321dec(long param_1)

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



/* Entry: 10a321e44; end: 10a321e77;  */

void FUN_10a321e44(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  FUN_10ad4bd78();
  if (iVar1 < 3000) {
    FUN_10ad4ae18();
    uRam0000000113835380 = *(undefined1 *)(CONCAT44(uVar2,iVar1) + 9);
  }
  else {
    uRam0000000113835380 = 1;
  }
  return;
}



/* Entry: 10a321e78; end: 10a321eab;  */

undefined * FUN_10a321e78(void)

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
  
  ppuVar6 = &PTR_PTR_113301218;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0(0);
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



/* Entry: 10a321eac; end: 10a321efb;  */

void FUN_10a321eac(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010a3060c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a321efc; end: 10a32201b;  */

void FUN_10a321efc(uint param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar3 = param_1;
  FUN_10ad4bc5c();
  if (uVar3 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    pcStack_68 = "";
    uStack_60 = 0;
    FUN_10a304b28(&pppuStack_58,&pcStack_68);
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar4 = (int)ppuVar5;
    if ((param_1 != 0) && (__ZSt19uncaught_exceptionsv(), iVar4 == 0)) {
      if ((uVar3 >> 5 & 1) == 0) {
        FUN_10a32201c(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a321ffc);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return;
}



/* Entry: 10a32201c; end: 10a3220eb;  */

void FUN_10a32201c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a002a94(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110bc4668;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bc4668;
  ___cxa_throw(puVar2,&PTR_DAT_110bc4640,FUN_10a3220ec);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3220d4);
  (*pcVar1)();
}



/* Entry: 10a3220ec; end: 10a3220ef;  */

void FUN_10a3220ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a3220f0; end: 10a32212b;  */

void FUN_10a3220f0(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a32212c; end: 10a32212f;  */

long FUN_10a32212c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a3221a8(param_1 + 0x30);
  func_0x00010a322250(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x60) = 0;
  func_0x00010a3222ac(param_1 + 8);
  return param_1;
}



/* Entry: 10a322130; end: 10a3221a3;  */

long FUN_10a322130(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a3221a8(param_1 + 0x30);
  func_0x00010a322250(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x60) = 0;
  func_0x00010a3222ac(param_1 + 8);
  return param_1;
}



/* Entry: 10a3221a4; end: 10a3221a7;  */

undefined8 * FUN_10a3221a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3f70;
  FUN_10a3221a8(param_1 + 5);
  func_0x00010a322250(param_1 + 2);
  FUN_10a322318(param_1 + 5);
  func_0x00010a322250(param_1 + 2);
  return param_1;
}



/* Entry: 10a3221a8; end: 10a3222fb;  */

void FUN_10a3221a8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a3221fc(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a3222fc; end: 10a32230f;  */

void FUN_10a3222fc(void)

{
  func_0x00010a3222ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a322310; end: 10a322317;  */

void FUN_10a322310(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a322318; end: 10a32234f;  */

long * FUN_10a322318(long *param_1)

{
  long lVar1;
  
  func_0x00010a3221fc(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a322350; end: 10a322377;  */

void FUN_10a322350(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10a32237c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a322378; end: 10a32237b;  */

long FUN_10a322378(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a3223f4(param_1 + 0x30);
  func_0x00010a322250(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x60) = 0;
  func_0x00010a32249c(param_1 + 8);
  return param_1;
}



/* Entry: 10a32237c; end: 10a3223ef;  */

long FUN_10a32237c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 0x60);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  while ((bVar2 & 1) != 0) {
    do {
    } while ((*pbVar1 & 1) != 0);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a3223f4(param_1 + 0x30);
  func_0x00010a322250(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x60) = 0;
  func_0x00010a32249c(param_1 + 8);
  return param_1;
}



/* Entry: 10a3223f0; end: 10a3223f3;  */

undefined8 * FUN_10a3223f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3fb8;
  FUN_10a3223f4(param_1 + 5);
  func_0x00010a322250(param_1 + 2);
  FUN_10a322508(param_1 + 5);
  func_0x00010a322250(param_1 + 2);
  return param_1;
}



/* Entry: 10a3223f4; end: 10a3224eb;  */

void FUN_10a3223f4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a322448(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a3224ec; end: 10a3224ff;  */

void FUN_10a3224ec(void)

{
  func_0x00010a32249c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a322500; end: 10a322507;  */

void FUN_10a322500(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a322508; end: 10a32253f;  */

long * FUN_10a322508(long *param_1)

{
  long lVar1;
  
  func_0x00010a322448(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a322540; end: 10a322567;  */

void FUN_10a322540(void)

{
  FUN_10a322130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a322568; end: 10a3225d7;  */

void FUN_10a322568(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x168;
  __Znwm();
  FUN_10a3225d8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a3225d8; end: 10a322627;  */

undefined8 *
FUN_10a3225d8(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined4 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc4090;
  FUN_10a31da38(param_1 + 3,*param_2,param_3,*param_4);
  return param_1;
}



/* Entry: 10a322628; end: 10a322637;  */

void FUN_10a322628(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc4090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a322638; end: 10a322657;  */

void FUN_10a322638(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc4090;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a322658; end: 10a322663;  */

long FUN_10a322658(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x140;
  FUN_10a188534(&lStack_28);
  if (*(long *)(param_1 + 0x128) != 0) {
    *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x128);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x110;
  FUN_10a1885a4(&lStack_28);
  lStack_28 = param_1 + 0xf8;
  func_0x00010a1885e4(&lStack_28);
  lStack_28 = param_1 + 0xe0;
  FUN_10a188624(&lStack_28);
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(char *)(param_1 + 0xaf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x80);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  return param_1 + 0x58;
}



/* Entry: 10a322664; end: 10a3226bb;  */

long FUN_10a322664(long param_1)

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



/* Entry: 10a3226bc; end: 10a32285b;  */

void FUN_10a3226bc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  char cStack_49;
  char cStack_48;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar1 = 1;
  FUN_10a303694();
  uStack_60 = 0;
  cStack_48 = '\0';
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  lVar5 = (long)*(char *)((long)puVar2 + 0x17);
  puVar3 = puVar2;
  if (lVar5 < 0) {
    puVar3 = (undefined8 *)*puVar2;
    lVar5 = puVar2[1];
  }
  FUN_10a30a6ac(puVar3,lVar5,0x8b31,&uStack_60,1);
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  lVar5 = (long)*(char *)((long)puVar4 + 0x17);
  puVar2 = puVar4;
  if (lVar5 < 0) {
    puVar2 = (undefined8 *)*puVar4;
    lVar5 = puVar4[1];
  }
  FUN_10a30a6ac(puVar2,lVar5,0x8b30,&uStack_60,1);
  if ((ulong)puVar3 >> 0x20 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    if (((ulong)puVar2 >> 0x20 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = puVar2;
      _glCreateProgram();
      _glAttachShader();
      _glAttachShader(puVar4,puVar2);
      _glLinkProgram(puVar4);
      _glDetachShader(puVar4,puVar3);
      _glDetachShader(puVar4,puVar2);
    }
    _glDeleteShader(puVar3);
  }
  if (((ulong)puVar2 >> 0x20 & 1) != 0) {
    _glDeleteShader(puVar2);
  }
  if ((int)puVar4 != 0) {
    if (*(int *)(lVar1 + 0xa4) == (int)puVar4) {
      *(undefined4 *)(lVar1 + 0xa4) = 0xffffffff;
    }
    _glDeleteProgram(puVar4);
  }
  if ((cStack_48 == '\x01') && (cStack_49 < '\0')) {
    __ZdlPv(CONCAT71(uStack_5f,uStack_60));
  }
  uStack_60 = 1;
  func_0x000108820bcc(uVar6,&uStack_60);
  return;
}



/* Entry: 10a32285c; end: 10a322887;  */

void FUN_10a32285c(void)

{
  return;
}



/* Entry: 10a322888; end: 10a3228bb;  */

void FUN_10a322888(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bc40f8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a3228bc; end: 10a3228df;  */

void FUN_10a3228bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bc40f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a3228e0; end: 10a32291b;  */

long FUN_10a3228e0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc4158);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a32291c; end: 10a32292f;  */

undefined ** FUN_10a32291c(void)

{
  return &PTR_DAT_110bc4158;
}



/* Entry: 10a322930; end: 10a322963;  */

void FUN_10a322930(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bc4178;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a322964; end: 10a322987;  */

void FUN_10a322964(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bc4178;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a322988; end: 10a3229c3;  */

long FUN_10a322988(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc41d8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a3229c4; end: 10a3229d7;  */

undefined ** FUN_10a3229c4(void)

{
  return &PTR_DAT_110bc41d8;
}



/* Entry: 10a3229d8; end: 10a322a0b;  */

void FUN_10a3229d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110bc41f8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10a322a0c; end: 10a322a2f;  */

void FUN_10a322a0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110bc41f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10a322a30; end: 10a322a6b;  */

long FUN_10a322a30(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc4258);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a322a6c; end: 10a322a77;  */

undefined ** FUN_10a322a6c(void)

{
  return &PTR_DAT_110bc4258;
}



/* Entry: 10a322a78; end: 10a322ae7;  */

void FUN_10a322a78(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x168;
  __Znwm();
  FUN_10a322ae8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a322ae8; end: 10a322b37;  */

undefined8 *
FUN_10a322ae8(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,undefined4 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc4090;
  FUN_10a31da38(param_1 + 3,*param_2,param_3,*param_4);
  return param_1;
}



/* Entry: 10a322b38; end: 10a322b8f;  */

long FUN_10a322b38(long param_1)

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



/* Entry: 10a322b90; end: 10a322c0f;  */

void FUN_10a322b90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x570;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110baa010;
  FUN_10a15f040(puVar2,param_2,param_3,param_4);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a322c10; end: 10a322c1f;  */

void FUN_10a322c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc4278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a322c20; end: 10a322c3f;  */

void FUN_10a322c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc4278;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a322c40; end: 10a322c4b;  */

ulong FUN_10a322c40(long param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *******pppppppuVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  ulong uVar10;
  long lVar11;
  undefined8 ******ppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar4 = 1;
  FUN_10a303694();
  if (*(int *)(lVar4 + 0x274) == 0) {
    FUN_10ad4bc5c();
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    _glIsProgram();
    if (iVar3 != 0) {
      if (*(int *)(lVar4 + 0xa4) == *(int *)(param_1 + 0x1c)) {
        *(undefined4 *)(lVar4 + 0xa4) = 0xffffffff;
      }
      _glDeleteProgram();
      goto LAB_10ab93660;
    }
    FUN_10ab937c8(&UNK_10f695225,0x28);
LAB_10ab937a4:
    FUN_10ab937c8(&UNK_10f69524e,0x2e);
LAB_10ab937b4:
    puVar8 = &UNK_10f69527d;
    uVar10 = 0x30;
    FUN_10ab937c8();
    func_0x000104bd46a0();
    if ((bRam000000011330a9e8 & 1) != 0) goto LAB_10ab937ec;
    do {
      __ZSt9terminatev();
LAB_10ab937ec:
      if (0x7ffffffffffffff7 < uVar10) {
        func_0x000109ffde50();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab93804);
        (*pcVar2)();
      }
      if (uVar10 < 0x17) {
        uStack_68 = CONCAT17((char)uVar10,(undefined7)uStack_68);
        pppppppuVar7 = &ppppppuStack_78;
        if (uVar10 != 0) goto LAB_10ab93848;
      }
      else {
        pppppppuVar9 = (undefined8 *******)0x19;
        if ((uVar10 | 7) != 0x17) {
          pppppppuVar9 = (undefined8 *******)((uVar10 | 7) + 1);
        }
        pppppppuVar7 = pppppppuVar9;
        __Znwm();
        uStack_68 = (ulong)pppppppuVar9 | 0x8000000000000000;
        ppppppuStack_78 = pppppppuVar7;
        uStack_70 = uVar10;
LAB_10ab93848:
        _memcpy(pppppppuVar7,puVar8,uVar10);
      }
      *(undefined1 *)((long)pppppppuVar7 + uVar10) = 0;
      puVar8 = (undefined *)0x0;
      uVar10 = 1;
      func_0x00010ae06f08(0,1,&UNK_10f697c60,&UNK_10f697c7f,0x20,&UNK_10f63757c);
      if ((long)uStack_68 < 0) {
        pppppppuVar9 = (undefined8 *******)ppppppuStack_78;
        __ZdlPv();
        iVar3 = (int)pppppppuVar9;
        __ZSt9terminatev();
        func_0x000104bd46a0();
        if (iVar3 < 0x8b50) {
          if (iVar3 < 0x1403) {
            if (iVar3 == 0x1400) {
              return 0x12;
            }
            if (iVar3 == 0x1401) {
              return 0x13;
            }
            if (iVar3 == 0x1402) {
              return 0x14;
            }
          }
          else if (iVar3 < 0x1405) {
            if (iVar3 == 0x1403) {
              return 0x15;
            }
            if (iVar3 == 0x1404) {
              return 2;
            }
          }
          else {
            if (iVar3 == 0x1405) {
              return 6;
            }
            if (iVar3 == 0x1406) {
              return 3;
            }
          }
        }
        else if (iVar3 < 0x8dc1) {
          switch(iVar3) {
          case 0x8b50:
            return 7;
          case 0x8b51:
            return 8;
          case 0x8b52:
            return 9;
          case 0x8b53:
            return 0x1f;
          case 0x8b56:
            return 1;
          case 0x8b5a:
            return 0x16;
          case 0x8b5b:
            return 10;
          case 0x8b5c:
            return 0xb;
          case 0x8b5e:
            return 0xd;
          case 0x8b5f:
            return 0x1b;
          case 0x8b60:
            return 0x1c;
          }
        }
        else {
          if (iVar3 == 0x8dc1) {
            return 0x1a;
          }
          if (iVar3 == 0x8dca) {
            return 0x1e;
          }
          if (iVar3 == 0x8dd2) {
            return 0x1d;
          }
        }
        puVar8 = &UNK_10f6953ce;
        FUN_10a00946c();
        if (((puVar8[0xc] & 1) != 0) &&
           (_glDeleteShader(*(undefined4 *)(puVar8 + 8)), (puVar8[0x14] & 1) != 0)) {
          uVar10 = (ulong)*(uint *)(puVar8 + 0x10);
          _glDeleteShader(uVar10);
          if (puVar8[0xc] == '\x01') {
            puVar8[0xc] = 0;
          }
          if (puVar8[0x14] == '\x01') {
            puVar8[0x14] = 0;
          }
          return uVar10;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab93a9c);
        (*pcVar2)();
      }
    } while( true );
  }
LAB_10ab93660:
  if (*(char *)(param_1 + 0x24) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x20);
    _glIsShader();
    if (iVar3 == 0) goto LAB_10ab937a4;
    if ((*(byte *)(param_1 + 0x24) & 1) == 0) goto LAB_10ab93790;
    _glDeleteShader(*(undefined4 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x28);
    _glIsShader();
    if (iVar3 == 0) goto LAB_10ab937b4;
    if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
LAB_10ab93790:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab93794);
      (*pcVar2)();
    }
    _glDeleteShader(*(undefined4 *)(param_1 + 0x28));
  }
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    lVar11 = *(long *)(param_1 + 0xb0);
    lVar5 = lVar4;
    if (lVar11 != lVar4) {
      do {
        pbVar1 = (byte *)(lVar11 + -4);
        if (0x11 < (ulong)*pbVar1) goto LAB_10ab93790;
        lVar11 = lVar11 + -0x44;
        (*(code *)(&PTR_FUN_110c530b8)[*pbVar1])(lVar11);
      } while (lVar11 != lVar4);
      lVar5 = *(long *)(param_1 + 0xa8);
    }
    *(long *)(param_1 + 0xb0) = lVar4;
    __ZdlPv(lVar5);
  }
  plVar6 = *(long **)(param_1 + 0x90);
  while (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
    __ZdlPv();
  }
  lVar4 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  plVar6 = (long *)*(long *)(param_1 + 0x68);
  while (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    if (*(char *)((long)plVar6 + 0x27) < '\0') {
      __ZdlPv(plVar6[2]);
    }
    __ZdlPv(plVar6);
    plVar6 = (long *)lVar4;
  }
  lVar4 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  func_0x00010abd8a24(*(undefined8 *)(param_1 + 0x40));
  lVar4 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar4 != 0) {
    __ZdlPv();
  }
  return param_1 + 0x18;
}



/* Entry: 10a322c4c; end: 10a322ce3;  */

long * FUN_10a322c4c(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x33;
  }
  else {
    if (uVar2 != 2) goto LAB_10a322cc8;
    lVar3 = 0x66;
  }
  param_1[4] = lVar3;
LAB_10a322cc8:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  lVar3 = param_1[2];
  if (lVar3 != param_1[1]) {
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a322ce4; end: 10a322d2f;  */

long * FUN_10a322ce4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a322d30; end: 10a322e2b;  */

void FUN_10a322d30(ulong *param_1,undefined8 param_2)

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
      FUN_10a322e2c();
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



/* Entry: 10a322e2c; end: 10a322e5f;  */

void FUN_10a322e2c(ulong param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined **appuStack_170 [2];
  undefined1 auStack_160 [264];
  char cStack_58;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  func_0x000107c2b054(auStack_278,param_1);
  FUN_10a002a94(appuStack_170,auStack_278);
  appuStack_170[0] = &PTR_FUN_110bc4668;
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  func_0x00010a0ec6dc(auStack_278,1);
  if (cStack_58 == '\x01') {
    _memcpy(auStack_160,auStack_278,0x104);
  }
  else {
    _memcpy(auStack_160,auStack_278,0x108);
    cStack_58 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_160,0x110);
  *puVar2 = &PTR_FUN_110bc4668;
  ___cxa_throw(puVar2,&PTR_DAT_110bc4640,FUN_10a3220ec);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a322f34);
  (*pcVar1)();
}



/* Entry: 10a322e60; end: 10a322f63;  */

void FUN_10a322e60(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  func_0x000107c2b054(auStack_258,param_1);
  FUN_10a002a94(appuStack_150,auStack_258);
  appuStack_150[0] = &PTR_FUN_110bc4668;
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bc4668;
  ___cxa_throw(puVar2,&PTR_DAT_110bc4640,FUN_10a3220ec);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a322f34);
  (*pcVar1)();
}



/* Entry: 10a322f64; end: 10a322fbb;  */

undefined1 * FUN_10a322f64(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[0x60] = 0;
  FUN_10a08ee34(param_1 + 0x68,*param_2);
  return param_1;
}



/* Entry: 10a322fbc; end: 10a322fcb;  */

void FUN_10a322fbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc42c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a322fcc; end: 10a322feb;  */

void FUN_10a322fcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc42c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a322fec; end: 10a322ff7;  */

long FUN_10a322fec(long param_1)

{
  long *plVar1;
  
  FUN_109d1af14(param_1 + 0x30);
  if (*(char *)(param_1 + 0x16f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x158));
  }
  plVar1 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x0001092ba41c(param_1 + 0x108);
  FUN_109d1dfbc(param_1 + 0x30);
  return param_1 + 0x18;
}



/* Entry: 10a322ff8; end: 10a3231f3;  */

void FUN_10a322ff8(undefined8 *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined *extraout_x9_00;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dd98;
  (*(code *)PTR___tlv_bootstrap_11340dd98)();
  puVar6 = *ppuVar1;
  lVar7 = *(long *)(puVar6 + 0x138);
  ppuVar2 = &PTR___tlv_bootstrap_11340df18;
  (*(code *)PTR___tlv_bootstrap_11340df18)();
  *(undefined1 *)ppuVar2 = 1;
  ppuVar4 = &PTR___tlv_bootstrap_11340de28;
  if (*(long *)(extraout_x9 + 8) != 0) {
    ppuVar3 = ppuVar4;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    *ppuVar3 = extraout_x9_00;
    FUN_10a3231fc(extraout_x8);
    if ((bRam00000001137eaef8 & 1) == 0) {
      uVar8 = 0x1137eaef8;
      ___cxa_guard_acquire();
      if ((int)uVar8 != 0) {
        FUN_10a0ee478();
        uRam00000001137eaf30 = uVar8;
        uRam00000001137eaf38 = param_2;
        ___cxa_guard_release(0x1137eaef8);
      }
    }
    if ((bRam00000001137eaf00 & 1) == 0) {
      uVar8 = 0x1137eaf00;
      ___cxa_guard_acquire();
      if ((int)uVar8 != 0) {
        FUN_10a0ee404();
        uRam00000001137eaf40 = uVar8;
        uRam00000001137eaf48 = param_2;
        ___cxa_guard_release(0x1137eaf00);
      }
    }
    if ((bRam00000001137eaf08 & 1) == 0) {
      uVar8 = 0x1137eaf08;
      ___cxa_guard_acquire();
      if ((int)uVar8 != 0) {
        FUN_10a0ee5e8();
        uRam00000001137eaf50 = uVar8;
        uRam00000001137eaf58 = param_2;
        ___cxa_guard_release(0x1137eaf08);
      }
    }
  }
  puVar5 = *ppuVar1;
  *ppuVar1 = (undefined *)param_1[2];
  FUN_109d1aecc(param_1);
  *ppuVar1 = puVar5;
  lVar7 = *(long *)(lVar7 + 0x10);
  *(undefined1 *)ppuVar2 = 0;
  if (*(long *)(lVar7 + 8) != 0) {
    _glFlush();
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    *ppuVar4 = (undefined *)0x0;
    FUN_10a31ecd8(*(undefined8 *)(lVar7 + 8));
  }
  __ZNSt3__15mutex4lockEv(puVar6 + 0x18);
  uVar9 = *(undefined8 *)(puVar6 + 0xd0);
  uVar8 = *(undefined8 *)(puVar6 + 200);
  param_1[2] = *(undefined8 *)(puVar6 + 0xd8);
  param_1[1] = uVar9;
  *param_1 = uVar8;
  FUN_109d20928(puVar6 + 0x18);
  __ZNSt3__118condition_variable10notify_oneEv(puVar6 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(puVar6 + 0x18);
  return;
}



/* Entry: 10a3231f4; end: 10a3231fb;  */

void FUN_10a3231f4(void)

{
  return;
}



/* Entry: 10a3231fc; end: 10a3232a7;  */

undefined ** FUN_10a3231fc(long param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = &UNK_10f64ef40;
  uStack_80 = 0x58;
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10a0edfc4(&puStack_88);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a3232a0);
    (*pcVar1)();
  }
  FUN_10a08f044(&puStack_88,param_1 + 0x68);
  FUN_10a31ed10(param_1);
  ppuVar4 = &puStack_88;
  FUN_10a3232a8(param_1);
  *(undefined1 *)(param_1 + 0x60) = 1;
  ppuVar2 = &puStack_88;
  func_0x00010a09a9f4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar3 = ppuVar2;
  func_0x00010a09aa90();
  ppuVar3[8] = (undefined *)0x0;
  if (ppuVar4[8] != (undefined *)0x0) {
    (**(code **)(ppuVar4[8] + 8))(ppuVar2 + 9,ppuVar4 + 9);
    ppuVar2[8] = ppuVar4[8];
    ppuVar4[8] = (undefined *)0x0;
  }
  return ppuVar2;
}



/* Entry: 10a3232a8; end: 10a3232f7;  */

long FUN_10a3232a8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010a09aa90();
  *(undefined8 *)(lVar1 + 0x40) = 0;
  if (*(long *)(param_2 + 0x40) != 0) {
    (**(code **)(*(long *)(param_2 + 0x40) + 8))(param_1 + 0x48,param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
  }
  return param_1;
}


