/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10983e810; end: 10983e82f;  */

void FUN_10983e810(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110b14ae8;
  return;
}



/* Entry: 10983e830; end: 10983e833;  */

void FUN_10983e830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10983e834; end: 10983e847;  */

void FUN_10983e834(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10983e848; end: 10983ec17;  */

undefined8 * FUN_10983e848(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_f8 [24];
  ulong uStack_e0;
  undefined8 *puStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  lVar8 = param_1[2];
  puVar11 = (undefined8 *)*param_1;
  puVar12 = param_1;
  if ((ulong)((lVar8 - (long)puVar11 >> 2) * -0x5555555555555555) < param_4) {
    puVar13 = param_1;
    uVar10 = param_2;
    lVar6 = param_3;
    uVar5 = param_4;
    if (puVar11 != (undefined8 *)0x0) {
      param_1[1] = puVar11;
      __ZdlPv();
      lVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar13 = puVar11;
    }
    if (0x1555555555555555 < param_4) {
      FUN_1094ccafc();
      uStack_48 = 0x10983e9a0;
      uVar9 = puVar13[2];
      puVar12 = (undefined8 *)*puVar13;
      puStack_50 = &stack0xfffffffffffffff0;
      if (uVar5 <= (ulong)((long)(uVar9 - (long)puVar12) >> 4)) {
        puVar14 = (undefined8 *)puVar13[1];
        puVar11 = puVar13;
        if ((ulong)((long)puVar14 - (long)puVar12 >> 4) < uVar5) {
          lVar8 = ((long)puVar14 - (long)puVar12) + uVar10;
          if (puVar14 != puVar12) {
            _memmove(puVar12,uVar10);
            puVar14 = (undefined8 *)puVar13[1];
            puVar11 = puVar12;
          }
          lVar6 = lVar6 - lVar8;
          if (lVar6 != 0) {
            puVar11 = puVar14;
            _memmove(puVar14,lVar8,lVar6);
          }
          lVar6 = (long)puVar14 + lVar6;
        }
        else {
          lVar6 = lVar6 - uVar10;
          if (lVar6 != 0) {
            puVar11 = puVar12;
            _memmove(puVar12,uVar10,lVar6);
          }
          lVar6 = (long)puVar12 + lVar6;
        }
LAB_10983eac0:
        puVar13[1] = lVar6;
        return puVar11;
      }
      puVar11 = puVar13;
      uVar4 = uVar10;
      lVar8 = lVar6;
      uVar7 = uVar5;
      if (puVar12 != (undefined8 *)0x0) {
        puVar13[1] = puVar12;
        __ZdlPv();
        uVar9 = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar11 = puVar12;
      }
      if (uVar5 >> 0x3c == 0) {
        uVar4 = (long)uVar9 >> 3;
        if ((ulong)((long)uVar9 >> 3) <= uVar5) {
          uVar4 = uVar5;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar4 = 0xfffffffffffffff;
        }
        if (uVar4 >> 0x3c == 0) {
          puVar12 = puVar13;
          FUN_10983cbf8();
          *puVar13 = puVar12;
          puVar13[1] = puVar12;
          puVar13[2] = puVar12 + uVar4 * 2;
          lVar6 = lVar6 - uVar10;
          puVar11 = puVar12;
          if (lVar6 != 0) {
            _memmove(puVar12,uVar10,lVar6);
          }
          lVar6 = (long)puVar12 + lVar6;
          goto LAB_10983eac0;
        }
      }
      FUN_10983cbe4();
      uStack_88 = 0x10983eadc;
      uVar10 = puVar11[2];
      puVar12 = (undefined8 *)*puVar11;
      ppuStack_90 = &puStack_50;
      if ((ulong)((long)(uVar10 - (long)puVar12) >> 4) < uVar7) {
        puVar13 = puVar11;
        if (puVar12 != (undefined8 *)0x0) {
          puVar11[1] = puVar12;
          __ZdlPv();
          uVar10 = 0;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar13 = puVar12;
        }
        if (uVar7 >> 0x3c == 0) {
          uVar5 = (long)uVar10 >> 3;
          if ((ulong)((long)uVar10 >> 3) <= uVar7) {
            uVar5 = uVar7;
          }
          if (0x7fffffffffffffef < uVar10) {
            uVar5 = 0xfffffffffffffff;
          }
          if (uVar5 >> 0x3c == 0) {
            puVar12 = puVar11;
            FUN_10983cc40();
            *puVar11 = puVar12;
            puVar11[1] = puVar12;
            puVar11[2] = puVar12 + uVar5 * 2;
            lVar8 = lVar8 - uVar4;
            puVar13 = puVar12;
            if (lVar8 != 0) {
              _memmove(puVar12,uVar4,lVar8);
            }
            lVar8 = (long)puVar12 + lVar8;
            goto LAB_10983ebfc;
          }
        }
        FUN_10983cc2c();
        pcStack_c8 = FUN_10983ec18;
        puVar1 = (uint *)puVar13[1];
        if (3 < (ulong)(puVar13[2] - (long)puVar1)) {
          uVar2 = *puVar1;
          puVar13[1] = puVar1 + 1;
          return (undefined8 *)(ulong)uVar2;
        }
        uStack_e0 = uVar4;
        puStack_d8 = puVar11;
        ppuStack_d0 = &ppuStack_90;
        func_0x000107c31940(auStack_f8,&UNK_10f580e94);
        FUN_10983e7c0(auStack_f8);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10983ec70);
        (*pcVar3)();
      }
      puVar14 = (undefined8 *)puVar11[1];
      puVar13 = puVar11;
      if ((ulong)((long)puVar14 - (long)puVar12 >> 4) < uVar7) {
        lVar6 = ((long)puVar14 - (long)puVar12) + uVar4;
        if (puVar14 != puVar12) {
          _memmove(puVar12,uVar4);
          puVar14 = (undefined8 *)puVar11[1];
          puVar13 = puVar12;
        }
        lVar8 = lVar8 - lVar6;
        if (lVar8 != 0) {
          puVar13 = puVar14;
          _memmove(puVar14,lVar6,lVar8);
        }
        lVar8 = (long)puVar14 + lVar8;
      }
      else {
        lVar8 = lVar8 - uVar4;
        if (lVar8 != 0) {
          puVar13 = puVar12;
          _memmove(puVar12,uVar4,lVar8);
        }
        lVar8 = (long)puVar12 + lVar8;
      }
LAB_10983ebfc:
      puVar11[1] = lVar8;
      return puVar13;
    }
    uVar10 = (lVar8 >> 2) * 0x5555555555555556;
    if (uVar10 < param_4 || uVar10 - param_4 == 0) {
      uVar10 = param_4;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar8 >> 2) * -0x5555555555555555)) {
      uVar10 = 0x1555555555555555;
    }
    FUN_1094ccab4(param_1,uVar10);
    puVar11 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar12 = puVar11;
      _memmove(puVar11,param_2,param_3);
    }
    param_3 = (long)puVar11 + param_3;
  }
  else {
    puVar13 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar13 - (long)puVar11 >> 2) * -0x5555555555555555) < param_4) {
      lVar8 = ((long)puVar13 - (long)puVar11) + param_2;
      if (puVar13 != puVar11) {
        _memmove(puVar11,param_2);
        puVar13 = (undefined8 *)param_1[1];
        puVar12 = puVar11;
      }
      param_3 = param_3 - lVar8;
      if (param_3 != 0) {
        puVar12 = puVar13;
        _memmove(puVar13,lVar8,param_3);
      }
      param_3 = (long)puVar13 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar12 = puVar11;
        _memmove(puVar11,param_2,param_3);
      }
      param_3 = (long)puVar11 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar12;
}



/* Entry: 10983ec18; end: 10983ec8b;  */

undefined4 FUN_10983ec18(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (3 < (ulong)(*(long *)(param_1 + 0x10) - (long)puVar1)) {
    uVar2 = *puVar1;
    *(undefined4 **)(param_1 + 8) = puVar1 + 1;
    return uVar2;
  }
  func_0x000107c31940(auStack_38,&UNK_10f580e94);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10983ec70);
  (*pcVar3)();
}



/* Entry: 10983ec8c; end: 10983ecff;  */

long FUN_10983ec8c(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_2 <= (ulong)(*(long *)(param_1 + 0x10) - lVar1)) {
    *(ulong *)(param_1 + 8) = lVar1 + param_2;
    return lVar1;
  }
  func_0x000107c31940(auStack_38,&UNK_10f580ead);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10983ece4);
  (*pcVar2)();
}



/* Entry: 10983ed00; end: 10983ed6f;  */

undefined1 FUN_10983ed00(long param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if (*(undefined1 **)(param_1 + 0x10) != puVar1) {
    uVar2 = *puVar1;
    *(undefined1 **)(param_1 + 8) = puVar1 + 1;
    return uVar2;
  }
  func_0x000107c31940(auStack_38,&UNK_10f580e94);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10983ed54);
  (*pcVar3)();
}



/* Entry: 10983ed70; end: 10983edd3;  */

void FUN_10983ed70(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    return;
  }
  func_0x000107c31940(auStack_38,&UNK_10f580fa2);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10983edb8);
  (*pcVar1)();
}



/* Entry: 10983edd4; end: 10983ef67;  */

void FUN_10983edd4(uint *param_1,uint param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined5 uStack_64;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined1 uStack_5c;
  ulong auStack_58 [3];
  
  if (param_4 != param_2) {
    func_0x000107c31940(auStack_58,&UNK_10f580ebe);
    FUN_10983e7c0(auStack_58);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10983ef4c);
    (*pcVar7)();
  }
  uStack_5c = 0;
  uVar4 = *param_1;
  uVar5 = uVar4 + 0xf;
  if (-9 < (int)uVar4) {
    uVar5 = uVar4 + 8;
  }
  _uStack_64 = CONCAT26(0x100,CONCAT15((char)(uVar5 >> 3),0x10000008c));
  FUN_109842878((char)param_1[9],*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),
                param_2 * 3,&uStack_64,param_5,(long *)(param_5 + 0x6b0));
  fVar14 = (float)param_1[1];
  fVar15 = (float)param_1[2];
  fVar16 = (float)param_1[3];
  fVar17 = (float)param_1[5];
  fVar18 = (float)param_1[6];
  fVar19 = (float)param_1[7];
  uVar5 = *param_1;
  auStack_58[0] = 0;
  auStack_58[1] = 0;
  auStack_58[2] = 0;
  if (param_2 != 0) {
    uVar8 = 0;
    lVar9 = 0;
    lVar10 = *(long *)(param_5 + 0x6b0);
    do {
      lVar12 = 0;
      pfVar13 = (float *)(param_3 + uVar8 * 0xc);
      do {
        uVar1 = auStack_58[lVar12] + (long)*(int *)(lVar10 + lVar9 * 4 + lVar12 * 4);
        auStack_58[lVar12] = uVar1;
        iVar11 = (int)lVar12;
        fVar21 = fVar19;
        fVar6 = fVar16;
        if (iVar11 != 2) {
          fVar21 = fVar17;
          fVar6 = fVar14;
        }
        fVar22 = fVar18;
        fVar20 = fVar15;
        if (iVar11 != 1) {
          fVar22 = fVar21;
          fVar20 = fVar6;
        }
        if (0 < (int)uVar5) {
          fVar20 = fVar20 + fVar22 * ((float)(uVar1 & 0xffffffff) /
                                     (float)(uint)~(-1 << (ulong)(uVar5 & 0x1f)));
        }
        pfVar2 = pfVar13;
        if (iVar11 == 1) {
          pfVar2 = pfVar13 + 1;
        }
        pfVar3 = pfVar13 + 2;
        if (iVar11 != 2) {
          pfVar3 = pfVar2;
        }
        *pfVar3 = fVar20;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 3;
    } while (uVar8 != param_4);
  }
  return;
}



/* Entry: 10983ef68; end: 10983f203;  */

void FUN_10983ef68(uint *param_1,long *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  uint *puVar6;
  float *pfVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  uint *puVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_78 [24];
  
  lVar14 = param_2[2];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar10 = param_2;
  FUN_10983f508();
  *param_1 = (uint)plVar10;
  if ((uint)plVar10 < 0x19) {
    iVar13 = 0;
    do {
      plVar10 = param_2;
      FUN_10983f57c();
      puVar11 = param_1 + 1;
      if (iVar13 == 1) {
        puVar11 = param_1 + 2;
      }
      puVar6 = param_1 + 3;
      if (iVar13 != 2) {
        puVar6 = puVar11;
      }
      puVar11 = param_1 + 4;
      if (iVar13 != 3) {
        puVar11 = puVar6;
      }
      *puVar11 = (uint)plVar10;
      iVar13 = iVar13 + 1;
    } while (param_3 != iVar13);
    iVar13 = 0;
    pfVar1 = (float *)(param_1 + 5);
    pfVar2 = (float *)(param_1 + 7);
    pfVar3 = (float *)(param_1 + 6);
    pfVar4 = (float *)(param_1 + 8);
    do {
      plVar10 = param_2;
      FUN_10983f57c();
      pfVar12 = pfVar1;
      if (iVar13 == 1) {
        pfVar12 = pfVar3;
      }
      pfVar7 = pfVar2;
      if (iVar13 != 2) {
        pfVar7 = pfVar12;
      }
      pfVar12 = pfVar4;
      if (iVar13 != 3) {
        pfVar12 = pfVar7;
      }
      *pfVar12 = SUB84(plVar10,0);
      iVar13 = iVar13 + 1;
    } while (param_3 != iVar13);
    iVar13 = 0;
    do {
      puVar11 = param_1 + 4;
      if (((iVar13 != 3) && (puVar11 = param_1 + 3, iVar13 != 2)) &&
         (puVar11 = param_1 + 1, iVar13 == 1)) {
        puVar11 = param_1 + 2;
      }
      if (0x7f7fffff < (*puVar11 & 0x7fffffff)) {
LAB_10983f18c:
        func_0x000107c31940(auStack_78,&UNK_10f580eed);
        FUN_10983e7c0(auStack_78);
        goto LAB_10983f1dc;
      }
      pfVar12 = pfVar4;
      if (((iVar13 != 3) && (pfVar12 = pfVar2, iVar13 != 2)) && (pfVar12 = pfVar1, iVar13 == 1)) {
        pfVar12 = pfVar3;
      }
      if (0x7f7fffff < (uint)ABS(*pfVar12)) goto LAB_10983f18c;
      pfVar12 = pfVar4;
      if (((iVar13 != 3) && (pfVar12 = pfVar2, iVar13 != 2)) && (pfVar12 = pfVar1, iVar13 == 1)) {
        pfVar12 = pfVar3;
      }
      if (*pfVar12 <= 0.0) goto LAB_10983f18c;
      iVar13 = iVar13 + 1;
    } while (param_3 != iVar13);
    plVar10 = param_2;
    FUN_10983f508();
    *(char *)(param_1 + 9) = (char)plVar10;
    plVar10 = param_2;
    FUN_10983f57c();
    lVar8 = param_2[2];
    if (((ulong)plVar10 & 0xffffffff) <= (ulong)(param_2[1] - lVar8)) {
      lVar5 = lVar8 + ((ulong)plVar10 & 0xffffffff);
      param_2[2] = lVar5;
      *(long *)(param_1 + 10) = *param_2 + lVar8;
      *(ulong *)(param_1 + 0xc) = (ulong)plVar10 & 0xffffffff;
      param_1[0xe] = (int)lVar5 - (int)lVar14;
      return;
    }
    func_0x000107c31940(auStack_78,&UNK_10f580f66);
    FUN_10983e7c0(auStack_78);
  }
  else {
    func_0x000107c31940(auStack_78,&UNK_10f580ed1);
    FUN_10983e7c0(auStack_78);
  }
LAB_10983f1dc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10983f1e0);
  (*pcVar9)();
}



/* Entry: 10983f204; end: 10983f37b;  */

void FUN_10983f204(uint *param_1,uint param_2,long param_3,ulong param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  code *pcVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined5 uStack_58;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined1 uStack_50;
  
  if (param_4 != param_2) {
    func_0x000107c31940(&uStack_58,&UNK_10f580f92);
    FUN_10983e7c0(&uStack_58);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10983f360);
    (*pcVar6)();
  }
  uStack_50 = 0;
  uVar3 = *param_1;
  uVar4 = uVar3 + 0xe;
  if (-8 < (int)uVar3) {
    uVar4 = uVar3 + 7;
  }
  _uStack_58 = CONCAT26(0x100,CONCAT15((char)(uVar4 >> 3),0x8c));
  FUN_109842878((char)param_1[9],*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),
                param_2 * 3,&uStack_58,param_5,(undefined8 *)(param_5 + 0x6b0));
  if (param_2 != 0) {
    uVar7 = 0;
    fVar13 = (float)param_1[1];
    fVar14 = (float)param_1[2];
    fVar15 = (float)param_1[3];
    fVar16 = (float)param_1[5];
    fVar17 = (float)param_1[6];
    fVar18 = (float)param_1[7];
    uVar4 = *param_1;
    puVar8 = *(uint **)(param_5 + 0x6b0);
    do {
      lVar10 = 0;
      pfVar11 = (float *)(param_3 + uVar7 * 0xc);
      puVar12 = puVar8;
      do {
        iVar9 = (int)lVar10;
        fVar20 = fVar18;
        fVar5 = fVar15;
        if (iVar9 != 2) {
          fVar20 = fVar16;
          fVar5 = fVar13;
        }
        fVar21 = fVar17;
        fVar19 = fVar14;
        if (iVar9 != 1) {
          fVar21 = fVar20;
          fVar19 = fVar5;
        }
        if (0 < (int)uVar4) {
          fVar19 = fVar19 + fVar21 * ((float)*puVar12 / (float)(uint)~(-1 << (ulong)(uVar4 & 0x1f)))
          ;
        }
        puVar12 = puVar12 + param_4;
        pfVar1 = pfVar11;
        if (iVar9 == 1) {
          pfVar1 = pfVar11 + 1;
        }
        pfVar2 = pfVar11 + 2;
        if (iVar9 != 2) {
          pfVar2 = pfVar1;
        }
        *pfVar2 = fVar19;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 != param_4);
  }
  return;
}



/* Entry: 10983f37c; end: 10983f507;  */

void FUN_10983f37c(uint *param_1,uint param_2,long param_3,ulong param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  code *pcVar7;
  ulong uVar8;
  uint *puVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined5 uStack_58;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined1 uStack_50;
  
  if (param_4 != param_2) {
    func_0x000107c31940(&uStack_58,&UNK_10f580f92);
    FUN_10983e7c0(&uStack_58);
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10983f4ec);
    (*pcVar7)();
  }
  uStack_50 = 0;
  uVar4 = *param_1;
  uVar5 = uVar4 + 0xe;
  if (-8 < (int)uVar4) {
    uVar5 = uVar4 + 7;
  }
  _uStack_58 = CONCAT26(0x100,CONCAT15((char)(uVar5 >> 3),0x8c));
  FUN_109842878((char)param_1[9],*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc),
                param_2 << 2,&uStack_58,param_5,(undefined8 *)(param_5 + 0x6b0));
  if (param_2 != 0) {
    uVar8 = 0;
    fVar13 = (float)param_1[3];
    fVar14 = (float)param_1[4];
    fVar15 = (float)param_1[7];
    fVar16 = (float)param_1[8];
    uVar5 = *param_1;
    puVar9 = *(uint **)(param_5 + 0x6b0);
    do {
      lVar11 = 0;
      pfVar1 = (float *)(param_3 + uVar8 * 0x10);
      puVar12 = puVar9;
      do {
        iVar10 = (int)lVar11;
        pfVar3 = (float *)(param_1 + 1);
        if (iVar10 == 1) {
          pfVar3 = (float *)(param_1 + 2);
        }
        pfVar2 = (float *)(param_1 + 5);
        if (iVar10 == 1) {
          pfVar2 = (float *)(param_1 + 6);
        }
        fVar18 = fVar15;
        fVar6 = fVar13;
        if (iVar10 != 2) {
          fVar18 = *pfVar2;
          fVar6 = *pfVar3;
        }
        fVar19 = fVar16;
        fVar17 = fVar14;
        if (iVar10 != 3) {
          fVar19 = fVar18;
          fVar17 = fVar6;
        }
        if (0 < (int)uVar5) {
          fVar17 = fVar17 + fVar19 * ((float)*puVar12 / (float)(uint)~(-1 << (ulong)(uVar5 & 0x1f)))
          ;
        }
        puVar12 = puVar12 + param_4;
        pfVar3 = pfVar1;
        if (iVar10 == 1) {
          pfVar3 = pfVar1 + 1;
        }
        pfVar2 = pfVar1 + 2;
        if (iVar10 != 2) {
          pfVar2 = pfVar3;
        }
        pfVar3 = pfVar1 + 3;
        if (iVar10 != 3) {
          pfVar3 = pfVar2;
        }
        *pfVar3 = fVar17;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 != param_4);
  }
  return;
}



/* Entry: 10983f508; end: 10983f57b;  */

undefined1 FUN_10983f508(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = param_1[2];
  uVar1 = lVar2 + 1;
  if (uVar1 <= (ulong)param_1[1]) {
    param_1[2] = uVar1;
    return *(undefined1 *)(*param_1 + lVar2);
  }
  func_0x000107c31940(auStack_38,&UNK_10f580f38);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10983f560);
  (*pcVar3)();
}



/* Entry: 10983f57c; end: 10983f5f3;  */

undefined4 FUN_10983f57c(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_38 [24];
  
  uVar1 = param_1[2] + 4;
  if (uVar1 <= (ulong)param_1[1]) {
    uVar2 = *(undefined4 *)(*param_1 + param_1[2]);
    param_1[2] = uVar1;
    return uVar2;
  }
  func_0x000107c31940(auStack_38,&UNK_10f580f4f);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10983f5d8);
  (*pcVar3)();
}



/* Entry: 10983f5f4; end: 10983f6db;  */

void FUN_10983f5f4(undefined8 *param_1,int param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (param_2 == 2) {
    FUN_10983f37c(*plVar2 + 0x80,*(undefined4 *)plVar2[1],*(undefined8 *)plVar2[5],
                  ((undefined8 *)plVar2[5])[1],plVar2[3] + 0x1458);
  }
  else if (param_2 == 1) {
    FUN_10983f204(*plVar2 + 0x40,*(undefined4 *)plVar2[1],*(undefined8 *)plVar2[4],
                  ((undefined8 *)plVar2[4])[1],plVar2[3] + 0xd90);
  }
  else if (param_2 == 0) {
    FUN_10983edd4(*plVar2,*(undefined4 *)plVar2[1],*(undefined8 *)plVar2[2],
                  ((undefined8 *)plVar2[2])[1],plVar2[3] + 0x6c8);
  }
  else {
    puVar1 = (undefined1 *)plVar2[6];
    FUN_109842878(*puVar1,*(undefined8 *)(puVar1 + 8),*(undefined8 *)(puVar1 + 0x10),
                  *(int *)plVar2[1] * 3,plVar2[7],plVar2[8],plVar2[8] + 0x6b0);
  }
  return;
}



/* Entry: 10983f6dc; end: 10983f72b;  */

/* WARNING: Type propagation algorithm not settling */

int ** FUN_10983f6dc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  uint *puVar10;
  undefined **ppuVar12;
  code *pcVar13;
  ushort *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  long lVar21;
  int **ppiVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ushort uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int *piStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  char cStack_1d8;
  ulong auStack_1d0 [3];
  undefined1 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1ac;
  undefined1 uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a0;
  undefined1 uStack_190;
  undefined1 uStack_18c;
  undefined1 uStack_174;
  undefined1 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_168;
  undefined1 uStack_150;
  undefined1 uStack_148;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  byte *pbStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  uint *puVar11;
  
  piVar7 = (int *)0x10;
  ___cxa_allocate_exception();
  FUN_10983e810();
  ppuVar12 = &PTR_DAT_110b148f0;
  pcVar13 = FUN_10983e830;
  piVar8 = piVar7;
  ___cxa_throw();
  ___cxa_free_exception(piVar7);
  __Unwind_Resume();
  cStack_1d8 = '\x01';
  if (ppuVar12 < (undefined **)0x4) {
    return (int **)0x1;
  }
  if (*piVar8 != 0x46415347) {
    return (int **)0x2;
  }
  if (ppuVar12 < (undefined **)0x8) {
    return (int **)0x1;
  }
  uVar2 = piVar8[1];
  uVar5 = uVar2 >> 0x10 & 0xff;
  puVar14 = (ushort *)&UNK_10e002822;
  lVar15 = 0x14;
  while (((uint)(byte)puVar14[-1] != uVar2 >> 0x18 || (*(byte *)((long)puVar14 + -1) != uVar5))) {
    puVar14 = puVar14 + 2;
    lVar15 = lVar15 + -4;
    if (lVar15 == 0) {
      return (int **)0x3;
    }
  }
  if ((uVar2 & 0xffff) < (uint)*puVar14) {
    return (int **)0x3;
  }
  if (ppuVar12 < (undefined **)0xc) {
    return (int **)0x1;
  }
  uVar3 = piVar8[2];
  if ((uVar3 & 0xffffffe8) != 0) {
    return (int **)0x4;
  }
  uVar1 = uVar3 & 7;
  if (5 < uVar1) {
    return (int **)0x4;
  }
  if (uVar1 == 1) {
    return (int **)0x4;
  }
  if (ppuVar12 < (undefined **)0x10) {
    return (int **)0x1;
  }
  if (ppuVar12 < (undefined **)0x14) {
    return (int **)0x1;
  }
  if (ppuVar12 < (undefined **)0x18) {
    return (int **)0x1;
  }
  if (ppuVar12 < (undefined **)0x1c) {
    return (int **)0x1;
  }
  if (ppuVar12 < (undefined **)0x20) {
    return (int **)0x1;
  }
  if (ppuVar12 < (undefined **)0x24) {
    return (int **)0x1;
  }
  if (ppuVar12 < (undefined **)0x28) {
    return (int **)0x1;
  }
  iVar4 = piVar8[3];
  fVar27 = (float)piVar8[4];
  fVar28 = (float)piVar8[5];
  fVar29 = (float)piVar8[6];
  fVar30 = (float)piVar8[7];
  fVar31 = (float)piVar8[8];
  fVar32 = (float)piVar8[9];
  ppuStack_1e0 = (undefined **)0x28;
  uVar16 = CONCAT44(fVar28,(int)*(undefined8 *)(piVar8 + 4)) & 0x7fffffff7fffffff;
  uVar25 = CONCAT44(fVar30,(int)*(undefined8 *)(piVar8 + 6)) & 0x7fffffff7fffffff;
  uVar26 = NEON_umaxv(CONCAT26(-(ushort)(0x7f7fffff < (uint)(uVar25 >> 0x20)),
                               CONCAT24(-(ushort)(0x7f7fffff < (uint)uVar25),
                                        CONCAT22(-(ushort)(0x7f7fffff < (uint)(uVar16 >> 0x20)),
                                                 -(ushort)(0x7f7fffff < (uint)uVar16)))),2);
  ppiVar22 = (int **)0x5;
  if ((uVar26 & 1) != 0) {
    return (int **)0x5;
  }
  if (0x7f7fffff < (uint)ABS(fVar31)) {
    return (int **)0x5;
  }
  if (0x7f7fffff < (uint)ABS(fVar32)) {
    return (int **)0x5;
  }
  if (fVar30 < fVar27) {
    return (int **)0x5;
  }
  if (fVar31 < fVar28) {
    return (int **)0x5;
  }
  if (fVar32 < fVar29) {
    return (int **)0x5;
  }
  puStack_a8 = (uint *)0x0;
  puStack_a0 = (uint *)0x0;
  uStack_98 = 0;
  ppiVar9 = &piStack_1f0;
  piStack_1f0 = piVar8;
  ppuStack_1e8 = ppuVar12;
  FUN_10983fc60(ppiVar9,&puStack_a8);
  if (((ulong)ppiVar9 & 1) == 0) {
LAB_10983faa0:
    ppiVar22 = (int **)0x1;
    goto LAB_10983faa8;
  }
  if (puStack_a8 == puStack_a0) goto LAB_10983faa8;
  uVar16 = 0;
  uVar25 = (ulong)((long)puStack_a0 - (long)puStack_a8) >> 2;
  puVar10 = puStack_a8;
  do {
    puVar11 = puVar10 + 1;
    if (0x1000000 < *puVar10) goto LAB_10983f97c;
    uVar16 = uVar16 + *puVar10;
    puVar10 = puVar11;
  } while (puVar11 != puStack_a0);
  if (uVar16 >> 0x20 != 0 || iVar4 != (int)uVar16) {
LAB_10983f97c:
    ppiVar22 = (int **)0x5;
    goto LAB_10983faa8;
  }
  uVar16 = (ulong)((long)puStack_a0 - (long)puStack_a8) >> 2 & 0xffffffff;
  auStack_1d0[0] = 0;
  auStack_1d0[1] = 0;
  auStack_1d0[2] = 0;
  func_0x00010983fd00(pcVar13 + 0x140,uVar16,auStack_1d0);
  uVar24 = (uint)uVar25;
  if (uVar24 != 0) {
    lVar15 = 8;
    ppuVar12 = ppuStack_1e0 + 1;
    puVar19 = (undefined8 *)((long)piStack_1f0 + (long)(ppuStack_1e0 + 1));
    uVar23 = uVar16;
    do {
      ppuVar18 = ppuVar12;
      if ((cStack_1d8 == '\0') || (ppuStack_1e8 < ppuVar18)) goto LAB_10983faa0;
      lVar21 = *(long *)(pcVar13 + 0x140);
      *(undefined8 *)(lVar21 + lVar15 + -8) = puVar19[-1];
      if (ppuStack_1e8 < ppuVar18 + 1) goto LAB_10983faa0;
      *(undefined8 *)(lVar21 + lVar15) = *puVar19;
      lVar15 = lVar15 + 0x18;
      uVar23 = uVar23 - 1;
      ppuVar12 = ppuVar18 + 2;
      puVar19 = puVar19 + 2;
    } while (uVar23 != 0);
    ppuStack_1e0 = ppuVar18 + 1;
  }
  pbStack_c0 = (byte *)0x0;
  pbStack_b8 = (byte *)0x0;
  uStack_b0 = 0;
  uVar23 = uVar16 + 7 >> 3;
  func_0x000107c2823c(&pbStack_c0,uVar23);
  if (uVar16 != 0) {
    uVar17 = 0;
    do {
      ppuVar12 = ppuStack_1e0;
      if ((cStack_1d8 == '\0') ||
         (ppuVar12 = (undefined **)((long)ppuStack_1e0 + uVar17),
         ppuStack_1e8 < (undefined **)((long)ppuVar12 + 1))) {
        cStack_1d8 = '\0';
        ppiVar22 = (int **)0x1;
        ppuStack_1e0 = ppuVar12;
        goto LAB_10983fc08;
      }
      pbStack_c0[uVar17] = *(byte *)((long)piStack_1f0 + uVar17 + (long)ppuStack_1e0);
      uVar17 = uVar17 + 1;
    } while (uVar23 != uVar17);
    ppuStack_1e0 = (undefined **)((long)ppuStack_1e0 + uVar17);
  }
  if ((uVar24 == 0) ||
     (((*pbStack_c0 & 1) != 0 &&
      (((uVar25 & 7) == 0 || (pbStack_b8[-1] >> (ulong)(uVar24 & 7) == 0)))))) {
    auStack_1d0[0] = auStack_1d0[0] & 0xffffffffffffff00;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_168 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    if (uVar3 < 0x10) {
LAB_10983fb34:
      *(uint *)pcVar13 = uVar2 >> 0x18;
      *(uint *)(pcVar13 + 4) = uVar24;
      pcVar13[8] = SUB41(uVar1,0);
      *(float *)(pcVar13 + 0xc) = fVar27;
      *(float *)(pcVar13 + 0x10) = fVar28;
      *(float *)(pcVar13 + 0x14) = fVar29;
      *(float *)(pcVar13 + 0x18) = fVar30;
      *(float *)(pcVar13 + 0x1c) = fVar31;
      *(float *)(pcVar13 + 0x20) = fVar32;
      *(uint *)(pcVar13 + 0x24) = uVar5;
      *(uint *)(pcVar13 + 0x28) = uVar2 & 0xffff;
      FUN_109840530(pcVar13 + 0x30,auStack_1d0);
      *(uint *)(pcVar13 + 0x158) = uVar24;
      *(undefined ***)(pcVar13 + 0x160) = ppuStack_1e0;
      if (*(long *)(pcVar13 + 0x168) != 0) {
        *(long *)(pcVar13 + 0x170) = *(long *)(pcVar13 + 0x168);
        __ZdlPv();
        *(undefined8 *)(pcVar13 + 0x168) = 0;
        *(undefined8 *)(pcVar13 + 0x170) = 0;
        *(undefined8 *)(pcVar13 + 0x178) = 0;
      }
      pbVar6 = pbStack_c0;
      *(byte **)(pcVar13 + 0x170) = pbStack_b8;
      *(byte **)(pcVar13 + 0x168) = pbStack_c0;
      *(undefined8 *)(pcVar13 + 0x178) = uStack_b0;
      pbStack_b8 = (byte *)0x0;
      uStack_b0 = 0;
      pbStack_c0 = (byte *)0x0;
      if (uVar24 != 0) {
        uVar25 = 0;
        pbVar20 = (byte *)(*(long *)(pcVar13 + 0x140) + 0x14);
        do {
          *(uint *)(pbVar20 + -4) = puStack_a8[uVar25];
          *pbVar20 = pbVar6[uVar25 >> 3 & 0x1fffffff] >> (uVar25 & 7) & 1;
          uVar25 = uVar25 + 1;
          pbVar20 = pbVar20 + 0x18;
        } while (uVar16 != uVar25);
      }
      ppiVar22 = (int **)0x0;
    }
    else {
      ppiVar22 = &piStack_1f0;
      FUN_10983fe6c(ppiVar22,auStack_1d0);
      if ((int)ppiVar22 == 0) goto LAB_10983fb34;
    }
    FUN_10983d280(auStack_1d0);
LAB_10983fc08:
    if (pbStack_c0 == (byte *)0x0) goto LAB_10983faa8;
  }
  else {
    ppiVar22 = (int **)0x5;
  }
  pbStack_b8 = pbStack_c0;
  __ZdlPv();
LAB_10983faa8:
  if (puStack_a8 != (uint *)0x0) {
    puStack_a0 = puStack_a8;
    __ZdlPv();
  }
  return ppiVar22;
}



/* Entry: 10983f72c; end: 10983fc5f;  */

