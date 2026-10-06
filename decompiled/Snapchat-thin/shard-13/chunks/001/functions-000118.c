/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a17930c; end: 10a179423;  */

void FUN_10a17930c(long param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = **(undefined8 **)(*(long *)(param_1 + 0x798) + 0x20);
    param_3 = param_3 << 2;
    do {
      lVar1 = param_1;
      FUN_10a190e68(param_1,*param_2);
      *(undefined8 *)(lVar1 + 0xa8) = uVar2;
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a179424; end: 10a17961f;  */

void FUN_10a179424(long param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  ushort uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined *puVar8;
  float fStack_e4;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_78 = 0x10;
  puStack_80 = &DAT_10f640b90;
  uStack_70 = 0x1487ee5813a617e4;
  uStack_98 = 10;
  puStack_a0 = &DAT_10f63211d;
  uStack_90 = 0x79c20b37b19177e;
  puVar8 = &DAT_10f640ba1;
  uStack_b8 = 0x19;
  puStack_c0 = &DAT_10f640ba1;
  uStack_b0 = 0x30265f1b02be2681;
  plVar6 = *(long **)(param_1 + 0x288);
  if (*plVar6 != plVar6[1] && param_4 != 0) {
    do {
      lVar5 = param_1 + 0x20;
      func_0x00010a01e9ec(lVar5,*param_3);
      uVar1 = *(ushort *)(lVar5 + 2);
      lVar5 = *plVar6;
      if ((ulong)(plVar6[1] - lVar5 >> 3) <= (ulong)uVar1) {
LAB_10a1795f4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1795f8);
        (*pcVar2)();
      }
      lVar3 = param_1 + 0x20;
      FUN_10a015150(lVar3,*param_3);
      if (*(undefined2 **)(lVar3 + 0xc0) == *(undefined2 **)(lVar3 + 0xb8)) goto LAB_10a1795f4;
      lVar4 = param_1 + 0x20;
      FUN_10a01eacc(lVar4,**(undefined2 **)(lVar3 + 0xb8));
      lVar5 = *(long *)(lVar5 + (ulong)uVar1 * 8);
      func_0x000107c2b074(auStack_e0,&puStack_a0);
      FUN_10ac2751c(lVar5);
      fStack_e4 = SUB84(puVar8,0);
      FUN_10a01671c(lVar4,auStack_e0,&fStack_e4);
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
      fVar7 = SUB84(puVar8,0);
      if (*(char *)(*(long *)(lVar5 + 0x318) + 0x20) == '\x01') {
        func_0x000107c2b074(auStack_e0,&puStack_80);
        FUN_10a047898(*(undefined8 *)(lVar4 + 0x158),auStack_e0,auStack_e0);
        if (cStack_c9 < '\0') {
          __ZdlPv(auStack_e0[0]);
        }
        func_0x000107c2b074(auStack_e0,&puStack_c0);
        FUN_10ac2751c(lVar5);
        fStack_e4 = 10.0 / fVar7;
        puVar8 = (undefined *)(ulong)(uint)fStack_e4;
        FUN_10a01671c(lVar4,auStack_e0,&fStack_e4);
      }
      else {
        func_0x000107c2b074(auStack_e0,&puStack_80);
        FUN_10a048040(*(undefined8 *)(lVar4 + 0x158),auStack_e0);
      }
      if (cStack_c9 < '\0') {
        __ZdlPv(auStack_e0[0]);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



/* Entry: 10a179620; end: 10a17963f;  */

void FUN_10a179620(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a179640; end: 10a179763;  */

void FUN_10a179640(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 == param_2) {
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  uVar5 = lVar4 - lVar2;
  uVar3 = param_1[2];
  plVar6 = (long *)*param_1;
  if (uVar3 - (long)plVar6 < uVar5) {
    plVar7 = (long *)((long)uVar5 >> 3);
    plVar8 = param_1;
    if (plVar6 != (long *)0x0) {
      param_1[1] = (long)plVar6;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar8 = plVar6;
    }
    if ((ulong)plVar7 >> 0x3d != 0) {
LAB_10a179760:
      FUN_10a199dec();
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (*plVar8 != 0) {
        plVar8[1] = *plVar8;
        __ZdlPv();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar8);
      return;
    }
    plVar8 = (long *)((long)uVar3 >> 2);
    if ((long *)((long)uVar3 >> 2) <= plVar7) {
      plVar8 = plVar7;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      plVar8 = (long *)0x1fffffffffffffff;
    }
    if ((ulong)plVar8 >> 0x3d != 0) goto LAB_10a179760;
    FUN_10a199e00();
    *param_1 = (long)plVar8;
    param_1[1] = (long)plVar8;
    param_1[2] = (long)(plVar8 + (long)param_2);
    plVar6 = plVar8;
  }
  else {
    plVar8 = (long *)param_1[1];
    if ((ulong)((long)plVar8 - (long)plVar6) < uVar5) {
      lVar1 = lVar2 + ((long)plVar8 - (long)plVar6);
      if (plVar8 != plVar6) {
        _memmove(plVar6,lVar2);
        plVar8 = (long *)param_1[1];
      }
      lVar4 = lVar4 - lVar1;
      if (lVar4 != 0) {
        _memmove(plVar8,lVar1,lVar4);
      }
      lVar4 = (long)plVar8 + lVar4;
      goto LAB_10a179748;
    }
  }
  if (lVar4 != lVar2) {
    _memmove(plVar6,lVar2,uVar5);
  }
  lVar4 = (long)plVar6 + uVar5;
LAB_10a179748:
  param_1[1] = lVar4;
  return;
}



/* Entry: 10a179764; end: 10a17979b;  */

void FUN_10a179764(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a17979c; end: 10a179897;  */

void FUN_10a17979c(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      lVar2 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar5 = *(long *)(lVar2 + 0x1a8);
      lVar2 = param_1;
      if (lVar5 == 0) {
        FUN_10a190e68(param_1,uVar1);
LAB_10a179808:
        uVar4 = 0;
      }
      else {
        lVar3 = lVar5;
        FUN_10a4a7000();
        FUN_10a190e68(param_1,uVar1);
        if ((int)lVar3 == 0) goto LAB_10a179808;
        uVar4 = *(undefined8 *)(lVar5 + 0x528);
      }
      *(undefined8 *)(lVar2 + 0xa8) = uVar4;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a179898; end: 10a1798b7;  */

void FUN_10a179898(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a1798b8; end: 10a1799e7;  */

void FUN_10a1798b8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 == param_2) {
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  plVar6 = (long *)(lVar4 - lVar2);
  uVar3 = param_1[2];
  plVar7 = (long *)*param_1;
  if ((long *)(uVar3 - (long)plVar7) < plVar6) {
    plVar5 = param_1;
    if (plVar7 != (long *)0x0) {
      param_1[1] = (long)plVar7;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar5 = plVar7;
    }
    if ((long)plVar6 < 0) {
      FUN_10a199f50();
      if (plVar5 == (long *)0x0) {
        return;
      }
      if (*plVar5 != 0) {
        plVar5[1] = *plVar5;
        __ZdlPv();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar5);
      return;
    }
    plVar5 = (long *)(uVar3 * 2);
    if (plVar5 < plVar6 || (long)plVar5 - (long)plVar6 == 0) {
      plVar5 = plVar6;
    }
    if (0x3ffffffffffffffe < uVar3) {
      plVar5 = (long *)0x7fffffffffffffff;
    }
    plVar7 = plVar5;
    __Znwm();
    *param_1 = (long)plVar7;
    param_1[1] = (long)plVar7;
    param_1[2] = (long)plVar7 + (long)plVar5;
    if (lVar4 != lVar2) {
      _memcpy(plVar7,lVar2,plVar6);
    }
  }
  else {
    plVar5 = (long *)param_1[1];
    if ((long *)((long)plVar5 - (long)plVar7) < plVar6) {
      lVar1 = lVar2 + ((long)plVar5 - (long)plVar7);
      if (plVar5 != plVar7) {
        _memmove(plVar7,lVar2);
        plVar5 = (long *)param_1[1];
      }
      lVar4 = lVar4 - lVar1;
      if (lVar4 != 0) {
        _memmove(plVar5,lVar1,lVar4);
      }
      lVar4 = (long)plVar5 + lVar4;
      goto LAB_10a1799cc;
    }
    if (lVar4 != lVar2) {
      _memmove(plVar7,lVar2,plVar6);
    }
  }
  lVar4 = (long)plVar7 + (long)plVar6;
LAB_10a1799cc:
  param_1[1] = lVar4;
  return;
}



/* Entry: 10a1799e8; end: 10a179a1f;  */

void FUN_10a1799e8(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a179a20; end: 10a179aa3;  */

undefined4 *
FUN_10a179a20(long param_1,undefined4 *param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  
  if (param_3 != 0) {
    plVar6 = *(long **)(param_1 + 0x278);
    param_3 = param_3 << 2;
    puVar5 = param_5;
    do {
      uVar2 = *param_2;
      lVar4 = param_1;
      func_0x00010a01e9ec(param_1,uVar2);
      lVar1 = *plVar6;
      if ((ulong)(plVar6[1] - lVar1) <= (ulong)*(ushort *)(lVar4 + 2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a179aa4);
        (*pcVar3)();
      }
      param_5 = puVar5;
      if ((*(byte *)(lVar1 + (ulong)*(ushort *)(lVar4 + 2)) & 1) != 0) {
        param_5 = puVar5 + 1;
        *puVar5 = uVar2;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
      puVar5 = param_5;
    } while (param_3 != 0);
  }
  return param_5;
}



/* Entry: 10a179aa4; end: 10a179ac3;  */

void FUN_10a179aa4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a179ac4; end: 10a179be7;  */

void FUN_10a179ac4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 == param_2) {
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  uVar5 = lVar4 - lVar2;
  uVar3 = param_1[2];
  plVar6 = (long *)*param_1;
  if (uVar3 - (long)plVar6 < uVar5) {
    plVar7 = (long *)((long)uVar5 >> 4);
    plVar8 = param_1;
    if (plVar6 != (long *)0x0) {
      param_1[1] = (long)plVar6;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar8 = plVar6;
    }
    if ((ulong)plVar7 >> 0x3c != 0) {
LAB_10a179be4:
      FUN_10a19a084();
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (*plVar8 != 0) {
        plVar8[1] = *plVar8;
        __ZdlPv();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar8);
      return;
    }
    plVar8 = (long *)((long)uVar3 >> 3);
    if ((long *)((long)uVar3 >> 3) <= plVar7) {
      plVar8 = plVar7;
    }
    if (0x7fffffffffffffef < uVar3) {
      plVar8 = (long *)0xfffffffffffffff;
    }
    if ((ulong)plVar8 >> 0x3c != 0) goto LAB_10a179be4;
    FUN_10a19a098();
    *param_1 = (long)plVar8;
    param_1[1] = (long)plVar8;
    param_1[2] = (long)(plVar8 + (long)param_2 * 2);
    plVar6 = plVar8;
  }
  else {
    plVar8 = (long *)param_1[1];
    if ((ulong)((long)plVar8 - (long)plVar6) < uVar5) {
      lVar1 = lVar2 + ((long)plVar8 - (long)plVar6);
      if (plVar8 != plVar6) {
        _memmove(plVar6,lVar2);
        plVar8 = (long *)param_1[1];
      }
      lVar4 = lVar4 - lVar1;
      if (lVar4 != 0) {
        _memmove(plVar8,lVar1,lVar4);
      }
      lVar4 = (long)plVar8 + lVar4;
      goto LAB_10a179bcc;
    }
  }
  if (lVar4 != lVar2) {
    _memmove(plVar6,lVar2,uVar5);
  }
  lVar4 = (long)plVar6 + uVar5;
LAB_10a179bcc:
  param_1[1] = lVar4;
  return;
}



/* Entry: 10a179be8; end: 10a179c1f;  */

void FUN_10a179be8(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a179c20; end: 10a179dbb;  */

void FUN_10a179c20(long *param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      plVar2 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar6 = plVar2[0x35];
      plVar2 = param_1;
      FUN_10a190e68(param_1,uVar1);
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(lVar6 + 0x538);
        if (*(char *)(lVar6 + 0x518) == '\x01') {
          plVar3 = param_1;
          func_0x00010a01e9ec(param_1,uVar1);
          plVar4 = param_1;
          FUN_10a191d9c(param_1,plVar3[0x25],plVar3[0x26],plVar2);
          if (plVar4 != (long *)0x0) {
            ___dynamic_cast();
            if (plVar4 == (long *)0x0) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f640bbb,&UNK_10f640bff,0x3f,&UNK_10f640c7a);
              }
            }
            else {
              (**(code **)(*plVar4 + 0x10))();
              if (*plVar4 == plVar4[1]) {
                *(undefined4 *)(lVar5 + 0x104) = 0;
              }
              else {
                uStack_80 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                FUN_10a0ca588(&uStack_80,*plVar4,plVar4[1],plVar4[1] - *plVar4 >> 2);
                *(undefined4 *)(lVar5 + 0x104) = 1;
                if (*(long *)(lVar5 + 0x128) != 0) {
                  *(long *)(lVar5 + 0x130) = *(long *)(lVar5 + 0x128);
                  __ZdlPv();
                }
                *(undefined8 *)(lVar5 + 0x130) = uStack_78;
                *(undefined8 *)(lVar5 + 0x128) = uStack_80;
                *(undefined8 *)(lVar5 + 0x138) = uStack_70;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_80 = 0;
              }
            }
          }
        }
        FUN_10a4ab348();
        if ((int)lVar6 == 0) {
          lVar5 = 0;
        }
      }
      plVar2[0x15] = lVar5;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a179dbc; end: 10a179e2b;  */

undefined4 *
FUN_10a179dbc(long param_1,undefined4 *param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    puVar3 = param_5;
    do {
      uVar1 = *param_2;
      lVar2 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar2 = *(long *)(lVar2 + 0x1a8);
      param_5 = puVar3;
      if ((lVar2 != 0) && (func_0x00010a5ecb3c(), (int)lVar2 != 0)) {
        param_5 = puVar3 + 1;
        *puVar3 = uVar1;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
      puVar3 = param_5;
    } while (param_3 != 0);
  }
  return param_5;
}



/* Entry: 10a179e2c; end: 10a179e7b;  */

void FUN_10a179e2c(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,3);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a179e7c; end: 10a179ea7;  */

void FUN_10a179e7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0x3f800000;
  return;
}



/* Entry: 10a179ea8; end: 10a179f93;  */

void FUN_10a179ea8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_38;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x38))(&plStack_38);
    FUN_109d1a244(&plStack_38);
    if (plStack_38 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_38 + 1);
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
          (**(code **)(*plStack_38 + 8))();
        }
      }
    }
  }
  plVar4 = (long *)param_1[4];
  while (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    FUN_10a192060(plVar4 + 4);
    __ZdlPv(plVar4);
    plVar4 = (long *)lVar6;
  }
  lVar6 = param_1[2];
  param_1[2] = 0;
  if (lVar6 != 0) {
    __ZdlPv();
  }
  func_0x00010a061620(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a179f94; end: 10a17a08b;  */

undefined4 *
FUN_10a179f94(long param_1,undefined4 *param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    puVar8 = param_5;
    do {
      uVar1 = *param_2;
      lVar3 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar4 = param_1;
      FUN_10a015150(param_1,uVar1);
      lVar9 = *(long *)(lVar3 + 0x1a8);
      param_5 = puVar8;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x518) != 0)) {
        uVar7 = (ulong)*(byte *)(*(long *)(lVar9 + 0x170) + 0x29);
        if (5 < uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a17a08c);
          (*pcVar2)();
        }
        plVar5 = *(long **)(*(long *)(lVar9 + 0x170) + uVar7 * 8 + 0x30);
        (**(code **)(*plVar5 + 0x18))();
        if ((int)plVar5 != 0) {
          lVar9 = *(long *)(lVar9 + 0x518);
          FUN_10a5e2864(param_1 + 8,lVar3);
          if (((*(byte *)(lVar3 + 0x19) & 1) == 0) ||
             (lVar6 = param_1, FUN_10a190f74(param_1,lVar3,lVar4,param_4,lVar9 + 0x158),
             (int)lVar6 != 0)) {
            param_5 = puVar8 + 1;
            *puVar8 = uVar1;
          }
        }
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
      puVar8 = param_5;
    } while (param_3 != 0);
  }
  return param_5;
}



/* Entry: 10a17a08c; end: 10a17a0db;  */

void FUN_10a17a08c(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,10);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17a0dc; end: 10a17d703;  */

