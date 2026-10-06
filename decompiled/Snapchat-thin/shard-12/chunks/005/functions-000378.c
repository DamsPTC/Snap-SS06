/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109256ad4; end: 109256c0f;  */

void FUN_109256ad4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = (lVar3 - lVar4 >> 4) * 0x34f72c234f72c235;
  if (*(uint *)(param_1 + 0x30) <= uVar2 && uVar2 - *(uint *)(param_1 + 0x30) != 0) {
    lVar1 = 0;
    if (lVar3 != lVar4) {
      lVar1 = LZCOUNT(uVar2) * -2 + 0x7e;
    }
    FUN_109256f80(lVar4,lVar3,lVar1,1);
    uVar2 = (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 4) * 0x34f72c234f72c235;
    if (*(uint *)(param_1 + 0x30) <= uVar2 && uVar2 - *(uint *)(param_1 + 0x30) != 0) {
      lVar3 = *(long *)(param_1 + 0x20) + -0x1d0;
      lVar4 = lVar3;
      do {
        func_0x000109256f04(lVar3 + 0x1c8,0);
        *(long *)(param_1 + 0x20) = lVar3;
        uVar2 = (lVar4 - *(long *)(param_1 + 0x18) >> 4) * 0x34f72c234f72c235;
        lVar4 = lVar4 + -0x1d0;
        lVar3 = lVar3 + -0x1d0;
      } while (*(uint *)(param_1 + 0x30) <= uVar2 && uVar2 - *(uint *)(param_1 + 0x30) != 0);
    }
  }
  return;
}



/* Entry: 109256c10; end: 109256ca7;  */

bool FUN_109256c10(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180)) {
    return false;
  }
  if (*(int *)(param_1 + 0x180) != 0) {
    uVar4 = 0;
    uVar3 = param_1;
    lVar2 = param_2;
    do {
      uVar1 = uVar3;
      FUN_109256ca8(uVar3,lVar2);
      if ((uVar1 & 1) == 0) {
        return false;
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0x30;
      uVar3 = uVar3 + 0x30;
    } while (uVar4 < *(uint *)(param_1 + 0x180));
  }
  lVar2 = param_1 + 0x188;
  _memcmp(lVar2,param_2 + 0x188,0x30);
  return (int)lVar2 == 0;
}



/* Entry: 109256ca8; end: 109256cc7;  */

bool FUN_109256ca8(undefined8 param_1,undefined8 param_2)

{
  _memcmp(param_1,param_2,0x30);
  return (int)param_1 == 0;
}



/* Entry: 109256cc8; end: 109256eef;  */

/* WARNING: Possible PIC construction at 0x000109256e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109256ed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109256e80) */
/* WARNING: Removing unreachable block (ram,0x000109256e8c) */

long FUN_109256cc8(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  ppuVar4 = (undefined1 **)auStack_90;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar12 = lVar3 - lVar2;
  uVar6 = (lVar12 >> 4) * 0x34f72c234f72c235 + 1;
  if (uVar6 < 0x8d3dcb08d3dcb1) {
    lVar11 = param_1[2];
    lVar7 = lVar11 - lVar2 >> 4;
    uVar8 = lVar7 * 0x69ee58469ee5846a;
    if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
      uVar8 = uVar6;
    }
    if (0x469ee58469ee57 < (ulong)(lVar7 * 0x34f72c234f72c235)) {
      uVar8 = 0x8d3dcb08d3dcb0;
    }
    plStack_68 = param_1;
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x8d3dcb08d3dcb0 < uVar8) {
        func_0x000104c4f740();
        FUN_109256f2c(&lStack_88);
        uVar15 = 0x109256ef0;
        __Unwind_Resume(param_1);
        goto FUN_109256ef0;
      }
      lVar7 = uVar8 * 0x1d0;
      __Znwm();
    }
    lVar1 = lVar7 + lVar12;
    lVar10 = lVar7 + uVar8 * 0x1d0;
    lStack_88 = lVar7;
    lStack_80 = lVar1;
    lStack_78 = lVar1;
    lStack_70 = lVar10;
    _memcpy(lVar1,param_2,0x1c0);
    lVar9 = *param_3;
    *(undefined8 *)(lVar1 + 0x1c0) = 1;
    plVar5 = (long *)0x1d0;
    __Znwm();
    lVar7 = *(long *)(lVar9 + 0x38);
    *plVar5 = lVar9;
    plVar5[1] = lVar7;
    *(undefined4 *)(plVar5 + 2) = 0;
    *(undefined4 *)(plVar5 + 0x33) = 0;
    plVar5[0x20] = 0;
    plVar5[0x1f] = 0;
    plVar5[0x1e] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x1c] = 0;
    plVar5[0x1b] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x19] = 0;
    plVar5[0x18] = 0;
    plVar5[0x17] = 0;
    plVar5[0x16] = 0;
    plVar5[0x15] = 0;
    plVar5[0x14] = 0;
    plVar5[0x13] = 0;
    plVar5[0x12] = 0;
    plVar5[0x11] = 0;
    plVar5[0x10] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[3] = 0;
    plVar5[0x30] = 0;
    plVar5[0x2f] = 0;
    plVar5[0x32] = 0;
    plVar5[0x31] = 0;
    plVar5[0x2c] = 0;
    plVar5[0x2b] = 0;
    plVar5[0x2e] = 0;
    plVar5[0x2d] = 0;
    plVar5[0x28] = 0;
    plVar5[0x27] = 0;
    plVar5[0x2a] = 0;
    plVar5[0x29] = 0;
    plVar5[0x24] = 0;
    plVar5[0x23] = 0;
    plVar5[0x26] = 0;
    plVar5[0x25] = 0;
    plVar5[0x22] = 0;
    plVar5[0x21] = 0;
    plVar5[0x37] = 0;
    plVar5[0x36] = 0;
    plVar5[0x39] = 0;
    plVar5[0x38] = 0;
    plVar5[0x35] = 0;
    plVar5[0x34] = 0;
    lVar12 = lVar1 - lVar12;
    *(long **)(lVar1 + 0x1c8) = plVar5;
    lVar7 = lVar2;
    if (lVar2 == lVar3) {
      *param_1 = lVar12;
      param_1[1] = lVar1 + 0x1d0;
      param_1[2] = lVar10;
      lStack_88 = lVar2;
      lStack_80 = lVar2;
      lStack_78 = lVar2;
      lStack_70 = lVar11;
      FUN_109256f2c(&lStack_88);
      return lVar1 + 0x1d0;
    }
    do {
      _memcpy(lVar12,lVar7,0x1c0);
      uVar15 = *(undefined8 *)(lVar7 + 0x1c8);
      *(undefined8 *)(lVar7 + 0x1c8) = 0;
      *(undefined8 *)(lVar12 + 0x1c0) = *(undefined8 *)(lVar7 + 0x1c0);
      *(undefined8 *)(lVar12 + 0x1c8) = uVar15;
      lVar7 = lVar7 + 0x1d0;
      lVar12 = lVar12 + 0x1d0;
    } while (lVar7 != lVar3);
    plVar5 = (long *)(lVar2 + 0x1c8);
    param_2 = 0;
    uVar14 = 0x109256e80;
    ppuVar13 = (undefined1 **)&stack0xfffffffffffffff0;
  }
  else {
    uVar15 = 0x109256ed8;
FUN_109256ef0:
    ppuVar4 = &puStack_a0;
    ppuVar13 = &puStack_a0;
    plVar5 = (long *)&DAT_10f62a4d8;
    uVar14 = 0x109256f04;
    puStack_a0 = &stack0xfffffffffffffff0;
    uStack_98 = uVar15;
    func_0x000104c4f6cc();
  }
  lVar12 = *plVar5;
  *plVar5 = param_2;
  if (lVar12 == 0) {
    return 0;
  }
  *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar13;
  *(undefined8 *)((long)ppuVar4 + -8) = uVar14;
  FUN_10925430c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return lVar12;
}



/* Entry: 109256ef0; end: 109256f2b;  */