int ** FUN_10983f72c(int *param_1,ulong param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int **ppiVar7;
  uint *puVar8;
  ushort *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  long lVar17;
  int **ppiVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ushort uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int *piStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  char cStack_1b8;
  ulong auStack_1b0 [3];
  undefined1 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18c;
  undefined1 uStack_188;
  undefined1 uStack_184;
  undefined1 uStack_180;
  undefined1 uStack_170;
  undefined1 uStack_16c;
  undefined1 uStack_154;
  undefined1 uStack_150;
  undefined1 uStack_14c;
  undefined1 uStack_148;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  uint *puStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  uint *puVar9;
  
  cStack_1b8 = '\x01';
  if (param_2 < 4) {
    return (int **)0x1;
  }
  if (*param_1 != 0x46415347) {
    return (int **)0x2;
  }
  if (param_2 < 8) {
    return (int **)0x1;
  }
  uVar2 = param_1[1];
  uVar5 = uVar2 >> 0x10 & 0xff;
  puVar10 = (ushort *)&UNK_10e002822;
  lVar11 = 0x14;
  while (((uint)(byte)puVar10[-1] != uVar2 >> 0x18 || (*(byte *)((long)puVar10 + -1) != uVar5))) {
    puVar10 = puVar10 + 2;
    lVar11 = lVar11 + -4;
    if (lVar11 == 0) {
      return (int **)0x3;
    }
  }
  if ((uVar2 & 0xffff) < (uint)*puVar10) {
    return (int **)0x3;
  }
  if (param_2 < 0xc) {
    return (int **)0x1;
  }
  uVar3 = param_1[2];
  if ((uVar3 & 0xffffffe8) != 0) {
    return (int **)0x4;
  }
  uVar1 = uVar3 & 7;
  if (5 < uVar1) {
    return (int **)0x4;
  }
  if (uVar1 == 1) {
    return (int **)0x4;
  }
  if (param_2 < 0x10) {
    return (int **)0x1;
  }
  if (param_2 < 0x14) {
    return (int **)0x1;
  }
  if (param_2 < 0x18) {
    return (int **)0x1;
  }
  if (param_2 < 0x1c) {
    return (int **)0x1;
  }
  if (param_2 < 0x20) {
    return (int **)0x1;
  }
  if (param_2 < 0x24) {
    return (int **)0x1;
  }
  if (param_2 < 0x28) {
    return (int **)0x1;
  }
  iVar4 = param_1[3];
  fVar23 = (float)param_1[4];
  fVar24 = (float)param_1[5];
  fVar25 = (float)param_1[6];
  fVar26 = (float)param_1[7];
  fVar27 = (float)param_1[8];
  fVar28 = (float)param_1[9];
  lStack_1c0 = 0x28;
  uVar12 = CONCAT44(fVar24,(int)*(undefined8 *)(param_1 + 4)) & 0x7fffffff7fffffff;
  uVar21 = CONCAT44(fVar26,(int)*(undefined8 *)(param_1 + 6)) & 0x7fffffff7fffffff;
  uVar22 = NEON_umaxv(CONCAT26(-(ushort)(0x7f7fffff < (uint)(uVar21 >> 0x20)),
                               CONCAT24(-(ushort)(0x7f7fffff < (uint)uVar21),
                                        CONCAT22(-(ushort)(0x7f7fffff < (uint)(uVar12 >> 0x20)),
                                                 -(ushort)(0x7f7fffff < (uint)uVar12)))),2);
  ppiVar18 = (int **)0x5;
  if ((uVar22 & 1) != 0) {
    return (int **)0x5;
  }
  if (0x7f7fffff < (uint)ABS(fVar27)) {
    return (int **)0x5;
  }
  if (0x7f7fffff < (uint)ABS(fVar28)) {
    return (int **)0x5;
  }
  if (fVar26 < fVar23) {
    return (int **)0x5;
  }
  if (fVar27 < fVar24) {
    return (int **)0x5;
  }
  if (fVar28 < fVar25) {
    return (int **)0x5;
  }
  puStack_88 = (uint *)0x0;
  puStack_80 = (uint *)0x0;
  uStack_78 = 0;
  ppiVar7 = &piStack_1d0;
  piStack_1d0 = param_1;
  uStack_1c8 = param_2;
  FUN_10983fc60(ppiVar7,&puStack_88);
  if (((ulong)ppiVar7 & 1) == 0) {
LAB_10983faa0:
    ppiVar18 = (int **)0x1;
    goto LAB_10983faa8;
  }
  if (puStack_88 == puStack_80) goto LAB_10983faa8;
  uVar12 = 0;
  uVar21 = (ulong)((long)puStack_80 - (long)puStack_88) >> 2;
  puVar8 = puStack_88;
  do {
    puVar9 = puVar8 + 1;
    if (0x1000000 < *puVar8) goto LAB_10983f97c;
    uVar12 = uVar12 + *puVar8;
    puVar8 = puVar9;
  } while (puVar9 != puStack_80);
  if (uVar12 >> 0x20 != 0 || iVar4 != (int)uVar12) {
LAB_10983f97c:
    ppiVar18 = (int **)0x5;
    goto LAB_10983faa8;
  }
  uVar12 = (ulong)((long)puStack_80 - (long)puStack_88) >> 2 & 0xffffffff;
  auStack_1b0[0] = 0;
  auStack_1b0[1] = 0;
  auStack_1b0[2] = 0;
  func_0x00010983fd00(param_3 + 0x50,uVar12,auStack_1b0);
  uVar20 = (uint)uVar21;
  if (uVar20 != 0) {
    lVar11 = 8;
    uVar13 = lStack_1c0 + 8U;
    puVar15 = (undefined8 *)((long)piStack_1d0 + lStack_1c0 + 8U);
    uVar19 = uVar12;
    do {
      uVar14 = uVar13;
      if ((cStack_1b8 == '\0') || (uStack_1c8 < uVar14)) goto LAB_10983faa0;
      lVar17 = *(long *)(param_3 + 0x50);
      *(undefined8 *)(lVar17 + lVar11 + -8) = puVar15[-1];
      if (uStack_1c8 < uVar14 + 8) goto LAB_10983faa0;
      *(undefined8 *)(lVar17 + lVar11) = *puVar15;
      lVar11 = lVar11 + 0x18;
      uVar19 = uVar19 - 1;
      uVar13 = uVar14 + 0x10;
      puVar15 = puVar15 + 2;
    } while (uVar19 != 0);
    lStack_1c0 = uVar14 + 8;
  }
  pbStack_a0 = (byte *)0x0;
  pbStack_98 = (byte *)0x0;
  uStack_90 = 0;
  uVar19 = uVar12 + 7 >> 3;
  func_0x000107c2823c(&pbStack_a0,uVar19);
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      lVar11 = lStack_1c0;
      if ((cStack_1b8 == '\0') || (lVar11 = lStack_1c0 + uVar13, uStack_1c8 < lVar11 + 1U)) {
        cStack_1b8 = '\0';
        ppiVar18 = (int **)0x1;
        lStack_1c0 = lVar11;
        goto LAB_10983fc08;
      }
      pbStack_a0[uVar13] = *(byte *)((long)piStack_1d0 + uVar13 + lStack_1c0);
      uVar13 = uVar13 + 1;
    } while (uVar19 != uVar13);
    lStack_1c0 = lStack_1c0 + uVar13;
  }
  if ((uVar20 == 0) ||
     (((*pbStack_a0 & 1) != 0 &&
      (((uVar21 & 7) == 0 || (pbStack_98[-1] >> (ulong)(uVar20 & 7) == 0)))))) {
    auStack_1b0[0] = auStack_1b0[0] & 0xffffffffffffff00;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    if (uVar3 < 0x10) {
LAB_10983fb34:
      *param_3 = uVar2 >> 0x18;
      param_3[1] = uVar20;
      *(char *)(param_3 + 2) = (char)uVar1;
      param_3[3] = (uint)fVar23;
      param_3[4] = (uint)fVar24;
      param_3[5] = (uint)fVar25;
      param_3[6] = (uint)fVar26;
      param_3[7] = (uint)fVar27;
      param_3[8] = (uint)fVar28;
      param_3[9] = uVar5;
      param_3[10] = uVar2 & 0xffff;
      FUN_109840530(param_3 + 0xc,auStack_1b0);
      param_3[0x56] = uVar20;
      *(long *)(param_3 + 0x58) = lStack_1c0;
      puVar8 = param_3 + 0x5a;
      if (*(long *)(param_3 + 0x5a) != 0) {
        *(long *)(param_3 + 0x5c) = *(long *)(param_3 + 0x5a);
        __ZdlPv();
        puVar8[0] = 0;
        puVar8[1] = 0;
        param_3[0x5c] = 0;
        param_3[0x5d] = 0;
        param_3[0x5e] = 0;
        param_3[0x5f] = 0;
      }
      pbVar6 = pbStack_a0;
      *(byte **)(param_3 + 0x5c) = pbStack_98;
      *(byte **)puVar8 = pbStack_a0;
      *(undefined8 *)(param_3 + 0x5e) = uStack_90;
      pbStack_98 = (byte *)0x0;
      uStack_90 = 0;
      pbStack_a0 = (byte *)0x0;
      if (uVar20 != 0) {
        uVar21 = 0;
        pbVar16 = (byte *)(*(long *)(param_3 + 0x50) + 0x14);
        do {
          *(uint *)(pbVar16 + -4) = puStack_88[uVar21];
          *pbVar16 = pbVar6[uVar21 >> 3 & 0x1fffffff] >> (uVar21 & 7) & 1;
          uVar21 = uVar21 + 1;
          pbVar16 = pbVar16 + 0x18;
        } while (uVar12 != uVar21);
      }
      ppiVar18 = (int **)0x0;
    }
    else {
      ppiVar18 = &piStack_1d0;
      FUN_10983fe6c(ppiVar18,auStack_1b0);
      if ((int)ppiVar18 == 0) goto LAB_10983fb34;
    }
    FUN_10983d280(auStack_1b0);
LAB_10983fc08:
    if (pbStack_a0 == (byte *)0x0) goto LAB_10983faa8;
  }
  else {
    ppiVar18 = (int **)0x5;
  }
  pbStack_98 = pbStack_a0;
  __ZdlPv();
LAB_10983faa8:
  if (puStack_88 != (uint *)0x0) {
    puStack_80 = puStack_88;
    __ZdlPv();
  }
  return ppiVar18;
}



/* Entry: 10983fc60; end: 10983fe6b;  */

undefined8 FUN_10983fc60(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((char)param_1[3] == '\x01') {
    uVar3 = param_1[2] + 4;
    uVar2 = param_1[1] - uVar3;
    if (uVar3 <= (ulong)param_1[1]) {
      uVar1 = *(uint *)(*param_1 + param_1[2]);
      param_1[2] = uVar3;
      uVar3 = (ulong)uVar1 * 4;
      if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
        func_0x0001074287b0(param_2,(ulong)uVar1);
        if (uVar1 != 0) {
          _memcpy(*param_2,*param_1 + param_1[2],uVar3);
        }
        param_1[2] = param_1[2] + uVar3;
        return 1;
      }
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  return 0;
}



/* Entry: 10983fe6c; end: 10984052f;  */

/* WARNING: Type propagation algorithm not settling */

bool FUN_10983fe6c(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *******pppppppbVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  short sVar9;
  bool bVar10;
  byte *******pppppppbVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  byte *******pppppppbStack_88;
  ulong uStack_80;
  undefined7 uStack_78;
  byte bStack_71;
  
  if ((char)param_1[3] == '\x01') {
    uVar13 = param_1[2] + 2;
    if (uVar13 <= (ulong)param_1[1]) {
      uVar15 = (ulong)*(ushort *)(*param_1 + param_1[2]);
      param_1[2] = uVar13;
      if (uVar15 == 0) {
        return (bool)5;
      }
      uVar15 = uVar13 + uVar15;
      if ((ulong)param_1[1] < uVar15) {
        return true;
      }
      if (uVar13 < uVar15) {
        uVar19 = 0xffffffff;
        do {
          uVar16 = param_1[1];
          if ((char)param_1[3] != '\x01' || uVar16 <= uVar13) goto LAB_10983feb0;
          lVar2 = uVar13 + 1;
          lVar14 = *param_1;
          bVar8 = *(byte *)(lVar14 + uVar13);
          uVar18 = (uint)bVar8;
          param_1[2] = lVar2;
          if (bVar8 == 0 || (int)(uint)bVar8 <= (int)uVar19) {
            return (bool)5;
          }
          if (uVar18 - 0xc < 0xfffffff5) {
            *(int *)(param_2 + 0x21) = (int)uVar15 - (int)uVar13;
            bVar1 = uVar15 <= uVar13 || (ulong)param_1[1] < uVar15;
            if (uVar15 > uVar13 && (ulong)param_1[1] >= uVar15) {
              param_1[2] = uVar15;
              return bVar1;
            }
            *(undefined1 *)(param_1 + 3) = 0;
            return bVar1;
          }
          if ((0xfffffffffffffffa < (ulong)(uVar18 - 1) - 6) &&
             (uVar15 - lVar2 < (ulong)*(ushort *)(&UNK_10e002836 + (ulong)(uVar18 - 1) * 4))) {
            return (bool)5;
          }
          if (bVar8 < 5) {
            if (uVar18 == 2 || bVar8 < 2) {
              if (uVar18 == 1) goto LAB_1098400f4;
              if (uVar16 < uVar13 + 5) goto LAB_1098404e4;
              uVar19 = *(uint *)(lVar14 + lVar2);
              param_1[2] = uVar13 + 5;
              if (((int)uVar19 < 0 || 0x7e < (uVar19 & 0x7fffffff) - 0x800000 >> 0x18) &&
                  0x7ffffe < uVar19 - 1) {
                return (bool)5;
              }
              *(uint *)(param_2 + 4) = uVar19;
              pbVar12 = (byte *)((long)param_2 + 0x24);
            }
            else {
              if (uVar18 != 3) {
                uVar3 = uVar13 + 5;
                if (uVar16 < uVar3) goto LAB_1098404e4;
                fVar20 = *(float *)(lVar14 + lVar2);
                param_1[2] = uVar3;
                if (0x7f7fffff < (uint)ABS(fVar20)) {
                  return (bool)5;
                }
                uVar4 = uVar13 + 9;
                if (uVar16 < uVar4) goto LAB_1098404e4;
                fVar22 = *(float *)(lVar14 + uVar3);
                param_1[2] = uVar4;
                if (0x7f7fffff < (uint)ABS(fVar22)) {
                  return (bool)5;
                }
                uVar3 = uVar13 + 0xd;
                if (uVar16 < uVar3) goto LAB_1098404e4;
                fVar24 = *(float *)(lVar14 + uVar4);
                param_1[2] = uVar3;
                if (0x7f7fffff < (uint)ABS(fVar24)) {
                  return (bool)5;
                }
                if (uVar16 < uVar13 + 0x11) goto LAB_1098404e4;
                fVar26 = *(float *)(lVar14 + uVar3);
                param_1[2] = uVar13 + 0x11;
                if (0x7f7fffff < (uint)ABS(fVar26)) {
                  return (bool)5;
                }
                if (0.001 < ABS(fVar22 * fVar22 + fVar20 * fVar20 + fVar24 * fVar24 +
                                fVar26 * fVar26 + -1.0)) {
                  return (bool)5;
                }
                *(float *)(param_2 + 6) = fVar22;
                *(float *)((long)param_2 + 0x34) = fVar24;
                *(float *)(param_2 + 7) = fVar26;
                *(float *)((long)param_2 + 0x3c) = fVar20;
                pbVar12 = (byte *)(param_2 + 8);
                if ((*(byte *)(param_2 + 8) & 1) == 0) goto LAB_1098404c0;
                goto LAB_1098404c4;
              }
              if (uVar16 < uVar13 + 5) goto LAB_1098404e4;
              uVar19 = *(uint *)(lVar14 + lVar2);
              param_1[2] = uVar13 + 5;
              if (((int)uVar19 < 0 || 0x7e < (uVar19 & 0x7fffffff) - 0x800000 >> 0x18) &&
                  0x7ffffe < uVar19 - 1) {
                return (bool)5;
              }
              *(uint *)(param_2 + 5) = uVar19;
              pbVar12 = (byte *)((long)param_2 + 0x2c);
            }
LAB_1098404c0:
            *pbVar12 = 1;
          }
          else {
            if (4 < uVar18 - 7) {
              if (uVar18 == 5) {
                uVar3 = uVar13 + 5;
                if (uVar16 < uVar3) {
LAB_1098404e4:
                  *(undefined1 *)(param_1 + 3) = 0;
                  return (bool)5;
                }
                uVar19 = *(uint *)(lVar14 + lVar2);
                param_1[2] = uVar3;
                if (0x7f7fffff < (uVar19 & 0x7fffffff)) {
                  return (bool)5;
                }
                uVar4 = uVar13 + 9;
                if (uVar16 < uVar4) goto LAB_1098404e4;
                uVar21 = *(uint *)(lVar14 + uVar3);
                param_1[2] = uVar4;
                if (0x7f7fffff < (uVar21 & 0x7fffffff)) {
                  return (bool)5;
                }
                uVar3 = uVar13 + 0xd;
                if (uVar16 < uVar3) goto LAB_1098404e4;
                uVar23 = *(uint *)(lVar14 + uVar4);
                param_1[2] = uVar3;
                if (0x7f7fffff < (uVar23 & 0x7fffffff)) {
                  return (bool)5;
                }
                uVar4 = uVar13 + 0x11;
                if (uVar16 < uVar4) goto LAB_1098404e4;
                uVar25 = *(uint *)(lVar14 + uVar3);
                param_1[2] = uVar4;
                if (0x7f7fffff < (uVar25 & 0x7fffffff)) {
                  return (bool)5;
                }
                uVar3 = uVar13 + 0x15;
                if (uVar16 < uVar3) goto LAB_1098404e4;
                uVar27 = *(uint *)(lVar14 + uVar4);
                param_1[2] = uVar3;
                if (0x7f7fffff < (uVar27 & 0x7fffffff)) {
                  return (bool)5;
                }
                if (uVar16 < uVar13 + 0x19) goto LAB_1098404e4;
                uVar28 = *(uint *)(lVar14 + uVar3);
                param_1[2] = uVar13 + 0x19;
                if (0x7f7fffff < (uVar28 & 0x7fffffff)) {
                  return (bool)5;
                }
                if ((*(byte *)(param_2 + 8) & 1) == 0) {
                  return (bool)5;
                }
                *(uint *)((long)param_2 + 0x44) = uVar19;
                *(uint *)(param_2 + 9) = uVar21;
                *(uint *)((long)param_2 + 0x4c) = uVar23;
                *(uint *)(param_2 + 10) = uVar25;
                *(uint *)((long)param_2 + 0x54) = uVar27;
                *(uint *)(param_2 + 0xb) = uVar28;
                pbVar12 = (byte *)((long)param_2 + 0x5c);
                if ((*(byte *)((long)param_2 + 0x5c) & 1) != 0) goto LAB_1098404c4;
              }
              else {
                if (uVar16 < uVar13 + 5) goto LAB_1098404e4;
                uVar19 = *(uint *)(lVar14 + lVar2);
                param_1[2] = uVar13 + 5;
                if (0x7f7fffff < (uVar19 & 0x7fffffff)) {
                  return (bool)5;
                }
                *(uint *)(param_2 + 0xc) = uVar19;
                pbVar12 = (byte *)((long)param_2 + 100);
              }
              goto LAB_1098404c0;
            }
LAB_1098400f4:
            uVar13 = uVar13 + 3;
            if (uVar16 < uVar13) goto LAB_10983feb0;
            sVar9 = *(short *)(lVar14 + lVar2);
            uVar16 = (ulong)sVar9;
            param_1[2] = uVar13;
            if ((long)uVar16 < 0) {
              return (bool)5;
            }
            if (uVar15 - uVar13 < uVar16) {
              return (bool)5;
            }
            func_0x000104c59120(&pppppppbStack_88,uVar16,0);
            if (sVar9 != 0) {
              pppppppbVar11 = pppppppbStack_88;
              if (-1 < (char)bStack_71) {
                pppppppbVar11 = (byte *******)&pppppppbStack_88;
              }
              if (((char)param_1[3] != '\x01') || ((ulong)(param_1[1] - param_1[2]) < uVar16)) {
                *(undefined1 *)(param_1 + 3) = 0;
                if (-1 < (char)bStack_71) {
                  return true;
                }
                __ZdlPv();
                return true;
              }
              _memcpy(pppppppbVar11,*param_1 + param_1[2],uVar16);
              param_1[2] = param_1[2] + uVar16;
            }
            uVar13 = uStack_80;
            pppppppbVar11 = pppppppbStack_88;
            if (-1 < (char)bStack_71) {
              uVar13 = (ulong)bStack_71;
              pppppppbVar11 = (byte *******)&pppppppbStack_88;
            }
            if (uVar13 != 0) {
              pppppppbVar5 = (byte *******)((long)pppppppbVar11 + uVar13);
              do {
                bVar7 = *(byte *)pppppppbVar11;
                if (bVar7 == 0) {
LAB_109840294:
                  *(undefined1 *)((long)param_2 + 0x10c) = 1;
                  break;
                }
                if ((char)bVar7 < '\0') {
                  uVar19 = (uint)bVar7;
                  if ((uVar19 & 0xe0) == 0xc0) {
                    bVar1 = false;
                    bVar10 = false;
                    uVar21 = 0x1f;
                    uVar13 = 1;
                  }
                  else if ((uVar19 & 0xf0) == 0xe0) {
                    bVar10 = false;
                    bVar1 = true;
                    uVar21 = 0xf;
                    uVar13 = 2;
                  }
                  else {
                    if ((uVar19 & 0xf8) != 0xf0) goto LAB_109840294;
                    bVar1 = false;
                    bVar10 = true;
                    uVar21 = 7;
                    uVar13 = 3;
                  }
                  if (uVar13 < (ulong)((long)pppppppbVar5 - (long)pppppppbVar11)) {
                    pbVar12 = (byte *)((long)pppppppbVar11 + 1);
                    pppppppbVar11 = (byte *******)(pbVar12 + uVar13);
                    uVar21 = uVar21 & uVar19;
                    do {
                      uVar23 = uVar21;
                      bVar7 = *pbVar12;
                      if ((bVar7 & 0xc0) != 0x80) goto LAB_109840294;
                      uVar25 = uVar23 << 6;
                      uVar13 = uVar13 - 1;
                      pbVar12 = pbVar12 + 1;
                      uVar21 = uVar25 | bVar7 & 0x3f;
                    } while (uVar13 != 0);
                    bVar6 = false;
                    if (uVar25 < 0x800) {
                      bVar6 = bVar1;
                    }
                    bVar1 = false;
                    if (uVar25 < 0x10000) {
                      bVar1 = bVar10;
                    }
                    if ((((0x7f < uVar25 || (uVar19 & 0xe0) != 0xc0) && (!bVar6)) && (!bVar1)) &&
                       (((uVar23 & 0x3ffffff) >> 10 < 0x11 && ((uVar23 & 0x7fe0) != 0x360))))
                    goto LAB_109840288;
                  }
                  goto LAB_109840294;
                }
                pppppppbVar11 = (byte *******)((long)pppppppbVar11 + 1);
LAB_109840288:
              } while (pppppppbVar11 != pppppppbVar5);
            }
            if (bVar8 < 8) {
              plVar17 = param_2;
              if ((uVar18 != 1) && (plVar17 = param_2 + 0xd, uVar18 != 7)) goto LAB_109840334;
            }
            else {
              plVar17 = param_2 + 0x11;
              if ((uVar18 != 8) &&
                 ((plVar17 = param_2 + 0x15, uVar18 != 9 && (plVar17 = param_2 + 0x19, uVar18 != 10)
                  ))) {
LAB_109840334:
                plVar17 = param_2 + 0x1d;
              }
            }
            if ((char)plVar17[3] == '\x01') {
              if (*(char *)((long)plVar17 + 0x17) < '\0') {
                __ZdlPv(*plVar17);
              }
              plVar17[1] = uStack_80;
              *plVar17 = (long)pppppppbStack_88;
              plVar17[2] = CONCAT17(bStack_71,uStack_78);
            }
            else {
              plVar17[1] = uStack_80;
              *plVar17 = (long)pppppppbStack_88;
              plVar17[2] = CONCAT17(bStack_71,uStack_78);
              *(undefined1 *)(plVar17 + 3) = 1;
            }
          }
LAB_1098404c4:
          uVar13 = param_1[2];
          uVar19 = uVar18;
        } while (uVar13 < uVar15);
      }
      if (uVar13 != uVar15) {
        return (bool)5;
      }
      return false;
    }
  }
LAB_10983feb0:
  *(undefined1 *)(param_1 + 3) = 0;
  return true;
}



/* Entry: 109840530; end: 1098405db;  */

long FUN_109840530(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_1098405f0();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x5d) = *(undefined8 *)(param_2 + 0x5d);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  FUN_1098405f0(param_1 + 0x68,param_2 + 0x68);
  FUN_1098405f0(param_1 + 0x88,param_2 + 0x88);
  FUN_1098405f0(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1098405f0(param_1 + 200,param_2 + 200);
  FUN_1098405f0(param_1 + 0xe8,param_2 + 0xe8);
  uVar1 = *(undefined4 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x10c) = *(undefined1 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  return param_1;
}



/* Entry: 1098405dc; end: 1098405ef;  */

void FUN_1098405dc(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  cVar1 = *(char *)(puVar2 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        __ZdlPv(*puVar2);
      }
      uVar4 = param_2[1];
      uVar3 = *param_2;
      puVar2[2] = param_2[2];
      puVar2[1] = uVar4;
      *puVar2 = uVar3;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
    }
  }
  else if (cVar1 == '\0') {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(puVar2 + 3) = 1;
  }
  else {
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      __ZdlPv(*puVar2);
    }
    *(undefined1 *)(puVar2 + 3) = 0;
  }
  return;
}



/* Entry: 1098405f0; end: 10984068b;  */

void FUN_1098405f0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
      *(undefined1 *)param_2 = 0;
    }
  }
  else if (cVar1 == '\0') {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 10984068c; end: 1098411cf;  */

void FUN_10984068c(byte *param_1,ulong param_2,uint param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  bool bVar19;
  uint uVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  if (param_2 != 0) {
    _bzero(param_4,param_2 << 2);
  }
  uVar13 = param_2 + 7 >> 3;
  switch(param_3) {
  case 1:
    if (7 < param_2) {
      puVar14 = (undefined8 *)(param_4 + 0x10);
      uVar13 = param_2 >> 3;
      pbVar17 = param_1;
      do {
        bVar2 = *pbVar17;
        uVar26 = puVar14[-1];
        uVar25 = puVar14[-2];
        uVar28 = puVar14[1];
        uVar27 = *puVar14;
        puVar14[-1] = CONCAT17((char)((ulong)uVar26 >> 0x38),
                               CONCAT16((char)((ulong)uVar26 >> 0x30),
                                        CONCAT15((char)((ulong)uVar26 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar26 >> 0x20) |
                                                          ~-((bVar2 & 8) == 0) & 1U,
                                                          CONCAT13((char)((ulong)uVar26 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar26 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar26 >> 8),
                                                  (byte)uVar26 | ~-((bVar2 & 4) == 0) & 1U)))))));
        puVar14[-2] = CONCAT17((char)((ulong)uVar25 >> 0x38),
                               CONCAT16((char)((ulong)uVar25 >> 0x30),
                                        CONCAT15((char)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar25 >> 0x20) |
                                                          ~-((bVar2 & 2) == 0) & 1U,
                                                          CONCAT13((char)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((char)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((char)((ulong)
                                                  uVar25 >> 8),
                                                  (byte)uVar25 | ~-((bVar2 & 1) == 0) & 1U)))))));
        puVar14[1] = CONCAT17((char)((ulong)uVar28 >> 0x38),
                              CONCAT16((char)((ulong)uVar28 >> 0x30),
                                       CONCAT15((char)((ulong)uVar28 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar28 >> 0x20) |
                                                         ~-((bVar2 & 0x80) == 0) & 1U,
                                                         CONCAT13((char)((ulong)uVar28 >> 0x18),
                                                                  CONCAT12((char)((ulong)uVar28 >>
                                                                                 0x10),
                                                                           CONCAT11((char)((ulong)
                                                  uVar28 >> 8),
                                                  (byte)uVar28 | ~-((bVar2 & 0x40) == 0) & 1U)))))))
        ;
        *puVar14 = CONCAT17((char)((ulong)uVar27 >> 0x38),
                            CONCAT16((char)((ulong)uVar27 >> 0x30),
                                     CONCAT15((char)((ulong)uVar27 >> 0x28),
                                              CONCAT14((byte)((ulong)uVar27 >> 0x20) |
                                                       ~-((bVar2 & 0x20) == 0) & 1U,
                                                       CONCAT13((char)((ulong)uVar27 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar27 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar27 >> 8),
                                                  (byte)uVar27 | ~-((bVar2 & 0x10) == 0) & 1U)))))))
        ;
        puVar14 = puVar14 + 4;
        uVar13 = uVar13 - 1;
        pbVar17 = pbVar17 + 1;
      } while (uVar13 != 0);
    }
    if ((param_2 & 7) != 0) {
      uVar13 = 0;
      do {
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar13 * 4) =
             param_1[param_2 >> 3] >> (ulong)((uint)uVar13 & 0x1f) & 1;
        uVar13 = uVar13 + 1;
      } while ((param_2 & 7) != uVar13);
    }
    break;
  case 2:
    lVar16 = 0;
    bVar12 = true;
    do {
      bVar19 = bVar12;
      if (7 < param_2) {
        iVar3 = 1 << lVar16;
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = 1;
      bVar12 = false;
    } while (bVar19);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) =
             -((param_1 + (param_2 >> 3))[uVar13] >> (ulong)((uint)uVar15 & 0x1f) & 1) & 2 |
             param_1[param_2 >> 3] >> (ulong)((uint)uVar15 & 0x1f) & 1;
        uVar15 = uVar15 + 1;
      } while ((param_2 & 7) != uVar15);
    }
    break;
  case 3:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 3);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 4:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 4);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 4);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 5:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 5);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 5);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 6:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 6);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 6);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 7:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 7);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 7);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 8:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 8);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 8);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 9:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 9);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 9);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 10:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 10);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 10);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 0xb:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0xb);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 0xb);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  case 0xc:
    lVar16 = 0;
    do {
      if (7 < param_2) {
        iVar3 = 1 << (ulong)((uint)lVar16 & 0x1f);
        pbVar17 = param_1 + lVar16 * uVar13;
        uVar15 = param_2 >> 3;
        puVar14 = (undefined8 *)(param_4 + 0x10);
        do {
          bVar2 = *pbVar17;
          uVar26 = puVar14[-1];
          uVar25 = puVar14[-2];
          uVar28 = puVar14[1];
          uVar27 = *puVar14;
          iVar8 = -(uint)((bVar2 & 1) == 0);
          iVar9 = -(uint)((bVar2 & 2) == 0);
          iVar10 = -(uint)((bVar2 & 4) == 0);
          iVar11 = -(uint)((bVar2 & 8) == 0);
          bVar21 = (byte)iVar3;
          bVar22 = (byte)((uint)iVar3 >> 8);
          bVar23 = (byte)((uint)iVar3 >> 0x10);
          bVar24 = (byte)((uint)iVar3 >> 0x18);
          iVar4 = -(uint)((bVar2 & 0x10) == 0);
          iVar5 = -(uint)((bVar2 & 0x20) == 0);
          iVar6 = -(uint)((bVar2 & 0x40) == 0);
          iVar7 = -(uint)((bVar2 & 0x80) == 0);
          puVar14[-1] = CONCAT17(bVar24 & ~(byte)((uint)iVar11 >> 0x18) |
                                 (byte)((ulong)uVar26 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar11 >> 0x10) |
                                          (byte)((ulong)uVar26 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar11 >> 8) |
                                                   (byte)((ulong)uVar26 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar11 |
                                                            (byte)((ulong)uVar26 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar10
                                                                                     >> 0x18) |
                                                                     (byte)((ulong)uVar26 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar10 >> 0x10) | (byte)((ulong)uVar26 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar10 >> 8) |
                                                           (byte)((ulong)uVar26 >> 8),
                                                           bVar21 & ~(byte)iVar10 | (byte)uVar26))))
                                                  )));
          puVar14[-2] = CONCAT17(bVar24 & ~(byte)((uint)iVar9 >> 0x18) |
                                 (byte)((ulong)uVar25 >> 0x38),
                                 CONCAT16(bVar23 & ~(byte)((uint)iVar9 >> 0x10) |
                                          (byte)((ulong)uVar25 >> 0x30),
                                          CONCAT15(bVar22 & ~(byte)((uint)iVar9 >> 8) |
                                                   (byte)((ulong)uVar25 >> 0x28),
                                                   CONCAT14(bVar21 & ~(byte)iVar9 |
                                                            (byte)((ulong)uVar25 >> 0x20),
                                                            CONCAT13(bVar24 & ~(byte)((uint)iVar8 >>
                                                                                     0x18) |
                                                                     (byte)((ulong)uVar25 >> 0x18),
                                                                     CONCAT12(bVar23 & ~(byte)((uint
                                                  )iVar8 >> 0x10) | (byte)((ulong)uVar25 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar8 >> 8) |
                                                           (byte)((ulong)uVar25 >> 8),
                                                           bVar21 & ~(byte)iVar8 | (byte)uVar25)))))
                                         ));
          puVar14[1] = CONCAT17(bVar24 & ~(byte)((uint)iVar7 >> 0x18) |
                                (byte)((ulong)uVar28 >> 0x38),
                                CONCAT16(bVar23 & ~(byte)((uint)iVar7 >> 0x10) |
                                         (byte)((ulong)uVar28 >> 0x30),
                                         CONCAT15(bVar22 & ~(byte)((uint)iVar7 >> 8) |
                                                  (byte)((ulong)uVar28 >> 0x28),
                                                  CONCAT14(bVar21 & ~(byte)iVar7 |
                                                           (byte)((ulong)uVar28 >> 0x20),
                                                           CONCAT13(bVar24 & ~(byte)((uint)iVar6 >>
                                                                                    0x18) |
                                                                    (byte)((ulong)uVar28 >> 0x18),
                                                                    CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar6 >> 0x10) | (byte)((ulong)uVar28 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar6 >> 8) |
                                                           (byte)((ulong)uVar28 >> 8),
                                                           bVar21 & ~(byte)iVar6 | (byte)uVar28)))))
                                        ));
          *puVar14 = CONCAT17(bVar24 & ~(byte)((uint)iVar5 >> 0x18) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16(bVar23 & ~(byte)((uint)iVar5 >> 0x10) |
                                       (byte)((ulong)uVar27 >> 0x30),
                                       CONCAT15(bVar22 & ~(byte)((uint)iVar5 >> 8) |
                                                (byte)((ulong)uVar27 >> 0x28),
                                                CONCAT14(bVar21 & ~(byte)iVar5 |
                                                         (byte)((ulong)uVar27 >> 0x20),
                                                         CONCAT13(bVar24 & ~(byte)((uint)iVar4 >>
                                                                                  0x18) |
                                                                  (byte)((ulong)uVar27 >> 0x18),
                                                                  CONCAT12(bVar23 & ~(byte)((uint)
                                                  iVar4 >> 0x10) | (byte)((ulong)uVar27 >> 0x10),
                                                  CONCAT11(bVar22 & ~(byte)((uint)iVar4 >> 8) |
                                                           (byte)((ulong)uVar27 >> 8),
                                                           bVar21 & ~(byte)iVar4 | (byte)uVar27)))))
                                      ));
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
        } while (uVar15 != 0);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0xc);
    if ((param_2 & 7) != 0) {
      uVar15 = 0;
      do {
        lVar16 = 0;
        uVar20 = 0;
        pbVar17 = param_1 + (param_2 >> 3);
        do {
          uVar1 = 0;
          if ((1 << (ulong)((uint)uVar15 & 0x1f) & (uint)*pbVar17) != 0) {
            uVar1 = 1 << (ulong)((uint)lVar16 & 0x1f);
          }
          uVar20 = uVar1 | uVar20;
          lVar16 = lVar16 + 1;
          pbVar17 = pbVar17 + uVar13;
        } while (lVar16 != 0xc);
        *(uint *)(param_4 + (param_2 & 0x3ffffffffffffff8) * 4 + uVar15 * 4) = uVar20;
        uVar15 = uVar15 + 1;
      } while (uVar15 != (param_2 & 7));
    }
    break;
  default:
    if (0 < (int)param_3) {
      uVar15 = 0;
      do {
        if (param_2 != 0) {
          uVar18 = 0;
          do {
            *(uint *)(param_4 + uVar18 * 4) =
                 (param_1[(uVar18 >> 3) + uVar15 * uVar13] >> (ulong)((uint)uVar18 & 7) & 1) <<
                 (ulong)((uint)uVar15 & 0x1f) | *(uint *)(param_4 + uVar18 * 4);
            uVar18 = uVar18 + 1;
          } while (param_2 != uVar18);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_3);
    }
  }
  return;
}



/* Entry: 1098411d0; end: 1098412eb;  */

void FUN_1098411d0(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  FUN_10983e758(auStack_58,param_1,param_1 + param_2);
  iVar2 = (int)auStack_58;
  FUN_10983ec18();
  iVar3 = (int)auStack_58;
  FUN_10983ed00();
  if (iVar3 - 1U < 4) {
    FUN_10983ec8c(auStack_58,lStack_48 - lStack_50);
    FUN_1098412ec();
    func_0x000108a5942c(param_5,*(long *)(param_4 + 0x658) - *(long *)(param_4 + 0x650) >> 2);
    lVar5 = *(long *)(param_4 + 0x658) - (long)*(int **)(param_4 + 0x650);
    if (lVar5 != 0) {
      lVar5 = lVar5 >> 2;
      piVar4 = *(int **)(param_4 + 0x650);
      piVar6 = (int *)*param_5;
      do {
        *piVar6 = *piVar4 + iVar2;
        lVar5 = lVar5 + -1;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (lVar5 != 0);
    }
    FUN_10983ed70(auStack_58);
    return;
  }
  func_0x000107c31940(auStack_70,&UNK_10f581001);
  FUN_10983e7c0(auStack_70);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098412d0);
  (*pcVar1)();
}



/* Entry: 1098412ec; end: 10984144f;  */

void FUN_1098412ec(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5,
                  undefined8 *param_6)