/* WARNING: Removing unreachable block (ram,0x00010a17c060) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_10a17a0dc(long *param_1,undefined8 param_2,undefined4 *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  code *pcVar2;
  code *pcVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  code **ppcVar9;
  undefined *puVar10;
  byte bVar11;
  short sVar12;
  char cVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 uVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  code cVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  code *pcVar25;
  long lVar26;
  code *pcVar27;
  undefined8 *puVar28;
  undefined4 uVar29;
  long lVar30;
  char *pcVar31;
  code *pcVar32;
  long lVar33;
  code *pcVar34;
  code *pcVar35;
  ulong uVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  code *pcVar40;
  ulong uVar41;
  int iVar42;
  undefined8 *puVar43;
  long *plVar44;
  long *plVar45;
  code *pcVar46;
  code *pcVar47;
  code **ppcVar48;
  ulong uVar49;
  long *plVar50;
  ulong uVar51;
  uint uVar52;
  long lVar53;
  long lVar54;
  long *plVar55;
  uint uVar56;
  ulong uVar57;
  code *pcVar58;
  code cVar59;
  long *plVar60;
  uint uVar61;
  undefined8 *puVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  undefined *puStack_5f8;
  code *pcStack_590;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  int iStack_4d8;
  code *pcStack_4d0;
  code *pcStack_4c8;
  code *pcStack_4c0;
  float afStack_4b8 [2];
  code *pcStack_4b0;
  code *pcStack_4a8;
  code *pcStack_4a0;
  code *pcStack_498;
  byte bStack_490;
  undefined1 uStack_48f;
  byte bStack_48e;
  undefined8 uStack_48c;
  undefined8 uStack_484;
  undefined8 uStack_47c;
  undefined8 uStack_474;
  undefined8 uStack_46c;
  undefined8 uStack_464;
  undefined8 uStack_45c;
  undefined8 uStack_454;
  undefined4 uStack_44c;
  float fStack_448;
  long lStack_444;
  undefined4 uStack_43c;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined3 uStack_428;
  undefined5 uStack_425;
  undefined2 uStack_420;
  undefined1 uStack_41e;
  undefined4 uStack_41d;
  uint uStack_419;
  undefined5 uStack_415;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  uint uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  uint uStack_308;
  undefined4 uStack_304;
  long alStack_300 [3];
  long *plStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  undefined8 *puStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  byte bStack_280;
  float fStack_27c;
  undefined1 uStack_278;
  undefined4 uStack_274;
  code *pcStack_270;
  code *pcStack_268;
  float fStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined3 *puStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  long *plStack_180;
  undefined **ppuStack_178;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  code *pcStack_128;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar62 = *(undefined8 **)(param_1[0xf7] + 0x48);
  plVar55 = param_1 + 4;
  FUN_10a01f6d4();
  plVar37 = param_1 + 0xbc;
  func_0x00010a04a0d4(plVar37,param_2);
  plVar60 = param_1;
  (**(code **)(*param_1 + 0xe0))();
  if (plVar60 == (long *)0x0) {
    bVar19 = false;
  }
  else {
    bVar19 = *(int *)((long)plVar60 + 0x734) == 1 || *(int *)((long)plVar60 + 0x734) == 6;
  }
  bVar11 = *(byte *)(param_1 + 0xf);
  uVar57 = plVar37[0x57];
  fStack_448 = 0.0;
  if ((char)*plVar37 == '\0') {
    fStack_448 = (float)_tanf(*(float *)((long)plVar37 + 4) * 0.5,0x3f000000);
  }
  lVar54 = 200;
  if (uVar57 < 2) {
    lVar54 = 0x1e0;
  }
  uStack_464 = *(undefined8 *)((long)plVar37 + lVar54 + 0x118);
  uStack_46c = *(undefined8 *)((long)plVar37 + lVar54 + 0x110);
  uStack_454 = *(undefined8 *)((long)plVar37 + lVar54 + 0x128);
  uStack_45c = *(undefined8 *)((long)plVar37 + lVar54 + 0x120);
  uStack_484 = *(undefined8 *)((long)plVar37 + lVar54 + 0xf8);
  uStack_48c = *(undefined8 *)((long)plVar37 + lVar54 + 0xf0);
  uStack_474 = *(undefined8 *)((long)plVar37 + lVar54 + 0x108);
  uStack_47c = *(undefined8 *)((long)plVar37 + lVar54 + 0x100);
  uStack_44c = (undefined4)plVar37[1];
  uStack_48f = (code)(*(char *)((long)plVar37 + 1) == '\x01');
  lStack_444 = plVar37[2];
  pcVar17 = (code *)(puVar62 + 2);
  plVar60 = (long *)puVar62[3];
  lVar54 = plVar55[2];
  plVar50 = (long *)plVar55[3];
  bStack_490 = bVar11;
  bStack_48e = bVar19;
  if (plVar60 != (long *)0x0) {
    pcVar31 = (char *)((long)plVar60 - 1);
    if (((ulong)plVar60 & (ulong)pcVar31) == 0) {
      plVar37 = (long *)((ulong)plVar50 & (ulong)pcVar31);
    }
    else {
      plVar37 = plVar50;
      if (plVar60 <= plVar50) {
        uVar57 = 0;
        if (plVar60 != (long *)0x0) {
          uVar57 = (ulong)plVar50 / (ulong)plVar60;
        }
        plVar37 = (long *)((long)plVar50 - uVar57 * (long)plVar60);
      }
    }
    puVar43 = *(undefined8 **)(*(long *)pcVar17 + (long)plVar37 * 8);
    if (puVar43 != (undefined8 *)0x0) {
      for (pcVar58 = (code *)*puVar43; pcVar58 != (code *)0x0; pcVar58 = *(code **)pcVar58) {
        plVar44 = *(long **)(pcVar58 + 8);
        if (plVar44 == plVar50) {
          if (*(long *)(pcVar58 + 0x10) == lVar54 && *(long **)(pcVar58 + 0x18) == plVar50) {
            bVar19 = false;
            goto joined_r0x00010a17a4d0;
          }
        }
        else {
          if (((ulong)plVar60 & (ulong)pcVar31) == 0) {
            plVar44 = (long *)((ulong)plVar44 & (ulong)pcVar31);
          }
          else if (plVar60 <= plVar44) {
            uVar57 = 0;
            if (plVar60 != (long *)0x0) {
              uVar57 = (ulong)plVar44 / (ulong)plVar60;
            }
            plVar44 = (long *)((long)plVar44 - uVar57 * (long)plVar60);
          }
          if (plVar44 != plVar37) break;
        }
      }
    }
    uStack_428 = 0;
    uStack_425 = 0;
    uStack_430._0_1_ = (code)0x0;
    uStack_430._1_2_ = 0;
    uStack_430._3_1_ = 0;
    uStack_430._4_4_ = 0;
    uStack_415 = 0;
    uStack_420 = 0;
    uStack_41e = 0;
    uStack_41d = 0;
    uStack_419 = 0;
    uStack_410 = CONCAT44(uStack_410._4_4_,0x3f800000);
    if (((ulong)plVar60 & (ulong)pcVar31) == 0) {
      plVar37 = (long *)((ulong)plVar50 & (ulong)pcVar31);
    }
    else {
      plVar37 = plVar50;
      if (plVar60 <= plVar50) {
        uVar57 = 0;
        if (plVar60 != (long *)0x0) {
          uVar57 = (ulong)plVar50 / (ulong)plVar60;
        }
        plVar37 = (long *)((long)plVar50 - uVar57 * (long)plVar60);
      }
    }
    puVar43 = *(undefined8 **)(*(long *)pcVar17 + (long)plVar37 * 8);
    if (puVar43 != (undefined8 *)0x0) {
      for (pcVar58 = (code *)*puVar43; pcVar58 != (code *)0x0; pcVar58 = *(code **)pcVar58) {
        plVar44 = *(long **)(pcVar58 + 8);
        if (plVar44 == plVar50) {
          if (*(long *)(pcVar58 + 0x10) == lVar54 && *(long **)(pcVar58 + 0x18) == plVar50)
          goto LAB_10a17a618;
        }
        else {
          if (((ulong)plVar60 & (ulong)pcVar31) == 0) {
            plVar44 = (long *)((ulong)plVar44 & (ulong)pcVar31);
          }
          else if (plVar60 <= plVar44) {
            uVar57 = 0;
            if (plVar60 != (long *)0x0) {
              uVar57 = (ulong)plVar44 / (ulong)plVar60;
            }
            plVar44 = (long *)((long)plVar44 - uVar57 * (long)plVar60);
          }
          if (plVar44 != plVar37) break;
        }
      }
    }
  }
  uStack_419 = 0;
  uStack_410 = CONCAT44(uStack_410._4_4_,0x3f800000);
  uStack_415 = 0;
  uStack_41d = 0;
  uStack_41e = 0;
  uStack_420 = 0;
  uStack_425 = 0;
  uStack_428 = 0;
  uStack_430._4_4_ = 0;
  uStack_430._3_1_ = 0;
  uStack_430._1_2_ = 0;
  uStack_430._0_1_ = (code)0x0;
  pcVar58 = (code *)0x48;
  __Znwm();
  puStack_2d0 = (undefined8 *)0x1;
  *(long *)pcVar58 = 0;
  *(long **)(pcVar58 + 8) = plVar50;
  lVar54 = plVar55[2];
  *(long *)(pcVar58 + 0x18) = plVar55[3];
  *(long *)(pcVar58 + 0x10) = lVar54;
  uStack_430._0_1_ = (code)0x0;
  uStack_430._1_2_ = 0;
  uStack_430._3_1_ = 0;
  uStack_430._4_4_ = 0;
  uStack_428 = 0;
  uStack_425 = 0;
  *(long *)(pcVar58 + 0x20) = 0;
  *(long *)(pcVar58 + 0x28) = 0;
  *(long *)(pcVar58 + 0x30) = 0;
  *(long *)(pcVar58 + 0x38) = 0;
  *(undefined4 *)(pcVar58 + 0x40) = 0x3f800000;
  pcStack_2e0 = pcVar58;
  pcStack_2d8 = pcVar17;
  if ((plVar60 == (long *)0x0) ||
     (*(float *)(puVar62 + 6) * (float)plVar60 < (float)(puVar62[5] + 1))) {
    uVar57 = 1;
    if ((long *)0x2 < plVar60) {
      uVar57 = (ulong)(((ulong)plVar60 & (ulong)((long)plVar60 - 1U)) != 0);
    }
    plVar55 = (long *)(uVar57 | (long)plVar60 << 1);
    plVar37 = (long *)(long)((float)(puVar62[5] + 1) / *(float *)(puVar62 + 6));
    if (plVar55 <= plVar37) {
      plVar55 = plVar37;
    }
    if ((char *)((long)plVar55 - 1U) == (char *)0x0) {
      plVar55 = (long *)0x2;
    }
    else if (((ulong)plVar55 & (long)plVar55 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar60 = (long *)puVar62[3];
    }
    if (plVar60 < plVar55) {
LAB_10a17a40c:
      if ((ulong)plVar55 >> 0x3d != 0) {
        func_0x000109ffded8();
        goto LAB_10a17d36c;
      }
      lVar54 = (long)plVar55 << 3;
      __Znwm();
      lVar53 = *(long *)pcVar17;
      *(long *)pcVar17 = lVar54;
      if (lVar53 != 0) {
        __ZdlPv();
      }
      plVar37 = (long *)0x0;
      puVar62[3] = plVar55;
      do {
        *(undefined8 *)(*(long *)pcVar17 + (long)plVar37 * 8) = 0;
        plVar37 = (long *)((long)plVar37 + 1);
      } while (plVar55 != plVar37);
      plVar37 = (long *)puVar62[4];
      plVar60 = plVar55;
      if (plVar37 != (long *)0x0) {
        plVar44 = (long *)plVar37[1];
        pcVar31 = (char *)((long)plVar55 + -1);
        if (((ulong)plVar55 & (ulong)pcVar31) == 0) {
          plVar44 = (long *)((ulong)plVar44 & (ulong)pcVar31);
        }
        else if (plVar55 <= plVar44) {
          uVar57 = 0;
          if (plVar55 != (long *)0x0) {
            uVar57 = (ulong)plVar44 / (ulong)plVar55;
          }
          plVar44 = (long *)((long)plVar44 - uVar57 * (long)plVar55);
        }
        *(undefined8 **)(*(long *)pcVar17 + (long)plVar44 * 8) = puVar62 + 4;
        plVar38 = (long *)*plVar37;
        while (plVar38 != (long *)0x0) {
          plVar45 = (long *)plVar38[1];
          if (((ulong)plVar55 & (ulong)pcVar31) == 0) {
            plVar45 = (long *)((ulong)plVar45 & (ulong)pcVar31);
          }
          else if (plVar55 <= plVar45) {
            uVar57 = 0;
            if (plVar55 != (long *)0x0) {
              uVar57 = (ulong)plVar45 / (ulong)plVar55;
            }
            plVar45 = (long *)((long)plVar45 - uVar57 * (long)plVar55);
          }
          plVar39 = plVar38;
          if (plVar45 != plVar44) {
            lVar54 = *(long *)pcVar17;
            if (*(long *)(lVar54 + (long)plVar45 * 8) == 0) {
              *(long **)(lVar54 + (long)plVar45 * 8) = plVar37;
              plVar44 = plVar45;
            }
            else {
              *plVar37 = *plVar38;
              *plVar38 = **(undefined8 **)(lVar54 + (long)plVar45 * 8);
              **(long **)(lVar54 + (long)plVar45 * 8) = (long)plVar38;
              plVar39 = plVar37;
            }
          }
          plVar37 = plVar39;
          plVar38 = (long *)*plVar39;
        }
      }
    }
    else if (plVar55 < plVar60) {
      plVar37 = (long *)(long)((float)(ulong)puVar62[5] / *(float *)(puVar62 + 6));
      if ((plVar60 < (long *)0x3) || (((ulong)plVar60 & (ulong)((long)plVar60 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar37) {
        plVar37 = (long *)(1L << (-LZCOUNT((char *)((long)plVar37 + -1)) & 0x3fU));
      }
      if (plVar55 <= plVar37) {
        plVar55 = plVar37;
      }
      if (plVar55 < plVar60) {
        if (plVar55 != (long *)0x0) goto LAB_10a17a40c;
        lVar54 = *(long *)pcVar17;
        *(long *)pcVar17 = 0;
        if (lVar54 != 0) {
          __ZdlPv();
        }
        puVar62[3] = 0;
        plVar60 = (long *)0x0;
      }
      else {
        plVar60 = (long *)puVar62[3];
      }
    }
    if (((ulong)plVar60 & (ulong)((long)plVar60 + -1)) == 0) {
      plVar37 = (long *)((ulong)((long)plVar60 + -1) & (ulong)plVar50);
    }
    else {
      plVar37 = plVar50;
      if (plVar60 <= plVar50) {
        uVar57 = 0;
        if (plVar60 != (long *)0x0) {
          uVar57 = (ulong)plVar50 / (ulong)plVar60;
        }
        plVar37 = (long *)((long)plVar50 - uVar57 * (long)plVar60);
      }
    }
  }
  lVar54 = *(long *)pcVar17;
  plVar55 = *(long **)(lVar54 + (long)plVar37 * 8);
  if (plVar55 == (long *)0x0) {
    plVar55 = puVar62 + 4;
    *(long *)pcVar58 = *plVar55;
    *plVar55 = (long)pcVar58;
    *(long **)(lVar54 + (long)plVar37 * 8) = plVar55;
    if (*(long *)pcVar58 != 0) {
      plVar55 = *(long **)(*(long *)pcVar58 + 8);
      if (((ulong)plVar60 & (ulong)((long)plVar60 + -1)) == 0) {
        plVar55 = (long *)((ulong)plVar55 & (ulong)((long)plVar60 + -1));
      }
      else if (plVar60 <= plVar55) {
        uVar57 = 0;
        if (plVar60 != (long *)0x0) {
          uVar57 = (ulong)plVar55 / (ulong)plVar60;
        }
        plVar55 = (long *)((long)plVar55 - uVar57 * (long)plVar60);
      }
      plVar55 = (long *)(*(long *)pcVar17 + (long)plVar55 * 8);
      goto LAB_10a17a608;
    }
  }
  else {
    *(long *)pcVar58 = *plVar55;
LAB_10a17a608:
    *plVar55 = (long)pcVar58;
  }
  puVar62[5] = puVar62[5] + 1;
LAB_10a17a618:
  FUN_10a192060(&uStack_430);
  bVar19 = true;
joined_r0x00010a17a4d0:
  if (param_4 != 0) {
    pcVar2 = pcVar58 + 0x20;
    puVar5 = param_3 + param_4;
    pcVar3 = pcVar58 + 0x30;
    puStack_5f8 = &UNK_10f641059;
    do {
      uVar29 = *param_3;
      plVar55 = param_1 + 4;
      func_0x00010a01e9ec(plVar55,uVar29);
      plVar37 = param_1 + 4;
      FUN_10a190e68(plVar37,uVar29);
      lVar54 = plVar55[0x35];
      if (lVar54 != 0) {
        if ((short *)plVar37[0x17] == (short *)plVar37[0x18]) {
          if ((bRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f640ca6,&UNK_10f640cf3,0x45c,&UNK_10f640d87);
          }
        }
        else {
          sVar12 = *(short *)plVar37[0x17];
          if (sVar12 == -1) {
            if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f640ca6,&UNK_10f640cf3,0x461,&UNK_10f640db7);
            }
          }
          else {
            lVar53 = *(long *)(lVar54 + 0x518);
            pcVar25 = (code *)(param_1 + 4);
            FUN_10a01eacc(pcVar25,sVar12);
            if (((byte)pcVar25[0x18] & 1) == 0) {
              plVar60 = *(long **)(pcVar25 + 0x160);
              (**(code **)(*plVar60 + 0x90))();
              lVar30 = plVar55[1];
              pcVar27 = (code *)plVar55[2];
              pcVar32 = *(code **)(pcVar58 + 0x28);
              if (pcVar32 != (code *)0x0) {
                pcVar34 = pcVar32 + -1;
                if (((ulong)pcVar32 & (ulong)pcVar34) == 0) {
                  pcVar40 = (code *)((ulong)pcVar34 & (ulong)pcVar27);
                }
                else {
                  pcVar40 = pcVar27;
                  if (pcVar32 <= pcVar27) {
                    uVar57 = 0;
                    if (pcVar32 != (code *)0x0) {
                      uVar57 = (ulong)pcVar27 / (ulong)pcVar32;
                    }
                    pcVar40 = pcVar27 + -(uVar57 * (long)pcVar32);
                  }
                }
                plVar50 = *(long **)(*(long *)pcVar2 + (long)pcVar40 * 8);
                if ((plVar50 != (long *)0x0) && (plVar50 = (long *)*plVar50, plVar50 != (long *)0x0)
                   ) {
LAB_10a17a834:
                  pcVar46 = (code *)plVar50[1];
                  if (pcVar46 == pcVar27) {
                    if (plVar50[2] != lVar30 || (code *)plVar50[3] != pcVar27) goto LAB_10a17a87c;
                    pcVar32 = (code *)(plVar50 + 4);
                    plVar44 = (long *)plVar50[5];
                    if (plVar44 == (long *)0x0) {
                      lVar30 = 0;
                      plVar44 = (long *)0x0;
                    }
                    else {
                      __ZNSt3__119__shared_weak_count4lockEv();
                      if (plVar44 == (long *)0x0) {
                        lVar30 = 0;
                      }
                      else {
                        lVar30 = *(long *)pcVar32;
                      }
                    }
                    if ((lVar30 == lVar53) && (*(code *)(plVar50 + 6) == uStack_48f)) {
                      bVar22 = (bool)*(char *)((long)plVar50 + 0x31) !=
                               (((ulong)plVar60 & 0x10) == 0);
                    }
                    else {
                      bVar22 = true;
                    }
                    if (plVar44 != (long *)0x0) {
                      plVar38 = plVar44 + 1;
                      do {
                        lVar30 = *plVar38;
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(plVar38,0x10);
                        if (bVar21) {
                          *plVar38 = lVar30 + -1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if (lVar30 == 0) {
                        (**(code **)(*plVar44 + 0x10))(plVar44);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar44);
                      }
                    }
                    pcStack_590 = (code *)(plVar50 + 2);
                    if (bVar22) goto LAB_10a17ad28;
                    bVar22 = false;
                    goto LAB_10a17b1a4;
                  }
                  if (((ulong)pcVar32 & (ulong)pcVar34) == 0) {
                    pcVar46 = (code *)((ulong)pcVar46 & (ulong)pcVar34);
                  }
                  else if (pcVar32 <= pcVar46) {
                    uVar57 = 0;
                    if (pcVar32 != (code *)0x0) {
                      uVar57 = (ulong)pcVar46 / (ulong)pcVar32;
                    }
                    pcVar46 = pcVar46 + -(uVar57 * (long)pcVar32);
                  }
                  if (pcVar46 == pcVar40) goto LAB_10a17a87c;
                }
              }
LAB_10a17a884:
              uStack_420 = 0x100;
              uStack_428 = 0;
              uStack_425 = 0;
              uStack_430._0_1_ = (code)0x0;
              uStack_430._1_2_ = 0;
              uStack_430._3_1_ = 0;
              uStack_430._4_4_ = 0;
              uStack_410 = 0;
              uStack_419 = uStack_419 & 0xff;
              uStack_415 = 0;
              uStack_400 = 0;
              uStack_408 = 0;
              uStack_3f0 = 0;
              uStack_3f8 = 0;
              uStack_3e0 = 0;
              uStack_3e8 = 0;
              uStack_3d0 = 0;
              uStack_3d8 = 0;
              uStack_3c0 = 0;
              uStack_3c8 = 0;
              uStack_3b0 = 0;
              uStack_3b8 = 0;
              lStack_3a8 = -1;
              uStack_398 = 0;
              uStack_3a0 = 0;
              uStack_388 = 0;
              uStack_390 = 0;
              uStack_380 = 0;
              lStack_350 = 0x3f800000;
              lStack_358 = 0;
              lStack_340 = 0x3f80000000000000;
              lStack_348 = 0;
              lStack_370 = 0;
              lStack_378 = 0x3f800000;
              lStack_360 = 0;
              lStack_368 = 0x3f80000000000000;
              uStack_304 = 0;
              lStack_338 = 0;
              lStack_330 = 0;
              uStack_328 = uStack_328 & 0xffffff00;
              uStack_31c = 0;
              uStack_318 = 0;
              uStack_314 = 0;
              uStack_310 = 0;
              uStack_30c = 0;
              uStack_308 = uStack_308 & 0xffffff00;
              uStack_324 = 0;
              uStack_320 = 0;
              pcVar34 = *(code **)(pcVar58 + 0x28);
              pcVar40 = pcVar17;
              if (pcVar34 != (code *)0x0) {
                pcVar46 = pcVar34 + -1;
                if (((ulong)pcVar34 & (ulong)pcVar46) == 0) {
                  pcVar40 = (code *)((ulong)pcVar46 & (ulong)pcVar27);
                }
                else {
                  pcVar40 = pcVar27;
                  if (pcVar34 <= pcVar27) {
                    uVar57 = 0;
                    if (pcVar34 != (code *)0x0) {
                      uVar57 = (ulong)pcVar27 / (ulong)pcVar34;
                    }
                    pcVar40 = pcVar27 + -(uVar57 * (long)pcVar34);
                  }
                }
                puVar43 = *(undefined8 **)(*(long *)pcVar2 + (long)pcVar40 * 8);
                if (puVar43 != (undefined8 *)0x0) {
                  for (pcVar32 = (code *)*puVar43; pcVar32 != (code *)0x0;
                      pcVar32 = *(code **)pcVar32) {
                    pcVar35 = *(code **)(pcVar32 + 8);
                    if (pcVar35 == pcVar27) {
                      if (*(long *)(pcVar32 + 0x10) == lVar30 &&
                          *(code **)(pcVar32 + 0x18) == pcVar27) goto LAB_10a17ad14;
                    }
                    else {
                      if (((ulong)pcVar34 & (ulong)pcVar46) == 0) {
                        pcVar35 = (code *)((ulong)pcVar35 & (ulong)pcVar46);
                      }
                      else if (pcVar34 <= pcVar35) {
                        uVar57 = 0;
                        if (pcVar34 != (code *)0x0) {
                          uVar57 = (ulong)pcVar35 / (ulong)pcVar34;
                        }
                        pcVar35 = pcVar35 + -(uVar57 * (long)pcVar34);
                      }
                      if (pcVar35 != pcVar40) break;
                    }
                  }
                }
              }
              pcVar32 = (code *)0x150;
              __Znwm();
              puStack_2d0 = (undefined8 *)0x1;
              *(long *)pcVar32 = 0;
              *(code **)(pcVar32 + 8) = pcVar27;
              lVar30 = plVar55[1];
              *(long *)(pcVar32 + 0x18) = plVar55[2];
              *(long *)(pcVar32 + 0x10) = lVar30;
              *(long *)(pcVar32 + 0x20) = 0;
              *(long *)(pcVar32 + 0x28) = 0;
              uStack_430._0_1_ = (code)0x0;
              uStack_430._1_2_ = 0;
              uStack_430._3_1_ = 0;
              uStack_430._4_4_ = 0;
              uStack_428 = 0;
              uStack_425 = 0;
              *(undefined2 *)(pcVar32 + 0x30) = uStack_420;
              pcVar32[0x38] = (code)0x0;
              *(long *)(pcVar32 + 0x40) = 0;
              *(long *)(pcVar32 + 0x48) = 0;
              uStack_410 = 0;
              uStack_408 = 0;
              *(long *)(pcVar32 + 0x50) = 0;
              *(long *)(pcVar32 + 0x58) = 0;
              *(long *)(pcVar32 + 0x60) = 0;
              *(long *)(pcVar32 + 0x68) = 0;
              uStack_400 = 0;
              uStack_3f8 = 0;
              uStack_3f0 = 0;
              uStack_3e8 = 0;
              *(long *)(pcVar32 + 0x70) = 0;
              *(long *)(pcVar32 + 0x78) = 0;
              uStack_3e0 = 0;
              uStack_3d8 = 0;
              *(long *)(pcVar32 + 0x80) = 0;
              *(long *)(pcVar32 + 0x88) = 0;
              *(long *)(pcVar32 + 0x90) = 0;
              *(long *)(pcVar32 + 0x98) = 0;
              uStack_3d0 = 0;
              uStack_3c8 = 0;
              uStack_3c0 = 0;
              uStack_3b8 = 0;
              uStack_3b0 = 0;
              *(long *)(pcVar32 + 0xa0) = 0;
              *(long *)(pcVar32 + 0xa8) = lStack_3a8;
              *(long *)(pcVar32 + 0xb0) = 0;
              *(long *)(pcVar32 + 0xb8) = 0;
              uStack_3a0 = 0;
              uStack_398 = 0;
              *(long *)(pcVar32 + 200) = 0;
              *(long *)(pcVar32 + 0xd0) = 0;
              *(long *)(pcVar32 + 0xc0) = 0;
              uStack_390 = 0;
              uStack_388 = 0;
              uStack_380 = 0;
              *(long *)(pcVar32 + 0x100) = lStack_350;
              *(long *)(pcVar32 + 0xf8) = lStack_358;
              *(long *)(pcVar32 + 0xf0) = lStack_360;
              *(long *)(pcVar32 + 0xe8) = lStack_368;
              *(long *)(pcVar32 + 0xe0) = lStack_370;
              *(long *)(pcVar32 + 0xd8) = lStack_378;
              *(long *)(pcVar32 + 0x148) = CONCAT44(uStack_304,uStack_308);
              *(long *)(pcVar32 + 0x130) = CONCAT44(uStack_31c,uStack_320);
              *(long *)(pcVar32 + 0x128) = CONCAT44(uStack_324,uStack_328);
              *(long *)(pcVar32 + 0x140) = CONCAT44(uStack_30c,uStack_310);
              *(long *)(pcVar32 + 0x138) = CONCAT44(uStack_314,uStack_318);
              *(long *)(pcVar32 + 0x110) = lStack_340;
              *(long *)(pcVar32 + 0x108) = lStack_348;
              *(long *)(pcVar32 + 0x120) = lStack_330;
              *(long *)(pcVar32 + 0x118) = lStack_338;
              pcStack_2e0 = pcVar32;
              pcStack_2d8 = pcVar2;
              if ((pcVar34 == (code *)0x0) ||
                 (*(float *)(pcVar58 + 0x40) * (float)pcVar34 <
                  (float)(*(long *)(pcVar58 + 0x38) + 1))) {
                if (pcVar34 < (code *)0x3) {
                  uVar57 = 1;
                }
                else {
                  uVar57 = (ulong)(((ulong)pcVar34 & (ulong)(pcVar34 + -1)) != 0);
                }
                pcVar40 = (code *)(uVar57 | (long)pcVar34 << 1);
                pcVar34 = (code *)(long)((float)(*(long *)(pcVar58 + 0x38) + 1) /
                                        *(float *)(pcVar58 + 0x40));
                if (pcVar40 <= pcVar34) {
                  pcVar40 = pcVar34;
                }
                if (pcVar40 + -1 == (code *)0x0) {
                  pcVar40 = (code *)0x2;
                }
                else if (((ulong)pcVar40 & (ulong)(pcVar40 + -1)) != 0) {
                  __ZNSt3__112__next_primeEm();
                }
                pcVar34 = *(code **)(pcVar58 + 0x28);
                if (pcVar34 < pcVar40) {
LAB_10a17aaf8:
                  if ((ulong)pcVar40 >> 0x3d != 0) goto LAB_10a17d304;
                  lVar30 = (long)pcVar40 << 3;
                  __Znwm();
                  lVar33 = *(long *)pcVar2;
                  *(long *)pcVar2 = lVar30;
                  if (lVar33 != 0) {
                    __ZdlPv();
                  }
                  pcVar34 = (code *)0x0;
                  *(code **)(pcVar58 + 0x28) = pcVar40;
                  do {
                    *(undefined8 *)(*(long *)pcVar2 + (long)pcVar34 * 8) = 0;
                    pcVar34 = pcVar34 + 1;
                  } while (pcVar40 != pcVar34);
                  plVar50 = *(long **)pcVar3;
                  pcVar34 = pcVar40;
                  if (plVar50 != (long *)0x0) {
                    pcVar46 = (code *)plVar50[1];
                    pcVar35 = pcVar40 + -1;
                    if (((ulong)pcVar40 & (ulong)pcVar35) == 0) {
                      pcVar46 = (code *)((ulong)pcVar46 & (ulong)pcVar35);
                    }
                    else if (pcVar40 <= pcVar46) {
                      uVar57 = 0;
                      if (pcVar40 != (code *)0x0) {
                        uVar57 = (ulong)pcVar46 / (ulong)pcVar40;
                      }
                      pcVar46 = pcVar46 + -(uVar57 * (long)pcVar40);
                    }
                    *(code **)(*(long *)pcVar2 + (long)pcVar46 * 8) = pcVar3;
                    plVar44 = (long *)*plVar50;
                    while (plVar44 != (long *)0x0) {
                      pcVar47 = (code *)plVar44[1];
                      if (((ulong)pcVar40 & (ulong)pcVar35) == 0) {
                        pcVar47 = (code *)((ulong)pcVar47 & (ulong)pcVar35);
                      }
                      else if (pcVar40 <= pcVar47) {
                        uVar57 = 0;
                        if (pcVar40 != (code *)0x0) {
                          uVar57 = (ulong)pcVar47 / (ulong)pcVar40;
                        }
                        pcVar47 = pcVar47 + -(uVar57 * (long)pcVar40);
                      }
                      plVar38 = plVar44;
                      if (pcVar47 != pcVar46) {
                        lVar30 = *(long *)pcVar2;
                        if (*(long *)(lVar30 + (long)pcVar47 * 8) == 0) {
                          *(long **)(lVar30 + (long)pcVar47 * 8) = plVar50;
                          pcVar46 = pcVar47;
                        }
                        else {
                          *plVar50 = *plVar44;
                          *plVar44 = **(undefined8 **)(lVar30 + (long)pcVar47 * 8);
                          **(long **)(lVar30 + (long)pcVar47 * 8) = (long)plVar44;
                          plVar38 = plVar50;
                        }
                      }
                      plVar50 = plVar38;
                      plVar44 = (long *)*plVar38;
                    }
                  }
                }
                else if (pcVar40 < pcVar34) {
                  pcVar46 = (code *)(long)((float)*(ulong *)(pcVar58 + 0x38) /
                                          *(float *)(pcVar58 + 0x40));
                  if ((pcVar34 < (code *)0x3) || (((ulong)pcVar34 & (ulong)(pcVar34 + -1)) != 0)) {
                    __ZNSt3__112__next_primeEm();
                  }
                  else if ((code *)0x1 < pcVar46) {
                    pcVar46 = (code *)(1L << (-LZCOUNT(pcVar46 + -1) & 0x3fU));
                  }
                  if (pcVar40 <= pcVar46) {
                    pcVar40 = pcVar46;
                  }
                  if (pcVar40 < pcVar34) {
                    if (pcVar40 != (code *)0x0) goto LAB_10a17aaf8;
                    lVar30 = *(long *)pcVar2;
                    *(long *)pcVar2 = 0;
                    if (lVar30 != 0) {
                      __ZdlPv();
                    }
                    *(long *)(pcVar58 + 0x28) = 0;
                    pcVar34 = (code *)0x0;
                  }
                  else {
                    pcVar34 = *(code **)(pcVar58 + 0x28);
                  }
                }
                if (((ulong)pcVar34 & (ulong)(pcVar34 + -1)) == 0) {
                  pcVar40 = (code *)((ulong)(pcVar34 + -1) & (ulong)pcVar27);
                }
                else {
                  pcVar40 = pcVar27;
                  if (pcVar34 <= pcVar27) {
                    uVar57 = 0;
                    if (pcVar34 != (code *)0x0) {
                      uVar57 = (ulong)pcVar27 / (ulong)pcVar34;
                    }
                    pcVar40 = pcVar27 + -(uVar57 * (long)pcVar34);
                  }
                }
              }
              lVar30 = *(long *)pcVar2;
              plVar50 = *(long **)(lVar30 + (long)pcVar40 * 8);
              if (plVar50 == (long *)0x0) {
                *(long *)pcVar32 = *(long *)pcVar3;
                *(code **)pcVar3 = pcVar32;
                *(code **)(lVar30 + (long)pcVar40 * 8) = pcVar3;
                if (*(long *)pcVar32 != 0) {
                  pcVar27 = *(code **)(*(long *)pcVar32 + 8);
                  if (((ulong)pcVar34 & (ulong)(pcVar34 + -1)) == 0) {
                    pcVar27 = (code *)((ulong)pcVar27 & (ulong)(pcVar34 + -1));
                  }
                  else if (pcVar34 <= pcVar27) {
                    uVar57 = 0;
                    if (pcVar34 != (code *)0x0) {
                      uVar57 = (ulong)pcVar27 / (ulong)pcVar34;
                    }
                    pcVar27 = pcVar27 + -(uVar57 * (long)pcVar34);
                  }
                  plVar50 = (long *)(*(long *)pcVar2 + (long)pcVar27 * 8);
                  goto LAB_10a17ad04;
                }
              }
              else {
                *(long *)pcVar32 = *plVar50;
LAB_10a17ad04:
                *plVar50 = (long)pcVar32;
              }
              *(long *)(pcVar58 + 0x38) = *(long *)(pcVar58 + 0x38) + 1;
LAB_10a17ad14:
              func_0x00010a192104(&uStack_430);
              pcStack_590 = pcVar32 + 0x10;
              pcVar32 = pcVar32 + 0x20;
LAB_10a17ad28:
              cVar59 = uStack_48f;
              if ((*(long *)(pcVar32 + 0x80) != 0) &&
                 (((uint)*(undefined8 *)(*(long *)(pcVar32 + 0x80) + 0x10) >> 1 & 1) == 0)) {
                FUN_109d1a244();
              }
              lVar33 = *(long *)(lVar54 + 0x518);
              lVar30 = *(long *)(lVar54 + 0x520);
              if (lVar30 != 0) {
                plVar50 = (long *)(lVar30 + 0x10);
                do {
                  cVar13 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar50,0x10);
                  if (bVar22) {
                    *plVar50 = *plVar50 + 1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
              }
              lVar26 = *(long *)(pcVar32 + 8);
              *(long *)pcVar32 = lVar33;
              *(long *)(pcVar32 + 8) = lVar30;
              if (lVar26 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              FUN_10a0d0194(&pcStack_188,&uStack_430);
              func_0x000107c2b074(&pcStack_140,&PTR_DAT_110ba9a58);
              if ((long)puStack_130 < 0) {
                func_0x000107c3192c(&pcStack_2e0,pcStack_140,uStack_138);
              }
              else {
                pcStack_2d8 = (code *)uStack_138;
                pcStack_2e0 = pcStack_140;
                puStack_2d0 = puStack_130;
              }
              cVar20 = (code)(((ulong)plVar60 & 0x10) == 0);
              pcStack_2c8 = pcStack_128;
              uStack_2c0 = 0x300000000;
              uStack_2b8._0_5_ = CONCAT14(cVar20,2);
              uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
              FUN_10ab6f520(&uStack_430,&pcStack_2e0,1);
              pcVar27 = pcStack_188;
              *(uint *)(pcStack_188 + 0xf0) =
                   CONCAT13(uStack_430._3_1_,CONCAT21(uStack_430._1_2_,uStack_430._0_1_));
              if (pcStack_188 + 0xf0 != (code *)&uStack_430) {
                lVar30 = CONCAT17((char)uStack_419,
                                  CONCAT43(uStack_41d,CONCAT12(uStack_41e,uStack_420)));
                FUN_10a1903c4(pcStack_188 + 0xf8,CONCAT53(uStack_425,uStack_428),lVar30,
                              (lVar30 - CONCAT53(uStack_425,uStack_428) >> 3) * 0x6db6db6db6db6db7);
              }
              *(undefined8 *)(pcVar27 + 0x118) = uStack_408;
              *(undefined8 *)(pcVar27 + 0x110) = uStack_410;
              *(undefined8 *)(pcVar27 + 0x128) = uStack_3f8;
              *(undefined8 *)(pcVar27 + 0x120) = uStack_400;
              *(undefined8 *)(pcVar27 + 0x130) = uStack_3f0;
              puStack_210 = &uStack_428;
              func_0x00010a190844(&puStack_210);
              if ((long)puStack_2d0 < 0) {
                __ZdlPv(pcStack_2e0);
              }
              if ((long)puStack_130 < 0) {
                __ZdlPv(pcStack_140);
              }
              uVar29 = 1;
              if (cVar59 != (code)0x0) {
                uVar29 = 2;
              }
              *(undefined4 *)(pcStack_188 + 0x134) = uVar29;
              *(undefined8 *)(pcStack_188 + 0xe8) = 0x100000000;
              lVar30 = *(long *)(pcStack_188 + 0x10);
              uVar57 = *(long *)(pcStack_188 + 0x18) - lVar30;
              if (uVar57 < 0x40) {
                func_0x000107c27d58(pcStack_188 + 0x10,0x40 - uVar57);
              }
              else if (uVar57 != 0x40) {
                *(long *)(pcStack_188 + 0x18) = lVar30 + 0x40;
              }
              pcVar27 = pcStack_188;
              uStack_425 = 0;
              uStack_420 = 0;
              uStack_41e = 0;
              uStack_430._3_1_ = 0;
              uStack_430._4_4_ = 0;
              uStack_428 = 0;
              uStack_41d = 0;
              uStack_419 = 0;
              pcVar34 = pcStack_188 + 0xd0;
              puVar43 = *(undefined8 **)pcVar34;
              if (*(undefined8 **)(pcStack_188 + 0xe0) == puVar43) {
                if (*(undefined8 **)(pcStack_188 + 0xe0) != (undefined8 *)0x0) {
                  *(undefined8 **)(pcStack_188 + 0xd8) = puVar43;
                  __ZdlPv();
                  *(undefined8 *)pcVar34 = 0;
                  *(undefined8 *)(pcVar27 + 0xd8) = 0;
                  *(undefined8 *)(pcVar27 + 0xe0) = 0;
                }
                puVar28 = (undefined8 *)0x68;
                __Znwm();
                *(undefined8 **)(pcVar27 + 0xd0) = puVar28;
                puVar43 = puVar28 + 0xd;
                *(undefined8 **)(pcVar27 + 0xe0) = puVar43;
                *(ulong *)((long)puVar28 + 0x15) = CONCAT53(uStack_425,uStack_428);
                *(ulong *)((long)puVar28 + 0xd) =
                     CONCAT44(uStack_430._4_4_,
                              CONCAT13(uStack_430._3_1_,CONCAT21(uStack_430._1_2_,uStack_430._0_1_))
                             );
                puVar28[4] = CONCAT44(uStack_419,uStack_41d);
                puVar28[3] = CONCAT17(uStack_41e,CONCAT25(uStack_420,uStack_425));
                puVar28[6] = 0;
                puVar28[5] = 0x3f800000;
                puVar28[8] = 0;
                puVar28[7] = 0x3f80000000000000;
                puVar28[10] = 0x3f800000;
                puVar28[9] = 0;
                *puVar28 = 0x400000000;
                *(undefined4 *)(puVar28 + 1) = 0;
                *(undefined1 *)((long)puVar28 + 0xc) = 0;
                puVar28[0xc] = 0x3f80000000000000;
                puVar28[0xb] = 0;
              }
              else {
                puVar28 = *(undefined8 **)(pcStack_188 + 0xd8);
                if (puVar28 == puVar43) {
                  *puVar28 = 0x400000000;
                  *(undefined4 *)(puVar28 + 1) = 0;
                  *(undefined1 *)((long)puVar28 + 0xc) = 0;
                  *(undefined8 *)((long)puVar28 + 0x15) = 0;
                  *(ulong *)((long)puVar28 + 0xd) =
                       (ulong)CONCAT21(uStack_430._1_2_,uStack_430._0_1_);
                  puVar28[4] = 0;
                  puVar28[3] = 0;
                  puVar28[6] = 0;
                  puVar28[5] = 0x3f800000;
                  puVar28[8] = 0;
                  puVar28[7] = 0x3f80000000000000;
                  puVar28[10] = 0x3f800000;
                  puVar28[9] = 0;
                  puVar28[0xc] = 0x3f80000000000000;
                  puVar28[0xb] = 0;
                  puVar43 = puVar28 + 0xd;
                }
                else {
                  *puVar43 = 0x400000000;
                  *(undefined4 *)(puVar43 + 1) = 0;
                  *(undefined1 *)((long)puVar43 + 0xc) = 0;
                  *(undefined8 *)((long)puVar43 + 0x15) = 0;
                  *(ulong *)((long)puVar43 + 0xd) =
                       (ulong)CONCAT21(uStack_430._1_2_,uStack_430._0_1_);
                  puVar43[4] = 0;
                  puVar43[3] = 0;
                  puVar43[6] = 0;
                  puVar43[5] = 0x3f800000;
                  puVar43[8] = 0;
                  puVar43[7] = 0x3f80000000000000;
                  puVar43[10] = 0x3f800000;
                  puVar43[9] = 0;
                  puVar43[0xc] = 0x3f80000000000000;
                  puVar43[0xb] = 0;
                  puVar43 = puVar43 + 0xd;
                }
              }
              *(undefined8 **)(pcVar27 + 0xd8) = puVar43;
              lVar30 = *(long *)(lVar54 + 0x518);
              auVar65 = *(undefined1 (*) [16])(lVar30 + 0x158);
              uVar57 = *(ulong *)(lVar30 + 0x168);
              fVar69 = auVar65._0_4_;
              auVar64._8_8_ = 0;
              auVar64._0_8_ = uVar57;
              auVar68 = NEON_ext(auVar65,auVar64,8,1);
              auVar14._4_4_ = auVar65._8_4_;
              auVar14._0_4_ = fVar69;
              auVar14._8_4_ = fVar69;
              auVar14._12_4_ = auVar65._8_4_;
              auVar64 = NEON_ext(auVar14,auVar65,0xc,1);
              auVar15._4_8_ = auVar64._8_8_;
              auVar15._0_4_ = auVar64._4_4_ - auVar68._4_4_;
              auVar65._0_8_ = auVar15._0_8_ << 0x20;
              auVar65._8_4_ = auVar64._8_4_ - auVar68._8_4_;
              auVar65._12_4_ = auVar64._12_4_ - auVar68._12_4_;
              fVar70 = *(float *)(lVar30 + 0x15c);
              auVar68._4_12_ = auVar65._4_12_;
              auVar68._0_4_ = auVar64._0_4_ + (float)(uVar57 >> 0x20);
              *(float *)(pcStack_188 + 0x138) = fVar69 + *(float *)(lVar30 + 0x164);
              *(float *)(pcStack_188 + 0x13c) = fVar70 + (float)uVar57;
              *(long *)(pcStack_188 + 0x148) = auVar65._8_8_;
              *(long *)(pcStack_188 + 0x140) = auVar68._0_8_;
              pcVar27 = *(code **)(lVar54 + 0x170);
              puVar28 = (undefined8 *)0x120;
              pcStack_140 = pcVar27;
              __Znwm();
              puVar28[1] = 0;
              puVar28[2] = 0;
              puVar43 = puVar28 + 3;
              *puVar28 = &PTR_FUN_110bab2f0;
              FUN_10ac6ea60(puVar43,pcVar27,1,&pcStack_188);
              uStack_430._0_1_ = SUB81(puVar43,0);
              uStack_430._1_2_ = (undefined2)((ulong)puVar43 >> 8);
              uStack_430._3_1_ = (undefined1)((ulong)puVar43 >> 0x18);
              uStack_430._4_4_ = (undefined4)((ulong)puVar43 >> 0x20);
              uStack_428 = SUB83(puVar28,0);
              uStack_425 = (undefined5)((ulong)puVar28 >> 0x18);
              FUN_10a192354(&uStack_430,puVar28 + 0xb,puVar43);
              plVar50 = (long *)CONCAT44(uStack_430._4_4_,
                                         CONCAT13(uStack_430._3_1_,
                                                  CONCAT21(uStack_430._1_2_,uStack_430._0_1_)));
              if (*(char *)((long)plVar50 + 0xb9) != '\x01') {
                *(undefined1 *)((long)plVar50 + 0xb9) = 1;
                (**(code **)(*plVar50 + 0xa0))();
              }
              FUN_10a1921d0(&pcStack_2e0,&pcStack_140,&uStack_430);
              FUN_10a192264(pcVar32 + 0x90,&pcStack_2e0);
              pcVar27 = pcStack_2d8;
              if (pcStack_2d8 != (code *)0x0) {
                pcVar34 = pcStack_2d8 + 8;
                do {
                  lVar30 = *(long *)pcVar34;
                  cVar13 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(pcVar34,0x10);
                  if (bVar22) {
                    *(long *)pcVar34 = lVar30 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (lVar30 == 0) {
                  (**(code **)(*(long *)pcStack_2d8 + 0x10))(pcStack_2d8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar27);
                }
              }
              pcVar32[0x10] = cVar59;
              pcVar32[0x11] = cVar20;
              plVar50 = (long *)CONCAT53(uStack_425,uStack_428);
              if (plVar50 != (long *)0x0) {
                plVar44 = plVar50 + 1;
                do {
                  lVar30 = *plVar44;
                  cVar13 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar44,0x10);
                  if (bVar22) {
                    *plVar44 = lVar30 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (lVar30 == 0) {
                  (**(code **)(*plVar50 + 0x10))(plVar50);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar50);
                }
              }
              plVar50 = plStack_180;
              if (plStack_180 != (long *)0x0) {
                plVar44 = plStack_180 + 1;
                do {
                  lVar30 = *plVar44;
                  cVar13 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar44,0x10);
                  if (bVar22) {
                    *plVar44 = lVar30 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (lVar30 == 0) {
                  (**(code **)(*plStack_180 + 0x10))(plStack_180);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar50);
                }
              }
              bVar22 = true;
LAB_10a17b1a4:
              iStack_4d8 = 0;
              pcStack_4c8 = (code *)0x0;
              pcStack_4c0 = (code *)0x0;
              pcStack_4d0 = (code *)0x0;
              afStack_4b8[0] = 0.0;
              pcStack_4a8 = (code *)0x0;
              pcStack_4b0 = (code *)0x0;
              pcStack_498 = (code *)0x0;
              pcStack_4a0 = (code *)0x0;
              func_0x00010a5ef2b4(&uStack_430,lVar54);
              pcVar34 = pcStack_4a8;
              pcStack_4b0 = (code *)CONCAT44(uStack_430._4_4_,
                                             CONCAT13(uStack_430._3_1_,
                                                      CONCAT21(uStack_430._1_2_,uStack_430._0_1_)));
              pcVar27 = (code *)CONCAT53(uStack_425,uStack_428);
              uStack_430._0_1_ = (code)0x0;
              uStack_430._1_2_ = 0;
              uStack_430._3_1_ = 0;
              uStack_430._4_4_ = 0;
              uStack_428 = 0;
              uStack_425 = 0;
              if (pcStack_4a8 != (code *)0x0) {
                plVar50 = (long *)((long)pcStack_4a8 + 8);
                do {
                  lVar30 = *plVar50;
                  cVar13 = '\x01';
                  bVar21 = (bool)ExclusiveMonitorPass(plVar50,0x10);
                  if (bVar21) {
                    *plVar50 = lVar30 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (lVar30 == 0) {
                  lVar30 = *(long *)pcStack_4a8;
                  pcStack_4a8 = pcVar27;
                  (**(code **)(lVar30 + 0x10))(pcVar34);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar34);
                  pcVar27 = pcStack_4a8;
                }
              }
              pcStack_4a8 = pcVar27;
              plVar50 = (long *)CONCAT53(uStack_425,uStack_428);
              if (plVar50 != (long *)0x0) {
                plVar44 = plVar50 + 1;
                do {
                  lVar30 = *plVar44;
                  cVar13 = '\x01';
                  bVar21 = (bool)ExclusiveMonitorPass(plVar44,0x10);
                  if (bVar21) {
                    *plVar44 = lVar30 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (lVar30 == 0) {
                  (**(code **)(*plVar50 + 0x10))(plVar50);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar50);
                }
              }
              if (*(long *)(lVar54 + 0x570) != 0) {
                FUN_10a7d9e20(*(long *)(lVar54 + 0x570),&pcStack_4b0);
              }
              pcVar27 = pcStack_4b0;
              if (pcStack_4b0 == (code *)0x0) {
                iStack_4d8 = 0;
LAB_10a17b52c:
                if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                  func_0x00010ae06f08(1,2,&UNK_10f640ca6,&UNK_10f640cf3,0x487,&UNK_10f640e19);
                }
              }
              else {
                if (*(int *)(lVar53 + 0xf0) < 2) {
                  iStack_4d8 = 1;
                  pcStack_4d0 = pcStack_4b0;
                  goto LAB_10a17b520;
                }
                if ((*(byte *)(lVar54 + 0x556) & 1) == 0) {
                  pcVar34 = pcStack_4b0;
                  ___dynamic_cast(pcStack_4b0,&PTR_DAT_110ba75e8,&PTR_DAT_110ba75f8,0);
                  if (pcVar34 == (code *)0x0) {
                    pcVar34 = pcVar27;
                    ___dynamic_cast(pcVar27,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0);
                    if (pcVar34 == (code *)0x0) {
                      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                        func_0x00010ae06f08(1,2,&UNK_10f640ca6,&UNK_10f640f38,0x3b5,&UNK_10f640fe7,
                                            param_7,param_8,*(undefined4 *)(pcVar27 + 8));
                      }
                      pcVar27 = pcStack_4a8;
                      pcStack_4b0 = (code *)0x0;
                      pcStack_4a8 = (code *)0x0;
                      if (pcVar27 == (code *)0x0) goto LAB_10a17b520;
                      pcVar34 = pcVar27 + 8;
                      do {
                        lVar30 = *(long *)pcVar34;
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(pcVar34,0x10);
                        if (bVar21) {
                          *(long *)pcVar34 = lVar30 + -1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      goto LAB_10a17b4fc;
                    }
                    iStack_4d8 = 2;
                    pcStack_4d0 = *(code **)(pcVar34 + 0xb8);
                    pcStack_4c8 = pcVar34;
                  }
                  else {
                    iStack_4d8 = 1;
                    pcStack_4d0 = pcVar34;
                  }
                }
                else {
                  if (*(long *)(lVar54 + 0x570) == 0) {
                    pcVar34 = (code *)0x0;
                    uStack_138 = (undefined **)0x0;
                    pcStack_140 = (code *)0x0;
                  }
                  else {
                    FUN_10a7d9d20(&pcStack_140);
                    if (pcStack_140 == (code *)0x0) {
                      pcVar34 = (code *)0x0;
                    }
                    else {
                      pcVar34 = pcStack_140;
                      ___dynamic_cast(pcStack_140,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0);
                    }
                  }
                  fVar69 = (float)func_0x00010a5ef368(lVar54);
                  pcVar40 = pcVar27;
                  ___dynamic_cast(pcVar27,&PTR_DAT_110ba75e8,&PTR_DAT_110ba75f8,0);
                  if (pcVar40 == (code *)0x0) {
                    pcVar40 = pcVar27;
                    ___dynamic_cast(pcVar27,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0);
                    if (pcVar40 == (code *)0x0) {
                      __ZNSt3__19to_stringEi(&pcStack_2e0,*(undefined4 *)(pcVar27 + 8));
                      FUN_109feb280(&uStack_430,&UNK_10f641021,&pcStack_2e0);
                      FUN_10a0029c0(&uStack_430);
                      goto LAB_10a17d36c;
                    }
                    pcStack_4c8 = pcVar40;
                    if ((((pcVar34 == (code *)0x0) || (*(long *)(pcVar34 + 0xb8) == 0)) ||
                        (*(long *)(pcVar40 + 0xb8) == 0)) ||
                       (*(int *)(*(long *)(pcVar34 + 0xb8) + 8) !=
                        *(int *)(*(long *)(pcVar40 + 0xb8) + 8))) {
                      iStack_4d8 = 2;
                      pcVar40 = *(code **)(pcVar40 + 0xb8);
                      goto LAB_10a17b474;
                    }
                    iStack_4d8 = 4;
                    pcStack_4d0 = *(code **)(pcVar40 + 0xb8);
                    pcStack_4c0 = pcVar34;
                    afStack_4b8[0] = fVar69;
LAB_10a17b480:
                    pcVar27 = pcStack_498;
                    if (uStack_138 != (undefined **)0x0) {
                      pcVar34 = (code *)((long)uStack_138 + 8);
                      do {
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(pcVar34,0x10);
                        if (bVar21) {
                          *(long *)pcVar34 = *(long *)pcVar34 + 1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                    }
                    pcStack_498 = (code *)uStack_138;
                    pcStack_4a0 = pcStack_140;
                    if (pcVar27 != (code *)0x0) {
                      pcVar34 = pcVar27 + 8;
                      do {
                        lVar30 = *(long *)pcVar34;
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(pcVar34,0x10);
                        if (bVar21) {
                          *(long *)pcVar34 = lVar30 + -1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if (lVar30 == 0) {
                        (**(code **)(*(long *)pcVar27 + 0x10))(pcVar27);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar27);
                      }
                    }
                  }
                  else {
                    if (pcVar34 != (code *)0x0) {
                      iStack_4d8 = 3;
                      pcStack_4d0 = pcVar40;
                      pcStack_4c0 = pcVar34;
                      afStack_4b8[0] = fVar69;
                      goto LAB_10a17b480;
                    }
                    iStack_4d8 = 1;
LAB_10a17b474:
                    pcStack_4d0 = pcVar40;
                    if (pcStack_4c0 != (code *)0x0) goto LAB_10a17b480;
                  }
                  if (uStack_138 != (undefined **)0x0) {
                    pcVar34 = (code *)((long)uStack_138 + 8);
                    do {
                      lVar30 = *(long *)pcVar34;
                      cVar13 = '\x01';
                      bVar21 = (bool)ExclusiveMonitorPass(pcVar34,0x10);
                      if (bVar21) {
                        *(long *)pcVar34 = lVar30 + -1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                      pcVar27 = (code *)uStack_138;
                    } while (cVar13 != '\0');
LAB_10a17b4fc:
                    if (lVar30 == 0) {
                      (**(code **)(*(long *)pcVar27 + 0x10))(pcVar27);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar27);
                    }
                  }
                }
LAB_10a17b520:
                pcVar34 = pcStack_4c8;
                pcVar27 = pcStack_4d0;
                if (iStack_4d8 == 0 || pcStack_4d0 == (code *)0x0) goto LAB_10a17b52c;
                if (2 < iStack_4d8) {
                  if (iStack_4d8 == 3) {
                    if ((((0 < *(int *)(pcStack_4d0 + 0x40)) && (0 < *(int *)(pcStack_4d0 + 0x44)))
                        && ((-1 < *(int *)(pcStack_4d0 + 8) && (pcStack_4d0[0x4a] == (code)0x1))))
                       && (((pcVar34 = pcStack_4d0,
                            ___dynamic_cast(pcStack_4d0,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0),
                            pcVar34 == (code *)0x0 || (*(long *)(pcVar34 + 0xb8) != 0)) &&
                           (((**(code **)(*(long *)pcVar27 + 0x18))(), pcVar34 = pcStack_4c0,
                            pcStack_4c0 != (code *)0x0 &&
                            (((((0 < *(int *)(pcStack_4c0 + 0x40) &&
                                (0 < *(int *)(pcStack_4c0 + 0x44))) &&
                               (-1 < *(int *)(pcStack_4c0 + 8))) && (pcStack_4c0[0x4a] == (code)0x1)
                              ) && ((pcVar40 = pcStack_4c0,
                                    ___dynamic_cast(pcStack_4c0,&PTR_DAT_110ba75e8,
                                                    &PTR_DAT_110ba7610,0), pcVar40 == (code *)0x0 ||
                                    (*(long *)(pcVar40 + 0xb8) != 0)))))))))) {
                      (**(code **)(*(long *)pcVar34 + 0x18))();
                      uVar23 = (uint)pcVar27 | (uint)pcVar34;
LAB_10a17b928:
                      if ((afStack_4b8[0] < 0.0) || (1.0 < afStack_4b8[0])) {
                        fVar69 = 1.0;
                        if (afStack_4b8[0] <= 1.0) {
                          fVar69 = afStack_4b8[0];
                        }
                        bVar21 = 0.0 <= afStack_4b8[0];
                        afStack_4b8[0] = 0.0;
                        if (bVar21) {
                          afStack_4b8[0] = fVar69;
                        }
                      }
                      goto LAB_10a17b954;
                    }
                  }
                  else {
                    if (iStack_4d8 != 4) goto LAB_10a17d2f4;
                    if ((((pcStack_4c8 != (code *)0x0) && (0 < *(int *)(pcStack_4c8 + 0x40))) &&
                        ((0 < *(int *)(pcStack_4c8 + 0x44) &&
                         ((-1 < *(int *)(pcStack_4c8 + 8) && (pcStack_4c8[0x4a] == (code)0x1))))))
                       && ((((pcVar27 = pcStack_4c8,
                             ___dynamic_cast(pcStack_4c8,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0),
                             pcVar27 == (code *)0x0 || (*(long *)(pcVar27 + 0xb8) != 0)) &&
                            (((((**(code **)(*(long *)pcVar34 + 0x18))(), pcVar27 = pcStack_4c0,
                               pcStack_4c0 != (code *)0x0 && (0 < *(int *)(pcStack_4c0 + 0x40))) &&
                              (0 < *(int *)(pcStack_4c0 + 0x44))) &&
                             ((-1 < *(int *)(pcStack_4c0 + 8) && (pcStack_4c0[0x4a] == (code)0x1))))
                            )) && (((((pcVar40 = pcStack_4c0,
                                      ___dynamic_cast(pcStack_4c0,&PTR_DAT_110ba75e8,
                                                      &PTR_DAT_110ba7610,0), pcVar40 == (code *)0x0
                                      || (*(long *)(pcVar40 + 0xb8) != 0)) &&
                                     ((((**(code **)(*(long *)pcVar27 + 0x18))(),
                                       pcVar40 = pcStack_4d0, pcStack_4d0 != (code *)0x0 &&
                                       (0 < *(int *)(pcStack_4d0 + 0x40))) &&
                                      (0 < *(int *)(pcStack_4d0 + 0x44))))) &&
                                    ((-1 < *(int *)(pcStack_4d0 + 8) &&
                                     (pcStack_4d0[0x4a] == (code)0x1)))) &&
                                   ((pcVar46 = pcStack_4d0,
                                    ___dynamic_cast(pcStack_4d0,&PTR_DAT_110ba75e8,
                                                    &PTR_DAT_110ba7610,0), pcVar46 == (code *)0x0 ||
                                    (*(long *)(pcVar46 + 0xb8) != 0)))))))) {
                      (**(code **)(*(long *)pcVar40 + 0x18))();
                      uVar23 = (uint)pcVar34 | (uint)pcVar27 | (uint)pcVar40;
                      goto LAB_10a17b928;
                    }
                  }
LAB_10a17d2e8:
                  puStack_5f8 = &UNK_10f63b8ac;
LAB_10a17d2f4:
                  FUN_10a00946c(puStack_5f8);
                  goto LAB_10a17d36c;
                }
                if (iStack_4d8 == 1) {
                  if (((((*(int *)(pcStack_4d0 + 0x40) < 1) || (*(int *)(pcStack_4d0 + 0x44) < 1))
                       || (*(int *)(pcStack_4d0 + 8) < 0)) || (pcStack_4d0[0x4a] != (code)0x1)) ||
                     ((pcVar34 = pcStack_4d0,
                      ___dynamic_cast(pcStack_4d0,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0),
                      pcVar34 != (code *)0x0 && (*(long *)(pcVar34 + 0xb8) == 0))))
                  goto LAB_10a17d2e8;
                  (**(code **)(*(long *)pcVar27 + 0x18))();
                  uVar23 = (uint)pcVar27;
                }
                else {
                  if (iStack_4d8 != 2) goto LAB_10a17d2f4;
                  if ((((*(int *)(pcStack_4d0 + 0x40) < 1) || (*(int *)(pcStack_4d0 + 0x44) < 1)) ||
                      (*(int *)(pcStack_4d0 + 8) < 0)) ||
                     ((((pcStack_4d0[0x4a] != (code)0x1 ||
                        ((pcVar34 = pcStack_4d0,
                         ___dynamic_cast(pcStack_4d0,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0),
                         pcVar34 != (code *)0x0 && (*(long *)(pcVar34 + 0xb8) == 0)))) ||
                       ((**(code **)(*(long *)pcVar27 + 0x18))(), pcVar34 = pcStack_4c8,
                       pcStack_4c8 == (code *)0x0)) ||
                      ((((*(int *)(pcStack_4c8 + 0x40) < 1 || (*(int *)(pcStack_4c8 + 0x44) < 1)) ||
                        ((*(int *)(pcStack_4c8 + 8) < 0 || (pcStack_4c8[0x4a] != (code)0x1)))) ||
                       ((pcVar40 = pcStack_4c8,
                        ___dynamic_cast(pcStack_4c8,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0),
                        pcVar40 != (code *)0x0 && (*(long *)(pcVar40 + 0xb8) == 0))))))))
                  goto LAB_10a17d2e8;
                  (**(code **)(*(long *)pcVar34 + 0x18))();
                  uVar23 = (uint)pcVar27 | (uint)pcVar34;
                }
LAB_10a17b954:
                uStack_520 = *(undefined8 *)((long)plVar37 + 4);
                uStack_518 = *(undefined8 *)((long)plVar37 + 0xc);
                uStack_508 = *(undefined8 *)((long)plVar37 + 0x1c);
                uStack_510 = *(undefined8 *)((long)plVar37 + 0x14);
                uStack_500 = *(undefined8 *)((long)plVar37 + 0x24);
                uStack_4f8 = *(undefined8 *)((long)plVar37 + 0x2c);
                uStack_4e8 = *(undefined8 *)((long)plVar37 + 0x3c);
                uStack_4f0 = *(undefined8 *)((long)plVar37 + 0x34);
                func_0x000109519fd0(&uStack_560,&uStack_48c,&uStack_520);
                func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9a70);
                FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4d0 + 200),0x1137ea790);
                if ((char)uStack_419 < '\0') {
                  __ZdlPv(CONCAT44(uStack_430._4_4_,
                                   CONCAT13(uStack_430._3_1_,
                                            CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                }
                func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9a88);
                FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4d0 + 0xd8),0x1137ea790);
                if ((char)uStack_419 < '\0') {
                  __ZdlPv(CONCAT44(uStack_430._4_4_,
                                   CONCAT13(uStack_430._3_1_,
                                            CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                }
                func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9aa0);
                FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4d0 + 0xe8),0x1137ea790);
                if ((char)uStack_419 < '\0') {
                  __ZdlPv(CONCAT44(uStack_430._4_4_,
                                   CONCAT13(uStack_430._3_1_,
                                            CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                }
                func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ab8);
                FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4d0 + 0xf8),0x1137ea790);
                if ((char)uStack_419 < '\0') {
                  __ZdlPv(CONCAT44(uStack_430._4_4_,
                                   CONCAT13(uStack_430._3_1_,
                                            CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                }
                pcVar27 = pcVar25;
                if (iStack_4d8 < 3) {
                  if (iStack_4d8 == 1) {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ad0);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ae8);
                    pcVar27 = *(code **)(pcVar25 + 0x158);
                    FUN_10a048040(pcVar27,&uStack_430);
                  }
                  else {
                    if (iStack_4d8 != 2) {
LAB_10a17d314:
                      FUN_10a00946c(&UNK_10f641085);
                      goto LAB_10a17d36c;
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ad0);
                    FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ae8);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b00);
                    FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c8 + 0x98),0x1137ea790);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b18);
                    FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c8 + 0xa8),0x1137ea790);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b30);
                    pcStack_2e0 = (code *)CONCAT44(pcStack_2e0._4_4_,0x3f800000);
                    FUN_10a01671c(pcVar25,&uStack_430,&pcStack_2e0);
                  }
                }
                else if (iStack_4d8 == 3) {
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ad0);
                  FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ae8);
                  FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b00);
                  FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c0 + 0x98),0x1137ea790);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b18);
                  FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c0 + 0xa8),0x1137ea790);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b30);
                  FUN_10a01671c(pcVar25,&uStack_430,afStack_4b8);
                }
                else {
                  if (iStack_4d8 != 4) goto LAB_10a17d314;
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ad0);
                  FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ae8);
                  FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b00);
                  FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c8 + 0x98),0x1137ea790);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b18);
                  FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c8 + 0xa8),0x1137ea790);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b48);
                  FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c0 + 0x98),0x1137ea790);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b60);
                  FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcStack_4c0 + 0xa8),0x1137ea790);
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9b30);
                  FUN_10a01671c(pcVar25,&uStack_430,afStack_4b8);
                }
                if ((char)uStack_419 < '\0') {
                  pcVar27 = (code *)CONCAT44(uStack_430._4_4_,
                                             CONCAT13(uStack_430._3_1_,
                                                      CONCAT21(uStack_430._1_2_,uStack_430._0_1_)));
                  __ZdlPv();
                }
                fVar69 = *(float *)((long)plVar55 + 0x104);
                pcVar34 = pcVar32 + 0x80;
                if ((*(long *)pcVar34 != 0) &&
                   (((uint)*(undefined8 *)(*(long *)pcVar34 + 0x10) >> 1 & 1) != 0)) {
                  pcVar27 = pcVar32;
                  FUN_10a1925c0(pcVar32,lVar54);
                }
                if ((*(byte *)(lVar54 + 0x538) & 1) == 0) {
                  FUN_10a08fe30();
                  bVar21 = ((ulong)pcVar27 & 0x10) == 0;
                }
                else {
                  bVar21 = false;
                }
                if (((bVar22 || (uVar23 & 1) != 0) || bVar21) ||
                   (FUN_10a08fe30(), ((uint)pcVar27 >> 1 & 1) != 0)) {
LAB_10a17bf34:
                  if (bVar19) {
                    bVar1 = true;
                    if (bVar22 || (uVar23 & 1) != 0) goto LAB_10a17c0f4;
LAB_10a17c0a4:
                    if (pcStack_4b0 == (code *)0x0) {
                      iVar42 = -1;
                    }
                    else {
                      iVar42 = *(int *)(pcStack_4b0 + 8);
                    }
                    if (iVar42 != *(int *)(pcVar32 + 0xfc)) goto LAB_10a17c0f4;
                    if (*(char *)(lVar54 + 0x556) == '\x01') {
                      bVar22 = 0.001 <= ABS(afStack_4b8[0] - *(float *)(pcVar32 + 0x100));
                    }
                    else {
                      bVar22 = false;
                    }
                  }
                  else {
                    bVar1 = false;
                    uVar57 = 0;
                    do {
                      iVar42 = 0;
                      pfVar6 = (float *)(pcVar32 + (uVar57 * 2 + 0x17) * 8);
                      fVar63 = *(float *)(&uStack_560 + uVar57 * 2) - *pfVar6;
                      fVar70 = *(float *)((long)&uStack_560 + uVar57 * 0x10 + 4) - pfVar6[1];
                      fVar66 = *(float *)(&uStack_558 + uVar57 * 2) - pfVar6[2];
                      if (fVar63 < 0.0) {
                        fVar63 = -fVar63;
                      }
                      if (fVar70 < 0.0) {
                        fVar70 = -fVar70;
                      }
                      if (fVar66 < 0.0) {
                        fVar66 = -fVar66;
                      }
                      uStack_430._0_1_ = (code)0x1;
                      pcStack_2e0 = (code *)CONCAT71(pcStack_2e0._1_7_,1);
                      pcStack_140 = (code *)CONCAT71(pcStack_140._1_7_,1);
                      bVar18 = ABS(*(float *)((long)&uStack_558 + uVar57 * 0x10 + 4) - pfVar6[3]) <
                               0.001;
                      do {
                        if (iVar42 == 1) {
                          ppcVar48 = &pcStack_2e0;
                          fVar67 = fVar70;
                        }
                        else if (iVar42 == 2) {
                          ppcVar48 = &pcStack_140;
                          fVar67 = fVar66;
                        }
                        else {
                          if (iVar42 == 3) goto LAB_10a17c018;
                          ppcVar48 = (code **)&uStack_430;
                          fVar67 = fVar63;
                        }
                        *(bool *)ppcVar48 = fVar67 < 0.001;
                        iVar42 = iVar42 + 1;
                      } while (iVar42 != 4);
                      bVar18 = true;
LAB_10a17c018:
                      iVar42 = 0;
                      while (((uVar36 = (ulong)pcStack_2e0 & 0xff, iVar42 == 1 ||
                              (uVar36 = (ulong)pcStack_140 & 0xff, iVar42 == 2)) ||
                             (uVar36 = (ulong)(byte)uStack_430._0_1_, iVar42 != 3))) {
                        while (iVar42 = iVar42 + 1, (uVar36 & 1) == 0) {
                          if (iVar42 == 3) goto LAB_10a17c09c;
                          uVar36 = 0;
                        }
                      }
                      if (!bVar18) break;
                      uVar36 = uVar57 + 1;
                      bVar1 = 2 < uVar57;
                      uVar57 = uVar36;
                    } while (uVar36 != 4);
LAB_10a17c09c:
                    bVar1 = (bool)(bVar1 ^ 1);
                    if (!bVar22 && (uVar23 & 1) == 0) goto LAB_10a17c0a4;
LAB_10a17c0f4:
                    bVar22 = true;
                  }
                  fVar70 = *(float *)(pcVar32 + 0xf8);
                  FUN_10a08fe30();
                  uVar24 = (uint)pcVar27;
                  if (((bVar1 || ((ulong)pcVar27 & 2) != 0) || bVar22) || fVar70 != fVar69) {
                    if (*(long *)pcVar34 != 0) {
                      if (!bVar22) goto LAB_10a17c150;
                      pcVar27 = pcVar34;
                      FUN_109d1a244();
                    }
                    FUN_10a08fe30();
                    if ((((ulong)pcVar27 & 1) == 0) && ((*(byte *)(lVar54 + 0x548) & 1) == 0)) {
                      bStack_280 = bVar21 & (bStack_490 ^ 1);
                    }
                    else {
                      bStack_280 = 0;
                    }
                    pcStack_2d8 = pcStack_4a8;
                    pcStack_2e0 = pcStack_4b0;
                    if (pcStack_4a8 != (code *)0x0) {
                      pcVar27 = pcStack_4a8 + 8;
                      do {
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
                        if (bVar21) {
                          *(long *)pcVar27 = *(long *)pcVar27 + 1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                    }
                    pcStack_2c8 = uStack_558;
                    puStack_2d0 = uStack_560;
                    uStack_2b8 = uStack_548;
                    uStack_2c0 = uStack_550;
                    uStack_2a8 = uStack_538;
                    uStack_2b0 = uStack_540;
                    uStack_298 = uStack_528;
                    uStack_2a0 = uStack_530;
                    uStack_290 = CONCAT44(fStack_448,uStack_44c);
                    lStack_288 = lStack_444;
                    uStack_274 = *(undefined4 *)(*(long *)(lVar54 + 0x518) + 0x184);
                    pcStack_268 = pcStack_498;
                    pcStack_270 = pcStack_4a0;
                    if (pcStack_498 != (code *)0x0) {
                      pcVar27 = pcStack_498 + 8;
                      do {
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
                        if (bVar21) {
                          *(long *)pcVar27 = *(long *)pcVar27 + 1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                    }
                    fStack_260 = afStack_4b8[0];
                    pcStack_258 = pcVar32 + 0xa0;
                    pcVar27 = pcVar32 + 0x18;
                    fStack_27c = fVar69;
                    uStack_278 = ((ulong)plVar60 & 0x10) == 0;
                    FUN_10a7db460(alStack_300,pcVar27,&pcStack_2e0);
                    puVar43 = (undefined8 *)*puVar62;
                    if (puVar43 == (undefined8 *)0x0) {
                      puStack_438 = &UNK_10f641276;
                      uStack_43c = 1;
                      FUN_109d1a80c();
                      pcStack_188 = *(code **)pcVar27;
                      uStack_1a0 = 0;
                      uStack_1a8 = 0;
                      uStack_190 = 0;
                      uStack_198 = 0;
                      uStack_1b0 = 0;
                      uStack_1b8 = 0;
                      puStack_1c8 = &UNK_1053a6a3c;
                      ppuStack_1c0 = &PTR_DAT_110ae9180;
                      pcStack_140 = FUN_10a062c68;
                      uStack_138 = &PTR_DAT_110b9f9f8;
                      puStack_f8 = &UNK_1053a6a3c;
                      ppuStack_f0 = &PTR_DAT_110ae9180;
                      plStack_180 = (long *)&UNK_1053a6a3c;
                      ppuStack_178 = &PTR_DAT_110ae9180;
                      pcStack_100 = pcStack_188;
                      FUN_10a102184();
                      puStack_210 = *(undefined3 **)(pcVar27 + 0x48);
                      uStack_228 = 0;
                      uStack_230 = 0;
                      uStack_218 = 0;
                      uStack_220 = 0;
                      uStack_238 = 0;
                      uStack_240 = 0;
                      puStack_250 = &UNK_1053a6a3c;
                      ppuStack_248 = &PTR_DAT_110ae9180;
                      puStack_208 = &UNK_1053a6a3c;
                      ppuStack_200 = &PTR_DAT_110ae9180;
                      FUN_10a1929fc(&uStack_430,&pcStack_140,&puStack_438,&uStack_43c,&puStack_210);
                      FUN_10a010148(puVar62,&uStack_430);
                      FUN_10a062c88(&uStack_430);
                      func_0x0001092ba41c(&puStack_210);
                      (*(code *)*ppuStack_248)(&ppuStack_248);
                      func_0x0001092ba41c(&pcStack_100);
                      (*(code *)*uStack_138)(&uStack_138);
                      func_0x0001092ba41c(&pcStack_188);
                      (*(code *)*ppuStack_1c0)(&ppuStack_1c0);
                      puVar43 = (undefined8 *)*puVar62;
                    }
                    plVar55 = (long *)puVar43[2];
                    uStack_138 = (undefined **)0x0;
                    puStack_130 = (undefined8 *)0x0;
                    if (plVar55 == (long *)0x0) {
                      plVar55 = plStack_2e8;
                      if (plStack_2e8 == (long *)0x0) {
LAB_10a17c3f0:
                        uStack_419._1_3_ = SUB83(plVar55,0);
                        uStack_415 = (undefined5)((ulong)plVar55 >> 0x18);
                      }
                      else {
                        if (plStack_2e8 != alStack_300) {
                          (**(code **)(*plStack_2e8 + 0x10))();
                          goto LAB_10a17c3f0;
                        }
                        uStack_419._1_3_ = SUB83(&uStack_430,0);
                        uStack_415 = (undefined5)((ulong)&uStack_430 >> 0x18);
                        (**(code **)(*plStack_2e8 + 0x18))(plStack_2e8,&uStack_430);
                      }
                      puVar28 = (undefined8 *)0x150;
                      __Znwm();
                      puVar28[2] = 0;
                      puVar28[1] = 0x200000006;
                      *(undefined2 *)(puVar28 + 3) = 4;
                      puVar28[5] = 0;
                      puVar28[4] = 0;
                      puVar28[7] = 0;
                      puVar28[6] = 0;
                      puVar28[9] = 0;
                      puVar28[8] = 0;
                      puVar28[0xb] = 0;
                      puVar28[10] = 0;
                      puVar28[0xd] = 0;
                      puVar28[0xc] = 0;
                      puVar28[0xf] = 0;
                      puVar28[0xe] = 0;
                      puVar28[0x10] = 0;
                      puVar28[0x11] = puVar28 + 3;
                      puVar28[0x12] = 0;
                      *(undefined1 *)(puVar28 + 0x13) = 0;
                      *(undefined1 *)(puVar28 + 0x22) = 0;
                      pcVar27 = (code *)(puVar28 + 0x23);
                      *puVar28 = &PTR_FUN_110ba9be8;
                      FUN_10a192e28(pcVar27,&uStack_430);
                      *(undefined1 *)(puVar28 + 0x28) = 1;
                      puVar28[0x29] = 0;
                      if (uStack_138 != (undefined **)0x0) {
                        pcVar40 = (code *)((long)uStack_138 + 8);
                        do {
                          uVar57 = *(ulong *)pcVar40;
                          cVar13 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(pcVar40,0x10);
                          if (bVar21) {
                            *(ulong *)pcVar40 = uVar57 - 4;
                            cVar13 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar13 != '\0');
                        if ((uVar57 & 0x1fffffffc) == 4) {
                          do {
                            uVar57 = *(ulong *)pcVar40;
                            cVar13 = '\x01';
                            bVar21 = (bool)ExclusiveMonitorPass(pcVar40,0x10);
                            if (bVar21) {
                              *(ulong *)pcVar40 = uVar57 - 1;
                              cVar13 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar13 != '\0');
                          if (uVar57 - 1 == 0) {
                            (**(code **)((long)*uStack_138 + 8))();
                          }
                        }
                      }
                      uStack_138 = (undefined **)puVar28;
                      if (puStack_130 != (undefined8 *)0x0) {
                        func_0x0001092b4274(&puStack_130);
                      }
                      plVar55 = (long *)CONCAT53(uStack_415,uStack_419._1_3_);
                      pcStack_140 = pcVar27;
                      puStack_130 = puVar28;
                      if (plVar55 == &uStack_430) {
                        lVar30 = 0x20;
LAB_10a17cd7c:
                        (**(code **)(*plVar55 + lVar30))();
                      }
                      else if (plVar55 != (long *)0x0) {
                        lVar30 = 0x28;
                        goto LAB_10a17cd7c;
                      }
                      pcStack_128 = FUN_10a192ba4;
                    }
                    else {
                      pcStack_188 = (code *)0x0;
                      (**(code **)(*plVar55 + 0x28))(plVar55,0,&pcStack_188);
                      if (pcStack_188 != (code *)0x0) {
                        func_0x0001092af97c(&pcStack_188);
                        goto LAB_10a17d36c;
                      }
                      plVar37 = plStack_2e8;
                      if (plStack_2e8 == (long *)0x0) {
LAB_10a17c3c8:
                        uStack_419._1_3_ = SUB83(plVar37,0);
                        uStack_415 = (undefined5)((ulong)plVar37 >> 0x18);
                      }
                      else {
                        if (plStack_2e8 != alStack_300) {
                          (**(code **)(*plStack_2e8 + 0x10))();
                          goto LAB_10a17c3c8;
                        }
                        uStack_419._1_3_ = SUB83(&uStack_430,0);
                        uStack_415 = (undefined5)((ulong)&uStack_430 >> 0x18);
                        (**(code **)(*plStack_2e8 + 0x18))(plStack_2e8,&uStack_430);
                      }
                      puVar28 = (undefined8 *)0x158;
                      __Znwm();
                      puVar28[2] = 0;
                      puVar28[1] = 0x200000006;
                      *(undefined2 *)(puVar28 + 3) = 4;
                      puVar28[5] = 0;
                      puVar28[4] = 0;
                      puVar28[7] = 0;
                      puVar28[6] = 0;
                      puVar28[9] = 0;
                      puVar28[8] = 0;
                      puVar28[0xb] = 0;
                      puVar28[10] = 0;
                      puVar28[0xd] = 0;
                      puVar28[0xc] = 0;
                      puVar28[0xf] = 0;
                      puVar28[0xe] = 0;
                      puVar28[0x10] = 0;
                      puVar28[0x11] = puVar28 + 3;
                      puVar28[0x12] = 0;
                      *(undefined1 *)(puVar28 + 0x13) = 0;
                      *(undefined1 *)(puVar28 + 0x22) = 0;
                      pcVar27 = (code *)(puVar28 + 0x23);
                      *puVar28 = &PTR_FUN_110ba9b98;
                      FUN_10a192e28(pcVar27,&uStack_430);
                      *(undefined1 *)(puVar28 + 0x28) = 1;
                      puVar28[0x29] = 0;
                      puVar28[0x2a] = plVar55;
                      if (uStack_138 != (undefined **)0x0) {
                        pcVar40 = (code *)((long)uStack_138 + 8);
                        do {
                          uVar57 = *(ulong *)pcVar40;
                          cVar13 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(pcVar40,0x10);
                          if (bVar21) {
                            *(ulong *)pcVar40 = uVar57 - 4;
                            cVar13 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar13 != '\0');
                        if ((uVar57 & 0x1fffffffc) == 4) {
                          do {
                            uVar57 = *(ulong *)pcVar40;
                            cVar13 = '\x01';
                            bVar21 = (bool)ExclusiveMonitorPass(pcVar40,0x10);
                            if (bVar21) {
                              *(ulong *)pcVar40 = uVar57 - 1;
                              cVar13 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar13 != '\0');
                          if (uVar57 - 1 == 0) {
                            (**(code **)((long)*uStack_138 + 8))();
                          }
                        }
                      }
                      uStack_138 = (undefined **)puVar28;
                      if (puStack_130 != (undefined8 *)0x0) {
                        func_0x0001092b4274(&puStack_130);
                      }
                      plVar55 = (long *)CONCAT53(uStack_415,uStack_419._1_3_);
                      pcStack_140 = pcVar27;
                      puStack_130 = puVar28;
                      if (plVar55 == &uStack_430) {
                        lVar30 = 0x20;
LAB_10a17cbd0:
                        (**(code **)(*plVar55 + lVar30))();
                      }
                      else if (plVar55 != (long *)0x0) {
                        lVar30 = 0x28;
                        goto LAB_10a17cbd0;
                      }
                      pcStack_128 = FUN_10a192b74;
                      __ZNSt13exception_ptrD1Ev(&pcStack_188);
                    }
                    pcVar27 = pcStack_140;
                    if (*(long *)(pcStack_140 + 0x30) != 0) {
                      func_0x0001092b4274();
                    }
                    *(undefined8 **)(pcVar27 + 0x30) = puStack_130;
                    puStack_130 = (undefined8 *)0x0;
                    uStack_430._0_1_ = SUB81(pcStack_128,0);
                    uStack_430._1_2_ = (undefined2)((ulong)pcStack_128 >> 8);
                    uStack_430._3_1_ = (undefined1)((ulong)pcStack_128 >> 0x18);
                    uStack_430._4_4_ = (undefined4)((ulong)pcStack_128 >> 0x20);
                    uStack_428 = SUB83(pcStack_140,0);
                    uStack_425 = (undefined5)((ulong)pcStack_140 >> 0x18);
                    uStack_420 = SUB82(puVar43,0);
                    uStack_41e = (undefined1)((ulong)puVar43 >> 0x10);
                    uStack_41d = (undefined4)((ulong)puVar43 >> 0x18);
                    uStack_419._0_1_ = (char)((ulong)puVar43 >> 0x38);
                    (**(code **)*puVar43)(puVar43,&uStack_430);
                    puVar43 = uStack_138;
                    uStack_138 = (undefined **)0x0;
                    if ((puStack_130 != (undefined8 *)0x0) &&
                       (func_0x0001092b4274(&puStack_130), uStack_138 != (undefined **)0x0)) {
                      pcVar27 = (code *)((long)uStack_138 + 8);
                      do {
                        uVar57 = *(ulong *)pcVar27;
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
                        if (bVar21) {
                          *(ulong *)pcVar27 = uVar57 - 4;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if ((uVar57 & 0x1fffffffc) == 4) {
                        do {
                          uVar57 = *(ulong *)pcVar27;
                          cVar13 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
                          if (bVar21) {
                            *(ulong *)pcVar27 = uVar57 - 1;
                            cVar13 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar13 != '\0');
                        if (uVar57 - 1 == 0) {
                          (**(code **)((long)*uStack_138 + 8))();
                        }
                      }
                    }
                    plVar55 = *(long **)pcVar34;
                    if (plVar55 != (long *)0x0) {
                      puVar4 = (ulong *)(plVar55 + 1);
                      do {
                        uVar57 = *puVar4;
                        cVar13 = '\x01';
                        bVar21 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                        if (bVar21) {
                          *puVar4 = uVar57 - 4;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if ((uVar57 & 0x1fffffffc) == 4) {
                        do {
                          uVar57 = *puVar4;
                          cVar13 = '\x01';
                          bVar21 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                          if (bVar21) {
                            *puVar4 = uVar57 - 1;
                            cVar13 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar13 != '\0');
                        if (uVar57 - 1 == 0) {
                          (**(code **)(*plVar55 + 8))();
                        }
                      }
                    }
                    uVar23 = (uint)plVar55;
                    *(undefined8 **)pcVar34 = puVar43;
                    FUN_10a08fe30();
                    if (((uVar23 >> 2 & 1) != 0) || (bVar22 || (*(byte *)(lVar54 + 0x549) & 1) != 0)
                       ) {
                      FUN_109d1a244(pcVar34);
                      FUN_10a1925c0(pcVar32,lVar54);
                    }
                    uVar56 = *(uint *)(pcVar32 + 0x104);
                    plVar55 = plStack_2e8;
                    if (plStack_2e8 == alStack_300) {
                      lVar30 = 0x20;
LAB_10a17cee4:
                      (**(code **)(*plStack_2e8 + lVar30))();
                    }
                    else if (plStack_2e8 != (long *)0x0) {
                      lVar30 = 0x28;
                      goto LAB_10a17cee4;
                    }
                    pcVar27 = pcStack_268;
                    uVar24 = (uint)plVar55;
                    if (pcStack_268 != (code *)0x0) {
                      pcVar32 = pcStack_268 + 8;
                      do {
                        lVar30 = *(long *)pcVar32;
                        cVar13 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pcVar32,0x10);
                        if (bVar22) {
                          *(long *)pcVar32 = lVar30 + -1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if (lVar30 == 0) {
                        (**(code **)(*(long *)pcStack_268 + 0x10))(pcStack_268);
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                        uVar24 = (uint)pcVar27;
                      }
                    }
                    pcVar27 = pcStack_2d8;
                    if (pcStack_2d8 != (code *)0x0) {
                      pcVar32 = pcStack_2d8 + 8;
                      do {
                        lVar30 = *(long *)pcVar32;
                        cVar13 = '\x01';
                        bVar22 = (bool)ExclusiveMonitorPass(pcVar32,0x10);
                        if (bVar22) {
                          *(long *)pcVar32 = lVar30 + -1;
                          cVar13 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar13 != '\0');
                      if (lVar30 == 0) {
                        (**(code **)(*(long *)pcStack_2d8 + 0x10))(pcStack_2d8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv();
                        uVar24 = (uint)pcVar27;
                      }
                    }
                  }
                  else {
LAB_10a17c150:
                    uVar56 = *(uint *)(pcVar32 + 0x104);
                  }
                }
                else {
                  pcVar27 = (code *)(ulong)*(uint *)(lVar54 + 0x560);
                  if ((int)*(uint *)(lVar54 + 0x560) < 1) {
                    FUN_10a090328();
                  }
                  uVar24 = (uint)pcVar27;
                  if (((pcStack_4b0 == (code *)0x0) || (pcVar32[0x108] != (code)0x1)) ||
                     (uVar56 = *(uint *)(pcVar32 + 0x104),
                     uVar56 != (uint)((ulong)(*(long *)(pcStack_4b0 + 0x30) -
                                             *(long *)(pcStack_4b0 + 0x28)) >> 4) ||
                     *(long *)(pcVar32 + 0x120) != 0 &&
                     *(uint *)(pcVar32 + 300) != (uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU))))
                  goto LAB_10a17bf34;
                }
                if (uVar56 != 0) {
                  if (((*(byte *)(lVar54 + 0x538) & 1) == 0) &&
                     (FUN_10a08fe30(), (uVar24 >> 4 & 1) == 0)) {
                    if (pcStack_4b0 == (code *)0x0) {
                      iVar42 = -1;
                    }
                    else {
                      iVar42 = *(int *)(pcStack_4b0 + 8);
                    }
                    if (*(int *)(pcStack_590 + 0x10c) != iVar42) {
                      FUN_10a00946c(&UNK_10f63b8ac);
                      goto LAB_10a17d36c;
                    }
                  }
                  pcVar34 = pcStack_4d0;
                  pcVar27 = *(code **)(lVar53 + 0x138);
                  pcVar32 = *(code **)(lVar53 + 0x140);
                  if (pcVar32 != (code *)0x0) {
                    pcVar40 = pcVar32 + 8;
                    do {
                      cVar13 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pcVar40,0x10);
                      if (bVar22) {
                        *(long *)pcVar40 = *(long *)pcVar40 + 1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                  }
                  pcStack_2e0 = pcVar27;
                  pcStack_2d8 = pcVar32;
                  if (pcVar27 == (code *)0x0) {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c10);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c40);
                    pcStack_140 = (code *)NEON_scvtf(*(long *)(pcVar34 + 0x40),4);
                    uStack_138 = (undefined **)0x0;
                    FUN_10a015dcc(pcVar25,&uStack_430,&pcStack_140);
                  }
                  else {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c10);
                    FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c28);
                    FUN_10a5e17a8(pcVar25,&uStack_430,*(long *)(pcVar27 + 0x268),0x1137ea790);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    lVar53 = *(long *)(pcVar34 + 0x40);
                    plVar55 = *(long **)(pcVar27 + 0x268);
                    if (plVar55 == (long *)0x0) {
                      fVar69 = 0.0;
                      plVar37 = (long *)0x0;
                    }
                    else {
                      (**(code **)(*plVar55 + 0xb0))();
                      plVar37 = *(long **)(pcVar27 + 0x268);
                      fVar69 = (float)((ulong)plVar55 & 0xffffffff);
                      if (plVar37 != (long *)0x0) {
                        (**(code **)(*plVar37 + 0xb8))();
                      }
                    }
                    pcStack_140 = (code *)NEON_scvtf(lVar53,4);
                    uStack_138 = (undefined **)CONCAT44((float)((ulong)plVar37 & 0xffffffff),fVar69)
                    ;
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c40);
                    FUN_10a015dcc(pcVar25,&uStack_430,&pcStack_140);
                  }
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  if (pcVar32 != (code *)0x0) {
                    pcVar27 = pcVar32 + 8;
                    do {
                      lVar53 = *(long *)pcVar27;
                      cVar13 = '\x01';
                      bVar22 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
                      if (bVar22) {
                        *(long *)pcVar27 = lVar53 + -1;
                        cVar13 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar13 != '\0');
                    if (lVar53 == 0) {
                      (**(code **)(*(long *)pcVar32 + 0x10))(pcVar32);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar32);
                    }
                  }
                  cVar59 = pcStack_4b0[0x48];
                  if (cVar59 == (code)0x4) {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c58);
                    FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c70);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                  }
                  else if (cVar59 == (code)0x1) {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c58);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c70);
                    FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                  }
                  else {
                    if (cVar59 != (code)0x0) {
                      if ((bRam000000011330a9e8 & 1) != 0) {
                        func_0x00010ae06f08(0,1,&UNK_10f640ca6,&UNK_10f640cf3,0x4bf,&UNK_10f640e71);
                      }
                      goto LAB_10a17ca08;
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c58);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c70);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                  }
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  if (fStack_448 <= 0.0) {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c88);
                    FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                  }
                  else {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9c88);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                  }
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  pcStack_2e0 = (code *)CONCAT44(pcStack_2e0._4_4_,*(float *)(lVar54 + 0x55c));
                  if (*(float *)(lVar54 + 0x55c) <= 0.0) {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ca0);
                    FUN_10a048040(*(long *)(pcVar25 + 0x158),&uStack_430);
                  }
                  else {
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9ca0);
                    FUN_10a047898(*(long *)(pcVar25 + 0x158),&uStack_430,&uStack_430);
                    if ((char)uStack_419 < '\0') {
                      __ZdlPv(CONCAT44(uStack_430._4_4_,
                                       CONCAT13(uStack_430._3_1_,
                                                CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                    }
                    func_0x000107c2b074(&uStack_430,&PTR_DAT_110ba9cb8);
                    pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,0x358637bd);
                    pcStack_188 = (code *)CONCAT44(pcStack_188._4_4_,0x3f800000);
                    ppcVar48 = &pcStack_188;
                    if (pcStack_2e0._0_4_ <= 1.0) {
                      ppcVar48 = &pcStack_2e0;
                    }
                    ppcVar9 = &pcStack_140;
                    if (1e-06 <= pcStack_2e0._0_4_) {
                      ppcVar9 = ppcVar48;
                    }
                    FUN_10a01671c(pcVar25,&uStack_430,ppcVar9);
                  }
                  if ((char)uStack_419 < '\0') {
                    __ZdlPv(CONCAT44(uStack_430._4_4_,
                                     CONCAT13(uStack_430._3_1_,
                                              CONCAT21(uStack_430._1_2_,uStack_430._0_1_))));
                  }
                  uVar23 = *(uint *)(lVar54 + 0x560);
                  if ((int)uVar23 < 1) {
                    FUN_10a090328();
                  }
                  bVar11 = bStack_48e;
                  uVar24 = uVar23;
                  if (0 >= (int)uVar23 || uVar23 >= uVar56) {
                    uVar24 = uVar56;
                  }
                  lVar54 = *(long *)(pcStack_590 + 0x130);
                  if (lVar54 == 0) {
                    cVar59 = (code)0x0;
                  }
                  else {
                    cVar59 = pcStack_590[0x138];
                  }
                  plVar55 = (long *)0x1;
                  FUN_10a061940(*(undefined8 *)(*(long *)(pcStack_590 + 0xa0) + 0xe0));
                  if (plVar55 == (long *)0x0) {
                    lVar53 = 0;
                  }
                  else {
                    lVar53 = *plVar55;
                  }
                  if (*(uint *)(pcStack_590 + 0x9c) != (uint)(lVar54 != 0)) {
                    *(uint *)(pcStack_590 + 0x9c) = (uint)(lVar54 != 0);
                    puVar10 = &UNK_10f640eed;
                    if (lVar54 == 0) {
                      puVar10 = &UNK_10f640f13;
                    }
                    func_0x00010ae06f08(1,0x14,"","",0xffffffff,&UNK_10f640eba,param_7,param_8,
                                        puVar10);
                  }
                  iVar42 = 0;
                  uVar61 = 0;
                  uVar57 = 0;
                  uVar52 = uVar24;
                  do {
                    uVar7 = uVar56;
                    if (uVar52 <= uVar56) {
                      uVar7 = uVar52;
                    }
                    uVar8 = 0;
                    if (((byte)cVar59 & 1) == 0) {
                      uVar8 = uVar61;
                    }
                    *(uint *)(pcVar25 + 0x68) = uVar7 + iVar42;
                    *(uint *)(pcVar25 + 0x6c) = uVar8;
                    if (lVar53 != 0) {
                      lVar30 = uVar57 << 4;
                      if (lVar54 == 0) {
                        lVar30 = 0;
                      }
                      *(long *)(lVar53 + 0x18) = lVar54;
                      *(long *)(lVar53 + 0x20) = lVar30;
                    }
                    (**(code **)(*param_1 + 0x58))
                              (param_1,*(undefined8 *)(*(long *)(pcStack_590 + 0xa0) + 0xe0),sVar12,
                               &uStack_520,2);
                    if (((0 < (int)uVar23 && uVar23 < uVar56) & bVar11) != 0) {
                      (**(code **)(*param_1 + 0x28))();
                      uStack_430._0_1_ = (code)0xa8;
                      uStack_430._1_2_ = 0x192f;
                      uStack_430._3_1_ = 10;
                      uStack_430._4_4_ = 1;
                      uStack_428 = 0xba9cd0;
                      uStack_425 = 0x110;
                      (**(code **)(*param_1 + 0x20))(param_1,&uStack_430);
                      (**(code **)CONCAT53(uStack_425,uStack_428))(&uStack_428);
                    }
                    uVar61 = uVar61 + uVar24;
                    uVar57 = (ulong)((int)uVar57 + 1);
                    uVar52 = uVar52 + uVar24;
                    iVar42 = iVar42 - uVar24;
                  } while (uVar61 < uVar56);
                  *(uint *)(pcVar25 + 0x68) = uVar56;
                  *(undefined4 *)(pcVar25 + 0x6c) = 0;
                  if (lVar53 != 0) {
                    *(undefined8 *)(lVar53 + 0x18) = 0;
                    *(undefined8 *)(lVar53 + 0x20) = 0;
                  }
                }
              }
LAB_10a17ca08:
              pcVar25 = pcStack_498;
              if (pcStack_498 != (code *)0x0) {
                pcVar27 = pcStack_498 + 8;
                do {
                  lVar54 = *(long *)pcVar27;
                  cVar13 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
                  if (bVar22) {
                    *(long *)pcVar27 = lVar54 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (lVar54 == 0) {
                  (**(code **)(*(long *)pcStack_498 + 0x10))(pcStack_498);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar25);
                }
              }
              pcVar25 = pcStack_4a8;
              if (pcStack_4a8 != (code *)0x0) {
                pcVar27 = pcStack_4a8 + 8;
                do {
                  lVar54 = *(long *)pcVar27;
                  cVar13 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(pcVar27,0x10);
                  if (bVar22) {
                    *(long *)pcVar27 = lVar54 + -1;
                    cVar13 = ExclusiveMonitorsStatus();
                  }
                } while (cVar13 != '\0');
                if (lVar54 == 0) {
                  (**(code **)(*(long *)pcStack_4a8 + 0x10))(pcStack_4a8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar25);
                }
              }
            }
            else if ((bRam000000011330a9e8 & 1) != 0) {
              func_0x00010ae06f08(0,1,&UNK_10f640ca6,&UNK_10f640cf3,0x466,&UNK_10f640de7);
            }
          }
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 != puVar5);
  }
  plVar55 = (long *)puVar62[4];
  if (plVar55 != (long *)0x0) {
    do {
      lVar54 = param_1[0x37];
      lVar53 = param_1[0x38];
      lVar30 = lVar54;
      if (lVar54 != lVar53) {
        do {
          if ((plVar55[2] == *(long *)(lVar54 + 0x10)) &&
             (lVar30 = lVar54, plVar55[3] == *(long *)(lVar54 + 0x18))) break;
          lVar54 = lVar54 + 0x7d8;
          lVar30 = lVar53;
        } while (lVar54 != lVar53);
      }
      plVar37 = (long *)plVar55[6];
      while (plVar37 != (long *)0x0) {
        if ((((lVar30 == lVar53) || (plVar37[5] == 0)) || (*(long *)(plVar37[5] + 8) == -1)) &&
           ((plVar37[0x14] == 0 || (((uint)*(undefined8 *)(plVar37[0x14] + 0x10) >> 1 & 1) != 0))))
        {
          uVar36 = plVar55[5];
          uVar57 = plVar37[1];
          uVar41 = uVar36 - 1;
          if ((uVar36 & uVar41) == 0) {
            uVar57 = uVar41 & uVar57;
          }
          else if (uVar36 <= uVar57) {
            uVar49 = 0;
            if (uVar36 != 0) {
              uVar49 = uVar57 / uVar36;
            }
            uVar57 = uVar57 - uVar49 * uVar36;
          }
          plVar60 = (long *)*plVar37;
          plVar50 = *(long **)(plVar55[4] + uVar57 * 8);
          do {
            plVar44 = plVar50;
            plVar50 = (long *)*plVar44;
          } while ((long *)*plVar44 != plVar37);
          plVar50 = plVar60;
          if (plVar44 == plVar55 + 6) {
LAB_10a17d070:
            if (plVar60 == (long *)0x0) {
LAB_10a17d0a8:
              *(undefined8 *)(plVar55[4] + uVar57 * 8) = 0;
              plVar50 = (long *)*plVar37;
              goto LAB_10a17d0b0;
            }
            uVar49 = plVar60[1];
            if ((uVar36 & uVar41) == 0) {
              uVar51 = uVar49 & uVar41;
            }
            else {
              uVar51 = uVar49;
              if (uVar36 <= uVar49) {
                uVar51 = 0;
                if (uVar36 != 0) {
                  uVar51 = uVar49 / uVar36;
                }
                uVar51 = uVar49 - uVar51 * uVar36;
              }
            }
            if (uVar51 != uVar57) goto LAB_10a17d0a8;
LAB_10a17d0b8:
            if ((uVar36 & uVar41) == 0) {
              uVar49 = uVar49 & uVar41;
            }
            else if (uVar36 <= uVar49) {
              uVar41 = 0;
              if (uVar36 != 0) {
                uVar41 = uVar49 / uVar36;
              }
              uVar49 = uVar49 - uVar41 * uVar36;
            }
            if (uVar49 != uVar57) {
              *(long **)(plVar55[4] + uVar49 * 8) = plVar44;
              plVar50 = (long *)*plVar37;
            }
          }
          else {
            uVar49 = plVar44[1];
            if ((uVar36 & uVar41) == 0) {
              uVar49 = uVar49 & uVar41;
            }
            else if (uVar36 <= uVar49) {
              uVar51 = 0;
              if (uVar36 != 0) {
                uVar51 = uVar49 / uVar36;
              }
              uVar49 = uVar49 - uVar51 * uVar36;
            }
            if (uVar49 != uVar57) goto LAB_10a17d070;
LAB_10a17d0b0:
            if (plVar50 != (long *)0x0) {
              uVar49 = plVar50[1];
              goto LAB_10a17d0b8;
            }
          }
          *plVar44 = (long)plVar50;
          *plVar37 = 0;
          plVar55[7] = plVar55[7] + -1;
          func_0x00010a192104(plVar37 + 4);
          __ZdlPv(plVar37);
        }
        else {
          plVar60 = (long *)*plVar37;
        }
        plVar37 = plVar60;
      }
      plVar55 = (long *)*plVar55;
    } while (plVar55 != (long *)0x0);
    plVar55 = (long *)puVar62[4];
    uVar16 = (undefined1)uStack_328;
    while (plVar55 != (long *)0x0) {
      uStack_328 = CONCAT31(uStack_328._1_3_,uVar16);
      plVar37 = (long *)*plVar55;
      if (plVar55[7] == 0) {
        uVar36 = puVar62[3];
        uVar57 = plVar55[1];
        uVar41 = uVar36 - 1;
        if ((uVar36 & uVar41) == 0) {
          uVar57 = uVar41 & uVar57;
        }
        else if (uVar36 <= uVar57) {
          uVar49 = 0;
          if (uVar36 != 0) {
            uVar49 = uVar57 / uVar36;
          }
          uVar57 = uVar57 - uVar49 * uVar36;
        }
        plVar60 = *(long **)(*(long *)pcVar17 + uVar57 * 8);
        do {
          plVar50 = plVar60;
          plVar60 = (long *)*plVar50;
        } while ((long *)*plVar50 != plVar55);
        plVar60 = plVar37;
        if (plVar50 == puVar62 + 4) {
LAB_10a17d1b0:
          if (plVar37 == (long *)0x0) {
LAB_10a17d1e8:
            *(undefined8 *)(*(long *)pcVar17 + uVar57 * 8) = 0;
            plVar60 = (long *)*plVar55;
            goto LAB_10a17d1f0;
          }
          uVar49 = plVar37[1];
          if ((uVar36 & uVar41) == 0) {
            uVar51 = uVar49 & uVar41;
          }
          else {
            uVar51 = uVar49;
            if (uVar36 <= uVar49) {
              uVar51 = 0;
              if (uVar36 != 0) {
                uVar51 = uVar49 / uVar36;
              }
              uVar51 = uVar49 - uVar51 * uVar36;
            }
          }
          if (uVar51 != uVar57) goto LAB_10a17d1e8;
LAB_10a17d1f8:
          if ((uVar36 & uVar41) == 0) {
            uVar49 = uVar49 & uVar41;
          }
          else if (uVar36 <= uVar49) {
            uVar41 = 0;
            if (uVar36 != 0) {
              uVar41 = uVar49 / uVar36;
            }
            uVar49 = uVar49 - uVar41 * uVar36;
          }
          if (uVar49 != uVar57) {
            *(long **)(*(long *)pcVar17 + uVar49 * 8) = plVar50;
            plVar60 = (long *)*plVar55;
          }
        }
        else {
          uVar49 = plVar50[1];
          if ((uVar36 & uVar41) == 0) {
            uVar49 = uVar49 & uVar41;
          }
          else if (uVar36 <= uVar49) {
            uVar51 = 0;
            if (uVar36 != 0) {
              uVar51 = uVar49 / uVar36;
            }
            uVar49 = uVar49 - uVar51 * uVar36;
          }
          if (uVar49 != uVar57) goto LAB_10a17d1b0;
LAB_10a17d1f0:
          if (plVar60 != (long *)0x0) {
            uVar49 = plVar60[1];
            goto LAB_10a17d1f8;
          }
        }
        *plVar50 = (long)plVar60;
        *plVar55 = 0;
        puVar62[5] = puVar62[5] + -1;
        FUN_10a192060(plVar55 + 4);
        __ZdlPv(plVar55);
      }
      plVar55 = plVar37;
      uVar16 = (undefined1)uStack_328;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
LAB_10a17d304:
  func_0x000109ffded8();
LAB_10a17d36c:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10a17d370);
  (*pcVar17)();
LAB_10a17a87c:
  plVar50 = (long *)*plVar50;
  if (plVar50 == (long *)0x0) goto LAB_10a17a884;
  goto LAB_10a17a834;
}



/* Entry: 10a17d704; end: 10a17d807;  */