void FUN_109256ef0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar2 = *plVar1;
  *plVar1 = param_2;
  if (lVar2 != 0) {
    FUN_10925430c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109256f2c; end: 109256f7f;  */

long * FUN_109256f2c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x1d0;
    func_0x000109256f04(lVar2 + -8,0);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109256f80; end: 109257b7b;  */

/* WARNING: Possible PIC construction at 0x0001092573cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092573ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092577e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010925784c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092579f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257a4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092576c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109257ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109257af0) */
/* WARNING: Removing unreachable block (ram,0x000109257b00) */
/* WARNING: Removing unreachable block (ram,0x0001092576c8) */
/* WARNING: Removing unreachable block (ram,0x0001092576e8) */
/* WARNING: Removing unreachable block (ram,0x0001092576cc) */
/* WARNING: Removing unreachable block (ram,0x0001092576dc) */
/* WARNING: Removing unreachable block (ram,0x0001092576ec) */
/* WARNING: Removing unreachable block (ram,0x0001092579f8) */
/* WARNING: Removing unreachable block (ram,0x0001092579fc) */
/* WARNING: Removing unreachable block (ram,0x000109257a14) */
/* WARNING: Removing unreachable block (ram,0x00010925796c) */
/* WARNING: Removing unreachable block (ram,0x00010925797c) */
/* WARNING: Removing unreachable block (ram,0x000109257a50) */
/* WARNING: Removing unreachable block (ram,0x000109257a60) */
/* WARNING: Removing unreachable block (ram,0x0001092579b0) */
/* WARNING: Removing unreachable block (ram,0x0001092579c8) */
/* WARNING: Removing unreachable block (ram,0x000109257948) */
/* WARNING: Removing unreachable block (ram,0x000109257908) */
/* WARNING: Removing unreachable block (ram,0x000109257914) */
/* WARNING: Removing unreachable block (ram,0x000109257a2c) */
/* WARNING: Removing unreachable block (ram,0x000109257a44) */
/* WARNING: Removing unreachable block (ram,0x000109257920) */
/* WARNING: Removing unreachable block (ram,0x0001092577e4) */
/* WARNING: Removing unreachable block (ram,0x0001092577ec) */
/* WARNING: Removing unreachable block (ram,0x000109257808) */
/* WARNING: Removing unreachable block (ram,0x000109257814) */
/* WARNING: Removing unreachable block (ram,0x00010925781c) */
/* WARNING: Removing unreachable block (ram,0x000109257820) */
/* WARNING: Removing unreachable block (ram,0x000109257830) */
/* WARNING: Removing unreachable block (ram,0x000109257548) */
/* WARNING: Removing unreachable block (ram,0x0001092573f0) */
/* WARNING: Removing unreachable block (ram,0x0001092573f8) */
/* WARNING: Removing unreachable block (ram,0x000109257550) */
/* WARNING: Removing unreachable block (ram,0x000109257558) */
/* WARNING: Removing unreachable block (ram,0x000109257418) */
/* WARNING: Removing unreachable block (ram,0x00010925741c) */
/* WARNING: Removing unreachable block (ram,0x000109258000) */

void FUN_109256f80(ulong *param_1,ulong *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  ulong **ppuVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong *puStack_410;
  ulong *puStack_408;
  ulong *puStack_400;
  ulong *puStack_3f8;
  ulong *puStack_3f0;
  undefined1 auStack_3e8 [448];
  undefined1 auStack_228 [40];
  undefined1 auStack_200 [416];
  
  ppuVar3 = &puStack_410;
  puVar4 = param_2 + -0x3a;
  puStack_408 = param_2 + -0x74;
  puStack_3f8 = param_2 + -0x3c;
  puStack_410 = param_2 + -0xae;
  puStack_400 = param_2 + -0x76;
  uVar10 = (long)param_2 - (long)param_1;
  uVar12 = ((long)uVar10 >> 4) * 0x34f72c234f72c235;
  puStack_3f0 = puVar4;
  if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
    if (uVar12 < 2) {
      return;
    }
    if (uVar12 != 2) {
LAB_109257024:
      if ((long)uVar10 < 0x2b80) {
        puVar4 = param_1 + 0x3a;
        if ((param_4 & 1) == 0) {
          if (param_1 == param_2 || puVar4 == param_2) {
            return;
          }
          while (puVar6 = puVar4, param_1[0x72] <= param_1[0x38]) {
            puVar4 = puVar6 + 0x3a;
            param_1 = puVar6;
            if (puVar6 + 0x3a == param_2) {
              return;
            }
          }
          _memcpy(auStack_228,puVar6,0x1c0);
          param_1[0x73] = 0;
          _memcpy(param_1 + 0x3a,param_1,0x1c0);
          uVar10 = param_1[0x39];
          param_1[0x72] = param_1[0x38];
          param_1[0x39] = 0;
          param_1 = param_1 + 0x73;
          uVar14 = 0x109257af0;
        }
        else {
          if (param_1 == param_2 || puVar4 == param_2) {
            return;
          }
          lVar8 = 0;
          puVar6 = param_1;
          while (puVar13 = puVar4, puVar6[0x72] <= puVar6[0x38]) {
            lVar8 = lVar8 + 0x1d0;
            puVar4 = puVar13 + 0x3a;
            puVar6 = puVar13;
            if (puVar13 + 0x3a == param_2) {
              return;
            }
          }
          _memcpy(auStack_228,puVar13,0x1c0);
          puVar6[0x73] = 0;
          lVar8 = (long)param_1 + lVar8;
          _memcpy(lVar8 + 0x1d0,lVar8,0x1c0);
          uVar10 = *(ulong *)(lVar8 + 0x1c8);
          *(undefined8 *)(lVar8 + 0x390) = *(undefined8 *)(lVar8 + 0x1c0);
          *(undefined8 *)(lVar8 + 0x1c8) = 0;
          param_1 = (ulong *)(lVar8 + 0x398);
          uVar14 = 0x1092576c8;
          ppuVar3 = &puStack_410;
        }
        goto SUB_109256f04;
      }
      if (param_3 == 0) {
        if (param_1 == param_2) {
          return;
        }
        uVar11 = uVar12 - 2 >> 1;
        uVar9 = uVar11;
        do {
          puStack_3f8 = param_2;
          if ((long)uVar9 <= (long)uVar11) {
            puVar4 = param_1 + (uVar9 << 1 | 1) * 0x3a;
            if ((long)(uVar9 * 2 + 2) < (long)uVar12) {
              lVar8 = 0x1d0;
              if (puVar4[0x38] <= puVar4[0x72]) {
                lVar8 = 0;
              }
              puVar4 = (ulong *)((long)puVar4 + lVar8);
            }
            puVar6 = param_1 + uVar9 * 0x3a;
            if (puVar4[0x38] <= puVar6[0x38]) {
              _memcpy(auStack_228,puVar6,0x1c0);
              puStack_3f0 = (ulong *)puVar6[0x39];
              puVar6[0x39] = 0;
              _memcpy(puVar6,puVar4,0x1c0);
              puVar6[0x38] = puVar4[0x38];
              uVar10 = puVar4[0x39];
              puVar4[0x39] = 0;
              param_1 = puVar6 + 0x39;
              uVar14 = 0x1092577e4;
              ppuVar3 = &puStack_410;
              goto SUB_109256f04;
            }
          }
          bVar1 = uVar9 != 0;
          uVar9 = uVar9 - 1;
        } while (bVar1);
        _memcpy(auStack_3e8,param_1,0x1c0);
        param_1[0x39] = 0;
        puVar4 = param_1 + 0x3a;
        if ((2 < (long)((uVar10 >> 4) * 0x34f72c234f72c235)) &&
           (puVar4 = param_1 + 0x74, param_1[0x72] <= param_1[0xac])) {
          puVar4 = param_1 + 0x3a;
        }
        _memcpy(1,param_1,puVar4,0x1c0);
        param_1[0x38] = puVar4[0x38];
        uVar10 = puVar4[0x39];
        puVar4[0x39] = 0;
        param_1 = param_1 + 0x39;
        uVar14 = 0x109257908;
        ppuVar3 = &puStack_410;
        goto SUB_109256f04;
      }
      puVar13 = param_1 + (uVar12 >> 1) * 0x3a;
      uVar12 = param_2[-2];
      puVar6 = param_1;
      if (uVar10 < 0xe801) {
        uVar10 = param_1[0x38];
        puVar6 = puVar13;
        if (puVar13[0x38] < uVar10) {
          if ((uVar10 < uVar12) ||
             (FUN_109257f94(puVar13,param_1), puVar6 = param_1, puVar4 = puStack_3f0,
             param_1[0x38] < param_2[-2])) goto LAB_1092572b4;
        }
        else if ((uVar10 < uVar12) &&
                (FUN_109257f94(param_1,puVar4), puVar4 = param_1, puVar13[0x38] < param_1[0x38]))
        goto LAB_1092572b4;
      }
      else {
        uVar10 = puVar13[0x38];
        puVar5 = param_1;
        if (param_1[0x38] < uVar10) {
          if ((uVar10 < uVar12) ||
             (FUN_109257f94(param_1,puVar13), puVar5 = puVar13, puVar4 = puStack_3f0,
             puVar13[0x38] < param_2[-2])) {
LAB_1092570fc:
            FUN_109257f94(puVar5,puVar4);
          }
        }
        else if ((uVar10 < uVar12) &&
                (FUN_109257f94(puVar13,puVar4), puVar4 = puVar13, param_1[0x38] < puVar13[0x38]))
        goto LAB_1092570fc;
        puVar5 = puVar13 + -0x3a;
        uVar10 = puVar13[-2];
        if (param_1[0x72] < uVar10) {
          puVar4 = param_1 + 0x3a;
          puVar7 = puStack_408;
          if ((uVar10 < *puStack_3f8) ||
             (FUN_109257f94(param_1 + 0x3a,puVar5), puVar4 = puVar5, puVar7 = puStack_408,
             puVar13[-2] < *puStack_3f8)) {
LAB_1092571ac:
            FUN_109257f94(puVar4,puVar7);
          }
        }
        else if ((uVar10 < *puStack_3f8) &&
                (FUN_109257f94(puVar5,puStack_408), param_1[0x72] < puVar13[-2])) {
          puVar4 = param_1 + 0x3a;
          puVar7 = puVar5;
          goto LAB_1092571ac;
        }
        uVar10 = puVar13[0x72];
        if (param_1[0xac] < uVar10) {
          puVar4 = param_1 + 0x74;
          puVar7 = puStack_410;
          if (*puStack_400 <= uVar10) {
            FUN_109257f94(puVar4,puVar13 + 0x3a);
            if (*puStack_400 <= puVar13[0x72]) goto LAB_10925722c;
            puVar4 = puVar13 + 0x3a;
            puVar7 = puStack_410;
          }
LAB_109257228:
          FUN_109257f94(puVar4,puVar7);
        }
        else if ((uVar10 < *puStack_400) &&
                (FUN_109257f94(puVar13 + 0x3a,puStack_410), param_1[0xac] < puVar13[0x72])) {
          puVar4 = param_1 + 0x74;
          puVar7 = puVar13 + 0x3a;
          goto LAB_109257228;
        }
LAB_10925722c:
        uVar10 = puVar13[0x38];
        if (puVar13[-2] < uVar10) {
          if (uVar10 < puVar13[0x72]) {
            puVar4 = puVar13 + 0x3a;
          }
          else {
            FUN_109257f94(puVar5,puVar13);
            puVar4 = puVar13;
            if (puVar13[0x72] <= puVar13[0x38]) goto LAB_1092572b4;
            puVar5 = puVar13;
            puVar4 = puVar13 + 0x3a;
          }
LAB_1092572a8:
          FUN_109257f94(puVar5,puVar4);
          puVar4 = puVar13;
        }
        else {
          puVar4 = puVar13;
          if ((uVar10 < puVar13[0x72]) &&
             (FUN_109257f94(puVar13,puVar13 + 0x3a), puVar13[-2] < puVar13[0x38]))
          goto LAB_1092572a8;
        }
LAB_1092572b4:
        FUN_109257f94(puVar6,puVar4);
      }
      if ((param_4 & 1) == 0) {
        uVar12 = param_1[0x38];
        if (param_1[-2] <= uVar12) {
          _memcpy(auStack_228,param_1,0x1c0);
          uVar10 = param_1[0x39];
          param_1[0x39] = 0;
          puVar4 = param_1;
          if (param_2[-2] < uVar12) {
            do {
              puVar6 = puVar4 + 0x3a;
              puVar13 = puVar4 + 0x72;
              puVar4 = puVar6;
            } while (uVar12 <= *puVar13);
          }
          else {
            do {
              puVar6 = puVar4 + 0x3a;
              if (param_2 <= puVar6) break;
              puVar13 = puVar4 + 0x72;
              puVar4 = puVar6;
            } while (uVar12 <= *puVar13);
          }
          puVar4 = param_2;
          if (puVar6 < param_2) {
            do {
              puVar4 = param_2 + -0x3a;
              puVar13 = param_2 + -2;
              param_2 = puVar4;
            } while (*puVar13 < uVar12);
          }
          while (puVar6 < puVar4) {
            FUN_109257f94(puVar6,puVar4);
            do {
              puVar13 = puVar6 + 0x72;
              puVar6 = puVar6 + 0x3a;
            } while (uVar12 <= *puVar13);
            do {
              puVar13 = puVar4 + -2;
              puVar4 = puVar4 + -0x3a;
            } while (*puVar13 < uVar12);
          }
          puVar4 = puVar6 + -0x3a;
          if (puVar4 == param_1) {
            _memcpy(puVar4,auStack_228,0x1c0);
            puVar6[-2] = uVar12;
            param_1 = puVar6 + -1;
            uVar14 = 0x109257548;
            ppuVar3 = &puStack_410;
          }
          else {
            _memcpy(param_1,puVar4,0x1c0);
            param_1[0x38] = puVar6[-2];
            uVar10 = puVar6[-1];
            puVar6[-1] = 0;
            param_1 = param_1 + 0x39;
            uVar14 = 0x109257528;
            ppuVar3 = &puStack_410;
          }
          goto SUB_109256f04;
        }
      }
      else {
        uVar12 = param_1[0x38];
      }
      _memcpy(auStack_228,param_1,0x1c0);
      lVar8 = 0;
      uVar10 = param_1[0x39];
      param_1[0x39] = 0;
      do {
        lVar2 = lVar8 + 0x390;
        lVar8 = lVar8 + 0x1d0;
      } while (uVar12 < *(ulong *)((long)param_1 + lVar2));
      puVar4 = (ulong *)((long)param_1 + lVar8);
      if (lVar8 == 0x1d0) {
        do {
          puVar6 = param_2;
          if (param_2 <= puVar4) break;
          puVar6 = param_2 + -0x3a;
          puVar13 = param_2 + -2;
          param_2 = puVar6;
        } while (*puVar13 <= uVar12);
      }
      else {
        do {
          puVar6 = param_2 + -0x3a;
          puVar13 = param_2 + -2;
          param_2 = puVar6;
        } while (*puVar13 <= uVar12);
      }
      if (puVar4 < puVar6) {
        do {
          FUN_109257f94(puVar4,puVar6);
          do {
            puVar13 = puVar4 + 0x72;
            puVar4 = puVar4 + 0x3a;
          } while (uVar12 < *puVar13);
          do {
            puVar13 = puVar6 + -2;
            puVar6 = puVar6 + -0x3a;
          } while (*puVar13 <= uVar12);
        } while (puVar4 < puVar6);
      }
      puVar6 = puVar4 + -0x3a;
      if (puVar6 == param_1) {
        _memcpy(puVar6,auStack_228,0x1c0);
        puVar4[-2] = uVar12;
        param_1 = puVar4 + -1;
        uVar14 = 0x1092573f0;
        ppuVar3 = &puStack_410;
      }
      else {
        _memcpy(param_1,puVar6,0x1c0);
        param_1[0x38] = puVar4[-2];
        uVar10 = puVar4[-1];
        puVar4[-1] = 0;
        param_1 = param_1 + 0x39;
        uVar14 = 0x1092573d0;
        ppuVar3 = &puStack_410;
      }
      goto SUB_109256f04;
    }
    if (param_2[-2] <= param_1[0x38]) {
      return;
    }
  }
  else {
    if (uVar12 == 3) {
      uVar10 = param_1[0x72];
      if (param_1[0x38] < uVar10) {
        if (param_2[-2] <= uVar10) {
          FUN_109257f94(param_1,param_1 + 0x3a);
          if (param_2[-2] <= param_1[0x72]) {
            return;
          }
          param_1 = param_1 + 0x3a;
          puVar4 = puStack_3f0;
        }
        goto code_r0x000109257f94;
      }
      if (param_2[-2] <= uVar10) {
        return;
      }
    }
    else {
      if (uVar12 == 4) {
        puVar6 = param_1 + 0x3a;
        puVar13 = param_1 + 0x74;
        uVar10 = param_1[0x72];
        puVar5 = param_1;
        if (param_1[0x38] < uVar10) {
          puVar7 = puVar13;
          if ((uVar10 < param_1[0xac]) ||
             (FUN_109257f94(param_1,puVar6), puVar5 = puVar6, param_1[0x72] < param_1[0xac])) {
LAB_109257c0c:
            FUN_109257f94(puVar5,puVar7);
          }
        }
        else if ((uVar10 < param_1[0xac]) &&
                (FUN_109257f94(puVar6,puVar13), puVar7 = puVar6, param_1[0x38] < param_1[0x72]))
        goto LAB_109257c0c;
        if (((param_2[-2] <= param_1[0xac]) ||
            (FUN_109257f94(puVar13,puVar4), param_1[0xac] <= param_1[0x72])) ||
           (FUN_109257f94(puVar6,puVar13), puVar4 = puVar6, param_1[0x72] <= param_1[0x38])) {
          return;
        }
        goto code_r0x000109257f94;
      }
      if (uVar12 != 5) goto LAB_109257024;
      FUN_109257b7c(param_1,param_1 + 0x3a,param_1 + 0x74,param_1 + 0xae);
      if (param_2[-2] <= param_1[0xe6]) {
        return;
      }
      FUN_109257f94(param_1 + 0xae,puStack_3f0);
      if (param_1[0xe6] <= param_1[0xac]) {
        return;
      }
      FUN_109257f94(param_1 + 0x74,param_1 + 0xae);
      if (param_1[0xac] <= param_1[0x72]) {
        return;
      }
      puVar4 = param_1 + 0x74;
    }
    FUN_109257f94(param_1 + 0x3a,puVar4);
    if (param_1[0x72] <= param_1[0x38]) {
      return;
    }
    puVar4 = param_1 + 0x3a;
  }
code_r0x000109257f94:
  ppuVar3 = (ulong **)auStack_200;
  _memcpy(auStack_200,param_1,0x1c0);
  _memcpy(param_1,puVar4,0x1c0);
  _memcpy(puVar4,auStack_200,0x1c0);
  param_1[0x39] = 0;
  uVar10 = puVar4[0x39];
  param_1[0x38] = puVar4[0x38];
  puVar4[0x39] = 0;
  param_1 = param_1 + 0x39;
  uVar14 = 0x109258000;
SUB_109256f04:
  uVar12 = *param_1;
  *param_1 = uVar10;
  if (uVar12 != 0) {
    *(undefined1 **)((long)ppuVar3 + -0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)((long)ppuVar3 + -8) = uVar14;
    FUN_10925430c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109257b7c; end: 109257c7f;  */

/* WARNING: Possible PIC construction at 0x000109257ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109258000) */

void FUN_109257b7c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_200 [448];
  
  uVar3 = *(ulong *)(param_2 + 0x1c0);
  lVar2 = param_1;
  if (*(ulong *)(param_1 + 0x1c0) < uVar3) {
    lVar1 = param_3;
    if ((*(ulong *)(param_3 + 0x1c0) <= uVar3) &&
       (FUN_109257f94(param_1,param_2), lVar2 = param_2,
       *(ulong *)(param_3 + 0x1c0) <= *(ulong *)(param_2 + 0x1c0))) goto LAB_109257c10;
  }
  else if ((*(ulong *)(param_3 + 0x1c0) <= uVar3) ||
          (FUN_109257f94(param_2,param_3), lVar1 = param_2,
          *(ulong *)(param_2 + 0x1c0) <= *(ulong *)(param_1 + 0x1c0))) goto LAB_109257c10;
  FUN_109257f94(lVar2,lVar1);
LAB_109257c10:
  if (((*(ulong *)(param_3 + 0x1c0) < *(ulong *)(param_4 + 0x1c0)) &&
      (FUN_109257f94(param_3,param_4), *(ulong *)(param_2 + 0x1c0) < *(ulong *)(param_3 + 0x1c0)))
     && (FUN_109257f94(param_2,param_3), *(ulong *)(param_1 + 0x1c0) < *(ulong *)(param_2 + 0x1c0)))
  {
    _memcpy(auStack_200,param_1,0x1c0);
    _memcpy(param_1,param_2,0x1c0);
    _memcpy(param_2,auStack_200,0x1c0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    lVar2 = *(long *)(param_2 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
    *(undefined8 *)(param_2 + 0x1c8) = 0;
    lVar1 = *(long *)(param_1 + 0x1c8);
    *(long *)(param_1 + 0x1c8) = lVar2;
    if (lVar1 == 0) {
      return;
    }
    FUN_10925430c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109257c80; end: 109257f93;  */

bool FUN_109257c80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_220 [448];
  
  uVar4 = (param_2 - param_1 >> 4) * 0x34f72c234f72c235;
  if (2 < (long)uVar4) {
    if (uVar4 == 3) {
      lVar1 = param_2 + -0x1d0;
      uVar4 = *(ulong *)(param_1 + 0x390);
      if (*(ulong *)(param_1 + 0x1c0) < uVar4) {
        if (*(ulong *)(param_2 + -0x10) <= uVar4) {
          FUN_109257f94(param_1,param_1 + 0x1d0);
          if (*(ulong *)(param_2 + -0x10) <= *(ulong *)(param_1 + 0x390)) {
            return true;
          }
          param_1 = param_1 + 0x1d0;
        }
        goto LAB_109257e5c;
      }
      if (*(ulong *)(param_2 + -0x10) <= uVar4) {
        return true;
      }
    }
    else {
      if (uVar4 == 4) {
        FUN_109257b7c(param_1,param_1 + 0x1d0,param_1 + 0x3a0,param_2 + -0x1d0);
        return true;
      }
      if (uVar4 != 5) goto LAB_109257d98;
      FUN_109257b7c(param_1,param_1 + 0x1d0,param_1 + 0x3a0,param_1 + 0x570);
      if (*(ulong *)(param_2 + -0x10) <= *(ulong *)(param_1 + 0x730)) {
        return true;
      }
      FUN_109257f94(param_1 + 0x570,param_2 + -0x1d0);
      if (*(ulong *)(param_1 + 0x730) <= *(ulong *)(param_1 + 0x560)) {
        return true;
      }
      FUN_109257f94(param_1 + 0x3a0,param_1 + 0x570);
      if (*(ulong *)(param_1 + 0x560) <= *(ulong *)(param_1 + 0x390)) {
        return true;
      }
      lVar1 = param_1 + 0x3a0;
    }
    FUN_109257f94(param_1 + 0x1d0,lVar1);
    if (*(ulong *)(param_1 + 0x390) <= *(ulong *)(param_1 + 0x1c0)) {
      return true;
    }
    lVar1 = param_1 + 0x1d0;
LAB_109257e5c:
    FUN_109257f94(param_1,lVar1);
    return true;
  }
  if (uVar4 < 2) {
    return true;
  }
  if (uVar4 == 2) {
    if (*(ulong *)(param_2 + -0x10) <= *(ulong *)(param_1 + 0x1c0)) {
      return true;
    }
    lVar1 = param_2 + -0x1d0;
    goto LAB_109257e5c;
  }
LAB_109257d98:
  lVar1 = param_1 + 0x3a0;
  uVar4 = *(ulong *)(param_1 + 0x390);
  lVar8 = param_1;
  if (*(ulong *)(param_1 + 0x1c0) < uVar4) {
    lVar2 = lVar1;
    if (*(ulong *)(param_1 + 0x560) <= uVar4) {
      FUN_109257f94(param_1,param_1 + 0x1d0);
      if (*(ulong *)(param_1 + 0x560) <= *(ulong *)(param_1 + 0x390)) goto LAB_109257e8c;
      lVar8 = param_1 + 0x1d0;
    }
  }
  else {
    if ((*(ulong *)(param_1 + 0x560) <= uVar4) ||
       (FUN_109257f94(param_1 + 0x1d0,lVar1),
       *(ulong *)(param_1 + 0x390) <= *(ulong *)(param_1 + 0x1c0))) goto LAB_109257e8c;
    lVar2 = param_1 + 0x1d0;
  }
  FUN_109257f94(lVar8,lVar2);
LAB_109257e8c:
  if (param_1 + 0x570 != param_2) {
    lVar8 = 0;
    iVar9 = 0;
    lVar2 = param_1 + 0x570;
    do {
      lVar5 = lVar2;
      uVar4 = *(ulong *)(lVar5 + 0x1c0);
      if (*(ulong *)(lVar1 + 0x1c0) < uVar4) {
        _memcpy(auStack_220,lVar5,0x1c0);
        uVar6 = *(undefined8 *)(lVar5 + 0x1c8);
        *(undefined8 *)(lVar5 + 0x1c8) = 0;
        lVar1 = lVar8;
        do {
          lVar2 = param_1 + lVar1;
          _memcpy(lVar2 + 0x570,lVar2 + 0x3a0,0x1c0);
          *(undefined8 *)(lVar2 + 0x730) = *(undefined8 *)(lVar2 + 0x560);
          uVar3 = *(undefined8 *)(lVar2 + 0x568);
          *(undefined8 *)(lVar2 + 0x568) = 0;
          func_0x000109256f04(lVar2 + 0x738,uVar3);
          lVar7 = param_1;
          if (lVar1 == -0x3a0) goto LAB_109257f20;
          lVar1 = lVar1 + -0x1d0;
        } while (*(ulong *)(lVar2 + 0x390) < uVar4);
        lVar7 = param_1 + lVar1 + 0x570;
LAB_109257f20:
        _memcpy(lVar7,auStack_220,0x1c0);
        *(ulong *)(lVar7 + 0x1c0) = uVar4;
        func_0x000109256f04(lVar7 + 0x1c8,uVar6);
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return lVar5 + 0x1d0 == param_2;
        }
      }
      lVar8 = lVar8 + 0x1d0;
      lVar2 = lVar5 + 0x1d0;
      lVar1 = lVar5;
    } while (lVar5 + 0x1d0 != param_2);
  }
  return true;
}



/* Entry: 109257f94; end: 109258023;  */

/* WARNING: Possible PIC construction at 0x000109257ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109258000) */

void FUN_109257f94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_200 [448];
  
  _memcpy(auStack_200,param_1,0x1c0);
  _memcpy(param_1,param_2,0x1c0);
  _memcpy(param_2,auStack_200,0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  lVar1 = *(long *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_2 + 0x1c8) = 0;
  lVar2 = *(long *)(param_1 + 0x1c8);
  *(long *)(param_1 + 0x1c8) = lVar1;
  if (lVar2 != 0) {
    FUN_10925430c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 109258024; end: 109258eff;  */

/* WARNING: Removing unreachable block (ram,0x000109258de8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109258024(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 *******pppppppuVar5;
  long lVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  int iStack_f4;
  int **appiStack_f0 [2];
  char cStack_d9;
  int *piStack_d8;
  int *piStack_d0;
  char cStack_c1;
  int iStack_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined8 *******pppppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  byte bStack_79;
  
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x37) = 0;
  *(undefined8 *)((long)param_1 + 0x2f) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x3f800000;
  _bzero(param_1 + 0x12,0x65e);
  uVar4 = 0x1f03;
  _glGetString(0x1f03);
  func_0x000107c31940(&pppppppuStack_90,uVar4);
  func_0x000107c31940(&pppppppuStack_a8,&UNK_10f560e54);
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925ae98(param_1,pppppppuVar5,uVar1);
  func_0x000107c31940(&piStack_d8,&UNK_10f560154);
  FUN_109258f00(&iStack_c0,&pppppppuStack_a8,&piStack_d8);
  if (cStack_c1 < '\0') {
    __ZdlPv(piStack_d8);
  }
  lVar11 = CONCAT44(uStack_bc,iStack_c0);
  lVar6 = 0;
  if (lStack_b8 != lVar11) {
    lVar6 = LZCOUNT((lStack_b8 - lVar11 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(lVar11,lStack_b8,appiStack_f0,lVar6,1);
  FUN_10924a40c(2,&UNK_10f560157);
  for (lVar6 = CONCAT44(uStack_bc,iStack_c0); lVar6 != lStack_b8; lVar6 = lVar6 + 0x18) {
    FUN_10924a40c(2,&UNK_10f560180);
  }
  func_0x000107c31940(appiStack_f0," ");
  FUN_109258f00(&piStack_d8,&pppppppuStack_90,appiStack_f0);
  if (cStack_d9 < '\0') {
    __ZdlPv(appiStack_f0[0]);
  }
  lVar6 = 0;
  if (piStack_d0 != piStack_d8) {
    lVar6 = LZCOUNT(((long)piStack_d0 - (long)piStack_d8 >> 3) * -0x5555555555555555) * -2 + 0x7e;
  }
  func_0x000107c281b4(piStack_d8,piStack_d0,&iStack_f4,lVar6,1);
  FUN_10924a40c(2,&UNK_10f56018e);
  for (; piStack_d8 != piStack_d0; piStack_d8 = piStack_d8 + 6) {
    FUN_10924a40c(2,&UNK_10f560180);
  }
  appiStack_f0[0] = &piStack_d8;
  func_0x000104c607c8(appiStack_f0);
  piStack_d8 = &iStack_c0;
  func_0x000104c607c8(&piStack_d8);
  if (param_2 < 0x408) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5601b6,0x23);
    *(char *)((long)param_1 + 0x37) = (char)pppppppuVar5;
    if (((ulong)pppppppuVar5 & 1) != 0) goto LAB_1092582b4;
    uVar3 = 0;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x37) = 1;
LAB_1092582b4:
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5601da,0x2b);
    *(char *)(param_1 + 7) = (char)pppppppuVar5;
    uVar3 = 0;
    if ((int)pppppppuVar5 != 0) {
      uVar1 = uStack_88;
      pppppppuVar5 = pppppppuStack_90;
      if (-1 < (char)bStack_79) {
        uVar1 = (ulong)bStack_79;
        pppppppuVar5 = &pppppppuStack_90;
      }
      func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560206,0x32);
      uVar3 = SUB81(pppppppuVar5,0);
    }
  }
  *(undefined1 *)((long)param_1 + 0x39) = uVar3;
  param_1[0x4b] = 0x190800001401;
  param_1[0x4a] = 0x190700001907;
  param_1[0x4c] = 0x140100001908;
  *(undefined4 *)((long)param_1 + 0x646) = 0x20f020f;
  *(undefined4 *)((long)param_1 + 0x3f4) = 0x1909;
  param_1[0x7f] = 0x140100001909;
  *(undefined2 *)((long)param_1 + 0x68c) = 0x201;
  if (param_2 < 0x406) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560d30,0x11);
    uVar1 = uStack_88;
    pppppppuVar7 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar7 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar7,uVar1,&UNK_10f560d42,0x1b);
    uVar1 = uStack_88;
    pppppppuVar8 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar8 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar8,uVar1,&UNK_10f560d5e,0x14);
    uVar1 = uStack_88;
    pppppppuVar9 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar9 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar9,uVar1,&UNK_10f560d73,0x14);
    uVar1 = uStack_88;
    pppppppuVar10 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar10 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar10,uVar1,&UNK_10f560d88,0x19);
    uVar28 = (uint)pppppppuVar5;
    if (uVar28 == 0) {
      if ((int)pppppppuVar7 != 0) goto LAB_109258564;
LAB_10925852c:
      if ((int)pppppppuVar8 != 0) goto LAB_109258530;
LAB_109258584:
      if ((int)pppppppuVar9 != 0) goto LAB_109258588;
LAB_1092585cc:
      if ((uVar28 & (uint)pppppppuVar10) == 1) {
        uVar18 = 0x8227;
        uVar20 = 5;
        uVar21 = 0x1406;
        uVar24 = 0x1903;
        lVar22 = 0x683;
        lVar23 = 0x682;
        lVar25 = 0x3c0;
        lVar26 = 0x3bc;
        lVar27 = 0x3b8;
        lVar6 = 0x681;
        lVar11 = 0x680;
        lVar12 = 0x3b4;
        lVar13 = 0x3b0;
        lVar14 = 0x3ac;
        uVar16 = 0x1903;
        uVar19 = 0x8227;
        uVar15 = 1;
        uVar3 = 1;
        goto LAB_10925861c;
      }
    }
    else {
      param_1[0x48] = 0x822700001401;
      param_1[0x47] = 0x190300001903;
      param_1[0x49] = 0x140100008227;
      *(undefined4 *)((long)param_1 + 0x642) = 0x20f020f;
      if ((int)pppppppuVar7 == 0) goto LAB_10925852c;
LAB_109258564:
      *(undefined4 *)((long)param_1 + 0x454) = 0x84f9;
      param_1[0x8b] = 0x84fa000084f9;
      *(undefined2 *)((long)param_1 + 0x69c) = 8;
      if ((int)pppppppuVar8 == 0) goto LAB_109258584;
LAB_109258530:
      *(undefined8 *)((long)param_1 + 0x444) = 0x190200001403;
      *(undefined8 *)((long)param_1 + 0x43c) = 0x190200001902;
      *(undefined8 *)((long)param_1 + 0x44c) = 0x140500001902;
      *(undefined4 *)(param_1 + 0xd3) = 0x80008;
      if ((int)pppppppuVar9 == 0) goto LAB_1092585cc;
LAB_109258588:
      param_1[0x7d] = 0x190800001908;
      *(undefined4 *)(param_1 + 0x7e) = 0x1406;
      *(undefined2 *)((long)param_1 + 0x68a) = 0x105;
      if (uVar28 != 0) {
        param_1[0x7b] = 0x822700001406;
        param_1[0x7a] = 0x190300001903;
        param_1[0x7c] = 0x140600008227;
        *(undefined4 *)((long)param_1 + 0x686) = 0x1010101;
        goto LAB_1092585cc;
      }
    }
  }
  else {
    uVar3 = 0;
    param_1[0x48] = 0x822700001401;
    param_1[0x47] = 0x190300001903;
    param_1[0x49] = 0x140100008227;
    *(undefined4 *)((long)param_1 + 0x642) = 0x20f020f;
    *(undefined4 *)(param_1 + 0x7e) = 0x1406;
    *(undefined2 *)((long)param_1 + 0x68a) = 0x105;
    param_1[0x7b] = 0x823000001406;
    param_1[0x7a] = 0x19030000822e;
    param_1[0x7d] = 0x190800008814;
    param_1[0x7c] = 0x140600008227;
    *(undefined4 *)((long)param_1 + 0x686) = 0x1010101;
    uVar20 = 8;
    uVar18 = 0x8cac;
    uVar21 = 0x1403;
    uVar16 = 0x1902;
    uVar24 = 0x81a5;
    lVar22 = 0x69b;
    lVar23 = 0x69a;
    lVar25 = 0x450;
    lVar26 = 0x44c;
    lVar27 = 0x448;
    *(undefined4 *)((long)param_1 + 0x454) = 0x88f0;
    lVar6 = 0x699;
    lVar11 = 0x698;
    lVar12 = 0x444;
    lVar13 = 0x440;
    param_1[0x8b] = 0x84fa000084f9;
    lVar14 = 0x43c;
    uVar19 = 0x1902;
    uVar15 = 8;
    *(undefined2 *)((long)param_1 + 0x69c) = 8;
LAB_10925861c:
    *(undefined4 *)((long)param_1 + lVar14) = uVar24;
    *(undefined4 *)((long)param_1 + lVar13) = uVar16;
    *(undefined4 *)((long)param_1 + lVar12) = uVar21;
    *(undefined1 *)((long)param_1 + lVar11) = uVar20;
    *(undefined1 *)((long)param_1 + lVar6) = uVar3;
    *(undefined4 *)((long)param_1 + lVar27) = uVar18;
    *(undefined4 *)((long)param_1 + lVar26) = uVar19;
    *(undefined4 *)((long)param_1 + lVar25) = 0x1406;
    *(undefined1 *)((long)param_1 + lVar23) = uVar15;
    *(undefined1 *)((long)param_1 + lVar22) = uVar3;
  }
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560da2,0x1e);
  uVar1 = uStack_88;
  pppppppuVar7 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar7 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar7,uVar1,&UNK_10f560dc1,0x20);
  if ((((ulong)pppppppuVar5 & 1) != 0) || ((int)pppppppuVar7 != 0)) {
    param_1[0x80] = 0x80e1000080e1;
    *(undefined4 *)(param_1 + 0x81) = 0x1401;
    *(undefined2 *)((long)param_1 + 0x68e) = 0x20f;
  }
  FUN_10925af84(param_1);
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560de2,0x23);
  if (((ulong)pppppppuVar5 & 1) == 0) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560e06,0x1d);
    if ((int)pppppppuVar5 != 0) goto LAB_109258728;
  }
  else {
LAB_109258728:
    *(undefined4 *)((long)param_1 + 0x46c) = 0x8d64;
    param_1[0x8e] = 0x140100001908;
    *(undefined2 *)(param_1 + 0xd4) = 0x205;
  }
  *(undefined4 *)(param_1 + 0x30) = 0x81a5;
  if (param_2 < 0x406) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560e24,0x11);
    uVar1 = uStack_88;
    pppppppuVar7 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar7 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar7,uVar1,&UNK_10f560d30,0x11);
    uVar1 = uStack_88;
    pppppppuVar8 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar8 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar8,uVar1,&UNK_10f560e36,0xe);
    uVar1 = uStack_88;
    pppppppuVar9 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar9 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar9,uVar1,&UNK_10f560e45,0xe);
    uVar1 = uStack_88;
    pppppppuVar10 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar10 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar10,uVar1,&UNK_10f560d42,0x1b);
    bVar2 = (int)pppppppuVar5 == 0;
    uVar16 = 0x8058;
    if (bVar2) {
      uVar16 = 0x8056;
    }
    uVar19 = 0x8051;
    if (bVar2) {
      uVar19 = 0x8d62;
    }
    *(undefined4 *)((long)param_1 + 0xdc) = uVar19;
    *(undefined4 *)(param_1 + 0x1c) = uVar16;
    if ((int)pppppppuVar7 != 0) {
      *(undefined8 *)((long)param_1 + 0xd4) = 0x822b00008229;
    }
    if ((int)pppppppuVar8 != 0) {
      *(undefined4 *)((long)param_1 + 0x184) = 0x81a6;
    }
    if ((int)pppppppuVar9 != 0) {
      *(undefined4 *)((long)param_1 + 0x184) = 0x81a7;
    }
    if ((int)pppppppuVar10 != 0) goto LAB_10925889c;
  }
  else {
    *(undefined8 *)((long)param_1 + 0xdc) = 0x805800008051;
    *(undefined8 *)((long)param_1 + 0xd4) = 0x822b00008229;
    *(undefined4 *)((long)param_1 + 0x184) = 0x8cac;
LAB_10925889c:
    *(undefined4 *)(param_1 + 0x31) = 0x88f0;
  }
  *(undefined1 *)((long)param_1 + 0x31) = 0;
  *(undefined2 *)((long)param_1 + 0x2f) = 0;
  *(undefined4 *)param_1 = 0x3fc;
  *(undefined2 *)((long)param_1 + 0x33) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0xb) = 0;
  *(bool *)((long)param_1 + 0xf) = 0x405 < param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x13) = 0;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560239,0x13);
  *(char *)((long)param_1 + 0x14) = (char)pppppppuVar5;
  if (param_2 < 0x406) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f56024d,0x18);
    uVar3 = SUB81(pppppppuVar5,0);
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x15) = uVar3;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560266,0x1a);
  if (((ulong)pppppppuVar5 & 1) == 0) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560281,0x1b);
    if (((ulong)pppppppuVar5 & 1) != 0) goto LAB_109258990;
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f56029d,0x1b);
    uVar3 = SUB81(pppppppuVar5,0);
  }
  else {
LAB_109258990:
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x16) = uVar3;
  *(undefined2 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0x1b) = 0;
  if (param_2 < 0x406) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5602b9,0x13);
    uVar3 = SUB81(pppppppuVar5,0);
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x1d) = uVar3;
  *(undefined4 *)((long)param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5602cd,0x1d);
  *(char *)((long)param_1 + 0x24) = (char)pppppppuVar5;
  *(undefined1 *)((long)param_1 + 0x25) = 0;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5602eb,0x1e);
  *(char *)((long)param_1 + 0x3b) = (char)pppppppuVar5;
  *(undefined2 *)((long)param_1 + 0x3c) = 0;
  uVar1 = uStack_a0;
  pppppppuVar5 = pppppppuStack_a8;
  if (-1 < (char)bStack_91) {
    uVar1 = (ulong)bStack_91;
    pppppppuVar5 = &pppppppuStack_a8;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f56030a,0x1d);
  *(char *)((long)param_1 + 0x3a) = (char)pppppppuVar5;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&DAT_10f560328,0x1f);
  if (((ulong)pppppppuVar5 & 1) == 0) {
    uVar1 = uStack_88;
    pppppppuVar5 = pppppppuStack_90;
    if (-1 < (char)bStack_79) {
      uVar1 = (ulong)bStack_79;
      pppppppuVar5 = &pppppppuStack_90;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&DAT_10f560348,0x1f);
    uVar3 = SUB81(pppppppuVar5,0);
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x26) = uVar3;
  *(undefined2 *)((long)param_1 + 0x2a) = 0;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560368,0x1a);
  *(char *)((long)param_1 + 0x2c) = (char)pppppppuVar5;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560383,0xd);
  if (((ulong)pppppppuVar5 & 1) == 0) {
    uVar1 = uStack_a0;
    pppppppuVar5 = pppppppuStack_a8;
    if (-1 < (char)bStack_91) {
      uVar1 = (ulong)bStack_91;
      pppppppuVar5 = &pppppppuStack_a8;
    }
    func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560391,0x12);
    if (((ulong)pppppppuVar5 & 1) == 0) {
      uVar1 = uStack_88;
      pppppppuVar5 = pppppppuStack_90;
      if (-1 < (char)bStack_79) {
        uVar1 = (ulong)bStack_79;
        pppppppuVar5 = &pppppppuStack_90;
      }
      func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5603a4,0xf);
      if (((ulong)pppppppuVar5 & 1) == 0) {
        uVar1 = uStack_88;
        pppppppuVar5 = pppppppuStack_90;
        if (-1 < (char)bStack_79) {
          uVar1 = (ulong)bStack_79;
          pppppppuVar5 = &pppppppuStack_90;
        }
        func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5603b4,0xf);
        uVar3 = SUB81(pppppppuVar5,0);
        goto LAB_109258bc8;
      }
    }
  }
  uVar3 = 1;
LAB_109258bc8:
  *(undefined1 *)((long)param_1 + 0x2d) = uVar3;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f560383,0xd);
  if (((ulong)pppppppuVar5 & 1) == 0) {
    pppppppuVar5 = pppppppuStack_a8;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      pppppppuVar5 = &pppppppuStack_a8;
    }
    func_0x00010925cf64(pppppppuVar5,uStack_a0,&UNK_10f5603c4,0x11);
    uVar3 = SUB81(pppppppuVar5,0);
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x2e) = uVar3;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&UNK_10f5603d6,0x19);
  *(char *)((long)param_1 + 0x32) = (char)pppppppuVar5;
  if ((int)pppppppuVar5 != 0) {
    iStack_c0 = 0;
    _glGetIntegerv(0x87fe,&iStack_c0);
    *(bool *)((long)param_1 + 0x32) = 0 < iStack_c0;
  }
  param_1[0x17] = 0x101010101010101;
  param_1[0x16] = 0x101010101010101;
  param_1[0x15] = 0x101010101010101;
  param_1[0x14] = 0x101010101010101;
  param_1[0x13] = 0x101010101010101;
  *(undefined2 *)((long)param_1 + 0xb1) = 0;
  *(undefined1 *)((long)param_1 + 0xb3) = 0;
  param_1[9] = 0x100000001;
  param_1[8] = 0x100000000;
  *(undefined4 *)(param_1 + 10) = 1;
  iStack_c0 = 0;
  uVar1 = uStack_88;
  pppppppuVar5 = pppppppuStack_90;
  if (-1 < (char)bStack_79) {
    uVar1 = (ulong)bStack_79;
    pppppppuVar5 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuVar5,uVar1,&DAT_10f5603f0,0x16);
  iVar17 = 0;
  if ((int)pppppppuVar5 != 0) {
    _glGetIntegerv(0xd32,&iStack_c0);
    iVar17 = iStack_c0;
  }
  *(int *)((long)param_1 + 0x54) = iVar17;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(int *)((long)param_1 + 0x5c) = iVar17;
  piStack_d8 = (int *)((ulong)piStack_d8 & 0xffffffff00000000);
  _glGetIntegerv(0x8869,&piStack_d8);
  *(undefined4 *)((long)param_1 + 100) = piStack_d8._0_4_;
  appiStack_f0[0] = (int **)((ulong)appiStack_f0[0] & 0xffffffff00000000);
  _glGetIntegerv(0x8b4d,appiStack_f0);
  *(undefined4 *)(param_1 + 0xc) = appiStack_f0[0]._0_4_;
  iStack_f4 = 0;
  _glGetIntegerv(0x8dfb,&iStack_f4);
  *(int *)(param_1 + 0xd) = iStack_f4 << 2;
  _glGetIntegerv(0x8dfd,&iStack_f4);
  *(int *)((long)param_1 + 0x6c) = iStack_f4 << 2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x10] = 0;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    pppppppuStack_90 = &pppppppuStack_90;
  }
  func_0x00010925cf64(pppppppuStack_90,uStack_88,&UNK_10f560407,0x21);
  *(char *)((long)param_1 + 0x3e) = (char)pppppppuStack_90;
  if ((int)pppppppuStack_90 != 0) {
    iStack_f4 = 0x3f800000;
    _glGetFloatv(0x84ff,&iStack_f4);
    *(int *)((long)param_1 + 0x8c) = iStack_f4;
  }
  param_1[0x18] = &UNK_10f560429;
  param_1[0x19] = 0xd;
  if ((char)bStack_91 < '\0') {
    __ZdlPv(pppppppuStack_a8);
  }
  return;
}



/* Entry: 109258f00; end: 109259143;  */

void FUN_109258f00(undefined8 *param_1,long *param_2,char *param_3)

{
  ulong uVar1;
  long *plVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar8 = (int)(char)*(byte *)((long)param_2 + 0x17);
  plVar7 = (long *)*param_2;
  uVar9 = param_2[1];
  uVar10 = uVar9;
  plVar2 = plVar7;
  if (-1 < iVar8) {
    uVar10 = (ulong)*(byte *)((long)param_2 + 0x17);
    plVar2 = param_2;
  }
  uVar1 = *(ulong *)(param_3 + 8);
  pcVar3 = *(char **)param_3;
  if (-1 < param_3[0x17]) {
    uVar1 = (ulong)(byte)param_3[0x17];
    pcVar3 = param_3;
  }
  if (uVar10 != 0 && uVar1 != 0) {
    plVar11 = plVar2;
    do {
      pcVar4 = pcVar3;
      uVar12 = uVar1;
      do {
        if ((char)*plVar11 == *pcVar4) {
          puVar13 = (undefined8 *)0x0;
          if ((plVar11 == (long *)((long)plVar2 + uVar10)) ||
             (lVar14 = (long)plVar11 - (long)plVar2, lVar14 == -1)) {
            uVar10 = 0;
          }
          else {
            puVar13 = (undefined8 *)0x0;
            uVar10 = 0;
LAB_109258fcc:
            if (-1 < (char)iVar8) {
              plVar7 = param_2;
            }
            if (puVar13 < (undefined8 *)param_1[2]) {
              FUN_109259898(puVar13,uVar10 + (long)plVar7,lVar14 + (long)plVar7,lVar14 - uVar10);
              puVar13 = puVar13 + 3;
            }
            else {
              puVar13 = param_1;
              FUN_109259770(param_1,uVar10 + (long)plVar7,lVar14 + (long)plVar7);
            }
            param_1[1] = puVar13;
            uVar10 = lVar14 + 1;
            iVar8 = (int)(char)*(byte *)((long)param_2 + 0x17);
            plVar7 = (long *)*param_2;
            uVar9 = param_2[1];
            uVar1 = uVar9;
            plVar2 = plVar7;
            if (-1 < iVar8) {
              uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
              plVar2 = param_2;
            }
            uVar12 = *(ulong *)(param_3 + 8);
            pcVar3 = *(char **)param_3;
            if (-1 < param_3[0x17]) {
              uVar12 = (ulong)(byte)param_3[0x17];
              pcVar3 = param_3;
            }
            if (uVar10 < uVar1 && uVar12 != 0) {
              pcVar4 = (char *)((long)plVar2 + uVar10);
              do {
                uVar5 = uVar12;
                pcVar6 = pcVar3;
                do {
                  if (*pcVar4 == *pcVar6) {
                    if ((pcVar4 == (char *)((long)plVar2 + uVar1)) ||
                       (lVar14 = (long)pcVar4 - (long)plVar2, lVar14 == -1)) goto LAB_1092590ac;
                    goto LAB_109258fcc;
                  }
                  uVar5 = uVar5 - 1;
                  pcVar6 = pcVar6 + 1;
                } while (uVar5 != 0);
                pcVar4 = pcVar4 + 1;
              } while (pcVar4 != (char *)((long)plVar2 + uVar1));
            }
          }
          goto LAB_1092590ac;
        }
        uVar12 = uVar12 - 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar12 != 0);
      plVar11 = (long *)((long)plVar11 + 1);
    } while (plVar11 != (long *)((long)plVar2 + uVar10));
  }
  puVar13 = (undefined8 *)0x0;
  uVar10 = 0;
LAB_1092590ac:
  if (iVar8 < 0) {
    if (uVar10 == uVar9) {
      return;
    }
  }
  else {
    if (uVar10 == (long)iVar8) {
      return;
    }
    uVar9 = (ulong)iVar8;
    plVar7 = param_2;
  }
  if (puVar13 < (undefined8 *)param_1[2]) {
    FUN_109259898(puVar13,uVar10 + (long)plVar7,(long)plVar7 + uVar9,
                  ((long)plVar7 + uVar9) - (uVar10 + (long)plVar7));
    puVar13 = puVar13 + 3;
  }
  else {
    puVar13 = param_1;
    FUN_109259770();
  }
  param_1[1] = puVar13;
  return;
}



/* Entry: 109259144; end: 10925916f;  */

void FUN_109259144(undefined8 param_1,undefined8 param_2,int param_3,int param_4,uint *param_5)

{
  if ((param_3 == 0x80a9 || param_3 == 0x9380) && param_4 != 0) {
    *param_5 = (uint)(param_3 != 0x80a9);
  }
  return;
}



/* Entry: 109259170; end: 10925923f;  */

void FUN_109259170(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (param_1 == 0x8d40) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glDiscardFramebufferEXT_11034b528)(0x8d40);
    return;
  }
  func_0x000107c31940(auStack_50,&UNK_10f560437);
  puVar2 = &DAT_10f55f4b6;
  if (param_1 == 0x8ca8) {
    puVar2 = &UNK_10f55f6d4;
  }
  puVar1 = &UNK_10f55f6e4;
  if (param_1 != 0x8ca9) {
    puVar1 = puVar2;
  }
  puVar2 = &UNK_10f55f5be;
  if (param_1 != 0) {
    puVar2 = puVar1;
  }
  FUN_109259240(auStack_38,auStack_50,puVar2);
  FUN_10924a434(auStack_38);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10925920c);
  (*pcVar3)();
}



/* Entry: 109259240; end: 10925929b;  */

void FUN_109259240(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _strlen(param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,param_3,uVar1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10925929c; end: 10925929f;  */

void FUN_10925929c(void)

{
  return;
}



/* Entry: 1092592a0; end: 109259437;  */

void FUN_1092592a0(undefined8 param_1,int param_2)

{
  FUN_109243bf8(&UNK_10f560471);
  FUN_109243bf8(&UNK_10f5604a1);
  FUN_109243bf8(&UNK_10f5604a1);
  FUN_109243bf8(&UNK_10f5604cc);
  FUN_109243bf8(&UNK_10f5604cc);
  if (param_2 == 0) {
    return;
  }
  FUN_109243bf8(&UNK_10f5604a1);
  FUN_109243bf8(&UNK_10f5604f9);
  FUN_109243bf8(&UNK_10f56052e);
  FUN_109243bf8(&UNK_10f56055e);
  FUN_109243bf8(&UNK_10f560591);
  FUN_109243bf8(&UNK_10f5605c0);
  FUN_109243bf8(&UNK_10f5605ef);
  FUN_109243bf8(&UNK_10f560614);
  FUN_109243bf8(&UNK_10f560639);
  FUN_109243bf8(&UNK_10f56065e);
  FUN_109243bf8(&UNK_10f560683);
  FUN_109243bf8(&UNK_10f5606b4);
  FUN_109243bf8(&UNK_10f5606b4);
  FUN_109243bf8(&UNK_10f5606e0);
  FUN_109243bf8(&UNK_10f560712);
  return;
}



/* Entry: 109259438; end: 10925943f;  */

void FUN_109259438(void)

{
  return;
}



/* Entry: 109259440; end: 1092594cb;  */

void FUN_109259440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_109243bf8(&UNK_10f560745);
  FUN_109243bf8(&UNK_10f560777);
  FUN_109243bf8(&UNK_10f56079f);
  FUN_109243bf8(&UNK_10f5607c7);
  FUN_109243bf8(&UNK_10f5607ef);
  FUN_109243bf8(&UNK_10f560822);
  puVar1 = &UNK_10f560855;
  FUN_109243bf8();
  if (0 < (int)puVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_2,((ulong)puVar1 & 0xffffffff) << 2);
    return;
  }
  return;
}



/* Entry: 1092594cc; end: 1092594ef;  */

void FUN_1092594cc(uint param_1,undefined8 param_2)

{
  if (0 < (int)param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_11034bf90)(param_2,(ulong)param_1 << 2);
    return;
  }
  return;
}



/* Entry: 1092594f0; end: 1092596cf;  */

void FUN_1092594f0(void)

{
  FUN_109243bf8(&UNK_10f560881);
  FUN_109243bf8(&UNK_10f5608a7);
  FUN_109243bf8(&UNK_10f5608ca);
  FUN_109243bf8(&UNK_10f5608ee);
  FUN_109243bf8(&UNK_10f560920);
  FUN_109243bf8(&UNK_10f56094e);
  FUN_109243bf8(&UNK_10f560973);
  FUN_109243bf8(&UNK_10f5609a0);
  FUN_109243bf8(&UNK_10f5609ce);
  FUN_109243bf8(&UNK_10f5609fb);
  FUN_109243bf8(&UNK_10f560a22);
  FUN_109243bf8(&UNK_10f560a4c);
  FUN_109243bf8(&UNK_10f560a73);
  FUN_109243bf8(&UNK_10f560aa6);
  FUN_109243bf8(&UNK_10f560ae0);
  FUN_109243bf8(&UNK_10f560b25);
  FUN_109243bf8(&UNK_10f560b4e);
  FUN_109243bf8(&UNK_10f560b78);
  FUN_109243bf8(&UNK_10f560ba1);
  FUN_109243bf8(&UNK_10f560bca);
  FUN_109243bf8(&UNK_10f560bf5);
  FUN_109243bf8(&UNK_10f560c21);
  FUN_109243bf8(&UNK_10f560c4e);
  FUN_109243bf8(&UNK_10f560c7b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glHint_11034b6d8)();
  return;
}



/* Entry: 1092596d0; end: 1092596d3;  */

void FUN_1092596d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glHint_11034b6d8)();
  return;
}