{
  code *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  if (param_4 - 1 < 4) {
    if (param_3 == 0) {
      param_6[1] = *param_6;
      if (param_2 == 0) {
        return;
      }
      func_0x000107c31940(auStack_68,&UNK_10f5810ab);
      FUN_10983e7c0(auStack_68);
    }
    else {
      uVar5 = 0;
      lStack_70 = 0;
      do {
        FUN_1098419cc(param_1,param_2,&lStack_70,param_3,param_5,param_5 + 0x638);
        pbVar2 = *(byte **)(param_5 + 0x638);
        if (uVar5 == 0) {
          FUN_1098424c8(param_6,pbVar2,*(long *)(param_5 + 0x640),
                        *(long *)(param_5 + 0x640) - (long)pbVar2);
        }
        else {
          puVar3 = (uint *)*param_6;
          lVar4 = param_3;
          do {
            *puVar3 = (uint)*pbVar2 << (ulong)((uVar5 & 3) << 3) | *puVar3;
            lVar4 = lVar4 + -1;
            pbVar2 = pbVar2 + 1;
            puVar3 = puVar3 + 1;
          } while (lVar4 != 0);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_4);
      if (lStack_70 == param_2) {
        return;
      }
      func_0x000107c31940(auStack_68,&UNK_10f5810b6);
      FUN_10983e7c0(auStack_68);
    }
  }
  else {
    func_0x000107c31940(auStack_68,&UNK_10f581090);
    FUN_10983e7c0(auStack_68);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10984142c);
  (*pcVar1)();
}



/* Entry: 109841450; end: 1098419cb;  */

void FUN_109841450(long param_1,long param_2,uint param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  uint auStack_78 [6];
  
  FUN_10983e758(auStack_a8,param_1,param_1 + param_2);
  iVar5 = (int)auStack_a8;
  FUN_10983ec18();
  puVar7 = auStack_a8;
  FUN_10983ed00();
  uVar6 = (uint)auStack_a8;
  FUN_10983ed00();
  puVar22 = auStack_a8;
  FUN_10983ec18();
  uVar23 = lStack_98 - lStack_a0;
  if (uVar23 < ((ulong)puVar22 & 0xffffffff)) {
    func_0x000107c31940(auStack_78,&UNK_10f58102c);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  uVar25 = (ulong)puVar22 & 0xffffffff;
  uVar21 = uVar23 - uVar25;
  if (uVar21 >> 0x20 != 0) {
    func_0x000107c31940(auStack_78,&UNK_10f58105c);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  if (0x1e < (uint)puVar7 - 1) {
    func_0x000107c31940(auStack_78,&UNK_10f5811c9);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  uVar24 = (ulong)param_3;
  uVar12 = uVar24 + 7 >> 3;
  lVar20 = uVar12 * ((ulong)puVar7 & 0xffffffff);
  uVar9 = uVar25;
  FUN_10983ec8c(auStack_a8);
  if (uVar9 == 0) {
    if (lVar20 != 0) {
      func_0x000107c31940(auStack_78,&UNK_10f5811fb);
      FUN_10983e7c0(auStack_78);
      goto LAB_10984197c;
    }
    *(undefined8 *)(param_4 + 0x670) = *(undefined8 *)(param_4 + 0x668);
  }
  else {
    FUN_1098426f4();
    if (*(long *)(param_4 + 0x670) - *(long *)(param_4 + 0x668) != lVar20) {
      func_0x000107c31940(auStack_78,&UNK_10f58120c);
      FUN_10983e7c0(auStack_78);
      goto LAB_10984197c;
    }
  }
  auStack_78[0] = 0;
  func_0x0001098425e8(param_4 + 0x650,uVar24,auStack_78);
  FUN_10984068c(*(undefined8 *)(param_4 + 0x668),uVar24,puVar7,*(undefined8 *)(param_4 + 0x650));
  if (uVar23 == uVar25) goto LAB_1098417dc;
  if (uVar6 == 0) {
    func_0x000107c31940(auStack_78,&DAT_10f6842c6);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  if ((uVar6 >> 7 & 1) == 0) {
    func_0x000107c31940(auStack_78,&UNK_10f581255);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  FUN_10983ec8c(auStack_a8);
  puVar22 = (undefined1 *)(ulong)(uVar6 & 0x3f);
  if (uVar21 == 0) {
    uVar10 = *(undefined8 *)(param_4 + 0x668);
    *(undefined8 *)(param_4 + 0x670) = uVar10;
    uVar11 = uVar10;
  }
  else {
    FUN_1098426f4();
    uVar10 = *(undefined8 *)(param_4 + 0x668);
    uVar11 = *(undefined8 *)(param_4 + 0x670);
  }
  FUN_10983e758(auStack_90,uVar10,uVar11);
  if ((uVar6 & 0x3f) == 0) {
    puVar22 = auStack_90;
    FUN_10983ed00();
  }
  if (0x1f < (uint)puVar22) {
    func_0x000107c31940(auStack_78,&UNK_10f58127d);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  plVar2 = (long *)(param_4 + 0x680);
  puVar8 = auStack_90;
  if (uVar6 < 0xc0) {
    FUN_10983ec8c(puVar8,uVar12);
    FUN_10925f784(plVar2,puVar8,puVar8 + uVar12,uVar12);
    pcVar13 = *(char **)(param_4 + 0x680);
    if (pcVar13 != *(char **)(param_4 + 0x688)) {
      uVar23 = 0;
      do {
        if (*pcVar13 != '\0') {
          uVar23 = uVar23 + (byte)POPCOUNT(*pcVar13);
        }
        pcVar13 = pcVar13 + 1;
      } while (pcVar13 != *(char **)(param_4 + 0x688));
      goto LAB_1098416d8;
    }
LAB_1098416fc:
    uVar23 = 0;
  }
  else {
    FUN_109842804();
    auStack_78[0] = auStack_78[0] & 0xffffff00;
    func_0x000108a39c34(plVar2,uVar12,auStack_78);
    if ((int)puVar8 == 0) goto LAB_1098416fc;
    uVar23 = (ulong)puVar8 & 0xffffffff;
    uVar21 = uVar23;
    do {
      puVar8 = auStack_90;
      FUN_109842804();
      if (param_3 <= (uint)puVar8) {
        func_0x000107c31940(auStack_78,&UNK_10f581296);
        FUN_10983e7c0(auStack_78);
        goto LAB_10984197c;
      }
      uVar6 = 1 << (ulong)((uint)puVar8 & 7);
      uVar25 = ((ulong)puVar8 & 0xffffffff) >> 3;
      bVar3 = *(byte *)(*plVar2 + uVar25);
      if ((uVar6 & bVar3) != 0) {
        func_0x000107c31940(auStack_78,&UNK_10f5812be);
        FUN_10983e7c0(auStack_78);
        goto LAB_10984197c;
      }
      *(byte *)(*plVar2 + uVar25) = bVar3 | (byte)uVar6;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
LAB_1098416d8:
    if (((uint)puVar22 == 0) && (uVar23 != 0)) {
      func_0x000107c31940(auStack_78,&UNK_10f5812dc);
      FUN_10983e7c0(auStack_78);
      goto LAB_10984197c;
    }
  }
  puVar8 = auStack_90;
  FUN_10983ec8c(puVar8,(uVar23 + 7 >> 3) * ((ulong)puVar22 & 0xffffffff));
  auStack_78[0] = 0;
  func_0x0001098425e8((long *)(param_4 + 0x698),uVar23,auStack_78);
  FUN_10984068c(puVar8,uVar23,puVar22,*(undefined8 *)(param_4 + 0x698));
  lVar16 = *(long *)(param_4 + 0x650);
  lVar20 = *(long *)(param_4 + 0x658) - lVar16;
  if (lVar20 == 0) {
    uVar23 = 0;
    lVar15 = *(long *)(param_4 + 0x6a0);
  }
  else {
    uVar21 = 0;
    uVar23 = 0;
    lVar18 = *(long *)(param_4 + 0x680);
    lVar15 = *(long *)(param_4 + 0x6a0);
    lVar19 = *(long *)(param_4 + 0x698);
    do {
      if ((*(byte *)(lVar18 + (uVar21 >> 3)) >> (ulong)((uint)uVar21 & 7) & 1) != 0) {
        if ((ulong)(lVar15 - lVar19 >> 2) <= uVar23) {
          func_0x000107c31940(auStack_78,&UNK_10f581301);
          FUN_10983e7c0(auStack_78);
          goto LAB_10984197c;
        }
        lVar1 = uVar23 * 4;
        uVar23 = uVar23 + 1;
        *(uint *)(lVar16 + uVar21 * 4) =
             *(uint *)(lVar16 + uVar21 * 4) |
             *(int *)(lVar19 + lVar1) << (ulong)((uint)puVar7 & 0x1f);
      }
      uVar21 = uVar21 + 1;
    } while (lVar20 >> 2 != uVar21);
  }
  if (uVar23 == lVar15 - *(long *)(param_4 + 0x698) >> 2) {
    FUN_10983ed70(auStack_90);
LAB_1098417dc:
    func_0x000108a5942c(param_5,*(long *)(param_4 + 0x658) - *(long *)(param_4 + 0x650) >> 2);
    lVar20 = *(long *)(param_4 + 0x658) - (long)*(int **)(param_4 + 0x650);
    if (lVar20 != 0) {
      lVar20 = lVar20 >> 2;
      piVar14 = *(int **)(param_4 + 0x650);
      piVar17 = (int *)*param_5;
      do {
        *piVar17 = *piVar14 + iVar5;
        lVar20 = lVar20 + -1;
        piVar14 = piVar14 + 1;
        piVar17 = piVar17 + 1;
      } while (lVar20 != 0);
    }
    FUN_10983ed70(auStack_a8);
    return;
  }
  func_0x000107c31940(auStack_78,&UNK_10f581319);
  FUN_10983e7c0(auStack_78);
LAB_10984197c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109841980);
  (*pcVar4)();
}



/* Entry: 1098419cc; end: 109841e6f;  */

void FUN_1098419cc(long param_1,ulong param_2,ulong *param_3,ulong param_4,long param_5,
                  long *param_6)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  ulong *puVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint auStack_150 [4];
  ulong auStack_140 [16];
  undefined4 uStack_bc;
  ulong auStack_b0 [6];
  undefined1 auStack_80 [32];
  
  lVar20 = *(long *)(param_5 + 0x620);
  if (*(long *)(param_5 + 0x628) - lVar20 != 0x4000) {
    func_0x0001074287b0((long *)(param_5 + 0x620),0x1000);
    lVar20 = *(long *)(param_5 + 0x620);
  }
  uVar15 = param_6[1] - *param_6;
  if (param_4 < uVar15 || param_4 - uVar15 == 0) {
    if (param_4 < uVar15) {
      param_6[1] = *param_6 + param_4;
    }
  }
  else {
    func_0x000107c27d58(param_6,param_4 - uVar15);
  }
  lVar13 = 0;
  uVar22 = 0;
  puVar2 = (undefined4 *)(param_5 + 0x200);
  uVar15 = *param_3;
  bVar10 = false;
  do {
    if (uVar15 < param_2) {
      *param_3 = uVar15 + 1;
      uVar11 = (uint)*(byte *)(param_1 + uVar15);
      uVar15 = uVar15 + 1;
    }
    else {
      uVar11 = 0;
    }
    uVar22 = (ulong)(uVar11 << lVar13 | (uint)uVar22);
    lVar13 = 8;
    bVar8 = !bVar10;
    bVar10 = true;
  } while (bVar8);
  if (param_2 - uVar15 < uVar22) {
    func_0x000107c31940(auStack_140,&UNK_10f5810c7);
    FUN_10983e7c0(auStack_140);
  }
  else {
    func_0x0001074287b0((long *)(param_5 + 0x608),0x100);
    func_0x00010984220c(auStack_b0,param_1 + uVar15,uVar22);
    _memset_pattern16(auStack_140,&UNK_10dfd94a0,0x84);
    lVar13 = 0;
    uStack_bc = 0x21;
    do {
      puVar12 = auStack_140;
      FUN_1098420e0(puVar12,auStack_b0);
      uVar11 = (uint)puVar12;
      if (1 < uVar11) {
        uVar18 = (uint)auStack_b0;
        func_0x000109842198();
        uVar11 = uVar18 | 1 << (ulong)(uVar11 - 1 & 0x1f);
      }
      puVar16 = *(undefined8 **)(param_5 + 0x608);
      *(uint *)((long)puVar16 + lVar13) = uVar11;
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x400);
    lVar13 = 0;
    uVar15 = uVar15 + uVar22;
    *param_3 = uVar15;
    do {
      uVar24 = puVar16[1];
      uVar23 = *puVar16;
      uVar7 = puVar16[3];
      uVar6 = puVar16[2];
      ((undefined8 *)(param_5 + lVar13))[1] =
           CONCAT17((char)((ulong)uVar7 >> 0x28),
                    CONCAT16((char)((ulong)uVar7 >> 0x20),
                             CONCAT15((char)((ulong)uVar7 >> 8),
                                      CONCAT14((char)uVar7,
                                               CONCAT13((char)((ulong)uVar6 >> 0x28),
                                                        CONCAT12((char)((ulong)uVar6 >> 0x20),
                                                                 (short)uVar6))))));
      *(undefined8 *)(param_5 + lVar13) =
           CONCAT17((char)((ulong)uVar24 >> 0x28),
                    CONCAT16((char)((ulong)uVar24 >> 0x20),
                             CONCAT15((char)((ulong)uVar24 >> 8),
                                      CONCAT14((char)uVar24,
                                               CONCAT13((char)((ulong)uVar23 >> 0x28),
                                                        CONCAT12((char)((ulong)uVar23 >> 0x20),
                                                                 (short)uVar23))))));
      lVar13 = lVar13 + 0x10;
      puVar16 = puVar16 + 4;
    } while (lVar13 != 0x200);
    iVar14 = 0;
    lVar13 = 0;
    *puVar2 = 0;
    do {
      iVar14 = iVar14 + (uint)*(ushort *)(param_5 + lVar13 * 2);
      lVar1 = lVar13 * 4;
      lVar13 = lVar13 + 1;
      *(int *)(param_5 + lVar1 + 0x204) = iVar14;
    } while (lVar13 != 0x100);
    if (*(int *)(param_5 + 0x600) == 0x1000) {
      uVar22 = 0;
      lVar13 = 0;
      do {
        lVar1 = lVar13 + 1;
        uVar17 = (ulong)(uint)puVar2[lVar1];
        if (uVar22 < (uint)puVar2[lVar1]) {
          uVar11 = 0;
          uVar5 = *(ushort *)(param_5 + lVar13 * 2);
          do {
            *(uint *)(lVar20 + uVar22 * 4) =
                 (uint)uVar5 * 0x100000 - 0x100000 | (uint)lVar13 | uVar11;
            uVar22 = uVar22 + 1;
            uVar11 = uVar11 + 0x100;
            uVar17 = (ulong)(uint)puVar2[lVar1];
          } while (uVar22 < (uint)puVar2[lVar1]);
        }
        uVar22 = uVar17;
        lVar13 = lVar1;
      } while (lVar1 != 0x100);
      if (uVar15 < param_2) {
        *param_3 = uVar15 + 1;
        bVar4 = *(byte *)(param_1 + uVar15);
        if (bVar4 == 1 || bVar4 == 4) {
          uVar17 = 0;
          uVar22 = 0;
          auStack_140[1] = 0;
          auStack_140[0] = 0;
          auStack_140[3] = 0;
          auStack_140[2] = 0;
          auStack_b0[1] = 0;
          auStack_b0[0] = 0;
          auStack_b0[3] = 0;
          auStack_b0[2] = 0;
          auStack_150[0] = 0;
          auStack_150[1] = 0;
          auStack_150[2] = 0;
          auStack_150[3] = 0;
          uVar15 = uVar15 + 1;
          do {
            uVar11 = 0;
            uVar18 = 0;
            uVar21 = uVar15;
            do {
              if (uVar15 < param_2) {
                uVar21 = uVar15 + 1;
                *param_3 = uVar21;
                uVar19 = (uint)*(byte *)(param_1 + uVar15);
                uVar15 = uVar21;
              }
              else {
                uVar19 = 0;
              }
              uVar18 = uVar19 << (ulong)(uVar11 & 0x1f) | uVar18;
              uVar11 = uVar11 + 8;
            } while (uVar11 != 0x20);
            auStack_150[uVar17] = uVar18;
            if (uVar18 < 4) {
              func_0x000107c31940(auStack_80,&UNK_10f581111);
              FUN_10983e7c0();
              goto LAB_109841e2c;
            }
            uVar22 = uVar22 + uVar18;
            uVar17 = uVar17 + 1;
            uVar15 = uVar21;
          } while (uVar17 != bVar4);
          if (uVar22 <= param_2 - uVar21) {
            uVar15 = 0;
            do {
              auStack_140[uVar15] = uVar21;
              uVar21 = uVar21 + auStack_150[uVar15];
              auStack_b0[uVar15] = uVar21;
              uVar15 = uVar15 + 1;
            } while (bVar4 != uVar15);
            if (bVar4 == 1) {
              if (param_4 != 0) {
                uVar22 = 0;
                uVar15 = auStack_140[0] + 4;
                uVar11 = *(uint *)(param_1 + auStack_140[0]);
                do {
                  uVar18 = *(uint *)(lVar20 + (ulong)(uVar11 & 0xfff) * 4);
                  *(char *)(*param_6 + uVar22) = (char)uVar18;
                  uVar11 = (uVar11 >> 0xc) * (uVar18 >> 0x14) + (uVar11 >> 0xc) +
                           (uVar18 >> 8 & 0xfff);
                  if (uVar11 >> 0x17 == 0) {
                    uVar18 = uVar11;
                    uVar17 = uVar15;
                    if (uVar15 <= auStack_b0[0]) {
                      uVar17 = auStack_b0[0];
                    }
                    do {
                      if (uVar17 == uVar15) {
                        func_0x000107c31940(auStack_80,&UNK_10f5811b4);
                        FUN_10983e7c0();
                        goto LAB_109841e2c;
                      }
                      uVar3 = uVar15 + 1;
                      uVar11 = (uint)*(byte *)(param_1 + uVar15) | uVar18 << 8;
                      bVar10 = uVar18 < 0x8000;
                      uVar15 = uVar3;
                      uVar18 = uVar11;
                    } while (bVar10);
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 != param_4);
              }
            }
            else {
              FUN_109841e70(param_1,param_2,auStack_140,auStack_b0,param_4,lVar20);
            }
            *param_3 = uVar21;
            return;
          }
          func_0x000107c31940(auStack_80,&UNK_10f581121);
          FUN_10983e7c0();
          goto LAB_109841e2c;
        }
      }
      func_0x000107c31940(auStack_140,&UNK_10f5810f6);
      FUN_10983e7c0(auStack_140);
    }
    else {
      func_0x000107c31940(auStack_140,&UNK_10f5810e3);
      FUN_10983e7c0(auStack_140);
    }
  }
LAB_109841e2c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109841e30);
  (*pcVar9)();
}



/* Entry: 109841e70; end: 1098420df;  */

long FUN_109841e70(long param_1,ulong param_2,long param_3,long param_4,ulong param_5,long param_6,
                  long *param_7)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_b8 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  ulong auStack_58 [4];
  uint auStack_38 [4];
  long lStack_28;
  
  lVar6 = 0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    lVar9 = *(long *)(param_3 + lVar6 * 8);
    auStack_38[lVar6] =
         CONCAT13(*(undefined1 *)(param_1 + 3 + lVar9),
                  CONCAT12(*(undefined1 *)(param_1 + 2 + lVar9),
                           CONCAT11(*(undefined1 *)(param_1 + 1 + lVar9),
                                    *(undefined1 *)(param_1 + lVar9))));
    auStack_58[lVar6] = lVar9 + 4;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  if (3 < param_5) {
    uVar7 = 0;
    do {
      lVar6 = 0;
      do {
        uVar8 = auStack_38[lVar6];
        uVar2 = *(uint *)(param_6 + ((ulong)uVar8 & 0xfff) * 4);
        *(char *)(*param_7 + uVar7 * 4 + lVar6) = (char)uVar2;
        uVar8 = (uVar8 >> 0xc) * (uVar2 >> 0x14) + (uVar8 >> 0xc) + (uVar2 >> 8 & 0xfff);
        if (uVar8 >> 0x17 == 0) {
          uVar10 = *(ulong *)(param_4 + lVar6 * 8);
          uVar11 = auStack_58[lVar6];
          uVar1 = uVar11;
          if (uVar11 <= uVar10) {
            uVar1 = uVar10;
          }
          do {
            if (uVar1 == uVar11) {
              auStack_58[lVar6] = uVar1;
              auStack_38[lVar6] = uVar8;
              func_0x000107c31940(auStack_70,&UNK_10f5811b4);
              FUN_10983e7c0(auStack_70);
              goto LAB_1098420b0;
            }
            param_2 = uVar11 + 1;
            uVar2 = (uint)*(byte *)(param_1 + uVar11) | uVar8 << 8;
            bVar5 = uVar8 < 0x8000;
            uVar11 = param_2;
            uVar8 = uVar2;
          } while (bVar5);
          auStack_58[lVar6] = param_2;
        }
        auStack_38[lVar6] = uVar8;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_5 >> 2);
  }
  if ((param_5 & 3) != 0) {
    uVar7 = 0;
    do {
      uVar8 = auStack_38[uVar7];
      uVar2 = *(uint *)(param_6 + ((ulong)uVar8 & 0xfff) * 4);
      *(char *)(*param_7 + (param_5 & 0xfffffffffffffffc) + uVar7) = (char)uVar2;
      uVar8 = (uVar8 >> 0xc) * (uVar2 >> 0x14) + (uVar8 >> 0xc) + (uVar2 >> 8 & 0xfff);
      if (uVar8 >> 0x17 == 0) {
        uVar10 = *(ulong *)(param_4 + uVar7 * 8);
        uVar11 = auStack_58[uVar7];
        uVar1 = uVar11;
        if (uVar11 <= uVar10) {
          uVar1 = uVar10;
        }
        do {
          if (uVar1 == uVar11) {
            auStack_58[uVar7] = uVar1;
            auStack_38[uVar7] = uVar8;
            func_0x000107c31940(auStack_70,&UNK_10f5811b4);
            FUN_10983e7c0(auStack_70);
LAB_1098420b0:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1098420b4);
            (*pcVar4)();
          }
          uVar10 = uVar11 + 1;
          uVar2 = (uint)*(byte *)(param_1 + uVar11) | uVar8 << 8;
          bVar5 = uVar8 < 0x8000;
          uVar11 = uVar10;
          uVar8 = uVar2;
        } while (bVar5);
        auStack_58[uVar7] = uVar10;
      }
      auStack_38[uVar7] = uVar8;
      uVar7 = uVar7 + 1;
    } while (uVar7 != (param_5 & 3));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  __Unwind_Resume();
  uVar7 = param_2;
  FUN_1098422dc(param_2,*(undefined4 *)(param_1 + 0x84));
  lVar6 = 0;
  uVar8 = 0;
  do {
    iVar3 = *(int *)(param_1 + lVar6 * 4);
    uVar2 = iVar3 + uVar8;
    if ((uint)uVar7 < uVar2) {
      FUN_1098423a4(param_2,uVar8,iVar3,*(undefined4 *)(param_1 + 0x84));
      FUN_109842474(param_1,lVar6);
      return lVar6;
    }
    lVar6 = lVar6 + 1;
    uVar8 = uVar2;
  } while (lVar6 != 0x21);
  func_0x000107c31940(auStack_b8,&UNK_10f58114c);
  FUN_10983e7c0(auStack_b8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10984214c);
  (*pcVar4)();
}



/* Entry: 1098420e0; end: 109842197;  */

long FUN_1098420e0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  uVar4 = param_2;
  FUN_1098422dc(param_2,*(undefined4 *)(param_1 + 0x84));
  lVar6 = 0;
  uVar5 = 0;
  do {
    iVar2 = *(int *)(param_1 + lVar6 * 4);
    uVar1 = iVar2 + uVar5;
    if ((uint)uVar4 < uVar1) {
      FUN_1098423a4(param_2,uVar5,iVar2,*(undefined4 *)(param_1 + 0x84));
      FUN_109842474(param_1,lVar6);
      return lVar6;
    }
    lVar6 = lVar6 + 1;
    uVar5 = uVar1;
  } while (lVar6 != 0x21);
  func_0x000107c31940(auStack_48,&UNK_10f58114c);
  FUN_10983e7c0(auStack_48);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10984214c);
  (*pcVar3)();
}



/* Entry: 109842198; end: 109842267;  */

uint FUN_109842198(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = param_1;
      FUN_1098422dc(param_1,2);
      bVar1 = (int)uVar2 != 0;
      FUN_1098423a4(param_1,bVar1,1,2);
      uVar3 = (uint)bVar1 | uVar3 << 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar3;
}



/* Entry: 109842268; end: 1098422db;  */

undefined1 FUN_109842268(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = param_1[2];
  if (uVar1 < (ulong)param_1[1]) {
    param_1[2] = uVar1 + 1;
    return *(undefined1 *)(*param_1 + uVar1);
  }
  func_0x000107c31940(auStack_38,&UNK_10f58113a);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098422c0);
  (*pcVar2)();
}



/* Entry: 1098422dc; end: 1098423a3;  */

void FUN_1098422dc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auStack_38 [24];
  
  if (param_2 == 0) {
    func_0x000107c31940(auStack_38,&UNK_10f581154);
    FUN_10983e7c0(auStack_38);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = uVar1 / param_2;
    }
    *(uint *)(param_1 + 0x1c) = uVar2;
    if (uVar1 < param_2) {
      func_0x000107c31940(auStack_38,&UNK_10f581160);
      FUN_10983e7c0(auStack_38);
    }
    else {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) / uVar2;
      }
      if (uVar1 < param_2) {
        return;
      }
      func_0x000107c31940(auStack_38,&UNK_10f58116b);
      FUN_10983e7c0(auStack_38);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109842380);
  (*pcVar3)();
}



/* Entry: 1098423a4; end: 109842473;  */

void FUN_1098423a4(long param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_38 [24];
  
  if (param_4 <= param_3 - 1U || param_4 - param_3 < param_2) {
    func_0x000107c31940(auStack_38,&UNK_10f58117b);
    FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109842458);
    (*pcVar3)();
  }
  uVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) * param_2;
  *(uint *)(param_1 + 0x18) = uVar2;
  uVar5 = *(int *)(param_1 + 0x1c) * param_3;
  do {
    *(uint *)(param_1 + 0x1c) = uVar5;
    if ((uVar5 + uVar2 ^ uVar2) >> 0x18 != 0) {
      if (uVar5 >> 0x10 != 0) {
        return;
      }
      *(uint *)(param_1 + 0x1c) = -uVar2 & 0xffff;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    lVar4 = param_1;
    FUN_109842268();
    *(uint *)(param_1 + 0x20) = (uint)lVar4 | iVar1 << 8;
    uVar2 = *(int *)(param_1 + 0x18) << 8;
    *(uint *)(param_1 + 0x18) = uVar2;
    uVar5 = *(int *)(param_1 + 0x1c) << 8;
  } while( true );
}



/* Entry: 109842474; end: 1098424c7;  */

void FUN_109842474(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  *(int *)(param_1 + (long)param_2 * 4) = *(int *)(param_1 + (long)param_2 * 4) + 0x18;
  uVar1 = *(int *)(param_1 + 0x84) + 0x18;
  *(uint *)(param_1 + 0x84) = uVar1;
  if (0x7fff < uVar1) {
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    do {
      uVar1 = *(uint *)(param_1 + lVar2) >> 1 | 1;
      *(uint *)(param_1 + lVar2) = uVar1;
      *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + uVar1;
      lVar2 = lVar2 + 4;
    } while (lVar2 != 0x84);
  }
  return;
}



/* Entry: 1098424c8; end: 1098426f3;  */

void FUN_1098424c8(undefined8 *param_1,uint *param_2,uint *param_3,ulong param_4,undefined8 *param_5
                  )

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  undefined1 auStack_98 [24];
  uint *puStack_80;
  uint *puStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  ulong uStack_60;
  uint *puStack_58;
  uint *puStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  uVar8 = param_1[2];
  puVar4 = (uint *)*param_1;
  if (param_4 <= (ulong)((long)(uVar8 - (long)puVar4) >> 2)) {
    puVar9 = (uint *)param_1[1];
    uVar8 = (long)puVar9 - (long)puVar4 >> 2;
    if (uVar8 < param_4) {
      puVar7 = (uint *)(uVar8 + (long)param_2);
      if (puVar9 != puVar4) {
        do {
          puVar5 = (uint *)((long)param_2 + 1);
          *puVar4 = (uint)(byte)*param_2;
          puVar4 = puVar4 + 1;
          param_2 = puVar5;
        } while (puVar5 != puVar7);
      }
      puVar4 = puVar9;
      if (puVar7 != param_3) {
        puVar4 = puVar9 + ((long)param_3 - (long)puVar7);
        do {
          puVar5 = (uint *)((long)puVar7 + 1);
          *puVar9 = (uint)(byte)*puVar7;
          puVar9 = puVar9 + 1;
          puVar7 = puVar5;
        } while (puVar5 != param_3);
      }
      param_1[1] = puVar4;
    }
    else {
      for (; param_2 != param_3; param_2 = (uint *)((long)param_2 + 1)) {
        *puVar4 = (uint)(byte)*param_2;
        puVar4 = puVar4 + 1;
      }
      param_1[1] = puVar4;
    }
    return;
  }
  puVar9 = param_2;
  puVar7 = param_3;
  if (puVar4 != (uint *)0x0) {
    param_1[1] = puVar4;
    __ZdlPv();
    uVar8 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar1 = (long)uVar8 >> 1;
    if ((ulong)((long)uVar8 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar1 = 0x3fffffffffffffff;
    }
    FUN_109265f60(param_1,uVar1);
    puVar4 = (uint *)param_1[1];
    for (; param_2 != param_3; param_2 = (uint *)((long)param_2 + 1)) {
      *puVar4 = (uint)(byte)*param_2;
      puVar4 = puVar4 + 1;
    }
    param_1[1] = puVar4;
    return;
  }
  FUN_109231bc0();
  uStack_38 = 0x1098425e8;
  uVar8 = *(ulong *)(puVar4 + 4);
  puVar5 = *(uint **)puVar4;
  if (puVar9 <= (uint *)((long)(uVar8 - (long)puVar5) >> 2)) {
    puVar10 = *(uint **)(puVar4 + 2);
    puVar11 = (uint *)((long)puVar10 - (long)puVar5 >> 2);
    puVar6 = puVar11;
    if (puVar9 <= puVar11) {
      puVar6 = puVar9;
    }
    if (puVar6 != (uint *)0x0) {
      uVar2 = *puVar7;
      puVar13 = puVar5;
      do {
        *puVar13 = uVar2;
        puVar6 = (uint *)((long)puVar6 + -1);
        puVar13 = puVar13 + 1;
      } while (puVar6 != (uint *)0x0);
    }
    if (puVar9 < puVar11 || (long)puVar9 - (long)puVar11 == 0) {
      *(uint **)(puVar4 + 2) = puVar5 + (long)puVar9;
    }
    else {
      uVar2 = *puVar7;
      lVar12 = (long)puVar9 * 4 + (long)puVar11 * -4;
      puVar7 = puVar10;
      do {
        *puVar7 = uVar2;
        lVar12 = lVar12 + -4;
        puVar7 = puVar7 + 1;
      } while (lVar12 != 0);
      *(uint **)(puVar4 + 2) = puVar10 + ((long)puVar9 - (long)puVar11);
    }
    return;
  }
  puVar6 = puVar9;
  puVar10 = puVar7;
  uStack_60 = param_4;
  puStack_58 = param_2;
  puStack_50 = param_3;
  puStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  if (puVar5 != (uint *)0x0) {
    *(uint **)(puVar4 + 2) = puVar5;
    __ZdlPv();
    uVar8 = 0;
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
  }
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar5 = (uint *)((long)uVar8 >> 1);
    if ((uint *)((long)uVar8 >> 1) <= puVar9) {
      puVar5 = puVar9;
    }
    if (0x7ffffffffffffffb < uVar8) {
      puVar5 = (uint *)0x3fffffffffffffff;
    }
    FUN_109265f60(puVar4,puVar5);
    puVar5 = *(uint **)(puVar4 + 2);
    lVar12 = (long)puVar9 << 2;
    uVar2 = *puVar7;
    puVar7 = puVar5;
    do {
      *puVar7 = uVar2;
      lVar12 = lVar12 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar12 != 0);
    *(uint **)(puVar4 + 2) = puVar5 + (long)puVar9;
    return;
  }
  FUN_109231bc0();
  pcStack_68 = FUN_1098426f4;
  if (puVar6 == (uint *)0x0) {
LAB_109842770:
    param_5[1] = *param_5;
    return;
  }
  puStack_80 = puVar9;
  puStack_78 = puVar4;
  ppuStack_70 = &puStack_40;
  if (puVar6 < (uint *)0x4) {
    func_0x000107c31940(auStack_98,&UNK_10f581226);
    FUN_10983e7c0(auStack_98);
  }
  else if (puVar10 < (uint *)(ulong)*puVar5) {
    func_0x000107c31940(auStack_98,&UNK_10f581235);
    FUN_10983e7c0(auStack_98);
  }
  else if (*puVar5 == 0) {
    if (puVar6 == (uint *)0x4) goto LAB_109842770;
    func_0x000107c31940(auStack_98,&UNK_10f581246);
    FUN_10983e7c0(auStack_98);
  }
  else {
    FUN_1098419cc();
    if (puVar6 == (uint *)0x4) {
      return;
    }
    func_0x000107c31940(auStack_98,&UNK_10f5810b6);
    FUN_10983e7c0(auStack_98);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1098427dc);
  (*pcVar3)();
}



/* Entry: 1098426f4; end: 109842803;  */

void FUN_1098426f4(uint *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 *param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uStack_40;
  undefined1 auStack_38 [24];
  
  if (param_2 == 0) {
LAB_109842770:
    param_5[1] = *param_5;
    return;
  }
  if (param_2 < 4) {
    func_0x000107c31940(auStack_38,&UNK_10f581226);
    FUN_10983e7c0(auStack_38);
  }
  else {
    uVar1 = *param_1;
    if (param_3 < uVar1) {
      func_0x000107c31940(auStack_38,&UNK_10f581235,param_3,(ulong)uVar1,param_4);
      FUN_10983e7c0(auStack_38);
    }
    else if (uVar1 == 0) {
      if (param_2 == 4) goto LAB_109842770;
      func_0x000107c31940(auStack_38,&UNK_10f581246,param_3,0,param_4);
      FUN_10983e7c0(auStack_38);
    }
    else {
      uStack_40 = 4;
      FUN_1098419cc(param_1,param_2,&uStack_40);
      if (uStack_40 == param_2) {
        return;
      }
      func_0x000107c31940(auStack_38,&UNK_10f5810b6);
      FUN_10983e7c0(auStack_38);
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098427dc);
  (*pcVar2)();
}



/* Entry: 109842804; end: 109842877;  */

undefined2 FUN_109842804(long param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined2 **)(param_1 + 8);
  if (1 < (ulong)(*(long *)(param_1 + 0x10) - (long)puVar1)) {
    uVar2 = *puVar1;
    *(undefined2 **)(param_1 + 8) = puVar1 + 1;
    return uVar2;
  }
  func_0x000107c31940(auStack_38,&UNK_10f581077);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10984285c);
  (*pcVar3)();
}



/* Entry: 109842878; end: 109842e2b;  */