void FUN_10a17d704(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      lVar3 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar3 = *(long *)(lVar3 + 0x1a8);
      if (lVar3 != 0) {
        FUN_10a00ff8c(lVar3);
        lVar2 = param_1;
        FUN_10a190e68(param_1,uVar1);
        FUN_10a190edc(lVar3,lVar2);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17d808; end: 10a17d8a7;  */

void FUN_10a17d808(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,6);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17d8a8; end: 10a17d8c7;  */

void FUN_10a17d8a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a17d8c8; end: 10a17da2b;  */

void FUN_10a17d8c8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 == param_2) {
    return;
  }
  lVar1 = *param_2;
  lVar3 = param_2[1];
  uVar5 = lVar3 - lVar1;
  lVar2 = param_1[2];
  plVar6 = (long *)*param_1;
  if ((ulong)(lVar2 - (long)plVar6) < uVar5) {
    plVar7 = (long *)(((long)uVar5 >> 2) * -0x71c71c71c71c71c7);
    plVar4 = param_1;
    if (plVar6 != (long *)0x0) {
      param_1[1] = (long)plVar6;
      __ZdlPv();
      lVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar4 = plVar6;
    }
    if ((long *)0x71c71c71c71c71c < plVar7) {
LAB_10a17da28:
      FUN_10a19a2d4();
      if (plVar4 == (long *)0x0) {
        return;
      }
      if (*plVar4 != 0) {
        plVar4[1] = *plVar4;
        __ZdlPv();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar4);
      return;
    }
    plVar4 = (long *)((lVar2 >> 2) * 0x1c71c71c71c71c72);
    if (plVar4 < plVar7 || (long)plVar4 + ((long)uVar5 >> 2) * 0x71c71c71c71c71c7 == 0) {
      plVar4 = plVar7;
    }
    if (0x38e38e38e38e38d < (ulong)((lVar2 >> 2) * -0x71c71c71c71c71c7)) {
      plVar4 = (long *)0x71c71c71c71c71c;
    }
    if ((long *)0x71c71c71c71c71c < plVar4) goto LAB_10a17da28;
    FUN_10a19a2e8();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)plVar4 + (long)param_2 * 0x24;
    plVar6 = plVar4;
  }
  else {
    plVar4 = (long *)param_1[1];
    if ((ulong)((long)plVar4 - (long)plVar6) < uVar5) {
      lVar2 = lVar1 + ((long)plVar4 - (long)plVar6);
      if (plVar4 != plVar6) {
        _memmove(plVar6,lVar1);
        plVar4 = (long *)param_1[1];
      }
      lVar3 = lVar3 - lVar2;
      if (lVar3 != 0) {
        _memmove(plVar4,lVar2,lVar3);
      }
      lVar3 = (long)plVar4 + lVar3;
      goto LAB_10a17da0c;
    }
  }
  if (lVar3 != lVar1) {
    _memmove(plVar6,lVar1,uVar5);
  }
  lVar3 = (long)plVar6 + uVar5;