/* Entry: 1092596d4; end: 10925970f;  */

void FUN_1092596d4(undefined8 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  FUN_109243bf8(&UNK_10f560ca6);
  if (param_2 == 0x912f) {
    *param_3 = 0;
    return;
  }
  iVar1 = 0xf560cda;
  FUN_109243bf8();
  if (((iVar1 != 0xcf2) && (iVar1 != 0xd02)) && (iVar1 != 0x806e)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glPixelStorei_11034b738)();
    return;
  }
  return;
}



/* Entry: 109259710; end: 10925973f;  */

void FUN_109259710(int param_1)

{
  if (((param_1 != 0xcf2) && (param_1 != 0xd02)) && (param_1 != 0x806e)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glPixelStorei_11034b738)();
    return;
  }
  return;
}



/* Entry: 109259740; end: 109259753;  */

void FUN_109259740(void)

{
  FUN_109243bf8(&UNK_10f560d07);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glGenQueriesEXT_11034b5d8)();
  return;
}



/* Entry: 109259754; end: 10925976f;  */

void FUN_109259754(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glGenQueriesEXT_11034b5d8)();
  return;
}



/* Entry: 109259770; end: 109259897;  */

ulong * FUN_109259770(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong *puStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x5555555555555555 + 1;
  if (uVar4 < 0xaaaaaaaaaaaaaab) {
    lVar3 = (long)(param_1[2] - *param_1) >> 3;
    uVar5 = lVar3 * 0x5555555555555556;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar5 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_48 = param_1;
    if (uVar5 == 0) {
      puVar1 = (ulong *)0x0;
    }
    else {
      puVar1 = param_1;
      func_0x000104c60784();
    }
    lVar6 = (long)puVar1 + lVar6;
    puStack_68 = puVar1;
    puStack_60 = (ulong *)lVar6;
    puStack_58 = (ulong *)lVar6;
    puStack_50 = puVar1 + uVar5 * 3;
    FUN_109259898(lVar6,param_2,param_3,param_3 - param_2);
    uVar4 = lVar6 - (param_1[1] - *param_1);
    _memcpy(uVar4);
    puStack_68 = (ulong *)*param_1;
    *param_1 = uVar4;
    param_1[1] = lVar6 + 0x18U;
    puStack_50 = (ulong *)param_1[2];
    param_1[2] = (ulong)(puVar1 + uVar5 * 3);
    puStack_60 = puStack_68;
    puStack_58 = puStack_68;
    func_0x000107c31938(&puStack_68);
    return (ulong *)(lVar6 + 0x18U);
  }
  func_0x000104c60770();
  func_0x000107c31938(&puStack_68);
  __Unwind_Resume();
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar2 = param_1;
    }
    else {
      puVar1 = (ulong *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar1 = (ulong *)((param_4 | 7) + 1);
      }
      puVar2 = puVar1;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar1 | 0x8000000000000000;
      *param_1 = (ulong)puVar2;
    }
    param_3 = param_3 - param_2;
    puVar1 = puVar2;
    if (param_3 != 0) {
      _memmove(puVar2,param_2,param_3);
    }
    *(undefined1 *)((long)puVar2 + param_3) = 0;
    return puVar1;
  }
  func_0x000104c4f6b8();
  return (ulong *)0x0;
}



/* Entry: 109259898; end: 109259933;  */

ulong * FUN_109259898(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  
  if (param_4 < 0x7ffffffffffffff8) {
    if (param_4 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_4;
      puVar1 = param_1;
    }
    else {
      puVar2 = (ulong *)0x19;
      if ((param_4 | 7) != 0x17) {
        puVar2 = (ulong *)((param_4 | 7) + 1);
      }
      puVar1 = puVar2;
      __Znwm();
      param_1[1] = param_4;
      param_1[2] = (ulong)puVar2 | 0x8000000000000000;
      *param_1 = (ulong)puVar1;
    }
    param_3 = param_3 - param_2;
    puVar2 = puVar1;
    if (param_3 != 0) {
      _memmove(puVar1,param_2,param_3);
    }
    *(undefined1 *)((long)puVar1 + param_3) = 0;
    return puVar2;
  }
  func_0x000104c4f6b8();
  return (ulong *)0x0;
}



/* Entry: 109259934; end: 109259963;  */

undefined8 FUN_109259934(void)

{
  return 0;
}



/* Entry: 109259964; end: 1092599c7;  */

void FUN_109259964(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined4 uVar11;
  undefined4 *extraout_x8;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  long lVar15;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  long lStack_98;
  
  FUN_109243bf8(&UNK_10f560e55);
  FUN_109243bf8(&UNK_10f560e79);
  FUN_109243bf8(&UNK_10f560ea1);
  FUN_109243bf8(&UNK_10f560ecb);
  FUN_109243bf8(&UNK_10f560ef6);
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109258024(extraout_x8);
  uVar7 = 0x1f01;
  _glGetString();
  uVar8 = uVar7;
  _strlen();
  func_0x00010925ad44(uVar7,uVar8);
  uVar8 = 0x1f03;
  _glGetString(0x1f03);
  func_0x000107c31940(&ppppuStack_c8,uVar8);
  *(undefined8 *)(extraout_x8 + 0x90) = 0x822b00001401;
  *(undefined8 *)(extraout_x8 + 0x8e) = 0x190300008229;
  *(undefined8 *)(extraout_x8 + 0x94) = 0x190700008051;
  *(undefined8 *)(extraout_x8 + 0x92) = 0x140100008227;
  *(undefined8 *)(extraout_x8 + 0x98) = 0x140100001908;
  *(undefined8 *)(extraout_x8 + 0x96) = 0x805800001401;
  *(undefined8 *)((long)extraout_x8 + 0x642) = 0x20f020f020f020f;
  *(undefined8 *)(extraout_x8 + 0xa5) = 0x8f9500001400;
  *(undefined8 *)(extraout_x8 + 0xa3) = 0x190300008f94;
  extraout_x8[0x194] = 0x2050205;
  *(undefined8 *)(extraout_x8 + 0xa9) = 0x190800008f97;
  *(undefined8 *)(extraout_x8 + 0xa7) = 0x140000008227;
  extraout_x8[0xab] = 0x1400;
  *(undefined2 *)(extraout_x8 + 0x195) = 0x205;
  *(undefined8 *)(extraout_x8 + 0xb7) = 0x823800001401;
  *(undefined8 *)(extraout_x8 + 0xb5) = 0x8d9400008232;
  *(undefined8 *)(extraout_x8 + 0xbb) = 0x8d9900008d7c;
  *(undefined8 *)(extraout_x8 + 0xb9) = 0x140100008228;
  *(undefined8 *)(extraout_x8 + 0xbf) = 0x140300008d94;
  *(undefined8 *)(extraout_x8 + 0xbd) = 0x823400001401;
  *(undefined8 *)(extraout_x8 + 0xc3) = 0x8d7600001403;
  *(undefined8 *)(extraout_x8 + 0xc1) = 0x82280000823a;
  *(undefined8 *)(extraout_x8 + 199) = 0x8d9400008236;
  *(undefined8 *)(extraout_x8 + 0xc5) = 0x140300008d99;
  *(undefined8 *)(extraout_x8 + 0xcb) = 0x140500008228;
  *(undefined8 *)(extraout_x8 + 0xc9) = 0x823c00001405;
  *(undefined8 *)(extraout_x8 + 0x199) = 0x10f010f010f010f;
  *(undefined8 *)(extraout_x8 + 0x197) = 0x10f010f010f010f;
  *(undefined8 *)(extraout_x8 + 0xcf) = 0x823100001405;
  *(undefined8 *)(extraout_x8 + 0xcd) = 0x8d9900008d70;
  *(undefined8 *)(extraout_x8 + 0xd3) = 0x822800008237;
  *(undefined8 *)(extraout_x8 + 0xd1) = 0x140000008d94;
  *(undefined8 *)(extraout_x8 + 0xd7) = 0x140000008d99;
  *(undefined8 *)(extraout_x8 + 0xd5) = 0x8d8e00001400;
  *(undefined8 *)(extraout_x8 + 0xdb) = 0x823900001402;
  *(undefined8 *)(extraout_x8 + 0xd9) = 0x8d9400008233;
  *(undefined8 *)(extraout_x8 + 0xdf) = 0x8d9900008d88;
  *(undefined8 *)(extraout_x8 + 0xdd) = 0x140200008228;
  *(undefined8 *)(extraout_x8 + 0xe3) = 0x140400008d94;
  *(undefined8 *)(extraout_x8 + 0xe1) = 0x823500001402;
  *(undefined8 *)(extraout_x8 + 0x19d) = 0x10f010f010f010f;
  *(undefined8 *)(extraout_x8 + 0x19b) = 0x10f010f010f010f;
  *(undefined8 *)(extraout_x8 + 0xe7) = 0x8d8200001404;
  *(undefined8 *)(extraout_x8 + 0xe5) = 0x82280000823b;
  *(undefined8 *)(extraout_x8 + 0xeb) = 0x19030000822d;
  *(undefined8 *)(extraout_x8 + 0xe9) = 0x140400008d99;
  *(undefined8 *)(extraout_x8 + 0xef) = 0x140b00008227;
  *(undefined8 *)(extraout_x8 + 0xed) = 0x822f0000140b;
  *(undefined8 *)(extraout_x8 + 0x19f) = 0x2050205010f010f;
  extraout_x8[0xf1] = 0x881a;
  *(undefined8 *)(extraout_x8 + 0xf2) = 0x140b00001908;
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  *(undefined2 *)(extraout_x8 + 0x1a1) = 0x205;
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560f86,0x1b);
  *(undefined1 *)((long)extraout_x8 + 0x686) = 5;
  uVar13 = 1;
  if ((int)pppppuVar10 != 0) {
    uVar13 = 2;
  }
  *(undefined1 *)((long)extraout_x8 + 0x687) = uVar13;
  *(undefined1 *)(extraout_x8 + 0x1a2) = 5;
  *(undefined1 *)((long)extraout_x8 + 0x689) = uVar13;
  *(undefined8 *)(extraout_x8 + 0xf6) = 0x823000001406;
  *(undefined8 *)(extraout_x8 + 0xf4) = 0x19030000822e;
  *(undefined8 *)(extraout_x8 + 0xfa) = 0x190800008814;
  *(undefined8 *)(extraout_x8 + 0xf8) = 0x140600008227;
  *(undefined1 *)((long)extraout_x8 + 0x68a) = 5;
  *(undefined1 *)((long)extraout_x8 + 0x68b) = uVar13;
  *(undefined8 *)(extraout_x8 + 0xfe) = 0x140100001903;
  *(undefined8 *)(extraout_x8 + 0xfc) = 0x822900001406;
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  *(undefined2 *)(extraout_x8 + 0x1a3) = 0x201;
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560da2,0x1e);
  uVar3 = uStack_c0;
  pppppuVar9 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar9 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar9,uVar3,&UNK_10f560dc1,0x20);
  if ((((ulong)pppppuVar10 & 1) != 0) || ((int)pppppuVar9 != 0)) {
    uVar11 = 0x80e1;
    if ((int)pppppuVar10 == 0) {
      uVar11 = 0x1908;
    }
    extraout_x8[0x100] = uVar11;
    *(undefined8 *)(extraout_x8 + 0x101) = 0x1401000080e1;
    *(undefined2 *)((long)extraout_x8 + 0x68e) = 0x20f;
  }
  *(undefined8 *)(extraout_x8 + 0x105) = 0x805900001401;
  *(undefined8 *)(extraout_x8 + 0x103) = 0x190800008c43;
  *(undefined8 *)(extraout_x8 + 0x109) = 0x8d990000906f;
  *(undefined8 *)(extraout_x8 + 0x107) = 0x836800001908;
  *(undefined8 *)(extraout_x8 + 0x10d) = 0x8c3b00001907;
  *(undefined8 *)(extraout_x8 + 0x10b) = 0x8c3a00008368;
  *(undefined8 *)(extraout_x8 + 0x1a4) = 0x205010f020f020f;
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560fa2,0x13);
  if ((int)pppppuVar10 != 0) {
    lVar12 = 0;
    uStack_a8 = 0x900000008;
    uStack_a0 = 10;
    do {
      lVar14 = (ulong)*(uint *)((long)&uStack_a8 + lVar12) * 2;
      *(byte *)((long)extraout_x8 + lVar14 + 0x640) =
           *(byte *)((long)extraout_x8 + lVar14 + 0x640) | 8;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
  }
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f432cb3,0x19);
  uVar5 = (uint)pppppuVar10;
  if (uVar5 != 0) {
    lVar12 = 0;
    uStack_a8 = 0x2400000023;
    uStack_a0 = 0x25;
    do {
      lVar14 = (ulong)*(uint *)((long)&uStack_a8 + lVar12) * 2;
      *(byte *)((long)extraout_x8 + lVar14 + 0x640) =
           *(byte *)((long)extraout_x8 + lVar14 + 0x640) | 8;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
  }
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560fb6,0x1e);
  if ((uVar5 | (uint)pppppuVar10) == 1) {
    lVar12 = 0;
    uStack_a8 = 0x2100000020;
    uStack_a0 = 0x22;
    do {
      lVar14 = (ulong)*(uint *)((long)&uStack_a8 + lVar12) * 2;
      *(byte *)((long)extraout_x8 + lVar14 + 0x640) =
           *(byte *)((long)extraout_x8 + lVar14 + 0x640) | 8;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
  }
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560fd5,0x22);
  if ((uVar5 | (uint)pppppuVar10) == 1) {
    *(byte *)((long)extraout_x8 + 0x696) = *(byte *)((long)extraout_x8 + 0x696) | 8;
  }
  *(undefined8 *)(extraout_x8 + 0x111) = 0x8cac00001403;
  *(undefined8 *)(extraout_x8 + 0x10f) = 0x1902000081a5;
  *(undefined8 *)(extraout_x8 + 0x115) = 0x84f9000088f0;
  *(undefined8 *)(extraout_x8 + 0x113) = 0x140600001902;
  *(undefined8 *)(extraout_x8 + 0x119) = 0x8dad000084f9;
  *(undefined8 *)(extraout_x8 + 0x117) = 0x8cad000084fa;
  *(undefined8 *)(extraout_x8 + 0x1a6) = 0x208020802080208;
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560de2,0x23);
  if (((ulong)pppppuVar10 & 1) == 0) {
    uVar3 = uStack_c0;
    pppppuVar10 = (undefined8 *****)ppppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uVar3 = (ulong)bStack_b1;
      pppppuVar10 = &ppppuStack_c8;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560e06,0x1d);
    if ((int)pppppuVar10 == 0) goto LAB_109259f34;
  }
  extraout_x8[0x11b] = 0x8d64;
  *(undefined8 *)(extraout_x8 + 0x11c) = 0x140100001908;
  *(undefined2 *)(extraout_x8 + 0x1a8) = 0x205;