void FUN_109842878(uint param_1,long param_2,ulong param_3,uint param_4,uint *param_5,long param_6,
                  long *param_7)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  char *pcVar17;
  int *piVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  ulong uVar27;
  long unaff_x25;
  ulong uVar28;
  long unaff_x26;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined4 auStack_130 [31];
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  uint auStack_78 [2];
  undefined1 auStack_70 [16];
  
  if (6 < param_1 - 1) {
    func_0x000107c31940(auStack_130,&UNK_10f581332);
    FUN_10983e7c0(auStack_130);
LAB_109842dd4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x109842dd8);
    (*pcVar5)();
  }
  if ((*param_5 >> (ulong)(param_1 & 0x1f) & 1) == 0) {
    func_0x000107c31940(auStack_130,&UNK_10f5813be);
    FUN_10983e7c0(auStack_130);
    goto LAB_109842dd4;
  }
  if ((int)param_1 < 4) {
    if (param_1 == 1) {
      if ((char)param_5[2] == '\x01') {
        uVar27 = (ulong)param_4;
        FUN_1098426f4(param_2,param_3,uVar27 + 7 >> 3,param_6,param_6 + 0x668);
        lVar25 = *(long *)(param_6 + 0x668);
        if (*(long *)(param_6 + 0x670) - lVar25 == uVar27 + 7 >> 3) {
          func_0x000108a5942c(param_7,uVar27);
          if (param_4 == 0) {
            return;
          }
          uVar28 = 0;
          lVar21 = *param_7;
          do {
            *(uint *)(lVar21 + uVar28 * 4) =
                 *(byte *)(lVar25 + (uVar28 >> 3)) >> (ulong)((uint)uVar28 & 7) & 1;
            uVar28 = uVar28 + 1;
          } while (uVar27 != uVar28);
          return;
        }
        func_0x000107c31940(auStack_130,&UNK_10f581423);
        FUN_10983e7c0(auStack_130);
      }
      else {
        func_0x000107c31940(auStack_130,&UNK_10f5813f2);
        FUN_10983e7c0(auStack_130);
      }
    }
    else {
      if (param_1 != 2) {
        plVar2 = (long *)(param_6 + 0x650);
        func_0x0001074287b0(plVar2,(ulong)param_4);
        if (param_4 == 0) {
          lVar25 = *plVar2;
        }
        else {
          func_0x00010984220c(auStack_a8,param_2,param_3);
          _memset_pattern16(auStack_130,&UNK_10dfd94a0,0x84);
          lVar21 = 0;
          uStack_b0 = (long *)CONCAT44(0x21,(undefined4)uStack_b0);
          do {
            puVar12 = auStack_130;
            FUN_1098420e0(puVar12,auStack_a8);
            uVar8 = (uint)puVar12;
            if (1 < uVar8) {
              uVar9 = (uint)auStack_a8;
              func_0x000109842198();
              uVar8 = uVar9 | 1 << (ulong)(uVar8 - 1 & 0x1f);
            }
            lVar25 = *plVar2;
            *(uint *)(lVar25 + lVar21) = uVar8;
            lVar21 = lVar21 + 4;
          } while ((ulong)param_4 * 4 - lVar21 != 0);
        }
LAB_109842c54:
        FUN_109842e2c(lVar25,*(long *)(param_6 + 0x658) - lVar25 >> 2,(char)param_5[1],param_7);
        return;
      }
      if (*(byte *)((long)param_5 + 5) - 1 < 4) {
        FUN_1098412ec(param_2,param_3,param_4,*(byte *)((long)param_5 + 5),param_6,param_6 + 0x650);
        puVar13 = *(uint **)(param_6 + 0x650);
        goto LAB_109842c90;
      }
      func_0x000107c31940(auStack_130,&UNK_10f581446);
      FUN_10983e7c0(auStack_130);
    }
    goto LAB_109842dd4;
  }
  if ((int)param_1 < 6) {
    if (param_1 != 4) {
      FUN_10983e758(&stack0xffffffffffffffa8,param_2,param_2 + param_3);
      iVar6 = (int)&stack0xffffffffffffffa8;
      FUN_10983ec18();
      iVar7 = (int)&stack0xffffffffffffffa8;
      FUN_10983ed00();
      if (iVar7 - 1U < 4) {
        FUN_10983ec8c(&stack0xffffffffffffffa8,unaff_x25 - unaff_x26);
        FUN_1098412ec();
        func_0x000108a5942c(param_7,*(long *)(param_6 + 0x658) - *(long *)(param_6 + 0x650) >> 2);
        lVar25 = *(long *)(param_6 + 0x658) - (long)*(int **)(param_6 + 0x650);
        if (lVar25 != 0) {
          lVar25 = lVar25 >> 2;
          piVar18 = *(int **)(param_6 + 0x650);
          piVar22 = (int *)*param_7;
          do {
            *piVar22 = *piVar18 + iVar6;
            lVar25 = lVar25 + -1;
            piVar18 = piVar18 + 1;
            piVar22 = piVar22 + 1;
          } while (lVar25 != 0);
        }
        FUN_10983ed70(&stack0xffffffffffffffa8);
        return;
      }
      func_0x000107c31940(auStack_70,&UNK_10f581001);
      FUN_10983e7c0(auStack_70);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1098412d0);
      (*pcVar5)();
    }
    if (*(byte *)((long)param_5 + 6) - 1 < 0x1f) {
      bVar4 = *(byte *)((long)param_5 + 7);
      if (bVar4 == 0) {
        func_0x000107c31940(auStack_130,&UNK_10f5814b9);
        FUN_10983e7c0(auStack_130);
      }
      else {
        uVar8 = 0;
        if (bVar4 != 0) {
          uVar8 = param_4 / bVar4;
        }
        uVar27 = (ulong)uVar8;
        if (param_4 == uVar8 * bVar4) {
          lVar25 = (uVar27 + 7 >> 3) * (ulong)(uint)*(byte *)((long)param_5 + 6);
          if (param_3 == lVar25 * (ulong)bVar4) {
            auStack_130[0] = 0;
            func_0x0001098425e8((long *)(param_6 + 0x650),param_4,auStack_130);
            if (*(char *)((long)param_5 + 7) != '\0') {
              uVar28 = 0;
              do {
                FUN_10984068c(param_2 + uVar28 * lVar25,uVar27,*(undefined1 *)((long)param_5 + 6),
                              *(long *)(param_6 + 0x650) + uVar28 * uVar27 * 4);
                uVar28 = uVar28 + 1;
              } while (uVar28 < *(byte *)((long)param_5 + 7));
            }
            lVar25 = *(long *)(param_6 + 0x650);
            goto LAB_109842c54;
          }
          func_0x000107c31940(auStack_130,&UNK_10f5814fc);
          FUN_10983e7c0(auStack_130);
        }
        else {
          func_0x000107c31940(auStack_130,&UNK_10f5814d4);
          FUN_10983e7c0(auStack_130);
        }
      }
    }
    else {
      func_0x000107c31940(auStack_130,&UNK_10f581481);
      FUN_10983e7c0(auStack_130);
    }
    goto LAB_109842dd4;
  }
  if (param_1 != 6) {
    puVar3 = (undefined8 *)(param_6 + 0x650);
    func_0x0001074287b0(puVar3,(ulong)param_4);
    if (param_4 == 0) {
      puVar13 = (uint *)*puVar3;
    }
    else {
      func_0x00010984220c(auStack_a8,param_2,param_3);
      _memset_pattern16(auStack_130,&UNK_10dfd94a0,0x84);
      uVar31 = 0;
      uVar30 = 0;
      uVar28 = 0;
      uVar27 = 0;
      uStack_b0 = (long *)CONCAT44(0x21,(undefined4)uStack_b0);
      do {
        uVar8 = (uint)uVar31;
        puVar12 = auStack_130;
        FUN_1098420e0(puVar12,auStack_a8);
        uVar9 = (uint)puVar12;
        if (1 < uVar9) {
          uVar9 = uVar9 - 1;
          if ((int)uVar8 < (int)uVar9) {
            uVar16 = uVar28;
            if (uVar28 <= param_3) {
              uVar16 = param_3;
            }
            lVar25 = -uVar28;
            do {
              if (-lVar25 == uVar16) {
                func_0x000107c31940(auStack_80,&UNK_10f58113a);
                FUN_10983e7c0();
                goto LAB_109842dd4;
              }
              uVar30 = (ulong)*(byte *)(param_3 + param_2 + -1 + lVar25) | uVar30 << 8;
              uVar8 = (int)uVar31 + 8;
              uVar31 = (ulong)uVar8;
              lVar25 = lVar25 + -1;
            } while ((int)uVar8 < (int)uVar9);
            uVar28 = -lVar25;
          }
          uVar31 = (ulong)(uVar8 - uVar9);
          uVar9 = 1 << (ulong)(uVar9 & 0x1f) |
                  (uint)(uVar30 >> (uVar31 & 0x3f)) &
                  ((uint)(-1L << ((ulong)uVar9 & 0x3f)) ^ 0xffffffff);
        }
        puVar13 = (uint *)*puVar3;
        puVar13[uVar27] = uVar9;
        uVar27 = uVar27 + 1;
      } while (uVar27 != param_4);
      if (param_3 < lStack_98 + uVar28) {
        func_0x000107c31940(auStack_80,&UNK_10f581597);
        FUN_10983e7c0();
        goto LAB_109842dd4;
      }
    }
LAB_109842c90:
    lVar25 = *(long *)(param_6 + 0x658) - (long)puVar13 >> 2;
    uVar8 = param_5[1];
    func_0x000108a5942c(param_7);
    if ((char)uVar8 == '\x01') {
      if (lVar25 != 0) {
        puVar19 = (uint *)*param_7;
        do {
          *puVar19 = -(*puVar13 & 1) ^ *puVar13 >> 1;
          lVar25 = lVar25 + -1;
          puVar19 = puVar19 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar25 != 0);
      }
    }
    else if (lVar25 != 0) {
      puVar19 = (uint *)*param_7;
      do {
        if ((int)*puVar13 < 0) {
          func_0x000107c31940(&stack0xffffffffffffffb8,&UNK_10f581550);
          FUN_10983e7c0(&stack0xffffffffffffffb8);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109842ed0);
          (*pcVar5)();
        }
        *puVar19 = *puVar13;
        lVar25 = lVar25 + -1;
        puVar19 = puVar19 + 1;
        puVar13 = puVar13 + 1;
      } while (lVar25 != 0);
    }
    return;
  }
  FUN_10983e758(auStack_a8,param_2,param_2 + param_3);
  iVar6 = (int)auStack_a8;
  FUN_10983ec18();
  puVar10 = auStack_a8;
  FUN_10983ed00();
  uStack_b4 = (uint)auStack_a8;
  FUN_10983ed00();
  puVar26 = auStack_a8;
  FUN_10983ec18();
  uVar27 = lStack_98 - lStack_a0;
  if (uVar27 < ((ulong)puVar26 & 0xffffffff)) {
    func_0x000107c31940(auStack_78,&UNK_10f58102c);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  uVar31 = (ulong)puVar26 & 0xffffffff;
  uVar28 = uVar27 - uVar31;
  if (uVar28 >> 0x20 != 0) {
    func_0x000107c31940(auStack_78,&UNK_10f58105c);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  uStack_b0 = param_7;
  if (0x1e < (uint)puVar10 - 1) {
    func_0x000107c31940(auStack_78,&UNK_10f5811c9);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  uVar29 = (ulong)param_4;
  uVar16 = uVar29 + 7 >> 3;
  lVar25 = uVar16 * ((ulong)puVar10 & 0xffffffff);
  uVar30 = uVar31;
  FUN_10983ec8c(auStack_a8);
  if (uVar30 == 0) {
    if (lVar25 != 0) {
      func_0x000107c31940(auStack_78,&UNK_10f5811fb);
      FUN_10983e7c0(auStack_78);
      goto LAB_10984197c;
    }
    *(undefined8 *)(param_6 + 0x670) = *(undefined8 *)(param_6 + 0x668);
  }
  else {
    FUN_1098426f4();
    if (*(long *)(param_6 + 0x670) - *(long *)(param_6 + 0x668) != lVar25) {
      func_0x000107c31940(auStack_78,&UNK_10f58120c);
      FUN_10983e7c0(auStack_78);
      goto LAB_10984197c;
    }
  }
  auStack_78[0] = 0;
  func_0x0001098425e8(param_6 + 0x650,uVar29,auStack_78);
  FUN_10984068c(*(undefined8 *)(param_6 + 0x668),uVar29,puVar10,*(undefined8 *)(param_6 + 0x650));
  uVar8 = uStack_b4;
  if (uVar27 == uVar31) goto LAB_1098417dc;
  if (uStack_b4 == 0) {
    func_0x000107c31940(auStack_78,&DAT_10f6842c6);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  if ((uStack_b4 >> 7 & 1) == 0) {
    func_0x000107c31940(auStack_78,&UNK_10f581255);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  FUN_10983ec8c(auStack_a8);
  uVar9 = uVar8 & 0x3f;
  puVar26 = (undefined1 *)(ulong)uVar9;
  if (uVar28 == 0) {
    uVar14 = *(undefined8 *)(param_6 + 0x668);
    *(undefined8 *)(param_6 + 0x670) = uVar14;
    uVar15 = uVar14;
  }
  else {
    FUN_1098426f4();
    uVar14 = *(undefined8 *)(param_6 + 0x668);
    uVar15 = *(undefined8 *)(param_6 + 0x670);
  }
  FUN_10983e758(auStack_90,uVar14,uVar15);
  if (uVar9 == 0) {
    puVar26 = auStack_90;
    FUN_10983ed00();
  }
  if (0x1f < (uint)puVar26) {
    func_0x000107c31940(auStack_78,&UNK_10f58127d);
    FUN_10983e7c0(auStack_78);
    goto LAB_10984197c;
  }
  plVar2 = (long *)(param_6 + 0x680);
  puVar11 = auStack_90;
  if (uVar8 < 0xc0) {
    FUN_10983ec8c(puVar11,uVar16);
    FUN_10925f784(plVar2,puVar11,puVar11 + uVar16,uVar16);
    pcVar17 = *(char **)(param_6 + 0x680);
    if (pcVar17 == *(char **)(param_6 + 0x688)) goto LAB_1098416fc;
    uVar27 = 0;
    do {
      if (*pcVar17 != '\0') {
        uVar27 = uVar27 + (byte)POPCOUNT(*pcVar17);
      }
      pcVar17 = pcVar17 + 1;
    } while (pcVar17 != *(char **)(param_6 + 0x688));
LAB_1098416d8:
    if (((uint)puVar26 == 0) && (uVar27 != 0)) {
      func_0x000107c31940(auStack_78,&UNK_10f5812dc);
      FUN_10983e7c0(auStack_78);
      goto LAB_10984197c;
    }
  }
  else {
    FUN_109842804();
    auStack_78[0] = auStack_78[0] & 0xffffff00;
    func_0x000108a39c34(plVar2,uVar16,auStack_78);
    if ((int)puVar11 != 0) {
      uVar27 = (ulong)puVar11 & 0xffffffff;
      uVar28 = uVar27;
      do {
        puVar11 = auStack_90;
        FUN_109842804();
        if (param_4 <= (uint)puVar11) {
          func_0x000107c31940(auStack_78,&UNK_10f581296);
          FUN_10983e7c0(auStack_78);
          goto LAB_10984197c;
        }
        uVar8 = 1 << (ulong)((uint)puVar11 & 7);
        uVar31 = ((ulong)puVar11 & 0xffffffff) >> 3;
        bVar4 = *(byte *)(*plVar2 + uVar31);
        if ((uVar8 & bVar4) != 0) {
          func_0x000107c31940(auStack_78,&UNK_10f5812be);
          FUN_10983e7c0(auStack_78);
          goto LAB_10984197c;
        }
        *(byte *)(*plVar2 + uVar31) = bVar4 | (byte)uVar8;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
      goto LAB_1098416d8;
    }
LAB_1098416fc:
    uVar27 = 0;
  }
  puVar11 = auStack_90;
  FUN_10983ec8c(puVar11,(uVar27 + 7 >> 3) * ((ulong)puVar26 & 0xffffffff));
  auStack_78[0] = 0;
  func_0x0001098425e8((long *)(param_6 + 0x698),uVar27,auStack_78);
  FUN_10984068c(puVar11,uVar27,puVar26,*(undefined8 *)(param_6 + 0x698));
  lVar21 = *(long *)(param_6 + 0x650);
  lVar25 = *(long *)(param_6 + 0x658) - lVar21;
  if (lVar25 == 0) {
    uVar27 = 0;
    lVar20 = *(long *)(param_6 + 0x6a0);
  }
  else {
    uVar28 = 0;
    uVar27 = 0;
    lVar23 = *(long *)(param_6 + 0x680);
    lVar20 = *(long *)(param_6 + 0x6a0);
    lVar24 = *(long *)(param_6 + 0x698);
    do {
      if ((*(byte *)(lVar23 + (uVar28 >> 3)) >> (ulong)((uint)uVar28 & 7) & 1) != 0) {
        if ((ulong)(lVar20 - lVar24 >> 2) <= uVar27) {
          func_0x000107c31940(auStack_78,&UNK_10f581301);
          FUN_10983e7c0(auStack_78);
          goto LAB_10984197c;
        }
        lVar1 = uVar27 * 4;
        uVar27 = uVar27 + 1;
        *(uint *)(lVar21 + uVar28 * 4) =
             *(uint *)(lVar21 + uVar28 * 4) |
             *(int *)(lVar24 + lVar1) << (ulong)((uint)puVar10 & 0x1f);
      }
      uVar28 = uVar28 + 1;
    } while (lVar25 >> 2 != uVar28);
  }
  if (uVar27 == lVar20 - *(long *)(param_6 + 0x698) >> 2) {
    FUN_10983ed70(auStack_90);
LAB_1098417dc:
    plVar2 = uStack_b0;
    func_0x000108a5942c(uStack_b0,*(long *)(param_6 + 0x658) - *(long *)(param_6 + 0x650) >> 2);
    lVar25 = *(long *)(param_6 + 0x658) - (long)*(int **)(param_6 + 0x650);
    if (lVar25 != 0) {
      lVar25 = lVar25 >> 2;
      piVar18 = *(int **)(param_6 + 0x650);
      piVar22 = (int *)*plVar2;
      do {
        *piVar22 = *piVar18 + iVar6;
        lVar25 = lVar25 + -1;
        piVar18 = piVar18 + 1;
        piVar22 = piVar22 + 1;
      } while (lVar25 != 0);
    }
    FUN_10983ed70(auStack_a8);
    return;
  }
  func_0x000107c31940(auStack_78,&UNK_10f581319);
  FUN_10983e7c0(auStack_78);
LAB_10984197c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109841980);
  (*pcVar5)();
}



/* Entry: 109842e2c; end: 109842eeb;  */

void FUN_109842e2c(uint *param_1,long param_2,int param_3,undefined8 *param_4)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_48 [24];
  
  func_0x000108a5942c(param_4);
  if (param_3 == 1) {
    if (param_2 != 0) {
      puVar2 = (uint *)*param_4;
      do {
        *puVar2 = -(*param_1 & 1) ^ *param_1 >> 1;
        param_2 = param_2 + -1;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
  }
  else if (param_2 != 0) {
    puVar2 = (uint *)*param_4;
    do {
      if ((int)*param_1 < 0) {
        func_0x000107c31940(auStack_48,&UNK_10f581550);
        FUN_10983e7c0(auStack_48);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109842ed0);
        (*pcVar1)();
      }
      *puVar2 = *param_1;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}



/* Entry: 109842eec; end: 109843093;  */

int FUN_109842eec(undefined8 param_1,undefined8 param_2,uint param_3,byte param_4,long param_5,
                 undefined8 *param_6,ulong param_7)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [24];
  
  if (param_7 != param_3) {
    func_0x000107c31940(auStack_58,&UNK_10f581535);
    FUN_10983e7c0(auStack_58);
LAB_109843070:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109843074);
    (*pcVar2)();
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1098426f4(param_1,param_2,param_7 + 7 >> 3,param_5,param_5 + 0x668);
    pbVar4 = *(byte **)(param_5 + 0x668);
    if (*(long *)(param_5 + 0x670) - (long)pbVar4 != param_7 + 7 >> 3) {
      func_0x000107c31940(auStack_58,&UNK_10f581423);
      FUN_10983e7c0(auStack_58);
      goto LAB_109843070;
    }
    uVar5 = (ulong)(param_3 >> 3);
    if (param_3 < 8) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      pbVar6 = pbVar4;
      puVar8 = param_6;
      uVar9 = uVar5;
      do {
        bVar1 = *pbVar6;
        uVar10 = *puVar8;
        *puVar8 = CONCAT17(param_4 & ~-((bVar1 & 0x80) == 0) | (byte)((ulong)uVar10 >> 0x38),
                           CONCAT16(param_4 & ~-((bVar1 & 0x40) == 0) |
                                    (byte)((ulong)uVar10 >> 0x30),
                                    CONCAT15(param_4 & ~-((bVar1 & 0x20) == 0) |
                                             (byte)((ulong)uVar10 >> 0x28),
                                             CONCAT14(param_4 & ~-((bVar1 & 0x10) == 0) |
                                                      (byte)((ulong)uVar10 >> 0x20),
                                                      CONCAT13(param_4 & ~-((bVar1 & 8) == 0) |
                                                               (byte)((ulong)uVar10 >> 0x18),
                                                               CONCAT12(param_4 & ~-((bVar1 & 4) ==
                                                                                    0) |
                                                                        (byte)((ulong)uVar10 >> 0x10
                                                                              ),CONCAT11(param_4 & ~
                                                  -((bVar1 & 2) == 0) | (byte)((ulong)uVar10 >> 8),
                                                  param_4 & ~-((bVar1 & 1) == 0) | (byte)uVar10)))))
                                   ));
        iVar3 = (uint)(byte)POPCOUNT(bVar1) + iVar3;
        uVar9 = uVar9 - 1;
        pbVar6 = pbVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
    }
    if (param_7 != uVar5 * 8) {
      lVar7 = 0;
      do {
        bVar1 = pbVar4[uVar5] >> (ulong)((uint)lVar7 & 0x1f);
        *(byte *)((long)param_6 + lVar7 + uVar5 * 8) =
             -(bVar1 & 1) & param_4 | *(byte *)((long)param_6 + lVar7 + uVar5 * 8);
        iVar3 = (bVar1 & 1) + iVar3;
        lVar7 = lVar7 + 1;
      } while (param_7 + uVar5 * -8 != lVar7);
    }
  }
  return iVar3;
}



/* Entry: 109843094; end: 109843127;  */

void FUN_109843094(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  FUN_10983ed00();
  uVar2 = param_1;
  FUN_10983ec18(param_1);
  uVar2 = uVar2 & 0xffffffff;
  FUN_10983ec8c(param_1,uVar2);
  FUN_109842878(uVar1,param_1,uVar2,param_2,param_3,param_4,param_5);
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = (char)uVar1;
  }
  return;
}



/* Entry: 109843128; end: 109843397;  */

void FUN_109843128(ulong param_1,uint param_2,int param_3,uint param_4,float *param_5,float *param_6
                  ,ulong param_7,long param_8)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined2 uStack_81;
  
  if (param_7 == param_2) {
    if (param_3 - 1U < 4) {
      if (param_4 - 1 < 0x18) {
        if (param_2 != 0) {
          iVar10 = 0;
          do {
            uVar4 = param_1;
            FUN_10983ed00(param_1);
            uVar6 = param_1;
            FUN_10983ec18(param_1);
            uVar6 = uVar6 & 0xffffffff;
            uVar5 = param_1;
            FUN_10983ec8c(param_1,uVar6);
            uStack_82 = 0;
            uStack_81 = 1;
            uStack_88 = 0xec;
            _uStack_84 = CONCAT11((char)(param_4 + 8 >> 3),1);
            FUN_109842878(uVar4,uVar5,uVar6,param_2,&uStack_88,param_8,param_8 + 0x6b0);
            if (param_7 != *(long *)(param_8 + 0x6b8) - (long)*(int **)(param_8 + 0x6b0) >> 2) {
              func_0x000107c31940(&uStack_88,&UNK_10f581614);
              FUN_10983e7c0(&uStack_88);
              goto LAB_10984336c;
            }
            pfVar9 = param_5 + 3;
            if (((iVar10 != 3) && (pfVar9 = param_5 + 2, iVar10 != 2)) &&
               (pfVar9 = param_5, iVar10 == 1)) {
              pfVar9 = param_5 + 1;
            }
            lVar8 = 0;
            fVar11 = *pfVar9;
            piVar7 = *(int **)(param_8 + 0x6b0);
            pfVar9 = param_6;
            uVar4 = param_7;
            do {
              pfVar2 = param_6 + lVar8 * 4 + 3;
              if (iVar10 != 3) {
                pfVar2 = pfVar9;
              }
              pfVar1 = param_6 + lVar8 * 4 + 2;
              if (iVar10 != 2) {
                pfVar1 = pfVar2;
              }
              pfVar2 = param_6 + lVar8 * 4 + 1;
              if (iVar10 != 1) {
                pfVar2 = pfVar1;
              }
              *pfVar2 = *pfVar2 + (fVar11 / (float)(uint)~(-1 << (ulong)(param_4 & 0x1f))) *
                                  (float)*piVar7;
              lVar8 = lVar8 + 1;
              pfVar9 = pfVar9 + 4;
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 1;
            } while (uVar4 != 0);
            iVar10 = iVar10 + 1;
          } while (iVar10 != param_3);
        }
        return;
      }
      func_0x000107c31940(&uStack_88,&UNK_10f5815f1);
      FUN_10983e7c0(&uStack_88);
    }
    else {
      func_0x000107c31940(&uStack_88,&UNK_10f5815da);
      FUN_10983e7c0(&uStack_88);
    }
  }
  else {
    func_0x000107c31940(&uStack_88,&UNK_10f5815c0);
    FUN_10983e7c0(&uStack_88);
  }
LAB_10984336c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109843370);
  (*pcVar3)();
}



/* Entry: 109843398; end: 1098435e3;  */

void FUN_109843398(ulong param_1,ulong param_2,uint param_3,int param_4,undefined8 param_5,
                  ulong param_6,long param_7,long *param_8)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  int *piVar8;
  long lVar9;
  float *pfVar10;
  int iVar11;
  undefined4 uStack_98;
  short sStack_94;
  undefined1 uStack_92;
  undefined2 uStack_91;
  
  if (param_6 == (param_2 & 0xffffffff)) {
    if (param_4 == 1) {
      func_0x000107c31940(&uStack_98,&UNK_10f58162a);
      FUN_10983e7c0(&uStack_98);
    }
    else {
      if (param_3 - 1 < 0x18) {
        if ((int)param_2 != 0) {
          FUN_1096b5198(param_8,param_6);
          iVar11 = 0;
          do {
            uVar4 = param_1;
            FUN_10983ed00(param_1);
            uVar6 = param_1;
            FUN_10983ec18(param_1);
            uVar6 = uVar6 & 0xffffffff;
            uVar5 = param_1;
            FUN_10983ec8c(param_1,uVar6);
            uStack_92 = 0;
            uStack_91 = 1;
            uStack_98 = 0xec;
            sStack_94 = (ushort)(byte)(param_3 + 7 >> 3) << 8;
            FUN_109842878(uVar4,uVar5,uVar6,param_2,&uStack_98,param_7,param_7 + 0x6b0);
            if (param_6 != *(long *)(param_7 + 0x6b8) - (long)*(int **)(param_7 + 0x6b0) >> 2) {
              func_0x000107c31940(&uStack_98,&UNK_10f581614);
              FUN_10983e7c0(&uStack_98);
              goto LAB_1098435b8;
            }
            lVar9 = 0;
            pfVar7 = (float *)*param_8;
            piVar8 = *(int **)(param_7 + 0x6b0);
            pfVar10 = pfVar7;
            uVar4 = param_6;
            do {
              pfVar1 = pfVar7 + lVar9 * 3 + 2;
              if (iVar11 != 2) {
                pfVar1 = pfVar10;
              }
              pfVar2 = pfVar7 + lVar9 * 3 + 1;
              if (iVar11 != 1) {
                pfVar2 = pfVar1;
              }
              *pfVar2 = (1.0 / (float)(uint)~(-1 << (ulong)(param_3 & 0x1f))) * (float)*piVar8 * 2.0
                        + -1.0;
              lVar9 = lVar9 + 1;
              pfVar10 = pfVar10 + 3;
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 1;
            } while (uVar4 != 0);
            iVar11 = iVar11 + 1;
          } while (iVar11 != 3);
          FUN_1098435e4(param_4,pfVar7,param_5,param_2);
        }
        return;
      }
      func_0x000107c31940(&uStack_98,&UNK_10f5815f1);
      FUN_10983e7c0(&uStack_98);
    }
  }
  else {
    func_0x000107c31940(&uStack_98,&UNK_10f5815c0);
    FUN_10983e7c0(&uStack_98);
  }
LAB_1098435b8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1098435bc);
  (*pcVar3)();
}



/* Entry: 1098435e4; end: 109843a3f;  */

void FUN_1098435e4(int param_1,long param_2,undefined1 (*param_3) [16],uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  ulong uVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 extraout_d1;
  undefined8 extraout_var;
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  float fVar19;
  ulong uVar20;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_68 [24];
  undefined1 auVar15 [16];
  undefined1 auVar13 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar29 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar8 = (ulong)param_4;
      pfVar9 = (float *)(param_2 + 8);
      do {
        fVar30 = pfVar9[-2];
        auVar46._0_8_ = *(ulong *)(pfVar9 + -1);
        auVar46._8_8_ = 0;
        fVar33 = fVar30 * fVar30 + (float)auVar46._0_8_ * (float)auVar46._0_8_ + *pfVar9 * *pfVar9;
        if (1.0 <= fVar33) {
          fVar33 = 1.0 / SQRT(fVar33);
          fVar30 = fVar30 * fVar33;
          auVar51._12_4_ = 0;
          auVar51._0_12_ = ZEXT812(0x3f800000);
          auVar46 = NEON_ext(auVar51,auVar46,0xc,1);
          auVar52._0_4_ = fVar33 * 0.0;
          auVar52._4_4_ = auVar46._4_4_ * fVar33;
          auVar52._8_4_ = auVar46._8_4_ * fVar33;
          auVar52._12_4_ = fVar33 * 0.0;
        }
        else {
          auVar48._12_4_ = 0;
          auVar48._0_12_ = ZEXT812(0x3f800000);
          auVar46 = NEON_ext(auVar48,auVar46,0xc,1);
          auVar23._4_12_ = auVar46._4_12_;
          auVar23._0_4_ = SQRT(1.0 - fVar33);
          auVar52._0_12_ = auVar23._0_12_;
          auVar52._12_4_ = SQRT(1.0 - fVar33);
        }
        pfVar9 = pfVar9 + 3;
        fVar33 = auVar52._0_4_;
        fVar41 = auVar52._8_4_;
        auVar46 = *param_3;
        fVar24 = auVar46._12_4_;
        auVar40._4_4_ = fVar24;
        auVar40._0_4_ = fVar24;
        auVar40._8_4_ = fVar24;
        auVar40._12_4_ = fVar24;
        auVar51 = NEON_ext(auVar40,auVar46,4,1);
        auVar48 = NEON_rev64(auVar52,4);
        fVar49 = auVar46._0_4_;
        fVar42 = auVar46._4_4_;
        fVar19 = auVar46._8_4_;
        auVar18._4_4_ = fVar33;
        auVar18._0_4_ = -fVar33;
        auVar18._8_4_ = -fVar41;
        auVar18._12_4_ = fVar41;
        auVar46 = NEON_ext(auVar18,auVar52,8,1);
        auVar46 = NEON_ext(auVar46,auVar46,4,1);
        *(float *)(*param_3 + 8) =
             (auVar51._8_4_ * auVar48._4_4_ + fVar19 * fVar30 + fVar42 * auVar46._8_4_) -
             fVar49 * fVar41;
        *(float *)(*param_3 + 0xc) =
             (auVar51._12_4_ * -auVar52._4_4_ + fVar24 * fVar30 + fVar42 * auVar46._12_4_) -
             fVar19 * auVar52._12_4_;
        *(float *)*param_3 =
             (auVar51._0_4_ * auVar48._0_4_ + fVar49 * fVar30 + fVar19 * auVar46._0_4_) -
             fVar42 * fVar33;
        *(float *)(*param_3 + 4) =
             (auVar51._4_4_ * fVar41 + fVar42 * fVar30 + fVar49 * auVar46._4_4_) -
             fVar19 * auVar52._4_4_;
        uVar8 = uVar8 - 1;
        param_3 = param_3 + 1;
      } while (uVar8 != 0);
    }
    else {
      if (param_1 != 2) {
LAB_109843a08:
        func_0x000107c31940(auStack_68,&UNK_10f580fdb);
        FUN_10983f6dc(auStack_68);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x109843a24);
        (*pcVar7)();
      }
      uVar8 = (ulong)param_4;
      pfVar9 = (float *)(param_2 + 8);
      do {
        fVar42 = *pfVar9;
        uVar20 = *(ulong *)(pfVar9 + -2);
        fVar30 = (float)uVar20;
        fVar30 = fVar30 * fVar30 + pfVar9[-1] * pfVar9[-1] + fVar42 * fVar42;
        fVar33 = 1.0 / SQRT(fVar30 + 1e-06);
        fVar30 = fVar30 * fVar33 * 1.5707964;
        uVar10 = 0;
        uVar11 = 0;
        uVar12 = 0;
        ___sincosf_stret();
        auVar13._8_8_ = extraout_var;
        auVar13._0_8_ = extraout_d1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar20;
        auVar3._4_4_ = uVar10;
        auVar3._0_4_ = fVar30;
        auVar3._8_4_ = uVar11;
        auVar3._12_4_ = uVar12;
        auVar46 = NEON_ext(auVar3,auVar6,0xc,1);
        fVar33 = fVar33 * fVar30;
        fVar30 = fVar42 * fVar33;
        fVar41 = auVar46._4_4_ * fVar33;
        fVar49 = auVar46._8_4_ * fVar33;
        fVar42 = fVar42 * fVar33;
        auVar46 = *param_3;
        fVar26 = auVar46._12_4_;
        auVar32._4_4_ = fVar26;
        auVar32._0_4_ = fVar26;
        auVar32._8_4_ = fVar26;
        auVar32._12_4_ = fVar26;
        auVar4._4_4_ = fVar41;
        auVar4._0_4_ = fVar30;
        auVar4._8_4_ = fVar49;
        auVar4._12_4_ = fVar42;
        auVar52 = NEON_rev64(auVar4,4);
        auVar51 = NEON_ext(auVar32,auVar46,4,1);
        fVar33 = (float)extraout_d1;
        fVar19 = auVar46._0_4_;
        fVar24 = auVar46._4_4_;
        fVar25 = auVar46._8_4_;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ = -fVar30;
        auVar16._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
        auVar16._0_8_ = auVar14._0_8_;
        auVar16._8_4_ = -fVar49;
        auVar15._8_8_ = auVar16._8_8_;
        auVar15._4_4_ = fVar30;
        auVar15._0_4_ = -fVar30;
        auVar17._0_12_ = auVar15._0_12_;
        auVar17._12_4_ = fVar49;
        auVar5._4_4_ = fVar41;
        auVar5._0_4_ = fVar30;
        auVar5._8_4_ = fVar49;
        auVar5._12_4_ = fVar42;
        auVar46 = NEON_ext(auVar17,auVar5,8,1);
        auVar46 = NEON_ext(auVar46,auVar46,4,1);
        *(float *)(*param_3 + 8) =
             (auVar51._8_4_ * auVar52._4_4_ + fVar25 * fVar33 + fVar24 * auVar46._8_4_) -
             fVar19 * fVar49;
        *(float *)(*param_3 + 0xc) =
             (auVar51._12_4_ * -fVar41 + fVar26 * fVar33 + fVar24 * auVar46._12_4_) -
             fVar25 * fVar42;
        *(float *)*param_3 =
             (auVar51._0_4_ * auVar52._0_4_ + fVar19 * fVar33 + fVar25 * auVar46._0_4_) -
             fVar24 * fVar30;
        *(float *)(*param_3 + 4) =
             (auVar51._4_4_ * fVar49 + fVar24 * fVar33 + fVar19 * auVar46._4_4_) - fVar25 * fVar41;
        pfVar9 = pfVar9 + 3;
        uVar8 = uVar8 - 1;
        param_3 = param_3 + 1;
      } while (uVar8 != 0);
    }
  }
  else if (param_1 == 3) {
    uVar8 = (ulong)param_4;
    pfVar9 = (float *)(param_2 + 8);
    do {
      fVar30 = *pfVar9;
      auVar43._0_8_ = *(ulong *)(pfVar9 + -2);
      auVar43._8_8_ = 0;
      fVar33 = 2.0 / ((float)auVar43._0_8_ * (float)auVar43._0_8_ + pfVar9[-1] * pfVar9[-1] +
                      fVar30 * fVar30 + 1.0);
      auVar2._12_4_ = 0;
      auVar2._0_12_ = ZEXT812(0x3f800000);
      auVar46 = NEON_ext(auVar2,auVar43,0xc,1);
      fVar42 = fVar33 + -1.0;
      auVar27._0_4_ = fVar30 * fVar33;
      auVar27._4_4_ = auVar46._4_4_ * fVar33;
      auVar27._8_4_ = auVar46._8_4_ * fVar33;
      auVar27._12_4_ = fVar30 * fVar33;
      auVar46 = *param_3;
      auVar35._0_4_ = -auVar27._0_4_;
      auVar35._4_4_ = -auVar27._4_4_;
      auVar35._8_4_ = -auVar27._8_4_;
      auVar35._12_4_ = -auVar27._12_4_;
      fVar49 = auVar46._12_4_;
      auVar47._4_4_ = fVar49;
      auVar47._0_4_ = fVar49;
      auVar47._8_4_ = fVar49;
      auVar47._12_4_ = fVar49;
      auVar52 = NEON_rev64(auVar27,4);
      auVar51 = NEON_ext(auVar47,auVar46,4,1);
      fVar30 = auVar46._0_4_;
      fVar33 = auVar46._4_4_;
      fVar41 = auVar46._8_4_;
      auVar36._4_12_ = auVar35._4_12_;
      auVar36._0_4_ = auVar35._0_4_;
      auVar38._0_8_ = auVar36._0_8_;
      auVar38._8_4_ = auVar35._8_4_;
      auVar38._12_4_ = auVar35._12_4_;
      auVar37._8_8_ = auVar38._8_8_;
      auVar37._4_4_ = auVar27._0_4_;
      auVar37._0_4_ = auVar35._0_4_;
      auVar39._0_12_ = auVar37._0_12_;
      auVar39._12_4_ = auVar27._8_4_;
      auVar46 = NEON_ext(auVar39,auVar27,8,1);
      auVar46 = NEON_ext(auVar46,auVar46,4,1);
      *(float *)(*param_3 + 8) =
           (auVar51._8_4_ * auVar52._4_4_ + fVar41 * fVar42 + fVar33 * auVar46._8_4_) -
           fVar30 * auVar27._8_4_;
      *(float *)(*param_3 + 0xc) =
           (auVar51._12_4_ * auVar35._4_4_ + fVar49 * fVar42 + fVar33 * auVar46._12_4_) -
           fVar41 * auVar27._12_4_;
      *(float *)*param_3 =
           (auVar51._0_4_ * auVar52._0_4_ + fVar30 * fVar42 + fVar41 * auVar46._0_4_) -
           fVar33 * auVar27._0_4_;
      *(float *)(*param_3 + 4) =
           (auVar51._4_4_ * auVar27._8_4_ + fVar33 * fVar42 + fVar30 * auVar46._4_4_) -
           fVar41 * auVar27._4_4_;
      pfVar9 = pfVar9 + 3;
      uVar8 = uVar8 - 1;
      param_3 = param_3 + 1;
    } while (uVar8 != 0);
  }
  else if (param_1 == 4) {
    uVar8 = (ulong)param_4;
    pfVar9 = (float *)(param_2 + 8);
    do {
      auVar21._0_8_ = *(ulong *)(pfVar9 + -2);
      auVar21._8_8_ = 0;
      fVar33 = *pfVar9;
      fVar30 = (float)auVar21._0_8_ * (float)auVar21._0_8_ + pfVar9[-1] * pfVar9[-1] +
               fVar33 * fVar33;
      if (2.0 <= fVar30) {
        auVar22 = ZEXT216(0);
        auVar46 = ZEXT816(0xbf800000);
      }
      else {
        fVar41 = SQRT(2.0 - fVar30);
        auVar46 = ZEXT416((uint)(1.0 - fVar30));
        auVar1._12_4_ = 0;
        auVar1._0_12_ = ZEXT812(0x40000000);
        auVar51 = NEON_ext(auVar1,auVar21,0xc,1);
        auVar22._0_4_ = fVar33 * fVar41;
        auVar22._4_4_ = auVar51._4_4_ * fVar41;
        auVar22._8_4_ = auVar51._8_4_ * fVar41;
        auVar22._12_4_ = fVar33 * fVar41;
      }
      pfVar9 = pfVar9 + 3;
      fVar30 = auVar22._0_4_;
      fVar33 = auVar22._8_4_;
      auVar51 = *param_3;
      fVar24 = auVar51._12_4_;
      auVar44._4_4_ = fVar24;
      auVar44._0_4_ = fVar24;
      auVar44._8_4_ = fVar24;
      auVar44._12_4_ = fVar24;
      auVar52 = NEON_ext(auVar44,auVar51,4,1);
      auVar48 = NEON_rev64(auVar22,4);
      fVar41 = auVar46._0_4_;
      fVar49 = auVar51._0_4_;
      fVar42 = auVar51._4_4_;
      fVar19 = auVar51._8_4_;
      auVar28._12_4_ = auVar46._12_4_;
      auVar28._8_4_ = -fVar33;
      auVar28._4_4_ = fVar30;
      auVar28._0_4_ = -fVar30;
      auVar29._0_12_ = auVar28._0_12_;
      auVar29._12_4_ = fVar33;
      auVar46 = NEON_ext(auVar29,auVar22,8,1);
      auVar46 = NEON_ext(auVar46,auVar46,4,1);
      *(float *)(*param_3 + 8) =
           (auVar52._8_4_ * auVar48._4_4_ + fVar19 * fVar41 + fVar42 * auVar46._8_4_) -
           fVar49 * fVar33;
      *(float *)(*param_3 + 0xc) =
           (auVar52._12_4_ * -auVar22._4_4_ + fVar24 * fVar41 + fVar42 * auVar46._12_4_) -
           fVar19 * auVar22._12_4_;
      *(float *)*param_3 =
           (auVar52._0_4_ * auVar48._0_4_ + fVar49 * fVar41 + fVar19 * auVar46._0_4_) -
           fVar42 * fVar30;
      *(float *)(*param_3 + 4) =
           (auVar52._4_4_ * fVar33 + fVar42 * fVar41 + fVar49 * auVar46._4_4_) -
           fVar19 * auVar22._4_4_;
      uVar8 = uVar8 - 1;
      param_3 = param_3 + 1;
    } while (uVar8 != 0);
  }
  else {
    if (param_1 != 5) goto LAB_109843a08;
    uVar8 = (ulong)param_4;
    pfVar9 = (float *)(param_2 + 8);
    do {
      fVar30 = *pfVar9;
      auVar45._0_8_ = *(ulong *)(pfVar9 + -2);
      auVar45._8_8_ = 0;
      fVar33 = ((float)auVar45._0_8_ * (float)auVar45._0_8_ + pfVar9[-1] * pfVar9[-1] +
               fVar30 * fVar30) * 0.17157288;
      fVar49 = (1.0 - fVar33) * 1.6568543;
      fVar41 = 1.0 / ((fVar33 + 1.0) * (fVar33 + 1.0));
      fVar33 = ((fVar33 + -6.0) * fVar33 + 1.0) * fVar41;
      auVar46 = NEON_ext(ZEXT416(0x3e2fb0cd),auVar45,0xc,1);
      auVar31._0_4_ = fVar30 * fVar49 * fVar41;
      auVar31._4_4_ = auVar46._4_4_ * fVar49 * fVar41;
      auVar31._8_4_ = auVar46._8_4_ * fVar49 * fVar41;
      auVar31._12_4_ = fVar30 * fVar49 * fVar41;
      auVar46 = *param_3;
      fVar42 = auVar46._12_4_;
      auVar50._4_4_ = fVar42;
      auVar50._0_4_ = fVar42;
      auVar50._8_4_ = fVar42;
      auVar50._12_4_ = fVar42;
      auVar52 = NEON_rev64(auVar31,4);
      auVar51 = NEON_ext(auVar50,auVar46,4,1);
      fVar30 = auVar46._0_4_;
      fVar41 = auVar46._4_4_;
      fVar49 = auVar46._8_4_;
      auVar34._4_4_ = auVar31._0_4_;
      auVar34._0_4_ = -auVar31._0_4_;
      auVar34._8_4_ = -auVar31._8_4_;
      auVar34._12_4_ = auVar31._8_4_;
      auVar46 = NEON_ext(auVar34,auVar31,8,1);
      auVar46 = NEON_ext(auVar46,auVar46,4,1);
      *(float *)(*param_3 + 8) =
           (auVar51._8_4_ * auVar52._4_4_ + fVar49 * fVar33 + fVar41 * auVar46._8_4_) -
           fVar30 * auVar31._8_4_;
      *(float *)(*param_3 + 0xc) =
           (auVar51._12_4_ * -auVar31._4_4_ + fVar42 * fVar33 + fVar41 * auVar46._12_4_) -
           fVar49 * auVar31._12_4_;
      *(float *)*param_3 =
           (auVar51._0_4_ * auVar52._0_4_ + fVar30 * fVar33 + fVar49 * auVar46._0_4_) -
           fVar41 * auVar31._0_4_;
      *(float *)(*param_3 + 4) =
           (auVar51._4_4_ * auVar31._8_4_ + fVar41 * fVar33 + fVar30 * auVar46._4_4_) -
           fVar49 * auVar31._4_4_;
      pfVar9 = pfVar9 + 3;
      uVar8 = uVar8 - 1;
      param_3 = param_3 + 1;
    } while (uVar8 != 0);
  }
  return;
}