LAB_10a17da0c:
  param_1[1] = lVar3;
  return;
}



/* Entry: 10a17da2c; end: 10a17daef;  */

void FUN_10a17da2c(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a17daf0; end: 10a17e0af;  */

void FUN_10a17daf0(ulong param_1,long *param_2,uint *param_3,undefined1 *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  float *pfVar4;
  byte bVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong *puVar17;
  ulong *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  byte *pbVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined4 *puVar29;
  ulong uVar30;
  long lVar31;
  ulong *puVar32;
  ulong *puVar33;
  ulong uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte bStack_e4;
  byte bStack_e3;
  ushort uStack_e2;
  undefined1 uStack_e0;
  undefined4 uStack_dc;
  long *plStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long *plStack_c8;
  undefined1 auStack_c0 [12];
  long alStack_b4 [2];
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  if (param_4 != (undefined1 *)0x0) {
    plVar19 = (long *)param_2[0x54];
    puVar27 = *(undefined8 **)(param_2[0xf3] + 0x58);
    puVar3 = param_3 + (long)param_4;
    uVar15 = *puVar27;
    do {
      puVar29 = (undefined4 *)(ulong)*param_3;
      plVar11 = param_2;
      func_0x00010a01e9ec(param_2,puVar29);
      plVar12 = param_2;
      FUN_10a190e68();
      plVar25 = (long *)(ulong)*(ushort *)((long)plVar11 + 2);
      lVar31 = *plVar19;
      plVar16 = (long *)((plVar19[1] - lVar31 >> 2) * -0x71c71c71c71c71c7);
      if (plVar16 < plVar25 || (long)plVar16 - (long)plVar25 == 0) {
LAB_10a17e074:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10a17e078);
        (*pcVar9)();
      }
      puVar33 = (ulong *)puVar27[1];
      puVar32 = (ulong *)puVar27[2];
      plVar28 = (long *)((long)puVar32 - (long)puVar33 >> 4);
      plVar16 = plVar28;
      if (plVar28 <= (long *)((long)plVar25 + 1U)) {
        plVar16 = (long *)((long)plVar25 + 1);
      }
      if (plVar28 <= plVar25) {
        uVar30 = (long)plVar16 - (long)plVar28;
        if ((ulong)(puVar27[3] - (long)puVar32 >> 4) < uVar30) {
          plVar24 = param_2;
          if ((ulong)plVar16 >> 0x3c != 0) {
LAB_10a17e07c:
            func_0x00010a19313c();
            func_0x00010a193190(&uStack_130);
            __ZNSt3__119__shared_weak_countD2Ev(plVar24);
            __ZdlPv();
            func_0x00010a1932f0(&uStack_d0);
            __Unwind_Resume(plVar12);
            if (param_4 != (undefined1 *)0x0) {
              lVar31 = (long)param_4 << 2;
              do {
                FUN_10a191cec(param_5,plVar12,*puVar29,7);
                lVar31 = lVar31 + -4;
                puVar29 = puVar29 + 1;
              } while (lVar31 != 0);
            }
            return;
          }
          uVar20 = puVar27[3] - (long)puVar33;
          plVar24 = (long *)((long)uVar20 >> 3);
          if (plVar24 <= plVar16) {
            plVar24 = plVar16;
          }
          if (0x7fffffffffffffef < uVar20) {
            plVar24 = (long *)0xfffffffffffffff;
          }
          if ((ulong)plVar24 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10a17e07c;
          }
          lVar13 = (long)plVar24 << 4;
          __Znwm();
          lVar23 = lVar13 + ((long)puVar32 - (long)puVar33);
          _bzero(lVar23,uVar30 * 0x10);
          puVar21 = (ulong *)(lVar23 + (long)plVar28 * -0x10);
          puVar17 = puVar33;
          puVar22 = puVar21;
          if (puVar33 != puVar32) {
            do {
              param_1 = *puVar17;
              puVar22[1] = puVar17[1];
              *puVar22 = param_1;
              puVar18 = puVar17 + 2;
              *puVar17 = 0;
              puVar17[1] = 0;
              puVar17 = puVar18;
              puVar22 = puVar22 + 2;
            } while (puVar18 != puVar32);
            do {
              func_0x00010a193298(puVar33);
              puVar33 = puVar33 + 2;
            } while (puVar33 != puVar32);
            puVar33 = (ulong *)puVar27[1];
          }
          puVar32 = (ulong *)(lVar23 + uVar30 * 0x10);
          puVar27[1] = puVar21;
          puVar27[2] = puVar32;
          puVar27[3] = lVar13 + (long)plVar24 * 0x10;
          if (puVar33 != (ulong *)0x0) {
            __ZdlPv(puVar33);
            puVar32 = (ulong *)puVar27[2];
          }
        }
        else {
          _bzero(puVar32,uVar30 * 0x10);
          puVar32 = puVar32 + uVar30 * 2;
          puVar27[2] = puVar32;
        }
      }
      if ((long *)((long)puVar32 - puVar27[1] >> 4) <= plVar25) goto LAB_10a17e074;
      plVar16 = (long *)(puVar27[1] + (long)plVar25 * 0x10);
      plVar28 = (long *)plVar11[0x35];
      if (plVar28 == (long *)0x0) {
        if (*plVar16 == 0) {
          FUN_10a5ffb54(&uStack_d0);
          plVar24 = plStack_c8;
          param_1 = CONCAT44(uStack_cc,uStack_d0);
          plVar14 = (long *)0x120;
          __Znwm();
          plVar14[1] = 0;
          plVar14[2] = 0;
          *plVar14 = (long)&PTR_FUN_110bab268;
          plStack_128 = plVar24;
          if (plVar24 != (long *)0x0) {
            plVar1 = plVar24 + 1;
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = *plVar1 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          plVar1 = plVar14 + 3;
          uStack_130 = param_1;
          FUN_10ac75164(plVar1,uVar15,&uStack_130);
          if (plVar24 != (long *)0x0) {
            plVar2 = plVar24 + 1;
            do {
              lVar23 = *plVar2;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar23 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          uStack_a0 = plVar1;
          plStack_98 = plVar14;
          func_0x00010a1931e8(&uStack_a0,plVar14 + 0xb,plVar1);
          func_0x00010a193034(plVar16,&uStack_a0);
          plVar24 = plStack_98;
          if (plStack_98 != (long *)0x0) {
            plVar14 = plStack_98 + 1;
            do {
              lVar23 = *plVar14;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar8) {
                *plVar14 = lVar23 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_98 + 0x10))(plStack_98);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
          plVar24 = plStack_c8;
          if (plStack_c8 != (long *)0x0) {
            plVar14 = plStack_c8 + 1;
            do {
              lVar23 = *plVar14;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar8) {
                *plVar14 = lVar23 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar23 == 0) {
              (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
            }
          }
        }
      }
      else if (*plVar16 == 0) {
        FUN_10a192fc0(plVar16,plVar28[0xa3],plVar28[0xa4]);
      }
      lVar23 = plVar11[0x25];
      param_4 = (undefined1 *)plVar11[0x26];
      plVar24 = param_2;
      param_5 = plVar12;
      FUN_10a191d9c();
      pfVar4 = (float *)plVar12[0x1a];
      if (((pfVar4 == (float *)plVar12[0x1b]) ||
          (param_1 = (ulong)(uint)(pfVar4[2] - *pfVar4), pfVar4[2] - *pfVar4 <= 0.0)) ||
         (param_1 = (ulong)(uint)(pfVar4[3] - pfVar4[1]), pfVar4[3] - pfVar4[1] <= 0.0)) {
        uVar30 = 0x3f800000;
        if ((plVar24 != (long *)0x0) &&
           (plVar14 = plVar24, (**(code **)(*plVar24 + 0xb8))(), (int)plVar14 != 0)) {
          (**(code **)(*plVar24 + 0xa8))(plVar24);
          uVar30 = param_1;
        }
      }
      else {
        uVar30 = (ulong)(uint)pfVar4[5];
        if (plVar28 != (long *)0x0) {
          plVar24 = plVar28;
          FUN_10a424150();
          if ((*plVar24 != 0) && (plVar24 = *(long **)(*plVar24 + 0x268), plVar24 != (long *)0x0)) {
            (**(code **)(*plVar24 + 0x38))();
            iVar10 = (int)plVar24;
            if (lVar23 == 0x24) {
              param_4 = (undefined1 *)0x24;
              _memcmp();
              if (iVar10 == 0) {
                FUN_10a5ffa14(plVar28);
                uVar30 = param_1;
              }
            }
          }
        }
      }
      pbVar26 = (byte *)(lVar31 + (long)plVar25 * 0x24);
      uStack_a0 = (long *)(CONCAT71(uStack_a0._1_7_,*pbVar26 >> 2) & 0xffffffffffffff01);
      uStack_a0 = (long *)(CONCAT62(uStack_a0._2_6_,CONCAT11(*pbVar26 >> 3,(undefined1)uStack_a0)) &
                          0xffffffffffff01ff);
      uStack_a0._0_3_ = CONCAT12(pbVar26[1],(undefined2)uStack_a0);
      uVar6 = *(undefined2 *)(pbVar26 + 2);
      *(byte *)((undefined2 *)((ulong)&uStack_a0 | 3) + 1) = pbVar26[4];
      *(undefined2 *)((ulong)&uStack_a0 | 3) = uVar6;
      plStack_98 = *(long **)(pbVar26 + 8);
      uStack_90 = *(undefined8 *)(pbVar26 + 0x10);
      uStack_88 = *(undefined8 *)(pbVar26 + 0x18);
      uStack_80 = *(undefined4 *)(pbVar26 + 0x20);
      FUN_10a5ff7cc(&uStack_d0,uVar30,param_2 + 1,&uStack_a0);
      if (plVar28 == (long *)0x0) {
        bVar5 = *pbVar26;
        bStack_e4 = bVar5 & 1;
        bStack_e3 = bVar5 >> 1 & 1;
        uStack_e2 = bVar5 >> 4 & 1;
        uStack_e0 = (undefined1)uStack_d0;
        uStack_dc = uStack_cc;
        plStack_d8 = plStack_c8;
        FUN_10a5fff84(*(undefined8 *)(*plVar16 + 0xd8),&bStack_e4);
        lVar31 = *plVar16;
        plVar25 = *(long **)(lVar31 + 0xd8);
        if (*(char *)((long)plVar25 + 0x1ec) == '\x01') {
          (**(code **)(*plVar25 + 0x40))(plVar25);
          *(undefined1 *)((long)plVar25 + 0x1ec) = 0;
          func_0x00010ac6ece4(lVar31);
          lVar31 = *plVar16;
        }
        plVar12[0x15] = lVar31;
        param_4 = auStack_c0;
        param_5 = alStack_b4;
        FUN_10a193098(&uStack_130,(long)plVar11 + 0x6c);
        *(long **)((long)plVar12 + 0xc) = plStack_128;
        *(ulong *)((long)plVar12 + 4) = uStack_130;
        *(undefined8 *)((long)plVar12 + 0x1c) = uStack_118;
        *(undefined8 *)((long)plVar12 + 0x14) = uStack_120;
        *(undefined8 *)((long)plVar12 + 0x2c) = uStack_108;
        *(ulong *)((long)plVar12 + 0x24) = uStack_110;
        *(undefined8 *)((long)plVar12 + 0x3c) = uStack_f8;
        *(undefined8 *)((long)plVar12 + 0x34) = uStack_100;
        param_1 = uStack_110;
      }
      else {
        FUN_10a5ffa8c(plVar28,&uStack_d0);
        FUN_10a190edc(plVar28,plVar12);
        param_1 = uVar30;
      }
      param_3 = param_3 + 1;
    } while (param_3 != puVar3);
  }
  return;
}



/* Entry: 10a17e0b0; end: 10a17e163;  */

void FUN_10a17e0b0(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,7);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17e164; end: 10a17e32b;  */

undefined8 * FUN_10a17e164(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_31;
  
  puVar5 = (undefined8 *)0x10;
  __Znwm();
  *puVar5 = 0;
  puVar5[1] = 0;
  puStack_40 = puVar5;
  FUN_10a199aa4(&plStack_50,auStack_60);
  if (*(int *)((long)plStack_50 + 0x1fc) != 1) {
    if (*(int *)((long)plStack_50 + 0x1fc) < 1) {
      puVar6 = &UNK_10f660f7a;
      goto LAB_10a17e2fc;
    }
    *(undefined4 *)((long)plStack_50 + 0x1fc) = 1;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  if ((int)plStack_50[0x3f] != 1) {
    if ((int)plStack_50[0x3f] < 1) {
      puVar6 = &UNK_10f660f58;
LAB_10a17e2fc:
      FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a17e304);
      (*pcVar3)();
    }
    *(undefined4 *)(plStack_50 + 0x3f) = 1;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  bVar4 = false;
  if ((*(float *)(plStack_50 + 0x41) == 2.0) &&
     (bVar4 = false, !NAN(*(float *)((long)plStack_50 + 0x20c)))) {
    bVar4 = *(float *)((long)plStack_50 + 0x20c) == 2.0;
  }
  if (bVar4) {
    if (*(char *)((long)plStack_50 + 0x1ec) != '\x01') goto LAB_10a17e228;
  }
  else {
    plStack_50[0x41] = 0x4000000040000000;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  (**(code **)(*plStack_50 + 0x40))(plStack_50);
  *(undefined1 *)((long)plStack_50 + 0x1ec) = 0;
LAB_10a17e228:
  uStack_68 = param_1;
  FUN_10a199b74(auStack_60,&uStack_31,&uStack_68,&plStack_50);
  func_0x00010a193034(puVar5,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  puVar5 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
    if (puStack_40 != (undefined8 *)0x0) {
      func_0x00010a193298();
      __ZdlPv();
    }
  }
  return puVar5;
}



/* Entry: 10a17e32c; end: 10a17e347;  */

void FUN_10a17e32c(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a193298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a17e348; end: 10a17e44f;  */

void FUN_10a17e348(long param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = **(undefined8 **)(*(long *)(param_1 + 0x798) + 0x60);
    param_3 = param_3 << 2;
    do {
      lVar1 = param_1;
      FUN_10a190e68(param_1,*param_2);
      *(undefined8 *)(lVar1 + 0xa8) = uVar2;
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17e450; end: 10a17e46f;  */

void FUN_10a17e450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a17e470; end: 10a17e5bb;  */

void FUN_10a17e470(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  if (param_1 == param_2) {
    return;
  }
  lVar1 = *param_2;
  lVar3 = param_2[1];
  uVar5 = lVar3 - lVar1;
  lVar2 = param_1[2];
  plVar6 = (long *)*param_1;
  if ((ulong)(lVar2 - (long)plVar6) < uVar5) {
    plVar7 = (long *)(((long)uVar5 >> 4) * -0x5555555555555555);
    plVar4 = param_1;
    if (plVar6 != (long *)0x0) {
      param_1[1] = (long)plVar6;
      __ZdlPv();
      lVar2 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar4 = plVar6;
    }
    if ((long *)0x555555555555555 < plVar7) {
LAB_10a17e5b8:
      FUN_10a1998ac();
      if (plVar4 == (long *)0x0) {
        return;
      }
      if (*plVar4 != 0) {
        plVar4[1] = *plVar4;
        __ZdlPv();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar4);
      return;
    }
    plVar4 = (long *)((lVar2 >> 4) * 0x5555555555555556);
    if (plVar4 < plVar7 || (long)plVar4 + ((long)uVar5 >> 4) * 0x5555555555555555 == 0) {
      plVar4 = plVar7;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar2 >> 4) * -0x5555555555555555)) {
      plVar4 = (long *)0x555555555555555;
    }
    if ((long *)0x555555555555555 < plVar4) goto LAB_10a17e5b8;
    FUN_10a1998c0();
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4;
    param_1[2] = (long)(plVar4 + (long)param_2 * 6);
    plVar6 = plVar4;
  }
  else {
    plVar4 = (long *)param_1[1];
    if ((ulong)((long)plVar4 - (long)plVar6) < uVar5) {
      lVar2 = lVar1 + ((long)plVar4 - (long)plVar6);
      if (plVar4 != plVar6) {
        _memmove(plVar6,lVar1);
        plVar4 = (long *)param_1[1];
      }
      lVar3 = lVar3 - lVar2;
      if (lVar3 != 0) {
        _memmove(plVar4,lVar2,lVar3);
      }
      lVar3 = (long)plVar4 + lVar3;
      goto LAB_10a17e5a0;
    }
  }
  if (lVar3 != lVar1) {
    _memmove(plVar6,lVar1,uVar5);
  }
  lVar3 = (long)plVar6 + uVar5;
LAB_10a17e5a0:
  param_1[1] = lVar3;
  return;
}



/* Entry: 10a17e5bc; end: 10a17e67f;  */

void FUN_10a17e5bc(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a17e680; end: 10a17ea9f;  */

void FUN_10a17e680(long *param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  int iVar26;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_ec [4];
  undefined1 auStack_e8 [12];
  undefined1 auStack_dc [12];
  byte bStack_d0;
  byte bStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  byte bStack_af;
  byte bStack_ae;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  
  if (param_3 != 0) {
    plVar15 = (long *)param_1[0x56];
    puVar16 = *(undefined8 **)(param_1[0xf3] + 0x68);
    puVar1 = param_2 + param_3;
    uVar25 = NEON_fmov(0x3f800000,4);
    auVar21 = NEON_fmov(0x3f800000,4);
    do {
      uVar3 = *param_2;
      plVar8 = param_1;
      func_0x00010a01e9ec(param_1,uVar3);
      plVar9 = param_1;
      FUN_10a190e68(param_1,uVar3);
      uVar20 = (ulong)*(ushort *)((long)plVar8 + 2);
      lVar19 = *plVar15;
      uVar12 = (plVar15[1] - lVar19 >> 4) * -0x5555555555555555;
      if (uVar12 < uVar20 || uVar12 - uVar20 == 0) {
LAB_10a17ea88:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a17ea8c);
        (*pcVar7)();
      }
      uVar12 = (long)(puVar16[2] - puVar16[1]) >> 4;
      if (uVar12 <= uVar20 + 1) {
        uVar12 = uVar20 + 1;
      }
      func_0x00010a19baf0(puVar16 + 1,uVar12);
      if ((ulong)((long)(puVar16[2] - puVar16[1]) >> 4) <= uVar20) goto LAB_10a17ea88;
      plVar2 = (long *)(puVar16[1] + uVar20 * 0x10);
      if (*plVar2 == 0) {
        lVar13 = plVar8[0x35];
        if (lVar13 == 0) {
          FUN_10a199aa4(&uStack_130,&bStack_b0);
          FUN_10a19be58(&bStack_b0,*puVar16,uStack_130,plStack_128);
          func_0x00010a193034(plVar2,&bStack_b0);
          plVar18 = (long *)CONCAT44(uStack_a4,uStack_a8);
          if (plVar18 != (long *)0x0) {
            plVar10 = plVar18 + 1;
            do {
              lVar13 = *plVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *plVar10 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
          plVar18 = plStack_128;
          if (plStack_128 != (long *)0x0) {
            plVar10 = plStack_128 + 1;
            do {
              lVar13 = *plVar10;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *plVar10 = lVar13 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_128 + 0x10))(plStack_128);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
            }
          }
        }
        else {
          FUN_10a192fc0(plVar2,*(undefined8 *)(lVar13 + 0x528),*(undefined8 *)(lVar13 + 0x530));
        }
      }
      pbVar17 = (byte *)(lVar19 + uVar20 * 0x30);
      uStack_ac = (undefined4)uVar25;
      uStack_a8 = (undefined4)((ulong)uVar25 >> 0x20);
      bStack_b0 = *pbVar17 & 1;
      bStack_af = *pbVar17 >> 1 & 1;
      bStack_ae = pbVar17[1];
      uVar14 = *(undefined8 *)(pbVar17 + 0x18);
      uStack_a4 = (undefined4)uVar14;
      uStack_a0 = (undefined4)((ulong)uVar14 >> 0x20);
      uStack_94 = *(undefined8 *)(pbVar17 + 0x10);
      uStack_9c = *(undefined8 *)(pbVar17 + 8);
      plVar18 = param_1;
      plVar10 = plVar8;
      func_0x00010a19bc4c(param_1,plVar8,plVar9[0x17],plVar9[0x18]);
      FUN_10a3a4278(&bStack_b0,plVar18,plVar10);
      if ((plVar18 != (long *)0x0) &&
         (___dynamic_cast(plVar18,&PTR_DAT_110bb3788,&PTR_DAT_110bb27b8,0), plVar18 != (long *)0x0))
      {
        iVar26 = *(int *)((long)plVar18 + 0x2cc);
        plVar10 = plVar18;
        (**(code **)(*plVar18 + 0xb0))();
        plVar11 = plVar18;
        (**(code **)(*plVar18 + 0xb8))();
        fVar23 = (float)plVar18[0x72];
        fVar24 = (float)((ulong)plVar18[0x72] >> 0x20);
        fVar24 = fVar24 + fVar24;
        fVar22 = (float)(int)plVar11 + *(float *)((long)plVar18 + 0x394) * -2.0;
        uStack_9c = CONCAT44((float)((ulong)uStack_9c >> 0x20) *
                             (auVar21._4_4_ -
                             (auVar21._4_4_ / (float)((ulong)plVar11 & 0xffffffff)) * fVar24),
                             (float)uStack_9c *
                             (auVar21._0_4_ -
                             (auVar21._0_4_ / (float)((ulong)plVar10 & 0xffffffff)) *
                             (fVar23 + fVar23)));
        uStack_94 = CONCAT44((float)iVar26 / (64.0 / (fVar24 / fVar22 + auVar21._12_4_)),
                             (float)iVar26 / (64.0 / (fVar24 / fVar22 + auVar21._8_4_)));
      }
      bStack_d0 = *pbVar17 >> 2 & 1;
      bStack_cf = pbVar17[1];
      uVar4 = *(undefined2 *)(pbVar17 + 2);
      *(byte *)((undefined2 *)((ulong)&bStack_d0 | 2) + 1) = pbVar17[4];
      *(undefined2 *)((ulong)&bStack_d0 | 2) = uVar4;
      uStack_c8 = *(undefined8 *)(pbVar17 + 0x10);
      uStack_c0 = *(undefined8 *)(pbVar17 + 0x20);
      uStack_b8 = *(undefined8 *)(pbVar17 + 0x28);
      FUN_10a3a4610(auStack_ec,uStack_ac,param_1 + 1,&bStack_d0,pbVar17 + 0x18);
      plVar18 = (long *)plVar8[0x35];
      if (plVar18 == (long *)0x0) {
        FUN_10a3a4138(*(undefined8 *)(*plVar2 + 0xd8),&bStack_b0);
        lVar19 = *plVar2;
        plVar18 = *(long **)(lVar19 + 0xd8);
        if (*(char *)((long)plVar18 + 0x1ec) == '\x01') {
          (**(code **)(*plVar18 + 0x40))(plVar18);
          *(undefined1 *)((long)plVar18 + 0x1ec) = 0;
          func_0x00010ac6ece4(lVar19);
          lVar19 = *plVar2;
        }
        plVar9[0x15] = lVar19;
        FUN_10a193098(&uStack_130,(long)plVar8 + 0x6c,auStack_e8,auStack_dc);
        *(long **)((long)plVar9 + 0xc) = plStack_128;
        *(undefined8 *)((long)plVar9 + 4) = uStack_130;
        *(undefined8 *)((long)plVar9 + 0x1c) = uStack_118;
        *(undefined8 *)((long)plVar9 + 0x14) = uStack_120;
        *(undefined8 *)((long)plVar9 + 0x2c) = uStack_108;
        *(undefined8 *)((long)plVar9 + 0x24) = uStack_110;
        *(long *)((long)plVar9 + 0x3c) = auStack_100._8_8_;
        *(long *)((long)plVar9 + 0x34) = auStack_100._0_8_;
      }
      else {
        (**(code **)(*plVar18 + 0x230))(plVar18);
        FUN_10a3a4708(plVar18,auStack_ec);
        FUN_10a190edc(plVar18,plVar9);
      }
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}



/* Entry: 10a17eaa0; end: 10a17eaef;  */

void FUN_10a17eaa0(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,8);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17eaf0; end: 10a17edd7;  */

uint * FUN_10a17eaf0(float param_1,float param_2,float param_3,uint *param_4,uint *param_5,
                    uint *param_6,uint *param_7,uint *param_8)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auStack_1200 [112];
  long lStack_1190;
  long lStack_1188;
  undefined8 *puStack_1098;
  undefined8 *puStack_1090;
  uint *puStack_a28;
  uint *puStack_a20;
  undefined8 uStack_a10;
  undefined4 uStack_a08;
  float fStack_a04;
  float fStack_a00;
  undefined4 uStack_9fc;
  undefined1 auStack_9f8 [40];
  uint *puStack_9d0;
  uint *puStack_9c8;
  undefined1 auStack_918 [2048];
  long lStack_118;
  long lStack_110;
  long alStack_e0 [3];
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_a0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  puVar8 = param_7;
  if (param_6 != (uint *)0x0) {
    puVar1 = param_5 + (long)param_6;
    puVar10 = param_8;
    puVar7 = param_5;
    do {
      uVar2 = *puVar7;
      param_5 = (uint *)(ulong)uVar2;
      puVar5 = param_4;
      func_0x00010a01e9ec();
      lVar9 = *(long *)(puVar5 + 0x6a);
      param_8 = puVar10;
      if ((((lVar9 != 0) && ((*(ushort *)(lVar9 + 0x180) & 0x12) == 0)) &&
          (fVar12 = *(float *)(lVar9 + 0x4f0), 0.00078125 <= ABS(fVar12))) &&
         ((1e-06 < ABS(*(float *)(lVar9 + 0x4f4) + -1.0) &&
          (0.0 <= param_1 * (float)puVar5[0x23] + param_2 * (float)puVar5[0x24] +
                  param_3 * (float)puVar5[0x25])))) {
        uStack_a10 = 0;
        uStack_a08 = 0;
        uStack_9fc = 0;
        puVar6 = param_4 + 0x170;
        fStack_a04 = fVar12;
        fStack_a00 = fVar12;
        func_0x00010a04a0d4(puVar6,param_7);
        FUN_10a193e84(auStack_9f8,puVar6);
        iVar4 = (int)auStack_918;
        param_5 = (uint *)&uStack_a10;
        param_6 = puVar5 + 0x1b;
        func_0x00010a175964();
        if (iVar4 != 0) {
          if ((param_4[0xd0] & 1) != 0) {
            param_6 = puVar5 + 0x1b;
            FUN_10a5d2f5c(&puStack_a28,auStack_9f8,&uStack_a10);
            param_5 = param_4;
            FUN_10a01f6d4(param_4,param_7);
            FUN_10a1912d4(auStack_1200);
            puVar3 = puStack_1090;
            for (puVar11 = puStack_1098; puVar11 != puVar3; puVar11 = puVar11 + 6) {
              param_5 = param_4 + 2;
              FUN_10a5e2454(param_5,*puVar11);
              puVar8 = (uint *)((long)puStack_a20 - (long)puStack_a28 >> 4);
              param_6 = puStack_a28;
              FUN_10a191134(param_4 + 0x1e8,param_5,puStack_a28,puVar8);
            }
            if (puStack_1098 != (undefined8 *)0x0) {
              puStack_1090 = puStack_1098;
              __ZdlPv(puStack_1098);
            }
            if (lStack_1190 != 0) {
              lStack_1188 = lStack_1190;
              __ZdlPv();
            }
            if (puStack_a28 != (uint *)0x0) {
              puStack_a20 = puStack_a28;
              __ZdlPv();
            }
          }
          param_8 = puVar10 + 1;
          *puVar10 = uVar2;
        }
        if (lStack_c0 != 0) {
          lStack_b8 = lStack_c0;
          __ZdlPv();
        }
        if (plStack_c8 == alStack_e0) {
          lVar9 = 0x20;
LAB_10a17ed0c:
          (**(code **)(*plStack_c8 + lVar9))();
        }
        else if (plStack_c8 != (long *)0x0) {
          lVar9 = 0x28;
          goto LAB_10a17ed0c;
        }
        if (lStack_118 != 0) {
          lStack_110 = lStack_118;
          __ZdlPv();
        }
        puVar5 = puStack_9d0;
        if (puStack_9d0 != (uint *)0x0) {
          puStack_9c8 = puStack_9d0;
          __ZdlPv();
        }
      }
      puVar7 = puVar7 + 1;
      puVar10 = param_8;
    } while (puVar7 != puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return param_8;
  }
  ___stack_chk_fail();
  func_0x00010a174f6c(auStack_9f8);
  __Unwind_Resume(puVar5);
  puVar7 = puVar5;
  if (param_6 != (uint *)0x0) {
    lVar9 = (long)param_6 << 2;
    do {
      puVar7 = puVar8;
      FUN_10a191cec(puVar8,puVar5,*param_5,4);
      lVar9 = lVar9 + -4;
      param_5 = param_5 + 1;
    } while (lVar9 != 0);
  }
  return puVar7;
}



/* Entry: 10a17edd8; end: 10a17ee27;  */

void FUN_10a17edd8(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,4);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17ee28; end: 10a17efef;  */

undefined8 * FUN_10a17ee28(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_31;
  
  puVar5 = (undefined8 *)0x10;
  __Znwm();
  *puVar5 = 0;
  puVar5[1] = 0;
  puStack_40 = puVar5;
  FUN_10a199aa4(&plStack_50,auStack_60);
  if (*(int *)((long)plStack_50 + 0x1fc) != 1) {
    if (*(int *)((long)plStack_50 + 0x1fc) < 1) {
      puVar6 = &UNK_10f660f7a;
      goto LAB_10a17efc0;
    }
    *(undefined4 *)((long)plStack_50 + 0x1fc) = 1;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  if ((int)plStack_50[0x3f] != 1) {
    if ((int)plStack_50[0x3f] < 1) {
      puVar6 = &UNK_10f660f58;
LAB_10a17efc0:
      FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a17efc8);
      (*pcVar3)();
    }
    *(undefined4 *)(plStack_50 + 0x3f) = 1;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  bVar4 = false;
  if ((*(float *)(plStack_50 + 0x41) == 2.0) &&
     (bVar4 = false, !NAN(*(float *)((long)plStack_50 + 0x20c)))) {
    bVar4 = *(float *)((long)plStack_50 + 0x20c) == 2.0;
  }
  if (bVar4) {
    if (*(char *)((long)plStack_50 + 0x1ec) != '\x01') goto LAB_10a17eeec;
  }
  else {
    plStack_50[0x41] = 0x4000000040000000;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  (**(code **)(*plStack_50 + 0x40))(plStack_50);
  *(undefined1 *)((long)plStack_50 + 0x1ec) = 0;
LAB_10a17eeec:
  uStack_68 = param_1;
  FUN_10a199b74(auStack_60,&uStack_31,&uStack_68,&plStack_50);
  func_0x00010a193034(puVar5,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  puVar5 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
    if (puStack_40 != (undefined8 *)0x0) {
      func_0x00010a193298();
      __ZdlPv();
    }
  }
  return puVar5;
}



/* Entry: 10a17eff0; end: 10a17f00b;  */

void FUN_10a17eff0(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a193298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a17f00c; end: 10a17f1bb;  */

void FUN_10a17f00c(long param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = **(undefined8 **)(*(long *)(param_1 + 0x798) + 0x88);
    param_3 = param_3 << 2;
    do {
      lVar1 = param_1;
      FUN_10a190e68(param_1,*param_2);
      *(undefined8 *)(lVar1 + 0xa8) = uVar2;
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17f1bc; end: 10a17f22f;  */

undefined4 *
FUN_10a17f1bc(long param_1,undefined4 *param_2,long param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    puVar3 = param_5;
    do {
      uVar1 = *param_2;
      lVar2 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      param_5 = puVar3;
      if ((*(long *)(lVar2 + 0x1a8) != 0) && (*(char *)(*(long *)(lVar2 + 0x1a8) + 0x5e1) == '\x01')
         ) {
        param_5 = puVar3 + 1;
        *puVar3 = uVar1;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
      puVar3 = param_5;
    } while (param_3 != 0);
  }
  return param_5;
}



/* Entry: 10a17f230; end: 10a17f573;  */

void FUN_10a17f230(long param_1,undefined4 *param_2,long param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  byte bStack_c0;
  byte bStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  byte bStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  
  if (param_3 != 0) {
    plVar14 = *(long **)(param_1 + 0x2e8);
    puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x798) + 0xa0);
    puVar2 = param_2 + param_3;
    uVar20 = NEON_fmov(0x3f800000,4);
    do {
      uVar4 = *param_2;
      lVar9 = param_1;
      func_0x00010a01e9ec(param_1,uVar4);
      lVar10 = param_1;
      FUN_10a190e68(param_1,uVar4);
      uVar17 = (ulong)*(ushort *)(lVar9 + 2);
      lVar16 = *plVar14;
      uVar11 = (plVar14[1] - lVar16 >> 4) * -0x5555555555555555;
      if (uVar11 < uVar17 || uVar11 - uVar17 == 0) {
LAB_10a17f55c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10a17f560);
        (*pcVar8)();
      }
      uVar11 = (long)(puVar19[2] - puVar19[1]) >> 4;
      if (uVar11 <= uVar17 + 1) {
        uVar11 = uVar17 + 1;
      }
      func_0x00010a19baf0(puVar19 + 1,uVar11);
      if ((ulong)((long)(puVar19[2] - puVar19[1]) >> 4) <= uVar17) goto LAB_10a17f55c;
      plVar3 = (long *)(puVar19[1] + uVar17 * 0x10);
      if (*plVar3 == 0) {
        lVar12 = *(long *)(lVar9 + 0x1a8);
        if (lVar12 == 0) {
          FUN_10a199aa4(&uStack_120,&bStack_a0);
          FUN_10a19be58(&bStack_a0,*puVar19,uStack_120,plStack_118);
          func_0x00010a193034(plVar3,&bStack_a0);
          plVar15 = (long *)CONCAT44(uStack_94,uStack_98);
          if (plVar15 != (long *)0x0) {
            plVar1 = plVar15 + 1;
            do {
              lVar12 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
          plVar15 = plStack_118;
          if (plStack_118 != (long *)0x0) {
            plVar1 = plStack_118 + 1;
            do {
              lVar12 = *plVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar12 == 0) {
              (**(code **)(*plStack_118 + 0x10))(plStack_118);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
            }
          }
        }
        else {
          FUN_10a192fc0(plVar3,*(undefined8 *)(lVar12 + 0x528),*(undefined8 *)(lVar12 + 0x530));
        }
      }
      pbVar18 = (byte *)(lVar16 + uVar17 * 0x30);
      uStack_9c = (undefined4)uVar20;
      uStack_98 = (undefined4)((ulong)uVar20 >> 0x20);
      bStack_a0 = *pbVar18 & 1;
      bStack_9f = *pbVar18 >> 1 & 1;
      bStack_9e = pbVar18[1];
      uVar13 = *(undefined8 *)(pbVar18 + 0x18);
      uStack_94 = (undefined4)uVar13;
      uStack_90 = (undefined4)((ulong)uVar13 >> 0x20);
      uStack_84 = *(undefined8 *)(pbVar18 + 0x10);
      uStack_8c = *(undefined8 *)(pbVar18 + 8);
      lVar16 = param_1;
      lVar12 = lVar9;
      func_0x00010a19bc4c(param_1,lVar9,*(undefined8 *)(lVar10 + 0xb8),
                          *(undefined8 *)(lVar10 + 0xc0));
      FUN_10a3a4278(&bStack_a0,lVar16,lVar12);
      bStack_c0 = *pbVar18 >> 2 & 1;
      bStack_bf = pbVar18[1];
      uVar5 = *(undefined2 *)(pbVar18 + 2);
      *(byte *)((undefined2 *)((ulong)&bStack_c0 | 2) + 1) = pbVar18[4];
      *(undefined2 *)((ulong)&bStack_c0 | 2) = uVar5;
      uStack_b8 = *(undefined8 *)(pbVar18 + 0x10);
      uStack_b0 = *(undefined8 *)(pbVar18 + 0x20);
      uStack_a8 = *(undefined8 *)(pbVar18 + 0x28);
      FUN_10a3a4610(auStack_dc,uStack_9c,param_1 + 8,&bStack_c0,pbVar18 + 0x18);
      plVar15 = *(long **)(lVar9 + 0x1a8);
      if (plVar15 == (long *)0x0) {
        FUN_10a3a4138(*(undefined8 *)(*plVar3 + 0xd8),&bStack_a0);
        lVar16 = *plVar3;
        plVar15 = *(long **)(lVar16 + 0xd8);
        if (*(char *)((long)plVar15 + 0x1ec) == '\x01') {
          (**(code **)(*plVar15 + 0x40))(plVar15);
          *(undefined1 *)((long)plVar15 + 0x1ec) = 0;
          func_0x00010ac6ece4(lVar16);
          lVar16 = *plVar3;
        }
        *(long *)(lVar10 + 0xa8) = lVar16;
        FUN_10a193098(&uStack_120,lVar9 + 0x6c,auStack_d8,auStack_cc);
        *(long **)(lVar10 + 0xc) = plStack_118;
        *(undefined8 *)(lVar10 + 4) = uStack_120;
        *(undefined8 *)(lVar10 + 0x1c) = uStack_108;
        *(undefined8 *)(lVar10 + 0x14) = uStack_110;
        *(undefined8 *)(lVar10 + 0x2c) = uStack_f8;
        *(undefined8 *)(lVar10 + 0x24) = uStack_100;
        *(undefined8 *)(lVar10 + 0x3c) = uStack_e8;
        *(undefined8 *)(lVar10 + 0x34) = uStack_f0;
      }
      else {
        (**(code **)(*plVar15 + 0x230))(plVar15);
        FUN_10a3a4708(plVar15,auStack_dc);
        FUN_10a190edc(plVar15,lVar10);
      }
      param_2 = param_2 + 1;
    } while (param_2 != puVar2);
  }
  return;
}



/* Entry: 10a17f574; end: 10a17f593;  */

void FUN_10a17f574(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a17f594; end: 10a17f727;  */

void FUN_10a17f594(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (param_1 != param_2) {
    lVar5 = *param_2;
    lVar2 = param_2[1];
    uVar4 = lVar2 - lVar5;
    lVar3 = param_1[2];
    plVar6 = (long *)*param_1;
    if ((ulong)(lVar3 - (long)plVar6) < uVar4) {
      plVar9 = (long *)(((long)uVar4 >> 5) * -0x5555555555555555);
      plVar1 = param_1;
      if (plVar6 != (long *)0x0) {
        plVar7 = (long *)param_1[1];
        plVar1 = plVar6;
        if (plVar7 != plVar6) {
          do {
            plVar7 = plVar7 + -0xc;
            func_0x00010a19b4e8(plVar7);
          } while (plVar7 != plVar6);
          plVar1 = (long *)*param_1;
        }
        param_1[1] = (long)plVar6;
        __ZdlPv();
        lVar3 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      if ((long *)0x2aaaaaaaaaaaaaa < plVar9) {
LAB_10a17f718:
        FUN_10a19b490();
        param_1[1] = (long)plVar6;
        __Unwind_Resume();
        if (plVar1 != (long *)0x0) {
          lVar5 = *plVar1;
          if (lVar5 != 0) {
            lVar3 = plVar1[1];
            lVar2 = lVar5;
            if (lVar3 != lVar5) {
              do {
                lVar3 = lVar3 + -0x60;
                func_0x00010a19b4e8(lVar3);
              } while (lVar3 != lVar5);
              lVar2 = *plVar1;
            }
            plVar1[1] = lVar5;
            __ZdlPv(lVar2);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar1);
          return;
        }
        return;
      }
      plVar1 = (long *)((lVar3 >> 5) * 0x5555555555555556);
      if (plVar1 < plVar9 || (long)plVar1 + ((long)uVar4 >> 5) * 0x5555555555555555 == 0) {
        plVar1 = plVar9;
      }
      if (0x155555555555554 < (ulong)((lVar3 >> 5) * -0x5555555555555555)) {
        plVar1 = (long *)0x2aaaaaaaaaaaaaa;
      }
      if ((long *)0x2aaaaaaaaaaaaaa < plVar1) goto LAB_10a17f718;
      func_0x00010a19b4a4();
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar1;
      param_1[2] = (long)(plVar1 + (long)param_2 * 0xc);
      FUN_10a19b860(lVar5,lVar2,plVar1);
    }
    else {
      uVar8 = param_1[1] - (long)plVar6;
      if (uVar4 <= uVar8) {
        FUN_10a19ba1c(lVar5,lVar2,plVar6);
        lVar2 = param_1[1];
        while (lVar2 != lVar5) {
          lVar2 = lVar2 + -0x60;
          func_0x00010a19b4e8(lVar2);
        }
        param_1[1] = lVar5;
        return;
      }
      FUN_10a19ba1c(lVar5,lVar5 + uVar8,plVar6);
      lVar5 = lVar5 + uVar8;
      FUN_10a19b860(lVar5,lVar2,param_1[1]);
    }
    param_1[1] = lVar5;
  }
  return;
}



/* Entry: 10a17f728; end: 10a17f78f;  */

void FUN_10a17f728(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar2 = param_1[1];
      lVar1 = lVar3;
      if (lVar2 != lVar3) {
        do {
          lVar2 = lVar2 + -0x60;
          func_0x00010a19b4e8(lVar2);
        } while (lVar2 != lVar3);
        lVar1 = *param_1;
      }
      param_1[1] = lVar3;
      __ZdlPv(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a17f790; end: 10a17f7a3;  */

void FUN_10a17f790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(1);
  return;
}



/* Entry: 10a17f7a4; end: 10a17facf;  */

undefined4 *
FUN_10a17f7a4(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  undefined1 auStack_880 [112];
  long lStack_810;
  long lStack_808;
  undefined8 *puStack_718;
  undefined8 *puStack_710;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_3 != 0) {
    lVar15 = 0;
    plVar16 = *(long **)(param_1 + 0x2f0);
    do {
      uVar1 = *(undefined4 *)(param_2 + lVar15 * 4);
      lVar6 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar7 = param_1;
      FUN_10a190e68(param_1,uVar1);
      uVar10 = (ulong)*(ushort *)(lVar6 + 2);
      lVar8 = *plVar16;
      uVar13 = (plVar16[1] - lVar8 >> 5) * -0x5555555555555555;
      if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a17faa4);
        (*pcVar4)();
      }
      puVar11 = (undefined8 *)(lVar8 + uVar10 * 0x60);
      cVar2 = *(char *)((long)puVar11 + 0x5e);
      uVar14 = puVar11[2];
      *(undefined8 *)(lVar7 + 0xa8) = *puVar11;
      *(undefined8 *)(lVar7 + 0xb0) = uVar14;
      if (cVar2 != '\0') {
        bVar5 = false;
        if (*(long *)(lVar7 + 0xe8) != 0) {
          lVar8 = *(long *)(lVar7 + 0xd0);
          if ((lVar8 == *(long *)(lVar7 + 0xd8)) || (*(int *)(lVar8 + 0x18) == -1)) {
            bVar5 = false;
          }
          else {
            bVar5 = *(long *)(lVar8 + 0x20) != 0;
          }
        }
        if ((((*(char *)((long)puVar11 + 0x5c) == '\x01') &&
             ((*(byte *)((long)puVar11 + 0x5d) & 1) == 0)) && (!bVar5)) &&
           (*(undefined2 **)(lVar7 + 0xb8) != *(undefined2 **)(lVar7 + 0xc0))) {
          FUN_10a65b268(param_1,**(undefined2 **)(lVar7 + 0xb8),puVar11 + 8,
                        *(undefined4 *)(puVar11 + 0xb));
        }
        FUN_10a5e2864(param_1 + 8,lVar6);
        if ((*(byte *)(lVar6 + 0x19) & 1) == 0) {
LAB_10a17f8c8:
          *param_5 = uVar1;
          param_5 = param_5 + 1;
        }
        else {
          lVar8 = *(long *)(lVar7 + 0xa8);
          if (lVar8 != 0) {
            plVar9 = (long *)0x1;
            FUN_10a061940();
            if ((plVar9 != (long *)0x0) && ((int)lVar8 == 2 && (long *)*plVar9 != (long *)0x0)) {
              iVar12 = 0;
              while ((fVar17 = *(float *)(lVar6 + 0x118), iVar12 == 1 ||
                     (fVar17 = *(float *)(lVar6 + 0x114), iVar12 != 2))) {
                bVar5 = fVar17 < 0.0;
                while (iVar12 = iVar12 + 1, bVar5) {
                  if (iVar12 == 2) goto LAB_10a17f95c;
                  bVar5 = true;
                }
              }
              if (*(float *)(lVar6 + 0x11c) < 0.0) {
LAB_10a17f95c:
                (**(code **)(*(long *)*plVar9 + 0x48))(&uStack_90);
              }
              else {
                uStack_90 = *(undefined8 *)(lVar6 + 0x108);
                uStack_88 = (undefined4)*(undefined8 *)(lVar6 + 0x110);
                fStack_84 = (float)((ulong)*(undefined8 *)(lVar6 + 0x110) >> 0x20);
                fStack_80 = (float)*(undefined8 *)(lVar6 + 0x118);
                fStack_7c = (float)((ulong)*(undefined8 *)(lVar6 + 0x118) >> 0x20);
              }
              fVar17 = *(float *)(lVar6 + 0x104);
              fStack_84 = fVar17 + fStack_84;
              fStack_80 = fVar17 + fStack_80;
              fStack_7c = fVar17 + fStack_7c;
              lVar8 = param_1 + 0x5c0;
              func_0x00010a04a0d4(lVar8,param_4);
              uVar10 = lVar8 + 0xe0;
              func_0x00010a175964(uVar10,&uStack_90,lVar7 + 4);
              if ((uVar10 & 1) != 0) {
                if ((*(byte *)(param_1 + 0x340) & 1) != 0) {
                  FUN_10a5d2f5c(&lStack_a8,lVar8,&uStack_90,lVar7 + 4);
                  lVar8 = param_1;
                  FUN_10a01f6d4(param_1,param_4);
                  FUN_10a1912d4(auStack_880,lVar8);
                  puVar3 = puStack_710;
                  for (puVar11 = puStack_718; puVar11 != puVar3; puVar11 = puVar11 + 6) {
                    lVar8 = param_1 + 8;
                    FUN_10a5e2454(lVar8,*puVar11);
                    FUN_10a191134(param_1 + 0x7a0,lVar8,lStack_a8,lStack_a0 - lStack_a8 >> 4);
                  }
                  if (puStack_718 != (undefined8 *)0x0) {
                    puStack_710 = puStack_718;
                    __ZdlPv(puStack_718);
                  }
                  if (lStack_810 != 0) {
                    lStack_808 = lStack_810;
                    __ZdlPv();
                  }
                  if (lStack_a8 != 0) {
                    lStack_a0 = lStack_a8;
                    __ZdlPv();
                  }
                }
                goto LAB_10a17f8c8;
              }
            }
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != param_3);
  }
  return param_5;
}



/* Entry: 10a17fad0; end: 10a17fb6f;  */

void FUN_10a17fad0(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,0xb);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a17fb70; end: 10a17fb8f;  */

void FUN_10a17fb70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a17fb90; end: 10a17fcf7;  */

/* WARNING: Possible PIC construction at 0x00010a17fbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a17fd18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a17fbec) */
/* WARNING: Removing unreachable block (ram,0x00010a17fd1c) */

void FUN_10a17fb90(ulong *param_1,ulong *param_2)

{
  undefined8 ****ppppuVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong *unaff_x22;
  undefined8 ****unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_60;
  ulong *puStack_58;
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  
  ppppuVar1 = (undefined8 ****)&stack0xfffffffffffffff0;
  if (param_1 == param_2) {
    return;
  }
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar7 = uVar2 - uVar4;
  uVar5 = *param_1;
  puVar3 = param_1;
  if (param_1[2] - uVar5 < uVar7) {
    unaff_x22 = (ulong *)(((long)uVar7 >> 4) * -0x5555555555555555);
    unaff_x19 = param_1;
    unaff_x20 = uVar2;
    unaff_x21 = uVar4;
    if (uVar5 == 0) {
      if (unaff_x22 < (ulong *)0x555555555555556) {
        lVar6 = (long)param_1[2] >> 4;
        unaff_x19 = (ulong *)(lVar6 * 0x5555555555555556);
        if (unaff_x19 < unaff_x22 || (long)unaff_x19 + ((long)uVar7 >> 4) * 0x5555555555555555 == 0)
        {
          unaff_x19 = unaff_x22;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
          unaff_x19 = (ulong *)0x555555555555555;
        }
        if (unaff_x19 < (ulong *)0x555555555555556) {
          FUN_10a19a70c();
          *param_1 = (ulong)unaff_x19;
          param_1[1] = (ulong)unaff_x19;
          param_1[2] = (long)unaff_x19 + (long)param_2 * 0x30;
          FUN_10a19ae50(param_1,uVar4,uVar2,unaff_x19);
          goto LAB_10a17fca8;
        }
      }
      FUN_10a19a6f8();
      param_1[1] = (ulong)unaff_x22;
      __Unwind_Resume();
      if (unaff_x19 == (ulong *)0x0) {
        return;
      }
      pcStack_48 = FUN_10a17fcf8;
      unaff_x29 = &pppuStack_50;
      uStack_60 = uVar2;
      puStack_58 = param_1;
      pppuStack_50 = ppppuVar1;
      if (*unaff_x19 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(unaff_x19);
        return;
      }
      unaff_x30 = 0x10a17fd1c;
      register0x00000008 = (BADSPACEBASE *)&uStack_60;
      param_1 = unaff_x19;
      uVar5 = *unaff_x19;
    }
    else {
      unaff_x30 = 0x10a17fbec;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
      unaff_x29 = ppppuVar1;
    }
  }
  else {
    uVar5 = param_1[1] - uVar5;
    if (uVar5 < uVar7) {
      FUN_10a19af84(uVar4,uVar4 + uVar5);
      FUN_10a19ae50(param_1,uVar4 + uVar5,uVar2,param_1[1]);
LAB_10a17fca8:
      param_1[1] = (ulong)puVar3;
      return;
    }
    FUN_10a19af84(uVar4,uVar2);
    uVar5 = uVar4;
  }
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar4 = param_1[1];
  while (uVar4 != uVar5) {
    *(ulong *)((long)register0x00000008 + -0x38) = uVar4 - 0x20;
    func_0x00010a19a750((undefined1 *)((long)register0x00000008 + -0x38));
    func_0x00010a1943a0(uVar4 - 0x30);
    uVar4 = uVar4 - 0x30;
  }
  param_1[1] = uVar5;
  return;
}



/* Entry: 10a17fcf8; end: 10a17fd37;  */

void FUN_10a17fcf8(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      func_0x00010a19a85c(param_1);
      __ZdlPv(*param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a17fd38; end: 10a17fd4f;  */

void FUN_10a17fd38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(1);
  return;
}



/* Entry: 10a17fd50; end: 10a18000b;  */

undefined4 *
FUN_10a17fd50(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  undefined1 auStack_880 [112];
  long lStack_810;
  long lStack_808;
  undefined8 *puStack_718;
  undefined8 *puStack_710;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_3 != 0) {
    lVar14 = 0;
    plVar15 = *(long **)(param_1 + 0x2f8);
    do {
      uVar1 = *(undefined4 *)(param_2 + lVar14 * 4);
      lVar6 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar7 = param_1;
      FUN_10a190e68(param_1,uVar1);
      uVar10 = (ulong)*(ushort *)(lVar6 + 2);
      lVar8 = *plVar15;
      uVar13 = (plVar15[1] - lVar8 >> 4) * -0x5555555555555555;
      if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a17ffe0);
        (*pcVar4)();
      }
      puVar11 = (undefined8 *)(lVar8 + uVar10 * 0x30);
      cVar2 = *(char *)(puVar11 + 5);
      *(undefined8 *)(lVar7 + 0xa8) = *puVar11;
      if (cVar2 != '\0') {
        FUN_10a5e2864(param_1 + 8,lVar6);
        if ((*(byte *)(lVar6 + 0x19) & 1) == 0) {
LAB_10a17fe04:
          *param_5 = uVar1;
          param_5 = param_5 + 1;
        }
        else {
          lVar8 = *(long *)(lVar7 + 0xa8);
          if (lVar8 != 0) {
            plVar9 = (long *)0x1;
            FUN_10a061940();
            if ((plVar9 != (long *)0x0) && ((int)lVar8 == 2 && (long *)*plVar9 != (long *)0x0)) {
              iVar12 = 0;
              while ((fVar16 = *(float *)(lVar6 + 0x118), iVar12 == 1 ||
                     (fVar16 = *(float *)(lVar6 + 0x114), iVar12 != 2))) {
                bVar5 = fVar16 < 0.0;
                while (iVar12 = iVar12 + 1, bVar5) {
                  if (iVar12 == 2) goto LAB_10a17fe98;
                  bVar5 = true;
                }
              }
              if (*(float *)(lVar6 + 0x11c) < 0.0) {
LAB_10a17fe98:
                (**(code **)(*(long *)*plVar9 + 0x48))(&uStack_90);
              }
              else {
                uStack_90 = *(undefined8 *)(lVar6 + 0x108);
                uStack_88 = (undefined4)*(undefined8 *)(lVar6 + 0x110);
                fStack_84 = (float)((ulong)*(undefined8 *)(lVar6 + 0x110) >> 0x20);
                fStack_80 = (float)*(undefined8 *)(lVar6 + 0x118);
                fStack_7c = (float)((ulong)*(undefined8 *)(lVar6 + 0x118) >> 0x20);
              }
              fVar16 = *(float *)(lVar6 + 0x104);
              fStack_84 = fVar16 + fStack_84;
              fStack_80 = fVar16 + fStack_80;
              fStack_7c = fVar16 + fStack_7c;
              lVar8 = param_1 + 0x5c0;
              func_0x00010a04a0d4(lVar8,param_4);
              uVar10 = lVar8 + 0xe0;
              func_0x00010a175964(uVar10,&uStack_90,lVar7 + 4);
              if ((uVar10 & 1) != 0) {
                if ((*(byte *)(param_1 + 0x340) & 1) != 0) {
                  FUN_10a5d2f5c(&lStack_a8,lVar8,&uStack_90,lVar7 + 4);
                  lVar8 = param_1;
                  FUN_10a01f6d4(param_1,param_4);
                  FUN_10a1912d4(auStack_880,lVar8);
                  puVar3 = puStack_710;
                  for (puVar11 = puStack_718; puVar11 != puVar3; puVar11 = puVar11 + 6) {
                    lVar8 = param_1 + 8;
                    FUN_10a5e2454(lVar8,*puVar11);
                    FUN_10a191134(param_1 + 0x7a0,lVar8,lStack_a8,lStack_a0 - lStack_a8 >> 4);
                  }
                  if (puStack_718 != (undefined8 *)0x0) {
                    puStack_710 = puStack_718;
                    __ZdlPv(puStack_718);
                  }
                  if (lStack_810 != 0) {
                    lStack_808 = lStack_810;
                    __ZdlPv();
                  }
                  if (lStack_a8 != 0) {
                    lStack_a0 = lStack_a8;
                    __ZdlPv();
                  }
                }
                goto LAB_10a17fe04;
              }
            }
          }
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != param_3);
  }
  return param_5;
}



/* Entry: 10a18000c; end: 10a1802f3;  */

void FUN_10a18000c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined2 uStack_a2;
  undefined1 auStack_a0 [64];
  
  if (param_3 != 0) {
    lVar11 = 0;
    plVar12 = *(long **)(param_1 + 0x2f8);
    do {
      uVar2 = *(undefined4 *)(param_2 + lVar11 * 4);
      lVar4 = param_1;
      func_0x00010a01e9ec(param_1,uVar2);
      lVar5 = param_1;
      FUN_10a190e68(param_1,uVar2);
      uVar8 = (ulong)*(ushort *)(lVar4 + 2);
      lVar9 = *plVar12;
      uVar10 = (plVar12[1] - lVar9 >> 4) * -0x5555555555555555;
      if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a18014c);
        (*pcVar3)();
      }
      lVar9 = lVar9 + uVar8 * 0x30;
      lVar1 = *(long *)(lVar9 + 0x18);
      for (lVar9 = *(long *)(lVar9 + 0x10); lVar9 != lVar1; lVar9 = lVar9 + 0x88) {
        func_0x000109519fd0(auStack_a0,lVar4 + 0x6c,lVar9 + 0x38);
        if (*(long *)(lVar9 + 0x78) == 0) {
          puVar6 = *(undefined2 **)(lVar5 + 0xb8);
          lVar7 = *(long *)(lVar5 + 0xc0) - (long)puVar6 >> 1;
        }
        else {
          lVar7 = param_1;
          FUN_10a5dfd94();
          uStack_a2 = (undefined2)lVar7;
          puVar6 = &uStack_a2;
          lVar7 = 1;
        }
        FUN_10a19426c(param_4,param_1,uVar2,puVar6,lVar7,lVar9 + 0x10,auStack_a0);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != param_3);
  }
  return;
}



/* Entry: 10a1802f4; end: 10a18036f;  */

undefined8 * FUN_10a1802f4(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a180370; end: 10a180373;  */

undefined8 * FUN_10a180370(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba8fa8;
  param_1[7] = &PTR_FUN_110ba90b0;
  param_1[8] = &PTR_FUN_110ba90d8;
  func_0x00010a09db0c(param_1 + 0x18);
  func_0x00010a09dbbc(param_1 + 0x16);
  func_0x00010a045fb4(param_1 + 0x13);
  param_1[8] = &PTR_DAT_110bc4550;
  FUN_10a09d22c(param_1 + 9);
  return param_1;
}



/* Entry: 10a180374; end: 10a180387;  */

void FUN_10a180374(void)

{
  FUN_10a186eb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a180388; end: 10a1803a7;  */

undefined1 FUN_10a180388(long param_1)

{
  return *(undefined1 *)(param_1 + 0x94);
}



/* Entry: 10a1803a8; end: 10a1803bf;  */

void FUN_10a1803a8(long param_1)

{
  FUN_10a186eb4(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1803c0; end: 10a1803c7;  */

undefined8 * FUN_10a1803c0(undefined8 *param_1)

{
  param_1[-8] = &PTR_FUN_110ba8fa8;
  param_1[-1] = &PTR_FUN_110ba90b0;
  *param_1 = &PTR_FUN_110ba90d8;
  func_0x00010a09db0c(param_1 + 0x10);
  func_0x00010a09dbbc(param_1 + 0xe);
  func_0x00010a045fb4(param_1 + 0xb);
  *param_1 = &PTR_DAT_110bc4550;
  FUN_10a09d22c(param_1 + 1);
  return param_1 + -8;
}



/* Entry: 10a1803c8; end: 10a1803df;  */

void FUN_10a1803c8(long param_1)

{
  FUN_10a186eb4(param_1 + -0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1803e0; end: 10a1803f3;  */

undefined8 FUN_10a1803e0(void)

{
  return 1;
}



/* Entry: 10a1803f4; end: 10a180407;  */

void FUN_10a1803f4(void)

{
  FUN_10a19433c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a180408; end: 10a1804a3;  */

bool FUN_10a180408(long param_1)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x113834838;
  FUN_10a08f69c();
  if (*pcVar2 == '\x01') {
    bVar1 = **(int **)(param_1 + 8) == 1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10a1804a4; end: 10a1804db;  */

undefined8 FUN_10a1804a4(void)

{
  return 2;
}



/* Entry: 10a1804dc; end: 10a1805ef;  */

long * FUN_10a1804dc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * -0x5555555555555555 + 1;
  if (uVar3 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a05a0d4();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    plStack_40 = plVar1 + uVar4 * 3;
    func_0x000107c2b054(lVar5,param_2);
    lVar2 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar2);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar2;
    param_1[1] = lVar5 + 0x18;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar4 * 3);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000107c31938(&plStack_58);
    return (long *)(lVar5 + 0x18);
  }
  FUN_10a05a0c0();
  func_0x000107c31938(&plStack_58);
  __Unwind_Resume();
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * -0x5555555555555555 + 1;
  if (uVar3 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_98 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a05a0d4();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_b8 = plVar1;
    plStack_b0 = (long *)lVar5;
    plStack_a8 = (long *)lVar5;
    plStack_a0 = plVar1 + uVar4 * 3;
    func_0x000107c2b054(lVar5,param_2);
    lVar2 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar2);
    plStack_b8 = (long *)*param_1;
    *param_1 = lVar2;
    param_1[1] = lVar5 + 0x18;
    plStack_a0 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar4 * 3);
    plStack_b0 = plStack_b8;
    plStack_a8 = plStack_b8;
    func_0x000107c31938(&plStack_b8);
    return (long *)(lVar5 + 0x18);
  }
  FUN_10a05a0c0();
  func_0x000107c31938(&plStack_b8);
  __Unwind_Resume();
  *param_1 = (long)&PTR_FUN_110c54488;
  func_0x00010a15805c(param_1 + 0xc);
  FUN_10a09a130(param_1 + 10);
  func_0x00010a09dbbc(param_1 + 7);
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = (long)&PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  return param_1;
}



/* Entry: 10a1805f0; end: 10a180703;  */

long * FUN_10a1805f0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * -0x5555555555555555 + 1;
  if (uVar3 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a05a0d4();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    plStack_40 = plVar1 + uVar4 * 3;
    func_0x000107c2b054(lVar5,param_2);
    lVar2 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar2);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar2;
    param_1[1] = lVar5 + 0x18;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar4 * 3);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000107c31938(&plStack_58);
    return (long *)(lVar5 + 0x18);
  }
  FUN_10a05a0c0();
  func_0x000107c31938(&plStack_58);
  __Unwind_Resume();
  *param_1 = (long)&PTR_FUN_110c54488;
  func_0x00010a15805c(param_1 + 0xc);
  FUN_10a09a130(param_1 + 10);
  func_0x00010a09dbbc(param_1 + 7);
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = (long)&PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  return param_1;
}



/* Entry: 10a180704; end: 10a180707;  */

undefined8 * FUN_10a180704(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54488;
  func_0x00010a15805c(param_1 + 0xc);
  FUN_10a09a130(param_1 + 10);
  func_0x00010a09dbbc(param_1 + 7);
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  return param_1;
}



/* Entry: 10a180708; end: 10a18071b;  */

void FUN_10a180708(void)

{
  FUN_10a180724();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a18071c; end: 10a180723;  */

undefined8 FUN_10a18071c(void)

{
  return 0;
}



/* Entry: 10a180724; end: 10a1807fb;  */

undefined8 * FUN_10a180724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54488;
  func_0x00010a15805c(param_1 + 0xc);
  FUN_10a09a130(param_1 + 10);
  func_0x00010a09dbbc(param_1 + 7);
  func_0x00010a045fb4(param_1 + 4);
  *param_1 = &PTR_FUN_110baa1f0;
  func_0x00010a045fb4(param_1 + 1);
  return param_1;
}



/* Entry: 10a1807fc; end: 10a18084f;  */

void FUN_10a1807fc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x198) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ba9668)[*(uint *)(param_1 + 0x198)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  return;
}



/* Entry: 10a180850; end: 10a180853;  */

void FUN_10a180850(void)

{
  return;
}



/* Entry: 10a180854; end: 10a180893;  */

void FUN_10a180854(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  lStack_28 = param_2 + 0x18;
  func_0x00010a0e8efc(&lStack_28);
  lStack_28 = param_2;
  func_0x00010a0e8f88(&lStack_28);
  return;
}



/* Entry: 10a180894; end: 10a18089b;  */

long FUN_10a180894(undefined8 param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  if (*(long *)(param_2 + 0x180) != 0) {
    *(long *)(param_2 + 0x188) = *(long *)(param_2 + 0x180);
    __ZdlPv();
  }
  if (*(long *)(param_2 + 0x168) != 0) {
    *(long *)(param_2 + 0x170) = *(long *)(param_2 + 0x168);
    __ZdlPv();
  }
  lStack_28 = param_2 + 0x150;
  func_0x000109234d60(&lStack_28);
  lStack_28 = param_2 + 0x138;
  func_0x000109234cac(&lStack_28);
  lVar1 = 0;
  do {
    if (*(char *)(param_2 + lVar1 + 0x12f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + lVar1 + 0x118));
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x100);
  lStack_28 = param_2 + 0x20;
  func_0x0001092349c8(&lStack_28);
  lStack_28 = param_2 + 8;
  func_0x00010922dc0c(&lStack_28);
  return param_2;
}



/* Entry: 10a18089c; end: 10a180977;  */

/* WARNING: Removing unreachable block (ram,0x00010a1808d0) */

void FUN_10a18089c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  lVar3 = param_1[1];
  lVar1 = lVar2;
  if (lVar3 != lVar2) {
    do {
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != lVar2);
    lVar1 = *param_1;
  }
  param_1[1] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10a180978; end: 10a180aa7;  */

/* WARNING: Removing unreachable block (ram,0x00010a0ea0b0) */

undefined1  [16] FUN_10a180978(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x23;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 uStack_82;
  undefined1 auStack_81 [9];
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if (*(int *)(param_1 + 0x33) != 1) {
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
    FUN_10a0e92c8(&plStack_70,*param_3,param_3[1],param_3[1] - *param_3 >> 7);
    plStack_58 = (long *)0x0;
    puStack_50 = (undefined1 *)0x0;
    pcStack_48 = (code *)0x0;
    param_2 = (long *)param_3[3];
    FUN_10a0e9408(&plStack_58,param_2,param_3[4],param_3[4] - (long)param_2 >> 5);
    FUN_10a1807fc(param_1);
    param_1[1] = plStack_68;
    *param_1 = plStack_70;
    param_1[2] = plStack_60;
    plStack_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
    plStack_70 = (long *)0x0;
    param_1[4] = puStack_50;
    param_1[3] = plStack_58;
    param_1[5] = pcStack_48;
    puStack_50 = (undefined1 *)0x0;
    pcStack_48 = (code *)0x0;
    plStack_58 = (long *)0x0;
    *(undefined4 *)(param_1 + 0x33) = 1;
    func_0x00010a0e8efc(&stack0xffffffffffffffc8);
    param_1 = (undefined8 *)&stack0xffffffffffffffc8;
    func_0x00010a0e8f88(param_1);
LAB_10a180a7c:
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = param_1;
    return auVar16;
  }
  if (param_2 == param_3) goto LAB_10a180a7c;
  FUN_10a0e9bec(param_2,*param_3,param_3[1],param_3[1] - *param_3 >> 7);
  plVar11 = (long *)param_3[3];
  plVar1 = (long *)param_3[4];
  uVar7 = (long)plVar1 - (long)plVar11 >> 5;
  plVar3 = param_2 + 3;
  plVar10 = (long *)*plVar3;
  if ((ulong)(param_2[5] - (long)plVar10 >> 5) < uVar7) {
    plVar2 = plVar3;
    plVar12 = plVar11;
    plVar5 = plVar1;
    uVar9 = uVar7;
    func_0x00010923fde4();
    if (uVar7 >> 0x3b != 0) {
      FUN_10a0e8c44();
      param_2[4] = unaff_x23;
      __Unwind_Resume();
      param_2[4] = (long)plVar10;
      __Unwind_Resume();
      pcStack_48 = FUN_10a0ea0ec;
      plVar6 = (long *)*plVar2;
      plVar4 = plVar2;
      auStack_81._1_8_ = uVar7;
      plStack_70 = plVar11;
      plStack_68 = plVar10;
      plStack_60 = plVar1;
      plStack_58 = plVar3;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((ulong)((plVar2[2] - (long)plVar6 >> 3) * 0x6db6db6db6db6db7) < uVar9) {
        plVar11 = plVar12;
        plVar10 = plVar5;
        func_0x00010923fe1c(plVar2);
        if (0x492492492492492 < uVar9) {
          FUN_10a0e965c();
          plVar2[1] = uVar9;
          __Unwind_Resume();
          plVar3 = plVar11;
          for (; plVar11 != plVar10; plVar11 = plVar11 + 7) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,plVar11)
            ;
            if (plVar6 != plVar11) {
              FUN_10a0ea2f0(plVar6 + 3,plVar11[3],plVar11[4],
                            (plVar11[4] - plVar11[3] >> 3) * -0x3333333333333333);
            }
            *(int *)(plVar6 + 6) = (int)plVar11[6];
            plVar6 = plVar6 + 7;
            plVar3 = plVar10;
          }
          auVar15._8_8_ = plVar6;
          auVar15._0_8_ = plVar3;
          return auVar15;
        }
        lVar8 = plVar2[2] - *plVar2 >> 3;
        uVar7 = lVar8 * -0x2492492492492492;
        if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
          uVar7 = uVar9;
        }
        if (0x249249249249248 < (ulong)(lVar8 * 0x6db6db6db6db6db7)) {
          uVar7 = 0x492492492492492;
        }
        FUN_10a0e9610(plVar2,uVar7);
        FUN_10a0e96b8(plVar2,plVar12,plVar5,plVar2[1]);
      }
      else {
        lVar8 = plVar2[1] - (long)plVar6;
        if (uVar9 <= (ulong)((lVar8 >> 3) * 0x6db6db6db6db6db7)) {
          plVar4 = (long *)auStack_81;
          FUN_10a0ea264(plVar4,plVar12,plVar5);
          plVar11 = (long *)plVar2[1];
          plVar10 = plVar12;
          while (plVar11 != plVar12) {
            plVar11 = plVar11 + -7;
            plVar4 = plVar11;
            FUN_10a0e8eb8(plVar11);
          }
          plVar2[1] = (long)plVar12;
          goto LAB_10a0ea23c;
        }
        FUN_10a0ea264(&uStack_82,plVar12,(long)plVar12 + lVar8);
        plVar12 = (long *)((long)plVar12 + lVar8);
        FUN_10a0e96b8(plVar2,plVar12,plVar5,plVar2[1]);
      }
      plVar2[1] = (long)plVar4;
      plVar10 = plVar12;
LAB_10a0ea23c:
      auVar14._8_8_ = plVar10;
      auVar14._0_8_ = plVar4;
      return auVar14;
    }
    uVar9 = param_2[5] - *plVar3 >> 4;
    if (uVar9 <= uVar7) {
      uVar9 = uVar7;
    }
    if (0x7fffffffffffffdf < (ulong)(param_2[5] - *plVar3)) {
      uVar9 = 0x7ffffffffffffff;
    }
    FUN_10a0e948c(plVar3,uVar9);
    FUN_10a0e94c4(plVar3,plVar11,plVar1,param_2[4]);
    plVar2 = plVar11;
  }
  else {
    plVar12 = (long *)param_2[4];
    if (uVar7 <= (ulong)((long)plVar12 - (long)plVar10 >> 5)) {
      plVar2 = plVar11;
      if (plVar11 != plVar1) {
        do {
          plVar3 = plVar10;
          plVar11 = plVar2;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10,plVar2);
          plVar10[3] = plVar2[3];
          plVar2 = plVar2 + 4;
          plVar10 = plVar10 + 4;
        } while (plVar2 != plVar1);
        plVar12 = (long *)param_2[4];
      }
      for (; plVar12 != plVar10; plVar12 = plVar12 + -4) {
      }
      param_2[4] = (long)plVar10;
      goto LAB_10a0ea0c4;
    }
    plVar2 = (long *)((long)plVar11 + ((long)plVar12 - (long)plVar10));
    if (plVar12 != plVar10) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar10,plVar11);
        plVar10[3] = plVar11[3];
        plVar11 = plVar11 + 4;
        plVar10 = plVar10 + 4;
      } while (plVar11 != plVar2);
      plVar12 = (long *)param_2[4];
    }
    FUN_10a0e94c4(plVar3,plVar2,plVar1,plVar12);
  }
  param_2[4] = (long)plVar3;
  plVar11 = plVar2;
LAB_10a0ea0c4:
  auVar13._8_8_ = plVar11;
  auVar13._0_8_ = plVar3;
  return auVar13;
}



/* Entry: 10a180aa8; end: 10a180b1b;  */

undefined8 * FUN_10a180aa8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a180b1c; end: 10a180b2f;  */

void FUN_10a180b1c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = *puVar2;
        uVar4 = puVar2[2];
        uVar3 = puVar2[1];
        param_3[3] = puVar2[3];
        param_3[2] = uVar4;
        param_3[1] = uVar3;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[1] = 0;
        param_3[4] = puVar2[4];
        puVar2 = puVar2 + 5;
        param_3 = param_3 + 5;
      } while (puVar2 != param_2);
      do {
        if (*(char *)((long)puVar1 + 0x1f) < '\0') {
          __ZdlPv(puVar1[1]);
        }
        puVar1 = puVar1 + 5;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x28);
  return;
}



/* Entry: 10a180b30; end: 10a180c53;  */

void FUN_10a180b30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x666666666666666 < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = *puVar1;
        uVar3 = puVar1[2];
        uVar2 = puVar1[1];
        param_3[3] = puVar1[3];
        param_3[2] = uVar3;
        param_3[1] = uVar2;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[1] = 0;
        param_3[4] = puVar1[4];
        puVar1 = puVar1 + 5;
        param_3 = param_3 + 5;
      } while (puVar1 != param_2);
      do {
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          __ZdlPv(param_1[1]);
        }
        param_1 = param_1 + 5;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x28);
  return;
}