LAB_109259f34:
  *(undefined8 *)(extraout_x8 + 0x120) = 0x927600001401;
  *(undefined8 *)(extraout_x8 + 0x11e) = 0x190700009274;
  *(undefined8 *)(extraout_x8 + 0x124) = 0x190800009278;
  *(undefined8 *)(extraout_x8 + 0x122) = 0x140100001908;
  *(undefined8 *)((long)extraout_x8 + 0x6a2) = 0x205020502050205;
  *(undefined8 *)(extraout_x8 + 0x128) = 0x140100001907;
  *(undefined8 *)(extraout_x8 + 0x126) = 0x927500001401;
  *(undefined8 *)(extraout_x8 + 300) = 0x927900001401;
  *(undefined8 *)(extraout_x8 + 0x12a) = 0x190800009277;
  *(undefined8 *)(extraout_x8 + 0x12e) = 0x140100001908;
  lVar12 = 0x640;
  lVar14 = 0xd0;
  lVar15 = 0x22c;
  *(undefined4 *)((long)extraout_x8 + 0x6aa) = 0x2050205;
  do {
    if ((*(byte *)((long)extraout_x8 + lVar12) >> 3 & 1) != 0) {
      *(undefined4 *)((long)extraout_x8 + lVar14) = *(undefined4 *)((long)extraout_x8 + lVar15);
    }
    lVar12 = lVar12 + 2;
    lVar14 = lVar14 + 4;
    lVar15 = lVar15 + 0xc;
  } while (lVar12 != 0x6ee);
  if (extraout_x8[0x5b] == 0x1908 || extraout_x8[0x5b] == 0x80e1) {
    extraout_x8[0x5b] = 0x93a1;
  }
  *extraout_x8 = 0x406;
  uVar13 = 1;
  *(undefined1 *)((long)extraout_x8 + 0x31) = 1;
  *(undefined2 *)((long)extraout_x8 + 0x2f) = 0;
  *(undefined4 *)((long)extraout_x8 + 5) = 0x1010101;
  *(undefined4 *)((long)extraout_x8 + 9) = 0x1010100;
  *(undefined1 *)(extraout_x8 + 1) = 1;
  *(undefined1 *)(extraout_x8 + 0xd) = 1;
  *(undefined1 *)((long)extraout_x8 + 0xd) = 0;
  *(undefined1 *)((long)extraout_x8 + 0xf) = 1;
  *(undefined2 *)((long)extraout_x8 + 0x13) = 0x101;
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  *(undefined1 *)((long)extraout_x8 + 0x15) = 1;
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560266,0x1a);
  if (((ulong)pppppuVar10 & 1) == 0) {
    uVar3 = uStack_c0;
    pppppuVar10 = (undefined8 *****)ppppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uVar3 = (ulong)bStack_b1;
      pppppuVar10 = &ppppuStack_c8;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560281,0x1b);
    if (((ulong)pppppuVar10 & 1) == 0) {
      uVar3 = uStack_c0;
      pppppuVar10 = (undefined8 *****)ppppuStack_c8;
      if (-1 < (char)bStack_b1) {
        uVar3 = (ulong)bStack_b1;
        pppppuVar10 = &ppppuStack_c8;
      }
      func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f56029d,0x1b);
      uVar13 = SUB81(pppppuVar10,0);
    }
  }
  *(undefined1 *)((long)extraout_x8 + 0x16) = uVar13;
  *(undefined2 *)((long)extraout_x8 + 0x17) = 0x101;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  _glGenBuffers(1,&uStack_a8);
  _glBindBuffer(0x8892,uStack_a8 & 0xffffffff);
  _glBufferData(0x8892,0x80,0,0x88e4);
  lVar12 = 0x8892;
  _glMapBufferRange(0x8892,0,0x80,3);
  _glUnmapBuffer(0x8892);
  iVar6 = 1;
  _glDeleteBuffers(1,&uStack_a8);
  FUN_10925b820();
  iVar4 = 0;
  if (lVar12 != 0) {
    iVar4 = iVar6;
  }
  *(char *)((long)extraout_x8 + 0x19) = (char)iVar4;
  if (iVar4 == 1) {
    uVar3 = uStack_c0;
    pppppuVar10 = (undefined8 *****)ppppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uVar3 = (ulong)bStack_b1;
      pppppuVar10 = &ppppuStack_c8;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560f1b,0x15);
    if ((int)pppppuVar10 != 0) {
      *(undefined1 *)((long)extraout_x8 + 0x1a) = 0;
    }
  }
  *(undefined4 *)((long)extraout_x8 + 0x1e) = 0x1010101;
  *(undefined4 *)((long)extraout_x8 + 0x1b) = 0x1010101;
  *(undefined1 *)((long)extraout_x8 + 0x22) = 0;
  *(undefined2 *)(extraout_x8 + 9) = 0x101;
  *(undefined1 *)((long)extraout_x8 + 0x2b) = 1;
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&DAT_10f560328,0x1f);
  uVar13 = 1;
  if (((ulong)pppppuVar10 & 1) == 0) {
    uVar3 = uStack_c0;
    pppppuVar10 = (undefined8 *****)ppppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uVar3 = (ulong)bStack_b1;
      pppppuVar10 = &ppppuStack_c8;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&DAT_10f560348,0x1f);
    uVar13 = SUB81(pppppuVar10,0);
  }
  *(undefined1 *)((long)extraout_x8 + 0x26) = uVar13;
  *(undefined1 *)((long)extraout_x8 + 0x2a) = 1;
  *(undefined2 *)(extraout_x8 + 0xb) = 0x101;
  *(undefined1 *)((long)extraout_x8 + 0x2e) = 1;
  *(byte *)((long)extraout_x8 + 0xe) =
       10 < (uint)uVar7 | (byte)(0x1fb >> (ulong)((uint)uVar7 & 0x1f)) & 1;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  _glGetIntegerv(0x87fe,&uStack_a8);
  *(bool *)((long)extraout_x8 + 0x32) = 0 < (int)(uint)uStack_a8;
  *(undefined8 *)(extraout_x8 + 0x24) = 1000000000;
  *(undefined8 *)(extraout_x8 + 0x28) = 0x101010101010101;
  *(undefined8 *)(extraout_x8 + 0x26) = 0x101010101010101;
  *(undefined8 *)(extraout_x8 + 0x2c) = 0x101010101010101;
  *(undefined8 *)(extraout_x8 + 0x2a) = 0x101010101010101;
  *(undefined8 *)(extraout_x8 + 0x2e) = 0x101010101010101;
  uStack_cc = 0;
  _glGetIntegerv(0x88ff,&uStack_cc);
  extraout_x8[0x11] = uStack_cc;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  _glGetIntegerv(0x8073,&uStack_a8);
  uVar5 = (uint)uStack_a8;
  if ((uint)uStack_a8 < 0x101) {
    uVar5 = 0x100;
  }
  extraout_x8[0x12] = uVar5;
  iStack_d0 = 0;
  _glGetIntegerv(0x8cdf,&iStack_d0);
  iVar4 = iStack_d0;
  if (iStack_d0 < 2) {
    iVar4 = 1;
  }
  extraout_x8[0x13] = iVar4;
  iStack_d4 = 0;
  _glGetIntegerv(0x8824,&iStack_d4);
  iVar4 = iStack_d4;
  if (iStack_d4 < 2) {
    iVar4 = 1;
  }
  extraout_x8[0x14] = iVar4;
  extraout_x8[0x10] = 0;
  *(undefined2 *)(extraout_x8 + 4) = 0;
  *(undefined1 *)((long)extraout_x8 + 0x12) = 0;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  uStack_b0 = 0;
  uVar3 = uStack_c0;
  pppppuVar10 = (undefined8 *****)ppppuStack_c8;
  if (-1 < (char)bStack_b1) {
    uVar3 = (ulong)bStack_b1;
    pppppuVar10 = &ppppuStack_c8;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&DAT_10f560ff8,0x19);
  if ((int)pppppuVar10 == 0) {
    pppppuVar10 = (undefined8 *****)ppppuStack_c8;
    if (-1 < (char)bStack_b1) {
      uStack_c0 = (ulong)bStack_b1;
      pppppuVar10 = &ppppuStack_c8;
    }
    func_0x00010925cf64(pppppuVar10,uStack_c0,&DAT_10f5603f0,0x16);
    if ((int)pppppuVar10 != 0) {
      pppppuVar10 = (undefined8 *****)0xd32;
      _glGetIntegerv(0xd32,&uStack_a8);
      uStack_b0 = uStack_a8 & 0xffffffff;
    }
  }
  else {
    _glGetIntegerv(0xd32,&uStack_a8);
    _glGetIntegerv(0x82f9,(long)&uStack_b0 + 4);
    pppppuVar10 = (undefined8 *****)0x82fa;
    _glGetIntegerv(0x82fa,&uStack_b0);
  }
  FUN_10925b820();
  uVar2 = (uint)uStack_a8;
  uVar1 = uStack_b0._4_4_;
  uVar11 = (undefined4)uStack_b0;
  if ((int)pppppuVar10 == 0) {
    uVar11 = 0;
    uVar1 = 0;
    uVar2 = 0;
  }
  extraout_x8[0x15] = uVar2;
  extraout_x8[0x16] = uVar1;
  extraout_x8[0x17] = uVar11;
  *(undefined **)(extraout_x8 + 0x30) = &UNK_10f432d5e;
  *(undefined8 *)(extraout_x8 + 0x32) = 0x10;
  if ((char)bStack_b1 < '\0') {
    pppppuVar10 = (undefined8 *****)ppppuStack_c8;
    __ZdlPv(ppppuStack_c8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    if ((char)bStack_b1 < '\0') {
      __ZdlPv(ppppuStack_c8);
    }
    __Unwind_Resume(pppppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glCopyBufferSubData_11034b468)();
    return;
  }
  return;
}



/* Entry: 1092599c8; end: 10925a413;  */

void FUN_1092599c8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined4 uVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  long lVar15;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined4 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109258024(param_1);
  uVar7 = 0x1f01;
  _glGetString();
  uVar8 = uVar7;
  _strlen();
  func_0x00010925ad44(uVar7,uVar8);
  uVar8 = 0x1f03;
  _glGetString(0x1f03);
  func_0x000107c31940(&ppppuStack_78,uVar8);
  *(undefined8 *)(param_1 + 0x90) = 0x822b00001401;
  *(undefined8 *)(param_1 + 0x8e) = 0x190300008229;
  *(undefined8 *)(param_1 + 0x94) = 0x190700008051;
  *(undefined8 *)(param_1 + 0x92) = 0x140100008227;
  *(undefined8 *)(param_1 + 0x98) = 0x140100001908;
  *(undefined8 *)(param_1 + 0x96) = 0x805800001401;
  *(undefined8 *)((long)param_1 + 0x642) = 0x20f020f020f020f;
  *(undefined8 *)(param_1 + 0xa5) = 0x8f9500001400;
  *(undefined8 *)(param_1 + 0xa3) = 0x190300008f94;
  param_1[0x194] = 0x2050205;
  *(undefined8 *)(param_1 + 0xa9) = 0x190800008f97;
  *(undefined8 *)(param_1 + 0xa7) = 0x140000008227;
  param_1[0xab] = 0x1400;
  *(undefined2 *)(param_1 + 0x195) = 0x205;
  *(undefined8 *)(param_1 + 0xb7) = 0x823800001401;
  *(undefined8 *)(param_1 + 0xb5) = 0x8d9400008232;
  *(undefined8 *)(param_1 + 0xbb) = 0x8d9900008d7c;
  *(undefined8 *)(param_1 + 0xb9) = 0x140100008228;
  *(undefined8 *)(param_1 + 0xbf) = 0x140300008d94;
  *(undefined8 *)(param_1 + 0xbd) = 0x823400001401;
  *(undefined8 *)(param_1 + 0xc3) = 0x8d7600001403;
  *(undefined8 *)(param_1 + 0xc1) = 0x82280000823a;
  *(undefined8 *)(param_1 + 199) = 0x8d9400008236;
  *(undefined8 *)(param_1 + 0xc5) = 0x140300008d99;
  *(undefined8 *)(param_1 + 0xcb) = 0x140500008228;
  *(undefined8 *)(param_1 + 0xc9) = 0x823c00001405;
  *(undefined8 *)(param_1 + 0x199) = 0x10f010f010f010f;
  *(undefined8 *)(param_1 + 0x197) = 0x10f010f010f010f;
  *(undefined8 *)(param_1 + 0xcf) = 0x823100001405;
  *(undefined8 *)(param_1 + 0xcd) = 0x8d9900008d70;
  *(undefined8 *)(param_1 + 0xd3) = 0x822800008237;
  *(undefined8 *)(param_1 + 0xd1) = 0x140000008d94;
  *(undefined8 *)(param_1 + 0xd7) = 0x140000008d99;
  *(undefined8 *)(param_1 + 0xd5) = 0x8d8e00001400;
  *(undefined8 *)(param_1 + 0xdb) = 0x823900001402;
  *(undefined8 *)(param_1 + 0xd9) = 0x8d9400008233;
  *(undefined8 *)(param_1 + 0xdf) = 0x8d9900008d88;
  *(undefined8 *)(param_1 + 0xdd) = 0x140200008228;
  *(undefined8 *)(param_1 + 0xe3) = 0x140400008d94;
  *(undefined8 *)(param_1 + 0xe1) = 0x823500001402;
  *(undefined8 *)(param_1 + 0x19d) = 0x10f010f010f010f;
  *(undefined8 *)(param_1 + 0x19b) = 0x10f010f010f010f;
  *(undefined8 *)(param_1 + 0xe7) = 0x8d8200001404;
  *(undefined8 *)(param_1 + 0xe5) = 0x82280000823b;
  *(undefined8 *)(param_1 + 0xeb) = 0x19030000822d;
  *(undefined8 *)(param_1 + 0xe9) = 0x140400008d99;
  *(undefined8 *)(param_1 + 0xef) = 0x140b00008227;
  *(undefined8 *)(param_1 + 0xed) = 0x822f0000140b;
  *(undefined8 *)(param_1 + 0x19f) = 0x2050205010f010f;
  param_1[0xf1] = 0x881a;
  *(undefined8 *)(param_1 + 0xf2) = 0x140b00001908;
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  *(undefined2 *)(param_1 + 0x1a1) = 0x205;
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560f86,0x1b);
  *(undefined1 *)((long)param_1 + 0x686) = 5;
  uVar13 = 1;
  if ((int)pppppuVar10 != 0) {
    uVar13 = 2;
  }
  *(undefined1 *)((long)param_1 + 0x687) = uVar13;
  *(undefined1 *)(param_1 + 0x1a2) = 5;
  *(undefined1 *)((long)param_1 + 0x689) = uVar13;
  *(undefined8 *)(param_1 + 0xf6) = 0x823000001406;
  *(undefined8 *)(param_1 + 0xf4) = 0x19030000822e;
  *(undefined8 *)(param_1 + 0xfa) = 0x190800008814;
  *(undefined8 *)(param_1 + 0xf8) = 0x140600008227;
  *(undefined1 *)((long)param_1 + 0x68a) = 5;
  *(undefined1 *)((long)param_1 + 0x68b) = uVar13;
  *(undefined8 *)(param_1 + 0xfe) = 0x140100001903;
  *(undefined8 *)(param_1 + 0xfc) = 0x822900001406;
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  *(undefined2 *)(param_1 + 0x1a3) = 0x201;
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560da2,0x1e);
  uVar3 = uStack_70;
  pppppuVar9 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar9 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar9,uVar3,&UNK_10f560dc1,0x20);
  if ((((ulong)pppppuVar10 & 1) != 0) || ((int)pppppuVar9 != 0)) {
    uVar11 = 0x80e1;
    if ((int)pppppuVar10 == 0) {
      uVar11 = 0x1908;
    }
    param_1[0x100] = uVar11;
    *(undefined8 *)(param_1 + 0x101) = 0x1401000080e1;
    *(undefined2 *)((long)param_1 + 0x68e) = 0x20f;
  }
  *(undefined8 *)(param_1 + 0x105) = 0x805900001401;
  *(undefined8 *)(param_1 + 0x103) = 0x190800008c43;
  *(undefined8 *)(param_1 + 0x109) = 0x8d990000906f;
  *(undefined8 *)(param_1 + 0x107) = 0x836800001908;
  *(undefined8 *)(param_1 + 0x10d) = 0x8c3b00001907;
  *(undefined8 *)(param_1 + 0x10b) = 0x8c3a00008368;
  *(undefined8 *)(param_1 + 0x1a4) = 0x205010f020f020f;
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560fa2,0x13);
  if ((int)pppppuVar10 != 0) {
    lVar12 = 0;
    uStack_58 = 0x900000008;
    uStack_50 = 10;
    do {
      lVar14 = (ulong)*(uint *)((long)&uStack_58 + lVar12) * 2;
      *(byte *)((long)param_1 + lVar14 + 0x640) = *(byte *)((long)param_1 + lVar14 + 0x640) | 8;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
  }
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f432cb3,0x19);
  uVar5 = (uint)pppppuVar10;
  if (uVar5 != 0) {
    lVar12 = 0;
    uStack_58 = 0x2400000023;
    uStack_50 = 0x25;
    do {
      lVar14 = (ulong)*(uint *)((long)&uStack_58 + lVar12) * 2;
      *(byte *)((long)param_1 + lVar14 + 0x640) = *(byte *)((long)param_1 + lVar14 + 0x640) | 8;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
  }
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560fb6,0x1e);
  if ((uVar5 | (uint)pppppuVar10) == 1) {
    lVar12 = 0;
    uStack_58 = 0x2100000020;
    uStack_50 = 0x22;
    do {
      lVar14 = (ulong)*(uint *)((long)&uStack_58 + lVar12) * 2;
      *(byte *)((long)param_1 + lVar14 + 0x640) = *(byte *)((long)param_1 + lVar14 + 0x640) | 8;
      lVar12 = lVar12 + 4;
    } while (lVar12 != 0xc);
  }
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560fd5,0x22);
  if ((uVar5 | (uint)pppppuVar10) == 1) {
    *(byte *)((long)param_1 + 0x696) = *(byte *)((long)param_1 + 0x696) | 8;
  }
  *(undefined8 *)(param_1 + 0x111) = 0x8cac00001403;
  *(undefined8 *)(param_1 + 0x10f) = 0x1902000081a5;
  *(undefined8 *)(param_1 + 0x115) = 0x84f9000088f0;
  *(undefined8 *)(param_1 + 0x113) = 0x140600001902;
  *(undefined8 *)(param_1 + 0x119) = 0x8dad000084f9;
  *(undefined8 *)(param_1 + 0x117) = 0x8cad000084fa;
  *(undefined8 *)(param_1 + 0x1a6) = 0x208020802080208;
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560de2,0x23);
  if (((ulong)pppppuVar10 & 1) == 0) {
    uVar3 = uStack_70;
    pppppuVar10 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar3 = (ulong)bStack_61;
      pppppuVar10 = &ppppuStack_78;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560e06,0x1d);
    if ((int)pppppuVar10 == 0) goto LAB_109259f34;
  }
  param_1[0x11b] = 0x8d64;
  *(undefined8 *)(param_1 + 0x11c) = 0x140100001908;
  *(undefined2 *)(param_1 + 0x1a8) = 0x205;
LAB_109259f34:
  *(undefined8 *)(param_1 + 0x120) = 0x927600001401;
  *(undefined8 *)(param_1 + 0x11e) = 0x190700009274;
  *(undefined8 *)(param_1 + 0x124) = 0x190800009278;
  *(undefined8 *)(param_1 + 0x122) = 0x140100001908;
  *(undefined8 *)((long)param_1 + 0x6a2) = 0x205020502050205;
  *(undefined8 *)(param_1 + 0x128) = 0x140100001907;
  *(undefined8 *)(param_1 + 0x126) = 0x927500001401;
  *(undefined8 *)(param_1 + 300) = 0x927900001401;
  *(undefined8 *)(param_1 + 0x12a) = 0x190800009277;
  *(undefined8 *)(param_1 + 0x12e) = 0x140100001908;
  lVar12 = 0x640;
  lVar14 = 0xd0;
  lVar15 = 0x22c;
  *(undefined4 *)((long)param_1 + 0x6aa) = 0x2050205;
  do {
    if ((*(byte *)((long)param_1 + lVar12) >> 3 & 1) != 0) {
      *(undefined4 *)((long)param_1 + lVar14) = *(undefined4 *)((long)param_1 + lVar15);
    }
    lVar12 = lVar12 + 2;
    lVar14 = lVar14 + 4;
    lVar15 = lVar15 + 0xc;
  } while (lVar12 != 0x6ee);
  if (param_1[0x5b] == 0x1908 || param_1[0x5b] == 0x80e1) {
    param_1[0x5b] = 0x93a1;
  }
  *param_1 = 0x406;
  uVar13 = 1;
  *(undefined1 *)((long)param_1 + 0x31) = 1;
  *(undefined2 *)((long)param_1 + 0x2f) = 0;
  *(undefined4 *)((long)param_1 + 5) = 0x1010101;
  *(undefined4 *)((long)param_1 + 9) = 0x1010100;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((long)param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0xf) = 1;
  *(undefined2 *)((long)param_1 + 0x13) = 0x101;
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  *(undefined1 *)((long)param_1 + 0x15) = 1;
  func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560266,0x1a);
  if (((ulong)pppppuVar10 & 1) == 0) {
    uVar3 = uStack_70;
    pppppuVar10 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar3 = (ulong)bStack_61;
      pppppuVar10 = &ppppuStack_78;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560281,0x1b);
    if (((ulong)pppppuVar10 & 1) == 0) {
      uVar3 = uStack_70;
      pppppuVar10 = (undefined8 *****)ppppuStack_78;
      if (-1 < (char)bStack_61) {
        uVar3 = (ulong)bStack_61;
        pppppuVar10 = &ppppuStack_78;
      }
      func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f56029d,0x1b);
      uVar13 = SUB81(pppppuVar10,0);
    }
  }
  *(undefined1 *)((long)param_1 + 0x16) = uVar13;
  *(undefined2 *)((long)param_1 + 0x17) = 0x101;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  _glGenBuffers(1,&uStack_58);
  _glBindBuffer(0x8892,uStack_58 & 0xffffffff);
  _glBufferData(0x8892,0x80,0,0x88e4);
  lVar12 = 0x8892;
  _glMapBufferRange(0x8892,0,0x80,3);
  _glUnmapBuffer(0x8892);
  iVar6 = 1;
  _glDeleteBuffers(1,&uStack_58);
  FUN_10925b820();
  iVar4 = 0;
  if (lVar12 != 0) {
    iVar4 = iVar6;
  }
  *(char *)((long)param_1 + 0x19) = (char)iVar4;
  if (iVar4 == 1) {
    uVar3 = uStack_70;
    pppppuVar10 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar3 = (ulong)bStack_61;
      pppppuVar10 = &ppppuStack_78;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&UNK_10f560f1b,0x15);
    if ((int)pppppuVar10 != 0) {
      *(undefined1 *)((long)param_1 + 0x1a) = 0;
    }
  }
  *(undefined4 *)((long)param_1 + 0x1e) = 0x1010101;
  *(undefined4 *)((long)param_1 + 0x1b) = 0x1010101;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined1 *)((long)param_1 + 0x2b) = 1;
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&DAT_10f560328,0x1f);
  uVar13 = 1;
  if (((ulong)pppppuVar10 & 1) == 0) {
    uVar3 = uStack_70;
    pppppuVar10 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uVar3 = (ulong)bStack_61;
      pppppuVar10 = &ppppuStack_78;
    }
    func_0x00010925cf64(pppppuVar10,uVar3,&DAT_10f560348,0x1f);
    uVar13 = SUB81(pppppuVar10,0);
  }
  *(undefined1 *)((long)param_1 + 0x26) = uVar13;
  *(undefined1 *)((long)param_1 + 0x2a) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  *(undefined1 *)((long)param_1 + 0x2e) = 1;
  *(byte *)((long)param_1 + 0xe) =
       10 < (uint)uVar7 | (byte)(0x1fb >> (ulong)((uint)uVar7 & 0x1f)) & 1;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  _glGetIntegerv(0x87fe,&uStack_58);
  *(bool *)((long)param_1 + 0x32) = 0 < (int)(uint)uStack_58;
  *(undefined8 *)(param_1 + 0x24) = 1000000000;
  *(undefined8 *)(param_1 + 0x28) = 0x101010101010101;
  *(undefined8 *)(param_1 + 0x26) = 0x101010101010101;
  *(undefined8 *)(param_1 + 0x2c) = 0x101010101010101;
  *(undefined8 *)(param_1 + 0x2a) = 0x101010101010101;
  *(undefined8 *)(param_1 + 0x2e) = 0x101010101010101;
  uStack_7c = 0;
  _glGetIntegerv(0x88ff,&uStack_7c);
  param_1[0x11] = uStack_7c;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  _glGetIntegerv(0x8073,&uStack_58);
  uVar5 = (uint)uStack_58;
  if ((uint)uStack_58 < 0x101) {
    uVar5 = 0x100;
  }
  param_1[0x12] = uVar5;
  iStack_80 = 0;
  _glGetIntegerv(0x8cdf,&iStack_80);
  iVar4 = iStack_80;
  if (iStack_80 < 2) {
    iVar4 = 1;
  }
  param_1[0x13] = iVar4;
  iStack_84 = 0;
  _glGetIntegerv(0x8824,&iStack_84);
  iVar4 = iStack_84;
  if (iStack_84 < 2) {
    iVar4 = 1;
  }
  param_1[0x14] = iVar4;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x12) = 0;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  uStack_60 = 0;
  uVar3 = uStack_70;
  pppppuVar10 = (undefined8 *****)ppppuStack_78;
  if (-1 < (char)bStack_61) {
    uVar3 = (ulong)bStack_61;
    pppppuVar10 = &ppppuStack_78;
  }
  func_0x00010925cf64(pppppuVar10,uVar3,&DAT_10f560ff8,0x19);
  if ((int)pppppuVar10 == 0) {
    pppppuVar10 = (undefined8 *****)ppppuStack_78;
    if (-1 < (char)bStack_61) {
      uStack_70 = (ulong)bStack_61;
      pppppuVar10 = &ppppuStack_78;
    }
    func_0x00010925cf64(pppppuVar10,uStack_70,&DAT_10f5603f0,0x16);
    if ((int)pppppuVar10 != 0) {
      pppppuVar10 = (undefined8 *****)0xd32;
      _glGetIntegerv(0xd32,&uStack_58);
      uStack_60 = uStack_58 & 0xffffffff;
    }
  }
  else {
    _glGetIntegerv(0xd32,&uStack_58);
    _glGetIntegerv(0x82f9,(long)&uStack_60 + 4);
    pppppuVar10 = (undefined8 *****)0x82fa;
    _glGetIntegerv(0x82fa,&uStack_60);
  }
  FUN_10925b820();
  uVar2 = (uint)uStack_58;
  uVar1 = uStack_60._4_4_;
  uVar11 = (undefined4)uStack_60;
  if ((int)pppppuVar10 == 0) {
    uVar11 = 0;
    uVar1 = 0;
    uVar2 = 0;
  }
  param_1[0x15] = uVar2;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar11;
  *(undefined **)(param_1 + 0x30) = &UNK_10f432d5e;
  *(undefined8 *)(param_1 + 0x32) = 0x10;
  if ((char)bStack_61 < '\0') {
    pppppuVar10 = (undefined8 *****)ppppuStack_78;
    __ZdlPv(ppppuStack_78);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((char)bStack_61 < '\0') {
      __ZdlPv(ppppuStack_78);
    }
    __Unwind_Resume(pppppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glCopyBufferSubData_11034b468)();
    return;
  }
  return;
}



/* Entry: 10925a414; end: 10925a447;  */

void FUN_10925a414(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glCopyBufferSubData_11034b468)();
  return;
}



/* Entry: 10925a448; end: 10925a45b;  */

void FUN_10925a448(void)

{
  FUN_109243bf8(&UNK_10f560f31);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glTexImage3D_11034b7e0)();
  return;
}



/* Entry: 10925a45c; end: 10925a47b;  */

void FUN_10925a45c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glTexImage3D_11034b7e0)();
  return;
}



/* Entry: 10925a47c; end: 10925a4a3;  */

void FUN_10925a47c(void)

{
  FUN_109244fe8(&UNK_10f560f67);
  FUN_109244fe8(&UNK_10f560f67);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDrawBuffers_11034b540)();
  return;
}



/* Entry: 10925a4a4; end: 10925a577;  */

void FUN_10925a4a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDrawBuffers_11034b540)();
  return;
}



/* Entry: 10925a578; end: 10925aabb;  */