/* Entry: 109843a40; end: 109843aa7;  */

void FUN_109843a40(undefined1 *param_1,undefined8 param_2,int param_3,int param_4,long param_5)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined2 uStack_16;
  undefined1 uStack_14;
  
  uStack_14 = 0;
  iVar1 = 7;
  if (param_3 != 0) {
    iVar1 = 8;
  }
  _uStack_1c = CONCAT26(0x100,CONCAT15((char)((uint)(iVar1 + param_4) >> 3),
                                       CONCAT14((char)param_3,0xec)));
  FUN_109842878(*param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),param_2,
                &uStack_1c,param_5,param_5 + 0x6b0);
  return;
}



/* Entry: 109843aa8; end: 109843c83;  */

void FUN_109843aa8(uint param_1,uint param_2,uint param_3,float *param_4,float *param_5,
                  ulong param_6,long param_7,ulong param_8)

{
  float *pfVar1;
  float *pfVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  float *pfVar8;
  ulong uVar9;
  float fVar10;
  undefined1 auStack_38 [24];
  
  if (param_6 == param_1) {
    if (param_2 - 1 < 4) {
      if (param_8 < param_2) {
        func_0x000107c31940(auStack_38,&UNK_10f58165b);
        FUN_10983e7c0(auStack_38);
      }
      else {
        if (param_3 - 1 < 0x18) {
          if (param_1 != 0) {
            uVar5 = 0;
            do {
              lVar6 = param_7 + uVar5 * 0x6c8;
              piVar7 = *(int **)(lVar6 + 0x6b0);
              if (param_6 != *(long *)(lVar6 + 0x6b8) - (long)piVar7 >> 2) {
                func_0x000107c31940(auStack_38,&UNK_10f581685);
                FUN_10983e7c0(auStack_38);
                goto LAB_109843c54;
              }
              iVar4 = (int)uVar5;
              pfVar8 = param_4 + 3;
              if (((iVar4 != 3) && (pfVar8 = param_4 + 2, iVar4 != 2)) &&
                 (pfVar8 = param_4, iVar4 == 1)) {
                pfVar8 = param_4 + 1;
              }
              lVar6 = 0;
              fVar10 = *pfVar8;
              pfVar8 = param_5;
              uVar9 = param_6;
              do {
                pfVar2 = param_5 + lVar6 * 4 + 3;
                if (iVar4 != 3) {
                  pfVar2 = pfVar8;
                }
                pfVar1 = param_5 + lVar6 * 4 + 2;
                if (iVar4 != 2) {
                  pfVar1 = pfVar2;
                }
                pfVar2 = param_5 + lVar6 * 4 + 1;
                if (iVar4 != 1) {
                  pfVar2 = pfVar1;
                }
                *pfVar2 = *pfVar2 + (fVar10 / (float)(uint)~(-1 << (ulong)(param_3 & 0x1f))) *
                                    (float)*piVar7;
                lVar6 = lVar6 + 1;
                pfVar8 = pfVar8 + 4;
                uVar9 = uVar9 - 1;
                piVar7 = piVar7 + 1;
              } while (uVar9 != 0);
              uVar5 = uVar5 + 1;
            } while (uVar5 != param_2);
          }
          return;
        }
        func_0x000107c31940(auStack_38,&UNK_10f5815f1);
        FUN_10983e7c0(auStack_38);
      }
    }
    else {
      func_0x000107c31940(auStack_38,&UNK_10f5815da);
      FUN_10983e7c0(auStack_38);
    }
  }
  else {
    func_0x000107c31940(auStack_38,&UNK_10f5815c0);
    FUN_10983e7c0(auStack_38);
  }
LAB_109843c54:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109843c58);
  (*pcVar3)();
}



/* Entry: 109843c84; end: 109843e87;  */

void FUN_109843c84(uint param_1,uint param_2,int param_3,undefined1 (*param_4) [16],ulong param_5,
                  long param_6,ulong param_7,long *param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  float *pfVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 extraout_d1;
  undefined8 extraout_var;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  float fVar25;
  ulong uVar26;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auStack_68 [24];
  undefined1 auVar21 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar35 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  if (param_5 == param_1) {
    if (param_7 < 3) {
      func_0x000107c31940(auStack_68,&UNK_10f58169f);
      FUN_10983e7c0(auStack_68);
    }
    else if (param_3 == 1) {
      func_0x000107c31940(auStack_68,&UNK_10f58162a);
      FUN_10983e7c0(auStack_68);
    }
    else {
      if (param_2 - 1 < 0x18) {
        if (param_1 == 0) {
          return;
        }
        FUN_1096b5198(param_8,param_5);
        lVar12 = 0;
        pfVar10 = (float *)*param_8;
        do {
          lVar13 = param_6 + lVar12 * 0x6c8;
          piVar14 = *(int **)(lVar13 + 0x6b0);
          if (param_5 != *(long *)(lVar13 + 0x6b8) - (long)piVar14 >> 2) {
            func_0x000107c31940(auStack_68,&UNK_10f581685);
            FUN_10983e7c0(auStack_68);
            goto LAB_109843e58;
          }
          lVar13 = 0;
          pfVar15 = pfVar10;
          uVar11 = param_5;
          do {
            pfVar1 = pfVar10 + lVar13 * 3 + 2;
            if ((int)lVar12 != 2) {
              pfVar1 = pfVar15;
            }
            pfVar2 = pfVar10 + lVar13 * 3 + 1;
            if ((int)lVar12 != 1) {
              pfVar2 = pfVar1;
            }
            *pfVar2 = (1.0 / (float)(uint)~(-1 << (ulong)(param_2 & 0x1f))) * (float)*piVar14 * 2.0
                      + -1.0;
            lVar13 = lVar13 + 1;
            pfVar15 = pfVar15 + 3;
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 1;
          } while (uVar11 != 0);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
        if (param_3 < 3) {
          if (param_3 == 0) {
            uVar11 = (ulong)param_1;
            pfVar10 = pfVar10 + 2;
            do {
              fVar36 = pfVar10[-2];
              auVar52._0_8_ = *(ulong *)(pfVar10 + -1);
              auVar52._8_8_ = 0;
              fVar39 = fVar36 * fVar36 + (float)auVar52._0_8_ * (float)auVar52._0_8_ +
                       *pfVar10 * *pfVar10;
              if (1.0 <= fVar39) {
                fVar39 = 1.0 / SQRT(fVar39);
                fVar36 = fVar36 * fVar39;
                auVar57._12_4_ = 0;
                auVar57._0_12_ = ZEXT812(0x3f800000);
                auVar52 = NEON_ext(auVar57,auVar52,0xc,1);
                auVar58._0_4_ = fVar39 * 0.0;
                auVar58._4_4_ = auVar52._4_4_ * fVar39;
                auVar58._8_4_ = auVar52._8_4_ * fVar39;
                auVar58._12_4_ = fVar39 * 0.0;
              }
              else {
                auVar54._12_4_ = 0;
                auVar54._0_12_ = ZEXT812(0x3f800000);
                auVar52 = NEON_ext(auVar54,auVar52,0xc,1);
                auVar29._4_12_ = auVar52._4_12_;
                auVar29._0_4_ = SQRT(1.0 - fVar39);
                auVar58._0_12_ = auVar29._0_12_;
                auVar58._12_4_ = SQRT(1.0 - fVar39);
              }
              pfVar10 = pfVar10 + 3;
              fVar39 = auVar58._0_4_;
              fVar47 = auVar58._8_4_;
              auVar52 = *param_4;
              fVar30 = auVar52._12_4_;
              auVar46._4_4_ = fVar30;
              auVar46._0_4_ = fVar30;
              auVar46._8_4_ = fVar30;
              auVar46._12_4_ = fVar30;
              auVar57 = NEON_ext(auVar46,auVar52,4,1);
              auVar54 = NEON_rev64(auVar58,4);
              fVar55 = auVar52._0_4_;
              fVar48 = auVar52._4_4_;
              fVar25 = auVar52._8_4_;
              auVar24._4_4_ = fVar39;
              auVar24._0_4_ = -fVar39;
              auVar24._8_4_ = -fVar47;
              auVar24._12_4_ = fVar47;
              auVar52 = NEON_ext(auVar24,auVar58,8,1);
              auVar52 = NEON_ext(auVar52,auVar52,4,1);
              *(float *)(*param_4 + 8) =
                   (auVar57._8_4_ * auVar54._4_4_ + fVar25 * fVar36 + fVar48 * auVar52._8_4_) -
                   fVar55 * fVar47;
              *(float *)(*param_4 + 0xc) =
                   (auVar57._12_4_ * -auVar58._4_4_ + fVar30 * fVar36 + fVar48 * auVar52._12_4_) -
                   fVar25 * auVar58._12_4_;
              *(float *)*param_4 =
                   (auVar57._0_4_ * auVar54._0_4_ + fVar55 * fVar36 + fVar25 * auVar52._0_4_) -
                   fVar48 * fVar39;
              *(float *)(*param_4 + 4) =
                   (auVar57._4_4_ * fVar47 + fVar48 * fVar36 + fVar55 * auVar52._4_4_) -
                   fVar25 * auVar58._4_4_;
              uVar11 = uVar11 - 1;
              param_4 = param_4 + 1;
            } while (uVar11 != 0);
          }
          else {
            if (param_3 != 2) {
LAB_109843a08:
              func_0x000107c31940(auStack_68,&UNK_10f580fdb);
              FUN_10983f6dc(auStack_68);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x109843a24);
              (*pcVar9)();
            }
            uVar11 = (ulong)param_1;
            pfVar10 = pfVar10 + 2;
            do {
              fVar48 = *pfVar10;
              uVar26 = *(ulong *)(pfVar10 + -2);
              fVar36 = (float)uVar26;
              fVar36 = fVar36 * fVar36 + pfVar10[-1] * pfVar10[-1] + fVar48 * fVar48;
              fVar39 = 1.0 / SQRT(fVar36 + 1e-06);
              fVar36 = fVar36 * fVar39 * 1.5707964;
              uVar16 = 0;
              uVar17 = 0;
              uVar18 = 0;
              ___sincosf_stret();
              auVar19._8_8_ = extraout_var;
              auVar19._0_8_ = extraout_d1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar26;
              auVar5._4_4_ = uVar16;
              auVar5._0_4_ = fVar36;
              auVar5._8_4_ = uVar17;
              auVar5._12_4_ = uVar18;
              auVar52 = NEON_ext(auVar5,auVar8,0xc,1);
              fVar39 = fVar39 * fVar36;
              fVar36 = fVar48 * fVar39;
              fVar47 = auVar52._4_4_ * fVar39;
              fVar55 = auVar52._8_4_ * fVar39;
              fVar48 = fVar48 * fVar39;
              auVar52 = *param_4;
              fVar32 = auVar52._12_4_;
              auVar38._4_4_ = fVar32;
              auVar38._0_4_ = fVar32;
              auVar38._8_4_ = fVar32;
              auVar38._12_4_ = fVar32;
              auVar6._4_4_ = fVar47;
              auVar6._0_4_ = fVar36;
              auVar6._8_4_ = fVar55;
              auVar6._12_4_ = fVar48;
              auVar58 = NEON_rev64(auVar6,4);
              auVar57 = NEON_ext(auVar38,auVar52,4,1);
              fVar39 = (float)extraout_d1;
              fVar25 = auVar52._0_4_;
              fVar30 = auVar52._4_4_;
              fVar31 = auVar52._8_4_;
              auVar20._4_12_ = auVar19._4_12_;
              auVar20._0_4_ = -fVar36;
              auVar22._12_4_ = (undefined4)((ulong)extraout_var >> 0x20);
              auVar22._0_8_ = auVar20._0_8_;
              auVar22._8_4_ = -fVar55;
              auVar21._8_8_ = auVar22._8_8_;
              auVar21._4_4_ = fVar36;
              auVar21._0_4_ = -fVar36;
              auVar23._0_12_ = auVar21._0_12_;
              auVar23._12_4_ = fVar55;
              auVar7._4_4_ = fVar47;
              auVar7._0_4_ = fVar36;
              auVar7._8_4_ = fVar55;
              auVar7._12_4_ = fVar48;
              auVar52 = NEON_ext(auVar23,auVar7,8,1);
              auVar52 = NEON_ext(auVar52,auVar52,4,1);
              *(float *)(*param_4 + 8) =
                   (auVar57._8_4_ * auVar58._4_4_ + fVar31 * fVar39 + fVar30 * auVar52._8_4_) -
                   fVar25 * fVar55;
              *(float *)(*param_4 + 0xc) =
                   (auVar57._12_4_ * -fVar47 + fVar32 * fVar39 + fVar30 * auVar52._12_4_) -
                   fVar31 * fVar48;
              *(float *)*param_4 =
                   (auVar57._0_4_ * auVar58._0_4_ + fVar25 * fVar39 + fVar31 * auVar52._0_4_) -
                   fVar30 * fVar36;
              *(float *)(*param_4 + 4) =
                   (auVar57._4_4_ * fVar55 + fVar30 * fVar39 + fVar25 * auVar52._4_4_) -
                   fVar31 * fVar47;
              pfVar10 = pfVar10 + 3;
              uVar11 = uVar11 - 1;
              param_4 = param_4 + 1;
            } while (uVar11 != 0);
          }
        }
        else if (param_3 == 3) {
          uVar11 = (ulong)param_1;
          pfVar10 = pfVar10 + 2;
          do {
            fVar36 = *pfVar10;
            auVar49._0_8_ = *(ulong *)(pfVar10 + -2);
            auVar49._8_8_ = 0;
            fVar39 = 2.0 / ((float)auVar49._0_8_ * (float)auVar49._0_8_ + pfVar10[-1] * pfVar10[-1]
                            + fVar36 * fVar36 + 1.0);
            auVar4._12_4_ = 0;
            auVar4._0_12_ = ZEXT812(0x3f800000);
            auVar52 = NEON_ext(auVar4,auVar49,0xc,1);
            fVar48 = fVar39 + -1.0;
            auVar33._0_4_ = fVar36 * fVar39;
            auVar33._4_4_ = auVar52._4_4_ * fVar39;
            auVar33._8_4_ = auVar52._8_4_ * fVar39;
            auVar33._12_4_ = fVar36 * fVar39;
            auVar52 = *param_4;
            auVar41._0_4_ = -auVar33._0_4_;
            auVar41._4_4_ = -auVar33._4_4_;
            auVar41._8_4_ = -auVar33._8_4_;
            auVar41._12_4_ = -auVar33._12_4_;
            fVar55 = auVar52._12_4_;
            auVar53._4_4_ = fVar55;
            auVar53._0_4_ = fVar55;
            auVar53._8_4_ = fVar55;
            auVar53._12_4_ = fVar55;
            auVar58 = NEON_rev64(auVar33,4);
            auVar57 = NEON_ext(auVar53,auVar52,4,1);
            fVar36 = auVar52._0_4_;
            fVar39 = auVar52._4_4_;
            fVar47 = auVar52._8_4_;
            auVar42._4_12_ = auVar41._4_12_;
            auVar42._0_4_ = auVar41._0_4_;
            auVar44._0_8_ = auVar42._0_8_;
            auVar44._8_4_ = auVar41._8_4_;
            auVar44._12_4_ = auVar41._12_4_;
            auVar43._8_8_ = auVar44._8_8_;
            auVar43._4_4_ = auVar33._0_4_;
            auVar43._0_4_ = auVar41._0_4_;
            auVar45._0_12_ = auVar43._0_12_;
            auVar45._12_4_ = auVar33._8_4_;
            auVar52 = NEON_ext(auVar45,auVar33,8,1);
            auVar52 = NEON_ext(auVar52,auVar52,4,1);
            *(float *)(*param_4 + 8) =
                 (auVar57._8_4_ * auVar58._4_4_ + fVar47 * fVar48 + fVar39 * auVar52._8_4_) -
                 fVar36 * auVar33._8_4_;
            *(float *)(*param_4 + 0xc) =
                 (auVar57._12_4_ * auVar41._4_4_ + fVar55 * fVar48 + fVar39 * auVar52._12_4_) -
                 fVar47 * auVar33._12_4_;
            *(float *)*param_4 =
                 (auVar57._0_4_ * auVar58._0_4_ + fVar36 * fVar48 + fVar47 * auVar52._0_4_) -
                 fVar39 * auVar33._0_4_;
            *(float *)(*param_4 + 4) =
                 (auVar57._4_4_ * auVar33._8_4_ + fVar39 * fVar48 + fVar36 * auVar52._4_4_) -
                 fVar47 * auVar33._4_4_;
            pfVar10 = pfVar10 + 3;
            uVar11 = uVar11 - 1;
            param_4 = param_4 + 1;
          } while (uVar11 != 0);
        }
        else if (param_3 == 4) {
          uVar11 = (ulong)param_1;
          pfVar10 = pfVar10 + 2;
          do {
            auVar27._0_8_ = *(ulong *)(pfVar10 + -2);
            auVar27._8_8_ = 0;
            fVar39 = *pfVar10;
            fVar36 = (float)auVar27._0_8_ * (float)auVar27._0_8_ + pfVar10[-1] * pfVar10[-1] +
                     fVar39 * fVar39;
            if (2.0 <= fVar36) {
              auVar28 = ZEXT216(0);
              auVar52 = ZEXT816(0xbf800000);
            }
            else {
              fVar47 = SQRT(2.0 - fVar36);
              auVar52 = ZEXT416((uint)(1.0 - fVar36));
              auVar3._12_4_ = 0;
              auVar3._0_12_ = ZEXT812(0x40000000);
              auVar57 = NEON_ext(auVar3,auVar27,0xc,1);
              auVar28._0_4_ = fVar39 * fVar47;
              auVar28._4_4_ = auVar57._4_4_ * fVar47;
              auVar28._8_4_ = auVar57._8_4_ * fVar47;
              auVar28._12_4_ = fVar39 * fVar47;
            }
            pfVar10 = pfVar10 + 3;
            fVar36 = auVar28._0_4_;
            fVar39 = auVar28._8_4_;
            auVar57 = *param_4;
            fVar30 = auVar57._12_4_;
            auVar50._4_4_ = fVar30;
            auVar50._0_4_ = fVar30;
            auVar50._8_4_ = fVar30;
            auVar50._12_4_ = fVar30;
            auVar58 = NEON_ext(auVar50,auVar57,4,1);
            auVar54 = NEON_rev64(auVar28,4);
            fVar47 = auVar52._0_4_;
            fVar55 = auVar57._0_4_;
            fVar48 = auVar57._4_4_;
            fVar25 = auVar57._8_4_;
            auVar34._12_4_ = auVar52._12_4_;
            auVar34._8_4_ = -fVar39;
            auVar34._4_4_ = fVar36;
            auVar34._0_4_ = -fVar36;
            auVar35._0_12_ = auVar34._0_12_;
            auVar35._12_4_ = fVar39;
            auVar52 = NEON_ext(auVar35,auVar28,8,1);
            auVar52 = NEON_ext(auVar52,auVar52,4,1);
            *(float *)(*param_4 + 8) =
                 (auVar58._8_4_ * auVar54._4_4_ + fVar25 * fVar47 + fVar48 * auVar52._8_4_) -
                 fVar55 * fVar39;
            *(float *)(*param_4 + 0xc) =
                 (auVar58._12_4_ * -auVar28._4_4_ + fVar30 * fVar47 + fVar48 * auVar52._12_4_) -
                 fVar25 * auVar28._12_4_;
            *(float *)*param_4 =
                 (auVar58._0_4_ * auVar54._0_4_ + fVar55 * fVar47 + fVar25 * auVar52._0_4_) -
                 fVar48 * fVar36;
            *(float *)(*param_4 + 4) =
                 (auVar58._4_4_ * fVar39 + fVar48 * fVar47 + fVar55 * auVar52._4_4_) -
                 fVar25 * auVar28._4_4_;
            uVar11 = uVar11 - 1;
            param_4 = param_4 + 1;
          } while (uVar11 != 0);
        }
        else {
          if (param_3 != 5) goto LAB_109843a08;
          uVar11 = (ulong)param_1;
          pfVar10 = pfVar10 + 2;
          do {
            fVar36 = *pfVar10;
            auVar51._0_8_ = *(ulong *)(pfVar10 + -2);
            auVar51._8_8_ = 0;
            fVar39 = ((float)auVar51._0_8_ * (float)auVar51._0_8_ + pfVar10[-1] * pfVar10[-1] +
                     fVar36 * fVar36) * 0.17157288;
            fVar55 = (1.0 - fVar39) * 1.6568543;
            fVar47 = 1.0 / ((fVar39 + 1.0) * (fVar39 + 1.0));
            fVar39 = ((fVar39 + -6.0) * fVar39 + 1.0) * fVar47;
            auVar52 = NEON_ext(ZEXT416(0x3e2fb0cd),auVar51,0xc,1);
            auVar37._0_4_ = fVar36 * fVar55 * fVar47;
            auVar37._4_4_ = auVar52._4_4_ * fVar55 * fVar47;
            auVar37._8_4_ = auVar52._8_4_ * fVar55 * fVar47;
            auVar37._12_4_ = fVar36 * fVar55 * fVar47;
            auVar52 = *param_4;
            fVar48 = auVar52._12_4_;
            auVar56._4_4_ = fVar48;
            auVar56._0_4_ = fVar48;
            auVar56._8_4_ = fVar48;
            auVar56._12_4_ = fVar48;
            auVar58 = NEON_rev64(auVar37,4);
            auVar57 = NEON_ext(auVar56,auVar52,4,1);
            fVar36 = auVar52._0_4_;
            fVar47 = auVar52._4_4_;
            fVar55 = auVar52._8_4_;
            auVar40._4_4_ = auVar37._0_4_;
            auVar40._0_4_ = -auVar37._0_4_;
            auVar40._8_4_ = -auVar37._8_4_;
            auVar40._12_4_ = auVar37._8_4_;
            auVar52 = NEON_ext(auVar40,auVar37,8,1);
            auVar52 = NEON_ext(auVar52,auVar52,4,1);
            *(float *)(*param_4 + 8) =
                 (auVar57._8_4_ * auVar58._4_4_ + fVar55 * fVar39 + fVar47 * auVar52._8_4_) -
                 fVar36 * auVar37._8_4_;
            *(float *)(*param_4 + 0xc) =
                 (auVar57._12_4_ * -auVar37._4_4_ + fVar48 * fVar39 + fVar47 * auVar52._12_4_) -
                 fVar55 * auVar37._12_4_;
            *(float *)*param_4 =
                 (auVar57._0_4_ * auVar58._0_4_ + fVar36 * fVar39 + fVar55 * auVar52._0_4_) -
                 fVar47 * auVar37._0_4_;
            *(float *)(*param_4 + 4) =
                 (auVar57._4_4_ * auVar37._8_4_ + fVar47 * fVar39 + fVar36 * auVar52._4_4_) -
                 fVar55 * auVar37._4_4_;
            pfVar10 = pfVar10 + 3;
            uVar11 = uVar11 - 1;
            param_4 = param_4 + 1;
          } while (uVar11 != 0);
        }
        return;
      }
      func_0x000107c31940(auStack_68,&UNK_10f5815f1);
      FUN_10983e7c0(auStack_68);
    }
  }
  else {
    func_0x000107c31940(auStack_68,&UNK_10f5815c0);
    FUN_10983e7c0(auStack_68);
  }
LAB_109843e58:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x109843e5c);
  (*pcVar9)();
}



/* Entry: 109843e88; end: 1098442b7;  */