/* Entry: 10a180c54; end: 10a18191b;  */

/* WARNING: Removing unreachable block (ram,0x00010a181218) */
/* WARNING: Removing unreachable block (ram,0x00010a1810a0) */
/* WARNING: Removing unreachable block (ram,0x00010a1816bc) */

ulong * FUN_10a180c54(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *unaff_x21;
  ulong uVar19;
  ulong *puVar20;
  ulong *unaff_x22;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  uint uStack_94;
  ulong *puStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_94 = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puVar16 = unaff_x20;
  puVar21 = param_3;
  puVar18 = param_2;
  do {
    puVar7 = puVar18 + -5;
    puStack_a8 = puVar18 + -0xf;
    puStack_a0 = puVar18 + -10;
    puStack_b0 = puVar7;
    puVar5 = puVar8;
LAB_10a180cb4:
    puVar8 = puVar5;
    puVar20 = (ulong *)0xcccccccccccccccd;
    uVar23 = (long)puVar18 - (long)puVar8;
    uVar24 = ((long)uVar23 >> 3) * -0x3333333333333333;
    if (uVar24 - 2 == 0 || (long)uVar24 < 2) {
      if (uVar24 < 2) break;
      if (uVar24 == 2) {
        if (*puVar8 <= puVar18[-5]) break;
LAB_10a18135c:
        puVar7 = puVar8;
        puVar5 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a181918;
LAB_10a181378:
        puVar20 = puVar18 + -5;
        puVar8 = puVar7;
        goto code_r0x00010a181d74;
      }
    }
    else {
      if (uVar24 == 3) {
        puVar20 = puVar8 + 5;
        uVar23 = *puVar20;
        puVar5 = puVar18 + -5;
        if (*puVar8 <= uVar23) {
          if ((uVar23 <= *puVar5) ||
             (param_1 = puVar20, FUN_10a181d74(), param_2 = puVar5, *puVar8 <= puVar8[5])) break;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a181918;
          goto code_r0x00010a181d74;
        }
        if (*puVar5 < uVar23) goto LAB_10a18135c;
        param_1 = puVar8;
        param_2 = puVar20;
        FUN_10a181d74();
        if (puVar8[5] <= *puVar5) break;
        puVar7 = puVar20;
        puVar5 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto LAB_10a181378;
        goto LAB_10a181918;
      }
      if (uVar24 == 4) {
        puVar5 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a181918;
        puVar20 = puVar8 + 5;
        param_3 = puVar8 + 10;
        param_1 = puVar8;
        goto code_r0x00010a18191c;
      }
      if (uVar24 == 5) {
        param_2 = puVar8 + 5;
        param_3 = puVar8 + 10;
        param_4 = puVar8 + 0xf;
        param_1 = puVar8;
        FUN_10a18191c();
        puVar18 = puVar18 + -5;
        if (puVar8[0xf] <= *puVar18) break;
        param_1 = puVar8 + 0xf;
        FUN_10a181d74();
        param_2 = puVar18;
        if (puVar8[10] <= puVar8[0xf]) break;
        param_1 = puVar8 + 10;
        param_2 = puVar8 + 0xf;
        FUN_10a181d74();
        if (puVar8[5] <= puVar8[10]) break;
        param_1 = puVar8 + 5;
        param_2 = puVar8 + 10;
        FUN_10a181d74();
        if (*puVar8 <= puVar8[5]) break;
        puVar5 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a181918;
        puVar20 = puVar8 + 5;
        goto code_r0x00010a181d74;
      }
    }
    if ((long)uVar23 < 0x3c0) {
      puVar5 = puVar8 + 5;
      if ((uStack_94 & 1) == 0) {
        if (puVar8 != puVar18 && puVar5 != puVar18) {
          puVar7 = puVar8;
          puVar6 = (ulong *)0x28;
          puVar21 = (ulong *)0x0;
          do {
            puVar16 = puVar6;
            uVar23 = *puVar5;
            if (uVar23 < *puVar7) {
              uVar24 = puVar7[6];
              uStack_78 = (undefined7)puVar7[7];
              uStack_71 = (undefined1)*(undefined8 *)((long)puVar7 + 0x3f);
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar7 + 0x3f) >> 8);
              uVar3 = *(undefined1 *)((long)puVar7 + 0x47);
              puVar7[7] = 0;
              puVar7[8] = 0;
              puVar7[6] = 0;
              uVar19 = puVar7[9];
              do {
                puVar5 = (ulong *)((long)puVar8 + (long)puVar21);
                param_1 = puVar5 + 5;
                param_2 = puVar5;
                FUN_10a181e44();
                if (puVar21 == (ulong *)0xffffffffffffffd8) {
LAB_10a181914:
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a181918);
                  (*pcVar4)();
                }
                puVar21 = puVar21 + -5;
              } while (uVar23 < puVar5[-5]);
              puVar20 = (ulong *)((long)puVar8 + (long)puVar21);
              puVar20[5] = uVar23;
              if (*(char *)((long)puVar20 + 0x47) < '\0') {
                param_1 = (ulong *)puVar20[6];
                __ZdlPv();
              }
              puVar20[6] = uVar24;
              *(ulong *)((long)puVar20 + 0x3f) = CONCAT71(uStack_70,uStack_71);
              puVar20[7] = CONCAT17(uStack_71,uStack_78);
              *(undefined1 *)((long)puVar20 + 0x47) = uVar3;
              puVar20[9] = uVar19;
            }
            puVar7 = (ulong *)((long)puVar8 + (long)puVar16);
            puVar5 = (ulong *)((long)puVar8 + (long)(puVar16 + 5));
            puVar6 = puVar16 + 5;
            puVar21 = puVar16;
          } while (puVar5 != puVar18);
        }
        break;
      }
      if (puVar8 == puVar18 || puVar5 == puVar18) break;
      puVar16 = (ulong *)0x0;
      puVar7 = puVar8;
      goto LAB_10a181408;
    }
    if (puVar21 == (ulong *)0x0) {
      if (puVar8 == puVar18) break;
      uVar22 = uVar24 - 2 >> 1;
      uVar19 = uVar22;
      goto LAB_10a1814cc;
    }
    puVar5 = puVar8 + (uVar24 >> 1) * 5;
    uVar24 = *puVar7;
    puVar16 = puVar8;
    if (uVar23 < 0x1401) {
      uVar23 = *puVar8;
      puVar16 = puVar5;
      if (uVar23 < *puVar5) {
        puVar20 = puVar7;
        if ((uVar24 < uVar23) ||
           (FUN_10a181d74(puVar5,puVar8), puVar16 = puVar8, param_1 = puVar5, *puVar7 < *puVar8))
        goto LAB_10a180f80;
      }
      else if ((uVar24 < uVar23) &&
              (param_1 = puVar8, FUN_10a181d74(puVar8,puVar7), puVar20 = puVar8, *puVar8 < *puVar5))
      goto LAB_10a180f80;
    }
    else {
      uVar23 = *puVar5;
      puVar20 = puVar8;
      if (uVar23 < *puVar8) {
        puVar6 = puVar7;
        if ((uVar24 < uVar23) || (FUN_10a181d74(puVar8,puVar5), puVar20 = puVar5, *puVar7 < *puVar5)
           ) {
LAB_10a180dc8:
          FUN_10a181d74(puVar20,puVar6);
        }
      }
      else if ((uVar24 < uVar23) &&
              (FUN_10a181d74(puVar5,puVar7), puVar6 = puVar5, *puVar5 < *puVar8))
      goto LAB_10a180dc8;
      puVar20 = puVar8 + 5;
      puVar6 = puVar5 + -5;
      uVar23 = *puVar6;
      if (uVar23 < *puVar20) {
        puVar10 = puStack_a0;
        if ((*puStack_a0 < uVar23) ||
           (FUN_10a181d74(puVar20,puVar6), puVar20 = puVar6, puVar10 = puStack_a0,
           *puStack_a0 < *puVar6)) {
LAB_10a180e7c:
          FUN_10a181d74(puVar20,puVar10);
        }
      }
      else if ((*puStack_a0 < uVar23) &&
              (FUN_10a181d74(puVar6,puStack_a0), puVar10 = puVar6, *puVar6 < *puVar20))
      goto LAB_10a180e7c;
      puVar20 = puVar8 + 10;
      puVar10 = puVar5 + 5;
      uVar23 = *puVar10;
      if (uVar23 < *puVar20) {
        puVar9 = puStack_a8;
        if ((*puStack_a8 < uVar23) ||
           (FUN_10a181d74(puVar20,puVar10), puVar20 = puVar10, puVar9 = puStack_a8,
           *puStack_a8 < *puVar10)) {
LAB_10a180f00:
          FUN_10a181d74(puVar20,puVar9);
        }
      }
      else if ((*puStack_a8 < uVar23) &&
              (FUN_10a181d74(puVar10,puStack_a8), puVar9 = puVar10, *puVar10 < *puVar20))
      goto LAB_10a180f00;
      uVar23 = *puVar5;
      puVar20 = puVar5;
      if (uVar23 < puVar5[-5]) {
        if ((puVar5[5] < uVar23) ||
           (FUN_10a181d74(puVar6,puVar5), puVar6 = puVar5, puVar5[5] < *puVar5)) {
LAB_10a180f74:
          FUN_10a181d74(puVar6,puVar10);
        }
      }
      else if ((puVar5[5] < uVar23) &&
              (FUN_10a181d74(puVar5,puVar10), puVar10 = puVar5, *puVar5 < puVar5[-5]))
      goto LAB_10a180f74;
LAB_10a180f80:
      FUN_10a181d74(puVar16,puVar20);
      param_1 = puVar16;
    }
    puVar21 = (ulong *)((long)puVar21 + -1);
    uVar23 = *puVar8;
    if (((uStack_94 & 1) == 0) && (uVar23 <= puVar8[-5])) {
      puVar16 = (ulong *)puVar8[1];
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x17) >> 8);
      uStack_78 = (undefined7)puVar8[2];
      uStack_71 = (undefined1)(puVar8[2] >> 0x38);
      uVar3 = *(undefined1 *)((long)puVar8 + 0x1f);
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[1] = 0;
      puStack_90 = (ulong *)puVar8[4];
      puVar20 = puVar8 + 5;
      if (uVar23 < *puVar7) {
        do {
          puVar5 = puVar20;
          if (puVar5 == puVar18) goto LAB_10a181914;
          puVar20 = puVar5 + 5;
        } while (*puVar5 <= uVar23);
      }
      else {
        do {
          puVar5 = puVar20;
          if (puVar18 <= puVar5) break;
          puVar20 = puVar5 + 5;
        } while (*puVar5 <= uVar23);
      }
      puVar20 = puVar18;
      if (puVar5 < puVar18) {
        do {
          if (puVar20 == puVar8) goto LAB_10a181914;
          puVar20 = puVar20 + -5;
        } while (uVar23 < *puVar20);
      }
      while (puVar5 < puVar20) {
        param_1 = puVar5;
        FUN_10a181d74(puVar5,puVar20);
        do {
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar18) goto LAB_10a181914;
        } while (*puVar5 <= uVar23);
        do {
          if (puVar20 == puVar8) goto LAB_10a181914;
          puVar20 = puVar20 + -5;
        } while (uVar23 < *puVar20);
      }
      param_2 = puVar5 + -5;
      if (param_2 != puVar8) {
        FUN_10a181e44();
        param_1 = puVar8;
      }
      puVar5[-5] = uVar23;
      uStack_94 = 0;
      puVar5[-4] = (ulong)puVar16;
      *(ulong *)((long)puVar5 + -0x11) = CONCAT71(uStack_70,uStack_71);
      puVar5[-3] = CONCAT17(uStack_71,uStack_78);
      *(undefined1 *)((long)puVar5 + -9) = uVar3;
      puVar5[-1] = (ulong)puStack_90;
      goto LAB_10a180cb4;
    }
    lVar11 = 0;
    uVar24 = puVar8[1];
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x17) >> 8);
    uStack_78 = (undefined7)puVar8[2];
    uStack_71 = (undefined1)(puVar8[2] >> 0x38);
    uVar3 = *(undefined1 *)((long)puVar8 + 0x1f);
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[1] = 0;
    uVar19 = puVar8[4];
    do {
      puVar16 = (ulong *)((long)puVar8 + lVar11 + 0x28);
      if (puVar16 == puVar18) goto LAB_10a181914;
      lVar11 = lVar11 + 0x28;
    } while (*puVar16 < uVar23);
    puVar6 = (ulong *)((long)puVar8 + lVar11);
    puVar16 = puVar18;
    puStack_90 = puVar21;
    if (lVar11 == 0x28) {
      do {
        if (puVar16 <= puVar6) break;
        puVar16 = puVar16 + -5;
      } while (uVar23 <= *puVar16);
    }
    else {
      do {
        if (puVar16 == puVar8) goto LAB_10a181914;
        puVar16 = puVar16 + -5;
      } while (uVar23 <= *puVar16);
    }
    puVar5 = puVar6;
    puVar21 = puVar16;
    if (puVar6 < puVar16) {
      do {
        FUN_10a181d74(puVar5,puVar21);
        do {
          puVar5 = puVar5 + 5;
          if (puVar5 == puVar18) goto LAB_10a181914;
        } while (*puVar5 < uVar23);
        do {
          if (puVar21 == puVar8) goto LAB_10a181914;
          puVar21 = puVar21 + -5;
        } while (uVar23 <= *puVar21);
      } while (puVar5 < puVar21);
    }
    puVar10 = puVar5 + -5;
    if (puVar10 != puVar8) {
      FUN_10a181e44(puVar8,puVar10);
    }
    puVar21 = puStack_90;
    puVar7 = puStack_b0;
    puVar5[-5] = uVar23;
    puVar5[-4] = uVar24;
    *(ulong *)((long)puVar5 + -0x11) = CONCAT71(uStack_70,uStack_71);
    puVar5[-3] = CONCAT17(uStack_71,uStack_78);
    *(undefined1 *)((long)puVar5 + -9) = uVar3;
    puVar5[-1] = uVar19;
    puVar20 = (ulong *)0xcccccccccccccccd;
    if (puVar6 < puVar16) goto LAB_10a181100;
    puVar6 = puVar8;
    FUN_10a181a20(puVar8,puVar10);
    param_1 = puVar5;
    param_2 = puVar18;
    FUN_10a181a20();
    if ((int)param_1 == 0) goto code_r0x00010a1810fc;
    puVar18 = puVar10;
  } while (((ulong)puVar6 & 1) == 0);
  goto LAB_10a1818dc;