long * FUN_10925a578(long *param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar6 = 0;
  lVar8 = *param_2;
  *param_1 = lVar8;
  param_1[1] = lVar8 + 0x810;
  *(byte *)(param_1 + 2) = (byte)((uint)*(undefined4 *)(lVar8 + 0x810) >> 0x1c) & 1;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[0x10] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xad) = 0;
  param_1[0x15] = 0;
  param_1[0x17] = -1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar6 + 0xe8) = 0;
    *(undefined1 *)((long)param_1 + lVar6 + 0xec) = 0;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x18);
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
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
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((long)param_1 + 0x1a1) = 0;
  *(undefined8 *)((long)param_1 + 0x199) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = (long)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 0x10);
  if (uVar2 != 0) {
    lVar8 = (ulong)uVar2 * 0x24;
    lVar6 = lVar8;
    __Znwm();
    _bzero();
    param_1[0xd] = lVar6;
    param_1[0xe] = lVar6 + ((lVar8 - 0x24U) / 0x24) * 0x24 + 0x24;
    param_1[0xf] = lVar6 + (ulong)uVar2 * 0x24;
  }
  func_0x000108a5942c(param_1 + 3,(ulong)uVar2);
  uVar7 = (ulong)*(uint *)(param_1[0x3f] + 100);
  lVar8 = param_1[0x36];
  lVar6 = param_1[0x37];
  lVar10 = lVar6 - lVar8;
  uVar13 = lVar10 >> 1;
  if (uVar13 < uVar7) {
    uVar12 = uVar7 - uVar13;
    if ((ulong)(param_1[0x38] - lVar6 >> 1) < uVar12) {
      uVar9 = param_1[0x38] - lVar8;
      uVar1 = uVar9;
      if (uVar9 <= uVar7) {
        uVar1 = uVar7;
      }
      if (0x7ffffffffffffffd < uVar9) {
        uVar1 = 0x7fffffffffffffff;
      }
      if ((long)uVar1 < 0) goto LAB_10925aa48;
      lVar5 = uVar1 << 1;
      __Znwm();
      lVar6 = lVar5 + lVar10;
      _bzero(lVar6,uVar12 * 2);
      lVar11 = lVar6 + uVar13 * -2;
      _memcpy(lVar11,lVar8,lVar10);
      param_1[0x36] = lVar11;
      param_1[0x37] = lVar6 + uVar12 * 2;
      param_1[0x38] = lVar5 + uVar1 * 2;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
    }
    else {
      _bzero(lVar6,uVar12 * 2);
      lVar6 = lVar6 + uVar12 * 2;
LAB_10925a798:
      param_1[0x37] = lVar6;
    }
  }
  else if (uVar7 < uVar13) {
    lVar6 = lVar8 + uVar7 * 2;
    goto LAB_10925a798;
  }
  uVar13 = (ulong)*(uint *)(param_1[0x3f] + 100);
  lVar8 = param_1[0x3c];
  lVar6 = param_1[0x3d];
  lVar10 = lVar6 - lVar8;
  bVar4 = uVar13 < (ulong)((lVar10 >> 3) * -0x3333333333333333);
  uVar7 = uVar13 + (lVar10 >> 3) * 0x3333333333333333;
  if (bVar4 || uVar7 == 0) {
    if (bVar4) {
      lVar6 = lVar8 + uVar13 * 0x28;
      goto LAB_10925a8d4;
    }
  }
  else if ((ulong)((param_1[0x3e] - lVar6 >> 3) * -0x3333333333333333) < uVar7) {
    lVar6 = param_1[0x3e] - lVar8 >> 3;
    uVar12 = lVar6 * -0x6666666666666666;
    if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
      uVar12 = uVar13;
    }
    if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
      uVar12 = 0x666666666666666;
    }
    if (0x666666666666666 < uVar12) goto LAB_10925aa48;
    lVar6 = uVar12 * 0x28;
    __Znwm();
    lVar5 = (((uVar7 & 0xffffffff) * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    _bzero(lVar6 + lVar10,lVar5);
    _memcpy(lVar6,lVar8,lVar10);
    param_1[0x3c] = lVar6;
    param_1[0x3d] = lVar6 + lVar10 + lVar5;
    param_1[0x3e] = lVar6 + uVar12 * 0x28;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  else {
    lVar8 = (((uVar7 & 0xffffffff) * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    _bzero(lVar6,lVar8);
    lVar6 = lVar6 + lVar8;
LAB_10925a8d4:
    param_1[0x3d] = lVar6;
  }
  func_0x000108a5942c(param_1 + 0x39,*(undefined4 *)(param_1[0x3f] + 100));
  uVar13 = (ulong)*(uint *)(param_1[0x3f] + 0x50);
  lVar8 = param_1[0x31];
  lVar6 = param_1[0x32];
  lVar10 = lVar6 - lVar8;
  bVar4 = (ulong)((lVar10 >> 3) * -0x3333333333333333) <= uVar13;
  uVar7 = uVar13 + (lVar10 >> 3) * 0x3333333333333333;
  if (bVar4 && uVar7 != 0) {
    if ((ulong)((param_1[0x33] - lVar6 >> 3) * -0x3333333333333333) < uVar7) {
      lVar6 = param_1[0x33] - lVar8 >> 3;
      uVar12 = lVar6 * -0x6666666666666666;
      if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
        uVar12 = uVar13;
      }
      if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
        uVar12 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar12) {
LAB_10925aa48:
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10925aa50);
        (*pcVar3)();
      }
      lVar6 = uVar12 * 0x28;
      __Znwm();
      lVar5 = (((uVar7 & 0xffffffff) * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
      _bzero(lVar6 + lVar10,lVar5);
      _memcpy(lVar6,lVar8,lVar10);
      param_1[0x31] = lVar6;
      param_1[0x32] = lVar6 + lVar10 + lVar5;
      param_1[0x33] = lVar6 + uVar12 * 0x28;
      if (lVar8 != 0) {
        __ZdlPv(lVar8);
      }
      goto LAB_10925aa24;
    }
    lVar8 = (((uVar7 & 0xffffffff) * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    _bzero(lVar6,lVar8);
    lVar6 = lVar6 + lVar8;
  }
  else {
    if (bVar4) goto LAB_10925aa24;
    lVar6 = lVar8 + uVar13 * 0x28;
  }
  param_1[0x32] = lVar6;
LAB_10925aa24:
  FUN_10925aabc(param_1);
  return param_1;
}



/* Entry: 10925aabc; end: 10925adab;  */

void FUN_10925aabc(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xad) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x54) = 0xffffffffffffffff;
  do {
    puVar5 = (undefined4 *)(param_1 + 0xe8 + lVar3);
    *puVar5 = 0;
    *(undefined1 *)(puVar5 + 1) = 0;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x105) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x115) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x125) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x135) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x145) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x155) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != *(long *)(param_1 + 0x20)) {
    _memset(lVar3,0xff,*(long *)(param_1 + 0x20) - lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != *(long *)(param_1 + 0x70)) {
    _memset(lVar3,0xff,(((*(long *)(param_1 + 0x70) - lVar3) - 0x24U) / 0x24) * 0x24 + 0x24);
  }
  lVar3 = *(long *)(param_1 + 0x1b0);
  if (lVar3 != *(long *)(param_1 + 0x1b8)) {
    _bzero(lVar3,*(long *)(param_1 + 0x1b8) - lVar3 & 0xfffffffffffffffe);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1e8);
  for (puVar4 = *(undefined8 **)(param_1 + 0x1e0); puVar4 != puVar1; puVar4 = puVar4 + 5) {
    *(undefined1 *)(puVar4 + 1) = 0;
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x1c8);
  if (lVar3 != *(long *)(param_1 + 0x1d0)) {
    _memset(lVar3,0xff,*(long *)(param_1 + 0x1d0) - lVar3);
  }
  puVar2 = *(undefined4 **)(param_1 + 400);
  for (puVar5 = *(undefined4 **)(param_1 + 0x188); puVar5 != puVar2; puVar5 = puVar5 + 10) {
    *(undefined4 *)((long)puVar5 + 3) = 0;
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 2) = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 7) = 0;
    *(undefined8 *)(puVar5 + 5) = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
  }
  return;
}



/* Entry: 10925adac; end: 10925af83;  */

ulong FUN_10925adac(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_38;
  
  uVar1 = param_2 >> 3;
  if (((ulong)param_1 & 7) == 0) {
    if (7 < param_2) {
      uVar3 = 0;
      plVar2 = param_1;
      do {
        uVar3 = uVar3 * 0x40 + 0x9e3779b9 + (uVar3 >> 2) + *plVar2 ^ uVar3;
        uVar1 = uVar1 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar1 != 0);
      goto LAB_10925ae3c;
    }
  }
  else if (7 < param_2) {
    uVar3 = 0;
    plVar2 = param_1;
    do {
      uVar3 = uVar3 * 0x40 + 0x9e3779b9 + (uVar3 >> 2) + *plVar2 ^ uVar3;
      uVar1 = uVar1 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar1 != 0);
    goto LAB_10925ae3c;
  }
  uVar3 = 0;
LAB_10925ae3c:
  lStack_38 = 0;
  if ((param_2 & 7) == 0) {
    lStack_38 = 0;
  }
  else {
    _memcpy(&lStack_38,(long)param_1 + (param_2 - (param_2 & 7)));
  }
  uVar3 = uVar3 * 0x40 + 0x9e3779b9 + (uVar3 >> 2) + lStack_38 ^ uVar3;
  return param_2 + 0x9e3779b9 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
}



/* Entry: 10925af84; end: 10925b81f;  */

void FUN_10925af84(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined4 *puVar36;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 *puStack_50;
  undefined4 *puStack_48;
  int iStack_38;
  undefined4 uStack_34;
  
  puVar1 = &uStack_80;
  puVar2 = &uStack_80;
  puVar3 = &uStack_80;
  puVar4 = &uStack_80;
  puVar5 = &uStack_80;
  puVar6 = &uStack_80;
  puVar7 = &uStack_80;
  puVar8 = &uStack_80;
  puVar9 = &uStack_80;
  puVar10 = &uStack_80;
  puVar11 = &uStack_80;
  puVar12 = &uStack_80;
  puVar13 = &uStack_80;
  puVar14 = &uStack_80;
  puVar15 = &uStack_80;
  puVar16 = &uStack_80;
  puVar17 = &uStack_80;
  puVar18 = &uStack_80;
  puVar19 = &uStack_80;
  puVar20 = &uStack_80;
  puVar21 = &uStack_80;
  puVar22 = &uStack_80;
  puVar23 = &uStack_80;
  puVar24 = &uStack_80;
  puVar25 = &uStack_80;
  puVar26 = &uStack_80;
  puVar27 = &uStack_80;
  puVar28 = &uStack_80;
  puVar29 = &uStack_80;
  puVar30 = &uStack_80;
  puVar31 = &uStack_80;
  puVar32 = &uStack_80;
  puVar33 = &uStack_80;
  puVar34 = &uStack_80;
  puVar35 = &uStack_80;
  _glGetIntegerv(0x86a2,&iStack_38);
  FUN_10925b8c4(&puStack_50,(long)iStack_38);
  _glGetIntegerv(0x86a3,puStack_50);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  for (puVar36 = puStack_50; puVar36 != puStack_48; puVar36 = puVar36 + 1) {
    uStack_34 = *puVar36;
    func_0x000107c2ab1c(&uStack_80,&uStack_34,&uStack_34);
  }
  uStack_34 = 0x8d64;
  FUN_10925b970(&uStack_80,&uStack_34);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x46c) = 0x8d64;
    *(undefined8 *)(param_1 + 0x470) = 0x140100001907;
    *(undefined2 *)(param_1 + 0x6a0) = 0x201;
  }
  uStack_34 = 0x9274;
  FUN_10925b970(&uStack_80,&uStack_34);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x478) = 0x190700009274;
    *(undefined4 *)(param_1 + 0x480) = 0x1401;
    *(undefined2 *)(param_1 + 0x6a2) = 0x201;
  }
  uStack_34 = 0x9275;
  FUN_10925b970(&uStack_80,&uStack_34);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x49c) = 0x9275;
    *(undefined8 *)(param_1 + 0x4a0) = 0x140100001907;
    *(undefined2 *)(param_1 + 0x6a8) = 0x201;
  }
  uStack_34 = 0x9276;
  FUN_10925b970(&uStack_80,&uStack_34);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x484) = 0x9276;
    *(undefined8 *)(param_1 + 0x488) = 0x140100001908;
    *(undefined2 *)(param_1 + 0x6a4) = 0x201;
  }
  uStack_34 = 0x9277;
  FUN_10925b970(&uStack_80,&uStack_34);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x4a8) = 0x190800009277;
    *(undefined4 *)(param_1 + 0x4b0) = 0x1401;
    *(undefined2 *)(param_1 + 0x6aa) = 0x201;
  }
  uStack_34 = 0x9278;
  FUN_10925b970(&uStack_80,&uStack_34);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x490) = 0x190800009278;
    *(undefined4 *)(param_1 + 0x498) = 0x1401;
    *(undefined2 *)(param_1 + 0x6a6) = 0x201;
  }
  uStack_34 = 0x9279;
  FUN_10925b970(&uStack_80,&uStack_34);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x4b4) = 0x9279;
    *(undefined8 *)(param_1 + 0x4b8) = 0x140100001908;
    *(undefined2 *)(param_1 + 0x6ac) = 0x201;
  }
  if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x4c8) = 0x83f300001401;
    *(undefined8 *)(param_1 + 0x4c0) = 0x190800008c4f;
    *(undefined8 *)(param_1 + 0x4d0) = 0x140100001908;
    *(undefined4 *)(param_1 + 0x6ae) = 0x20f020f;
  }
  if (*(char *)(param_1 + 0x36) == '\x01') {
    *(undefined8 *)(param_1 + 0x4e0) = 0x8e8c00001401;
    *(undefined8 *)(param_1 + 0x4d8) = 0x190800008e8d;
    *(undefined8 *)(param_1 + 0x4e8) = 0x140100001908;
    *(undefined4 *)(param_1 + 0x6b2) = 0x20f020f;
  }
  if (*(char *)(param_1 + 0x37) == '\x01') {
    uStack_34 = 0x93b0;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x4f0) = 0x1908000093b0;
      *(undefined4 *)(param_1 + 0x4f8) = 0x1401;
      *(undefined2 *)(param_1 + 0x6b6) = 0x201;
    }
    uStack_34 = 0x93d0;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x4fc) = 0x93d0;
      *(undefined8 *)(param_1 + 0x500) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6b8) = 0x201;
    }
    uStack_34 = 0x93b1;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x508) = 0x1908000093b1;
      *(undefined4 *)(param_1 + 0x510) = 0x1401;
      *(undefined2 *)(param_1 + 0x6ba) = 0x201;
    }
    uStack_34 = 0x93d1;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar11 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x514) = 0x93d1;
      *(undefined8 *)(param_1 + 0x518) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6bc) = 0x201;
    }
    uStack_34 = 0x93b2;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x520) = 0x1908000093b2;
      *(undefined4 *)(param_1 + 0x528) = 0x1401;
      *(undefined2 *)(param_1 + 0x6be) = 0x201;
    }
    uStack_34 = 0x93d2;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x52c) = 0x93d2;
      *(undefined8 *)(param_1 + 0x530) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6c0) = 0x201;
    }
    uStack_34 = 0x93b3;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar14 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x538) = 0x1908000093b3;
      *(undefined4 *)(param_1 + 0x540) = 0x1401;
      *(undefined2 *)(param_1 + 0x6c2) = 0x201;
    }
    uStack_34 = 0x93d3;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar15 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x544) = 0x93d3;
      *(undefined8 *)(param_1 + 0x548) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6c4) = 0x201;
    }
    uStack_34 = 0x93b4;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar16 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x550) = 0x1908000093b4;
      *(undefined4 *)(param_1 + 0x558) = 0x1401;
      *(undefined2 *)(param_1 + 0x6c6) = 0x201;
    }
    uStack_34 = 0x93d4;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x55c) = 0x93d4;
      *(undefined8 *)(param_1 + 0x560) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6c8) = 0x201;
    }
    uStack_34 = 0x93b5;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar18 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x568) = 0x1908000093b5;
      *(undefined4 *)(param_1 + 0x570) = 0x1401;
      *(undefined2 *)(param_1 + 0x6ca) = 0x201;
    }
    uStack_34 = 0x93d5;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar19 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x574) = 0x93d5;
      *(undefined8 *)(param_1 + 0x578) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6cc) = 0x201;
    }
    uStack_34 = 0x93b6;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar20 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x580) = 0x1908000093b6;
      *(undefined4 *)(param_1 + 0x588) = 0x1401;
      *(undefined2 *)(param_1 + 0x6ce) = 0x201;
    }
    uStack_34 = 0x93d6;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar21 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x58c) = 0x93d6;
      *(undefined8 *)(param_1 + 0x590) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6d0) = 0x201;
    }
    uStack_34 = 0x93b7;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar22 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x598) = 0x1908000093b7;
      *(undefined4 *)(param_1 + 0x5a0) = 0x1401;
      *(undefined2 *)(param_1 + 0x6d2) = 0x201;
    }
    uStack_34 = 0x93d7;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar23 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x5a4) = 0x93d7;
      *(undefined8 *)(param_1 + 0x5a8) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6d4) = 0x201;
    }
    uStack_34 = 0x93b8;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar24 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x5b0) = 0x1908000093b8;
      *(undefined4 *)(param_1 + 0x5b8) = 0x1401;
      *(undefined2 *)(param_1 + 0x6d6) = 0x201;
    }
    uStack_34 = 0x93d8;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar25 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x5bc) = 0x93d8;
      *(undefined8 *)(param_1 + 0x5c0) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6d8) = 0x201;
    }
    uStack_34 = 0x93b9;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar26 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x5c8) = 0x1908000093b9;
      *(undefined4 *)(param_1 + 0x5d0) = 0x1401;
      *(undefined2 *)(param_1 + 0x6da) = 0x201;
    }
    uStack_34 = 0x93d9;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar27 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x5d4) = 0x93d9;
      *(undefined8 *)(param_1 + 0x5d8) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6dc) = 0x201;
    }
    uStack_34 = 0x93ba;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar28 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x5e0) = 0x1908000093ba;
      *(undefined4 *)(param_1 + 0x5e8) = 0x1401;
      *(undefined2 *)(param_1 + 0x6de) = 0x201;
    }
    uStack_34 = 0x93da;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar29 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x5ec) = 0x93da;
      *(undefined8 *)(param_1 + 0x5f0) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6e0) = 0x201;
    }
    uStack_34 = 0x93bb;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar30 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x5f8) = 0x1908000093bb;
      *(undefined4 *)(param_1 + 0x600) = 0x1401;
      *(undefined2 *)(param_1 + 0x6e2) = 0x201;
    }
    uStack_34 = 0x93db;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar31 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x604) = 0x93db;
      *(undefined8 *)(param_1 + 0x608) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6e4) = 0x201;
    }
    uStack_34 = 0x93bc;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar32 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x610) = 0x1908000093bc;
      *(undefined4 *)(param_1 + 0x618) = 0x1401;
      *(undefined2 *)(param_1 + 0x6e6) = 0x201;
    }
    uStack_34 = 0x93dc;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar33 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x61c) = 0x93dc;
      *(undefined8 *)(param_1 + 0x620) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6e8) = 0x201;
    }
    uStack_34 = 0x93bd;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar34 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x628) = 0x1908000093bd;
      *(undefined4 *)(param_1 + 0x630) = 0x1401;
      *(undefined2 *)(param_1 + 0x6ea) = 0x201;
    }
    uStack_34 = 0x93dd;
    FUN_10925b970(&uStack_80,&uStack_34);
    if (puVar35 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x634) = 0x93dd;
      *(undefined8 *)(param_1 + 0x638) = 0x140100001908;
      *(undefined2 *)(param_1 + 0x6ec) = 0x201;
    }
  }
  func_0x000107c2ab24(&uStack_80);
  if (puStack_50 != (undefined4 *)0x0) {
    puStack_48 = puStack_50;
    __ZdlPv();
  }
  return;
}



/* Entry: 10925b820; end: 10925b8c3;  */

undefined8 FUN_10925b820(void)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  long lStack_30;
  char cStack_21;
  
  FUN_10925d004(&uStack_38);
  if (cStack_21 < '\0') {
    if (lStack_30 == 0) {
      uVar1 = 1;
      goto LAB_10925b88c;
    }
  }
  else if (cStack_21 == '\0') {
    return 1;
  }
  FUN_10924a40c(4,&UNK_10f56122e);
  uVar1 = 0;
  if (-1 < cStack_21) {
    return 0;
  }
LAB_10925b88c:
  __ZdlPv(uStack_38);
  return uVar1;
}



/* Entry: 10925b8c4; end: 10925b937;  */

undefined8 * FUN_10925b8c4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10925b938(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 2);
    param_1[1] = lVar1 + param_2 * 4;
  }
  return param_1;
}



/* Entry: 10925b938; end: 10925b96f;  */

long * FUN_10925b938(long *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar6 = param_1;
    FUN_10923f79c();
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)plVar6 + (long)param_2 * 4;
    return plVar6;
  }
  FUN_10923f788();
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2;
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
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
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



/* Entry: 10925b970; end: 10925ba0f;  */

long * FUN_10925b970(long *param_1,int *param_2)

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
    uVar3 = (ulong)*param_2;
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
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == *param_2) {
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



/* Entry: 10925ba10; end: 10925bac3;  */

long * FUN_10925ba10(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  *param_1 = param_2 + 0x810;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = lVar4;
  lVar4 = *param_3;
  __Znam(lVar4);
  FUN_10925bb80(auStack_30,lVar4);
  FUN_10925bac4(param_1 + 2,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return param_1;
}



/* Entry: 10925bac4; end: 10925bb7f;  */

undefined8 * FUN_10925bac4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10925bb80; end: 10925bbef;  */

undefined8 * FUN_10925bb80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110ae6c00;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10925bbf0; end: 10925bbf3;  */

void FUN_10925bbf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10925bbf4; end: 10925bc07;  */

void FUN_10925bbf4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925bc08; end: 10925bc17;  */

void FUN_10925bc08(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10925bc18; end: 10925bc4f;  */

undefined8 FUN_10925bc18(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae6c40);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10925bc50; end: 10925bc53;  */

void FUN_10925bc50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10925bc54; end: 10925bdc7;  */

long * FUN_10925bc54(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *param_1 = param_2;
  param_1[1] = param_2 + 0x930;
  param_1[2] = param_2 + 0x810;
  lVar6 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar6;
  uVar2 = *(uint *)(param_3 + 1);
  uVar7 = 0x8892;
  if ((uVar2 & 0x80) != 0) {
    uVar7 = 0x88eb;
  }
  uVar1 = 0x88ec;
  if ((uVar2 & 0x40) == 0) {
    uVar1 = uVar7;
  }
  uVar7 = 0x8f37;
  if ((uVar2 & 0x20) == 0) {
    uVar7 = uVar1;
  }
  uVar1 = 0x8f36;
  if ((uVar2 & 0x10) == 0) {
    uVar1 = uVar7;
  }
  plVar8 = param_1 + 10;
  *plVar8 = 0;
  uVar7 = 0x8a11;
  if ((uVar2 & 4) == 0) {
    uVar7 = uVar1;
  }
  uVar1 = 0x8893;
  if ((uVar2 & 2) == 0) {
    uVar1 = uVar7;
  }
  uVar7 = 0x8892;
  if ((uVar2 & 1) == 0) {
    uVar7 = uVar1;
  }
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  plVar5 = param_1;
  FUN_109374fe0();
  if ((plVar5 == (long *)0x0) && ((*(byte *)(param_2 + 0x90c) & 1) != 0)) {
    if (*param_4 != 0) {
      lVar6 = param_4[1];
      __Znam(lVar6);
      FUN_10925bb80(auStack_40,lVar6);
      FUN_10925bac4(plVar8,auStack_40);
      if (plStack_38 != (long *)0x0) {
        plVar5 = plStack_38 + 1;
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
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      _memcpy(*plVar8,*param_4,param_4[1]);
    }
  }
  else {
    FUN_10925bdc8(param_1,0,param_4);
  }
  return param_1;
}



/* Entry: 10925bdc8; end: 10925c0b3;  */

void FUN_10925bdc8(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  int *piVar5;
  long lStack_58;
  int *piStack_50;
  long *plStack_48;
  int iStack_3c;
  long lStack_38;
  
  piVar5 = (int *)(param_1 + 0x2c);
  if (*piVar5 != 0) {
    return;
  }
  lStack_38 = param_2;
  _glGenBuffers(1,piVar5);
  iStack_3c = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_2 == 0) {
    iVar2 = *piVar5;
  }
  else {
    iStack_3c = 0;
    if (iVar1 < 0x8c2a) {
      if (0x88ea < iVar1) {
        if (iVar1 == 0x88eb) {
          lVar3 = 7;
        }
        else {
          if (iVar1 != 0x88ec) goto LAB_10925bf00;
          lVar3 = 8;
        }
        goto LAB_10925bef0;
      }
      if (iVar1 == 0x8892) {
        lVar3 = 1;
        goto LAB_10925bef0;
      }
      if (iVar1 == 0x8893) {
        lVar3 = 6;
        goto LAB_10925bef0;
      }
    }
    else {
      if (iVar1 < 0x8f37) {
        if (iVar1 == 0x8c2a) {
          lVar3 = 9;
        }
        else {
          if (iVar1 != 0x8f36) goto LAB_10925bf00;
          lVar3 = 2;
        }
      }
      else if (iVar1 == 0x8f37) {
        lVar3 = 3;
      }
      else if (iVar1 == 0x8f3f) {
        lVar3 = 4;
      }
      else {
        if (iVar1 != 0x90ee) goto LAB_10925bf00;
        lVar3 = 5;
      }
LAB_10925bef0:
      iVar2 = *(int *)(param_2 + lVar3 * 4 + 0x110);
      iStack_3c = 0;
      if (iVar2 != -1) {
        iStack_3c = iVar2;
      }
    }
LAB_10925bf00:
    iVar2 = *piVar5;
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x88eb) {
        if (iVar1 == 0x8892) {
          lVar3 = 1;
        }
        else {
          if (iVar1 != 0x8893) goto LAB_10925bff0;
          lVar3 = 6;
        }
      }
      else if (iVar1 == 0x88eb) {
        lVar3 = 7;
      }
      else {
        if (iVar1 != 0x88ec) goto LAB_10925bff0;
        lVar3 = 8;
      }
    }
    else if (iVar1 < 0x8f37) {
      if (iVar1 == 0x8c2a) {
        lVar3 = 9;
      }
      else {
        if (iVar1 != 0x8f36) goto LAB_10925bff0;
        lVar3 = 2;
      }
    }
    else if (iVar1 == 0x8f37) {
      lVar3 = 3;
    }
    else if (iVar1 == 0x8f3f) {
      lVar3 = 4;
    }
    else {
      if (iVar1 != 0x90ee) goto LAB_10925bff0;
      lVar3 = 5;
    }
    if (*(int *)(param_2 + 0x110 + lVar3 * 4) == iVar2) goto LAB_10925bff8;
    *(int *)(param_2 + 0x110 + lVar3 * 4) = iVar2;
  }
LAB_10925bff0:
  _glBindBuffer(iVar1,iVar2);
  iVar1 = *(int *)(param_1 + 0x28);
LAB_10925bff8:
  piStack_50 = &iStack_3c;
  plStack_48 = &lStack_38;
  lStack_58 = param_1;
  if (*(char *)(*(long *)(param_1 + 8) + 0x3a) == '\x01' && (*(uint *)(param_1 + 0x24) & 2) != 0) {
    uVar4 = 0x143;
    if ((*(uint *)(param_1 + 0x24) & 4) != 0) {
      uVar4 = 0x1c3;
    }
    (**(code **)(*(long *)(param_1 + 8) + 0x8b0))
              (iVar1,*(undefined8 *)(param_1 + 0x18),*param_3,uVar4);
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  else {
    _glBufferData();
  }
  FUN_10925c320(&lStack_58);
  return;
}



/* Entry: 10925c0b4; end: 10925c193;  */

long FUN_10925c0b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10925c194(param_1,0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  FUN_109374fe0();
  if (lVar1 == 0) {
    func_0x000109fd19d0(uVar2,6,2,&UNK_10f561261,0x53);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    _glDeleteBuffers(1);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  func_0x00010925bb28(param_1 + 0x50);
  return param_1;
}



/* Entry: 10925c194; end: 10925c31f;  */

void FUN_10925c194(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 0x39) != '\x01') goto LAB_10925c2d4;
  iVar1 = *(int *)(param_1 + 0x28);
  lStack_28 = param_2;
  if (param_2 == 0) {
LAB_10925c2b0:
    _glBindBuffer();
    lVar2 = *(long *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  else {
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x88eb) {
        if (iVar1 == 0x8892) {
          lVar3 = 1;
        }
        else {
          if (iVar1 != 0x8893) goto LAB_10925c2b0;
          lVar3 = 6;
        }
      }
      else if (iVar1 == 0x88eb) {
        lVar3 = 7;
      }
      else {
        if (iVar1 != 0x88ec) goto LAB_10925c2b0;
        lVar3 = 8;
      }
    }
    else if (iVar1 < 0x8f37) {
      if (iVar1 == 0x8c2a) {
        lVar3 = 9;
      }
      else {
        if (iVar1 != 0x8f36) goto LAB_10925c2b0;
        lVar3 = 2;
      }
    }
    else if (iVar1 == 0x8f37) {
      lVar3 = 3;
    }
    else if (iVar1 == 0x8f3f) {
      lVar3 = 4;
    }
    else {
      if (iVar1 != 0x90ee) goto LAB_10925c2b0;
      lVar3 = 5;
    }
    if (*(int *)(param_2 + 0x110 + lVar3 * 4) != *(int *)(param_1 + 0x2c)) {
      *(int *)(param_2 + 0x110 + lVar3 * 4) = *(int *)(param_1 + 0x2c);
      goto LAB_10925c2b0;
    }
  }
  plStack_30 = &lStack_28;
  lStack_38 = param_1;
  (**(code **)(lVar2 + 0x8a8))(iVar1);
  func_0x00010925cd8c(&lStack_38);
LAB_10925c2d4:
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10925c320; end: 10925c443;  */

long * FUN_10925c320(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(*param_1 + 0x28);
  if (*(long *)param_1[2] != 0) {
    if (iVar2 < 0x8c2a) {
      if (iVar2 < 0x88eb) {
        if (iVar2 == 0x8892) {
          lVar3 = 1;
        }
        else {
          if (iVar2 != 0x8893) goto LAB_10925c430;
          lVar3 = 6;
        }
      }
      else if (iVar2 == 0x88eb) {
        lVar3 = 7;
      }
      else {
        if (iVar2 != 0x88ec) goto LAB_10925c430;
        lVar3 = 8;
      }
    }
    else if (iVar2 < 0x8f37) {
      if (iVar2 == 0x8c2a) {
        lVar3 = 9;
      }
      else {
        if (iVar2 != 0x8f36) goto LAB_10925c430;
        lVar3 = 2;
      }
    }
    else if (iVar2 == 0x8f37) {
      lVar3 = 3;
    }
    else if (iVar2 == 0x8f3f) {
      lVar3 = 4;
    }
    else {
      if (iVar2 != 0x90ee) goto LAB_10925c430;
      lVar3 = 5;
    }
    lVar1 = *(long *)param_1[2] + 0x110;
    if (*(int *)(lVar1 + lVar3 * 4) == *(int *)param_1[1]) {
      return param_1;
    }
    *(int *)(lVar1 + lVar3 * 4) = *(int *)param_1[1];
  }
LAB_10925c430:
  _glBindBuffer();
  return param_1;
}



/* Entry: 10925c444; end: 10925c627;  */

void FUN_10925c444(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lStack_40 = *(long *)(param_1 + 0x50);
  plStack_38 = *(long **)(param_1 + 0x18);
  lStack_48 = param_4;
  FUN_10925bdc8(param_1,param_4,&lStack_40);
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_4 == 0) {
LAB_10925c574:
    _glBindBuffer();
  }
  else {
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x88eb) {
        if (iVar1 == 0x8892) {
          lVar3 = 1;
        }
        else {
          if (iVar1 != 0x8893) goto LAB_10925c574;
          lVar3 = 6;
        }
      }
      else if (iVar1 == 0x88eb) {
        lVar3 = 7;
      }
      else {
        if (iVar1 != 0x88ec) goto LAB_10925c574;
        lVar3 = 8;
      }
    }
    else if (iVar1 < 0x8f37) {
      if (iVar1 == 0x8c2a) {
        lVar3 = 9;
      }
      else {
        if (iVar1 != 0x8f36) goto LAB_10925c574;
        lVar3 = 2;
      }
    }
    else if (iVar1 == 0x8f37) {
      lVar3 = 3;
    }
    else if (iVar1 == 0x8f3f) {
      lVar3 = 4;
    }
    else {
      if (iVar1 != 0x90ee) goto LAB_10925c574;
      lVar3 = 5;
    }
    if (*(int *)(param_4 + 0x110 + lVar3 * 4) != *(int *)(param_1 + 0x2c)) {
      *(int *)(param_4 + 0x110 + lVar3 * 4) = *(int *)(param_1 + 0x2c);
      goto LAB_10925c574;
    }
  }
  plStack_38 = &lStack_48;
  lVar3 = param_3[1];
  lStack_40 = param_1;
  if ((param_2 == 0) && ((*(byte *)(param_1 + 0x31) & 1) == 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    if (*(long *)(param_1 + 0x18) == lVar3) {
      if ((*(uint *)(param_1 + 0x20) >> 6 & 1) == 0) {
        if ((*(uint *)(param_1 + 0x20) >> 7 & 1) == 0) {
          uVar4 = 0x88e8;
          if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
            uVar4 = 0x88e4;
          }
        }
        else {
          uVar4 = 0x88e1;
        }
      }
      else {
        uVar4 = 0x88e0;
      }
      _glBufferData(uVar2,lVar3,*param_3,uVar4);
      goto LAB_10925c5f4;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x28);
  }
  _glBufferSubData(uVar2,param_2,lVar3,*param_3);