void FUN_109843e88(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 in_b0;
  byte bVar24;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  ulong uVar25;
  undefined1 auStack_90 [32];
  
  *(undefined2 *)(param_1 + 3) = 0;
  uVar15 = param_2;
  FUN_10983ec18();
  uVar12 = (uint)uVar15;
  *param_1 = uVar12;
  uVar16 = param_2;
  FUN_10983ec18();
  uVar13 = (uint)uVar16;
  param_1[1] = uVar13;
  uVar17 = param_2;
  FUN_10983ed00();
  *(char *)(param_1 + 2) = (char)uVar17;
  uVar18 = param_2;
  FUN_10983ed00();
  *(char *)((long)param_1 + 9) = (char)uVar18;
  uVar19 = param_2;
  FUN_10983ed00();
  *(char *)((long)param_1 + 10) = (char)uVar19;
  uVar20 = param_2;
  FUN_10983ed00();
  uVar21 = param_2;
  FUN_10983ed00();
  *(char *)((long)param_1 + 0xb) = (char)uVar21;
  uVar22 = param_2;
  FUN_10983ed00();
  *(char *)(param_1 + 3) = (char)uVar22;
  FUN_1098442b8(param_2);
  uVar1 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  uVar2 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar3 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  param_1[6] = CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  uVar4 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  uVar5 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  uVar6 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  param_1[7] = uVar4;
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  param_1[10] = CONCAT13(in_register_00005003,
                         CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  uVar7 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  uVar8 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  uVar9 = CONCAT13(in_register_00005003,
                   CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  FUN_1098442b8(param_2);
  uVar10 = CONCAT13(in_register_00005003,
                    CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  param_1[0xb] = uVar8;
  param_1[0xc] = uVar9;
  param_1[0xd] = uVar10;
  uVar23 = param_2;
  FUN_10983ec18();
  uVar14 = (uint)uVar23;
  param_1[0xe] = uVar14;
  FUN_10983ed00();
  *(char *)(param_1 + 0xf) = (char)param_2;
  if ((uint)uVar17 < 2) {
    if (((uint)uVar20 < 6) && ((uint)uVar20 != 1)) {
      *(char *)((long)param_1 + 0xd) = (char)uVar20;
      if (uVar12 < uVar14) {
        func_0x000107c31940(auStack_90,&UNK_10f581787);
        FUN_10983e7c0();
      }
      else {
        uVar20 = CONCAT44(uVar2,uVar1) & 0x7fffffff7fffffff;
        uVar25 = CONCAT44(uVar4,uVar3) & 0x7fffffff7fffffff;
        bVar24 = NEON_umaxv(CONCAT17(-(0x7f7fffff < (uVar8 & 0x7fffffff)),
                                     CONCAT16(-(0x7f7fffff < (uVar7 & 0x7fffffff)),
                                              CONCAT15(-(0x7f7fffff < (uVar6 & 0x7fffffff)),
                                                       CONCAT14(-(0x7f7fffff < (uVar5 & 0x7fffffff))
                                                                ,CONCAT13(-(0x7f7fffff <
                                                                           (uint)(uVar25 >> 0x20)),
                                                                          CONCAT12(-(0x7f7fffff <
                                                                                    (uint)uVar25),
                                                                                   CONCAT11(-(
                                                  0x7f7fffff < (uint)(uVar20 >> 0x20)),
                                                  -(0x7f7fffff < (uint)uVar20)))))))),1);
        if ((((bVar24 & 1) == 0) && ((uVar9 & 0x7fffffff) < 0x7f800000)) &&
           ((uVar10 & 0x7fffffff) < 0x7f800000)) {
          if ((uint)uVar17 == 0) {
            if ((uVar13 == 0) && (uVar14 == uVar12)) {
              if ((int)param_2 == 0) {
                return;
              }
              func_0x000107c31940(auStack_90,&UNK_10f581827);
              FUN_10983e7c0();
            }
            else {
              func_0x000107c31940(auStack_90,&UNK_10f5817f6);
              FUN_10983e7c0();
            }
          }
          else if (uVar13 == 0) {
            func_0x000107c31940(auStack_90,&UNK_10f58183c);
            FUN_10983e7c0();
          }
          else if ((int)param_2 - 1U < 3) {
            if ((param_2 & 0xffffffff) * (uVar16 & 0xffffffff) <
                (uVar15 & 0xffffffff) - (uVar23 & 0xffffffff)) {
              func_0x000107c31940(auStack_90,&UNK_10f581879);
              FUN_10983e7c0();
            }
            else if ((int)uVar18 - 1U < 0x18) {
              if ((int)uVar19 - 1U < 0x18) {
                if ((int)uVar21 - 1U < 0x18) {
                  if ((int)uVar22 - 1U < 0x18) {
                    return;
                  }
                  func_0x000107c31940(auStack_90,&UNK_10f581983);
                  FUN_10983e7c0();
                }
                else {
                  func_0x000107c31940(auStack_90,&UNK_10f581952);
                  FUN_10983e7c0();
                }
              }
              else {
                func_0x000107c31940(auStack_90,&UNK_10f58191b);
                FUN_10983e7c0();
              }
            }
            else {
              func_0x000107c31940(auStack_90,&UNK_10f5818e4);
              FUN_10983e7c0();
            }
          }
          else {
            func_0x000107c31940(auStack_90,&UNK_10f58184c);
            FUN_10983e7c0();
          }
        }
        else {
          func_0x000107c31940(auStack_90,&UNK_10f5817a4);
          FUN_10983e7c0();
        }
      }
    }
    else {
      func_0x000107c31940(auStack_90,&UNK_10f5816f5);
      FUN_10983e7c0();
    }
  }
  else {
    func_0x000107c31940(auStack_90,&UNK_10f5816b1);
    FUN_10983e7c0();
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10984426c);
  (*pcVar11)();
}



/* Entry: 1098442b8; end: 109844327;  */

undefined4 FUN_1098442b8(long param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (3 < (ulong)(*(long *)(param_1 + 0x10) - (long)puVar1)) {
    uVar3 = *puVar1;
    *(undefined4 **)(param_1 + 8) = puVar1 + 1;
    return uVar3;
  }
  func_0x000107c31940(auStack_38,&UNK_10f581077);
  FUN_10983e7c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10984430c);
  (*pcVar2)();
}



/* Entry: 109844328; end: 109844f9f;  */

/* WARNING: Removing unreachable block (ram,0x000109844f58) */

int FUN_109844328(long *param_1,uint *param_2,long *param_3,long *param_4,long *param_5,
                 long *param_6,int *param_7)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined *puVar17;
  byte bVar18;
  ulong ***pppuVar20;
  byte *pbVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  uint *puVar25;
  byte *pbVar26;
  uint *puVar27;
  ulong **ppuVar29;
  ulong uVar30;
  ulong **ppuVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 *puVar39;
  int iVar40;
  int iVar41;
  ulong uVar42;
  long *plVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  ulong *puVar46;
  undefined1 auStack_418 [16];
  undefined1 auStack_408 [12];
  undefined8 uStack_3fc;
  undefined1 uStack_3f4;
  long *plStack_3f0;
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  ulong uStack_3c8;
  undefined1 *puStack_3c0;
  code *pcStack_3b8;
  int iStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  int iStack_384;
  int iStack_380;
  uint uStack_37c;
  ulong uStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  int iStack_34c;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  int *piStack_328;
  long *plStack_320;
  long *plStack_318;
  int iStack_30c;
  ulong uStack_308;
  long *plStack_300;
  uint *puStack_2f8;
  long *plStack_2f0;
  int iStack_2e8;
  int iStack_2e4;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  ulong *puStack_2c8;
  undefined8 uStack_2c0;
  uint *puStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  int *piStack_2a0;
  long *plStack_298;
  int *piStack_290;
  int *piStack_288;
  int *piStack_280;
  int *piStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [6];
  undefined1 auStack_23a [6];
  undefined1 auStack_234 [4];
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
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  uint uStack_9c;
  char acStack_98 [24];
  ulong **ppuStack_80;
  ushort uStack_78;
  undefined *puVar19;
  uint *puVar28;
  
  plStack_318 = param_5;
  if ((char)param_2[2] == '\x01') {
    uVar37 = param_2[1];
    uVar42 = (ulong)uVar37;
    uVar24 = param_3[1];
    if ((((uVar24 == uVar42) && (param_3[3] == uVar24)) && (param_3[5] == uVar24)) &&
       (param_3[7] == uVar24)) {
      uVar38 = param_4[1];
      if (((uVar38 == *param_2) && (param_4[3] == uVar38)) &&
         ((param_4[5] == uVar38 && (param_4[7] == uVar38)))) {
        if (uVar37 == 0) {
          func_0x000107c31940(&uStack_250,&UNK_10f581b10);
          FUN_10983e7c0(&uStack_250);
        }
        else {
          bVar18 = (byte)param_2[0xf];
          piStack_328 = param_7;
          uStack_308 = uVar24;
          if (bVar18 - 1 < 3) {
            lVar35 = *param_1;
            lVar23 = param_1[1];
            plVar13 = param_6 + 0xbde;
            puStack_2c8 = (ulong *)0x1000100000000ee;
            uStack_2c0 = (long *)CONCAT71(uStack_2c0._1_7_,1);
            plStack_320 = plVar13;
            FUN_109843094(param_1,uVar42,&puStack_2c8,param_6,plVar13,acStack_98);
            if ((bVar18 == 1) || (acStack_98[0] != '\x01')) {
              puVar22 = (uint *)param_6[0xbdf];
              puVar25 = (uint *)param_6[0xbde];
              if (uStack_308 == (long)puVar22 - (long)puVar25 >> 2) {
                puVar27 = puVar25;
                if (puVar25 == puVar22) {
                  uVar24 = 0;
                  iVar41 = 0;
                }
                else {
                  do {
                    puVar28 = puVar27 + 1;
                    if ((uint)bVar18 < *puVar27) {
                      func_0x000107c31940(&uStack_250,&UNK_10f581b72);
                      FUN_10983e7c0(&uStack_250);
                      goto LAB_109844f28;
                    }
                    puVar27 = puVar28;
                  } while (puVar28 != puVar22);
                  iVar41 = 0;
                  uVar24 = 0;
                  do {
                    puVar27 = puVar25 + 1;
                    uVar7 = *puVar25;
                    if (((int)uVar7 < 0) || ((int)(uint)(byte)param_2[0xf] < (int)uVar7)) {
                      func_0x000107c31940(&uStack_250,&UNK_10f581aaf);
                      FUN_10983e7c0(&uStack_250);
                      goto LAB_109844f28;
                    }
                    if (uVar7 == 0) {
                      iVar41 = iVar41 + 1;
                    }
                    uVar24 = (ulong)(uVar7 + (int)uVar24);
                    puVar25 = puVar27;
                  } while (puVar27 != puVar22);
                }
                iStack_34c = iVar41;
                if (param_2[0xe] + uVar24 == uVar38) {
                  lStack_348 = *param_1;
                  lStack_340 = param_1[1];
                  plVar16 = param_6 + 0xbe1;
                  uStack_250 = uStack_250 & 0xffffffffffffff00;
                  uStack_378 = uVar24;
                  func_0x000108a39c34(plVar16,uVar24,&uStack_250);
                  iStack_30c = (int)uVar24;
                  lStack_338 = lVar35;
                  lStack_330 = lVar23;
                  puStack_2f8 = param_2;
                  if (iStack_30c == 0) {
                    uStack_2e0 = 0;
                    iStack_2e4 = 0;
                    iStack_2e8 = 0;
                  }
                  else {
                    plVar13 = param_1;
                    FUN_109844fa0(param_1,uVar24,1,plVar16,param_6);
                    iStack_2e8 = (int)plVar13;
                    plVar13 = param_1;
                    FUN_109844fa0(param_1,uVar24,4,plVar16,param_6);
                    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)plVar13);
                    plVar13 = param_1;
                    FUN_109844fa0(param_1,uVar24,8,plVar16,param_6);
                    uStack_2e0 = CONCAT44((int)plVar13,(int)uStack_2e0);
                    plVar14 = param_1;
                    plVar13 = param_6;
                    FUN_109844fa0(param_1,uVar24,2,plVar16);
                    iStack_2e4 = (int)plVar14;
                  }
                  iVar41 = iStack_2e8;
                  plVar15 = plStack_320;
                  lVar35 = param_1[1] - *param_1;
                  plVar14 = param_6 + 0xbe4;
                  plVar2 = param_6 + 0xbe7;
                  plVar3 = param_6 + 0xbea;
                  plVar4 = param_6 + 0xbed;
                  lStack_358 = lVar35;
                  plStack_300 = param_6;
                  if (*plStack_318 == 0) {
                    iStack_3b0 = iStack_2e4;
                    plStack_3a8 = plVar14;
                    plStack_3a0 = plVar2;
                    plStack_398 = plVar3;
                    plStack_390 = plVar4;
                    FUN_109845128(uVar42,plStack_320,plVar16,iStack_30c,param_3,iStack_2e8,
                                  uStack_2e0 & 0xffffffff,uStack_2e0._4_4_);
                    if (iVar41 != 0) {
                      uStack_250 = *(ulong *)(puStack_2f8 + 4);
                      uStack_248 = CONCAT44(0x3f800000,puStack_2f8[6]);
                      FUN_109843128(param_1,iVar41,3,*(undefined1 *)((long)puStack_2f8 + 9),
                                    &uStack_250,plStack_300[0xbe4],iVar41);
                    }
                    lStack_2d8 = param_1[1] - *param_1;
                    lStack_360 = lStack_2d8;
                    if ((int)uStack_2e0 != 0) {
                      FUN_109843398(param_1,uStack_2e0 & 0xffffffff,
                                    *(undefined1 *)((long)puStack_2f8 + 10),
                                    *(undefined1 *)((long)puStack_2f8 + 0xd),plStack_300[0xbe7],
                                    uStack_2e0 & 0xffffffff,plStack_300,plStack_300 + 0xbf0);
                      lStack_2d8 = param_1[1] - *param_1;
                    }
                    lStack_368 = lStack_2d8;
                    if (uStack_2e0._4_4_ != 0) {
                      FUN_109843128(param_1,uStack_2e0._4_4_,4,
                                    *(undefined1 *)((long)puStack_2f8 + 0xb),puStack_2f8 + 7,
                                    plStack_300[0xbea],uStack_2e0._4_4_);
                      lStack_2d8 = param_1[1] - *param_1;
                    }
                    lStack_370 = lStack_2d8;
                    if (iStack_2e4 != 0) {
                      uStack_250 = *(ulong *)(puStack_2f8 + 0xb);
                      uStack_248 = CONCAT44(0x3f800000,puStack_2f8[0xd]);
                      FUN_109843128(param_1,iStack_2e4,3,(char)puStack_2f8[3],&uStack_250,
                                    plStack_300[0xbed],iStack_2e4);
                      lStack_2d8 = param_1[1] - *param_1;
                    }
                    iVar41 = (int)lStack_340;
                  }
                  else {
                    iStack_a0 = iStack_30c;
                    uStack_9c = uVar37;
                    iStack_a8 = (int)uStack_2e0;
                    iStack_a4 = iStack_2e8;
                    iStack_b0 = iStack_2e4;
                    iStack_ac = uStack_2e0._4_4_;
                    uStack_c8 = 0;
                    uStack_d0 = 0;
                    uStack_b8 = 0;
                    uStack_c0 = 0;
                    uStack_e8 = 0;
                    uStack_f0 = 0;
                    uStack_d8 = 0;
                    uStack_e0 = 0;
                    uStack_108 = 0;
                    uStack_110 = 0;
                    uStack_f8 = 0;
                    uStack_100 = 0;
                    uStack_128 = 0;
                    uStack_130 = 0;
                    uStack_118 = 0;
                    uStack_120 = 0;
                    uStack_148 = 0;
                    uStack_150 = 0;
                    uStack_138 = 0;
                    uStack_140 = 0;
                    uStack_168 = 0;
                    uStack_170 = 0;
                    uStack_158 = 0;
                    uStack_160 = 0;
                    uStack_188 = 0;
                    uStack_190 = 0;
                    uStack_178 = 0;
                    uStack_180 = 0;
                    uStack_1a8 = 0;
                    uStack_1b0 = 0;
                    uStack_198 = 0;
                    uStack_1a0 = 0;
                    uStack_1c8 = 0;
                    uStack_1d0 = 0;
                    uStack_1b8 = 0;
                    uStack_1c0 = 0;
                    uStack_1e8 = 0;
                    uStack_1f0 = 0;
                    uStack_1d8 = 0;
                    uStack_1e0 = 0;
                    uStack_208 = 0;
                    uStack_210 = 0;
                    uStack_1f8 = 0;
                    uStack_200 = 0;
                    uStack_228 = 0;
                    uStack_230 = 0;
                    uStack_218 = 0;
                    uStack_220 = 0;
                    stack0xfffffffffffffdc8 = 0;
                    _auStack_240 = 0;
                    uStack_248 = 0;
                    uStack_250 = 0;
                    lVar23 = 0;
                    do {
                      *(undefined1 *)((long)&uStack_250 + lVar23) = 0;
                      lVar1 = lVar23 + 0x20;
                      *(undefined8 *)(auStack_240 + lVar23 + -8) = 0;
                      *(undefined8 *)(auStack_240 + lVar23) = 0;
                      *(undefined8 *)(auStack_240 + lVar23 + 6) = 0;
                      lVar23 = lVar1;
                    } while (lVar1 != 0x1a0);
                    plStack_2d0 = param_1;
                    if (iStack_2e8 == 0) {
                      uVar24 = 0;
                    }
                    else {
                      plStack_2f0 = (long *)CONCAT44(plStack_2f0._4_4_,
                                                     (uint)*(byte *)((long)puStack_2f8 + 9));
                      lVar35 = 3;
                      puVar39 = auStack_234 + 1;
                      do {
                        plVar15 = param_1;
                        FUN_10983ed00();
                        lStack_2d8 = CONCAT44(lStack_2d8._4_4_,(int)plVar15);
                        plVar15 = param_1;
                        FUN_10983ec18();
                        uVar24 = (ulong)plVar15 & 0xffffffff;
                        plVar15 = param_1;
                        FUN_10983ec8c();
                        puVar39[-0x1d] = (char)lStack_2d8;
                        *(long **)(puVar39 + -0x15) = plVar15;
                        *(ulong *)(puVar39 + -0xd) = uVar24;
                        *(int *)(puVar39 + -5) = iStack_2e8;
                        puVar39[-1] = (char)plStack_2f0;
                        *puVar39 = 1;
                        lVar35 = lVar35 + -1;
                        puVar39 = puVar39 + 0x20;
                      } while (lVar35 != 0);
                      lVar35 = plStack_2d0[1] - *plStack_2d0;
                      uVar24 = 3;
                    }
                    plVar15 = plStack_2d0;
                    uStack_37c = (uint)uVar24;
                    iVar41 = uStack_2e0._4_4_;
                    lStack_360 = lVar35;
                    if ((int)uStack_2e0 != 0) {
                      iVar41 = 0;
                      plStack_2f0 = (long *)CONCAT44(plStack_2f0._4_4_,
                                                     (uint)*(byte *)((long)puStack_2f8 + 10));
                      puVar39 = auStack_234 + uVar24 * 0x20 + 1;
                      do {
                        plVar43 = plVar15;
                        FUN_10983ed00();
                        lStack_2d8 = CONCAT44(lStack_2d8._4_4_,(int)plVar43);
                        plVar43 = plVar15;
                        FUN_10983ec18();
                        uVar24 = (ulong)plVar43 & 0xffffffff;
                        plVar43 = plVar15;
                        FUN_10983ec8c();
                        puVar39[-0x1d] = (char)lStack_2d8;
                        *(long **)(puVar39 + -0x15) = plVar43;
                        *(ulong *)(puVar39 + -0xd) = uVar24;
                        *(int *)(puVar39 + -5) = (int)uStack_2e0;
                        iVar41 = iVar41 + -1;
                        puVar39[-1] = (char)plStack_2f0;
                        *puVar39 = 0;
                        puVar39 = puVar39 + 0x20;
                      } while (iVar41 != -3);
                      uVar24 = (ulong)(uStack_37c + 3);
                      lVar35 = plStack_2d0[1] - *plStack_2d0;
                      iVar41 = uStack_2e0._4_4_;
                    }
                    plVar15 = plStack_2d0;
                    iStack_380 = (int)uVar24;
                    lStack_368 = lVar35;
                    if (iVar41 != 0) {
                      iVar41 = 0;
                      lStack_2d8 = CONCAT44(lStack_2d8._4_4_,
                                            (uint)*(byte *)((long)puStack_2f8 + 0xb));
                      puVar39 = auStack_234 + uVar24 * 0x20 + 1;
                      plStack_2f0 = plVar16;
                      do {
                        plVar16 = plVar15;
                        FUN_10983ed00();
                        plVar43 = plVar15;
                        FUN_10983ec18();
                        uVar24 = (ulong)plVar43 & 0xffffffff;
                        plVar43 = plVar15;
                        FUN_10983ec8c();
                        puVar39[-0x1d] = (char)plVar16;
                        *(long **)(puVar39 + -0x15) = plVar43;
                        *(ulong *)(puVar39 + -0xd) = uVar24;
                        *(int *)(puVar39 + -5) = uStack_2e0._4_4_;
                        iVar41 = iVar41 + -1;
                        puVar39[-1] = (char)lStack_2d8;
                        *puVar39 = 1;
                        puVar39 = puVar39 + 0x20;
                      } while (iVar41 != -4);
                      uVar24 = (ulong)(iStack_380 + 4);
                      lVar35 = plStack_2d0[1] - *plStack_2d0;
                      plVar16 = plStack_2f0;
                    }
                    plVar15 = plStack_2d0;
                    iStack_384 = (int)uVar24;
                    lStack_370 = lVar35;
                    if (iStack_2e4 != 0) {
                      iVar41 = 0;
                      plStack_2f0 = (long *)CONCAT44(plStack_2f0._4_4_,(uint)(byte)puStack_2f8[3]);
                      puVar39 = auStack_234 + uVar24 * 0x20 + 1;
                      do {
                        plVar43 = plVar15;
                        FUN_10983ed00();
                        lStack_2d8 = CONCAT44(lStack_2d8._4_4_,(int)plVar43);
                        plVar43 = plVar15;
                        FUN_10983ec18();
                        uVar24 = (ulong)plVar43 & 0xffffffff;
                        plVar43 = plVar15;
                        FUN_10983ec8c();
                        puVar39[-0x1d] = (char)lStack_2d8;
                        *(long **)(puVar39 + -0x15) = plVar43;
                        *(ulong *)(puVar39 + -0xd) = uVar24;
                        *(int *)(puVar39 + -5) = iStack_2e4;
                        iVar41 = iVar41 + -1;
                        puVar39[-1] = (char)plStack_2f0;
                        *puVar39 = 1;
                        puVar39 = puVar39 + 0x20;
                      } while (iVar41 != -3);
                      uVar24 = (ulong)(iStack_384 + 3);
                      lVar35 = plStack_2d0[1] - *plStack_2d0;
                    }
                    plVar15 = plStack_320;
                    uVar37 = (int)uVar24 + 1;
                    puStack_2c8 = &uStack_250;
                    puStack_2b8 = &uStack_9c;
                    uStack_2c0 = plStack_300;
                    plStack_2b0 = plStack_320;
                    piStack_2a0 = &iStack_a0;
                    piStack_290 = &iStack_a4;
                    piStack_288 = &iStack_a8;
                    piStack_280 = &iStack_ac;
                    piStack_278 = &iStack_b0;
                    uStack_258 = plVar4;
                    lStack_2d8 = lVar35;
                    plStack_2a8 = plVar16;
                    plStack_298 = param_3;
                    plStack_270 = plVar14;
                    plStack_268 = plVar2;
                    plStack_260 = plVar3;
                    if ((uVar37 < 2) || ((code *)*plStack_318 == (code *)0x0)) {
                      if (uVar37 != 0) {
                        plVar43 = (long *)0x0;
                        plStack_2d0 = (long *)(uVar24 * 0x20 + 0x20);
                        plVar13 = plStack_300;
                        do {
                          if (plVar43 == (long *)0x0) {
                            iStack_3b0 = iStack_b0;
                            plStack_3a8 = plVar14;
                            plStack_3a0 = plVar2;
                            plStack_398 = plVar3;
                            plStack_390 = plVar4;
                            FUN_109845128(uStack_9c,plVar15,plVar16,iStack_a0,param_3,iStack_a4,
                                          iStack_a8,iStack_ac);
                          }
                          else {
                            FUN_109843a40((long)&plStack_270 + (long)plVar43,
                                          *(undefined4 *)((long)&uStack_258 + (long)plVar43),
                                          *(undefined1 *)((long)&uStack_258 + 5 + (long)plVar43),
                                          *(undefined1 *)((long)&uStack_258 + 4 + (long)plVar43),
                                          plVar13);
                          }
                          plVar13 = plVar13 + 0xd9;
                          plVar43 = plVar43 + 4;
                        } while (plStack_2d0 != plVar43);
                      }
                    }
                    else {
                      ppuStack_80 = &puStack_2c8;
                      uStack_78 = 0;
                      pppuVar20 = &ppuStack_80;
                      (*(code *)*plStack_318)(plStack_318[1],uVar37,FUN_1098453b0);
                      if ((uStack_78 & 0x100) != 0) {
                        uVar38 = 8;
                        ___cxa_allocate_exception();
                        __ZNSt9bad_allocC1Ev();
                        puVar17 = PTR___ZTISt9bad_alloc_110346a68;
                        puVar19 = PTR___ZNSt9bad_allocD1Ev_110346998;
                        ___cxa_throw();
                        bVar18 = (byte)puVar19;
                        uVar24 = uVar38;
                        __Unwind_Resume();
                        plStack_3e0 = plVar15;
                        pcStack_3b8 = FUN_109844fa0;
                        uVar42 = uVar24;
                        plStack_3f0 = plVar3;
                        plStack_3e8 = plVar4;
                        plStack_3d8 = param_3;
                        plStack_3d0 = param_4;
                        uStack_3c8 = uVar38;
                        puStack_3c0 = &stack0xfffffffffffffff0;
                        FUN_10983ed00();
                        uVar38 = uVar24;
                        FUN_10983ec18(uVar24);
                        uVar38 = uVar38 & 0xffffffff;
                        FUN_10983ec8c(uVar24,uVar38);
                        if ((int)uVar42 != 1) {
                          uStack_3f4 = 0;
                          uStack_3fc = 0x100010000000064;
                          FUN_109842878(uVar42,uVar24,uVar38,puVar17,&uStack_3fc,plVar13,
                                        plVar13 + 0xd6);
                          uVar24 = plVar13[0xd7] - plVar13[0xd6] >> 2;
                          if (uVar24 == ((ulong)puVar17 & 0xffffffff)) {
                            uVar37 = 0;
                            iVar41 = 0;
                            puVar25 = (uint *)plVar13[0xd6];
                            ppuVar31 = *pppuVar20;
                            do {
                              uVar7 = *puVar25;
                              uVar37 = uVar7 & 0xfffffffe | uVar37;
                              *(byte *)ppuVar31 = -((byte)uVar7 & 1) & bVar18 | *(byte *)ppuVar31;
                              iVar41 = (uVar7 & 1) + iVar41;
                              uVar24 = uVar24 - 1;
                              puVar25 = puVar25 + 1;
                              ppuVar31 = (ulong **)((long)ppuVar31 + 1);
                            } while (uVar24 != 0);
                            if (uVar37 == 0) {
                              return iVar41;
                            }
                            func_0x000107c31940(auStack_418,&UNK_10f581ba4);
                            FUN_10983e7c0(auStack_418);
                          }
                          else {
                            func_0x000107c31940(auStack_418,&UNK_10f581b8f);
                            FUN_10983e7c0(auStack_418);
                          }
                    /* WARNING: Does not return */
                          pcVar12 = (code *)SoftwareBreakpoint(1,0x109845108);
                          (*pcVar12)();
                        }
                        ppuVar31 = *pppuVar20;
                        uVar42 = (long)pppuVar20[1] - (long)ppuVar31;
                        if (uVar42 == ((ulong)puVar17 & 0xffffffff)) {
                          if ((uint)puVar17 == 0) {
                            iVar41 = 0;
                          }
                          else {
                            FUN_1098426f4(uVar24,uVar38,uVar42 + 7 >> 3,plVar13,plVar13 + 0xcd);
                            pbVar21 = (byte *)plVar13[0xcd];
                            if (plVar13[0xce] - (long)pbVar21 != uVar42 + 7 >> 3) {
                              func_0x000107c31940(auStack_408,&UNK_10f581423);
                              FUN_10983e7c0(auStack_408);
                              goto LAB_109843070;
                            }
                            uVar24 = ((ulong)puVar17 & 0xffffffff) >> 3;
                            if ((uint)puVar17 < 8) {
                              iVar41 = 0;
                            }
                            else {
                              iVar41 = 0;
                              pbVar26 = pbVar21;
                              ppuVar29 = ppuVar31;
                              uVar38 = uVar24;
                              do {
                                bVar8 = *pbVar26;
                                puVar46 = *ppuVar29;
                                *ppuVar29 = (ulong *)CONCAT17(bVar18 & ~-((bVar8 & 0x80) == 0) |
                                                              (byte)((ulong)puVar46 >> 0x38),
                                                              CONCAT16(bVar18 & ~-((bVar8 & 0x40) ==
                                                                                  0) |
                                                                       (byte)((ulong)puVar46 >> 0x30
                                                                             ),CONCAT15(bVar18 & ~-(
                                                  (bVar8 & 0x20) == 0) |
                                                  (byte)((ulong)puVar46 >> 0x28),
                                                  CONCAT14(bVar18 & ~-((bVar8 & 0x10) == 0) |
                                                           (byte)((ulong)puVar46 >> 0x20),
                                                           CONCAT13(bVar18 & ~-((bVar8 & 8) == 0) |
                                                                    (byte)((ulong)puVar46 >> 0x18),
                                                                    CONCAT12(bVar18 & ~-((bVar8 & 4)
                                                                                        == 0) |
                                                                             (byte)((ulong)puVar46
                                                                                   >> 0x10),
                                                                             CONCAT11(bVar18 & ~-((
                                                  bVar8 & 2) == 0) | (byte)((ulong)puVar46 >> 8),
                                                  bVar18 & ~-((bVar8 & 1) == 0) | (byte)puVar46)))))
                                                  ));
                                iVar41 = (uint)(byte)POPCOUNT(bVar8) + iVar41;
                                uVar38 = uVar38 - 1;
                                pbVar26 = pbVar26 + 1;
                                ppuVar29 = ppuVar29 + 1;
                              } while (uVar38 != 0);
                            }
                            if (uVar42 != uVar24 * 8) {
                              lVar35 = 0;
                              do {
                                bVar8 = pbVar21[uVar24] >> (ulong)((uint)lVar35 & 0x1f);
                                *(byte *)((long)ppuVar31 + lVar35 + uVar24 * 8) =
                                     -(bVar8 & 1) & bVar18 |
                                     *(byte *)((long)ppuVar31 + lVar35 + uVar24 * 8);
                                iVar41 = (bVar8 & 1) + iVar41;
                                lVar35 = lVar35 + 1;
                              } while (uVar42 + uVar24 * -8 != lVar35);
                            }
                          }
                          return iVar41;
                        }
                        func_0x000107c31940(auStack_408,&UNK_10f581535);
                        FUN_10983e7c0(auStack_408);
LAB_109843070:
                    /* WARNING: Does not return */
                        pcVar12 = (code *)SoftwareBreakpoint(1,0x109843074);
                        (*pcVar12)();
                      }
                      if ((uStack_78 & 1) != 0) {
                        func_0x000107c31940(acStack_98,&UNK_10f580faf);
                        FUN_10983e7c0();
                        goto LAB_109844f28;
                      }
                    }
                    plVar13 = plStack_300 + 0xd9;
                    if (iStack_a4 != 0) {
                      puStack_2c8 = *(ulong **)(puStack_2f8 + 4);
                      uStack_2c0 = (long *)CONCAT44(0x3f800000,puStack_2f8[6]);
                      FUN_109843aa8(iStack_a4,3,*(undefined1 *)((long)puStack_2f8 + 9),&puStack_2c8,
                                    *plVar14,iStack_a4,plVar13,3);
                    }
                    iVar41 = (int)lStack_340;
                    if (iStack_a8 != 0) {
                      FUN_109843c84(iStack_a8,*(undefined1 *)((long)puStack_2f8 + 10),
                                    *(undefined1 *)((long)puStack_2f8 + 0xd),plStack_300[0xbe7],
                                    iStack_a8,plVar13 + (ulong)uStack_37c * 0xd9,3,
                                    plStack_300 + 0xbf0);
                    }
                    if (iStack_ac != 0) {
                      FUN_109843aa8(iStack_ac,4,*(undefined1 *)((long)puStack_2f8 + 0xb),
                                    puStack_2f8 + 7,*plVar3,iStack_ac,
                                    plVar13 + (long)iStack_380 * 0xd9,4);
                    }
                    if (iStack_b0 != 0) {
                      puStack_2c8 = *(ulong **)(puStack_2f8 + 0xb);
                      uStack_2c0 = (long *)CONCAT44(0x3f800000,puStack_2f8[0xd]);
                      FUN_109843aa8(iStack_b0,3,(char)puStack_2f8[3],&puStack_2c8,*plVar4,iStack_b0,
                                    plVar13 + (long)iStack_384 * 0xd9,3);
                    }
                  }
                  iVar11 = iStack_30c;
                  uVar24 = 0;
                  iVar40 = 0;
                  uVar42 = 0;
                  uVar38 = 0;
                  uVar30 = 0;
                  uVar32 = 0;
                  iVar33 = 0;
                  iVar10 = (int)lStack_330;
                  iVar9 = (int)lStack_338;
                  lVar35 = *plVar15;
                  iVar41 = iVar41 - (int)lStack_348;
                  do {
                    if (0 < *(int *)(lVar35 + uVar24 * 4)) {
                      iVar34 = 0;
                      do {
                        uVar36 = (ulong)(uint)(iVar33 + iVar34);
                        bVar18 = *(byte *)(*plVar16 + uVar36);
                        puVar6 = (undefined8 *)(*param_3 + uVar24 * 0xc);
                        if ((bVar18 & 1) != 0) {
                          puVar6 = (undefined8 *)(*plVar14 + uVar32 * 0x10);
                        }
                        uVar44 = *(undefined4 *)(puVar6 + 1);
                        puVar5 = (undefined8 *)(*param_4 + uVar36 * 0xc);
                        *puVar5 = *puVar6;
                        *(undefined4 *)(puVar5 + 1) = uVar44;
                        puVar6 = (undefined8 *)(param_3[2] + uVar24 * 0x10);
                        if ((bVar18 & 4) != 0) {
                          puVar6 = (undefined8 *)(*plVar2 + uVar30 * 0x10);
                        }
                        uVar45 = *puVar6;
                        puVar5 = (undefined8 *)(param_4[2] + uVar36 * 0x10);
                        puVar5[1] = puVar6[1];
                        *puVar5 = uVar45;
                        uVar37 = (uint)bVar18;
                        puVar6 = (undefined8 *)(param_3[6] + uVar24 * 0x10);
                        if ((bVar18 & 8) != 0) {
                          puVar6 = (undefined8 *)(*plVar3 + uVar38 * 0x10);
                        }
                        uVar45 = *puVar6;
                        puVar5 = (undefined8 *)(param_4[6] + uVar36 * 0x10);
                        puVar5[1] = puVar6[1];
                        *puVar5 = uVar45;
                        puVar6 = (undefined8 *)(param_3[4] + uVar24 * 0xc);
                        if ((bVar18 & 2) != 0) {
                          puVar6 = (undefined8 *)(*plVar4 + uVar42 * 0x10);
                        }
                        uVar32 = (ulong)((bVar18 & 1) + (int)uVar32);
                        uVar30 = (ulong)((int)uVar30 + ((bVar18 & 4) >> 2));
                        uVar38 = (ulong)((int)uVar38 + ((uVar37 & 8) >> 3));
                        uVar42 = (ulong)((int)uVar42 + ((uVar37 & 2) >> 1));
                        uVar44 = *(undefined4 *)(puVar6 + 1);
                        puVar5 = (undefined8 *)(param_4[4] + uVar36 * 0xc);
                        *puVar5 = *puVar6;
                        *(undefined4 *)(puVar5 + 1) = uVar44;
                        if (uVar37 != 0) {
                          iVar40 = iVar40 + 1;
                        }
                        iVar34 = iVar34 + 1;
                        lVar35 = *plVar15;
                      } while (iVar34 < *(int *)(lVar35 + uVar24 * 4));
                      iVar33 = iVar33 + iVar34;
                    }
                    uVar24 = uVar24 + 1;
                  } while (uVar24 != uStack_308);
                  if ((iStack_30c != 0) && (param_4[9] != 0)) {
                    _memmove(param_4[8],*plVar16,uStack_378);
                  }
                  if (piStack_328 != (int *)0x0) {
                    *piStack_328 = (iVar9 - iVar10) + iVar41;
                    piStack_328[1] = (int)lStack_358 - iVar41;
                    piStack_328[2] = (int)lStack_360 - (int)lStack_358;
                    piStack_328[3] = (int)lStack_368 - (int)lStack_360;
                    piStack_328[4] = (int)lStack_370 - (int)lStack_368;
                    piStack_328[5] = (int)lStack_2d8 - (int)lStack_370;
                    piStack_328[6] = iVar40;
                    piStack_328[7] = iStack_34c;
                    piStack_328[8] = iStack_2e8;
                    piStack_328[9] = (int)uStack_2e0;
                    piStack_328[10] = uStack_2e0._4_4_;
                    piStack_328[0xb] = iStack_2e4;
                  }
                  return iVar11;
                }
                func_0x000107c31940(&uStack_250,&UNK_10f581ad0);
                FUN_10983e7c0(&uStack_250);
              }
              else {
                func_0x000107c31940(&uStack_250,&UNK_10f581b56);
                FUN_10983e7c0(&uStack_250);
              }
            }
            else {
              func_0x000107c31940(&uStack_250,&UNK_10f581b43);
              FUN_10983e7c0(&uStack_250);
            }
          }
          else {
            func_0x000107c31940(&uStack_250,&UNK_10f581b1a);
            FUN_10983e7c0(&uStack_250);
          }
        }
      }
      else {
        func_0x000107c31940(&uStack_250,&UNK_10f581a44);
        FUN_10983e7c0(&uStack_250);
      }
    }
    else {
      func_0x000107c31940(&uStack_250,&UNK_10f5819d5);
      FUN_10983e7c0(&uStack_250);
    }
  }
  else {
    func_0x000107c31940(&uStack_250,&UNK_10f5819b4);
    FUN_10983e7c0(&uStack_250);
  }
LAB_109844f28:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109844f2c);
  (*pcVar12)();
}



/* Entry: 109844fa0; end: 109845127;  */

int FUN_109844fa0(ulong param_1,ulong param_2,byte param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [12];
  undefined8 uStack_4c;
  undefined1 uStack_44;
  
  uVar7 = param_1;
  FUN_10983ed00();
  uVar6 = param_1;
  FUN_10983ec18(param_1);
  uVar6 = uVar6 & 0xffffffff;
  FUN_10983ec8c(param_1,uVar6);
  if ((int)uVar7 != 1) {
    uStack_44 = 0;
    uStack_4c = 0x100010000000064;
    FUN_109842878(uVar7,param_1,uVar6,param_2,&uStack_4c,param_5,param_5 + 0x6b0);
    uVar7 = *(long *)(param_5 + 0x6b8) - (long)*(uint **)(param_5 + 0x6b0) >> 2;
    if (uVar7 == (param_2 & 0xffffffff)) {
      uVar10 = 0;
      iVar5 = 0;
      puVar9 = *(uint **)(param_5 + 0x6b0);
      pbVar8 = (byte *)*param_4;
      do {
        uVar2 = *puVar9;
        uVar10 = uVar2 & 0xfffffffe | uVar10;
        *pbVar8 = -((byte)uVar2 & 1) & param_3 | *pbVar8;
        iVar5 = (uVar2 & 1) + iVar5;
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
      if (uVar10 == 0) {
        return iVar5;
      }
      func_0x000107c31940(auStack_68,&UNK_10f581ba4);
      FUN_10983e7c0(auStack_68);
    }
    else {
      func_0x000107c31940(auStack_68,&UNK_10f581b8f);
      FUN_10983e7c0(auStack_68);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109845108);
    (*pcVar4)();
  }
  puVar1 = (undefined8 *)*param_4;
  uVar7 = param_4[1] - (long)puVar1;
  if (uVar7 == (param_2 & 0xffffffff)) {
    if ((uint)param_2 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1098426f4(param_1,uVar6,uVar7 + 7 >> 3,param_5,param_5 + 0x668);
      pbVar8 = *(byte **)(param_5 + 0x668);
      if (*(long *)(param_5 + 0x670) - (long)pbVar8 != uVar7 + 7 >> 3) {
        func_0x000107c31940(auStack_58,&UNK_10f581423);
        FUN_10983e7c0(auStack_58);
        goto LAB_109843070;
      }
      uVar6 = (param_2 & 0xffffffff) >> 3;
      if ((uint)param_2 < 8) {
        iVar5 = 0;
      }
      else {
        iVar5 = 0;
        pbVar11 = pbVar8;
        puVar13 = puVar1;
        uVar14 = uVar6;
        do {
          bVar3 = *pbVar11;
          uVar15 = *puVar13;
          *puVar13 = CONCAT17(param_3 & ~-((bVar3 & 0x80) == 0) | (byte)((ulong)uVar15 >> 0x38),
                              CONCAT16(param_3 & ~-((bVar3 & 0x40) == 0) |
                                       (byte)((ulong)uVar15 >> 0x30),
                                       CONCAT15(param_3 & ~-((bVar3 & 0x20) == 0) |
                                                (byte)((ulong)uVar15 >> 0x28),
                                                CONCAT14(param_3 & ~-((bVar3 & 0x10) == 0) |
                                                         (byte)((ulong)uVar15 >> 0x20),
                                                         CONCAT13(param_3 & ~-((bVar3 & 8) == 0) |
                                                                  (byte)((ulong)uVar15 >> 0x18),
                                                                  CONCAT12(param_3 & ~-((bVar3 & 4)
                                                                                       == 0) |
                                                                           (byte)((ulong)uVar15 >>
                                                                                 0x10),
                                                                           CONCAT11(param_3 & ~-((
                                                  bVar3 & 2) == 0) | (byte)((ulong)uVar15 >> 8),
                                                  param_3 & ~-((bVar3 & 1) == 0) | (byte)uVar15)))))
                                      ));
          iVar5 = (uint)(byte)POPCOUNT(bVar3) + iVar5;
          uVar14 = uVar14 - 1;
          pbVar11 = pbVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar14 != 0);
      }
      if (uVar7 != uVar6 * 8) {
        lVar12 = 0;
        do {
          bVar3 = pbVar8[uVar6] >> (ulong)((uint)lVar12 & 0x1f);
          *(byte *)((long)puVar1 + lVar12 + uVar6 * 8) =
               -(bVar3 & 1) & param_3 | *(byte *)((long)puVar1 + lVar12 + uVar6 * 8);
          iVar5 = (bVar3 & 1) + iVar5;
          lVar12 = lVar12 + 1;
        } while (uVar7 + uVar6 * -8 != lVar12);
      }
    }
    return iVar5;
  }
  func_0x000107c31940(auStack_58,&UNK_10f581535);
  FUN_10983e7c0(auStack_58);
LAB_109843070:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109843074);
  (*pcVar4)();
}



/* Entry: 109845128; end: 1098453af;  */

void FUN_109845128(uint param_1,long *param_2,long *param_3,int param_4,long *param_5,int param_6,
                  int param_7,int param_8,int param_9,undefined4 param_10,long *param_11,
                  long *param_12,long *param_13,long *param_14)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar22 = *param_11;
  if ((ulong)(param_11[1] - lVar22 >> 4) < (ulong)(param_6 + 1)) {
    func_0x00010983d048(param_11);
    lVar22 = *param_11;
  }
  lVar23 = *param_12;
  if ((ulong)(param_12[1] - lVar23 >> 4) < (ulong)(param_7 + 1)) {
    func_0x00010983d018(param_12);
    lVar23 = *param_12;
  }
  lVar24 = *param_13;
  if ((ulong)(param_13[1] - lVar24 >> 4) < (ulong)(param_8 + 1)) {
    func_0x00010983d048(param_13);
    lVar24 = *param_13;
  }
  lVar14 = *param_14;
  if ((ulong)(param_14[1] - lVar14 >> 4) < (ulong)(param_9 + 1)) {
    func_0x00010983d048(param_14);
    lVar14 = *param_14;
  }
  if (param_1 == 0) {
    iVar12 = 0;
    iVar8 = 0;
    uVar10 = 0;
    iVar15 = 0;
    uVar9 = 0;
  }
  else {
    uVar17 = 0;
    uVar16 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
    lVar18 = *param_2;
    lVar19 = *param_3;
    lVar20 = *param_5;
    lVar21 = param_5[2];
    lVar5 = param_5[6];
    lVar6 = param_5[4];
    uVar7 = 0;
    do {
      iVar8 = *(int *)(lVar18 + uVar17 * 4);
      uVar9 = uVar7;
      if (iVar8 != 0) {
        puVar1 = (undefined8 *)(lVar20 + uVar17 * 0xc);
        uVar25 = *puVar1;
        puVar3 = (undefined8 *)(lVar21 + uVar17 * 0x10);
        uStack_88 = puVar3[1];
        uStack_90 = *puVar3;
        uVar26 = *(undefined4 *)(puVar1 + 1);
        puVar1 = (undefined8 *)(lVar5 + uVar17 * 0x10);
        uStack_68 = puVar1[1];
        uStack_70 = *puVar1;
        if (0 < iVar8) {
          puVar1 = (undefined8 *)(lVar6 + uVar17 * 0xc);
          uVar27 = *puVar1;
          uVar28 = *(undefined4 *)(puVar1 + 1);
          uVar9 = (ulong)(uint)(iVar8 + (int)uVar7);
          do {
            bVar2 = *(byte *)(lVar19 + uVar7);
            uVar7 = (ulong)((int)uVar7 + 1);
            puVar1 = (undefined8 *)(lVar22 + uVar16 * 0x10);
            *puVar1 = uVar25;
            *(undefined4 *)(puVar1 + 1) = uVar26;
            *(undefined4 *)((long)puVar1 + 0xc) = 0x3f800000;
            uVar16 = (ulong)((bVar2 & 1) + (int)uVar16);
            puVar1 = (undefined8 *)(lVar23 + uVar13 * 0x10);
            puVar1[1] = uStack_88;
            *puVar1 = uStack_90;
            uVar13 = (ulong)((bVar2 >> 2 & 1) + (int)uVar13);
            puVar1 = (undefined8 *)(lVar24 + uVar11 * 0x10);
            puVar1[1] = uStack_68;
            *puVar1 = uStack_70;
            uVar11 = (ulong)((bVar2 >> 3 & 1) + (int)uVar11);
            puVar1 = (undefined8 *)(lVar14 + uVar10 * 0x10);
            *puVar1 = uVar27;
            *(undefined4 *)(puVar1 + 1) = uVar28;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
            uVar10 = (ulong)((bVar2 >> 1 & 1) + (int)uVar10);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      iVar8 = (int)uVar11;
      iVar12 = (int)uVar13;
      iVar15 = (int)uVar16;
      uVar17 = uVar17 + 1;
      uVar7 = uVar9;
    } while (uVar17 != param_1);
  }
  if ((int)uVar9 == param_4) {
    if ((((iVar15 == param_6) && (iVar12 == param_7)) && (iVar8 == param_8)) &&
       ((int)uVar10 == param_9)) {
      return;
    }
    func_0x000107c31940(&uStack_90,&UNK_10f581bcc);
    FUN_10983e7c0(&uStack_90);
  }
  else {
    func_0x000107c31940(&uStack_90,&UNK_10f581bb4);
    FUN_10983e7c0(&uStack_90);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109845390);
  (*pcVar4)();
}



/* Entry: 1098453b0; end: 10984547b;  */

void FUN_1098453b0(undefined8 *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (param_2 == 0) {
    FUN_109845128(*(undefined4 *)plVar2[2],plVar2[3],plVar2[4],*(undefined4 *)plVar2[5],plVar2[6],
                  *(undefined4 *)plVar2[7],*(undefined4 *)plVar2[8],*(undefined4 *)plVar2[9],
                  *(undefined4 *)plVar2[10]);
  }
  else {
    lVar1 = *plVar2 + (ulong)(param_2 - 1) * 0x20;
    FUN_109843a40(lVar1,*(undefined4 *)(lVar1 + 0x18),*(undefined1 *)(lVar1 + 0x1d),
                  *(undefined1 *)(lVar1 + 0x1c),plVar2[1] + (ulong)(param_2 - 1) * 0x6c8 + 0x6c8);
  }
  return;
}



/* Entry: 10984547c; end: 1098454c3;  */

undefined8 FUN_10984547c(long param_1,long param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x68);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 2)) {
    *(undefined4 *)(param_1 + 8) = **(undefined4 **)(piVar1 + 2);
    return 1;
  }
  return 0;
}



/* Entry: 1098454c4; end: 109845517;  */

void FUN_1098454c4(long param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(param_1 + 8);
  lVar1 = *plVar3;
  uVar2 = *(long *)(param_1 + 0x10) - lVar1;
  lVar4 = (long)(int)uVar2;
  if (uVar2 < lVar4 + 4U) {
    FUN_109875e18(plVar3);
    lVar1 = *plVar3;
  }
  *(undefined4 *)(lVar1 + lVar4) = *param_2;
  return;
}



/* Entry: 109845518; end: 109845523;  */

ulong FUN_109845518(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long lStack_74;
  long lStack_68;
  
  uVar4 = *(uint *)(param_4 + 0xc);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(uint *)(param_1 + 8) - 2;
  if (uVar7 < 0x1d) {
    uVar8 = (1 << (ulong)(*(uint *)(param_1 + 8) & 0x1f)) - 2;
    puVar12 = (undefined8 *)(ulong)(uVar8 >> 1);
    lVar2 = *param_3;
    lVar3 = param_3[1];
    if (lVar2 == lVar3) {
      if (uVar4 != 0) {
        uVar10 = 0;
        cVar6 = *(char *)((long)param_2 + 100);
        lVar2 = param_2[5];
        lVar3 = param_2[6];
        lVar14 = *(long *)*param_2;
        lVar18 = param_2[9];
        puVar16 = (undefined4 *)(param_4[6] + *(long *)*param_4 + 4);
        do {
          if (cVar6 == '\0') {
            uVar11 = (ulong)*(uint *)(lVar18 + uVar10 * 4);
          }
          else {
            uVar11 = uVar10 & 0xffffffff;
          }
          _memcpy(&lStack_74,lVar14 + lVar3 + lVar2 * uVar11,lVar2);
          param_3 = &lStack_74;
          param_2 = puVar12;
          func_0x000109845884(uVar8,puVar12,param_3,&uStack_78,&uStack_7c);
          puVar16[-1] = uStack_78;
          *puVar16 = uStack_7c;
          uVar10 = uVar10 + 1;
          puVar16 = puVar16 + 2;
        } while (uVar4 != uVar10);
      }
    }
    else {
      bVar5 = *(byte *)((long)param_2 + 100);
      lVar14 = param_2[5];
      lVar18 = param_2[6];
      lVar15 = *(long *)*param_2;
      lVar17 = param_2[9];
      puVar16 = (undefined4 *)(param_4[6] + *(long *)*param_4 + 4);
      uVar10 = 0;
      uVar11 = 1;
      do {
        uVar10 = (ulong)*(uint *)(lVar2 + uVar10 * 4);
        if ((bVar5 & 1) == 0) {
          uVar10 = (ulong)*(uint *)(lVar17 + uVar10 * 4);
        }
        _memcpy(&lStack_74,lVar15 + lVar18 + lVar14 * uVar10,lVar14);
        param_3 = &lStack_74;
        param_2 = puVar12;
        func_0x000109845884(uVar8,puVar12,param_3,&uStack_78,&uStack_7c);
        puVar16[-1] = uStack_78;
        *puVar16 = uStack_7c;
        puVar16 = puVar16 + 2;
        bVar1 = uVar11 < (ulong)(lVar3 - lVar2 >> 2);
        uVar10 = uVar11;
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (bVar1);
    }
  }
  uVar10 = (ulong)(uVar7 < 0x1d);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar10;
  }
  ___stack_chk_fail();
  if (((*(int *)((long)param_3 + 0x1c) == 9) && ((char)param_3[3] == '\x03')) &&
     (*(uint *)(uVar10 + 8) - 2 < 0x1d)) {
    iVar9 = (int)param_3[0xc];
    if (iVar9 != 0) {
      fVar19 = 2.0 / (float)((1 << (ulong)(*(uint *)(uVar10 + 8) & 0x1f)) - 2);
      pfVar13 = (float *)(*(long *)*param_3 + param_3[6]);
      uVar20 = NEON_fmov(0xbf800000,4);
      puVar12 = (undefined8 *)(*(long *)*param_2 + param_2[6]);
      do {
        uVar22 = NEON_scvtf(*puVar12,4);
        fVar24 = (float)uVar20 + (float)uVar22 * fVar19;
        fVar25 = (float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar22 >> 0x20) * fVar19;
        fVar23 = (1.0 - ABS(fVar24)) - ABS(fVar25);
        fVar21 = 0.0;
        fVar26 = fVar21;
        if (fVar23 <= -0.0) {
          fVar26 = -fVar23;
        }
        uVar22 = 0;
        uVar10 = CONCAT44(fVar26,fVar26) ^
                 (CONCAT44(fVar26,fVar26) ^ CONCAT44(-fVar26,-fVar26)) &
                 ~CONCAT44(-(uint)(fVar25 < 0.0),-(uint)(fVar24 < 0.0));
        fVar24 = fVar24 + (float)uVar10;
        fVar25 = fVar25 + (float)(uVar10 >> 0x20);
        fVar26 = fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25;
        if (1e-06 <= fVar26) {
          fVar26 = 1.0 / SQRT(fVar26);
          fVar21 = fVar23 * fVar26;
          uVar22 = CONCAT44(fVar25 * fVar26,fVar24 * fVar26);
        }
        *pfVar13 = fVar21;
        *(undefined8 *)(pfVar13 + 1) = uVar22;
        pfVar13 = pfVar13 + 3;
        iVar9 = iVar9 + -1;
        puVar12 = puVar12 + 1;
      } while (iVar9 != 0);
    }
    return 1;
  }
  return 0;
}