LAB_10a181408:
  do {
    puVar21 = puVar5;
    uVar23 = puVar7[5];
    if (uVar23 < *puVar7) {
      uVar24 = puVar7[6];
      uStack_78 = (undefined7)puVar7[7];
      uStack_71 = (undefined1)*(undefined8 *)((long)puVar7 + 0x3f);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar7 + 0x3f) >> 8);
      uVar3 = *(undefined1 *)((long)puVar7 + 0x47);
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[6] = 0;
      uVar19 = puVar7[9];
      puVar5 = puVar16;
      do {
        puVar7 = (ulong *)((long)puVar8 + (long)puVar5);
        param_1 = puVar7 + 5;
        param_2 = puVar7;
        FUN_10a181e44();
        puVar20 = puVar8;
        if (puVar5 == (ulong *)0x0) goto LAB_10a181474;
        puVar5 = puVar5 + -5;
      } while (uVar23 < puVar7[-5]);
      puVar20 = (ulong *)((long)puVar8 + (long)puVar5 + 0x28);
LAB_10a181474:
      *puVar20 = uVar23;
      if (*(char *)((long)puVar20 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar20[1];
        __ZdlPv();
      }
      puVar20[1] = uVar24;
      puVar20[2] = CONCAT17(uStack_71,uStack_78);
      *(ulong *)((long)puVar20 + 0x17) = CONCAT71(uStack_70,uStack_71);
      *(undefined1 *)((long)puVar20 + 0x1f) = uVar3;
      puVar20[4] = uVar19;
    }
    puVar16 = puVar16 + 5;
    puVar5 = puVar21 + 5;
    puVar7 = puVar21;
  } while (puVar21 + 5 != puVar18);
  goto LAB_10a1818dc;