LAB_10925c5f4:
  FUN_10925c628(&lStack_40);
  return;
}



/* Entry: 10925c628; end: 10925c743;  */

long * FUN_10925c628(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(*param_1 + 0x28);
  if (*(long *)param_1[1] != 0) {
    if (iVar2 < 0x8c2a) {
      if (iVar2 < 0x88eb) {
        if (iVar2 == 0x8892) {
          lVar3 = 1;
        }
        else {
          if (iVar2 != 0x8893) goto LAB_10925c72c;
          lVar3 = 6;
        }
      }
      else if (iVar2 == 0x88eb) {
        lVar3 = 7;
      }
      else {
        if (iVar2 != 0x88ec) goto LAB_10925c72c;
        lVar3 = 8;
      }
    }
    else if (iVar2 < 0x8f37) {
      if (iVar2 == 0x8c2a) {
        lVar3 = 9;
      }
      else {
        if (iVar2 != 0x8f36) goto LAB_10925c72c;
        lVar3 = 2;
      }
    }
    else if (iVar2 == 0x8f37) {
      lVar3 = 3;
    }
    else if (iVar2 == 0x8f3f) {
      lVar3 = 4;
    }
    else {
      if (iVar2 != 0x90ee) goto LAB_10925c72c;
      lVar3 = 5;
    }
    lVar1 = *(long *)param_1[1] + 0x110;
    if (*(int *)(lVar1 + lVar3 * 4) == 0) {
      return param_1;
    }
    *(undefined4 *)(lVar1 + lVar3 * 4) = 0;
  }
LAB_10925c72c:
  _glBindBuffer(iVar2,0);
  return param_1;
}



/* Entry: 10925c744; end: 10925c907;  */

void FUN_10925c744(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lStack_48;
  long *plStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x39) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x30) != '\x01') {
    return;
  }
  if ((*(uint *)(param_1 + 0x48) & 0x90) != 0x10) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  lStack_38 = param_4;
  if (param_4 != 0) {
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x88eb) {
        if (iVar1 == 0x8892) {
          lVar2 = 1;
        }
        else {
          if (iVar1 != 0x8893) goto LAB_10925c88c;
          lVar2 = 6;
        }
      }
      else if (iVar1 == 0x88eb) {
        lVar2 = 7;
      }
      else {
        if (iVar1 != 0x88ec) goto LAB_10925c88c;
        lVar2 = 8;
      }
    }
    else if (iVar1 < 0x8f37) {
      if (iVar1 == 0x8c2a) {
        lVar2 = 9;
      }
      else {
        if (iVar1 != 0x8f36) goto LAB_10925c88c;
        lVar2 = 2;
      }
    }
    else if (iVar1 == 0x8f37) {
      lVar2 = 3;
    }
    else if (iVar1 == 0x8f3f) {
      lVar2 = 4;
    }
    else {
      if (iVar1 != 0x90ee) goto LAB_10925c88c;
      lVar2 = 5;
    }
    if (*(int *)(param_4 + 0x110 + lVar2 * 4) == *(int *)(param_1 + 0x2c)) goto LAB_10925c890;
    *(int *)(param_4 + 0x110 + lVar2 * 4) = *(int *)(param_1 + 0x2c);
  }
LAB_10925c88c:
  _glBindBuffer();
LAB_10925c890:
  plStack_40 = &lStack_38;
  param_3 = param_3 << 4;
  plVar3 = (long *)(param_2 + 8);
  lStack_48 = param_1;
  do {
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = *(long *)(param_1 + 0x18) - plVar3[-1];
    }
    (**(code **)(*(long *)(param_1 + 8) + 0x898))
              (*(undefined4 *)(param_1 + 0x28),plVar3[-1] - *(long *)(param_1 + 0x38),lVar2);
    plVar3 = plVar3 + 2;
    param_3 = param_3 + -0x10;
  } while (param_3 != 0);
  FUN_10925c908(&lStack_48);
  return;
}



/* Entry: 10925c908; end: 10925ca23;  */

long * FUN_10925c908(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(*param_1 + 0x28);
  if (*(long *)param_1[1] != 0) {
    if (iVar2 < 0x8c2a) {
      if (iVar2 < 0x88eb) {
        if (iVar2 == 0x8892) {
          lVar3 = 1;
        }
        else {
          if (iVar2 != 0x8893) goto LAB_10925ca0c;
          lVar3 = 6;
        }
      }
      else if (iVar2 == 0x88eb) {
        lVar3 = 7;
      }
      else {
        if (iVar2 != 0x88ec) goto LAB_10925ca0c;
        lVar3 = 8;
      }
    }
    else if (iVar2 < 0x8f37) {
      if (iVar2 == 0x8c2a) {
        lVar3 = 9;
      }
      else {
        if (iVar2 != 0x8f36) goto LAB_10925ca0c;
        lVar3 = 2;
      }
    }
    else if (iVar2 == 0x8f37) {
      lVar3 = 3;
    }
    else if (iVar2 == 0x8f3f) {
      lVar3 = 4;
    }
    else {
      if (iVar2 != 0x90ee) goto LAB_10925ca0c;
      lVar3 = 5;
    }
    lVar1 = *(long *)param_1[1] + 0x110;
    if (*(int *)(lVar1 + lVar3 * 4) == 0) {
      return param_1;
    }
    *(undefined4 *)(lVar1 + lVar3 * 4) = 0;
  }
LAB_10925ca0c:
  _glBindBuffer(iVar2,0);
  return param_1;
}



/* Entry: 10925ca24; end: 10925cc6f;  */

ulong FUN_10925ca24(long param_1,uint param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lStack_50 = *(long *)(param_1 + 0x50);
  plStack_48 = *(long **)(param_1 + 0x18);
  lStack_58 = param_5;
  FUN_10925bdc8(param_1,param_5,&lStack_50);
  if (param_4 == 0) {
    param_4 = *(long *)(param_1 + 0x18) - param_3;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_5 == 0) {
LAB_10925cb68:
    _glBindBuffer();
  }
  else {
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x88eb) {
        if (iVar1 == 0x8892) {
          lVar4 = 1;
        }
        else {
          if (iVar1 != 0x8893) goto LAB_10925cb68;
          lVar4 = 6;
        }
      }
      else if (iVar1 == 0x88eb) {
        lVar4 = 7;
      }
      else {
        if (iVar1 != 0x88ec) goto LAB_10925cb68;
        lVar4 = 8;
      }
    }
    else if (iVar1 < 0x8f37) {
      if (iVar1 == 0x8c2a) {
        lVar4 = 9;
      }
      else {
        if (iVar1 != 0x8f36) goto LAB_10925cb68;
        lVar4 = 2;
      }
    }
    else if (iVar1 == 0x8f37) {
      lVar4 = 3;
    }
    else if (iVar1 == 0x8f3f) {
      lVar4 = 4;
    }
    else {
      if (iVar1 != 0x90ee) goto LAB_10925cb68;
      lVar4 = 5;
    }
    if (*(int *)(param_5 + 0x110 + lVar4 * 4) != *(int *)(param_1 + 0x2c)) {
      *(int *)(param_5 + 0x110 + lVar4 * 4) = *(int *)(param_1 + 0x2c);
      goto LAB_10925cb68;
    }
  }
  plStack_48 = &lStack_58;
  lStack_50 = param_1;
  if (*(char *)(*(long *)(param_1 + 8) + 0x39) == '\x01') {
    if (*(char *)(param_1 + 0x31) == '\x01') {
      if ((param_2 & 3) == 0) {
LAB_10925cc44:
        FUN_109243bf8(&UNK_10f561395);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10925cc54);
        (*pcVar2)();
      }
      uVar5 = 0x40;
      if ((param_2 & 2) != 0) {
        uVar5 = 0x50;
      }
      uVar5 = uVar5 | param_2 & 3;
      if ((*(byte *)(param_1 + 0x24) & 4) != 0) {
        uVar5 = param_2 & 3 | 0xc0;
      }
    }
    else if ((param_2 & 1) == 0) {
      if ((param_2 >> 1 & 1) == 0) goto LAB_10925cc44;
      uVar5 = 0x36;
      if ((*(uint *)(param_1 + 0x24) & 4) != 0) {
        uVar5 = 0x26;
      }
    }
    else {
      uVar5 = param_2 & 3;
    }
    uVar3 = (ulong)*(uint *)(param_1 + 0x28);
    (**(code **)(*(long *)(param_1 + 8) + 0x8a0))(uVar3,param_3,param_4,uVar5);
    *(bool *)(param_1 + 0x30) = uVar3 != 0;
    if (uVar3 != 0) {
      *(long *)(param_1 + 0x38) = param_3;
      *(long *)(param_1 + 0x40) = param_4;
      *(uint *)(param_1 + 0x48) = uVar5;
    }
  }
  else {
    uVar3 = 0;
  }
  FUN_10925cc70(&lStack_50);
  return uVar3;
}



/* Entry: 10925cc70; end: 10925d003;  */

long * FUN_10925cc70(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(*param_1 + 0x28);
  if (*(long *)param_1[1] != 0) {
    if (iVar2 < 0x8c2a) {
      if (iVar2 < 0x88eb) {
        if (iVar2 == 0x8892) {
          lVar3 = 1;
        }
        else {
          if (iVar2 != 0x8893) goto LAB_10925cd74;
          lVar3 = 6;
        }
      }
      else if (iVar2 == 0x88eb) {
        lVar3 = 7;
      }
      else {
        if (iVar2 != 0x88ec) goto LAB_10925cd74;
        lVar3 = 8;
      }
    }
    else if (iVar2 < 0x8f37) {
      if (iVar2 == 0x8c2a) {
        lVar3 = 9;
      }
      else {
        if (iVar2 != 0x8f36) goto LAB_10925cd74;
        lVar3 = 2;
      }
    }
    else if (iVar2 == 0x8f37) {
      lVar3 = 3;
    }
    else if (iVar2 == 0x8f3f) {
      lVar3 = 4;
    }
    else {
      if (iVar2 != 0x90ee) goto LAB_10925cd74;
      lVar3 = 5;
    }
    lVar1 = *(long *)param_1[1] + 0x110;
    if (*(int *)(lVar1 + lVar3 * 4) == 0) {
      return param_1;
    }
    *(undefined4 *)(lVar1 + lVar3 * 4) = 0;
  }
LAB_10925cd74:
  _glBindBuffer(iVar2,0);
  return param_1;
}



/* Entry: 10925d004; end: 10925d11b;  */

void FUN_10925d004(undefined8 param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  uint uVar6;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  _glGetError();
  func_0x000107c31940(param_1,&UNK_10f56142c);
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      FUN_1092541ec();
      FUN_109231308(&ppuStack_58,&UNK_10f56142d);
      uVar2 = uStack_50;
      pppuVar5 = (undefined8 ***)ppuStack_58;
      if (-1 < (char)bStack_41) {
        uVar2 = (ulong)bStack_41;
        pppuVar5 = &ppuStack_58;
      }
      uVar4 = param_1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppuVar5,uVar2);
      iVar3 = (int)uVar4;
      if ((char)bStack_41 < '\0') {
        pppuVar5 = (undefined8 ***)ppuStack_58;
        __ZdlPv();
        iVar3 = (int)pppuVar5;
      }
      _glGetError();
      uVar1 = uVar6 + 1;
    } while ((uVar6 < 0x3f) && (uVar6 = uVar1, iVar3 != 0));
    if (uVar1 == 0x40) {
      FUN_10924a40c(4,&UNK_10f561447);
    }
  }
  return;
}



/* Entry: 10925d11c; end: 10925d52f;  */