/* Entry: 109845524; end: 1098456d7;  */

ulong FUN_109845524(long param_1,undefined8 *param_2,long *param_3,uint param_4,undefined8 *param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  long lStack_74;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(uint *)(param_1 + 8) - 2;
  if (uVar6 < 0x1d) {
    uVar7 = (1 << (ulong)(*(uint *)(param_1 + 8) & 0x1f)) - 2;
    puVar11 = (undefined8 *)(ulong)(uVar7 >> 1);
    lVar2 = *param_3;
    lVar3 = param_3[1];
    if (lVar2 == lVar3) {
      if (param_4 != 0) {
        uVar9 = 0;
        cVar5 = *(char *)((long)param_2 + 100);
        lVar2 = param_2[5];
        lVar3 = param_2[6];
        lVar13 = *(long *)*param_2;
        lVar17 = param_2[9];
        puVar15 = (undefined4 *)(param_5[6] + *(long *)*param_5 + 4);
        do {
          if (cVar5 == '\0') {
            uVar10 = (ulong)*(uint *)(lVar17 + uVar9 * 4);
          }
          else {
            uVar10 = uVar9 & 0xffffffff;
          }
          _memcpy(&lStack_74,lVar13 + lVar3 + lVar2 * uVar10,lVar2);
          param_3 = &lStack_74;
          param_2 = puVar11;
          func_0x000109845884(uVar7,puVar11,param_3,&uStack_78,&uStack_7c);
          puVar15[-1] = uStack_78;
          *puVar15 = uStack_7c;
          uVar9 = uVar9 + 1;
          puVar15 = puVar15 + 2;
        } while (param_4 != uVar9);
      }
    }
    else {
      bVar4 = *(byte *)((long)param_2 + 100);
      lVar13 = param_2[5];
      lVar17 = param_2[6];
      lVar14 = *(long *)*param_2;
      lVar16 = param_2[9];
      puVar15 = (undefined4 *)(param_5[6] + *(long *)*param_5 + 4);
      uVar9 = 0;
      uVar10 = 1;
      do {
        uVar9 = (ulong)*(uint *)(lVar2 + uVar9 * 4);
        if ((bVar4 & 1) == 0) {
          uVar9 = (ulong)*(uint *)(lVar16 + uVar9 * 4);
        }
        _memcpy(&lStack_74,lVar14 + lVar17 + lVar13 * uVar9,lVar13);
        param_3 = &lStack_74;
        param_2 = puVar11;
        func_0x000109845884(uVar7,puVar11,param_3,&uStack_78,&uStack_7c);
        puVar15[-1] = uStack_78;
        *puVar15 = uStack_7c;
        puVar15 = puVar15 + 2;
        bVar1 = uVar10 < (ulong)(lVar3 - lVar2 >> 2);
        uVar9 = uVar10;
        uVar10 = (ulong)((int)uVar10 + 1);
      } while (bVar1);
    }
  }
  uVar9 = (ulong)(uVar6 < 0x1d);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar9;
  }
  ___stack_chk_fail();
  if (((*(int *)((long)param_3 + 0x1c) == 9) && ((char)param_3[3] == '\x03')) &&
     (*(uint *)(uVar9 + 8) - 2 < 0x1d)) {
    iVar8 = (int)param_3[0xc];
    if (iVar8 != 0) {
      fVar18 = 2.0 / (float)((1 << (ulong)(*(uint *)(uVar9 + 8) & 0x1f)) - 2);
      pfVar12 = (float *)(*(long *)*param_3 + param_3[6]);
      uVar19 = NEON_fmov(0xbf800000,4);
      puVar11 = (undefined8 *)(*(long *)*param_2 + param_2[6]);
      do {
        uVar21 = NEON_scvtf(*puVar11,4);
        fVar23 = (float)uVar19 + (float)uVar21 * fVar18;
        fVar24 = (float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar21 >> 0x20) * fVar18;
        fVar22 = (1.0 - ABS(fVar23)) - ABS(fVar24);
        fVar20 = 0.0;
        fVar25 = fVar20;
        if (fVar22 <= -0.0) {
          fVar25 = -fVar22;
        }
        uVar21 = 0;
        uVar9 = CONCAT44(fVar25,fVar25) ^
                (CONCAT44(fVar25,fVar25) ^ CONCAT44(-fVar25,-fVar25)) &
                ~CONCAT44(-(uint)(fVar24 < 0.0),-(uint)(fVar23 < 0.0));
        fVar23 = fVar23 + (float)uVar9;
        fVar24 = fVar24 + (float)(uVar9 >> 0x20);
        fVar25 = fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24;
        if (1e-06 <= fVar25) {
          fVar25 = 1.0 / SQRT(fVar25);
          fVar20 = fVar22 * fVar25;
          uVar21 = CONCAT44(fVar24 * fVar25,fVar23 * fVar25);
        }
        *pfVar12 = fVar20;
        *(undefined8 *)(pfVar12 + 1) = uVar21;
        pfVar12 = pfVar12 + 3;
        iVar8 = iVar8 + -1;
        puVar11 = puVar11 + 1;
      } while (iVar8 != 0);
    }
    return 1;
  }
  return 0;
}



/* Entry: 1098456d8; end: 1098457f3;  */

undefined8 FUN_1098456d8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  
  if (((*(int *)((long)param_3 + 0x1c) == 9) && (*(char *)(param_3 + 3) == '\x03')) &&
     (*(uint *)(param_1 + 8) - 2 < 0x1d)) {
    iVar1 = *(int *)(param_3 + 0xc);
    if (iVar1 != 0) {
      fVar4 = 2.0 / (float)((1 << (ulong)(*(uint *)(param_1 + 8) & 0x1f)) - 2);
      pfVar3 = (float *)(*(long *)*param_3 + param_3[6]);
      uVar5 = NEON_fmov(0xbf800000,4);
      puVar2 = (undefined8 *)(*(long *)*param_2 + param_2[6]);
      do {
        uVar7 = NEON_scvtf(*puVar2,4);
        fVar9 = (float)uVar5 + (float)uVar7 * fVar4;
        fVar10 = (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar7 >> 0x20) * fVar4;
        fVar8 = (1.0 - ABS(fVar9)) - ABS(fVar10);
        fVar6 = 0.0;
        fVar11 = fVar6;
        if (fVar8 <= -0.0) {
          fVar11 = -fVar8;
        }
        uVar7 = 0;
        uVar12 = CONCAT44(fVar11,fVar11) ^
                 (CONCAT44(fVar11,fVar11) ^ CONCAT44(-fVar11,-fVar11)) &
                 ~CONCAT44(-(uint)(fVar10 < 0.0),-(uint)(fVar9 < 0.0));
        fVar9 = fVar9 + (float)uVar12;
        fVar10 = fVar10 + (float)(uVar12 >> 0x20);
        fVar11 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
        if (1e-06 <= fVar11) {
          fVar11 = 1.0 / SQRT(fVar11);
          fVar6 = fVar8 * fVar11;
          uVar7 = CONCAT44(fVar10 * fVar11,fVar9 * fVar11);
        }
        *pfVar3 = fVar6;
        *(undefined8 *)(pfVar3 + 1) = uVar7;
        pfVar3 = pfVar3 + 3;
        iVar1 = iVar1 + -1;
        puVar2 = puVar2 + 1;
      } while (iVar1 != 0);
    }
    return 1;
  }
  return 0;
}



/* Entry: 1098457f4; end: 109845857;  */

bool FUN_1098457f4(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_21;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != -1) && (uStack_21 = (undefined1)iVar1, *(long *)(param_2 + 0x20) < 1)) {
    FUN_109845a1c(param_2,*(undefined8 *)(param_2 + 8),&uStack_21,&stack0xffffffffffffffe0,1);
  }
  return iVar1 != -1;
}



/* Entry: 109845858; end: 109845a1b;  */

bool FUN_109845858(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  lVar2 = param_3[1];
  lVar1 = param_3[2] + 1;
  if (lVar1 <= lVar2) {
    bVar3 = *(byte *)(*param_3 + param_3[2]);
    param_3[2] = lVar1;
    *(uint *)(param_1 + 8) = (uint)bVar3;
  }
  return lVar1 <= lVar2;
}



/* Entry: 109845a1c; end: 109845c1f;  */

undefined1 *
FUN_109845a1c(ulong *param_1,undefined1 *param_2,long param_3,undefined1 *param_4,long param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined1 *puVar14;
  
  puVar4 = param_2;
  if (0 < param_5) {
    puVar1 = (undefined1 *)param_1[1];
    if ((long)(param_1[2] - (long)puVar1) < param_5) {
      uVar13 = *param_1;
      puVar4 = puVar1 + (param_5 - uVar13);
      if ((long)puVar4 < 0) {
        FUN_109274940();
        piVar12 = *(int **)(param_2 + 0x68);
        if ((piVar12 == (int *)0x0) || (*piVar12 != 1)) {
          puVar4 = (undefined1 *)0x0;
        }
        else {
          *(undefined4 *)(param_1 + 1) = **(undefined4 **)(piVar12 + 2);
          func_0x00010742a308(param_1 + 2,param_2[0x18]);
          bVar2 = param_2[0x18];
          lVar6 = *(long *)(piVar12 + 2);
          if ((ulong)bVar2 == 0) {
            lVar8 = 4;
          }
          else {
            uVar13 = param_1[2];
            lVar3 = 0;
            do {
              lVar8 = lVar3;
              *(undefined4 *)(uVar13 + lVar8) = *(undefined4 *)(lVar6 + 4 + lVar8);
              lVar3 = lVar8 + 4;
            } while ((ulong)bVar2 * 4 - (lVar8 + 4) != 0);
            lVar8 = lVar8 + 8;
          }
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar6 + lVar8);
          puVar4 = (undefined1 *)0x1;
        }
        return puVar4;
      }
      uVar5 = param_1[2] - uVar13;
      puVar9 = (undefined1 *)(uVar5 * 2);
      if (puVar9 < puVar4 || (long)puVar9 - (long)puVar4 == 0) {
        puVar9 = puVar4;
      }
      if (0x3ffffffffffffffe < uVar5) {
        puVar9 = (undefined1 *)0x7fffffffffffffff;
      }
      if (puVar9 == (undefined1 *)0x0) {
        puVar14 = (undefined1 *)0x0;
      }
      else {
        puVar14 = puVar9;
        __Znwm();
      }
      puVar4 = puVar14 + ((long)param_2 - uVar13);
      _memcpy(puVar4,param_3,param_5);
      _memcpy(puVar4 + param_5,param_2,(long)puVar1 - (long)param_2);
      param_1[1] = (ulong)param_2;
      _memcpy(puVar14,uVar13,(long)param_2 - uVar13);
      *param_1 = (ulong)puVar14;
      param_1[1] = (ulong)(puVar4 + param_5 + ((long)puVar1 - (long)param_2));
      param_1[2] = (ulong)(puVar14 + (long)puVar9);
      if (uVar13 != 0) {
        __ZdlPv(uVar13);
      }
    }
    else {
      lVar6 = (long)puVar1 - (long)param_2;
      if (lVar6 < param_5) {
        puVar9 = puVar1;
        puVar14 = puVar1;
        if ((undefined1 *)(param_3 + lVar6) != param_4) {
          puVar9 = param_4 + ((long)param_2 - param_3);
          puVar11 = puVar1;
          puVar7 = (undefined1 *)(param_3 + lVar6);
          do {
            puVar10 = puVar7 + 1;
            puVar14 = puVar11 + 1;
            *puVar11 = *puVar7;
            puVar11 = puVar14;
            puVar7 = puVar10;
          } while (puVar10 != param_4);
        }
        param_1[1] = (ulong)puVar9;
        if (lVar6 < 1) {
          return param_2;
        }
        puVar11 = puVar9 + -param_5;
        puVar7 = puVar9;
        if (puVar9 + -param_5 < puVar1) {
          do {
            puVar10 = puVar11 + 1;
            puVar9 = puVar7 + 1;
            *puVar7 = *puVar11;
            puVar11 = puVar10;
            puVar7 = puVar9;
          } while (puVar10 != puVar1);
        }
        param_1[1] = (ulong)puVar9;
        if (puVar14 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
      }
      else {
        puVar9 = puVar1 + -param_5;
        puVar14 = puVar1;
        puVar11 = puVar1;
        if (puVar1 + -param_5 < puVar1) {
          do {
            puVar7 = puVar9 + 1;
            puVar11 = puVar14 + 1;
            *puVar14 = *puVar9;
            puVar9 = puVar7;
            puVar14 = puVar11;
          } while (puVar7 != puVar1);
        }
        param_1[1] = (ulong)puVar11;
        lVar6 = param_5;
        if (puVar1 != param_2 + param_5) {
          _memmove(param_2 + param_5,param_2);
        }
      }
      _memmove(param_2,param_3,lVar6);
    }
  }
  return puVar4;
}



/* Entry: 109845c20; end: 109845d93;  */

undefined8 FUN_109845c20(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  
  piVar7 = *(int **)(param_2 + 0x68);
  if ((piVar7 == (int *)0x0) || (*piVar7 != 1)) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = **(undefined4 **)(piVar7 + 2);
    func_0x00010742a308(param_1 + 0x10,*(undefined1 *)(param_2 + 0x18));
    bVar1 = *(byte *)(param_2 + 0x18);
    lVar4 = *(long *)(piVar7 + 2);
    if ((ulong)bVar1 == 0) {
      lVar5 = 4;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar2 = 0;
      do {
        lVar5 = lVar2;
        *(undefined4 *)(lVar6 + lVar5) = *(undefined4 *)(lVar4 + 4 + lVar5);
        lVar2 = lVar5 + 4;
      } while ((ulong)bVar1 * 4 - (lVar5 + 4) != 0);
      lVar5 = lVar5 + 8;
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar4 + lVar5);
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 109845d94; end: 109845dc7;  */

undefined8 FUN_109845d94(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  if (*param_3 == param_3[1]) {
    func_0x000109845dc8(param_1,param_2,*(undefined4 *)(param_4 + 0x60));
  }
  else {
    func_0x000109845efc();
  }
  return 1;
}



/* Entry: 109845dc8; end: 10984617b;  */

void FUN_109845dc8(long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  int *piVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  
  bVar5 = *(byte *)(param_2 + 3);
  lVar13 = param_4[6];
  lVar14 = *(long *)*param_4;
  uVar4 = *(uint *)(param_1 + 8);
  fVar18 = *(float *)(param_1 + 0x28);
  pfVar7 = (float *)((ulong)bVar5 << 2);
  __Znam();
  if (param_3 != 0) {
    uVar15 = 0;
    iVar16 = 0;
    bVar6 = *(byte *)((long)param_2 + 100);
    lVar8 = param_2[9];
    lVar2 = param_2[5];
    lVar3 = param_2[6];
    plVar17 = (long *)*param_2;
    do {
      uVar9 = uVar15;
      if ((bVar6 & 1) == 0) {
        uVar9 = (ulong)*(uint *)(lVar8 + uVar15 * 4);
      }
      _memcpy(pfVar7,*plVar17 + lVar3 + lVar2 * uVar9,lVar2);
      if (bVar5 != 0) {
        lVar1 = (long)iVar16;
        iVar16 = (uint)bVar5 + iVar16;
        pfVar10 = *(float **)(param_1 + 0x10);
        piVar11 = (int *)(lVar14 + lVar13 + lVar1 * 4);
        pfVar12 = pfVar7;
        uVar9 = (ulong)bVar5;
        do {
          *piVar11 = (int)(((float)(uint)~(-1 << (ulong)(uVar4 & 0x1f)) / fVar18) *
                           (*pfVar12 - *pfVar10) + 0.5);
          uVar9 = uVar9 - 1;
          pfVar10 = pfVar10 + 1;
          piVar11 = piVar11 + 1;
          pfVar12 = pfVar12 + 1;
        } while (uVar9 != 0);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(pfVar7);
  return;
}



/* Entry: 10984617c; end: 1098462f3;  */

bool FUN_10984617c(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_31;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != -1) && (*(long *)(param_2 + 0x20) < 1)) {
    FUN_109845a1c(param_2,*(undefined8 *)(param_2 + 8),*(long *)(param_1 + 0x10),
                  *(long *)(param_1 + 0x18),*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (*(long *)(param_2 + 0x20) < 1) {
      FUN_109845a1c(param_2,*(undefined8 *)(param_2 + 8),param_1 + 0x28,param_1 + 0x2c,4);
      uStack_31 = (undefined1)*(undefined4 *)(param_1 + 8);
      if (*(long *)(param_2 + 0x20) < 1) {
        FUN_109845a1c(param_2,*(undefined8 *)(param_2 + 8),&uStack_31,&stack0xffffffffffffffd0,1);
      }
    }
  }
  return iVar1 != -1;
}



/* Entry: 1098462f4; end: 10984636b;  */

undefined8 * FUN_1098462f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b14b98;
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984636c; end: 109846383;  */

undefined8 FUN_10984636c(void)

{
  return 1;
}



/* Entry: 109846384; end: 10984641f;  */

undefined8 FUN_109846384(long *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined4 *)0x30;
  __Znwm();
  *puVar1 = 0xffffffff;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 10) = 0;
  (**(code **)(*param_1 + 0x20))(param_1,puVar1);
  plVar3 = (long *)(param_2 + 0x68);
  lVar2 = *plVar3;
  *plVar3 = (long)puVar1;
  if (lVar2 != 0) {
    FUN_109846530(plVar3);
  }
  return 1;
}



/* Entry: 109846420; end: 10984652f;  */

void FUN_109846420(undefined8 *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  (**(code **)(*param_2 + 0x50))(param_2,param_3);
  uVar1 = *(undefined4 *)(param_3 + 0x38);
  uVar2 = (int)param_2 - 1;
  if (uVar2 < 0xb) {
    iVar5 = *(int *)(&UNK_10e0028f8 + (ulong)uVar2 * 4);
  }
  else {
    iVar5 = -1;
  }
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  *(char *)(puVar4 + 3) = (char)plVar3;
  *(int *)((long)puVar4 + 0x1c) = (int)param_2;
  *(undefined1 *)(puVar4 + 4) = 0;
  puVar4[5] = (long)(iVar5 * (int)plVar3);
  puVar4[6] = 0;
  *(undefined4 *)(puVar4 + 7) = uVar1;
  puVar4[0xd] = 0;
  *(undefined8 *)((long)puVar4 + 0x44) = 0;
  *(undefined8 *)((long)puVar4 + 0x3c) = 0;
  *(undefined8 *)((long)puVar4 + 0x54) = 0;
  *(undefined8 *)((long)puVar4 + 0x4c) = 0;
  *(undefined8 *)((long)puVar4 + 0x5d) = 0;
  *(undefined8 *)((long)puVar4 + 0x55) = 0;
  *param_1 = puVar4;
  FUN_109846678();
  *(undefined1 *)((long)puVar4 + 100) = 1;
  puVar4[10] = puVar4[9];
  *(undefined4 *)((long)puVar4 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
  return;
}



/* Entry: 109846530; end: 1098465ff;  */

void FUN_109846530(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    if (*(long *)(param_2 + 8) != 0) {
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 8);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 109846600; end: 109846677;  */

bool FUN_109846600(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  lVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  lVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar1;
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_109875d48(lVar1,*plVar2,plVar2[1] - *plVar2,0);
    }
    return lVar1 != 0;
  }
  *param_1 = 0;
  return true;
}



/* Entry: 109846678; end: 10984671b;  */

void FUN_109846678(long *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = (undefined8 *)param_1[8];
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x28;
    __Znwm();
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[4] = 0;
    param_1[8] = (long)puVar4;
  }
  iVar3 = (int)puVar4;
  uVar2 = *(int *)((long)param_1 + 0x1c) - 1;
  if (uVar2 < 0xb) {
    lVar5 = *(long *)(&UNK_10e002928 + (ulong)uVar2 * 8);
  }
  else {
    lVar5 = -0x100000000;
  }
  bVar1 = *(byte *)(param_1 + 3);
  FUN_109875d48();
  if (iVar3 != 0) {
    lVar6 = param_1[8];
    *param_1 = lVar6;
    lVar7 = *(long *)(lVar6 + 0x18);
    param_1[2] = *(long *)(lVar6 + 0x20);
    param_1[1] = lVar7;
    param_1[5] = (long)(lVar5 * (ulong)bVar1) >> 0x20;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return;
}



/* Entry: 10984671c; end: 109846823;  */

undefined8 * FUN_10984671c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (param_1[8] == 0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    param_1[8] = puVar1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = puVar1;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  puVar1 = param_1;
  FUN_109846600(param_1,param_2);
  if ((int)puVar1 != 0) {
    *(undefined1 *)((long)param_1 + 100) = *(undefined1 *)((long)param_2 + 100);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    if (param_1 != param_2) {
      puVar1 = param_1 + 9;
      FUN_109846824(puVar1,param_2[9],param_2[10],(long)(param_2[10] - param_2[9]) >> 2);
    }
    puVar4 = (undefined4 *)param_2[0xd];
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = (undefined8 *)param_1[0xd];
      param_1[0xd] = 0;
    }
    else {
      puVar2 = (undefined4 *)0x30;
      __Znwm();
      *puVar2 = *puVar4;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      puVar1 = (undefined8 *)(puVar2 + 2);
      *puVar1 = 0;
      FUN_1092bfde0();
      uVar5 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar4 + 10);
      *(undefined8 *)(puVar2 + 8) = uVar5;
      puVar3 = (undefined8 *)param_1[0xd];
      param_1[0xd] = puVar2;
    }
    if (puVar3 != (undefined8 *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
        return param_1 + 0xd;
      }
      if (puVar3[1] != 0) {
        puVar3[2] = puVar3[1];
        __ZdlPv();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar3);
      return puVar3;
    }
  }
  return puVar1;
}



/* Entry: 109846824; end: 109846943;  */

undefined1  [16]
FUN_109846824(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar8 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  if ((undefined4 *)((long)(uVar8 - (long)puVar2) >> 2) < param_4) {
    puVar6 = param_2;
    puVar7 = param_3;
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = puVar2;
      __ZdlPv();
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((ulong)param_4 >> 0x3e != 0) {
      FUN_10984697c();
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar9 = puVar2;
        FUN_109846990();
        *puVar2 = puVar9;
        puVar2[1] = puVar9;
        puVar2[2] = (long)puVar9 + (long)puVar6 * 4;
        auVar11._8_8_ = puVar6;
        auVar11._0_8_ = puVar9;
        return auVar11;
      }
      FUN_10984697c();
      puVar4 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      if ((ulong)puVar6 >> 0x3e != 0) {
        func_0x000104c4f740();
        *(undefined4 **)(puVar4 + 0x38) = puVar6;
        *(undefined4 **)(puVar4 + 0x40) = puVar7;
        auVar13._8_8_ = puVar6;
        auVar13._0_8_ = 1;
        return auVar13;
      }
      lVar5 = (long)puVar6 << 2;
      __Znwm(lVar5);
      auVar12._8_8_ = puVar6;
      auVar12._0_8_ = lVar5;
      return auVar12;
    }
    puVar6 = (undefined4 *)((long)uVar8 >> 1);
    if ((undefined4 *)((long)uVar8 >> 1) <= param_4) {
      puVar6 = param_4;
    }
    if (0x7ffffffffffffffb < uVar8) {
      puVar6 = (undefined4 *)0x3fffffffffffffff;
    }
    puVar2 = param_1;
    FUN_109846944(param_1,puVar6);
    puVar7 = (undefined4 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar7 = *param_2;
      puVar7 = puVar7 + 1;
    }
    param_1[1] = puVar7;
    param_2 = puVar6;
  }
  else {
    puVar9 = (undefined8 *)param_1[1];
    lVar5 = (long)puVar9 - (long)puVar2;
    puVar6 = param_2;
    if ((undefined4 *)(lVar5 >> 2) < param_4) {
      puVar6 = (undefined4 *)((long)param_2 + lVar5);
      puVar3 = puVar2;
      puVar7 = param_2;
      puVar1 = puVar9;
      if (puVar9 != puVar2) {
        do {
          puVar2 = (undefined8 *)((long)puVar3 + 4);
          *(undefined4 *)puVar3 = *puVar7;
          lVar5 = lVar5 + -4;
          puVar3 = puVar2;
          puVar7 = puVar7 + 1;
        } while (lVar5 != 0);
      }
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *(undefined4 *)puVar9 = *puVar6;
        puVar9 = (undefined8 *)((long)puVar9 + 4);
        puVar1 = (undefined8 *)((long)puVar1 + 4);
      }
      param_1[1] = puVar1;
    }
    else {
      for (; puVar6 != param_3; puVar6 = puVar6 + 1) {
        *(undefined4 *)puVar2 = *puVar6;
        puVar2 = (undefined8 *)((long)puVar2 + 4);
      }
      param_1[1] = puVar2;
    }
  }
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = puVar2;
  return auVar10;
}



/* Entry: 109846944; end: 10984697b;  */

undefined1  [16] FUN_109846944(long *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1;
    FUN_109846990();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10984697c();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e == 0) {
    lVar3 = param_2 << 2;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000104c4f740();
  *(ulong *)(puVar2 + 0x38) = param_2;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = 1;
  return auVar6;
}



/* Entry: 10984697c; end: 10984698f;  */

undefined1  [16] FUN_10984697c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e == 0) {
    lVar2 = param_2 << 2;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  *(ulong *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = 1;
  return auVar4;
}



/* Entry: 109846990; end: 1098469c3;  */

undefined1  [16] FUN_109846990(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  *(ulong *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = 1;
  return auVar3;
}



/* Entry: 1098469c4; end: 1098469cf;  */

undefined8 FUN_1098469c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return 1;
}



/* Entry: 1098469d0; end: 109846c53;  */

void FUN_1098469d0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined4 uStack_74;
  undefined8 *puStack_70;
  uint uStack_68;
  uint uStack_64;
  
  if (*(byte *)(*(long *)(param_1 + 0x38) + 0x48) < 2) {
    lVar13 = param_2[2] + 4;
    if (param_2[1] < lVar13) {
      return;
    }
    uStack_64 = *(uint *)(*param_2 + param_2[2]);
    param_2[2] = lVar13;
  }
  else {
    iVar14 = 1;
    FUN_109846cfc(1,&uStack_64,param_2);
    if (iVar14 == 0) {
      return;
    }
  }
  if ((uStack_64 != 0) && ((long)(ulong)uStack_64 <= (param_2[1] - param_2[2]) * 5)) {
    func_0x000108a5942c(param_1 + 8);
    uVar15 = 0;
    lVar13 = *(long *)(param_1 + 0x40);
    while( true ) {
      lVar2 = param_2[1];
      lVar3 = param_2[2];
      lVar12 = lVar3 + 1;
      if (lVar2 < lVar12) break;
      lVar11 = *param_2;
      bVar4 = *(byte *)(lVar11 + lVar3);
      param_2[2] = lVar12;
      lVar1 = lVar3 + 2;
      if (lVar2 < lVar1) {
        return;
      }
      bVar5 = *(byte *)(lVar11 + lVar12);
      param_2[2] = lVar1;
      lVar12 = lVar3 + 3;
      if (lVar2 < lVar12) {
        return;
      }
      bVar6 = *(byte *)(lVar11 + lVar1);
      param_2[2] = lVar12;
      lVar1 = lVar3 + 4;
      if (lVar2 < lVar1) {
        return;
      }
      cVar7 = *(char *)(lVar11 + lVar12);
      param_2[2] = lVar1;
      if (4 < bVar4) {
        return;
      }
      if ((byte)(bVar5 - 0xc) < 0xf5 || bVar6 == 0) {
        return;
      }
      lVar12 = *(long *)(&UNK_10e0029c8 + (ulong)(byte)(bVar5 - 1) * 8);
      uVar8 = *(ushort *)(*(long *)(param_1 + 0x38) + 0x48);
      if ((ushort)(uVar8 >> 8 | uVar8 << 8) < 0x103) {
        if (lVar2 < lVar3 + 6) {
          return;
        }
        uVar8 = *(ushort *)(lVar11 + lVar1);
        param_2[2] = lVar3 + 6;
        uStack_68 = (uint)uVar8;
      }
      else {
        iVar14 = 1;
        FUN_109846cfc(1,&uStack_68,param_2);
        if (iVar14 == 0) {
          return;
        }
      }
      uVar9 = uStack_68;
      puVar10 = (undefined8 *)0x70;
      __Znwm();
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      *(byte *)(puVar10 + 3) = bVar6;
      *(uint *)((long)puVar10 + 0x1c) = (uint)bVar5;
      *(bool *)(puVar10 + 4) = cVar7 != '\0';
      puVar10[5] = lVar12 * (ulong)bVar6;
      puVar10[6] = 0;
      *(uint *)(puVar10 + 7) = (uint)bVar4;
      *(uint *)((long)puVar10 + 0x3c) = uVar9;
      puVar10[0xd] = 0;
      puVar10[9] = 0;
      puVar10[8] = 0;
      puVar10[0xb] = 0;
      puVar10[10] = 0;
      *(undefined8 *)((long)puVar10 + 0x5d) = 0;
      lVar12 = lVar13;
      puStack_70 = puVar10;
      FUN_109877fa0(lVar13,&puStack_70);
      puVar10 = puStack_70;
      puStack_70 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        func_0x000109846568(&puStack_70);
      }
      iVar14 = (int)lVar12;
      *(uint *)(*(long *)(*(long *)(lVar13 + 0x10) + (long)iVar14 * 8) + 0x3c) = uVar9;
      *(int *)(*(long *)(param_1 + 8) + uVar15 * 4) = iVar14;
      lVar12 = *(long *)(param_1 + 0x20);
      if ((int)((ulong)(*(long *)(param_1 + 0x28) - lVar12) >> 2) <= iVar14) {
        uStack_74 = 0xffffffff;
        FUN_1094f81d8(param_1 + 0x20,(long)(iVar14 + 1),&uStack_74);
        lVar12 = *(long *)(param_1 + 0x20);
      }
      *(int *)(lVar12 + (long)iVar14 * 4) = (int)uVar15;
      uVar15 = uVar15 + 1;
      if (uStack_64 == uVar15) {
        return;
      }
    }
  }
  return;
}



/* Entry: 109846c54; end: 109846c5b;  */

void FUN_109846c54(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109846c58);
  (*pcVar1)();
}



/* Entry: 109846c5c; end: 109846cbf;  */

long * FUN_109846c5c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x48))();
  if (((int)plVar1 != 0) &&
     (plVar1 = param_1, (**(code **)(*param_1 + 0x50))(param_1,param_2), (int)plVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000109846cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1);
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 109846cc0; end: 109846cfb;  */

undefined4 FUN_109846cc0(long param_1,int param_2)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + (long)param_2 * 4);
}



/* Entry: 109846cfc; end: 109846d6b;  */

ulong FUN_109846cfc(uint param_1,uint *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  
  if (5 < param_1) {
    return 0;
  }
  lVar1 = param_3[2] + 1;
  if (lVar1 <= param_3[1]) {
    bVar2 = *(byte *)(*param_3 + param_3[2]);
    uVar4 = (uint)bVar2;
    param_3[2] = lVar1;
    if ((char)bVar2 < '\0') {
      uVar3 = (ulong)(param_1 + 1);
      FUN_109846cfc(uVar3,param_2);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar4 = uVar4 & 0x7f | *param_2 << 7;
    }
    *param_2 = uVar4;
    return 1;
  }
  return 0;
}



/* Entry: 109846d6c; end: 1098474cb;  */