code_r0x00010a1810fc:
  if (((ulong)puVar6 & 1) == 0) {
LAB_10a181100:
    param_4 = (ulong *)(ulong)(uStack_94 & 1);
    param_3 = puVar21;
    FUN_10a180c54();
    uStack_94 = 0;
    param_1 = puVar8;
    param_2 = puVar10;
  }
  goto LAB_10a180cb4;
LAB_10a1814cc:
  do {
    if ((long)uVar19 <= (long)uVar22) {
      uVar25 = uVar19 << 1 | 1;
      puVar16 = puVar8 + uVar25 * 5;
      uVar17 = uVar19 * 2 + 2;
      if ((long)uVar17 < (long)uVar24) {
        uVar12 = *puVar16;
        uVar14 = puVar16[5];
        uVar13 = uVar12;
        if (uVar12 <= uVar14) {
          uVar13 = uVar14;
        }
        puVar21 = puVar16 + 5;
        if (uVar14 <= uVar12) {
          puVar21 = puVar16;
          uVar17 = uVar25;
        }
      }
      else {
        uVar13 = *puVar16;
        puVar21 = puVar16;
        uVar17 = uVar25;
      }
      puVar16 = puVar8 + uVar19 * 5;
      uVar25 = *puVar16;
      if (uVar25 <= uVar13) {
        puStack_90 = (ulong *)puVar16[1];
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar16 + 0x17) >> 8);
        uStack_78 = (undefined7)puVar16[2];
        uStack_71 = (undefined1)(puVar16[2] >> 0x38);
        uStack_94 = (uint)*(byte *)((long)puVar16 + 0x1f);
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puStack_a0 = (ulong *)puVar16[4];
        do {
          puVar5 = puVar21;
          FUN_10a181e44(puVar16,puVar5);
          if ((long)uVar22 < (long)uVar17) break;
          uVar13 = uVar17 << 1 | 1;
          puVar16 = puVar8 + uVar13 * 5;
          uVar17 = uVar17 * 2 + 2;
          if ((long)uVar17 < (long)uVar24) {
            uVar14 = *puVar16;
            uVar15 = puVar16[5];
            uVar12 = uVar14;
            if (uVar14 <= uVar15) {
              uVar12 = uVar15;
            }
            puVar21 = puVar16 + 5;
            if (uVar15 <= uVar14) {
              puVar21 = puVar16;
              uVar17 = uVar13;
            }
          }
          else {
            uVar12 = *puVar16;
            puVar21 = puVar16;
            uVar17 = uVar13;
          }
          puVar16 = puVar5;
        } while (uVar25 <= uVar12);
        *puVar5 = uVar25;
        if (*(char *)((long)puVar5 + 0x1f) < '\0') {
          __ZdlPv(puVar5[1]);
        }
        puVar5[1] = (ulong)puStack_90;
        puVar5[2] = CONCAT17(uStack_71,uStack_78);
        *(ulong *)((long)puVar5 + 0x17) = CONCAT71(uStack_70,uStack_71);
        *(char *)((long)puVar5 + 0x1f) = (char)uStack_94;
        puVar5[4] = (ulong)puStack_a0;
      }
    }
    bVar2 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar2);
  lVar11 = (uVar23 >> 3) * -0x3333333333333333;
  do {
    puVar21 = (ulong *)*puVar8;
    uVar23 = puVar8[1];
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x17) >> 8);
    uStack_88 = (undefined7)puVar8[2];
    uStack_81 = (undefined1)(puVar8[2] >> 0x38);
    puStack_90 = (ulong *)CONCAT44(puStack_90._4_4_,(uint)*(byte *)((long)puVar8 + 0x1f));
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[1] = 0;
    uVar24 = puVar8[4];
    puVar20 = puVar8;
    puVar5 = (ulong *)0x0;
    do {
      puVar6 = (ulong *)((long)puVar5 << 1 | 1);
      puVar7 = (ulong *)((long)puVar5 * 2 + 2);
      puVar16 = puVar6;
      puVar10 = puVar20 + (long)puVar5 * 5 + 5;
      if (((long)puVar7 < lVar11) &&
         (puVar16 = puVar7, puVar10 = puVar20 + (long)puVar5 * 5 + 10,
         puVar20[(long)puVar5 * 5 + 10] <= puVar20[(long)puVar5 * 5 + 5])) {
        puVar16 = puVar6;
        puVar10 = puVar20 + (long)puVar5 * 5 + 5;
      }
      puVar20 = puVar10;
      param_2 = puVar20;
      FUN_10a181e44();
      puVar5 = puVar16;
    } while ((long)puVar16 <= (long)(lVar11 - 2U >> 1));
    puVar5 = puVar18 + -5;
    param_1 = puVar20;
    if (puVar20 == puVar5) {
      *puVar20 = (ulong)puVar21;
      if (*(char *)((long)puVar20 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar20[1];
        __ZdlPv();
      }
      puVar20[1] = uVar23;
      puVar20[2] = CONCAT17(uStack_81,uStack_88);
      *(ulong *)((long)puVar20 + 0x17) = CONCAT71(uStack_80,uStack_81);
      *(char *)((long)puVar20 + 0x1f) = (char)puStack_90;
      puVar20[4] = uVar24;
    }
    else {
      param_2 = puVar5;
      FUN_10a181e44();
      puVar18[-5] = (ulong)puVar21;
      puVar18[-4] = uVar23;
      *(ulong *)((long)puVar18 + -0x11) = CONCAT71(uStack_80,uStack_81);
      puVar18[-3] = CONCAT17(uStack_81,uStack_88);
      *(char *)((long)puVar18 + -9) = (char)puStack_90;
      puVar18[-1] = uVar24;
      uVar23 = (long)puVar20 + (0x28 - (long)puVar8);
      if (0x28 < (long)uVar23) {
        puVar18 = (ulong *)((uVar23 >> 3) * -0x3333333333333333 - 2 >> 1);
        uVar23 = *puVar20;
        puVar16 = puVar18;
        if (puVar8[(long)puVar18 * 5] < uVar23) {
          puVar21 = (ulong *)puVar20[1];
          uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar20 + 0x17) >> 8);
          uStack_78 = (undefined7)puVar20[2];
          uStack_71 = (undefined1)(puVar20[2] >> 0x38);
          uVar3 = *(undefined1 *)((long)puVar20 + 0x1f);
          puVar20[2] = 0;
          puVar20[3] = 0;
          puVar20[1] = 0;
          uVar24 = puVar20[4];
          puVar7 = puVar8 + (long)puVar18 * 5;
          do {
            param_1 = puVar20;
            puVar20 = puVar7;
            param_2 = puVar20;
            FUN_10a181e44();
            puVar16 = (ulong *)0x0;
            if (puVar18 == (ulong *)0x0) break;
            puVar18 = (ulong *)((long)puVar18 - 1U >> 1);
            puVar7 = puVar8 + (long)puVar18 * 5;
            puVar16 = puVar18;
          } while (puVar8[(long)puVar18 * 5] < uVar23);
          *puVar20 = uVar23;
          if (*(char *)((long)puVar20 + 0x1f) < '\0') {
            param_1 = (ulong *)puVar20[1];
            __ZdlPv();
          }
          puVar20[1] = (ulong)puVar21;
          puVar20[2] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar20 + 0x17) = CONCAT71(uStack_70,uStack_71);
          *(undefined1 *)((long)puVar20 + 0x1f) = uVar3;
          puVar20[4] = uVar24;
        }
      }
    }
    bVar2 = 2 < lVar11;
    lVar11 = lVar11 + -1;
    puVar18 = puVar5;
  } while (bVar2);
LAB_10a1818dc:
  puVar5 = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
LAB_10a181918:
  unaff_x22 = puVar21;
  unaff_x21 = puVar20;
  unaff_x20 = puVar16;
  unaff_x30 = FUN_10a18191c;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&puStack_b0;
  puVar20 = puVar5;
  puVar7 = param_4;
  unaff_x19 = puVar8;
  unaff_x29 = puVar1;
code_r0x00010a18191c:
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar23 = *puVar20;
  puVar16 = param_1;
  puVar21 = param_1;
  if (uVar23 < *param_1) {
    puVar8 = param_3;
    if ((uVar23 <= *param_3) &&
       (FUN_10a181d74(param_1,puVar20), puVar21 = puVar20, *puVar20 <= *param_3))
    goto LAB_10a1819b0;
  }
  else if ((uVar23 <= *param_3) ||
          (puVar16 = puVar20, FUN_10a181d74(puVar20,param_3), puVar8 = puVar20, *param_1 <= *puVar20
          )) goto LAB_10a1819b0;
  FUN_10a181d74(puVar21,puVar8);
  puVar16 = puVar21;
LAB_10a1819b0:
  if (((*param_3 <= *puVar7) ||
      (puVar16 = param_3, FUN_10a181d74(param_3,puVar7), *puVar20 <= *param_3)) ||
     (puVar16 = puVar20, FUN_10a181d74(puVar20,param_3), *param_1 <= *puVar20)) {
    return puVar16;
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(code **)((long)register0x00000008 + -8);
  unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(ulong **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
  unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
  puVar8 = param_1;
code_r0x00010a181d74:
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = *puVar8;
  *puVar8 = *puVar20;
  *puVar20 = uVar23;
  uVar23 = puVar8[1];
  *(ulong *)((long)register0x00000008 + -0x48) = puVar8[2];
  *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar8 + 0x17);
  uVar3 = *(undefined1 *)((long)puVar8 + 0x1f);
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[1] = 0;
  uVar19 = puVar8[4];
  uVar24 = puVar20[3];
  uVar22 = puVar20[1];
  puVar8[2] = puVar20[2];
  puVar8[1] = uVar22;
  puVar8[3] = uVar24;
  *(undefined1 *)((long)puVar20 + 0x1f) = 0;
  *(undefined1 *)(puVar20 + 1) = 0;
  puVar8[4] = puVar20[4];
  puVar16 = puVar20;
  if (*(char *)((long)puVar20 + 0x1f) < '\0') {
    puVar8 = (ulong *)puVar20[1];
    __ZdlPv();
  }
  uVar24 = *(ulong *)((long)register0x00000008 + -0x48);
  puVar20[1] = uVar23;
  puVar20[2] = uVar24;
  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
  *(undefined1 *)((long)puVar20 + 0x1f) = uVar3;
  puVar20[4] = uVar19;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x38)) {
    ___stack_chk_fail();
    *(ulong *)((long)register0x00000008 + -0x70) = uVar23;
    *(ulong **)((long)register0x00000008 + -0x68) = puVar20;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10a181e44;
    *puVar8 = *puVar16;
    if (*(char *)((long)puVar8 + 0x1f) < '\0') {
      __ZdlPv(puVar8[1]);
    }
    uVar24 = puVar16[2];
    uVar23 = puVar16[1];
    puVar8[3] = puVar16[3];
    puVar8[2] = uVar24;
    puVar8[1] = uVar23;
    *(undefined1 *)((long)puVar16 + 0x1f) = 0;
    *(undefined1 *)(puVar16 + 1) = 0;
    puVar8[4] = puVar16[4];
    return puVar8;
  }
  return puVar8;
}



/* Entry: 10a18191c; end: 10a181a1f;  */

ulong * FUN_10a18191c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  uVar5 = *param_2;
  puVar2 = param_1;
  puVar3 = param_1;
  if (uVar5 < *param_1) {
    puVar4 = param_3;
    if ((uVar5 <= *param_3) &&
       (FUN_10a181d74(param_1,param_2), puVar3 = param_2, *param_2 <= *param_3)) goto LAB_10a1819b0;
  }
  else if ((uVar5 <= *param_3) ||
          (puVar2 = param_2, FUN_10a181d74(param_2,param_3), puVar4 = param_2, *param_1 <= *param_2)
          ) goto LAB_10a1819b0;
  FUN_10a181d74(puVar3,puVar4);
  puVar2 = puVar3;
LAB_10a1819b0:
  if (((*param_3 <= *param_4) ||
      (puVar2 = param_3, FUN_10a181d74(param_3,param_4), *param_2 <= *param_3)) ||
     (puVar2 = param_2, FUN_10a181d74(param_2,param_3), *param_1 <= *param_2)) {
    return puVar2;
  }
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar5;
  uVar5 = param_1[1];
  uStack_48 = (undefined7)param_1[2];
  uVar7 = *(undefined8 *)((long)param_1 + 0x17);
  uStack_41 = (undefined1)uVar7;
  uVar1 = *(undefined1 *)((long)param_1 + 0x1f);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  uVar9 = param_1[4];
  uVar8 = param_2[3];
  uVar10 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar10;
  param_1[3] = uVar8;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  param_1[4] = param_2[4];
  puVar2 = param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    param_1 = (ulong *)param_2[1];
    __ZdlPv();
  }
  param_2[1] = uVar5;
  param_2[2] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0x17) = uVar7;
  *(undefined1 *)((long)param_2 + 0x1f) = uVar1;
  param_2[4] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    *param_1 = *puVar2;
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    uVar8 = puVar2[2];
    uVar5 = puVar2[1];
    param_1[3] = puVar2[3];
    param_1[2] = uVar8;
    param_1[1] = uVar5;
    *(undefined1 *)((long)puVar2 + 0x1f) = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    param_1[4] = puVar2[4];
    return param_1;
  }
  return param_1;
}



/* Entry: 10a181a20; end: 10a181d73;  */

ulong * FUN_10a181a20(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_78;
  undefined1 uStack_71;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  puVar6 = param_2;
  if ((long)uVar8 < 3) {
    if (uVar8 < 2) goto LAB_10a181d20;
    if (uVar8 != 2) {
LAB_10a181b60:
      puVar4 = param_1 + 10;
      puVar11 = param_1 + 5;
      uVar8 = *puVar11;
      puVar3 = param_1;
      if (uVar8 < *param_1) {
        puVar5 = puVar4;
        if ((*puVar4 < uVar8) ||
           (puVar6 = puVar11, FUN_10a181d74(param_1), puVar3 = puVar11, param_1[10] < param_1[5])) {
LAB_10a181c20:
          FUN_10a181d74(puVar3);
          puVar6 = puVar5;
        }
      }
      else if ((*puVar4 < uVar8) &&
              (puVar6 = puVar4, FUN_10a181d74(puVar11), puVar5 = puVar11, param_1[5] < *param_1))
      goto LAB_10a181c20;
      if (param_1 + 0xf != param_2) {
        lVar13 = 0;
        iVar14 = 0;
        puVar3 = param_1 + 0xf;
        do {
          uVar8 = *puVar3;
          if (uVar8 < *puVar4) {
            uVar10 = puVar3[1];
            uStack_78 = (undefined7)puVar3[2];
            uVar9 = *(undefined8 *)((long)puVar3 + 0x17);
            uStack_71 = (undefined1)uVar9;
            uVar1 = *(undefined1 *)((long)puVar3 + 0x1f);
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[1] = 0;
            uVar12 = puVar3[4];
            lVar2 = lVar13;
            do {
              lVar15 = lVar2;
              puVar6 = (ulong *)((long)param_1 + lVar15 + 0x50);
              FUN_10a181e44((long)param_1 + lVar15 + 0x78);
              puVar4 = param_1;
              if (lVar15 == -0x50) goto LAB_10a181ca8;
              lVar2 = lVar15 + -0x28;
            } while (uVar8 < *(ulong *)((long)param_1 + lVar15 + 0x28));
            puVar4 = (ulong *)((long)param_1 + lVar15 + 0x50);
LAB_10a181ca8:
            *puVar4 = uVar8;
            if (*(char *)((long)puVar4 + 0x1f) < '\0') {
              __ZdlPv(puVar4[1]);
            }
            puVar4[1] = uVar10;
            puVar4[2] = CONCAT17(uStack_71,uStack_78);
            *(undefined8 *)((long)puVar4 + 0x17) = uVar9;
            *(undefined1 *)((long)puVar4 + 0x1f) = uVar1;
            puVar4[4] = uVar12;
            iVar14 = iVar14 + 1;
            if (iVar14 == 8) {
              puVar3 = (ulong *)(ulong)(puVar3 + 5 == param_2);
              goto LAB_10a181d24;
            }
          }
          puVar11 = puVar3 + 5;
          lVar13 = lVar13 + 0x28;
          puVar4 = puVar3;
          puVar3 = puVar11;
        } while (puVar11 != param_2);
      }
      goto LAB_10a181d20;
    }
    if (*param_1 <= param_2[-5]) goto LAB_10a181d20;
LAB_10a181b54:
    puVar3 = param_2 + -5;
  }
  else if (uVar8 == 3) {
    puVar3 = param_1 + 5;
    uVar8 = *puVar3;
    puVar4 = param_2 + -5;
    if (uVar8 < *param_1) {
      if ((uVar8 <= *puVar4) &&
         (puVar6 = puVar3, FUN_10a181d74(param_1), puVar11 = param_1 + 5, param_1 = puVar3,
         *puVar11 <= *puVar4)) goto LAB_10a181d20;
      goto LAB_10a181b54;
    }
    if ((uVar8 <= *puVar4) || (FUN_10a181d74(puVar3), puVar6 = puVar4, *param_1 <= param_1[5]))
    goto LAB_10a181d20;
  }
  else {
    if (uVar8 == 4) {
      puVar6 = param_1 + 5;
      FUN_10a18191c(param_1,puVar6,param_1 + 10,param_2 + -5);
      goto LAB_10a181d20;
    }
    if (uVar8 != 5) goto LAB_10a181b60;
    puVar6 = param_1 + 5;
    FUN_10a18191c(param_1,puVar6,param_1 + 10,param_1 + 0xf);
    param_2 = param_2 + -5;
    if ((param_1[0xf] <= *param_2) ||
       (FUN_10a181d74(param_1 + 0xf), puVar6 = param_2, param_1[10] <= param_1[0xf]))
    goto LAB_10a181d20;
    puVar6 = param_1 + 0xf;
    FUN_10a181d74(param_1 + 10);
    if (param_1[5] <= param_1[10]) goto LAB_10a181d20;
    puVar6 = param_1 + 10;
    FUN_10a181d74(param_1 + 5);
    if (*param_1 <= param_1[5]) goto LAB_10a181d20;
    puVar3 = param_1 + 5;
  }
  FUN_10a181d74(param_1);
  puVar6 = puVar3;
LAB_10a181d20:
  puVar3 = (ulong *)0x1;
LAB_10a181d24:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *puVar3;
  *puVar3 = *puVar6;
  *puVar6 = uVar8;
  uVar8 = puVar3[1];
  uStack_c8 = (undefined7)puVar3[2];
  uVar9 = *(undefined8 *)((long)puVar3 + 0x17);
  uStack_c1 = (undefined1)uVar9;
  uVar1 = *(undefined1 *)((long)puVar3 + 0x1f);
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[1] = 0;
  uVar12 = puVar3[4];
  uVar10 = puVar6[3];
  uVar16 = puVar6[1];
  puVar3[2] = puVar6[2];
  puVar3[1] = uVar16;
  puVar3[3] = uVar10;
  *(undefined1 *)((long)puVar6 + 0x1f) = 0;
  *(undefined1 *)(puVar6 + 1) = 0;
  puVar3[4] = puVar6[4];
  puVar4 = puVar6;
  if (*(char *)((long)puVar6 + 0x1f) < '\0') {
    puVar3 = (ulong *)puVar6[1];
    __ZdlPv();
  }
  puVar6[1] = uVar8;
  puVar6[2] = CONCAT17(uStack_c1,uStack_c8);
  *(undefined8 *)((long)puVar6 + 0x17) = uVar9;
  *(undefined1 *)((long)puVar6 + 0x1f) = uVar1;
  puVar6[4] = uVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    *puVar3 = *puVar4;
    if (*(char *)((long)puVar3 + 0x1f) < '\0') {
      __ZdlPv(puVar3[1]);
    }
    uVar10 = puVar4[2];
    uVar8 = puVar4[1];
    puVar3[3] = puVar4[3];
    puVar3[2] = uVar10;
    puVar3[1] = uVar8;
    *(undefined1 *)((long)puVar4 + 0x1f) = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar3[4] = puVar4[4];
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a181d74; end: 10a181e43;  */

undefined8 * FUN_10a181d74(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar4;
  uVar4 = param_1[1];
  uStack_48 = (undefined7)param_1[2];
  uVar5 = *(undefined8 *)((long)param_1 + 0x17);
  uStack_41 = (undefined1)uVar5;
  uVar1 = *(undefined1 *)((long)param_1 + 0x1f);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  uVar7 = param_1[4];
  uVar6 = param_2[3];
  uVar8 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar8;
  param_1[3] = uVar6;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  param_1[4] = param_2[4];
  puVar2 = param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    param_1 = (undefined8 *)param_2[1];
    __ZdlPv();
  }
  param_2[1] = uVar4;
  param_2[2] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0x17) = uVar5;
  *(undefined1 *)((long)param_2 + 0x1f) = uVar1;
  param_2[4] = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_1 = *puVar2;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  uVar5 = puVar2[2];
  uVar4 = puVar2[1];
  param_1[3] = puVar2[3];
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  *(undefined1 *)((long)puVar2 + 0x1f) = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  param_1[4] = puVar2[4];
  return param_1;
}



/* Entry: 10a181e44; end: 10a181e9f;  */

undefined8 * FUN_10a181e44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10a181ea0; end: 10a181fc7;  */

undefined4 * FUN_10a181ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 auStack_1c8 [2];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [42];
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 in_stack_ffffffffffffffc8;
  
  if (param_1[0x66] == 2) {
    *param_2 = *param_3;
    if (param_2 != param_3) {
      FUN_10a0e9bec(param_2 + 2,*(long *)(param_3 + 2),*(long *)(param_3 + 4),
                    *(long *)(param_3 + 4) - *(long *)(param_3 + 2) >> 7);
      FUN_10a0e9f7c(param_2 + 8,*(long *)(param_3 + 8),*(long *)(param_3 + 10),
                    *(long *)(param_3 + 10) - *(long *)(param_3 + 8) >> 5);
    }
    lVar6 = 0;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                ((long)param_2 + lVar6 + 0x38,(long)param_3 + lVar6 + 0x38);
      *(undefined8 *)((long)param_2 + lVar6 + 0x50) = *(undefined8 *)((long)param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != 0x100);
    if (param_2 != param_3) {
      FUN_10a0ea0ec(param_2 + 0x4e,*(long *)(param_3 + 0x4e),*(long *)(param_3 + 0x50),
                    (*(long *)(param_3 + 0x50) - *(long *)(param_3 + 0x4e) >> 3) *
                    0x6db6db6db6db6db7);
      FUN_10a0ea2f0(param_2 + 0x54,*(long *)(param_3 + 0x54),*(long *)(param_3 + 0x56),
                    (*(long *)(param_3 + 0x56) - *(long *)(param_3 + 0x54) >> 3) *
                    -0x3333333333333333);
      FUN_10a0ea4a0(param_2 + 0x5a,*(long *)(param_3 + 0x5a),*(long *)(param_3 + 0x5c),
                    *(long *)(param_3 + 0x5c) - *(long *)(param_3 + 0x5a) >> 2);
      func_0x00010a0ea5c8(param_2 + 0x60,*(long *)(param_3 + 0x60),*(long *)(param_3 + 0x62),
                          *(long *)(param_3 + 0x62) - *(long *)(param_3 + 0x60) >> 4);
    }
    return param_2;
  }
  FUN_10a0e908c(auStack_1c8,param_3);
  FUN_10a1807fc(param_1);
  uVar4 = auStack_190[0x27];
  uVar3 = auStack_190[0x25];
  lVar6 = 0;
  *param_1 = auStack_1c8[0];
  *(undefined8 *)(param_1 + 6) = uStack_1b0;
  *(undefined8 *)(param_1 + 0xc) = uStack_198;
  *(undefined8 *)(param_1 + 4) = uStack_1b8;
  *(undefined8 *)(param_1 + 2) = uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  *(undefined8 *)(param_1 + 10) = uStack_1a0;
  *(undefined8 *)(param_1 + 8) = uStack_1a8;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  do {
    uVar7 = *(undefined8 *)((long)auStack_190 + lVar6);
    *(undefined8 *)((long)param_1 + lVar6 + 0x40) = *(undefined8 *)((long)auStack_190 + lVar6 + 8);
    *(undefined8 *)((long)param_1 + lVar6 + 0x38) = uVar7;
    uVar7 = *(undefined8 *)((long)auStack_190 + lVar6 + 0x10);
    uVar1 = *(undefined8 *)((long)auStack_190 + lVar6 + 0x18);
    *(undefined8 *)((long)auStack_190 + lVar6 + 8) = 0;
    *(undefined8 *)((long)auStack_190 + lVar6 + 0x10) = 0;
    uVar2 = auStack_190[0x21];
    *(undefined8 *)((long)auStack_190 + lVar6) = 0;
    *(undefined8 *)((long)param_1 + lVar6 + 0x48) = uVar7;
    *(undefined8 *)((long)param_1 + lVar6 + 0x50) = uVar1;
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x100);
  *(undefined8 *)(param_1 + 0x4e) = auStack_190[0x20];
  auStack_190[0x20] = 0;
  auStack_190[0x21] = 0;
  *(undefined8 *)(param_1 + 0x52) = auStack_190[0x22];
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x56) = auStack_190[0x24];
  *(undefined8 *)(param_1 + 0x54) = auStack_190[0x23];
  auStack_190[0x22] = 0;
  auStack_190[0x23] = 0;
  auStack_190[0x24] = 0;
  auStack_190[0x25] = 0;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x5a) = auStack_190[0x26];
  auStack_190[0x26] = 0;
  auStack_190[0x27] = 0;
  *(undefined8 *)(param_1 + 0x5e) = auStack_190[0x28];
  *(undefined8 *)(param_1 + 0x5c) = uVar4;
  *(undefined8 *)(param_1 + 0x62) = in_stack_ffffffffffffffc0;
  *(undefined8 *)(param_1 + 0x60) = auStack_190[0x29];
  *(undefined8 *)(param_1 + 100) = in_stack_ffffffffffffffc8;
  auStack_190[0x28] = 0;
  auStack_190[0x29] = 0;
  param_1[0x66] = 2;
  puVar5 = auStack_1c8;
  func_0x00010923ff08(puVar5);
  return puVar5;
}



/* Entry: 10a181fc8; end: 10a182c8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a18258c) */
/* WARNING: Removing unreachable block (ram,0x00010a182414) */
/* WARNING: Removing unreachable block (ram,0x00010a182a30) */

ulong * FUN_10a181fc8(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong *unaff_x21;
  ulong uVar19;
  ulong *puVar20;
  ulong *unaff_x22;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  uint uStack_94;
  ulong *puStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_94 = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  puVar16 = unaff_x20;
  puVar21 = param_3;
  puVar18 = param_2;
  do {
    puVar8 = puVar18 + -5;
    puStack_a8 = puVar18 + -0xf;
    puStack_a0 = puVar18 + -10;
    puStack_b0 = puVar8;
    puVar6 = puVar5;
LAB_10a182028:
    puVar5 = puVar6;
    puVar20 = (ulong *)0xcccccccccccccccd;
    uVar23 = (long)puVar18 - (long)puVar5;
    uVar24 = ((long)uVar23 >> 3) * -0x3333333333333333;
    if (uVar24 - 2 == 0 || (long)uVar24 < 2) {
      if (uVar24 < 2) break;
      if (uVar24 == 2) {
        if (*puVar5 <= puVar18[-5]) break;
LAB_10a1826d0:
        puVar8 = puVar5;
        puVar6 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a182c8c;
LAB_10a1826ec:
        puVar20 = puVar18 + -5;
        puVar5 = puVar8;
        goto code_r0x00010a181d74;
      }
    }
    else {
      if (uVar24 == 3) {
        puVar20 = puVar5 + 5;
        uVar23 = *puVar20;
        puVar6 = puVar18 + -5;
        if (*puVar5 <= uVar23) {
          if ((uVar23 <= *puVar6) ||
             (param_1 = puVar20, FUN_10a181d74(), param_2 = puVar6, *puVar5 <= puVar5[5])) break;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a182c8c;
          goto code_r0x00010a181d74;
        }
        if (*puVar6 < uVar23) goto LAB_10a1826d0;
        param_1 = puVar5;
        param_2 = puVar20;
        FUN_10a181d74();
        if (puVar5[5] <= *puVar6) break;
        puVar8 = puVar20;
        puVar6 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto LAB_10a1826ec;
        goto LAB_10a182c8c;
      }
      if (uVar24 == 4) {
        puVar6 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a182c8c;
        puVar20 = puVar5 + 5;
        param_3 = puVar5 + 10;
        param_1 = puVar5;
        goto code_r0x00010a182c90;
      }
      if (uVar24 == 5) {
        param_2 = puVar5 + 5;
        param_3 = puVar5 + 10;
        param_4 = puVar5 + 0xf;
        param_1 = puVar5;
        FUN_10a182c90();
        puVar18 = puVar18 + -5;
        if (puVar5[0xf] <= *puVar18) break;
        param_1 = puVar5 + 0xf;
        FUN_10a181d74();
        param_2 = puVar18;
        if (puVar5[10] <= puVar5[0xf]) break;
        param_1 = puVar5 + 10;
        param_2 = puVar5 + 0xf;
        FUN_10a181d74();
        if (puVar5[5] <= puVar5[10]) break;
        param_1 = puVar5 + 5;
        param_2 = puVar5 + 10;
        FUN_10a181d74();
        if (*puVar5 <= puVar5[5]) break;
        puVar6 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_10a182c8c;
        puVar20 = puVar5 + 5;
        goto code_r0x00010a181d74;
      }
    }
    if ((long)uVar23 < 0x3c0) {
      puVar6 = puVar5 + 5;
      if ((uStack_94 & 1) == 0) {
        if (puVar5 != puVar18 && puVar6 != puVar18) {
          puVar8 = puVar5;
          puVar7 = (ulong *)0x28;
          puVar21 = (ulong *)0x0;
          do {
            puVar16 = puVar7;
            uVar23 = *puVar6;
            if (uVar23 < *puVar8) {
              uVar24 = puVar8[6];
              uStack_78 = (undefined7)puVar8[7];
              uStack_71 = (undefined1)*(undefined8 *)((long)puVar8 + 0x3f);
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x3f) >> 8);
              uVar3 = *(undefined1 *)((long)puVar8 + 0x47);
              puVar8[7] = 0;
              puVar8[8] = 0;
              puVar8[6] = 0;
              uVar19 = puVar8[9];
              do {
                puVar6 = (ulong *)((long)puVar5 + (long)puVar21);
                param_1 = puVar6 + 5;
                param_2 = puVar6;
                FUN_10a181e44();
                if (puVar21 == (ulong *)0xffffffffffffffd8) {
LAB_10a182c88:
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a182c8c);
                  (*pcVar4)();
                }
                puVar21 = puVar21 + -5;
              } while (uVar23 < puVar6[-5]);
              puVar20 = (ulong *)((long)puVar5 + (long)puVar21);
              puVar20[5] = uVar23;
              if (*(char *)((long)puVar20 + 0x47) < '\0') {
                param_1 = (ulong *)puVar20[6];
                __ZdlPv();
              }
              puVar20[6] = uVar24;
              *(ulong *)((long)puVar20 + 0x3f) = CONCAT71(uStack_70,uStack_71);
              puVar20[7] = CONCAT17(uStack_71,uStack_78);
              *(undefined1 *)((long)puVar20 + 0x47) = uVar3;
              puVar20[9] = uVar19;
            }
            puVar8 = (ulong *)((long)puVar5 + (long)puVar16);
            puVar6 = (ulong *)((long)puVar5 + (long)(puVar16 + 5));
            puVar7 = puVar16 + 5;
            puVar21 = puVar16;
          } while (puVar6 != puVar18);
        }
        break;
      }
      if (puVar5 == puVar18 || puVar6 == puVar18) break;
      puVar16 = (ulong *)0x0;
      puVar8 = puVar5;
      goto LAB_10a18277c;
    }
    if (puVar21 == (ulong *)0x0) {
      if (puVar5 == puVar18) break;
      uVar22 = uVar24 - 2 >> 1;
      uVar19 = uVar22;
      goto LAB_10a182840;
    }
    puVar6 = puVar5 + (uVar24 >> 1) * 5;
    uVar24 = *puVar8;
    puVar16 = puVar5;
    if (uVar23 < 0x1401) {
      uVar23 = *puVar5;
      puVar16 = puVar6;
      if (uVar23 < *puVar6) {
        puVar20 = puVar8;
        if ((uVar24 < uVar23) ||
           (FUN_10a181d74(puVar6,puVar5), puVar16 = puVar5, param_1 = puVar6, *puVar8 < *puVar5))
        goto LAB_10a1822f4;
      }
      else if ((uVar24 < uVar23) &&
              (param_1 = puVar5, FUN_10a181d74(puVar5,puVar8), puVar20 = puVar5, *puVar5 < *puVar6))
      goto LAB_10a1822f4;
    }
    else {
      uVar23 = *puVar6;
      puVar20 = puVar5;
      if (uVar23 < *puVar5) {
        puVar7 = puVar8;
        if ((uVar24 < uVar23) || (FUN_10a181d74(puVar5,puVar6), puVar20 = puVar6, *puVar8 < *puVar6)
           ) {
LAB_10a18213c:
          FUN_10a181d74(puVar20,puVar7);
        }
      }
      else if ((uVar24 < uVar23) &&
              (FUN_10a181d74(puVar6,puVar8), puVar7 = puVar6, *puVar6 < *puVar5))
      goto LAB_10a18213c;
      puVar20 = puVar5 + 5;
      puVar7 = puVar6 + -5;
      uVar23 = *puVar7;
      if (uVar23 < *puVar20) {
        puVar10 = puStack_a0;
        if ((*puStack_a0 < uVar23) ||
           (FUN_10a181d74(puVar20,puVar7), puVar20 = puVar7, puVar10 = puStack_a0,
           *puStack_a0 < *puVar7)) {
LAB_10a1821f0:
          FUN_10a181d74(puVar20,puVar10);
        }
      }
      else if ((*puStack_a0 < uVar23) &&
              (FUN_10a181d74(puVar7,puStack_a0), puVar10 = puVar7, *puVar7 < *puVar20))
      goto LAB_10a1821f0;
      puVar20 = puVar5 + 10;
      puVar10 = puVar6 + 5;
      uVar23 = *puVar10;
      if (uVar23 < *puVar20) {
        puVar9 = puStack_a8;
        if ((*puStack_a8 < uVar23) ||
           (FUN_10a181d74(puVar20,puVar10), puVar20 = puVar10, puVar9 = puStack_a8,
           *puStack_a8 < *puVar10)) {
LAB_10a182274:
          FUN_10a181d74(puVar20,puVar9);
        }
      }
      else if ((*puStack_a8 < uVar23) &&
              (FUN_10a181d74(puVar10,puStack_a8), puVar9 = puVar10, *puVar10 < *puVar20))
      goto LAB_10a182274;
      uVar23 = *puVar6;
      puVar20 = puVar6;
      if (uVar23 < puVar6[-5]) {
        if ((puVar6[5] < uVar23) ||
           (FUN_10a181d74(puVar7,puVar6), puVar7 = puVar6, puVar6[5] < *puVar6)) {
LAB_10a1822e8:
          FUN_10a181d74(puVar7,puVar10);
        }
      }
      else if ((puVar6[5] < uVar23) &&
              (FUN_10a181d74(puVar6,puVar10), puVar10 = puVar6, *puVar6 < puVar6[-5]))
      goto LAB_10a1822e8;
LAB_10a1822f4:
      FUN_10a181d74(puVar16,puVar20);
      param_1 = puVar16;
    }
    puVar21 = (ulong *)((long)puVar21 + -1);
    uVar23 = *puVar5;
    if (((uStack_94 & 1) == 0) && (uVar23 <= puVar5[-5])) {
      puVar16 = (ulong *)puVar5[1];
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar5 + 0x17) >> 8);
      uStack_78 = (undefined7)puVar5[2];
      uStack_71 = (undefined1)(puVar5[2] >> 0x38);
      uVar3 = *(undefined1 *)((long)puVar5 + 0x1f);
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[1] = 0;
      puStack_90 = (ulong *)puVar5[4];
      puVar20 = puVar5 + 5;
      if (uVar23 < *puVar8) {
        do {
          puVar6 = puVar20;
          if (puVar6 == puVar18) goto LAB_10a182c88;
          puVar20 = puVar6 + 5;
        } while (*puVar6 <= uVar23);
      }
      else {
        do {
          puVar6 = puVar20;
          if (puVar18 <= puVar6) break;
          puVar20 = puVar6 + 5;
        } while (*puVar6 <= uVar23);
      }
      puVar20 = puVar18;
      if (puVar6 < puVar18) {
        do {
          if (puVar20 == puVar5) goto LAB_10a182c88;
          puVar20 = puVar20 + -5;
        } while (uVar23 < *puVar20);
      }
      while (puVar6 < puVar20) {
        param_1 = puVar6;
        FUN_10a181d74(puVar6,puVar20);
        do {
          puVar6 = puVar6 + 5;
          if (puVar6 == puVar18) goto LAB_10a182c88;
        } while (*puVar6 <= uVar23);
        do {
          if (puVar20 == puVar5) goto LAB_10a182c88;
          puVar20 = puVar20 + -5;
        } while (uVar23 < *puVar20);
      }
      param_2 = puVar6 + -5;
      if (param_2 != puVar5) {
        FUN_10a181e44();
        param_1 = puVar5;
      }
      puVar6[-5] = uVar23;
      uStack_94 = 0;
      puVar6[-4] = (ulong)puVar16;
      *(ulong *)((long)puVar6 + -0x11) = CONCAT71(uStack_70,uStack_71);
      puVar6[-3] = CONCAT17(uStack_71,uStack_78);
      *(undefined1 *)((long)puVar6 + -9) = uVar3;
      puVar6[-1] = (ulong)puStack_90;
      goto LAB_10a182028;
    }
    lVar11 = 0;
    uVar24 = puVar5[1];
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar5 + 0x17) >> 8);
    uStack_78 = (undefined7)puVar5[2];
    uStack_71 = (undefined1)(puVar5[2] >> 0x38);
    uVar3 = *(undefined1 *)((long)puVar5 + 0x1f);
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = 0;
    uVar19 = puVar5[4];
    do {
      puVar16 = (ulong *)((long)puVar5 + lVar11 + 0x28);
      if (puVar16 == puVar18) goto LAB_10a182c88;
      lVar11 = lVar11 + 0x28;
    } while (*puVar16 < uVar23);
    puVar7 = (ulong *)((long)puVar5 + lVar11);
    puVar16 = puVar18;
    puStack_90 = puVar21;
    if (lVar11 == 0x28) {
      do {
        if (puVar16 <= puVar7) break;
        puVar16 = puVar16 + -5;
      } while (uVar23 <= *puVar16);
    }
    else {
      do {
        if (puVar16 == puVar5) goto LAB_10a182c88;
        puVar16 = puVar16 + -5;
      } while (uVar23 <= *puVar16);
    }
    puVar6 = puVar7;
    puVar21 = puVar16;
    if (puVar7 < puVar16) {
      do {
        FUN_10a181d74(puVar6,puVar21);
        do {
          puVar6 = puVar6 + 5;
          if (puVar6 == puVar18) goto LAB_10a182c88;
        } while (*puVar6 < uVar23);
        do {
          if (puVar21 == puVar5) goto LAB_10a182c88;
          puVar21 = puVar21 + -5;
        } while (uVar23 <= *puVar21);
      } while (puVar6 < puVar21);
    }
    puVar10 = puVar6 + -5;
    if (puVar10 != puVar5) {
      FUN_10a181e44(puVar5,puVar10);
    }
    puVar21 = puStack_90;
    puVar8 = puStack_b0;
    puVar6[-5] = uVar23;
    puVar6[-4] = uVar24;
    *(ulong *)((long)puVar6 + -0x11) = CONCAT71(uStack_70,uStack_71);
    puVar6[-3] = CONCAT17(uStack_71,uStack_78);
    *(undefined1 *)((long)puVar6 + -9) = uVar3;
    puVar6[-1] = uVar19;
    puVar20 = (ulong *)0xcccccccccccccccd;
    if (puVar7 < puVar16) goto LAB_10a182474;
    puVar7 = puVar5;
    FUN_10a182d94(puVar5,puVar10);
    param_1 = puVar6;
    param_2 = puVar18;
    FUN_10a182d94();
    if ((int)param_1 == 0) goto code_r0x00010a182470;
    puVar18 = puVar10;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_10a182c50;