undefined8 *
FUN_10925d11c(undefined8 *param_1,long param_2,undefined4 param_3,undefined1 param_4,long param_5,
             long *param_6,long param_7,long param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puStack_70;
  long *plStack_68;
  
  *param_1 = &PTR_FUN_110ae6c60;
  param_1[1] = param_2 + 0x930;
  param_1[2] = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  puVar8 = param_1 + 3;
  *puVar8 = 0;
  puVar7 = param_1 + 6;
  *(undefined1 *)puVar7 = 0;
  FUN_10924a120(puVar7);
  uVar3 = *(uint *)(param_5 + 0x2e8);
  if (uVar3 != 0xffffffff) {
    puStack_70 = puVar7;
    (*(code *)(&PTR_FUN_110ae6c78)[uVar3])(&puStack_70,param_5 + 8);
    *(uint *)(param_1 + 0x62) = uVar3;
  }
  if (param_6[1] == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    plVar9 = (long *)*param_6;
    lVar10 = param_6[1] << 3;
    do {
      if (*plVar9 != 0) {
        uVar13 = uVar13 * 0x40 + (uVar13 >> 2) + 0x9e3779b9 + *(long *)(*plVar9 + 0x180) ^ uVar13;
      }
      plVar9 = plVar9 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  param_1[99] = uVar13;
  *(undefined1 *)(param_1 + 100) = 0;
  _bzero(param_1 + 0x65,0xc50);
  puVar7 = param_1 + 0x6d;
  lVar10 = 0x358;
  do {
    lVar12 = 0x180;
    puVar11 = puVar7;
    do {
      *(undefined4 *)(puVar11 + -2) = 0xffffffff;
      *puVar11 = 0;
      *(undefined8 *)((long)puVar11 + -0xc) = 0;
      *(undefined1 *)((long)puVar11 + -4) = 0;
      puVar11 = puVar11 + 3;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != 0);
    *(undefined4 *)((long)param_1 + lVar10 + 0x180) = 0;
    lVar10 = lVar10 + 0x184;
    puVar7 = (undefined8 *)((long)puVar7 + 0x184);
  } while (lVar10 != 0xf78);
  puVar7 = param_1 + 0x1ef;
  _bzero(puVar7,0x25c);
  *(undefined1 *)(param_1 + 0x23b) = param_4;
  *(undefined4 *)((long)param_1 + 0x11dc) = param_3;
  param_1[0x23d] = 0;
  param_1[0x23c] = 0;
  param_1[0x23f] = 0;
  param_1[0x23e] = 0;
  param_1[0x240] = 0;
  if ((param_7 != 0) && (*(ulong *)(param_7 + 0x318) == uVar13)) {
    FUN_10925d530(puVar8,param_7 + 0x18);
    *(undefined1 *)(param_1 + 0x23b) = *(undefined1 *)(param_7 + 0x11d8);
    puVar7 = puVar8;
  }
  lVar10 = param_1[2];
  FUN_109374fe0();
  if ((puVar7 == (undefined8 *)0x0) && ((*(byte *)(lVar10 + 0x90c) & 1) != 0)) {
    if (param_8 != 0) {
      FUN_10922d97c(&puStack_70,param_1[2],param_8);
      FUN_10925df18(param_1 + 0x23f,&puStack_70);
      plVar9 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar10 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    if (param_6[1] != 0) {
      plVar9 = (long *)*param_6;
      plVar1 = plVar9 + param_6[1];
      do {
        if (*plVar9 != 0) {
          FUN_10922d97c(&puStack_70,param_1[2]);
          FUN_10925df7c(param_1 + 0x23c,&puStack_70);
          plVar6 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar2 = plStack_68 + 1;
            do {
              lVar10 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
    }
  }
  else {
    FUN_10925dc30(param_1,param_6,param_8);
  }
  return param_1;
}



/* Entry: 10925d530; end: 10925d5e7;  */

undefined8 * FUN_10925d530(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10925d5e8; end: 10925d9a3;  */

undefined8 * FUN_10925d5e8(undefined8 *param_1,long param_2,byte param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *aplStack_330 [82];
  undefined1 auStack_a0 [72];
  undefined1 uStack_58;
  
  lVar5 = 0;
  *param_1 = &PTR_FUN_110ae6c60;
  param_1[1] = param_2 + 0x930;
  param_1[2] = param_2;
  aplStack_330[0x3d] = (long *)0x0;
  aplStack_330[0x3c] = (long *)0x0;
  aplStack_330[0x3f] = (long *)0x0;
  aplStack_330[0x3e] = (long *)0x0;
  aplStack_330[0x39] = (long *)0x0;
  aplStack_330[0x38] = (long *)0x0;
  aplStack_330[0x3b] = (long *)0x0;
  aplStack_330[0x3a] = (long *)0x0;
  aplStack_330[0x35] = (long *)0x0;
  aplStack_330[0x34] = (long *)0x0;
  aplStack_330[0x37] = (long *)0x0;
  aplStack_330[0x36] = (long *)0x0;
  aplStack_330[0x31] = (long *)0x0;
  aplStack_330[0x30] = (long *)0x0;
  aplStack_330[0x33] = (long *)0x0;
  aplStack_330[0x32] = (long *)0x0;
  aplStack_330[0x2d] = (long *)0x0;
  aplStack_330[0x2c] = (long *)0x0;
  aplStack_330[0x2f] = (long *)0x0;
  aplStack_330[0x2e] = (long *)0x0;
  aplStack_330[0x29] = (long *)0x0;
  aplStack_330[0x28] = (long *)0x0;
  aplStack_330[0x2b] = (long *)0x0;
  aplStack_330[0x2a] = (long *)0x0;
  aplStack_330[0x25] = (long *)0x0;
  aplStack_330[0x24] = (long *)0x0;
  aplStack_330[0x27] = (long *)0x0;
  aplStack_330[0x26] = (long *)0x0;
  aplStack_330[0x21] = (long *)0x0;
  aplStack_330[0x20] = (long *)0x0;
  aplStack_330[0x23] = (long *)0x0;
  aplStack_330[0x22] = (long *)0x0;
  aplStack_330[0x1d] = (long *)0x0;
  aplStack_330[0x1c] = (long *)0x0;
  aplStack_330[0x1f] = (long *)0x0;
  aplStack_330[0x1e] = (long *)0x0;
  aplStack_330[0x19] = (long *)0x0;
  aplStack_330[0x18] = (long *)0x0;
  aplStack_330[0x1b] = (long *)0x0;
  aplStack_330[0x1a] = (long *)0x0;
  aplStack_330[0x15] = (long *)0x0;
  aplStack_330[0x14] = (long *)0x0;
  aplStack_330[0x17] = (long *)0x0;
  aplStack_330[0x16] = (long *)0x0;
  aplStack_330[0x11] = (long *)0x0;
  aplStack_330[0x10] = (long *)0x0;
  aplStack_330[0x13] = (long *)0x0;
  aplStack_330[0x12] = (long *)0x0;
  aplStack_330[0xd] = (long *)0x0;
  aplStack_330[0xc] = (long *)0x0;
  aplStack_330[0xf] = (long *)0x0;
  aplStack_330[0xe] = (long *)0x0;
  aplStack_330[9] = (long *)0x0;
  aplStack_330[8] = (long *)0x0;
  aplStack_330[0xb] = (long *)0x0;
  aplStack_330[10] = (long *)0x0;
  aplStack_330[5] = (long *)0x0;
  aplStack_330[4] = (long *)0x0;
  aplStack_330[7] = (long *)0x0;
  aplStack_330[6] = (long *)0x0;
  aplStack_330[1] = (long *)0x0;
  aplStack_330[0] = (long *)0x0;
  aplStack_330[3] = (long *)0x0;
  aplStack_330[2] = (long *)0x0;
  param_1[3] = 0;
  param_1[4] = 0;
  do {
    *(undefined8 *)((long)aplStack_330 + lVar5 + 0x28) = 0;
    *(undefined8 *)((long)aplStack_330 + lVar5 + 0x20) = 0xffffffff;
    *(undefined8 *)((long)aplStack_330 + lVar5 + 0x38) = 0;
    *(undefined8 *)((long)aplStack_330 + lVar5 + 0x30) = 0xffffffff;
    *(undefined8 *)((long)aplStack_330 + lVar5 + 8) = 0;
    *(undefined8 *)((long)aplStack_330 + lVar5) = 0xffffffff;
    *(undefined8 *)((long)aplStack_330 + lVar5 + 0x18) = 0;
    *(undefined8 *)((long)aplStack_330 + lVar5 + 0x10) = 0xffffffff;
    lVar5 = lVar5 + 0x40;
  } while (lVar5 != 0x200);
  aplStack_330[0x51] = (long *)0x0;
  aplStack_330[0x40] = (long *)0x0;
  aplStack_330[0x46] = (long *)0xffffffff;
  aplStack_330[0x45] = (long *)0x100000000;
  aplStack_330[0x48] = (long *)0xffffffff;
  aplStack_330[0x47] = (long *)0x100000000;
  aplStack_330[0x42] = (long *)0xffffffff;
  aplStack_330[0x41] = (long *)0x100000000;
  aplStack_330[0x44] = (long *)0xffffffff;
  aplStack_330[0x43] = (long *)0x100000000;
  aplStack_330[0x4e] = (long *)0xffffffff;
  aplStack_330[0x4d] = (long *)0x100000000;
  aplStack_330[0x50] = (long *)0xffffffff;
  aplStack_330[0x4f] = (long *)0x100000000;
  aplStack_330[0x4a] = (long *)0xffffffff;
  aplStack_330[0x49] = (long *)0x100000000;
  aplStack_330[0x4c] = (long *)0xffffffff;
  aplStack_330[0x4b] = (long *)0x100000000;
  auStack_a0[0] = 0;
  uStack_58 = 0;
  FUN_10925f208(param_1 + 6,aplStack_330);
  *(undefined4 *)(param_1 + 0x62) = 2;
  FUN_109234a54(auStack_a0);
  param_1[99] = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  _bzero(param_1 + 0x65,0xc50);
  puVar4 = param_1 + 0x6d;
  lVar5 = 0x358;
  do {
    lVar7 = 0x180;
    puVar6 = puVar4;
    do {
      *(undefined4 *)(puVar6 + -2) = 0xffffffff;
      *puVar6 = 0;
      *(undefined8 *)((long)puVar6 + -0xc) = 0;
      *(undefined1 *)((long)puVar6 + -4) = 0;
      puVar6 = puVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
    *(undefined4 *)((long)param_1 + lVar5 + 0x180) = 0;
    lVar5 = lVar5 + 0x184;
    puVar4 = (undefined8 *)((long)puVar4 + 0x184);
  } while (lVar5 != 0xf78);
  _bzero(param_1 + 0x1ef,0x25c);
  *(byte *)(param_1 + 0x23b) = param_3;
  *(undefined8 *)((long)param_1 + 0x11e4) = 0;
  *(undefined8 *)((long)param_1 + 0x11dc) = 0;
  *(undefined8 *)((long)param_1 + 0x11f4) = 0;
  *(undefined8 *)((long)param_1 + 0x11ec) = 0;
  param_1[0x240] = 0;
  param_1[0x23f] = 0;
  if (param_4 == 0) {
    func_0x000109fd19d0(param_2 + 0x810,6,0x400,&UNK_10f5614ae,0x4f);
    param_3 = *(byte *)(param_1 + 0x23b);
  }
  plVar8 = (long *)param_1[1];
  plVar3 = (long *)0x168;
  __Znwm();
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110ae6cc0;
  aplStack_330[0] = plVar3 + 3;
  *aplStack_330[0] = *plVar8;
  plVar3[4] = (long)plVar8;
  *(int *)(plVar3 + 5) = param_4;
  *(undefined1 *)(plVar3 + 6) = 0;
  *(undefined1 *)(plVar3 + 0x27) = 0;
  *(undefined2 *)(plVar3 + 0x28) = 0x101;
  *(byte *)((long)plVar3 + 0x142) = param_3 & 1;
  plVar3[0x2a] = 0;
  plVar3[0x29] = 0;
  plVar3[0x2c] = 0;
  plVar3[0x2b] = 0;
  aplStack_330[1] = plVar3;
  FUN_10925d9a4(param_1 + 3,aplStack_330);
  plVar3 = aplStack_330[1];
  if (aplStack_330[1] != (long *)0x0) {
    plVar8 = aplStack_330[1] + 1;
    do {
      lVar5 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*aplStack_330[1] + 0x10))(aplStack_330[1]);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return param_1;
}



/* Entry: 10925d9a4; end: 10925da07;  */

undefined8 * FUN_10925d9a4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10925da08; end: 10925dc2f;  */

undefined8 * FUN_10925da08(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_38;
  
  *param_1 = &PTR_FUN_110ae6c60;
  lVar6 = param_1[2];
  puVar4 = param_1;
  FUN_109374fe0();
  if (puVar4 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar6 + 0x810,6,2,&UNK_10f5614fe,0x4d);
  }
  plVar7 = (long *)param_1[4];
  param_1[3] = 0;
  param_1[4] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  FUN_10922d7c8(param_1 + 0x23f);
  puStack_38 = param_1 + 0x23c;
  FUN_10922d758(&puStack_38);
  if (param_1[0x237] != 0) {
    param_1[0x238] = param_1[0x237];
    __ZdlPv();
  }
  puVar4 = param_1 + 0x234;
  lVar6 = -0x60;
  do {
    puStack_38 = puVar4;
    FUN_10925f0f0(&puStack_38);
    puVar4 = puVar4 + -3;
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0);
  lVar6 = 0;
  do {
    lVar5 = *(long *)((long)param_1 + lVar6 + 0x1140);
    if (lVar5 != 0) {
      *(long *)((long)param_1 + lVar6 + 0x1148) = lVar5;
      __ZdlPv();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x60);
  puVar4 = param_1 + 0x21c;
  lVar6 = -0x60;
  do {
    puStack_38 = puVar4;
    FUN_10925f17c(&puStack_38);
    puVar4 = puVar4 + -3;
    lVar6 = lVar6 + 0x18;
  } while (lVar6 != 0);
  lVar6 = 0;
  do {
    lVar5 = *(long *)((long)param_1 + lVar6 + 0x1080);
    if (lVar5 != 0) {
      *(long *)((long)param_1 + lVar6 + 0x1088) = lVar5;
      __ZdlPv();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x60);
  lVar6 = 0;
  do {
    lVar5 = *(long *)((long)param_1 + lVar6 + 0x1020);
    if (lVar5 != 0) {
      *(long *)((long)param_1 + lVar6 + 0x1028) = lVar5;
      __ZdlPv();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x60);
  lVar6 = 0;
  do {
    lVar5 = *(long *)((long)param_1 + lVar6 + 0xfc0);
    if (lVar5 != 0) {
      *(long *)((long)param_1 + lVar6 + 0xfc8) = lVar5;
      __ZdlPv();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != -0x60);
  puStack_38 = param_1 + 0x68;
  FUN_10922dc0c(&puStack_38);
  puStack_38 = param_1 + 0x65;
  func_0x0001092349c8(&puStack_38);
  FUN_10924a120(param_1 + 6);
  FUN_10925f944(param_1 + 3);
  return param_1;
}



/* Entry: 10925dc30; end: 10925df17;  */

void FUN_10925dc30(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 ***pppuVar14;
  undefined1 auStack_c0 [32];
  undefined8 ****ppppuStack_a0;
  long *plStack_98;
  int iStack_88;
  int iStack_7c;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar12 = (long *)(param_1 + 0x18);
  if (*plVar12 != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_10926588c(uVar8,param_3,*(undefined8 *)(param_1 + 0x318));
  ppppuStack_78 = (undefined8 *****)0x0;
  uStack_70 = 0;
  lStack_68 = 0;
  iVar7 = (int)uVar8;
  if (iVar7 != 0) goto LAB_10925dd18;
  uVar8 = *(undefined8 *)(param_1 + 8);
  FUN_1092654b4(uVar8,param_2,param_3 != 0);
  iStack_7c = (int)uVar8;
  uVar6 = (ulong)ppppuStack_a0 >> 0x20;
  ppppuStack_a0 = (undefined8 ****)((ulong)ppppuStack_a0 & 0xffffffff00000000);
  iStack_88 = 0;
  if (*(int *)(**(long **)(param_1 + 8) + 0x908) == 0) {
    FUN_1092655dc(auStack_c0,*(long **)(param_1 + 8),&iStack_7c,*param_2,param_2[1]);
    FUN_10925f59c(&ppppuStack_a0,auStack_c0);
    FUN_10925f5f8(auStack_c0);
    if (iStack_88 == 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&ppppuStack_78,&ppppuStack_a0);
    }
    else if (iStack_88 == 0) {
      iVar7 = (int)ppppuStack_a0;
      goto LAB_10925dd10;
    }
    iVar7 = 0;
  }
  else {
    ppppuStack_a0 = (undefined8 ****)CONCAT44((int)uVar6,iStack_7c);
    iVar7 = iStack_7c;
  }
LAB_10925dd10:
  FUN_10925f5f8(&ppppuStack_a0);
LAB_10925dd18:
  plVar13 = *(long **)(param_1 + 8);
  pppuVar14 = (undefined8 ***)*plVar13;
  iVar1 = *(int *)(pppuVar14 + 0x121);
  uVar2 = *(uint *)(param_1 + 0x11dc);
  bVar3 = *(byte *)(param_1 + 0x11d8);
  plVar9 = (long *)0x168;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110ae6cc0;
  ppppuStack_a0 = (undefined8 ****)(plVar9 + 3);
  *ppppuStack_a0 = pppuVar14;
  plVar9[4] = (long)plVar13;
  *(int *)(plVar9 + 5) = iVar7;
  *(undefined1 *)(plVar9 + 6) = 0;
  *(undefined1 *)(plVar9 + 0x27) = 0;
  *(bool *)(plVar9 + 0x28) = iVar1 == 0;
  *(byte *)((long)plVar9 + 0x141) = (byte)(uVar2 >> 1) & 1;
  *(byte *)((long)plVar9 + 0x142) = bVar3 & 1;
  plVar9[0x2a] = 0;
  plVar9[0x29] = 0;
  plVar9[0x2c] = 0;
  plVar9[0x2b] = 0;
  plStack_98 = plVar9;
  FUN_10925d9a4(plVar12,&ppppuStack_a0);
  plVar9 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar13 = plStack_98 + 1;
    do {
      lVar10 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if ((param_3 != 0) && (iVar7 != 0)) {
    FUN_10925fda0(param_3,*(undefined8 *)(param_1 + 0x318),plVar12);
  }
  lVar10 = *(long *)(param_1 + 0x10);
  ppppuStack_a0 = ppppuStack_78;
  if (-1 < lStack_68) {
    ppppuStack_a0 = &ppppuStack_78;
  }
  if (((iVar7 == 0) && ((*(byte *)(lVar10 + 0x813) >> 5 & 1) != 0)) &&
     (*(uint *)(lVar10 + 0x818) < 6)) {
    FUN_10925f9d8(lVar10 + 0x810,5,0x20000000,&UNK_10f56161c,0x30,&ppppuStack_a0);
  }
  ppppuStack_a0 = (undefined8 ****)0x0;
  plStack_98 = (long *)0x0;
  FUN_10925df18(param_1 + 0x11f8,&ppppuStack_a0);
  plVar12 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar9 = plStack_98 + 1;
    do {
      lVar10 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  lVar10 = *(long *)(param_1 + 0x11e8);
  lVar11 = *(long *)(param_1 + 0x11e0);
  while (lVar10 != lVar11) {
    lVar10 = lVar10 + -0x10;
    FUN_10922d7c8();
  }
  *(long *)(param_1 + 0x11e8) = lVar11;
  if (lStack_68 < 0) {
    __ZdlPv(ppppuStack_78);
  }
  return;
}



/* Entry: 10925df18; end: 10925df7b;  */

undefined8 * FUN_10925df18(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10925df7c; end: 10925e05f;  */

void FUN_10925df7c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar9 = *param_2;
    puVar6 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar5 = (long)puVar2 - *param_1;
    uVar1 = (lVar5 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10925f508();
      if (param_1[3] == 0) {
        lVar5 = param_1[0x23f];
        lStack_a8 = 0;
        lStack_a0 = 0;
        uStack_98 = 0;
        plVar8 = (long *)param_1[0x23d];
        for (plVar7 = (long *)param_1[0x23c]; plVar7 != plVar8; plVar7 = plVar7 + 2) {
          lStack_b8 = *plVar7;
          FUN_10925e128(&lStack_a8,&lStack_b8);
        }
        lStack_b0 = lStack_a0 - lStack_a8 >> 3;
        lStack_b8 = lStack_a8;
        FUN_10925dc30(param_1,&lStack_b8,lVar5);
        if (lStack_a8 != 0) {
          lStack_a0 = lStack_a8;
          __ZdlPv();
        }
      }
      return;
    }
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 3;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar4 = 0xfffffffffffffff;
    }
    plVar7 = param_1;
    plStack_38 = param_1;
    FUN_10925f51c();
    puVar2 = (undefined8 *)((long)plVar7 + lVar5);
    uVar9 = *param_2;
    puVar6 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar9;
    *param_2 = 0;
    param_2[1] = 0;
    lVar5 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar5);
    lStack_58 = *param_1;
    *param_1 = lVar5;
    param_1[1] = (long)puVar6;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar7 + uVar4 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010925f550(&lStack_58);
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10925e060; end: 10925e127;  */

void FUN_10925e060(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x11f8);
    lStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    plVar3 = *(long **)(param_1 + 0x11e8);
    for (plVar2 = *(long **)(param_1 + 0x11e0); plVar2 != plVar3; plVar2 = plVar2 + 2) {
      lStack_58 = *plVar2;
      FUN_10925e128(&lStack_48,&lStack_58);
    }
    lStack_50 = lStack_40 - lStack_48 >> 3;
    lStack_58 = lStack_48;
    FUN_10925dc30(param_1,&lStack_58,uVar1);
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10925e128; end: 10925e1eb;  */

void FUN_10925e128(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  long alStack_1ca8 [12];
  long alStack_1c48 [485];
  long lStack_cc0;
  long lStack_cb8;
  long lStack_cb0;
  undefined4 uStack_ca8;
  long alStack_c78 [380];
  long lStack_98;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    puVar10 = puVar4 + 1;
    *puVar4 = *param_2;
  }
  else {
    lVar9 = (long)puVar4 - *param_1;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10925f73c();
      if (*(int *)(param_1[3] + 0x10) != 0) {
        plVar3 = param_1 + 5;
        FUN_109264be8();
        lVar9 = param_1[3];
        if ((int)param_1[0x62] == 1) {
          lVar7 = 0x60;
          plVar8 = (long *)0x0;
          plVar3 = param_1 + 6;
        }
        else {
          if ((int)param_1[0x62] != 2) {
            puVar4 = (undefined8 *)&UNK_10f56164d;
            FUN_109243bf8();
            if ((*(byte *)(puVar4 + 100) & 1) == 0) {
              FUN_10925e060(puVar4);
              (**(code **)*puVar4)(puVar4);
              *(undefined1 *)(puVar4 + 100) = 1;
            }
            lVar9 = puVar4[3];
            if (*(long *)(lVar9 + 0x148) == plVar3[0x5a]) {
              if (*(long *)(lVar9 + 0x130) != *(long *)(lVar9 + 0x138)) {
                puVar14 = (undefined4 *)puVar4[0x238];
                for (puVar13 = (undefined4 *)puVar4[0x237]; puVar13 != puVar14;
                    puVar13 = puVar13 + 5) {
                  lVar15 = *(long *)(lVar9 + 0x130);
                  uVar1 = (ulong)(uint)puVar13[3];
                  uVar2 = puVar13[4];
                  lVar7 = lVar15 + uVar1;
                  _memcmp(lVar7,param_3 + uVar1,uVar2);
                  if ((int)lVar7 != 0) {
                    FUN_10925e778(puVar4[1],*puVar13,puVar13[1],param_3 + uVar1,puVar13[2],
                                  plVar3 + 0x10);
                    _memcpy(lVar15 + uVar1,param_3 + uVar1,uVar2);
                  }
                }
                return;
              }
            }
            else {
              *(long *)(lVar9 + 0x148) = plVar3[0x5a];
              *(undefined8 *)(lVar9 + 0x138) = *(undefined8 *)(lVar9 + 0x130);
            }
            FUN_10925f784(lVar9 + 0x130,param_3,param_3 + (ulong)*(uint *)(puVar4 + 0x23a));
            puVar14 = (undefined4 *)puVar4[0x238];
            for (puVar13 = (undefined4 *)puVar4[0x237]; puVar13 != puVar14; puVar13 = puVar13 + 5) {
              FUN_10925e778(puVar4[1],*puVar13,puVar13[1],param_3 + (ulong)(uint)puVar13[3],
                            puVar13[2],plVar3 + 0x10);
            }
            return;
          }
          lVar7 = 0x308;
          plVar3 = param_1 + 0x58;
          plVar8 = param_1 + 6;
        }
        plVar12 = param_1 + 0x1ef;
        if (*(char *)((long)param_1 + lVar7) == '\0') {
          plVar3 = (long *)0x0;
        }
        FUN_10927199c(&lStack_cc0,lVar9 + 0x18,plVar3,param_1 + 0x68);
        lVar7 = 0xf88;
        do {
          if (*plVar12 != 0) {
            plVar12[1] = *plVar12;
            __ZdlPv();
          }
          lVar15 = *(long *)((long)alStack_1c48 + lVar7);
          plVar12[1] = *(long *)((long)alStack_1c48 + lVar7 + 8);
          *plVar12 = lVar15;
          plVar12[2] = *(long *)((long)alStack_1c48 + lVar7 + 0x10);
          *(long *)((long)alStack_1c48 + lVar7) = 0;
          *(undefined8 *)((long)alStack_1c48 + lVar7 + 8) = 0;
          *(undefined8 *)((long)alStack_1c48 + lVar7 + 0x10) = 0;
          lVar7 = lVar7 + 0x18;
          plVar12 = plVar12 + 3;
        } while (lVar7 != 0xfe8);
        lVar7 = 0;
        do {
          if (*(long *)((long)alStack_c78 + lVar7) != 0) {
            *(long *)((long)alStack_c78 + lVar7 + 8) = *(long *)((long)alStack_c78 + lVar7);
            __ZdlPv();
          }
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != -0x60);
        FUN_109274268(&lStack_cc0,lVar9 + 0x18,plVar3,param_1 + 0x68);
        plVar12 = param_1 + 0x21f;
        lVar7 = 4;
        plVar11 = &lStack_cc0;
        do {
          if (*plVar12 != 0) {
            plVar12[1] = *plVar12;
            __ZdlPv();
          }
          lVar15 = *plVar11;
          plVar12[1] = plVar11[1];
          *plVar12 = lVar15;
          plVar12[2] = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          plVar12 = plVar12 + 3;
          lVar7 = lVar7 + -1;
          plVar11 = plVar11 + 3;
        } while (lVar7 != 0);
        lVar7 = 0;
        do {
          if (*(long *)((long)alStack_c78 + lVar7) != 0) {
            *(long *)((long)alStack_c78 + lVar7 + 8) = *(long *)((long)alStack_c78 + lVar7);
            __ZdlPv();
          }
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != -0x60);
        FUN_109272bac(&lStack_cc0,lVar9 + 0x18,plVar3,param_1 + 0x68);
        lVar7 = 4;
        plVar12 = param_1 + 0x213;
        plVar11 = &lStack_cc0;
        do {
          if (*plVar12 != 0) {
            FUN_10925f1bc(plVar12);
            __ZdlPv(*plVar12);
          }
          lVar15 = *plVar11;
          plVar12[1] = plVar11[1];
          *plVar12 = lVar15;
          plVar12[2] = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          plVar12 = plVar12 + 3;
          lVar7 = lVar7 + -1;
          plVar11 = plVar11 + 3;
        } while (lVar7 != 0);
        lVar7 = 0x48;
        do {
          lStack_98 = (long)&lStack_cc0 + lVar7;
          FUN_10925f17c(&lStack_98);
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != -0x18);
        FUN_109273910(&lStack_cc0,lVar9 + 0x18,plVar3,param_1 + 0x68,param_1 + 0x213);
        plVar12 = param_1 + 0x22b;
        lVar7 = 4;
        plVar11 = &lStack_cc0;
        do {
          if (*plVar12 != 0) {
            FUN_10925f130(plVar12);
            __ZdlPv(*plVar12);
          }
          lVar15 = *plVar11;
          plVar12[1] = plVar11[1];
          *plVar12 = lVar15;
          plVar12[2] = plVar11[2];
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = 0;
          plVar12 = plVar12 + 3;
          lVar7 = lVar7 + -1;
          plVar11 = plVar11 + 3;
        } while (lVar7 != 0);
        lVar7 = 0x48;
        do {
          lStack_98 = (long)&lStack_cc0 + lVar7;
          FUN_10925f0f0(&lStack_98);
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != -0x18);
        if (*(int *)(lVar9 + 0x118) == 1) {
          FUN_109272630(&lStack_cc0,lVar9 + 0x18,plVar3,param_1 + 0x68);
          plVar3 = param_1 + 0x207;
          lVar7 = 4;
          plVar12 = &lStack_cc0;
          do {
            if (*plVar3 != 0) {
              plVar3[1] = *plVar3;
              __ZdlPv();
            }
            lVar15 = *plVar12;
            plVar3[1] = plVar12[1];
            *plVar3 = lVar15;
            plVar3[2] = plVar12[2];
            plVar12[1] = 0;
            plVar12[2] = 0;
            *plVar12 = 0;
            plVar3 = plVar3 + 3;
            lVar7 = lVar7 + -1;
            plVar12 = plVar12 + 3;
          } while (lVar7 != 0);
          lVar7 = 0;
          do {
            if (*(long *)((long)alStack_c78 + lVar7) != 0) {
              *(long *)((long)alStack_c78 + lVar7 + 8) = *(long *)((long)alStack_c78 + lVar7);
              __ZdlPv();
            }
            lVar7 = lVar7 + -0x18;
          } while (lVar7 != -0x60);
        }
        else if (*(int *)(lVar9 + 0x118) == 0) {
          FUN_10927203c(&lStack_cc0,lVar9 + 0x18,plVar3,param_1 + 0x68);
          plVar3 = param_1 + 0x1fb;
          lVar7 = 0xfe8;
          do {
            if (*plVar3 != 0) {
              plVar3[1] = *plVar3;
              __ZdlPv();
            }
            lVar15 = *(long *)((long)alStack_1ca8 + lVar7);
            plVar3[1] = *(long *)((long)alStack_1ca8 + lVar7 + 8);
            *plVar3 = lVar15;
            plVar3[2] = *(long *)((long)alStack_1ca8 + lVar7 + 0x10);
            *(long *)((long)alStack_1ca8 + lVar7) = 0;
            *(undefined8 *)((long)alStack_1ca8 + lVar7 + 8) = 0;
            *(undefined8 *)((long)alStack_1ca8 + lVar7 + 0x10) = 0;
            lVar7 = lVar7 + 0x18;
            plVar3 = plVar3 + 3;
          } while (lVar7 != 0x1048);
          lVar7 = 0;
          do {
            if (*(long *)((long)alStack_c78 + lVar7) != 0) {
              *(long *)((long)alStack_c78 + lVar7 + 8) = *(long *)((long)alStack_c78 + lVar7);
              __ZdlPv();
            }
            lVar7 = lVar7 + -0x18;
          } while (lVar7 != -0x60);
        }
        else {
          FUN_1092747d0(&lStack_cc0,lVar9 + 0x18,param_1 + 0x68);
          if (param_1[0x237] != 0) {
            param_1[0x238] = param_1[0x237];
            __ZdlPv();
          }
          param_1[0x238] = lStack_cb8;
          param_1[0x237] = lStack_cc0;
          param_1[0x239] = lStack_cb0;
          *(undefined4 *)(param_1 + 0x23a) = uStack_ca8;
        }
        if (plVar8 != (long *)0x0) {
          FUN_109243628(&lStack_cc0,lVar9 + 0x18,plVar8,param_1 + 0x65,*(long *)param_1[1] + 0x810);
          _memcpy(param_1 + 0x6b,&lStack_cc0,0xc20);
        }
      }
      return;
    }
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10925f750();
    puVar4 = (undefined8 *)((long)plVar3 + lVar9);
    puVar10 = puVar4 + 1;
    *puVar4 = *param_2;
    lVar7 = (long)puVar4 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar9 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar3 + uVar6);
    if (lVar9 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10925e1ec; end: 10925e777;  */

void FUN_10925e1ec(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long alStack_1c78 [12];
  long alStack_1c18 [485];
  long lStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined4 uStack_c78;
  long alStack_c48 [380];
  long lStack_68;
  
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) != 0) {
    lVar8 = param_1 + 0x28;
    FUN_109264be8();
    lVar9 = *(long *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x310) == 1) {
      lVar4 = 0x60;
      lVar5 = 0;
      lVar8 = param_1 + 0x30;
    }
    else {
      if (*(int *)(param_1 + 0x310) != 2) {
        puVar3 = (undefined8 *)&UNK_10f56164d;
        FUN_109243bf8();
        if ((*(byte *)(puVar3 + 100) & 1) == 0) {
          FUN_10925e060(puVar3);
          (**(code **)*puVar3)(puVar3);
          *(undefined1 *)(puVar3 + 100) = 1;
        }
        lVar9 = puVar3[3];
        if (*(long *)(lVar9 + 0x148) == *(long *)(lVar8 + 0x2d0)) {
          if (*(long *)(lVar9 + 0x130) != *(long *)(lVar9 + 0x138)) {
            puVar11 = (undefined4 *)puVar3[0x238];
            for (puVar10 = (undefined4 *)puVar3[0x237]; puVar10 != puVar11; puVar10 = puVar10 + 5) {
              lVar4 = *(long *)(lVar9 + 0x130);
              uVar1 = (ulong)(uint)puVar10[3];
              uVar2 = puVar10[4];
              lVar5 = lVar4 + uVar1;
              _memcmp(lVar5,param_3 + uVar1,uVar2);
              if ((int)lVar5 != 0) {
                FUN_10925e778(puVar3[1],*puVar10,puVar10[1],param_3 + uVar1,puVar10[2],lVar8 + 0x80)
                ;
                _memcpy(lVar4 + uVar1,param_3 + uVar1,uVar2);
              }
            }
            return;
          }
        }
        else {
          *(long *)(lVar9 + 0x148) = *(long *)(lVar8 + 0x2d0);
          *(undefined8 *)(lVar9 + 0x138) = *(undefined8 *)(lVar9 + 0x130);
        }
        FUN_10925f784(lVar9 + 0x130,param_3,param_3 + (ulong)*(uint *)(puVar3 + 0x23a));
        puVar11 = (undefined4 *)puVar3[0x238];
        for (puVar10 = (undefined4 *)puVar3[0x237]; puVar10 != puVar11; puVar10 = puVar10 + 5) {
          FUN_10925e778(puVar3[1],*puVar10,puVar10[1],param_3 + (ulong)(uint)puVar10[3],puVar10[2],
                        lVar8 + 0x80);
        }
        return;
      }
      lVar4 = 0x308;
      lVar8 = param_1 + 0x2c0;
      lVar5 = param_1 + 0x30;
    }
    plVar6 = (long *)(param_1 + 0xf78);
    if (*(char *)(param_1 + lVar4) == '\0') {
      lVar8 = 0;
    }
    FUN_10927199c(&lStack_c90,lVar9 + 0x18,lVar8,param_1 + 0x340);
    lVar4 = 0xf88;
    do {
      if (*plVar6 != 0) {
        plVar6[1] = *plVar6;
        __ZdlPv();
      }
      lVar12 = *(long *)((long)alStack_1c18 + lVar4);
      plVar6[1] = *(long *)((long)alStack_1c18 + lVar4 + 8);
      *plVar6 = lVar12;
      plVar6[2] = *(long *)((long)alStack_1c18 + lVar4 + 0x10);
      *(long *)((long)alStack_1c18 + lVar4) = 0;
      *(undefined8 *)((long)alStack_1c18 + lVar4 + 8) = 0;
      *(undefined8 *)((long)alStack_1c18 + lVar4 + 0x10) = 0;
      lVar4 = lVar4 + 0x18;
      plVar6 = plVar6 + 3;
    } while (lVar4 != 0xfe8);
    lVar4 = 0;
    do {
      if (*(long *)((long)alStack_c48 + lVar4) != 0) {
        *(long *)((long)alStack_c48 + lVar4 + 8) = *(long *)((long)alStack_c48 + lVar4);
        __ZdlPv();
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x60);
    FUN_109274268(&lStack_c90,lVar9 + 0x18,lVar8,param_1 + 0x340);
    plVar6 = (long *)(param_1 + 0x10f8);
    lVar4 = 4;
    plVar7 = &lStack_c90;
    do {
      if (*plVar6 != 0) {
        plVar6[1] = *plVar6;
        __ZdlPv();
      }
      lVar12 = *plVar7;
      plVar6[1] = plVar7[1];
      *plVar6 = lVar12;
      plVar6[2] = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      plVar6 = plVar6 + 3;
      lVar4 = lVar4 + -1;
      plVar7 = plVar7 + 3;
    } while (lVar4 != 0);
    lVar4 = 0;
    do {
      if (*(long *)((long)alStack_c48 + lVar4) != 0) {
        *(long *)((long)alStack_c48 + lVar4 + 8) = *(long *)((long)alStack_c48 + lVar4);
        __ZdlPv();
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x60);
    FUN_109272bac(&lStack_c90,lVar9 + 0x18,lVar8,param_1 + 0x340);
    lVar4 = 4;
    plVar6 = (long *)(param_1 + 0x1098);
    plVar7 = &lStack_c90;
    do {
      if (*plVar6 != 0) {
        FUN_10925f1bc(plVar6);
        __ZdlPv(*plVar6);
      }
      lVar12 = *plVar7;
      plVar6[1] = plVar7[1];
      *plVar6 = lVar12;
      plVar6[2] = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      plVar6 = plVar6 + 3;
      lVar4 = lVar4 + -1;
      plVar7 = plVar7 + 3;
    } while (lVar4 != 0);
    lVar4 = 0x48;
    do {
      lStack_68 = (long)&lStack_c90 + lVar4;
      FUN_10925f17c(&lStack_68);
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x18);
    FUN_109273910(&lStack_c90,lVar9 + 0x18,lVar8,param_1 + 0x340,(long *)(param_1 + 0x1098));
    plVar6 = (long *)(param_1 + 0x1158);
    lVar4 = 4;
    plVar7 = &lStack_c90;
    do {
      if (*plVar6 != 0) {
        FUN_10925f130(plVar6);
        __ZdlPv(*plVar6);
      }
      lVar12 = *plVar7;
      plVar6[1] = plVar7[1];
      *plVar6 = lVar12;
      plVar6[2] = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      plVar6 = plVar6 + 3;
      lVar4 = lVar4 + -1;
      plVar7 = plVar7 + 3;
    } while (lVar4 != 0);
    lVar4 = 0x48;
    do {
      lStack_68 = (long)&lStack_c90 + lVar4;
      FUN_10925f0f0(&lStack_68);
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x18);
    if (*(int *)(lVar9 + 0x118) == 1) {
      FUN_109272630(&lStack_c90,lVar9 + 0x18,lVar8,param_1 + 0x340);
      plVar6 = (long *)(param_1 + 0x1038);
      lVar8 = 4;
      plVar7 = &lStack_c90;
      do {
        if (*plVar6 != 0) {
          plVar6[1] = *plVar6;
          __ZdlPv();
        }
        lVar4 = *plVar7;
        plVar6[1] = plVar7[1];
        *plVar6 = lVar4;
        plVar6[2] = plVar7[2];
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = 0;
        plVar6 = plVar6 + 3;
        lVar8 = lVar8 + -1;
        plVar7 = plVar7 + 3;
      } while (lVar8 != 0);
      lVar8 = 0;
      do {
        if (*(long *)((long)alStack_c48 + lVar8) != 0) {
          *(long *)((long)alStack_c48 + lVar8 + 8) = *(long *)((long)alStack_c48 + lVar8);
          __ZdlPv();
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x60);
    }
    else if (*(int *)(lVar9 + 0x118) == 0) {
      FUN_10927203c(&lStack_c90,lVar9 + 0x18,lVar8,param_1 + 0x340);
      plVar6 = (long *)(param_1 + 0xfd8);
      lVar8 = 0xfe8;
      do {
        if (*plVar6 != 0) {
          plVar6[1] = *plVar6;
          __ZdlPv();
        }
        lVar4 = *(long *)((long)alStack_1c78 + lVar8);
        plVar6[1] = *(long *)((long)alStack_1c78 + lVar8 + 8);
        *plVar6 = lVar4;
        plVar6[2] = *(long *)((long)alStack_1c78 + lVar8 + 0x10);
        *(long *)((long)alStack_1c78 + lVar8) = 0;
        *(undefined8 *)((long)alStack_1c78 + lVar8 + 8) = 0;
        *(undefined8 *)((long)alStack_1c78 + lVar8 + 0x10) = 0;
        lVar8 = lVar8 + 0x18;
        plVar6 = plVar6 + 3;
      } while (lVar8 != 0x1048);
      lVar8 = 0;
      do {
        if (*(long *)((long)alStack_c48 + lVar8) != 0) {
          *(long *)((long)alStack_c48 + lVar8 + 8) = *(long *)((long)alStack_c48 + lVar8);
          __ZdlPv();
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != -0x60);
    }
    else {
      FUN_1092747d0(&lStack_c90,lVar9 + 0x18,param_1 + 0x340);
      if (*(long *)(param_1 + 0x11b8) != 0) {
        *(long *)(param_1 + 0x11c0) = *(long *)(param_1 + 0x11b8);
        __ZdlPv();
      }
      *(undefined8 *)(param_1 + 0x11c0) = uStack_c88;
      *(long *)(param_1 + 0x11b8) = lStack_c90;
      *(undefined8 *)(param_1 + 0x11c8) = uStack_c80;
      *(undefined4 *)(param_1 + 0x11d0) = uStack_c78;
    }
    if (lVar5 != 0) {
      FUN_109243628(&lStack_c90,lVar9 + 0x18,lVar5,param_1 + 0x328,**(long **)(param_1 + 8) + 0x810)
      ;
      _memcpy(param_1 + 0x358,&lStack_c90,0xc20);
    }
  }
  return;
}



/* Entry: 10925e778; end: 10925eb5b;  */

long * FUN_10925e778(long *param_1,long *param_2,int param_3,undefined8 *param_4,ulong param_5,
                    long *param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  
  if ((int)param_2 == -1) {
    return param_1;
  }
  if (param_3 < 0x8b50) {
    if (param_3 == 0x1404) {
_glUniform1iv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glUniform1iv_11034b838)(param_2,param_5,param_4);
      return param_2;
    }
    if (param_3 != 0x1405) {
      if (param_3 == 0x1406) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbebc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniform1fv_11034b828)(param_2,param_5,param_4);
        return param_2;
      }
      goto LAB_10925eb50;
    }
    UNRECOVERED_JUMPTABLE = (code *)param_1[0xf1];
  }
  else {
    iVar8 = (int)param_5;
    if (param_3 < 0x8dc6) {
      switch(param_3) {
      case 0x8b50:
                    /* WARNING: Could not recover jumptable at 0x00010bdbec00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniform2fv_11034b850)(param_2,param_5,param_4);
        return param_2;
      case 0x8b51:
        uVar1 = iVar8 * 3;
        if ((ulong)(param_6[1] - *param_6) < (ulong)((long)(int)uVar1 << 2)) {
          func_0x0001074287b0(param_6,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar1 << 2);
        }
        if (0 < iVar8) {
          lVar3 = 0;
          do {
            lVar6 = *param_6;
            uVar7 = *param_4;
            *(undefined4 *)((undefined8 *)(lVar6 + lVar3) + 1) = *(undefined4 *)(param_4 + 1);
            *(undefined8 *)(lVar6 + lVar3) = uVar7;
            lVar3 = lVar3 + 0xc;
            param_4 = param_4 + 2;
          } while ((param_5 & 0xffffffff) * 0xc - lVar3 != 0);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniform3fv_11034b870)(param_2,param_5,*param_6);
        return param_2;
      case 0x8b52:
                    /* WARNING: Could not recover jumptable at 0x00010bdbec60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniform4fv_11034b890)(param_2,param_5,param_4);
        return param_2;
      case 0x8b53:
      case 0x8b57:
                    /* WARNING: Could not recover jumptable at 0x00010bdbec0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniform2iv_11034b858)(param_2,param_5,param_4);
        return param_2;
      case 0x8b54:
      case 0x8b58:
        FUN_10925f8b8(param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbec3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniform3iv_11034b878)(param_2,param_5,param_4);
        return param_2;
      case 0x8b55:
      case 0x8b59:
                    /* WARNING: Could not recover jumptable at 0x00010bdbec6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniform4iv_11034b898)(param_2,param_5,param_4);
        return param_2;
      case 0x8b56:
        goto _glUniform1iv;
      case 0x8b5a:
                    /* WARNING: Could not recover jumptable at 0x00010bdbec90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniformMatrix2fv_11034b8b0)(param_2,param_5,0,param_4);
        return param_2;
      case 0x8b5b:
        uVar1 = iVar8 * 9;
        if ((ulong)(param_6[1] - *param_6) < (ulong)((long)(int)uVar1 << 2)) {
          func_0x0001074287b0(param_6,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                      (ulong)uVar1 << 2);
        }
        if (0 < iVar8) {
          lVar3 = 0;
          param_4 = param_4 + 4;
          do {
            lVar6 = *param_6;
            uVar7 = param_4[-4];
            *(undefined4 *)((undefined8 *)(lVar6 + lVar3) + 1) = *(undefined4 *)(param_4 + -3);
            *(undefined8 *)(lVar6 + lVar3) = uVar7;
            lVar6 = *param_6;
            uVar7 = param_4[-2];
            *(undefined4 *)(lVar6 + lVar3 + 0x14) = *(undefined4 *)(param_4 + -1);
            *(undefined8 *)(lVar6 + lVar3 + 0xc) = uVar7;
            lVar6 = *param_6;
            uVar7 = *param_4;
            *(undefined4 *)(lVar6 + lVar3 + 0x20) = *(undefined4 *)(param_4 + 1);
            *(undefined8 *)(lVar6 + lVar3 + 0x18) = uVar7;
            lVar3 = lVar3 + 0x24;
            param_4 = param_4 + 6;
          } while ((param_5 & 0xffffffff) * 0x24 - lVar3 != 0);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniformMatrix3fv_11034b8b8)(param_2,param_5,0,*param_6);
        return param_2;
      case 0x8b5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbeca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUniformMatrix4fv_11034b8c0)(param_2,param_5,0,param_4);
        return param_2;
      default:
LAB_10925eb50:
        puVar2 = (undefined8 *)&UNK_10f5616bc;
        FUN_109243bf8();
        if ((*(byte *)(puVar2 + 100) & 1) == 0) {
          FUN_10925e060(puVar2);
          (**(code **)*puVar2)(puVar2);
          *(undefined1 *)(puVar2 + 100) = 1;
        }
        lVar3 = puVar2[3];
        plVar5 = param_2;
        FUN_109264b14();
        uVar1 = *(uint *)(lVar3 + 0x10);
        plVar4 = (long *)(ulong)uVar1;
        if (uVar1 == 0) {
          plVar4 = (long *)&UNK_10f561883;
          FUN_109243bf8();
          if (*plVar4 != 0) {
            func_0x000109264f54(plVar4);
            __ZdlPv(*plVar4);
            *plVar4 = 0;
            plVar4[1] = 0;
            plVar4[2] = 0;
          }
          lVar3 = *plVar5;
          plVar4[1] = plVar5[1];
          *plVar4 = lVar3;
          plVar4[2] = plVar5[2];
          *plVar5 = 0;
          plVar5[1] = 0;
          plVar5[2] = 0;
          plVar9 = plVar4 + 3;
          if (*plVar9 != 0) {
            func_0x000109264fa0(plVar9);
            __ZdlPv(*plVar9);
            *plVar9 = 0;
            plVar4[4] = 0;
            plVar4[5] = 0;
          }
          lVar3 = plVar5[3];
          plVar4[4] = plVar5[4];
          plVar4[3] = lVar3;
          plVar4[5] = plVar5[5];
          plVar5[3] = 0;
          plVar5[4] = 0;
          plVar5[5] = 0;
          plVar9 = plVar4 + 6;
          if (*plVar9 != 0) {
            func_0x000109264fec(plVar9);
            __ZdlPv(*plVar9);
            *plVar9 = 0;
            plVar4[7] = 0;
            plVar4[8] = 0;
          }
          lVar3 = plVar5[6];
          plVar4[7] = plVar5[7];
          plVar4[6] = lVar3;
          plVar4[8] = plVar5[8];
          plVar5[6] = 0;
          plVar5[7] = 0;
          plVar5[8] = 0;
          FUN_109241b08(plVar4 + 9);
          lVar3 = plVar5[9];
          plVar4[10] = plVar5[10];
          plVar4[9] = lVar3;
          plVar4[0xb] = plVar5[0xb];
          plVar5[9] = 0;
          plVar5[10] = 0;
          plVar5[0xb] = 0;
          plVar9 = plVar4 + 0xc;
          if (*plVar9 != 0) {
            func_0x000109265038(plVar9);
            __ZdlPv(*plVar9);
            *plVar9 = 0;
            plVar4[0xd] = 0;
            plVar4[0xe] = 0;
          }
          lVar3 = plVar5[0xc];
          plVar4[0xd] = plVar5[0xd];
          plVar4[0xc] = lVar3;
          plVar4[0xe] = plVar5[0xe];
          plVar5[0xc] = 0;
          plVar5[0xd] = 0;
          plVar5[0xe] = 0;
          if (*(char *)((long)plVar4 + 0x8f) < '\0') {
            __ZdlPv(plVar4[0xf]);
          }
          lVar6 = plVar5[0x10];
          lVar3 = plVar5[0xf];
          plVar4[0x11] = plVar5[0x11];
          plVar4[0x10] = lVar6;
          plVar4[0xf] = lVar3;
          *(undefined1 *)((long)plVar5 + 0x8f) = 0;
          *(undefined1 *)(plVar5 + 0xf) = 0;
          lVar3 = plVar5[0x12];
          *(int *)(plVar4 + 0x13) = (int)plVar5[0x13];
          plVar4[0x12] = lVar3;
          FUN_109241da0(plVar4 + 0x14);
          lVar3 = plVar5[0x14];
          plVar4[0x15] = plVar5[0x15];
          plVar4[0x14] = lVar3;
          plVar4[0x16] = plVar5[0x16];
          plVar5[0x14] = 0;
          plVar5[0x15] = 0;
          plVar5[0x16] = 0;
          lVar3 = plVar4[0x17];
          if (lVar3 != 0) {
            plVar4[0x18] = lVar3;
            __ZdlPv();
            plVar4[0x17] = 0;
            plVar4[0x18] = 0;
            plVar4[0x19] = 0;
          }
          lVar3 = plVar5[0x17];
          plVar4[0x18] = plVar5[0x18];
          plVar4[0x17] = lVar3;
          plVar4[0x19] = plVar5[0x19];
          plVar5[0x17] = 0;
          plVar5[0x18] = 0;
          plVar5[0x19] = 0;
          plVar9 = plVar4 + 0x1a;
          if (*plVar9 != 0) {
            func_0x000109265084(plVar9);
            __ZdlPv(*plVar9);
            *plVar9 = 0;
            plVar4[0x1b] = 0;
            plVar4[0x1c] = 0;
          }
          lVar3 = plVar5[0x1a];
          plVar4[0x1b] = plVar5[0x1b];
          plVar4[0x1a] = lVar3;
          plVar4[0x1c] = plVar5[0x1c];
          plVar5[0x1a] = 0;
          plVar5[0x1b] = 0;
          plVar5[0x1c] = 0;
          plVar9 = plVar4 + 0x1d;
          if (*plVar9 != 0) {
            func_0x0001092650d0(plVar9);
            __ZdlPv(*plVar9);
            *plVar9 = 0;
            plVar4[0x1e] = 0;
            plVar4[0x1f] = 0;
          }
          lVar3 = plVar5[0x1d];
          plVar4[0x1e] = plVar5[0x1e];
          plVar4[0x1d] = lVar3;
          plVar4[0x1f] = plVar5[0x1f];
          plVar5[0x1d] = 0;
          plVar5[0x1e] = 0;
          plVar5[0x1f] = 0;
          *(int *)(plVar4 + 0x20) = (int)plVar5[0x20];
          return plVar4;
        }
        if (param_2 != (long *)0x0) {
          if (*(uint *)(param_2 + 0x20) == uVar1) {
            return plVar4;
          }
          *(uint *)(param_2 + 0x20) = uVar1;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__glUseProgram_11034b8d0)();
        return plVar4;
      }
    }
    if (param_3 == 0x8dc6) {
      UNRECOVERED_JUMPTABLE = (code *)param_1[0xf2];
    }
    else if (param_3 == 0x8dc7) {
      uVar1 = iVar8 * 3;
      if ((ulong)(param_6[1] - *param_6) < (ulong)((long)(int)uVar1 << 2)) {
        func_0x0001074287b0(param_6,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2
                           );
      }
      if (0 < iVar8) {
        lVar3 = 0;
        do {
          lVar6 = *param_6;
          uVar7 = *param_4;
          *(undefined4 *)((undefined8 *)(lVar6 + lVar3) + 1) = *(undefined4 *)(param_4 + 1);
          *(undefined8 *)(lVar6 + lVar3) = uVar7;
          lVar3 = lVar3 + 0xc;
          param_4 = param_4 + 2;
        } while ((param_5 & 0xffffffff) * 0xc - lVar3 != 0);
      }
      param_4 = (undefined8 *)*param_6;
      UNRECOVERED_JUMPTABLE = (code *)param_1[0xf3];
    }
    else {
      if (param_3 != 0x8dc8) goto LAB_10925eb50;
      UNRECOVERED_JUMPTABLE = (code *)param_1[0xf4];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010925eb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_5,param_4);
  return param_2;
}



/* Entry: 10925eb5c; end: 10925ebef;  */

long * FUN_10925eb5c(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 100) & 1) == 0) {
    FUN_10925e060(param_1);
    (**(code **)*param_1)(param_1);
    *(undefined1 *)(param_1 + 100) = 1;
  }
  lVar2 = param_1[3];
  plVar4 = param_2;
  FUN_109264b14();
  uVar1 = *(uint *)(lVar2 + 0x10);
  plVar3 = (long *)(ulong)uVar1;
  if (uVar1 != 0) {
    if (param_2 != (long *)0x0) {
      if (*(uint *)(param_2 + 0x20) == uVar1) {
        return plVar3;
      }
      *(uint *)(param_2 + 0x20) = uVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glUseProgram_11034b8d0)();
    return plVar3;
  }
  plVar3 = (long *)&UNK_10f561883;
  FUN_109243bf8();
  if (*plVar3 != 0) {
    func_0x000109264f54(plVar3);
    __ZdlPv(*plVar3);
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
  }
  lVar2 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar2;
  plVar3[2] = plVar4[2];
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar5 = plVar3 + 3;
  if (*plVar5 != 0) {
    func_0x000109264fa0(plVar5);
    __ZdlPv(*plVar5);
    *plVar5 = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  lVar2 = plVar4[3];
  plVar3[4] = plVar4[4];
  plVar3[3] = lVar2;
  plVar3[5] = plVar4[5];
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar5 = plVar3 + 6;
  if (*plVar5 != 0) {
    func_0x000109264fec(plVar5);
    __ZdlPv(*plVar5);
    *plVar5 = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
  }
  lVar2 = plVar4[6];
  plVar3[7] = plVar4[7];
  plVar3[6] = lVar2;
  plVar3[8] = plVar4[8];
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  FUN_109241b08(plVar3 + 9);
  lVar2 = plVar4[9];
  plVar3[10] = plVar4[10];
  plVar3[9] = lVar2;
  plVar3[0xb] = plVar4[0xb];
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar5 = plVar3 + 0xc;
  if (*plVar5 != 0) {
    func_0x000109265038(plVar5);
    __ZdlPv(*plVar5);
    *plVar5 = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
  }
  lVar2 = plVar4[0xc];
  plVar3[0xd] = plVar4[0xd];
  plVar3[0xc] = lVar2;
  plVar3[0xe] = plVar4[0xe];
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  if (*(char *)((long)plVar3 + 0x8f) < '\0') {
    __ZdlPv(plVar3[0xf]);
  }
  lVar6 = plVar4[0x10];
  lVar2 = plVar4[0xf];
  plVar3[0x11] = plVar4[0x11];
  plVar3[0x10] = lVar6;
  plVar3[0xf] = lVar2;
  *(undefined1 *)((long)plVar4 + 0x8f) = 0;
  *(undefined1 *)(plVar4 + 0xf) = 0;
  lVar2 = plVar4[0x12];
  *(int *)(plVar3 + 0x13) = (int)plVar4[0x13];
  plVar3[0x12] = lVar2;
  FUN_109241da0(plVar3 + 0x14);
  lVar2 = plVar4[0x14];
  plVar3[0x15] = plVar4[0x15];
  plVar3[0x14] = lVar2;
  plVar3[0x16] = plVar4[0x16];
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  plVar4[0x16] = 0;
  lVar2 = plVar3[0x17];
  if (lVar2 != 0) {
    plVar3[0x18] = lVar2;
    __ZdlPv();
    plVar3[0x17] = 0;
    plVar3[0x18] = 0;
    plVar3[0x19] = 0;
  }
  lVar2 = plVar4[0x17];
  plVar3[0x18] = plVar4[0x18];
  plVar3[0x17] = lVar2;
  plVar3[0x19] = plVar4[0x19];
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  plVar5 = plVar3 + 0x1a;
  if (*plVar5 != 0) {
    func_0x000109265084(plVar5);
    __ZdlPv(*plVar5);
    *plVar5 = 0;
    plVar3[0x1b] = 0;
    plVar3[0x1c] = 0;
  }
  lVar2 = plVar4[0x1a];
  plVar3[0x1b] = plVar4[0x1b];
  plVar3[0x1a] = lVar2;
  plVar3[0x1c] = plVar4[0x1c];
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0;
  plVar5 = plVar3 + 0x1d;
  if (*plVar5 != 0) {
    func_0x0001092650d0(plVar5);
    __ZdlPv(*plVar5);
    *plVar5 = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
  }
  lVar2 = plVar4[0x1d];
  plVar3[0x1e] = plVar4[0x1e];
  plVar3[0x1d] = lVar2;
  plVar3[0x1f] = plVar4[0x1f];
  plVar4[0x1d] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  *(int *)(plVar3 + 0x20) = (int)plVar4[0x20];
  return plVar3;
}



/* Entry: 10925ebf0; end: 10925ebfb;  */

void FUN_10925ebf0(void)

{
  return;
}



/* Entry: 10925ebfc; end: 10925ec37;  */

undefined1 * FUN_10925ebfc(long *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  FUN_10925ec38(lVar2);
  func_0x00010925ecf4(lVar2 + 0x208,param_2 + 0x208);
  puVar1 = (undefined1 *)(lVar2 + 0x290);
  *puVar1 = 0;
  *(undefined1 *)(lVar2 + 0x2d8) = 0;
  if (*(char *)(param_2 + 0x2d8) == '\x01') {
    FUN_10925eeb8(puVar1);
    *(undefined1 *)(lVar2 + 0x2d8) = 1;
  }
  return puVar1;
}



/* Entry: 10925ec38; end: 10925ed5f;  */

undefined8 * FUN_10925ec38(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
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
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    puVar1[5] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[7] = 0;
    puVar1[6] = 0xffffffff;
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
    puVar1[3] = 0;
    puVar1[2] = 0xffffffff;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x200);
  param_1[0x40] = 0;
  if (*(long *)(param_2 + 0x200) != 0) {
    lVar2 = *(long *)(param_2 + 0x200) << 4;
    do {
      FUN_10925ed60(param_1,param_2);
      param_2 = param_2 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return param_1;
}



/* Entry: 10925ed60; end: 10925eddf;  */

undefined1 * FUN_10925ed60(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (*(ulong *)(param_1 + 0x200) < 0x20) {
    uVar8 = *param_2;
    puVar5 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x200) * 0x10);
    puVar5[1] = param_2[1];
    *puVar5 = uVar8;
    lVar7 = *(long *)(param_1 + 0x200);
    *(long *)(param_1 + 0x200) = lVar7 + 1;
    return (undefined1 *)(param_1 + lVar7 * 0x10);
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar7 = lVar2;
  puVar5 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar2);
  __Unwind_Resume();
  if (*(ulong *)(lVar7 + 0x80) < 8) {
    uVar8 = *puVar5;
    puVar1 = (undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 0x10);
    puVar1[1] = puVar5[1];
    *puVar1 = uVar8;
    lVar2 = *(long *)(lVar7 + 0x80);
    *(long *)(lVar7 + 0x80) = lVar2 + 1;
    return (undefined1 *)(lVar7 + lVar2 * 0x10);
  }
  puVar3 = (undefined1 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar4 = puVar3;
  puVar6 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar3,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar3);
  __Unwind_Resume();
  *puVar4 = 0;
  puVar4[0x48] = 0;
  if (puVar6[0x48] == '\x01') {
    FUN_10925eeb8(puVar4);
    puVar4[0x48] = 1;
  }
  return puVar4;
}



/* Entry: 10925ede0; end: 10925ee5f;  */

undefined1 * FUN_10925ede0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(ulong *)(param_1 + 0x80) < 8) {
    uVar6 = *param_2;
    puVar1 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x80) * 0x10);
    puVar1[1] = param_2[1];
    *puVar1 = uVar6;
    lVar5 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar5 + 1;
    return (undefined1 *)(param_1 + lVar5 * 0x10);
  }
  puVar2 = (undefined1 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar3 = puVar2;
  puVar4 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar2);
  __Unwind_Resume();
  *puVar3 = 0;
  puVar3[0x48] = 0;
  if (puVar4[0x48] == '\x01') {
    FUN_10925eeb8(puVar3);
    puVar3[0x48] = 1;
  }
  return puVar3;
}



/* Entry: 10925ee60; end: 10925eeb7;  */

undefined1 * FUN_10925ee60(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x48] = 0;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_10925eeb8(param_1);
    param_1[0x48] = 1;
  }
  return param_1;
}



/* Entry: 10925eeb8; end: 10925ef6b;  */

undefined8 * FUN_10925eeb8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109249f9c();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10924a020();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_10925ef6c();
  return param_1;
}



/* Entry: 10925ef6c; end: 10925efef;  */

void FUN_10925ef6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10925eff0(param_1,param_4);
    lVar1 = param_1;
    FUN_10925f028(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10925eff0; end: 10925f027;  */

long * FUN_10925eff0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = param_1;
    FUN_109242b2c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 4);
    return plVar1;
  }
  FUN_109242b18();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 4) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    *(int *)(param_4 + 3) = (int)param_2[3];
    param_4 = plStack_58 + 4;
  }
  uStack_68 = 1;
  FUN_109242c18(&plStack_80);
  return param_4;
}