undefined8 FUN_109846d6c(long *param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_488;
  undefined8 uStack_480;
  undefined8 *puStack_470;
  int iStack_468;
  long lStack_460;
  long lStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  undefined4 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long lStack_408;
  undefined4 uStack_400;
  long lStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined4 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long alStack_3a0 [2];
  long lStack_390;
  long alStack_388 [2];
  long alStack_378 [70];
  long lStack_148;
  long lStack_140;
  long lStack_130;
  undefined4 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_108;
  undefined4 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e0;
  undefined4 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  long alStack_a0 [3];
  long alStack_88 [3];
  long *aplStack_70 [2];
  
  if (*(ushort *)((long)param_2 + 0x32) < 0x203) {
    return 1;
  }
  lVar15 = param_2[2] + 1;
  if (param_2[1] < lVar15) {
    return 0;
  }
  bVar4 = *(byte *)(*param_2 + param_2[2]);
  param_2[2] = lVar15;
  plVar10 = param_1;
  (**(code **)(*param_1 + 0x38))();
  iVar5 = *(int *)(plVar10[1] + 0xa0);
  lVar13 = (long)iVar5;
  plVar10 = param_1;
  (**(code **)(*param_1 + 0x30))(param_1);
  FUN_109848a60(&lStack_488,(long)(int)plVar10);
  iVar12 = 0;
  for (lVar15 = 0; plVar10 = param_1, (**(code **)(*param_1 + 0x30))(), lVar15 < (int)plVar10;
      lVar15 = lVar15 + 1) {
    plVar10 = param_1;
    (**(code **)(*param_1 + 0x28))(param_1,lVar15);
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x38))();
    lVar16 = *(long *)(*(long *)(plVar7[1] + 0x10) + (long)(int)plVar10 * 8);
    FUN_109846678(lVar16,lVar13);
    *(undefined1 *)(lVar16 + 100) = 1;
    *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)(lVar16 + 0x48);
    uVar11 = *(uint *)(lVar16 + 0x1c);
    if (9 < uVar11) {
LAB_109847138:
      uVar14 = 0;
      goto LAB_1098473d4;
    }
    uVar6 = 1 << (ulong)(uVar11 & 0x1f);
    if ((uVar6 & 0x2a) == 0) {
      if ((uVar6 & 0x54) == 0) {
        if (uVar11 != 9) goto LAB_109847138;
        bVar3 = *(byte *)(lVar16 + 0x18);
        uVar1 = *(undefined4 *)(lVar16 + 0x38);
        puVar8 = (undefined8 *)0x70;
        __Znwm();
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(byte *)(puVar8 + 3) = bVar3;
        *(undefined4 *)((long)puVar8 + 0x1c) = 6;
        *(undefined1 *)(puVar8 + 4) = 0;
        puVar8[5] = (ulong)bVar3 << 2;
        puVar8[6] = 0;
        *(undefined4 *)(puVar8 + 7) = uVar1;
        puVar8[0xd] = 0;
        *(undefined8 *)((long)puVar8 + 0x44) = 0;
        *(undefined8 *)((long)puVar8 + 0x3c) = 0;
        *(undefined8 *)((long)puVar8 + 0x54) = 0;
        *(undefined8 *)((long)puVar8 + 0x4c) = 0;
        *(undefined8 *)((long)puVar8 + 0x5c) = 0;
        *(undefined1 *)((long)puVar8 + 100) = 1;
        puStack_470 = puVar8;
        FUN_109846678();
        FUN_1098474cc(param_1 + 0xf,&puStack_470);
        puVar8 = puStack_470;
        lVar16 = *(long *)(param_1[0x10] + -8);
        puStack_470 = (undefined8 *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          func_0x000109846568(&puStack_470);
        }
      }
    }
    else if (*(char *)(lVar16 + 0x18) != '\0') {
      uVar11 = 0;
      do {
        puStack_470 = (undefined8 *)((ulong)puStack_470 & 0xffffffff00000000);
        FUN_1092d7128(param_1 + 0xc,&puStack_470);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(byte *)(lVar16 + 0x18));
    }
    iVar2 = *(int *)(lVar16 + 0x1c);
    uVar11 = iVar2 - 1;
    if (uVar11 < 0xb) {
      uVar11 = *(uint *)(&UNK_10e002a44 + (ulong)uVar11 * 4);
    }
    else {
      uVar11 = 0xffffffff;
    }
    bVar3 = *(byte *)(lVar16 + 0x18);
    plVar10 = (long *)(lStack_488 + lVar15 * 0x18);
    *plVar10 = lVar16;
    *(int *)(plVar10 + 1) = iVar12;
    *(int *)((long)plVar10 + 0xc) = iVar2;
    *(uint *)(plVar10 + 2) = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
    *(uint *)((long)plVar10 + 0x14) = (uint)bVar3;
    iVar12 = iVar12 + (uint)bVar3;
  }
  FUN_109849340(&lStack_4c8,lStack_488,uStack_480);
  uVar14 = 0;
  if (bVar4 < 3) {
    if (bVar4 == 0) {
      FUN_109871c38(&puStack_470,iVar12);
      ppuVar9 = &puStack_470;
      FUN_1098494dc(ppuVar9,param_2,&lStack_4c8,lVar13);
      uVar11 = (uint)ppuVar9;
    }
    else {
      if (bVar4 != 1) {
        if (bVar4 != 2) goto LAB_1098473b4;
        FUN_109871e20(&puStack_470,iVar12);
        ppuVar9 = &puStack_470;
        FUN_10984b680(ppuVar9,param_2,&lStack_4c8,lVar13);
        uVar11 = (uint)ppuVar9;
        goto LAB_109847190;
      }
      FUN_109850420(&puStack_470,iVar12);
      ppuVar9 = &puStack_470;
      FUN_10984a774(ppuVar9,param_2,&lStack_4c8,lVar13);
      uVar11 = (uint)ppuVar9;
    }
    aplStack_70[0] = alStack_378;
    func_0x000109848f28(aplStack_70);
    aplStack_70[0] = &lStack_390;
    func_0x000109848f28(aplStack_70);
    if (lStack_3a8 != 0) {
      alStack_3a0[0] = lStack_3a8;
      __ZdlPv();
    }
    if (lStack_3c0 != 0) {
      lStack_3b8 = lStack_3c0;
      __ZdlPv();
    }
    uStack_3c8 = (ulong)uStack_3c8._4_4_ << 0x20;
    lStack_3e0 = lStack_3e8;
    lStack_3d0 = lStack_3e8;
    if (lStack_3e8 != 0) {
      __ZdlPv();
    }
    uStack_3f0 = (ulong)uStack_3f0._4_4_ << 0x20;
    lStack_408 = lStack_410;
    lStack_3f8 = lStack_410;
    if (lStack_410 != 0) {
      __ZdlPv();
    }
    uStack_418 = (ulong)uStack_418._4_4_ << 0x20;
    lStack_430 = lStack_438;
    lStack_420 = lStack_438;
    if (lStack_438 != 0) {
      __ZdlPv();
    }
    uStack_440 = (ulong)uStack_440._4_4_ << 0x20;
    iVar12 = iStack_468;
    lStack_448 = lStack_460;
joined_r0x000109847218:
    if (lStack_448 != 0) {
      __ZdlPv();
    }
    uVar6 = 0;
    if (iVar12 == iVar5) {
      uVar6 = uVar11;
    }
    if ((uVar6 & 1) == 0) {
LAB_109847130:
      uVar14 = 0;
      goto LAB_1098473b4;
    }
  }
  else {
    if (bVar4 < 5) {
      if (bVar4 == 3) {
        FUN_109850608(&puStack_470,iVar12);
        ppuVar9 = &puStack_470;
        FUN_10984c590(ppuVar9,param_2,&lStack_4c8,lVar13);
        uVar11 = (uint)ppuVar9;
LAB_109847190:
        aplStack_70[0] = alStack_388;
        func_0x000109848f28(aplStack_70);
        aplStack_70[0] = alStack_3a0;
        func_0x000109848f28(aplStack_70);
        if (lStack_3b8 != 0) {
          lStack_3b0 = lStack_3b8;
          __ZdlPv();
        }
        if (lStack_3d0 != 0) {
          uStack_3c8 = lStack_3d0;
          __ZdlPv();
        }
        uStack_3d8 = 0;
        uStack_3f0 = lStack_3f8;
        lStack_3e0 = lStack_3f8;
        if (lStack_3f8 != 0) {
          __ZdlPv();
        }
        uStack_400 = 0;
        uStack_418 = lStack_420;
        lStack_408 = lStack_420;
        if (lStack_420 != 0) {
          __ZdlPv();
        }
        uStack_428 = 0;
        uStack_440 = lStack_448;
        lStack_430 = lStack_448;
        iVar12 = iStack_468;
      }
      else {
        if (bVar4 != 4) goto LAB_1098473b4;
        FUN_109871ff0(&puStack_470,iVar12);
        ppuVar9 = &puStack_470;
        FUN_10984d4a0(ppuVar9,param_2,&lStack_4c8,lVar13);
        uVar11 = (uint)ppuVar9;
LAB_109847244:
        aplStack_70[0] = alStack_88;
        func_0x000109848f28(aplStack_70);
        aplStack_70[0] = alStack_a0;
        func_0x000109848f28(aplStack_70);
        if (lStack_b8 != 0) {
          lStack_b0 = lStack_b8;
          __ZdlPv();
        }
        if (lStack_d0 != 0) {
          lStack_c8 = lStack_d0;
          __ZdlPv();
        }
        lStack_f0 = lStack_f8;
        uStack_d8 = 0;
        lStack_e0 = lStack_f8;
        if (lStack_f8 != 0) {
          __ZdlPv();
        }
        lStack_118 = lStack_120;
        uStack_100 = 0;
        lStack_108 = lStack_120;
        if (lStack_120 != 0) {
          __ZdlPv();
        }
        uStack_128 = 0;
        iVar12 = iStack_468;
        lStack_140 = lStack_148;
        lStack_130 = lStack_148;
        lStack_448 = lStack_148;
      }
      goto joined_r0x000109847218;
    }
    if (bVar4 == 5) {
      FUN_1098507d8(&puStack_470,iVar12);
      ppuVar9 = &puStack_470;
      FUN_10984e428(ppuVar9,param_2,&lStack_4c8,lVar13);
      uVar11 = (uint)ppuVar9;
      goto LAB_109847244;
    }
    if (bVar4 != 6) goto LAB_1098473b4;
    FUN_1098721ec(&puStack_470,iVar12);
    ppuVar9 = &puStack_470;
    FUN_10984f348(ppuVar9,param_2,&lStack_4c8,lVar13);
    aplStack_70[0] = alStack_88;
    func_0x000109848f28(aplStack_70);
    aplStack_70[0] = alStack_a0;
    func_0x000109848f28(aplStack_70);
    if (lStack_b8 != 0) {
      lStack_b0 = lStack_b8;
      __ZdlPv();
    }
    if (lStack_d0 != 0) {
      lStack_c8 = lStack_d0;
      __ZdlPv();
    }
    lStack_f0 = lStack_f8;
    uStack_d8 = 0;
    lStack_e0 = lStack_f8;
    if (lStack_f8 != 0) {
      __ZdlPv();
    }
    lStack_118 = lStack_120;
    uStack_100 = 0;
    lStack_108 = lStack_120;
    if (lStack_120 != 0) {
      __ZdlPv();
    }
    lStack_140 = lStack_148;
    uStack_128 = 0;
    lStack_130 = lStack_148;
    if (lStack_148 != 0) {
      __ZdlPv();
    }
    iVar12 = 0;
    if (iStack_468 == iVar5) {
      iVar12 = (int)ppuVar9;
    }
    if (iVar12 != 1) goto LAB_109847130;
  }
  uVar14 = 1;
LAB_1098473b4:
  if (lStack_4a8 != 0) {
    lStack_4a0 = lStack_4a8;
    __ZdlPv();
  }
  if (lStack_4c8 != 0) {
    lStack_4c0 = lStack_4c8;
    __ZdlPv();
  }
LAB_1098473d4:
  if (lStack_488 != 0) {
    __ZdlPv(lStack_488);
  }
  return uVar14;
}



/* Entry: 1098474cc; end: 1098475af;  */

long * FUN_1098474cc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar6 = *param_2;
    *param_2 = 0;
    puVar10 = puVar2 + 1;
    *puVar2 = uVar6;
    plVar5 = param_1;
  }
  else {
    lVar9 = (long)puVar2 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      func_0x000109848b58();
      if (param_1[4] != 0) {
        param_1[5] = param_1[4];
        __ZdlPv();
      }
      if (*param_1 != 0) {
        param_1[1] = *param_1;
        __ZdlPv();
      }
      return param_1;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    plVar5 = param_1;
    plStack_38 = param_1;
    FUN_109848b6c();
    lVar3 = *param_1;
    lVar4 = param_1[1];
    puVar2 = (undefined8 *)((long)plVar5 + lVar9);
    uVar6 = *param_2;
    *param_2 = 0;
    lVar9 = (long)puVar2 - (lVar4 - lVar3);
    puVar10 = puVar2 + 1;
    *puVar2 = uVar6;
    _memcpy(lVar9,lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar5 + uVar8);
    plVar5 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109848ba0(plVar5);
  }
  param_1[1] = (long)puVar10;
  return plVar5;
}



/* Entry: 1098475b0; end: 1098475ef;  */

long * FUN_1098475b0(long *param_1)

{
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098475f0; end: 109847dbf;  */

undefined8 FUN_1098475f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined8 uVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined **ppuStack_4d0;
  uint uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long lStack_90;
  long lStack_88;
  
  if (*(ushort *)((long)param_2 + 0x32) < 0x203) {
    plVar15 = param_1;
    (**(code **)(*param_1 + 0x30))();
    uVar16 = (ulong)plVar15 & 0xffffffff;
    FUN_109848a60(&lStack_90,uVar16);
    iVar14 = (int)plVar15;
    if (iVar14 != 0) {
      uVar17 = 0;
      plVar15 = (long *)0x0;
      puVar19 = (uint *)(lStack_90 + 0xc);
      do {
        plVar6 = param_1;
        (**(code **)(*param_1 + 0x28))(param_1,uVar17);
        plVar7 = param_1;
        (**(code **)(*param_1 + 0x38))();
        lVar10 = *(long *)(*(long *)(plVar7[1] + 0x10) + (long)(int)plVar6 * 8);
        uVar3 = *(uint *)(lVar10 + 0x1c);
        if (uVar3 < 0xc) {
          uVar20 = 1 << (ulong)(uVar3 & 0x1f);
          if ((uVar20 & 0x260) == 0) {
            uVar12 = 1;
            if (uVar3 != 0xb) {
              if ((uVar20 & 0x580) == 0) goto LAB_109847854;
              goto LAB_109847bfc;
            }
          }
          else {
            uVar12 = 4;
          }
        }
        else {
LAB_109847854:
          uVar20 = 0xffffffff;
          if (uVar3 - 3 < 2) {
            uVar20 = 2;
          }
          uVar12 = 1;
          if (1 < uVar3 - 1) {
            uVar12 = uVar20;
          }
        }
        bVar4 = *(byte *)(lVar10 + 0x18);
        *(long *)(puVar19 + -3) = lVar10;
        puVar19[-1] = (uint)plVar15;
        *puVar19 = uVar3;
        puVar19[1] = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
        puVar19[2] = (uint)bVar4;
        plVar15 = (long *)(ulong)((uint)plVar15 + (uint)bVar4);
        uVar17 = uVar17 + 1;
        puVar19 = puVar19 + 6;
      } while (uVar16 != uVar17);
    }
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x28))(param_1,0);
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x38))();
    lVar8 = *(long *)(*(long *)(plVar7[1] + 0x10) + (long)(int)plVar6 * 8);
    *(undefined1 *)(lVar8 + 100) = 1;
    *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(lVar8 + 0x48);
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    lVar10 = lVar2 + 1;
    if (lVar1 < lVar10) {
LAB_109847bfc:
      uVar13 = 0;
    }
    else {
      lVar11 = *param_2;
      cVar5 = *(char *)(lVar11 + lVar2);
      param_2[2] = lVar10;
      if (cVar5 == '\x01') {
        lVar8 = lVar2 + 2;
        if (lVar8 <= lVar1) {
          bVar4 = *(byte *)(lVar11 + lVar10);
          param_2[2] = lVar8;
          if (bVar4 < 7) {
            if (lVar2 + 6 <= lVar1) {
              uVar21 = *(undefined4 *)(lVar11 + lVar8);
              param_2[2] = lVar2 + 6;
              if (iVar14 != 0) {
                iVar18 = 0;
                do {
                  plVar6 = param_1;
                  (**(code **)(*param_1 + 0x28))(param_1,iVar18);
                  plVar7 = param_1;
                  (**(code **)(*param_1 + 0x38))();
                  lVar10 = *(long *)(*(long *)(plVar7[1] + 0x10) + (long)(int)plVar6 * 8);
                  FUN_109846678(lVar10,uVar21);
                  *(undefined1 *)(lVar10 + 100) = 1;
                  *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(lVar10 + 0x48);
                  iVar18 = iVar18 + 1;
                } while (iVar14 != iVar18);
              }
              FUN_109849340(&lStack_d0,lStack_90,lStack_88);
              if (bVar4 < 3) {
                if (bVar4 == 0) {
                  FUN_109871c38(&ppuStack_4d0,plVar15);
                  pppuVar9 = &ppuStack_4d0;
                  FUN_1098494dc(pppuVar9,param_2,&lStack_d0,0xffffffff);
                  func_0x00010984803c(&ppuStack_4d0);
                }
                else if (bVar4 == 1) {
                  FUN_109850420(&ppuStack_4d0,plVar15);
                  pppuVar9 = &ppuStack_4d0;
                  FUN_10984a774(pppuVar9,param_2,&lStack_d0,0xffffffff);
                  func_0x000109848104(&ppuStack_4d0);
                }
                else {
                  FUN_109871e20(&ppuStack_4d0,plVar15);
                  pppuVar9 = &ppuStack_4d0;
                  FUN_10984b680(pppuVar9,param_2,&lStack_d0,0xffffffff);
                  func_0x0001098481cc(&ppuStack_4d0);
                }
              }
              else if (bVar4 < 5) {
                if (bVar4 == 3) {
                  FUN_109850608(&ppuStack_4d0,plVar15);
                  pppuVar9 = &ppuStack_4d0;
                  FUN_10984c590(pppuVar9,param_2,&lStack_d0,0xffffffff);
                  func_0x00010984827c(&ppuStack_4d0);
                }
                else {
                  FUN_109871ff0(&ppuStack_4d0,plVar15);
                  pppuVar9 = &ppuStack_4d0;
                  FUN_10984d4a0(pppuVar9,param_2,&lStack_d0,0xffffffff);
                  FUN_109848fbc(&ppuStack_4d0);
                }
              }
              else if (bVar4 == 5) {
                FUN_1098507d8(&ppuStack_4d0,plVar15);
                pppuVar9 = &ppuStack_4d0;
                FUN_10984e428(pppuVar9,param_2,&lStack_d0,0xffffffff);
                func_0x00010984906c(&ppuStack_4d0);
              }
              else {
                FUN_1098721ec(&ppuStack_4d0,plVar15);
                pppuVar9 = &ppuStack_4d0;
                FUN_10984f348(pppuVar9,param_2,&lStack_d0,0xffffffff);
                func_0x00010984911c(&ppuStack_4d0);
              }
              if (((ulong)pppuVar9 & 1) != 0) {
                FUN_1098475b0(&lStack_d0);
LAB_109847bbc:
                uVar13 = 1;
                goto LAB_109847c04;
              }
              FUN_1098475b0(&lStack_d0);
            }
          }
          else {
            _printf(&UNK_10f581c05);
          }
        }
        goto LAB_109847bfc;
      }
      if (cVar5 != '\0') goto LAB_109847bfc;
      if (lStack_88 - lStack_90 == 0x18) {
        if ((*(int *)(lStack_90 + 0x14) == 3) && (lVar10 = lVar2 + 2, lVar10 <= lVar1)) {
          param_2[2] = lVar10;
          if (lVar2 + 6 <= lVar1) {
            uVar21 = *(undefined4 *)(lVar11 + lVar10);
            param_2[2] = lVar2 + 6;
            FUN_109846678(lVar8,uVar21);
            uStack_c4 = 0;
            uStack_c0 = 0;
            lStack_d0 = 0;
            uStack_bc = uVar21;
            FUN_1098502f8(&ppuStack_4d0,&lStack_90);
            plVar15 = &lStack_d0;
            FUN_109847dfc(plVar15,param_2,&ppuStack_4d0);
            FUN_109847ffc(&ppuStack_4d0);
            if (((ulong)plVar15 & 1) != 0) goto LAB_109847bbc;
          }
        }
        goto LAB_109847bfc;
      }
      uVar13 = 0;
    }
LAB_109847c04:
    if (lStack_90 == 0) {
      return uVar13;
    }
    goto LAB_109847c0c;
  }
  lStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  for (iVar14 = 0; plVar15 = param_1, (**(code **)(*param_1 + 0x30))(), iVar14 < (int)plVar15;
      iVar14 = iVar14 + 1) {
    plVar15 = param_1;
    (**(code **)(*param_1 + 0x28))(param_1,iVar14);
    plVar6 = param_1;
    (**(code **)(*param_1 + 0x38))();
    lVar10 = *(long *)(*(long *)(plVar6[1] + 0x10) + (long)(int)plVar15 * 8);
    if (*(int *)(lVar10 + 0x1c) == 9) {
      uVar16 = (ulong)*(byte *)(lVar10 + 0x18);
      func_0x00010742a308(&lStack_d0,uVar16);
      if (param_2[1] < (long)(param_2[2] + uVar16 * 4)) goto LAB_109847a1c;
      _memcpy(lStack_d0,*param_2 + param_2[2],uVar16 * 4);
      lVar1 = param_2[2] + uVar16 * 4;
      param_2[2] = lVar1;
      lVar10 = lVar1 + 4;
      if (param_2[1] < lVar10) goto LAB_109847a1c;
      uVar21 = *(undefined4 *)(*param_2 + lVar1);
      param_2[2] = lVar10;
      if (param_2[1] < lVar1 + 5) goto LAB_109847a1c;
      bVar4 = *(byte *)(*param_2 + lVar10);
      param_2[2] = lVar1 + 5;
      if (0x1f < bVar4) goto LAB_109847a1c;
      ppuStack_4d0 = &PTR_FUN_110b14b98;
      lStack_4b8 = 0;
      uStack_4b0 = 0;
      lStack_4c0 = 0;
      uStack_4a8 = 0;
      if (0x1d < bVar4 - 1) goto LAB_109847a1c;
      uStack_4c8 = (uint)bVar4;
      FUN_1093c3a1c(&lStack_4c0,lStack_d0,lStack_d0 + uVar16 * 4,uVar16);
      pppuVar9 = &ppuStack_4d0;
      uStack_4a8 = uVar21;
      FUN_109846384(pppuVar9,*(undefined8 *)
                              (param_1[0xf] +
                              ((long)(((ulong)(param_1[10] - param_1[9]) >> 4) * -0x5555555500000000
                                     ) >> 0x1d)));
      if (((ulong)pppuVar9 & 1) == 0) {
        ppuStack_4d0 = &PTR_FUN_110b14b98;
        if (lStack_4c0 != 0) {
          lStack_4b8 = lStack_4c0;
          __ZdlPv();
        }
        goto LAB_109847a1c;
      }
      FUN_109847dc0(param_1 + 9,&ppuStack_4d0);
      ppuStack_4d0 = &PTR_FUN_110b14b98;
      if (lStack_4c0 != 0) {
        lStack_4b8 = lStack_4c0;
        __ZdlPv();
      }
    }
  }
  if (param_1[0xd] != param_1[0xc]) {
    uVar16 = 0;
    do {
      iVar14 = 1;
      func_0x000109850288(1,&ppuStack_4d0,param_2);
      if (iVar14 == 0) goto LAB_109847a1c;
      lVar10 = param_1[0xc];
      *(uint *)(lVar10 + uVar16 * 4) = -((uint)ppuStack_4d0 & 1) ^ (uint)ppuStack_4d0 >> 1;
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulong)(param_1[0xd] - lVar10 >> 2));
  }
  uVar13 = 1;
  goto LAB_109847a20;
LAB_109847a1c:
  uVar13 = 0;
LAB_109847a20:
  if (lStack_d0 == 0) {
    return uVar13;
  }
  uStack_c8 = (undefined4)lStack_d0;
  uStack_c4 = (undefined4)((ulong)lStack_d0 >> 0x20);
  lStack_90 = lStack_d0;
LAB_109847c0c:
  __ZdlPv(lStack_90);
  return uVar13;
}



/* Entry: 109847dc0; end: 109847dfb;  */

void FUN_109847dc0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_109848c20();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_109848c98();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 109847dfc; end: 109847ffb;  */

undefined8 FUN_109847dfc(uint *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  
  puStack_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  lVar2 = param_2[2];
  lVar1 = lVar2 + 4;
  if (lVar1 <= param_2[1]) {
    iVar3 = *(int *)(*param_2 + lVar2);
    param_2[2] = lVar1;
    puVar7 = param_1;
    if (iVar3 == 2) {
      FUN_109872464(param_1,param_2,&puStack_78);
LAB_109847e90:
      puVar6 = puStack_70;
      if (((ulong)puVar7 & 1) != 0) {
        uVar5 = ~(-1 << (ulong)(*param_1 & 0x1f));
        if (*param_1 == 0) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = (float)param_1[1] / (float)uVar5;
        }
        if (puStack_70 != puStack_78) {
          uVar10 = *(uint *)(param_3 + 0x38);
          puVar13 = puStack_78;
          do {
            fStack_58 = fVar15 * (float)(int)(*(int *)(puVar13 + 1) - uVar5);
            uVar14 = NEON_scvtf(CONCAT44((int)((ulong)*puVar13 >> 0x20) - uVar5,
                                         (int)*puVar13 - uVar5),4);
            uStack_60 = CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar15,(float)uVar14 * fVar15);
            puVar11 = (undefined8 *)**(long **)(param_3 + 0x20);
            uVar12 = uVar10;
            if ((*(byte *)((long)puVar11 + 100) & 1) == 0) {
              uVar12 = *(uint *)(puVar11[9] + (ulong)uVar10 * 4);
            }
            if (uVar12 < *(uint *)(puVar11 + 0xc)) {
              _memcpy(*(long *)*puVar11 + puVar11[5] * (ulong)uVar12,
                      (long)&uStack_60 + (ulong)*(uint *)(*(long **)(param_3 + 0x20) + 1) * 4);
              uVar10 = *(uint *)(param_3 + 0x38);
            }
            uVar10 = uVar10 + 1;
            *(uint *)(param_3 + 0x38) = uVar10;
            puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          } while (puVar13 != puVar6);
        }
        uVar14 = 1;
        goto LAB_109847efc;
      }
    }
    else {
      if (iVar3 == 3) {
        if (param_2[1] < lVar2 + 5) goto LAB_109847ef8;
        cVar4 = *(char *)(*param_2 + lVar1);
        param_2[2] = lVar2 + 5;
        *(char *)(param_1 + 2) = cVar4;
        if (cVar4 == '\x01') {
          FUN_109872464(param_1,param_2,&puStack_78);
          goto LAB_109847e90;
        }
        uVar9 = *(undefined8 *)PTR____stderrp_11034bdc8;
        puVar8 = &UNK_10f581c5c;
        uVar14 = 0x17;
      }
      else {
        uVar9 = *(undefined8 *)PTR____stderrp_11034bdc8;
        puVar8 = &UNK_10f581c74;
        uVar14 = 0x18;
      }
      _fwrite(puVar8,uVar14,1,uVar9);
    }
  }
LAB_109847ef8:
  uVar14 = 0;
LAB_109847efc:
  if (puStack_78 != (undefined8 *)0x0) {
    puStack_70 = puStack_78;
    __ZdlPv();
  }
  return uVar14;
}



/* Entry: 109847ffc; end: 10984832b;  */

long * FUN_109847ffc(long *param_1)

{
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10984832c; end: 1098488e3;  */

undefined8 FUN_10984832c(long *param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  short *psVar13;
  float *pfVar14;
  char *pcVar15;
  ulong uVar16;
  short *psVar17;
  char *pcVar18;
  bool bVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  char *pcVar26;
  float *pfVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  float fVar33;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  int *piStack_88;
  int *piStack_80;
  char cStack_71;
  
  if (((param_1[0xf] != param_1[0x10]) || (param_1[0xc] != param_1[0xd])) &&
     (plVar4 = param_1, (**(code **)(*param_1 + 0x30))(), 0 < (int)plVar4)) {
    iVar28 = 0;
    uVar30 = 0;
    iVar31 = 0;
    do {
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x28))(param_1,iVar31);
      plVar5 = param_1;
      (**(code **)(*param_1 + 0x38))();
      puVar23 = *(undefined8 **)(*(long *)(plVar5[1] + 0x10) + (long)(int)plVar4 * 8);
      iVar20 = *(int *)((long)puVar23 + 0x1c);
      if (iVar20 < 5) {
        if (iVar20 == 1 || iVar20 == 3) {
LAB_1098483f8:
          FUN_109265eec(&lStack_b8,*(undefined1 *)(puVar23 + 3));
          FUN_10925b8c4(&lStack_d0,*(undefined1 *)(puVar23 + 3));
          iVar20 = *(int *)((long)puVar23 + 0x1c);
          iVar29 = (int)uVar30;
          if (iVar20 == 1) {
            FUN_109246310(&piStack_88,*(undefined1 *)(puVar23 + 3));
            pcVar26 = (char *)(ulong)*(byte *)(puVar23 + 3);
            if (pcVar26 == (char *)0x0) {
              pcVar26 = (char *)0x0;
            }
            else {
              __Znwm();
              _bzero();
            }
            pcVar18 = pcStack_98;
            pcVar15 = pcStack_98;
            if (*(int *)(puVar23 + 0xc) != 0) {
              uVar30 = 0;
              do {
                _memcpy(piStack_88,*(long *)*puVar23 + puVar23[6] + puVar23[5] * uVar30);
                uVar21 = (ulong)*(byte *)(puVar23 + 3);
                if (uVar21 != 0) {
                  piVar11 = piStack_88;
                  pcVar15 = (char *)(param_1[0xc] + (long)iVar29 * 4);
                  pcVar18 = pcVar26;
                  do {
                    *pcVar18 = (char)*piVar11 + *pcVar15;
                    uVar21 = uVar21 - 1;
                    piVar11 = (int *)((long)piVar11 + 1);
                    pcVar15 = pcVar15 + 4;
                    pcVar18 = pcVar18 + 1;
                  } while (uVar21 != 0);
                }
                _memcpy(*(long *)*puVar23 + puVar23[5] * uVar30,pcVar26);
                uVar30 = uVar30 + 1;
                pcVar18 = pcStack_98;
                pcVar15 = pcStack_98;
              } while (uVar30 < *(uint *)(puVar23 + 0xc));
            }
joined_r0x0001098487dc:
            pcStack_98 = pcVar18;
            if (pcVar26 != (char *)0x0) {
              __ZdlPv(pcVar26);
              pcVar15 = pcStack_98;
            }
            pcStack_98 = pcVar15;
            if (piStack_88 != (int *)0x0) {
              piStack_80 = piStack_88;
              __ZdlPv();
            }
LAB_1098487f8:
            uVar30 = (ulong)(iVar29 + (uint)*(byte *)(puVar23 + 3));
            bVar19 = true;
          }
          else {
            if (iVar20 == 3) {
              FUN_109366414(&piStack_88,*(undefined1 *)(puVar23 + 3));
              FUN_109366578(&uStack_a0,*(undefined1 *)(puVar23 + 3));
              if (*(int *)(puVar23 + 0xc) != 0) {
                uVar30 = 0;
                do {
                  _memcpy(piStack_88,*(long *)*puVar23 + puVar23[6] + puVar23[5] * uVar30);
                  uVar21 = (ulong)*(byte *)(puVar23 + 3);
                  if (uVar21 != 0) {
                    piVar11 = piStack_88;
                    psVar13 = (short *)(param_1[0xc] + (long)iVar29 * 4);
                    psVar17 = (short *)CONCAT44(uStack_9c,uStack_a0);
                    do {
                      *psVar17 = (short)*piVar11 + *psVar13;
                      uVar21 = uVar21 - 1;
                      piVar11 = (int *)((long)piVar11 + 2);
                      psVar13 = psVar13 + 2;
                      psVar17 = psVar17 + 1;
                    } while (uVar21 != 0);
                  }
                  _memcpy(*(long *)*puVar23 + puVar23[5] * uVar30);
                  uVar30 = uVar30 + 1;
                } while (uVar30 < *(uint *)(puVar23 + 0xc));
              }
              pcVar26 = (char *)CONCAT44(uStack_9c,uStack_a0);
              pcVar18 = pcVar26;
              pcVar15 = pcStack_98;
              goto joined_r0x0001098487dc;
            }
            if (iVar20 != 5) goto LAB_1098487f8;
            FUN_109265eec(&piStack_88,*(undefined1 *)(puVar23 + 3));
            FUN_10925b8c4(&uStack_a0,*(undefined1 *)(puVar23 + 3));
            if (*(int *)(puVar23 + 0xc) != 0) {
              uVar21 = 0;
              do {
                _memcpy(piStack_88,*(long *)*puVar23 + puVar23[6] + puVar23[5] * uVar21);
                uVar7 = (ulong)*(byte *)(puVar23 + 3);
                if (uVar7 != 0) {
                  piVar11 = piStack_88;
                  piVar12 = (int *)CONCAT44(uStack_9c,uStack_a0);
                  uVar16 = -(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2;
                  do {
                    if (*piVar11 < 0) {
                      bVar19 = false;
                      goto LAB_109848728;
                    }
                    *piVar12 = *(int *)(param_1[0xc] + uVar16) + *piVar11;
                    uVar16 = uVar16 + 4;
                    uVar7 = uVar7 - 1;
                    piVar11 = piVar11 + 1;
                    piVar12 = piVar12 + 1;
                  } while (uVar7 != 0);
                }
                _memcpy(*(long *)*puVar23 + puVar23[5] * uVar21,CONCAT44(uStack_9c,uStack_a0));
                uVar21 = uVar21 + 1;
              } while (uVar21 < *(uint *)(puVar23 + 0xc));
            }
            bVar19 = true;
LAB_109848728:
            if ((char *)CONCAT44(uStack_9c,uStack_a0) != (char *)0x0) {
              pcStack_98 = (char *)CONCAT44(uStack_9c,uStack_a0);
              __ZdlPv();
            }
            if (piStack_88 != (int *)0x0) {
              piStack_80 = piStack_88;
              __ZdlPv();
            }
            if (bVar19) goto LAB_1098487f8;
            bVar19 = false;
          }
          if (lStack_d0 != 0) {
            lStack_c8 = lStack_d0;
            __ZdlPv();
          }
          if (lStack_b8 != 0) {
            lStack_b0 = lStack_b8;
            __ZdlPv();
          }
          if (!bVar19) {
            return 0;
          }
        }
      }
      else if (iVar20 == 9) {
        puVar24 = *(undefined8 **)(param_1[0xf] + (long)iVar28 * 8);
        lVar22 = param_1[9];
        plVar4 = param_1;
        (**(code **)(*param_1 + 0x38))();
        lVar25 = plVar4[10];
        uStack_a0 = *(undefined4 *)(puVar23 + 7);
        func_0x000107c31940(&piStack_88,&UNK_10f581c43);
        FUN_1098488e4(lVar25,&uStack_a0,&piStack_88,0);
        if (cStack_71 < '\0') {
          __ZdlPv(piStack_88);
        }
        if ((int)lVar25 == 0) {
          lVar22 = lVar22 + (long)iVar28 * 0x30;
          uVar2 = *(uint *)(lVar22 + 8);
          bVar3 = *(byte *)(puVar23 + 3);
          pfVar27 = (float *)((ulong)bVar3 * 4);
          pfVar6 = pfVar27;
          __Znam();
          if (uVar2 == 0) {
            __ZdaPv(pfVar6);
            return 0;
          }
          if (*(int *)(puVar24 + 0xc) != 0) {
            lVar25 = 0;
            uVar32 = 0;
            iVar20 = 0;
            fVar33 = *(float *)(lVar22 + 0x28);
            lVar8 = puVar24[6];
            lVar10 = *(long *)*puVar24;
            do {
              if (bVar3 != 0) {
                lVar1 = (long)iVar20;
                iVar20 = (uint)bVar3 + iVar20;
                pfVar9 = *(float **)(lVar22 + 0x10);
                piVar11 = (int *)(lVar10 + lVar8 + lVar1 * 4);
                pfVar14 = pfVar6;
                uVar21 = (ulong)bVar3;
                do {
                  *pfVar14 = *pfVar9 + (fVar33 / (float)(uint)~(-1 << (ulong)(uVar2 & 0x1f))) *
                                       (float)*piVar11;
                  uVar21 = uVar21 - 1;
                  pfVar9 = pfVar9 + 1;
                  piVar11 = piVar11 + 1;
                  pfVar14 = pfVar14 + 1;
                } while (uVar21 != 0);
              }
              _memcpy(*(long *)puVar23[8] + lVar25,pfVar6,pfVar27);
              lVar25 = lVar25 + (long)pfVar27;
              uVar32 = uVar32 + 1;
            } while (uVar32 < *(uint *)(puVar24 + 0xc));
          }
          __ZdaPv(pfVar6);
          iVar28 = iVar28 + 1;
        }
        else {
          FUN_10984671c(puVar23,puVar24);
          iVar28 = iVar28 + 1;
        }
      }
      else if (iVar20 == 5) goto LAB_1098483f8;
      iVar31 = iVar31 + 1;
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x30))();
    } while (iVar31 < (int)plVar4);
  }
  return 1;
}



/* Entry: 1098488e4; end: 10984898b;  */

uint FUN_1098488e4(long *param_1,int *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = param_1 + 4;
  plVar4 = (long *)*plVar2;
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar2;
    do {
      lVar1 = 8;
      if (*param_2 <= (int)plVar4[4]) {
        lVar1 = 0;
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + lVar1);
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && ((int)plVar3[4] <= *param_2)) {
      plVar3 = plVar3 + 5;
      plVar2 = plVar3;
      FUN_1098509d4(plVar3,param_3);
      if (plVar2 != (long *)0x0) goto LAB_10984895c;
    }
  }
  plVar3 = param_1;
LAB_10984895c:
  func_0x000109875f70(plVar3,param_3,0xffffffff);
  if ((int)plVar3 != -1) {
    param_4 = (uint)((int)plVar3 != 0);
  }
  return param_4;
}



/* Entry: 10984898c; end: 109848a5f;  */

void FUN_10984898c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b14cc8;
  puStack_28 = param_1 + 0xf;
  func_0x000109849218(&puStack_28);
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  puStack_28 = param_1 + 9;
  FUN_1098492b4(&puStack_28);
  func_0x0001098491cc(param_1);
  return;
}



/* Entry: 109848a60; end: 109848af7;  */

undefined8 * FUN_109848a60(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109848af8(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 109848af8; end: 109848b43;  */

undefined1  [16] FUN_109848af8(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    uVar3 = param_2;
    __Znwm();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x18;
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_109848b44();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104c4f740();
  lVar1 = plVar2[1];
  func_0x000109848bd4();
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = lVar1;
  auVar6._0_8_ = plVar2;
  return auVar6;
}



/* Entry: 109848b44; end: 109848b6b;  */

undefined1  [16] FUN_109848b44(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  func_0x000109848bd4();
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 109848b6c; end: 109848c1f;  */

undefined1  [16] FUN_109848b6c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  func_0x000109848bd4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 109848c20; end: 109848c97;  */

void FUN_109848c20(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = &PTR_FUN_110b14b98;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 8);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = 0;
  FUN_1092cc0dc();
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 **)(param_1 + 8) = puVar1 + 6;
  return;
}



/* Entry: 109848c98; end: 109848deb;  */

/* WARNING: Possible PIC construction at 0x000109848d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109848d90) */

void FUN_109848c98(ulong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [24];
  ulong *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar1 = auStack_70;
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 4) * -0x5555555555555555 + 1;
  if (uVar5 < 0x555555555555556) {
    lVar3 = (long)(param_1[2] - *param_1) >> 4;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar6 = 0x555555555555555;
    }
    puStack_38 = param_1;
    if (uVar6 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      FUN_109848e00();
    }
    param_4 = (undefined8 *)((long)puVar2 + lVar7);
    puStack_40 = puVar2 + uVar6 * 6;
    *param_4 = &PTR_FUN_110b14b98;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_2 + 1);
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[2] = 0;
    puStack_58 = puVar2;
    puStack_50 = param_4;
    puStack_48 = param_4;
    FUN_1092cc0dc();
    *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_2 + 5);
    puStack_48 = param_4 + 6;
    param_2 = (undefined8 *)*param_1;
    param_3 = (undefined8 *)param_1[1];
    param_4 = (undefined8 *)((long)param_4 + ((long)param_2 - (long)param_3));
    uVar9 = 0x109848d90;
    unaff_x20 = param_4;
  }
  else {
    FUN_109848dec();
    func_0x000109848ed8(&puStack_58);
    __Unwind_Resume(param_1);
    pcStack_78 = FUN_109848dec;
    ppuStack_80 = ppuVar8;
    func_0x000104c4f6cc(&DAT_10f62a4d8);
    puVar1 = &stack0xffffffffffffff60;
    pcStack_88 = FUN_109848e00;
    ppuVar8 = &puStack_90;
    if (param_2 < (undefined8 *)0x555555555555556) {
      puStack_90 = (undefined1 *)&ppuStack_80;
      __Znwm((long)param_2 * 0x30);
      return;
    }
    uVar9 = 0x109848e44;
    puStack_90 = (undefined1 *)&ppuStack_80;
    func_0x000104c4f740();
  }
  if (param_2 != param_3) {
    *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
    *(ulong **)(puVar1 + -0x18) = param_1;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar8;
    *(undefined8 *)(puVar1 + -8) = uVar9;
    puVar4 = param_2;
    do {
      *param_4 = &PTR_FUN_110b14b98;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar4 + 1);
      param_4[3] = 0;
      param_4[4] = 0;
      param_4[2] = 0;
      uVar9 = puVar4[2];
      param_4[3] = puVar4[3];
      param_4[2] = uVar9;
      param_4[4] = puVar4[4];
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[2] = 0;
      *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar4 + 5);
      puVar4 = puVar4 + 6;
      param_4 = param_4 + 6;
    } while (puVar4 != param_3);
    do {
      puVar4 = param_2 + 6;
      (**(code **)*param_2)(param_2);
      param_2 = puVar4;
    } while (puVar4 != param_3);
  }
  return;
}



/* Entry: 109848dec; end: 109848dff;  */

void FUN_109848dec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if ((undefined8 *)0x555555555555555 < param_2) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = &PTR_FUN_110b14b98;
        *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar1 + 1);
        param_4[3] = 0;
        param_4[4] = 0;
        param_4[2] = 0;
        uVar2 = puVar1[2];
        param_4[3] = puVar1[3];
        param_4[2] = uVar2;
        param_4[4] = puVar1[4];
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[2] = 0;
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar1 + 5);
        puVar1 = puVar1 + 6;
        param_4 = param_4 + 6;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 6;
        (**(code **)*param_2)(param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}