LAB_10a18277c:
  do {
    puVar21 = puVar6;
    uVar23 = puVar8[5];
    if (uVar23 < *puVar8) {
      uVar24 = puVar8[6];
      uStack_78 = (undefined7)puVar8[7];
      uStack_71 = (undefined1)*(undefined8 *)((long)puVar8 + 0x3f);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x3f) >> 8);
      uVar3 = *(undefined1 *)((long)puVar8 + 0x47);
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[6] = 0;
      uVar19 = puVar8[9];
      puVar6 = puVar16;
      do {
        puVar8 = (ulong *)((long)puVar5 + (long)puVar6);
        param_1 = puVar8 + 5;
        param_2 = puVar8;
        FUN_10a181e44();
        puVar20 = puVar5;
        if (puVar6 == (ulong *)0x0) goto LAB_10a1827e8;
        puVar6 = puVar6 + -5;
      } while (uVar23 < puVar8[-5]);
      puVar20 = (ulong *)((long)puVar5 + (long)puVar6 + 0x28);
LAB_10a1827e8:
      *puVar20 = uVar23;
      if (*(char *)((long)puVar20 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar20[1];
        __ZdlPv();
      }
      puVar20[1] = uVar24;
      puVar20[2] = CONCAT17(uStack_71,uStack_78);
      *(ulong *)((long)puVar20 + 0x17) = CONCAT71(uStack_70,uStack_71);
      *(undefined1 *)((long)puVar20 + 0x1f) = uVar3;
      puVar20[4] = uVar19;
    }
    puVar16 = puVar16 + 5;
    puVar6 = puVar21 + 5;
    puVar8 = puVar21;
  } while (puVar21 + 5 != puVar18);
  goto LAB_10a182c50;
code_r0x00010a182470:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10a182474:
    param_4 = (ulong *)(ulong)(uStack_94 & 1);
    param_3 = puVar21;
    FUN_10a181fc8();
    uStack_94 = 0;
    param_1 = puVar5;
    param_2 = puVar10;
  }
  goto LAB_10a182028;
LAB_10a182840:
  do {
    if ((long)uVar19 <= (long)uVar22) {
      uVar25 = uVar19 << 1 | 1;
      puVar16 = puVar5 + uVar25 * 5;
      uVar17 = uVar19 * 2 + 2;
      if ((long)uVar17 < (long)uVar24) {
        uVar12 = *puVar16;
        uVar14 = puVar16[5];
        uVar13 = uVar12;
        if (uVar12 <= uVar14) {
          uVar13 = uVar14;
        }
        puVar21 = puVar16 + 5;
        if (uVar14 <= uVar12) {
          puVar21 = puVar16;
          uVar17 = uVar25;
        }
      }
      else {
        uVar13 = *puVar16;
        puVar21 = puVar16;
        uVar17 = uVar25;
      }
      puVar16 = puVar5 + uVar19 * 5;
      uVar25 = *puVar16;
      if (uVar25 <= uVar13) {
        puStack_90 = (ulong *)puVar16[1];
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar16 + 0x17) >> 8);
        uStack_78 = (undefined7)puVar16[2];
        uStack_71 = (undefined1)(puVar16[2] >> 0x38);
        uStack_94 = (uint)*(byte *)((long)puVar16 + 0x1f);
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puStack_a0 = (ulong *)puVar16[4];
        do {
          puVar6 = puVar21;
          FUN_10a181e44(puVar16,puVar6);
          if ((long)uVar22 < (long)uVar17) break;
          uVar13 = uVar17 << 1 | 1;
          puVar16 = puVar5 + uVar13 * 5;
          uVar17 = uVar17 * 2 + 2;
          if ((long)uVar17 < (long)uVar24) {
            uVar14 = *puVar16;
            uVar15 = puVar16[5];
            uVar12 = uVar14;
            if (uVar14 <= uVar15) {
              uVar12 = uVar15;
            }
            puVar21 = puVar16 + 5;
            if (uVar15 <= uVar14) {
              puVar21 = puVar16;
              uVar17 = uVar13;
            }
          }
          else {
            uVar12 = *puVar16;
            puVar21 = puVar16;
            uVar17 = uVar13;
          }
          puVar16 = puVar6;
        } while (uVar25 <= uVar12);
        *puVar6 = uVar25;
        if (*(char *)((long)puVar6 + 0x1f) < '\0') {
          __ZdlPv(puVar6[1]);
        }
        puVar6[1] = (ulong)puStack_90;
        puVar6[2] = CONCAT17(uStack_71,uStack_78);
        *(ulong *)((long)puVar6 + 0x17) = CONCAT71(uStack_70,uStack_71);
        *(char *)((long)puVar6 + 0x1f) = (char)uStack_94;
        puVar6[4] = (ulong)puStack_a0;
      }
    }
    bVar2 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar2);
  lVar11 = (uVar23 >> 3) * -0x3333333333333333;
  do {
    puVar21 = (ulong *)*puVar5;
    uVar23 = puVar5[1];
    uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)puVar5 + 0x17) >> 8);
    uStack_88 = (undefined7)puVar5[2];
    uStack_81 = (undefined1)(puVar5[2] >> 0x38);
    puStack_90 = (ulong *)CONCAT44(puStack_90._4_4_,(uint)*(byte *)((long)puVar5 + 0x1f));
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[1] = 0;
    uVar24 = puVar5[4];
    puVar20 = puVar5;
    puVar6 = (ulong *)0x0;
    do {
      puVar7 = (ulong *)((long)puVar6 << 1 | 1);
      puVar8 = (ulong *)((long)puVar6 * 2 + 2);
      puVar16 = puVar7;
      puVar10 = puVar20 + (long)puVar6 * 5 + 5;
      if (((long)puVar8 < lVar11) &&
         (puVar16 = puVar8, puVar10 = puVar20 + (long)puVar6 * 5 + 10,
         puVar20[(long)puVar6 * 5 + 10] <= puVar20[(long)puVar6 * 5 + 5])) {
        puVar16 = puVar7;
        puVar10 = puVar20 + (long)puVar6 * 5 + 5;
      }
      puVar20 = puVar10;
      param_2 = puVar20;
      FUN_10a181e44();
      puVar6 = puVar16;
    } while ((long)puVar16 <= (long)(lVar11 - 2U >> 1));
    puVar6 = puVar18 + -5;
    param_1 = puVar20;
    if (puVar20 == puVar6) {
      *puVar20 = (ulong)puVar21;
      if (*(char *)((long)puVar20 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar20[1];
        __ZdlPv();
      }
      puVar20[1] = uVar23;
      puVar20[2] = CONCAT17(uStack_81,uStack_88);
      *(ulong *)((long)puVar20 + 0x17) = CONCAT71(uStack_80,uStack_81);
      *(char *)((long)puVar20 + 0x1f) = (char)puStack_90;
      puVar20[4] = uVar24;
    }
    else {
      param_2 = puVar6;
      FUN_10a181e44();
      puVar18[-5] = (ulong)puVar21;
      puVar18[-4] = uVar23;
      *(ulong *)((long)puVar18 + -0x11) = CONCAT71(uStack_80,uStack_81);
      puVar18[-3] = CONCAT17(uStack_81,uStack_88);
      *(char *)((long)puVar18 + -9) = (char)puStack_90;
      puVar18[-1] = uVar24;
      uVar23 = (long)puVar20 + (0x28 - (long)puVar5);
      if (0x28 < (long)uVar23) {
        puVar18 = (ulong *)((uVar23 >> 3) * -0x3333333333333333 - 2 >> 1);
        uVar23 = *puVar20;
        puVar16 = puVar18;
        if (puVar5[(long)puVar18 * 5] < uVar23) {
          puVar21 = (ulong *)puVar20[1];
          uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar20 + 0x17) >> 8);
          uStack_78 = (undefined7)puVar20[2];
          uStack_71 = (undefined1)(puVar20[2] >> 0x38);
          uVar3 = *(undefined1 *)((long)puVar20 + 0x1f);
          puVar20[2] = 0;
          puVar20[3] = 0;
          puVar20[1] = 0;
          uVar24 = puVar20[4];
          puVar8 = puVar5 + (long)puVar18 * 5;
          do {
            param_1 = puVar20;
            puVar20 = puVar8;
            param_2 = puVar20;
            FUN_10a181e44();
            puVar16 = (ulong *)0x0;
            if (puVar18 == (ulong *)0x0) break;
            puVar18 = (ulong *)((long)puVar18 - 1U >> 1);
            puVar8 = puVar5 + (long)puVar18 * 5;
            puVar16 = puVar18;
          } while (puVar5[(long)puVar18 * 5] < uVar23);
          *puVar20 = uVar23;
          if (*(char *)((long)puVar20 + 0x1f) < '\0') {
            param_1 = (ulong *)puVar20[1];
            __ZdlPv();
          }
          puVar20[1] = (ulong)puVar21;
          puVar20[2] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar20 + 0x17) = CONCAT71(uStack_70,uStack_71);
          *(undefined1 *)((long)puVar20 + 0x1f) = uVar3;
          puVar20[4] = uVar24;
        }
      }
    }
    bVar2 = 2 < lVar11;
    lVar11 = lVar11 + -1;
    puVar18 = puVar6;
  } while (bVar2);
LAB_10a182c50:
  puVar6 = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
LAB_10a182c8c:
  unaff_x22 = puVar21;
  unaff_x21 = puVar20;
  unaff_x20 = puVar16;
  unaff_x30 = FUN_10a182c90;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&puStack_b0;
  puVar20 = puVar6;
  puVar8 = param_4;
  unaff_x19 = puVar5;
  unaff_x29 = puVar1;
code_r0x00010a182c90:
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar23 = *puVar20;
  puVar16 = param_1;
  puVar21 = param_1;
  if (uVar23 < *param_1) {
    puVar5 = param_3;
    if ((uVar23 <= *param_3) &&
       (FUN_10a181d74(param_1,puVar20), puVar21 = puVar20, *puVar20 <= *param_3))
    goto LAB_10a182d24;
  }
  else if ((uVar23 <= *param_3) ||
          (puVar16 = puVar20, FUN_10a181d74(puVar20,param_3), puVar5 = puVar20, *param_1 <= *puVar20
          )) goto LAB_10a182d24;
  FUN_10a181d74(puVar21,puVar5);
  puVar16 = puVar21;
LAB_10a182d24:
  if (((*param_3 <= *puVar8) ||
      (puVar16 = param_3, FUN_10a181d74(param_3,puVar8), *puVar20 <= *param_3)) ||
     (puVar16 = puVar20, FUN_10a181d74(puVar20,param_3), *param_1 <= *puVar20)) {
    return puVar16;
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(code **)((long)register0x00000008 + -8);
  unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(ulong **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
  unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
  puVar5 = param_1;
code_r0x00010a181d74:
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = *puVar5;
  *puVar5 = *puVar20;
  *puVar20 = uVar23;
  uVar23 = puVar5[1];
  *(ulong *)((long)register0x00000008 + -0x48) = puVar5[2];
  *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar5 + 0x17);
  uVar3 = *(undefined1 *)((long)puVar5 + 0x1f);
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[1] = 0;
  uVar19 = puVar5[4];
  uVar24 = puVar20[3];
  uVar22 = puVar20[1];
  puVar5[2] = puVar20[2];
  puVar5[1] = uVar22;
  puVar5[3] = uVar24;
  *(undefined1 *)((long)puVar20 + 0x1f) = 0;
  *(undefined1 *)(puVar20 + 1) = 0;
  puVar5[4] = puVar20[4];
  puVar16 = puVar20;
  if (*(char *)((long)puVar20 + 0x1f) < '\0') {
    puVar5 = (ulong *)puVar20[1];
    __ZdlPv();
  }
  uVar24 = *(ulong *)((long)register0x00000008 + -0x48);
  puVar20[1] = uVar23;
  puVar20[2] = uVar24;
  *(undefined8 *)((long)puVar20 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
  *(undefined1 *)((long)puVar20 + 0x1f) = uVar3;
  puVar20[4] = uVar19;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x38)) {
    ___stack_chk_fail();
    *(ulong *)((long)register0x00000008 + -0x70) = uVar23;
    *(ulong **)((long)register0x00000008 + -0x68) = puVar20;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10a181e44;
    *puVar5 = *puVar16;
    if (*(char *)((long)puVar5 + 0x1f) < '\0') {
      __ZdlPv(puVar5[1]);
    }
    uVar24 = puVar16[2];
    uVar23 = puVar16[1];
    puVar5[3] = puVar16[3];
    puVar5[2] = uVar24;
    puVar5[1] = uVar23;
    *(undefined1 *)((long)puVar16 + 0x1f) = 0;
    *(undefined1 *)(puVar16 + 1) = 0;
    puVar5[4] = puVar16[4];
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10a182c90; end: 10a182d93;  */

ulong * FUN_10a182c90(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  uVar8 = *param_2;
  puVar2 = param_1;
  puVar3 = param_1;
  if (uVar8 < *param_1) {
    puVar4 = param_3;
    if ((uVar8 <= *param_3) &&
       (FUN_10a181d74(param_1,param_2), puVar3 = param_2, *param_2 <= *param_3)) goto LAB_10a182d24;
  }
  else if ((uVar8 <= *param_3) ||
          (puVar2 = param_2, FUN_10a181d74(param_2,param_3), puVar4 = param_2, *param_1 <= *param_2)
          ) goto LAB_10a182d24;
  FUN_10a181d74(puVar3,puVar4);
  puVar2 = puVar3;
LAB_10a182d24:
  if (((*param_3 <= *param_4) ||
      (puVar2 = param_3, FUN_10a181d74(param_3,param_4), *param_2 <= *param_3)) ||
     (puVar2 = param_2, FUN_10a181d74(param_2,param_3), *param_1 <= *param_2)) {
    return puVar2;
  }
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar8;
  uVar8 = param_1[1];
  uStack_48 = (undefined7)param_1[2];
  uVar6 = *(undefined8 *)((long)param_1 + 0x17);
  uStack_41 = (undefined1)uVar6;
  uVar1 = *(undefined1 *)((long)param_1 + 0x1f);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  uVar9 = param_1[4];
  uVar7 = param_2[3];
  uVar10 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar10;
  param_1[3] = uVar7;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  param_1[4] = param_2[4];
  puVar2 = param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    param_1 = (ulong *)param_2[1];
    __ZdlPv();
  }
  param_2[1] = uVar8;
  param_2[2] = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0x17) = uVar6;
  *(undefined1 *)((long)param_2 + 0x1f) = uVar1;
  param_2[4] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    *param_1 = *puVar2;
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    uVar7 = puVar2[2];
    uVar8 = puVar2[1];
    param_1[3] = puVar2[3];
    param_1[2] = uVar7;
    param_1[1] = uVar8;
    *(undefined1 *)((long)puVar2 + 0x1f) = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    param_1[4] = puVar2[4];
    return param_1;
  }
  return param_1;
}



/* Entry: 10a182d94; end: 10a1830e7;  */

undefined8 * FUN_10a182d94(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong *puVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined7 uStack_78;
  undefined1 uStack_71;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  puVar9 = param_2;
  if ((long)uVar11 < 3) {
    if (uVar11 < 2) goto LAB_10a183094;
    if (uVar11 != 2) {
LAB_10a182ed4:
      puVar7 = param_1 + 10;
      puVar13 = param_1 + 5;
      uVar11 = *puVar13;
      puVar4 = param_1;
      if (uVar11 < *param_1) {
        puVar8 = puVar7;
        if ((*puVar7 < uVar11) ||
           (puVar9 = puVar13, FUN_10a181d74(param_1), puVar4 = puVar13, param_1[10] < param_1[5])) {
LAB_10a182f94:
          FUN_10a181d74(puVar4);
          puVar9 = puVar8;
        }
      }
      else if ((*puVar7 < uVar11) &&
              (puVar9 = puVar7, FUN_10a181d74(puVar13), puVar8 = puVar13, param_1[5] < *param_1))
      goto LAB_10a182f94;
      if (param_1 + 0xf != param_2) {
        lVar14 = 0;
        iVar15 = 0;
        puVar4 = param_1 + 0xf;
        do {
          uVar11 = *puVar4;
          if (uVar11 < *puVar7) {
            uVar1 = puVar4[1];
            uStack_78 = (undefined7)puVar4[2];
            uVar12 = *(undefined8 *)((long)puVar4 + 0x17);
            uStack_71 = (undefined1)uVar12;
            uVar2 = *(undefined1 *)((long)puVar4 + 0x1f);
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[1] = 0;
            uVar16 = puVar4[4];
            lVar3 = lVar14;
            do {
              lVar17 = lVar3;
              puVar9 = (ulong *)((long)param_1 + lVar17 + 0x50);
              FUN_10a181e44((long)param_1 + lVar17 + 0x78);
              puVar7 = param_1;
              if (lVar17 == -0x50) goto LAB_10a18301c;
              lVar3 = lVar17 + -0x28;
            } while (uVar11 < *(ulong *)((long)param_1 + lVar17 + 0x28));
            puVar7 = (ulong *)((long)param_1 + lVar17 + 0x50);
LAB_10a18301c:
            *puVar7 = uVar11;
            if (*(char *)((long)puVar7 + 0x1f) < '\0') {
              __ZdlPv(puVar7[1]);
            }
            puVar7[1] = uVar1;
            puVar7[2] = CONCAT17(uStack_71,uStack_78);
            *(undefined8 *)((long)puVar7 + 0x17) = uVar12;
            *(undefined1 *)((long)puVar7 + 0x1f) = uVar2;
            puVar7[4] = uVar16;
            iVar15 = iVar15 + 1;
            if (iVar15 == 8) {
              puVar5 = (undefined8 *)(ulong)(puVar4 + 5 == param_2);
              goto LAB_10a183098;
            }
          }
          puVar13 = puVar4 + 5;
          lVar14 = lVar14 + 0x28;
          puVar7 = puVar4;
          puVar4 = puVar13;
        } while (puVar13 != param_2);
      }
      goto LAB_10a183094;
    }
    if (*param_1 <= param_2[-5]) goto LAB_10a183094;
LAB_10a182ec8:
    puVar4 = param_2 + -5;
  }
  else if (uVar11 == 3) {
    puVar4 = param_1 + 5;
    uVar11 = *puVar4;
    puVar7 = param_2 + -5;
    if (uVar11 < *param_1) {
      if ((uVar11 <= *puVar7) &&
         (puVar9 = puVar4, FUN_10a181d74(param_1), puVar13 = param_1 + 5, param_1 = puVar4,
         *puVar13 <= *puVar7)) goto LAB_10a183094;
      goto LAB_10a182ec8;
    }
    if ((uVar11 <= *puVar7) || (FUN_10a181d74(puVar4), puVar9 = puVar7, *param_1 <= param_1[5]))
    goto LAB_10a183094;
  }
  else {
    if (uVar11 == 4) {
      puVar9 = param_1 + 5;
      FUN_10a182c90(param_1,puVar9,param_1 + 10,param_2 + -5);
      goto LAB_10a183094;
    }
    if (uVar11 != 5) goto LAB_10a182ed4;
    puVar9 = param_1 + 5;
    FUN_10a182c90(param_1,puVar9,param_1 + 10,param_1 + 0xf);
    param_2 = param_2 + -5;
    if ((param_1[0xf] <= *param_2) ||
       (FUN_10a181d74(param_1 + 0xf), puVar9 = param_2, param_1[10] <= param_1[0xf]))
    goto LAB_10a183094;
    puVar9 = param_1 + 0xf;
    FUN_10a181d74(param_1 + 10);
    if (param_1[5] <= param_1[10]) goto LAB_10a183094;
    puVar9 = param_1 + 10;
    FUN_10a181d74(param_1 + 5);
    if (*param_1 <= param_1[5]) goto LAB_10a183094;
    puVar4 = param_1 + 5;
  }
  FUN_10a181d74(param_1);
  puVar9 = puVar4;
LAB_10a183094:
  puVar5 = (undefined8 *)0x1;
LAB_10a183098:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    uVar11 = *puVar9;
    uVar1 = puVar9[1];
    lVar10 = uVar1 - uVar11;
    if (lVar10 != 0) {
      FUN_10a183228(puVar5,(lVar10 >> 3) * -0x3333333333333333);
      puVar6 = puVar5;
      FUN_10a183288(puVar5,uVar11,uVar1,puVar5[1]);
      puVar5[1] = puVar6;
    }
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    FUN_10a0e9ab8();
    puVar6 = puVar5 + 6;
    *puVar6 = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    uVar11 = puVar9[6];
    uVar1 = puVar9[7];
    lVar10 = uVar1 - uVar11;
    if (lVar10 != 0) {
      FUN_10a1833b4(puVar6,lVar10 >> 5);
      FUN_10a183408(puVar6,uVar11,uVar1,puVar5[7]);
      puVar5[7] = puVar6;
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10a1830e8; end: 10a183227;  */

undefined8 * FUN_10a1830e8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = lVar2 - lVar1;
  if (lVar3 != 0) {
    FUN_10a183228(param_1,(lVar3 >> 3) * -0x3333333333333333);
    puVar4 = param_1;
    FUN_10a183288(param_1,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar4;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10a0e9ab8();
  puVar4 = param_1 + 6;
  *puVar4 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar1 = param_2[6];
  lVar2 = param_2[7];
  lVar3 = lVar2 - lVar1;
  if (lVar3 != 0) {
    FUN_10a1833b4(puVar4,lVar3 >> 5);
    FUN_10a183408(puVar4,lVar1,lVar2,param_1[7]);
    param_1[7] = puVar4;
  }
  return param_1;
}



/* Entry: 10a183228; end: 10a183273;  */

undefined8 *
FUN_10a183228(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if (param_2 < (undefined8 *)0x666666666666667) {
    puVar1 = (undefined8 *)((long)param_2 * 0x28);
    __Znwm();
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar1;
    param_1[2] = (long)(puVar1 + (long)param_2 * 5);
    return puVar1;
  }
  FUN_10a183274();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    uVar3 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar3;
    param_4 = puStack_68 + 5;
  }
  uStack_78 = 1;
  FUN_10a183358(&puStack_90);
  return param_4;
}



/* Entry: 10a183274; end: 10a183287;  */

undefined8 *
FUN_10a183274(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  uStack_58 = 0;
  puStack_70 = puVar1;
  puStack_50 = param_4;
  for (; puStack_48 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar3;
      *param_4 = uVar2;
    }
    uVar2 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar2;
    param_4 = puStack_48 + 5;
  }
  uStack_58 = 1;
  FUN_10a183358(&puStack_70);
  return param_4;
}



/* Entry: 10a183288; end: 10a183357;  */

undefined8 *
FUN_10a183288(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
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
    uVar1 = param_2[3];
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    param_4[3] = uVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_10a183358(&uStack_60);
  return param_4;
}



/* Entry: 10a183358; end: 10a1833b3;  */

/* WARNING: Removing unreachable block (ram,0x00010a1833a8) */

long FUN_10a183358(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x28) {
    }
  }
  return param_1;
}



/* Entry: 10a1833b4; end: 10a1833f3;  */

undefined8 *
FUN_10a1833b4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    puVar1 = (undefined8 *)((long)param_2 << 5);
    __Znwm();
    *param_1 = (long)puVar1;
    param_1[1] = (long)puVar1;
    param_1[2] = (long)(puVar1 + (long)param_2 * 4);
    return puVar1;
  }
  FUN_10a1833f4();
  puVar2 = &UNK_10f6403f7;
  FUN_109ffde64();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar4;
      *param_4 = uVar3;
    }
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_68 + 4;
  }
  uStack_78 = 1;
  FUN_10a1834d0(&puStack_90);
  return param_4;
}



/* Entry: 10a1833f4; end: 10a183407;  */

undefined8 *
FUN_10a1833f4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar1 = &UNK_10f6403f7;
  FUN_109ffde64();
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  uStack_58 = 0;
  puStack_70 = puVar1;
  puStack_50 = param_4;
  for (; puStack_48 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar3;
      *param_4 = uVar2;
    }
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_48 + 4;
  }
  uStack_58 = 1;
  FUN_10a1834d0(&puStack_70);
  return param_4;
}



/* Entry: 10a183408; end: 10a1834cf;  */

undefined8 *
FUN_10a183408(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(param_2 + 3);
    param_4 = puStack_38 + 4;
  }
  uStack_48 = 1;
  FUN_10a1834d0(&uStack_60);
  return param_4;
}



/* Entry: 10a1834d0; end: 10a18352b;  */

/* WARNING: Removing unreachable block (ram,0x00010a183520) */

long FUN_10a1834d0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8);
        lVar1 = lVar1 + -0x20) {
    }
  }
  return param_1;
}



/* Entry: 10a18352c; end: 10a18388b;  */

/* WARNING: Removing unreachable block (ram,0x00010a1836f0) */
/* WARNING: Removing unreachable block (ram,0x00010a183838) */

void FUN_10a18352c(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  cVar3 = (char)param_1[9];
  puVar8 = param_1;
  if (cVar3 != (char)param_2[9]) {
    if (cVar3 == '\0') {
      FUN_10a1830e8(param_1,param_2);
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
    goto code_r0x00010a18388c;
  }
  if (param_1 == param_2) {
    return;
  }
  if (cVar3 == '\0') {
    return;
  }
  uVar9 = *param_2;
  uVar7 = param_2[1];
  uVar5 = uVar7 - uVar9;
  puVar10 = (ulong *)*param_1;
  puVar4 = param_1;
  if (param_1[2] - (long)puVar10 < uVar5) {
    puVar11 = (ulong *)(((long)uVar5 >> 3) * -0x3333333333333333);
    puVar10 = (ulong *)0x666666666666666;
    func_0x000109242758();
    if (puVar11 < (ulong *)0x666666666666667) {
      lVar6 = (long)(param_1[2] - *param_1) >> 3;
      puVar8 = (ulong *)(lVar6 * -0x6666666666666666);
      if (puVar8 < puVar11 || (long)puVar8 + ((long)uVar5 >> 3) * 0x3333333333333333 == 0) {
        puVar8 = puVar11;
      }
      if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
        puVar8 = puVar10;
      }
      FUN_10a183228(param_1,puVar8);
      FUN_10a183288(param_1,uVar9,uVar7,param_1[1]);
      goto LAB_10a1836a0;
    }
    FUN_10a183274();
  }
  else {
    puVar11 = (ulong *)param_1[1];
    if ((ulong)((long)puVar11 - (long)puVar10) < uVar5) {
      uVar5 = uVar9 + ((long)puVar11 - (long)puVar10);
      if (puVar11 != puVar10) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar10,uVar9);
          uVar2 = *(undefined4 *)(uVar9 + 0x20);
          puVar10[3] = *(ulong *)(uVar9 + 0x18);
          *(undefined4 *)(puVar10 + 4) = uVar2;
          uVar9 = uVar9 + 0x28;
          puVar10 = puVar10 + 5;
        } while (uVar9 != uVar5);
        puVar11 = (ulong *)param_1[1];
      }
      FUN_10a183288(param_1,uVar5,uVar7,puVar11);
LAB_10a1836a0:
      param_1[1] = (ulong)puVar4;
    }
    else {
      if (uVar9 != uVar7) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar10,uVar9);
          uVar2 = *(undefined4 *)(uVar9 + 0x20);
          puVar10[3] = *(ulong *)(uVar9 + 0x18);
          *(undefined4 *)(puVar10 + 4) = uVar2;
          uVar9 = uVar9 + 0x28;
          puVar10 = puVar10 + 5;
        } while (uVar9 != uVar7);
        puVar11 = (ulong *)param_1[1];
      }
      for (; puVar11 != puVar10; puVar11 = puVar11 + -5) {
      }
      param_1[1] = (ulong)puVar10;
    }
    func_0x00010a0ea5c8(param_1 + 3,param_2[3],param_2[4],(long)(param_2[4] - param_2[3]) >> 4);
    puVar10 = param_1 + 6;
    uVar9 = *puVar10;
    puVar4 = (ulong *)param_2[6];
    param_2 = (ulong *)param_2[7];
    uVar7 = (long)param_2 - (long)puVar4;
    if (uVar7 <= param_1[8] - uVar9) {
      uVar5 = param_1[7];
      if (uVar7 <= uVar5 - uVar9) {
        if (puVar4 != param_2) {
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(uVar9,puVar4);
            *(int *)(uVar9 + 0x18) = (int)puVar4[3];
            puVar4 = puVar4 + 4;
            uVar9 = uVar9 + 0x20;
          } while (puVar4 != param_2);
          uVar5 = param_1[7];
        }
        for (; uVar5 != uVar9; uVar5 = uVar5 - 0x20) {
        }
        param_1[7] = uVar9;
        return;
      }
      puVar8 = (ulong *)((long)puVar4 + (uVar5 - uVar9));
      if (uVar5 != uVar9) {
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(uVar9,puVar4);
          *(int *)(uVar9 + 0x18) = (int)puVar4[3];
          puVar4 = puVar4 + 4;
          uVar9 = uVar9 + 0x20;
        } while (puVar4 != puVar8);
        uVar5 = param_1[7];
      }
      FUN_10a183408(puVar10,puVar8,param_2,uVar5);
LAB_10a1837f0:
      param_1[7] = (ulong)puVar10;
      return;
    }
    uVar7 = (long)uVar7 >> 5;
    puVar8 = puVar10;
    func_0x000109294ba8();
    if (uVar7 >> 0x3b == 0) {
      uVar9 = (long)(param_1[8] - param_1[6]) >> 4;
      if (uVar9 <= uVar7) {
        uVar9 = uVar7;
      }
      if (0x7fffffffffffffdf < param_1[8] - param_1[6]) {
        uVar9 = 0x7ffffffffffffff;
      }
      FUN_10a1833b4(puVar10,uVar9);
      FUN_10a183408(puVar10,puVar4,param_2,param_1[7]);
      goto LAB_10a1837f0;
    }
  }
  FUN_10a1833f4();
  param_1[7] = (ulong)puVar11;
  __Unwind_Resume();
  param_1[1] = (ulong)puVar11;
  __Unwind_Resume();
  param_1[7] = uVar7;
  __Unwind_Resume();
  param_1[1] = (ulong)puVar10;
  unaff_x30 = FUN_10a18388c;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
  unaff_x19 = param_1;
  unaff_x20 = param_2;
  unaff_x29 = puVar1;
code_r0x00010a18388c:
  if ((char)puVar8[9] == '\x01') {
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(ulong **)((long)register0x00000008 + -0x28) = puVar8 + 6;
    func_0x00010a09ad80((undefined1 *)((long)register0x00000008 + -0x28));
    if (puVar8[3] != 0) {
      puVar8[4] = puVar8[3];
      __ZdlPv();
    }
    *(ulong **)((long)register0x00000008 + -0x28) = puVar8;
    FUN_10a09ae0c((undefined1 *)((long)register0x00000008 + -0x28));
    *(undefined1 *)(puVar8 + 9) = 0;
  }
  return;
}