/* Entry: 10925f028; end: 10925f0ef;  */

undefined8 *
FUN_10925f028(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_109242c18(&uStack_60);
  return param_4;
}



/* Entry: 10925f0f0; end: 10925f12f;  */

void FUN_10925f0f0(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10925f130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10925f130; end: 10925f17b;  */

void FUN_10925f130(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10925f17c; end: 10925f1bb;  */

void FUN_10925f17c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10925f1bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10925f1bc; end: 10925f207;  */

/* WARNING: Removing unreachable block (ram,0x00010925f1e4) */

void FUN_10925f1bc(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x30) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10925f208; end: 10925f263;  */

long FUN_10925f208(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10925f264();
  FUN_10925f32c(lVar1 + 0x208,param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  if (*(char *)(param_2 + 0x2d8) == '\x01') {
    FUN_10925f4a4(param_1 + 0x290,param_2 + 0x290);
    *(undefined1 *)(param_1 + 0x2d8) = 1;
  }
  return param_1;
}



/* Entry: 10925f264; end: 10925f32b;  */

undefined8 * FUN_10925f264(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
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
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    puVar1[5] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[7] = 0;
    puVar1[6] = 0xffffffff;
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
    puVar1[3] = 0;
    puVar1[2] = 0xffffffff;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x200);
  param_1[0x40] = 0;
  if (*(long *)(param_2 + 0x200) != 0) {
    lVar3 = *(long *)(param_2 + 0x200) << 4;
    lVar2 = param_2;
    do {
      FUN_10925f3a4(param_1,lVar2);
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined8 *)(param_2 + 0x200) = 0;
  return param_1;
}



/* Entry: 10925f32c; end: 10925f3a3;  */

undefined8 * FUN_10925f32c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  param_1[5] = 0xffffffff;
  param_1[4] = 0x100000000;
  param_1[7] = 0xffffffff;
  param_1[6] = 0x100000000;
  param_1[1] = 0xffffffff;
  *param_1 = 0x100000000;
  param_1[3] = 0xffffffff;
  param_1[2] = 0x100000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xc] = 0x100000000;
  param_1[0xf] = 0xffffffff;
  param_1[0xe] = 0x100000000;
  param_1[9] = 0xffffffff;
  param_1[8] = 0x100000000;
  param_1[0xb] = 0xffffffff;
  param_1[10] = 0x100000000;
  param_1[0x10] = 0;
  if (*(long *)(param_2 + 0x80) != 0) {
    lVar2 = *(long *)(param_2 + 0x80) << 4;
    lVar1 = param_2;
    do {
      FUN_10925f424(param_1,lVar1);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_2 + 0x80) = 0;
  return param_1;
}



/* Entry: 10925f3a4; end: 10925f423;  */

undefined8 * FUN_10925f3a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(ulong *)(param_1 + 0x200) < 0x20) {
    uVar6 = *param_2;
    puVar3 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x200) * 0x10);
    puVar3[1] = param_2[1];
    *puVar3 = uVar6;
    lVar5 = *(long *)(param_1 + 0x200);
    *(long *)(param_1 + 0x200) = lVar5 + 1;
    return (undefined8 *)(param_1 + lVar5 * 0x10);
  }
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar5 = lVar1;
  puVar3 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  if (*(ulong *)(lVar5 + 0x80) < 8) {
    uVar6 = *puVar3;
    puVar4 = (undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 0x10);
    puVar4[1] = puVar3[1];
    *puVar4 = uVar6;
    lVar1 = *(long *)(lVar5 + 0x80);
    *(long *)(lVar5 + 0x80) = lVar1 + 1;
    return (undefined8 *)(lVar5 + lVar1 * 0x10);
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar3 = puVar2;
  puVar4 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar2);
  __Unwind_Resume();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar6 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar6;
  puVar3[2] = puVar4[2];
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  uVar6 = puVar4[3];
  puVar3[4] = puVar4[4];
  puVar3[3] = uVar6;
  puVar3[5] = puVar4[5];
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  uVar6 = puVar4[6];
  puVar3[7] = puVar4[7];
  puVar3[6] = uVar6;
  puVar3[8] = puVar4[8];
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  return puVar3;
}



/* Entry: 10925f424; end: 10925f4a3;  */

undefined8 * FUN_10925f424(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(ulong *)(param_1 + 0x80) < 8) {
    uVar5 = *param_2;
    puVar2 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x80) * 0x10);
    puVar2[1] = param_2[1];
    *puVar2 = uVar5;
    lVar4 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar4 + 1;
    return (undefined8 *)(param_1 + lVar4 * 0x10);
  }
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar2 = puVar1;
  puVar3 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar5 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar5;
  puVar2[2] = puVar3[2];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  uVar5 = puVar3[3];
  puVar2[4] = puVar3[4];
  puVar2[3] = uVar5;
  puVar2[5] = puVar3[5];
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  uVar5 = puVar3[6];
  puVar2[7] = puVar3[7];
  puVar2[6] = uVar5;
  puVar2[8] = puVar3[8];
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  return puVar2;
}



/* Entry: 10925f4a4; end: 10925f507;  */

void FUN_10925f4a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



/* Entry: 10925f508; end: 10925f51b;  */

undefined1  [16] FUN_10925f508(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f561686;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3c == 0) {
    lVar2 = param_2 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    FUN_10922d7c8();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10925f51c; end: 10925f59b;  */

undefined1  [16] FUN_10925f51c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = param_2 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    FUN_10922d7c8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10925f59c; end: 10925f5f7;  */

void FUN_10925f59c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x18) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
        (*(code *)(&PTR_FUN_110ae6c90)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_110ae6ca0)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}


