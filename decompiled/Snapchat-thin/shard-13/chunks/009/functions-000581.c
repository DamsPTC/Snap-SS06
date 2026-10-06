/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae35284; end: 10ae352cb;  */

void FUN_10ae35284(void)

{
  uRam00000001137ed5f0 = 0x20000003c2;
  uRam00000001137ed5f8 = 0;
  uRam00000001137ed600 = 0x10ae3ea54;
  uRam00000001137ed608 = 0x10ae3ea94;
  uRam00000001137ed610 = 0x10ae3ea9c;
  uRam00000001137ed618 = 0xd800000080;
  return;
}



/* Entry: 10ae352cc; end: 10ae352ff;  */

undefined8 FUN_10ae352cc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x113310b68;
  _pthread_once(0x113310b68,FUN_10ae35300);
  if ((int)uVar1 == 0) {
    return 0x113836f20;
  }
  _abort();
  uRam0000000113836f20 = 0x2400000072;
  uRam0000000113836f28 = 0;
  uRam0000000113836f30 = 0x10ae3eaac;
  pcRam0000000113836f38 = FUN_10ae3eaf4;
  pcRam0000000113836f40 = FUN_10ae3eb34;
  uRam0000000113836f48 = 0xbc00000040;
  return uVar1;
}



/* Entry: 10ae35300; end: 10ae3534f;  */

void FUN_10ae35300(void)

{
  uRam0000000113836f20 = 0x2400000072;
  uRam0000000113836f28 = 0;
  uRam0000000113836f30 = 0x10ae3eaac;
  pcRam0000000113836f38 = FUN_10ae3eaf4;
  pcRam0000000113836f40 = FUN_10ae3eb34;
  uRam0000000113836f48 = 0xbc00000040;
  return;
}



/* Entry: 10ae35350; end: 10ae35413;  */

void FUN_10ae35350(long *param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined1 auStack_88 [72];
  
  iVar2 = (int)param_1 + 0x38;
  func_0x000107c2b32c();
  uVar1 = (ulong)(iVar2 + 7U >> 3);
  if (param_4 < uVar1) {
    func_0x000107c2b29c(0xf,0,100,&UNK_10f6c6f00,0x4c0);
  }
  else {
    plVar3 = param_1;
    (**(code **)(*param_1 + 0x18))(param_1,param_5,auStack_88,0);
    if ((int)plVar3 != 0) {
      (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,auStack_88);
      *param_3 = uVar1;
    }
  }
  return;
}



/* Entry: 10ae35414; end: 10ae355c3;  */

undefined8 * FUN_10ae35414(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  long lStack_148;
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
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &uStack_110;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_108 = 0x629a292a367cd507;
  uStack_110 = 0xcbbb9d5dc1059ed8;
  uStack_f8 = 0x152fecd8f70e5939;
  uStack_100 = 0x9159015a3070dd17;
  uStack_e8 = 0x8eb44a8768581511;
  uStack_f0 = 0x67332667ffc00b31;
  uStack_d8 = 0x47b5481dbefa4fa4;
  uStack_e0 = 0xdb0c2e0d64f98fa7;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_40 = 0x3000000000;
  FUN_10ae35d48(&uStack_110,param_1);
  puVar4 = param_3;
  FUN_10ae3c914(param_3,&uStack_110);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_3;
  }
  ___stack_chk_fail();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_218 = 0xbb67ae8584caa73b;
  uStack_220 = 0x6a09e667f3bcc908;
  uStack_208 = 0xa54ff53a5f1d36f1;
  uStack_210 = 0x3c6ef372fe94f82b;
  uStack_1f8 = 0x9b05688c2b3e6c1f;
  uStack_200 = 0x510e527fade682d1;
  uStack_1e8 = 0x5be0cd19137e2179;
  uStack_1f0 = 0x1f83d9abfb41bd6b;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_150 = 0x4000000000;
  FUN_10ae35d48(&uStack_220,puVar4,puVar1);
  FUN_10ae3c914(param_2,&uStack_220);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_150 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return param_2;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)0x18;
  _malloc();
  puVar4 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x10;
    puVar2 = puVar1;
    func_0x000107c2b318();
    puVar4 = puVar1 + 1;
    *puVar4 = puVar2;
    puVar3 = puVar2;
    func_0x000107c2b318();
    puVar1[2] = puVar3;
    if ((puVar3 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0x0)) {
      func_0x00010ae35620(puVar4);
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}



/* Entry: 10ae355c4; end: 10ae35657;  */

undefined8 * FUN_10ae355c4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)0x18;
  _malloc();
  puVar4 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x10;
    puVar2 = puVar1;
    func_0x000107c2b318();
    puVar4 = puVar1 + 1;
    *puVar4 = puVar2;
    puVar3 = puVar2;
    func_0x000107c2b318();
    puVar1[2] = puVar3;
    if ((puVar3 == (undefined8 *)0x0) || (puVar2 == (undefined8 *)0x0)) {
      func_0x00010ae35620(puVar4);
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}



/* Entry: 10ae35658; end: 10ae35877;  */

undefined8 FUN_10ae35658(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined1 auStack_2c8 [216];
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  if (param_3 != (long *)0x0) {
    plVar4 = (long *)*param_4;
    lVar1 = param_4[1];
    if (plVar4 != (long *)0x0 && lVar1 != 0) {
      iVar2 = (int)((long *)*param_3)[1];
      lVar7 = (long)iVar2;
      if (iVar2 != 0) {
        uVar9 = 0;
        puVar10 = *(ulong **)*param_3;
        do {
          uVar9 = *puVar10 | uVar9;
          lVar7 = lVar7 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar7 != 0);
        if ((uVar9 != 0) &&
           (plVar3 = plVar4, func_0x000107c2b440(plVar4,auStack_88), (int)plVar3 != 0)) {
          iVar2 = (int)((long *)param_3[1])[1];
          lVar7 = (long)iVar2;
          if (iVar2 != 0) {
            uVar9 = 0;
            puVar10 = *(ulong **)param_3[1];
            do {
              uVar9 = *puVar10 | uVar9;
              lVar7 = lVar7 + -1;
              puVar10 = puVar10 + 1;
            } while (lVar7 != 0);
            if ((uVar9 != 0) &&
               (plVar3 = plVar4, func_0x000107c2b440(plVar4,auStack_d0), (int)plVar3 != 0)) {
              plVar3 = plVar4;
              (**(code **)(*plVar4 + 0xa8))(plVar4,auStack_1a8,auStack_d0);
              if ((int)plVar3 == 0) {
                uVar5 = 0x44;
                uVar6 = 0xae;
              }
              else {
                FUN_10ae35880(plVar4,auStack_1f0,param_1,param_2);
                func_0x000107c2b38c(auStack_118,auStack_1f0,auStack_1a8,(long)(int)plVar4[3],
                                    plVar4[6]);
                func_0x000107c2b38c(auStack_160,auStack_88,auStack_1a8,(long)(int)plVar4[3],
                                    plVar4[6]);
                pcVar8 = *(code **)(*plVar4 + 0x50);
                if (pcVar8 == (code *)0x0) {
                  plVar3 = plVar4;
                  (**(code **)(*plVar4 + 0x58))
                            (plVar4,auStack_2c8,auStack_118,lVar1 + 8,auStack_160,1);
                  if ((int)plVar3 == 0) {
                    uVar5 = 0xf;
                    uVar6 = 0xbd;
                    goto LAB_10ae357bc;
                  }
                }
                else {
                  (*pcVar8)(plVar4,auStack_2c8,auStack_118,lVar1 + 8,auStack_160);
                }
                (**(code **)(*plVar4 + 0xb0))(plVar4,auStack_2c8,auStack_88);
                if ((int)plVar4 != 0) {
                  return 1;
                }
                uVar5 = 100;
                uVar6 = 0xc2;
              }
              goto LAB_10ae357bc;
            }
          }
        }
      }
      uVar5 = 100;
      uVar6 = 0xa8;
      goto LAB_10ae357bc;
    }
  }
  uVar5 = 0x65;
  uVar6 = 0x9f;
LAB_10ae357bc:
  func_0x000107c2b29c(0x1a,0,uVar5,&UNK_10f6c6e81,uVar6);
  return 0;
}



/* Entry: 10ae35878; end: 10ae3587f;  */

undefined8 FUN_10ae35878(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10ae35880; end: 10ae3596b;  */

undefined8 * FUN_10ae35880(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 auStack_348 [216];
  undefined1 auStack_270 [72];
  undefined1 auStack_228 [72];
  undefined1 auStack_1e0 [72];
  undefined1 auStack_198 [72];
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [72];
  long alStack_80 [9];
  long lStack_38;
  
  plVar3 = alStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = param_1 + 0x10;
  func_0x000107c2b32c();
  uVar11 = (uVar10 & 0xffffffff) + 7 >> 3;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  if (param_4 <= uVar11) {
    uVar11 = param_4;
  }
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[8] = 0;
  if (uVar11 != 0) {
    puVar13 = param_2;
    uVar14 = uVar11;
    do {
      *(undefined1 *)puVar13 = *(undefined1 *)(param_3 + -1 + uVar14);
      uVar14 = uVar14 - 1;
      puVar13 = (undefined8 *)((long)puVar13 + 1);
    } while (uVar14 != 0);
  }
  if ((uVar10 & 0xffffffff) < uVar11 << 3) {
    func_0x000107c2b3c8(param_2,param_2,8 - ((uint)uVar10 & 7),(long)*(int *)(param_1 + 0x18));
  }
  plVar6 = *(long **)(param_1 + 0x10);
  uVar5 = 0;
  func_0x000107c2b368(param_2,0,plVar6,alStack_80,(long)*(int *)(param_1 + 0x18));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  if (plVar6 != (long *)0x0) {
    plVar4 = (long *)*plVar3;
    lVar1 = plVar3[1];
    if (plVar4 != (long *)0x0 && lVar1 != 0) {
      iVar2 = (int)((long *)*plVar6)[1];
      lVar8 = (long)iVar2;
      if (iVar2 != 0) {
        uVar10 = 0;
        puVar12 = *(ulong **)*plVar6;
        do {
          uVar10 = *puVar12 | uVar10;
          lVar8 = lVar8 + -1;
          puVar12 = puVar12 + 1;
        } while (lVar8 != 0);
        if ((uVar10 != 0) &&
           (plVar3 = plVar4, func_0x000107c2b440(plVar4,auStack_108), (int)plVar3 != 0)) {
          iVar2 = (int)((long *)plVar6[1])[1];
          lVar8 = (long)iVar2;
          if (iVar2 != 0) {
            uVar10 = 0;
            puVar12 = *(ulong **)plVar6[1];
            do {
              uVar10 = *puVar12 | uVar10;
              lVar8 = lVar8 + -1;
              puVar12 = puVar12 + 1;
            } while (lVar8 != 0);
            if ((uVar10 != 0) &&
               (plVar3 = plVar4, func_0x000107c2b440(plVar4,auStack_150), (int)plVar3 != 0)) {
              plVar3 = plVar4;
              (**(code **)(*plVar4 + 0xa8))(plVar4,auStack_228,auStack_150);
              if ((int)plVar3 == 0) {
                uVar5 = 0x44;
                uVar7 = 0xae;
              }
              else {
                FUN_10ae35880(plVar4,auStack_270,param_2,uVar5);
                func_0x000107c2b38c(auStack_198,auStack_270,auStack_228,(long)(int)plVar4[3],
                                    plVar4[6]);
                func_0x000107c2b38c(auStack_1e0,auStack_108,auStack_228,(long)(int)plVar4[3],
                                    plVar4[6]);
                pcVar9 = *(code **)(*plVar4 + 0x50);
                if (pcVar9 == (code *)0x0) {
                  plVar3 = plVar4;
                  (**(code **)(*plVar4 + 0x58))
                            (plVar4,auStack_348,auStack_198,lVar1 + 8,auStack_1e0,1);
                  if ((int)plVar3 == 0) {
                    uVar5 = 0xf;
                    uVar7 = 0xbd;
                    goto LAB_10ae357bc;
                  }
                }
                else {
                  (*pcVar9)(plVar4,auStack_348,auStack_198,lVar1 + 8,auStack_1e0);
                }
                (**(code **)(*plVar4 + 0xb0))(plVar4,auStack_348,auStack_108);
                if ((int)plVar4 != 0) {
                  return (undefined8 *)0x1;
                }
                uVar5 = 100;
                uVar7 = 0xc2;
              }
              goto LAB_10ae357bc;
            }
          }
        }
      }
      uVar5 = 100;
      uVar7 = 0xa8;
      goto LAB_10ae357bc;
    }
  }
  uVar5 = 0x65;
  uVar7 = 0x9f;
LAB_10ae357bc:
  func_0x000107c2b29c(0x1a,0,uVar5,&UNK_10f6c6e81,uVar7);
  return (undefined8 *)0x0;
}



/* Entry: 10ae3596c; end: 10ae3596f;  */

undefined8 FUN_10ae3596c(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined1 auStack_2c8 [216];
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  if (param_3 != (long *)0x0) {
    plVar4 = (long *)*param_4;
    lVar1 = param_4[1];
    if (plVar4 != (long *)0x0 && lVar1 != 0) {
      iVar2 = (int)((long *)*param_3)[1];
      lVar7 = (long)iVar2;
      if (iVar2 != 0) {
        uVar9 = 0;
        puVar10 = *(ulong **)*param_3;
        do {
          uVar9 = *puVar10 | uVar9;
          lVar7 = lVar7 + -1;
          puVar10 = puVar10 + 1;
        } while (lVar7 != 0);
        if ((uVar9 != 0) &&
           (plVar3 = plVar4, func_0x000107c2b440(plVar4,auStack_88), (int)plVar3 != 0)) {
          iVar2 = (int)((long *)param_3[1])[1];
          lVar7 = (long)iVar2;
          if (iVar2 != 0) {
            uVar9 = 0;
            puVar10 = *(ulong **)param_3[1];
            do {
              uVar9 = *puVar10 | uVar9;
              lVar7 = lVar7 + -1;
              puVar10 = puVar10 + 1;
            } while (lVar7 != 0);
            if ((uVar9 != 0) &&
               (plVar3 = plVar4, func_0x000107c2b440(plVar4,auStack_d0), (int)plVar3 != 0)) {
              plVar3 = plVar4;
              (**(code **)(*plVar4 + 0xa8))(plVar4,auStack_1a8,auStack_d0);
              if ((int)plVar3 == 0) {
                uVar5 = 0x44;
                uVar6 = 0xae;
              }
              else {
                FUN_10ae35880(plVar4,auStack_1f0,param_1,param_2);
                func_0x000107c2b38c(auStack_118,auStack_1f0,auStack_1a8,(long)(int)plVar4[3],
                                    plVar4[6]);
                func_0x000107c2b38c(auStack_160,auStack_88,auStack_1a8,(long)(int)plVar4[3],
                                    plVar4[6]);
                pcVar8 = *(code **)(*plVar4 + 0x50);
                if (pcVar8 == (code *)0x0) {
                  plVar3 = plVar4;
                  (**(code **)(*plVar4 + 0x58))
                            (plVar4,auStack_2c8,auStack_118,lVar1 + 8,auStack_160,1);
                  if ((int)plVar3 == 0) {
                    uVar5 = 0xf;
                    uVar6 = 0xbd;
                    goto LAB_10ae357bc;
                  }
                }
                else {
                  (*pcVar8)(plVar4,auStack_2c8,auStack_118,lVar1 + 8,auStack_160);
                }
                (**(code **)(*plVar4 + 0xb0))(plVar4,auStack_2c8,auStack_88);
                if ((int)plVar4 != 0) {
                  return 1;
                }
                uVar5 = 100;
                uVar6 = 0xc2;
              }
              goto LAB_10ae357bc;
            }
          }
        }
      }
      uVar5 = 100;
      uVar6 = 0xa8;
      goto LAB_10ae357bc;
    }
  }
  uVar5 = 0x65;
  uVar6 = 0x9f;
LAB_10ae357bc:
  func_0x000107c2b29c(0x1a,0,uVar5,&UNK_10f6c6e81,uVar6);
  return 0;
}



/* Entry: 10ae35970; end: 10ae35bd3;  */

ulong * FUN_10ae35970(ulong *param_1,undefined4 *param_2,undefined8 param_3,ulong *param_4,
                     undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  int iStack_3fc;
  undefined1 auStack_3f8 [72];
  undefined1 auStack_3b0 [64];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_2a0;
  long lStack_298;
  ulong auStack_250 [9];
  ulong auStack_208 [9];
  ulong auStack_1c0 [9];
  ulong auStack_178 [27];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = auStack_250;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_2 = 0;
  uVar1 = (int)param_1 + 0x10;
  func_0x000107c2b32c();
  if (uVar1 < 0xa0) {
    puVar3 = (ulong *)0x1a;
    puVar6 = (ulong *)0x0;
    puVar7 = (ulong *)0x70;
    func_0x000107c2b29c();
LAB_10ae35b84:
    puVar5 = puVar7;
    puVar13 = (ulong *)0x0;
  }
  else {
    puVar6 = auStack_178;
    puVar3 = param_1;
    puVar7 = param_4;
    func_0x000107c2b46c();
    if ((int)puVar3 == 0) goto LAB_10ae35b84;
    puVar6 = auStack_1c0;
    puVar7 = auStack_178;
    puVar3 = param_1;
    FUN_10ae3627c();
    if ((int)puVar3 == 0) goto LAB_10ae35b84;
    if ((int)(uint)param_1[3] < 1) {
LAB_10ae35bc0:
      puVar5 = puVar7;
      puVar13 = (ulong *)0x0;
      *param_2 = 1;
    }
    else {
      lVar11 = 0;
      uVar14 = 0;
      do {
        uVar14 = *(ulong *)((long)auStack_1c0 + lVar11) | uVar14;
        lVar11 = lVar11 + 8;
      } while ((ulong)(uint)param_1[3] * 8 - lVar11 != 0);
      if (uVar14 == 0) goto LAB_10ae35bc0;
      func_0x000107c2b38c(auStack_208,auStack_1c0,*(undefined8 *)param_1[6]);
      func_0x000107c2b38c(auStack_208,param_3,auStack_208,(long)(int)param_1[3],param_1[6]);
      FUN_10ae35880(param_1,auStack_250,param_5,param_6);
      uVar8 = param_1[2];
      uVar14 = param_1[3];
      puVar7 = auStack_208;
      func_0x000107c2b300(puVar7,auStack_208,auStack_250,(long)(int)uVar14);
      func_0x000107c2b368(auStack_208,puVar7,uVar8,&uStack_a0,(long)(int)uVar14);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = 0;
      (**(code **)(*param_1 + 0xa0))(param_1,auStack_250,param_4);
      func_0x000107c2b388(auStack_250,(long)(int)param_1[3],auStack_250,(long)(int)param_1[3],
                          param_1[6]);
      puVar13 = auStack_208;
      puVar6 = auStack_208;
      func_0x000107c2b38c();
      puVar3 = puVar13;
      puVar7 = puVar5;
      if ((int)(uint)param_1[3] < 1) goto LAB_10ae35bc0;
      lVar11 = 0;
      uVar14 = 0;
      do {
        uVar14 = *(ulong *)((long)auStack_208 + lVar11) | uVar14;
        lVar11 = lVar11 + 8;
      } while ((ulong)(uint)param_1[3] * 8 - lVar11 != 0);
      if (uVar14 == 0) goto LAB_10ae35bc0;
      FUN_10ae355c4();
      if (puVar13 == (ulong *)0x0) {
LAB_10ae35b7c:
        func_0x00010ae35620();
        puVar3 = puVar13;
        puVar7 = puVar5;
        goto LAB_10ae35b84;
      }
      iVar2 = (int)*puVar13;
      puVar5 = (ulong *)(long)(int)param_1[3];
      puVar6 = auStack_1c0;
      FUN_10ae2e228();
      if (iVar2 == 0) goto LAB_10ae35b7c;
      puVar3 = (ulong *)puVar13[1];
      puVar5 = (ulong *)(long)(int)param_1[3];
      puVar6 = auStack_208;
      FUN_10ae2e228();
      if ((int)puVar3 == 0) goto LAB_10ae35b7c;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar13;
  }
  ___stack_chk_fail();
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((puVar5[5] == 0) || (*(long *)(puVar5[5] + 0x28) == 0)) {
    puVar7 = (ulong *)*puVar5;
    if ((puVar7 == (ulong *)0x0) || (uVar14 = puVar5[2], uVar14 == 0)) {
      uVar8 = 0x43;
      uVar9 = 0x13f;
      goto LAB_10ae35d0c;
    }
    uStack_368 = 0xbb67ae8584caa73b;
    uStack_370 = 0x6a09e667f3bcc908;
    uStack_358 = 0xa54ff53a5f1d36f1;
    uStack_360 = 0x3c6ef372fe94f82b;
    uStack_348 = 0x9b05688c2b3e6c1f;
    uStack_350 = 0x510e527fade682d1;
    uStack_338 = 0x5be0cd19137e2179;
    uStack_340 = 0x1f83d9abfb41bd6b;
    uStack_330 = 0;
    uStack_328 = 0;
    uStack_2a0 = 0x4000000000;
    FUN_10ae35d48(&uStack_370,uVar14 + 0x18,(long)(int)puVar7[3] << 3);
    FUN_10ae35d48(&uStack_370,puVar3,puVar6);
    FUN_10ae3c914(auStack_3b0,&uStack_370);
    do {
      uVar8 = puVar7[2];
      puVar4 = auStack_3f8;
      piVar12 = (int *)0x1;
      func_0x000107c2b3c0(puVar4,1,uVar8,(long)(int)puVar7[3],auStack_3b0);
      if ((int)puVar4 == 0) goto LAB_10ae35d10;
      piVar12 = &iStack_3fc;
      uVar8 = uVar14 + 0x18;
      puVar5 = puVar7;
      FUN_10ae35970(puVar7,piVar12,uVar8,auStack_3f8,puVar3,puVar6);
    } while ((puVar5 == (ulong *)0x0) && (iStack_3fc != 0));
  }
  else {
    uVar8 = 0x67;
    uVar9 = 0x139;
LAB_10ae35d0c:
    piVar12 = (int *)0x0;
    func_0x000107c2b29c(0x1a,0,uVar8,&UNK_10f6c6e81,uVar9);
LAB_10ae35d10:
    puVar5 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return puVar5;
  }
  ___stack_chk_fail();
  if (uVar8 == 0) {
    return (ulong *)0x1;
  }
  puVar7 = puVar5 + 10;
  uVar14 = puVar5[8];
  puVar5[8] = uVar14 + uVar8 * 8;
  puVar5[9] = puVar5[9] + (uVar8 >> 0x3d) + (ulong)CARRY8(uVar14,uVar8 * 8);
  uVar1 = (uint)puVar5[0x1a];
  uVar10 = (ulong)uVar1;
  uVar14 = uVar8;
  if (uVar1 != 0) {
    uVar15 = 0x80 - uVar10;
    uVar14 = uVar8 - uVar15;
    if (uVar8 < uVar15) {
      _memcpy((long)puVar7 + uVar10,piVar12,uVar8);
      uVar8 = (ulong)(uint)((int)puVar5[0x1a] + (int)uVar8);
      goto LAB_10ae35e24;
    }
    if (uVar1 != 0x80) {
      _memcpy((long)puVar7 + uVar10,piVar12,uVar15);
    }
    *(undefined4 *)(puVar5 + 0x1a) = 0;
    piVar12 = (int *)((long)piVar12 + uVar15);
    func_0x000107c2b598(puVar5,puVar7,1);
  }
  uVar8 = uVar14;
  if (0x7f < uVar14) {
    func_0x000107c2b598(puVar5,piVar12,uVar14 >> 7);
    uVar8 = uVar14 & 0x7f;
    piVar12 = (int *)((long)piVar12 + (uVar14 - uVar8));
  }
  if (uVar8 == 0) {
    return (ulong *)0x1;
  }
  _memcpy(puVar7,piVar12,uVar8);
LAB_10ae35e24:
  *(int *)(puVar5 + 0x1a) = (int)uVar8;
  return (ulong *)0x1;
}



/* Entry: 10ae35bd4; end: 10ae35d47;  */

long FUN_10ae35bd4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iStack_1ac;
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [64];
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
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_3[5] == 0) || (*(long *)(param_3[5] + 0x28) == 0)) {
    lVar8 = *param_3;
    if ((lVar8 == 0) || (lVar9 = param_3[2], lVar9 == 0)) {
      uVar4 = 0x43;
      uVar5 = 0x13f;
      goto LAB_10ae35d0c;
    }
    uStack_118 = 0xbb67ae8584caa73b;
    uStack_120 = 0x6a09e667f3bcc908;
    uStack_108 = 0xa54ff53a5f1d36f1;
    uStack_110 = 0x3c6ef372fe94f82b;
    uStack_f8 = 0x9b05688c2b3e6c1f;
    uStack_100 = 0x510e527fade682d1;
    uStack_e8 = 0x5be0cd19137e2179;
    uStack_f0 = 0x1f83d9abfb41bd6b;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_50 = 0x4000000000;
    FUN_10ae35d48(&uStack_120,lVar9 + 0x18,(long)*(int *)(lVar8 + 0x18) << 3);
    FUN_10ae35d48(&uStack_120,param_1,param_2);
    FUN_10ae3c914(auStack_160,&uStack_120);
    do {
      uVar4 = *(ulong *)(lVar8 + 0x10);
      puVar2 = auStack_1a8;
      piVar7 = (int *)0x1;
      func_0x000107c2b3c0(puVar2,1,uVar4,(long)*(int *)(lVar8 + 0x18),auStack_160);
      if ((int)puVar2 == 0) goto LAB_10ae35d10;
      piVar7 = &iStack_1ac;
      uVar4 = lVar9 + 0x18;
      lVar3 = lVar8;
      FUN_10ae35970(lVar8,piVar7,uVar4,auStack_1a8,param_1,param_2);
    } while ((lVar3 == 0) && (iStack_1ac != 0));
  }
  else {
    uVar4 = 0x67;
    uVar5 = 0x139;
LAB_10ae35d0c:
    piVar7 = (int *)0x0;
    func_0x000107c2b29c(0x1a,0,uVar4,&UNK_10f6c6e81,uVar5);
LAB_10ae35d10:
    lVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return lVar3;
  }
  ___stack_chk_fail();
  if (uVar4 == 0) {
    return 1;
  }
  lVar8 = lVar3 + 0x50;
  uVar10 = *(ulong *)(lVar3 + 0x40);
  *(ulong *)(lVar3 + 0x40) = uVar10 + uVar4 * 8;
  *(ulong *)(lVar3 + 0x48) =
       *(long *)(lVar3 + 0x48) + (uVar4 >> 0x3d) + (ulong)CARRY8(uVar10,uVar4 * 8);
  uVar1 = *(uint *)(lVar3 + 0xd0);
  uVar6 = (ulong)uVar1;
  uVar10 = uVar4;
  if (uVar1 != 0) {
    uVar11 = 0x80 - uVar6;
    uVar10 = uVar4 - uVar11;
    if (uVar4 < uVar11) {
      _memcpy(lVar8 + uVar6,piVar7,uVar4);
      uVar4 = (ulong)(uint)(*(int *)(lVar3 + 0xd0) + (int)uVar4);
      goto LAB_10ae35e24;
    }
    if (uVar1 != 0x80) {
      _memcpy(lVar8 + uVar6,piVar7,uVar11);
    }
    *(undefined4 *)(lVar3 + 0xd0) = 0;
    piVar7 = (int *)((long)piVar7 + uVar11);
    func_0x000107c2b598(lVar3,lVar8,1);
  }
  uVar4 = uVar10;
  if (0x7f < uVar10) {
    func_0x000107c2b598(lVar3,piVar7,uVar10 >> 7);
    uVar4 = uVar10 & 0x7f;
    piVar7 = (int *)((long)piVar7 + (uVar10 - uVar4));
  }
  if (uVar4 == 0) {
    return 1;
  }
  _memcpy(lVar8,piVar7,uVar4);
LAB_10ae35e24:
  *(int *)(lVar3 + 0xd0) = (int)uVar4;
  return 1;
}



/* Entry: 10ae35d48; end: 10ae35e3f;  */

undefined8 FUN_10ae35d48(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
    return 1;
  }
  lVar1 = param_1 + 0x50;
  uVar4 = *(ulong *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x40) = uVar4 + param_3 * 8;
  *(ulong *)(param_1 + 0x48) =
       *(long *)(param_1 + 0x48) + (param_3 >> 0x3d) + (ulong)CARRY8(uVar4,param_3 * 8);
  uVar2 = *(uint *)(param_1 + 0xd0);
  uVar3 = (ulong)uVar2;
  uVar4 = param_3;
  if (uVar2 != 0) {
    uVar5 = 0x80 - uVar3;
    uVar4 = param_3 - uVar5;
    if (param_3 < uVar5) {
      _memcpy(lVar1 + uVar3,param_2,param_3);
      uVar4 = (ulong)(uint)(*(int *)(param_1 + 0xd0) + (int)param_3);
      goto LAB_10ae35e24;
    }
    if (uVar2 != 0x80) {
      _memcpy(lVar1 + uVar3,param_2,uVar5);
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
    param_2 = param_2 + uVar5;
    func_0x000107c2b598(param_1,lVar1,1);
  }
  if (0x7f < uVar4) {
    func_0x000107c2b598(param_1,param_2,uVar4 >> 7);
    param_2 = param_2 + uVar4;
    uVar4 = uVar4 & 0x7f;
    param_2 = param_2 - uVar4;
  }
  if (uVar4 == 0) {
    return 1;
  }
  _memcpy(lVar1,param_2,uVar4);
LAB_10ae35e24:
  *(int *)(param_1 + 0xd0) = (int)uVar4;
  return 1;
}



/* Entry: 10ae35e40; end: 10ae35f5f;  */

undefined8 FUN_10ae35e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_1;
  func_0x000107c2b434(uVar1,*param_2);
  if ((int)uVar1 == 0) {
    if (param_1 != param_2) {
      uVar1 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = uVar1;
      uVar2 = param_2[4];
      uVar1 = param_2[3];
      uVar4 = param_2[6];
      uVar3 = param_2[5];
      uVar6 = param_2[8];
      uVar5 = param_2[7];
      param_1[9] = param_2[9];
      param_1[8] = uVar6;
      param_1[7] = uVar5;
      param_1[6] = uVar4;
      param_1[5] = uVar3;
      param_1[4] = uVar2;
      param_1[3] = uVar1;
      uVar4 = param_2[0xf];
      uVar3 = param_2[0xe];
      uVar2 = param_2[0x11];
      uVar1 = param_2[0x10];
      uVar6 = param_2[0xd];
      uVar5 = param_2[0xc];
      param_1[0x12] = param_2[0x12];
      param_1[0xf] = uVar4;
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar2;
      param_1[0x10] = uVar1;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar5;
      uVar1 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      uVar3 = param_2[0x18];
      uVar2 = param_2[0x17];
      uVar5 = param_2[0x1a];
      uVar4 = param_2[0x19];
      uVar1 = param_2[0x1b];
      uVar6 = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar6;
      param_1[0x1b] = uVar1;
      param_1[0x1a] = uVar5;
      param_1[0x19] = uVar4;
      param_1[0x18] = uVar3;
      param_1[0x17] = uVar2;
      uVar1 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar1;
    }
    uVar1 = 1;
  }
  else {
    func_0x000107c2b29c(0xf,0,0x6a,&UNK_10f6c6f00,0x2cb);
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10ae35f60; end: 10ae35fdf;  */

uint FUN_10ae35f60(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c2b434(param_1,*param_2);
  if (((int)uVar2 == 0) && (uVar2 = param_1, func_0x000107c2b434(param_1,*param_3), (int)uVar2 == 0)
     ) {
    func_0x000107c2b450(param_1,param_2 + 1,param_3 + 1);
    uVar1 = (uint)param_1 ^ 1;
  }
  else {
    func_0x000107c2b29c(0xf,0,0x6a,&UNK_10f6c6f00,0x302);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 10ae35fe0; end: 10ae361db;  */

undefined8 FUN_10ae35fe0(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  lVar3 = param_1;
  func_0x000107c2b434(param_1,*param_2);
  if ((int)lVar3 == 0) {
    if ((param_3 != 0) && (param_4 != 0)) {
      lVar3 = param_1;
      func_0x000107c2b464(param_1,auStack_88,param_3);
      if (((int)lVar3 != 0) &&
         ((lVar3 = param_1, func_0x000107c2b464(param_1,auStack_d0,param_4), (int)lVar3 != 0 &&
          (lVar3 = param_1, func_0x000107c2b460(param_1,&uStack_160,auStack_88,auStack_d0),
          (int)lVar3 != 0)))) {
        param_2[4] = uStack_148;
        param_2[3] = uStack_150;
        param_2[6] = uStack_138;
        param_2[5] = uStack_140;
        param_2[8] = uStack_128;
        param_2[7] = uStack_130;
        param_2[9] = uStack_120;
        param_2[2] = uStack_158;
        param_2[1] = uStack_160;
        param_2[0x12] = uStack_d8;
        param_2[0xf] = uStack_f0;
        param_2[0xe] = uStack_f8;
        param_2[0x11] = uStack_e0;
        param_2[0x10] = uStack_e8;
        param_2[0xb] = uStack_110;
        param_2[10] = uStack_118;
        param_2[0xd] = uStack_100;
        param_2[0xc] = uStack_108;
        uVar1 = *(undefined8 *)(param_1 + 0x140);
        param_2[0x14] = *(undefined8 *)(param_1 + 0x148);
        param_2[0x13] = uVar1;
        uVar2 = *(undefined8 *)(param_1 + 0x158);
        uVar1 = *(undefined8 *)(param_1 + 0x150);
        uVar5 = *(undefined8 *)(param_1 + 0x168);
        uVar4 = *(undefined8 *)(param_1 + 0x160);
        uVar7 = *(undefined8 *)(param_1 + 0x178);
        uVar6 = *(undefined8 *)(param_1 + 0x170);
        param_2[0x1b] = *(undefined8 *)(param_1 + 0x180);
        param_2[0x1a] = uVar7;
        param_2[0x19] = uVar6;
        param_2[0x18] = uVar5;
        param_2[0x17] = uVar4;
        param_2[0x16] = uVar2;
        param_2[0x15] = uVar1;
        return 1;
      }
      lVar3 = *(long *)(param_1 + 8);
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)(lVar3 + 8);
        param_2[2] = *(undefined8 *)(lVar3 + 0x10);
        param_2[1] = uVar1;
        uVar2 = *(undefined8 *)(lVar3 + 0x20);
        uVar1 = *(undefined8 *)(lVar3 + 0x18);
        uVar5 = *(undefined8 *)(lVar3 + 0x30);
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        uVar7 = *(undefined8 *)(lVar3 + 0x40);
        uVar6 = *(undefined8 *)(lVar3 + 0x38);
        param_2[9] = *(undefined8 *)(lVar3 + 0x48);
        param_2[8] = uVar7;
        param_2[7] = uVar6;
        param_2[6] = uVar5;
        param_2[5] = uVar4;
        param_2[4] = uVar2;
        param_2[3] = uVar1;
        uVar5 = *(undefined8 *)(lVar3 + 0x78);
        uVar4 = *(undefined8 *)(lVar3 + 0x70);
        uVar2 = *(undefined8 *)(lVar3 + 0x88);
        uVar1 = *(undefined8 *)(lVar3 + 0x80);
        uVar7 = *(undefined8 *)(lVar3 + 0x68);
        uVar6 = *(undefined8 *)(lVar3 + 0x60);
        param_2[0x12] = *(undefined8 *)(lVar3 + 0x90);
        param_2[0xf] = uVar5;
        param_2[0xe] = uVar4;
        param_2[0x11] = uVar2;
        param_2[0x10] = uVar1;
        param_2[0xd] = uVar7;
        param_2[0xc] = uVar6;
        uVar1 = *(undefined8 *)(lVar3 + 0x50);
        param_2[0xb] = *(undefined8 *)(lVar3 + 0x58);
        param_2[10] = uVar1;
        uVar2 = *(undefined8 *)(lVar3 + 0xc0);
        uVar1 = *(undefined8 *)(lVar3 + 0xb8);
        uVar5 = *(undefined8 *)(lVar3 + 0xd0);
        uVar4 = *(undefined8 *)(lVar3 + 200);
        uVar7 = *(undefined8 *)(lVar3 + 0xb0);
        uVar6 = *(undefined8 *)(lVar3 + 0xa8);
        param_2[0x1b] = *(undefined8 *)(lVar3 + 0xd8);
        param_2[0x16] = uVar7;
        param_2[0x15] = uVar6;
        param_2[0x1a] = uVar5;
        param_2[0x19] = uVar4;
        param_2[0x18] = uVar2;
        param_2[0x17] = uVar1;
        uVar1 = *(undefined8 *)(lVar3 + 0x98);
        param_2[0x14] = *(undefined8 *)(lVar3 + 0xa0);
        param_2[0x13] = uVar1;
        return 0;
      }
      param_2[9] = 0;
      param_2[8] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      param_2[0xb] = 0;
      param_2[10] = 0;
      param_2[0xd] = 0;
      param_2[0xc] = 0;
      param_2[0xf] = 0;
      param_2[0xe] = 0;
      param_2[0x11] = 0;
      param_2[0x10] = 0;
      param_2[0x12] = 0;
      param_2[0x14] = 0;
      param_2[0x13] = 0;
      param_2[0x16] = 0;
      param_2[0x15] = 0;
      param_2[0x18] = 0;
      param_2[0x17] = 0;
      param_2[0x1a] = 0;
      param_2[0x19] = 0;
      param_2[0x1b] = 0;
      return 0;
    }
    uVar1 = 0x43;
    uVar2 = 0x365;
  }
  else {
    uVar1 = 0x6a;
    uVar2 = 0x360;
  }
  func_0x000107c2b29c(0xf,0,uVar1,&UNK_10f6c6f00,uVar2);
  return 0;
}



/* Entry: 10ae361dc; end: 10ae3627b;  */

void FUN_10ae361dc(int param_1,ulong *param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  
  if (param_1 != 0) {
    lVar1 = (long)param_1;
    uVar2 = ~param_3;
    puVar3 = param_4;
    puVar4 = param_5;
    puVar5 = param_2;
    lVar6 = lVar1;
    do {
      *puVar5 = *puVar4 & uVar2 | *puVar3 & param_3;
      lVar6 = lVar6 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
    puVar3 = param_2 + 9;
    puVar4 = param_4 + 9;
    puVar5 = param_5 + 9;
    lVar6 = lVar1;
    do {
      *puVar3 = *puVar5 & uVar2 | *puVar4 & param_3;
      lVar6 = lVar6 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
    puVar3 = param_2 + 0x12;
    puVar4 = param_4 + 0x12;
    puVar5 = param_5 + 0x12;
    do {
      *puVar3 = *puVar5 & uVar2 | *puVar4 & param_3;
      lVar1 = lVar1 + -1;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Entry: 10ae3627c; end: 10ae36347;  */

long * FUN_10ae3627c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lStack_c0;
  undefined1 auStack_b8 [78];
  undefined1 auStack_6a [66];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = auStack_6a;
  plVar6 = param_1;
  FUN_10ae35350(param_1,puVar7,&lStack_c0,0x42,param_3);
  if ((int)plVar6 != 0) {
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    if (lStack_c0 != 0) {
      puVar7 = auStack_6a;
      do {
        *(undefined1 *)((long)param_2 + lStack_c0 + -1) = *puVar7;
        lStack_c0 = lStack_c0 + -1;
        puVar7 = puVar7 + 1;
      } while (lStack_c0 != 0);
    }
    uVar3 = *(uint *)(param_1 + 3);
    uVar8 = (ulong)uVar3;
    if ((int)uVar3 < 9) {
      puVar7 = (undefined1 *)param_2[(int)uVar3];
      uVar8 = (ulong)(int)uVar3;
    }
    else {
      puVar7 = (undefined1 *)0x0;
    }
    func_0x000107c2b368(param_2,puVar7,param_1[2],auStack_b8,uVar8);
    plVar6 = (long *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar6;
  }
  ___stack_chk_fail();
  lVar9 = *plVar6;
  if (lVar9 == 0) {
    if ((puVar7 != (undefined1 *)0x0) && (*(int *)(puVar7 + 0x28) == 0)) {
      piVar1 = (int *)(puVar7 + 0x130);
      iVar10 = *piVar1;
      do {
        if (iVar10 == -1) break;
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar5 = cVar4 == '\0';
        }
        else {
          bVar5 = false;
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (!bVar5);
    }
    *plVar6 = (long)puVar7;
    plVar6 = (long *)(ulong)(puVar7 != (undefined1 *)0x0);
  }
  else {
    func_0x000107c2b434();
    if ((int)lVar9 == 0) {
      plVar6 = (long *)0x1;
    }
    else {
      func_0x000107c2b29c(0xf,0,0x82,&UNK_10f6c6f79,0xdd);
      plVar6 = (long *)0x0;
    }
  }
  return plVar6;
}



/* Entry: 10ae36348; end: 10ae363ef;  */

bool FUN_10ae36348(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0x28) == 0)) {
      piVar1 = (int *)(param_2 + 0x130);
      iVar6 = *piVar1;
      do {
        if (iVar6 == -1) break;
        iVar2 = *piVar1;
        if (iVar2 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar6 = iVar2;
      } while (!bVar4);
    }
    *param_1 = param_2;
    bVar4 = param_2 != 0;
  }
  else {
    func_0x000107c2b434();
    if ((int)lVar5 == 0) {
      bVar4 = true;
    }
    else {
      func_0x000107c2b29c(0xf,0,0x82,&UNK_10f6c6f79,0xdd);
      bVar4 = false;
    }
  }
  return bVar4;
}



/* Entry: 10ae363f0; end: 10ae36487;  */

bool FUN_10ae363f0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar2 = 0x72;
    uVar3 = 0x109;
  }
  else {
    if ((param_2 == (undefined8 *)0x0) || (func_0x000107c2b434(lVar1,*param_2), (int)lVar1 == 0)) {
      func_0x000107c2b458(param_1[1]);
      func_0x00010ae35f10(param_2,*param_1);
      param_1[1] = (long)param_2;
      return param_2 != (undefined8 *)0x0;
    }
    uVar2 = 0x82;
    uVar3 = 0x10e;
  }
  func_0x000107c2b29c(0xf,0,uVar2,&UNK_10f6c6f79,uVar3);
  return false;
}



/* Entry: 10ae36488; end: 10ae3658f;  */

undefined8 FUN_10ae36488(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((param_1 == (long *)0x0) || (lVar6 = *param_1, lVar6 == 0)) {
    uVar4 = 0x43;
    uVar5 = 0x19b;
  }
  else {
    uVar1 = (int)lVar6 + 0x10;
    func_0x000107c2b32c();
    if (0x9f < uVar1) {
      func_0x000107c34f80();
      lVar2 = *param_1;
      func_0x000107c2b454();
      if ((lVar6 != 0) && (lVar2 != 0)) {
        lVar3 = lVar6 + 0x18;
        func_0x000107c2b3c0(lVar3,1,*(undefined8 *)(*param_1 + 0x10),(long)*(int *)(*param_1 + 0x18)
                            ,&UNK_10e5259d0);
        if ((int)lVar3 != 0) {
          lVar3 = *param_1;
          func_0x000107c2b46c(lVar3,lVar2 + 8,lVar6 + 0x18);
          if ((int)lVar3 != 0) {
            func_0x000107c2b534(param_1[2]);
            param_1[2] = lVar6;
            func_0x000107c2b458(param_1[1]);
            param_1[1] = lVar2;
            return 1;
          }
        }
      }
      func_0x000107c2b458(lVar2);
      func_0x000107c2b534(lVar6);
      return 0;
    }
    uVar4 = 0x70;
    uVar5 = 0x1a1;
  }
  func_0x000107c2b29c(0xf,0,uVar4,&UNK_10f6c6f79,uVar5);
  return 0;
}



/* Entry: 10ae36590; end: 10ae365a3;  */

undefined8 FUN_10ae36590(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return 1;
}



/* Entry: 10ae365a4; end: 10ae365cf;  */

/* WARNING: Possible PIC construction at 0x00010021f3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010021f3ec) */

void FUN_10ae365a4(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  func_0x000107c2b384(*(undefined8 *)(param_1 + 0x138));
  *(undefined8 *)(param_1 + 0x138) = 0;
  puVar2 = (undefined8 *)(param_1 + 0x38);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x4c) >> 1 & 1) == 0) {
    unaff_x30 = &UNK_10021f3ec;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar3 = (undefined8 *)*puVar2;
    unaff_x19 = puVar2;
    unaff_x29 = puVar1;
  }
  else {
    puVar3 = puVar2;
    if ((*(uint *)(param_1 + 0x4c) & 1) == 0) {
      *puVar2 = 0;
      return;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    plVar4 = puVar3 + -1;
    if (*plVar4 + 8 != 0) {
      func_0x000107c60ee4(plVar4,*plVar4 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar4);
    return;
  }
  return;
}



/* Entry: 10ae365d0; end: 10ae365d7;  */

/* WARNING: Possible PIC construction at 0x00010021f3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010021f3ec) */

void FUN_10ae365d0(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar2 = (undefined8 *)(param_1 + 0x38);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x4c) >> 1 & 1) == 0) {
    unaff_x30 = &UNK_10021f3ec;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar3 = (undefined8 *)*puVar2;
    unaff_x19 = puVar2;
    unaff_x29 = puVar1;
  }
  else {
    puVar3 = puVar2;
    if ((*(uint *)(param_1 + 0x4c) & 1) == 0) {
      *puVar2 = 0;
      return;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    plVar4 = puVar3 + -1;
    if (*plVar4 + 8 != 0) {
      func_0x000107c60ee4(plVar4,*plVar4 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar4);
    return;
  }
  return;
}



/* Entry: 10ae365d8; end: 10ae36637;  */

void FUN_10ae365d8(int param_1,undefined1 *param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1 = param_1 + 0x38;
  func_0x000107c2b32c();
  uVar1 = (ulong)(param_1 + 7U >> 3);
  if (7 < param_1 + 7U) {
    uVar2 = uVar1;
    do {
      *param_2 = *(undefined1 *)(param_4 + -1 + uVar2);
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  *param_3 = uVar1;
  return;
}



/* Entry: 10ae36638; end: 10ae36c23;  */

void FUN_10ae36638(long param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uStack_580;
  undefined1 auStack_578 [72];
  undefined1 auStack_530 [72];
  undefined1 auStack_4e8 [72];
  undefined1 auStack_4a0 [72];
  ulong auStack_458 [9];
  undefined1 auStack_410 [72];
  undefined1 auStack_3c8 [72];
  ulong auStack_380 [9];
  undefined1 auStack_338 [72];
  undefined1 auStack_2f0 [40];
  undefined1 auStack_2c8 [32];
  undefined1 auStack_2a8 [40];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [40];
  undefined1 auStack_238 [32];
  undefined1 auStack_218 [40];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [40];
  undefined1 auStack_1a8 [32];
  ulong auStack_188 [5];
  undefined1 auStack_160 [32];
  ulong auStack_140 [5];
  undefined1 auStack_118 [32];
  ulong auStack_f8 [5];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  if (param_3 != param_4) {
    puVar5 = param_3 + 0x12;
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar6 = (ulong)uVar1;
    if ((int)uVar1 < 1) {
      uStack_580 = 0;
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      puVar3 = puVar5;
      uVar8 = uVar6;
      do {
        uVar7 = *puVar3 | uVar7;
        uVar8 = uVar8 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar8 != 0);
      uVar8 = 0;
      puVar3 = param_4 + 0x12;
      do {
        uVar8 = *puVar3 | uVar8;
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar6 != 0);
      uStack_580 = -(ulong)(uVar7 != 0);
      uVar6 = -(ulong)(uVar8 != 0);
    }
    puVar3 = param_4 + 0x12;
    func_0x000107c2b38c(auStack_1d0,puVar5,puVar5,(long)(int)uVar1,*(undefined8 *)(param_1 + 0x138))
    ;
    func_0x000107c2b38c(auStack_218,puVar3,puVar3,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_260,param_3,auStack_218,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_2a8;
    func_0x000107c2b300(puVar4,puVar5,puVar3,lVar13);
    func_0x000107c2b368(auStack_2a8,puVar4,uVar12,auStack_b0,lVar13);
    func_0x000107c2b38c(auStack_2a8,auStack_2a8,auStack_2a8,lVar13,*(undefined8 *)(param_1 + 0x138))
    ;
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    func_0x000107c2b36c(auStack_2a8,auStack_2a8,auStack_1d0,uVar12,auStack_b0,lVar13);
    func_0x000107c2b36c(auStack_2a8,auStack_2a8,auStack_218,uVar12,auStack_b0,lVar13);
    func_0x000107c2b38c(auStack_2f0,puVar3,auStack_218,lVar13,*(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_2f0,auStack_2f0,param_3 + 9,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_338,param_4,auStack_1d0,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    iVar2 = *(int *)(param_1 + 0x40);
    lVar13 = (long)iVar2;
    func_0x000107c2b36c(auStack_380,auStack_338,auStack_260,*(undefined8 *)(param_1 + 0x38),
                        auStack_b0,lVar13);
    if (iVar2 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      puVar3 = auStack_380;
      lVar9 = lVar13;
      do {
        uVar8 = *puVar3 | uVar8;
        lVar9 = lVar9 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar9 != 0);
      uVar8 = -(ulong)(uVar8 != 0);
    }
    func_0x000107c2b38c(auStack_188,auStack_380,auStack_2a8,lVar13,*(undefined8 *)(param_1 + 0x138))
    ;
    func_0x000107c2b38c(auStack_3c8,puVar5,auStack_1d0,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_410,param_4 + 9,auStack_3c8,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x40);
    lVar13 = (long)iVar2;
    func_0x000107c2b36c(auStack_458,auStack_410,auStack_2f0,uVar12,auStack_b0,lVar13);
    puVar3 = auStack_458;
    func_0x000107c2b300(puVar3,auStack_458,auStack_458,lVar13);
    func_0x000107c2b368(auStack_458,puVar3,uVar12,auStack_b0,lVar13);
    if (iVar2 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      puVar3 = auStack_458;
      lVar9 = lVar13;
      do {
        uVar7 = *puVar3 | uVar7;
        lVar9 = lVar9 + -1;
        puVar3 = puVar3 + 1;
      } while (lVar9 != 0);
      uVar7 = -(ulong)(uVar7 != 0);
    }
    if ((uStack_580 & ((uVar7 | uVar8) ^ 0xffffffffffffffff) & uVar6) == 0) {
      puVar4 = auStack_4a0;
      func_0x000107c2b300(puVar4,auStack_380,auStack_380,lVar13);
      func_0x000107c2b368(auStack_4a0,puVar4,uVar12,auStack_b0,lVar13);
      func_0x000107c2b38c(auStack_4a0,auStack_4a0,auStack_4a0,lVar13,
                          *(undefined8 *)(param_1 + 0x138));
      func_0x000107c2b38c(auStack_4e8,auStack_380,auStack_4a0,(long)*(int *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x138));
      func_0x000107c2b38c(auStack_530,auStack_260,auStack_4a0,(long)*(int *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x138));
      func_0x000107c2b38c(auStack_f8,auStack_458,auStack_458,(long)*(int *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x138));
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      lVar13 = (long)*(int *)(param_1 + 0x40);
      func_0x000107c2b36c(auStack_f8,auStack_f8,auStack_4e8,uVar12,auStack_b0,lVar13);
      func_0x000107c2b36c(auStack_f8,auStack_f8,auStack_530,uVar12,auStack_b0,lVar13);
      func_0x000107c2b36c(auStack_f8,auStack_f8,auStack_530,uVar12,auStack_b0,lVar13);
      func_0x000107c2b36c(auStack_140,auStack_530,auStack_f8,uVar12,auStack_b0,lVar13);
      func_0x000107c2b38c(auStack_140,auStack_140,auStack_458,lVar13,
                          *(undefined8 *)(param_1 + 0x138));
      func_0x000107c2b38c(auStack_578,auStack_2f0,auStack_4e8,(long)*(int *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x138));
      uVar12 = *(undefined8 *)(param_1 + 0x38);
      iVar2 = *(int *)(param_1 + 0x40);
      lVar13 = (long)iVar2;
      func_0x000107c2b36c(auStack_140,auStack_140,auStack_578,uVar12,auStack_b0,lVar13);
      func_0x000107c2b36c(auStack_140,auStack_140,auStack_578,uVar12,auStack_b0,lVar13);
      if (iVar2 != 0) {
        uVar8 = ~uStack_580;
        puVar3 = auStack_f8;
        puVar10 = param_4;
        lVar9 = lVar13;
        do {
          *puVar3 = *puVar10 & uVar8 | *puVar3 & uStack_580;
          lVar9 = lVar9 + -1;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
        uVar7 = ~uVar6;
        puVar3 = auStack_f8;
        puVar10 = param_2;
        lVar9 = lVar13;
        puVar11 = param_3;
        do {
          *puVar10 = *puVar11 & uVar7 | *puVar3 & uVar6;
          lVar9 = lVar9 + -1;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar9 != 0);
        puVar3 = auStack_140;
        lVar9 = lVar13;
        puVar10 = param_4 + 9;
        do {
          *puVar3 = *puVar10 & uVar8 | *puVar3 & uStack_580;
          lVar9 = lVar9 + -1;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
        puVar3 = param_2 + 9;
        puVar10 = auStack_140;
        lVar9 = lVar13;
        puVar11 = param_3 + 9;
        do {
          *puVar3 = *puVar11 & uVar7 | *puVar10 & uVar6;
          lVar9 = lVar9 + -1;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar9 != 0);
        puVar3 = param_4 + 0x12;
        puVar10 = auStack_188;
        lVar9 = lVar13;
        do {
          *puVar10 = *puVar3 & uVar8 | *puVar10 & uStack_580;
          lVar9 = lVar9 + -1;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar9 != 0);
        puVar3 = param_2 + 0x12;
        puVar10 = auStack_188;
        do {
          *puVar3 = *puVar5 & uVar7 | *puVar10 & uVar6;
          lVar13 = lVar13 + -1;
          puVar3 = puVar3 + 1;
          puVar10 = puVar10 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar13 != 0);
      }
    }
    else {
      FUN_10ae36c24(param_1,param_2,param_3);
    }
    return;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    func_0x000107c2b38c(auStack_d0,param_3,param_3,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_118,param_3 + 9,param_3 + 9,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_160,auStack_118,auStack_118,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_1a8,param_3 + 0x12,param_3 + 0x12,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_1f0;
    func_0x000107c2b300(puVar4,param_3,auStack_118,lVar13);
    func_0x000107c2b368(auStack_1f0,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b38c(auStack_1f0,auStack_1f0,auStack_1f0,lVar13,*(undefined8 *)(param_1 + 0x138))
    ;
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    func_0x000107c2b36c(auStack_1f0,auStack_1f0,auStack_d0,uVar12,auStack_88,lVar13);
    func_0x000107c2b36c(auStack_1f0,auStack_1f0,auStack_160,uVar12,auStack_88,lVar13);
    puVar4 = auStack_1f0;
    func_0x000107c2b300(puVar4,auStack_1f0,auStack_1f0,lVar13);
    func_0x000107c2b368(auStack_1f0,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b38c(auStack_238,auStack_1a8,auStack_1a8,lVar13,*(undefined8 *)(param_1 + 0x138))
    ;
    func_0x000107c2b38c(auStack_238,param_1 + 0x50,auStack_238,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_238;
    func_0x000107c2b300(puVar4,auStack_238,auStack_d0,lVar13);
    func_0x000107c2b368(auStack_238,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_238;
    func_0x000107c2b300(puVar4,auStack_238,auStack_d0,lVar13);
    func_0x000107c2b368(auStack_238,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_238;
    func_0x000107c2b300(puVar4,auStack_238,auStack_d0,lVar13);
    func_0x000107c2b368(auStack_238,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b38c(param_2,auStack_238,auStack_238,lVar13,*(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b36c(param_2,param_2,auStack_1f0,*(undefined8 *)(param_1 + 0x38),auStack_88,
                        (long)*(int *)(param_1 + 0x40));
    func_0x000107c2b36c(param_2,param_2,auStack_1f0,*(undefined8 *)(param_1 + 0x38),auStack_88,
                        (long)*(int *)(param_1 + 0x40));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x40);
    puVar5 = param_2 + 0x12;
    func_0x000107c2b300(puVar5,param_3 + 9,param_3 + 0x12,(long)iVar2);
    func_0x000107c2b368(param_2 + 0x12,puVar5,uVar12,auStack_88,(long)iVar2);
    func_0x000107c2b38c(param_2 + 0x12,param_2 + 0x12,param_2 + 0x12,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b36c(param_2 + 0x12,param_2 + 0x12,auStack_118,*(undefined8 *)(param_1 + 0x38),
                        auStack_88,(long)*(int *)(param_1 + 0x40));
    func_0x000107c2b36c(param_2 + 0x12,param_2 + 0x12,auStack_1a8,*(undefined8 *)(param_1 + 0x38),
                        auStack_88,(long)*(int *)(param_1 + 0x40));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_160;
    func_0x000107c2b300(puVar4,auStack_160,auStack_160,lVar13);
    func_0x000107c2b368(auStack_160,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_160;
    func_0x000107c2b300(puVar4,auStack_160,auStack_160,lVar13);
    func_0x000107c2b368(auStack_160,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_160;
    func_0x000107c2b300(puVar4,auStack_160,auStack_160,lVar13);
    func_0x000107c2b368(auStack_160,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b36c(param_2 + 9,auStack_1f0,param_2,uVar12,auStack_88,lVar13);
    func_0x000107c2b38c(param_2 + 9,param_2 + 9,auStack_238,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_160;
  }
  else {
    func_0x000107c2b38c(auStack_d0,param_3 + 0x12,param_3 + 0x12,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_118,param_3 + 9,param_3 + 9,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_160,param_3,auStack_118,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    func_0x000107c2b36c(auStack_1a8,param_3,auStack_d0,uVar12,auStack_88,lVar13);
    puVar4 = auStack_1f0;
    func_0x000107c2b300(puVar4,param_3,auStack_d0,lVar13);
    func_0x000107c2b368(auStack_1f0,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_238;
    func_0x000107c2b300(puVar4,auStack_1f0,auStack_1f0,lVar13);
    func_0x000107c2b368(auStack_238,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_1f0;
    func_0x000107c2b300(puVar4,auStack_1f0,auStack_238,lVar13);
    func_0x000107c2b368(auStack_1f0,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b38c(auStack_280,auStack_1a8,auStack_1f0,lVar13,*(undefined8 *)(param_1 + 0x138))
    ;
    func_0x000107c2b38c(param_2,auStack_280,auStack_280,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_2c8;
    func_0x000107c2b300(puVar4,auStack_160,auStack_160,lVar13);
    func_0x000107c2b368(auStack_2c8,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_2c8;
    func_0x000107c2b300(puVar4,auStack_2c8,auStack_2c8,lVar13);
    func_0x000107c2b368(auStack_2c8,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_238;
    func_0x000107c2b300(puVar4,auStack_2c8,auStack_2c8,lVar13);
    func_0x000107c2b368(auStack_238,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b36c(param_2,param_2,auStack_238,uVar12,auStack_88,lVar13);
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_d0;
    func_0x000107c2b300(puVar4,auStack_118,auStack_d0,lVar13);
    func_0x000107c2b368(auStack_d0,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_1a8;
    func_0x000107c2b300(puVar4,param_3 + 9,param_3 + 0x12,lVar13);
    func_0x000107c2b368(auStack_1a8,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b38c(param_2 + 0x12,auStack_1a8,auStack_1a8,lVar13,
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b36c(param_2 + 0x12,param_2 + 0x12,auStack_d0,*(undefined8 *)(param_1 + 0x38),
                        auStack_88,(long)*(int *)(param_1 + 0x40));
    func_0x000107c2b36c(param_2 + 9,auStack_2c8,param_2,*(undefined8 *)(param_1 + 0x38),auStack_88,
                        (long)*(int *)(param_1 + 0x40));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_118;
    func_0x000107c2b300(puVar4,auStack_118,auStack_118,lVar13);
    func_0x000107c2b368(auStack_118,puVar4,uVar12,auStack_88,lVar13);
    func_0x000107c2b38c(auStack_118,auStack_118,auStack_118,lVar13,*(undefined8 *)(param_1 + 0x138))
    ;
    func_0x000107c2b38c(param_2 + 9,auStack_280,param_2 + 9,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    lVar13 = (long)*(int *)(param_1 + 0x40);
    puVar4 = auStack_118;
    func_0x000107c2b300(puVar4,auStack_118,auStack_118,lVar13);
    func_0x000107c2b368(auStack_118,puVar4,uVar12,auStack_88,lVar13);
    puVar4 = auStack_118;
  }
  func_0x000107c2b36c(param_2 + 9,param_2 + 9,puVar4,uVar12,auStack_88,lVar13);
  return;
}



/* Entry: 10ae36c24; end: 10ae37317;  */

void FUN_10ae36c24(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_2c8 [72];
  undefined1 auStack_280 [72];
  undefined1 auStack_238 [72];
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    func_0x000107c2b38c(auStack_d0,param_3,param_3,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_118,param_3 + 0x48,param_3 + 0x48,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_160,auStack_118,auStack_118,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_1a8,param_3 + 0x90,param_3 + 0x90,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_1f0;
    func_0x000107c2b300(puVar2,param_3,auStack_118,lVar3);
    func_0x000107c2b368(auStack_1f0,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b38c(auStack_1f0,auStack_1f0,auStack_1f0,lVar3,*(undefined8 *)(param_1 + 0x138));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    func_0x000107c2b36c(auStack_1f0,auStack_1f0,auStack_d0,uVar4,auStack_88,lVar3);
    func_0x000107c2b36c(auStack_1f0,auStack_1f0,auStack_160,uVar4,auStack_88,lVar3);
    puVar2 = auStack_1f0;
    func_0x000107c2b300(puVar2,auStack_1f0,auStack_1f0,lVar3);
    func_0x000107c2b368(auStack_1f0,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b38c(auStack_238,auStack_1a8,auStack_1a8,lVar3,*(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_238,param_1 + 0x50,auStack_238,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_238;
    func_0x000107c2b300(puVar2,auStack_238,auStack_d0,lVar3);
    func_0x000107c2b368(auStack_238,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_238;
    func_0x000107c2b300(puVar2,auStack_238,auStack_d0,lVar3);
    func_0x000107c2b368(auStack_238,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_238;
    func_0x000107c2b300(puVar2,auStack_238,auStack_d0,lVar3);
    func_0x000107c2b368(auStack_238,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b38c(param_2,auStack_238,auStack_238,lVar3,*(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b36c(param_2,param_2,auStack_1f0,*(undefined8 *)(param_1 + 0x38),auStack_88,
                        (long)*(int *)(param_1 + 0x40));
    func_0x000107c2b36c(param_2,param_2,auStack_1f0,*(undefined8 *)(param_1 + 0x38),auStack_88,
                        (long)*(int *)(param_1 + 0x40));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x40);
    lVar3 = param_2 + 0x90;
    func_0x000107c2b300(lVar3,param_3 + 0x48,param_3 + 0x90,(long)iVar1);
    func_0x000107c2b368(param_2 + 0x90,lVar3,uVar4,auStack_88,(long)iVar1);
    func_0x000107c2b38c(param_2 + 0x90,param_2 + 0x90,param_2 + 0x90,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b36c(param_2 + 0x90,param_2 + 0x90,auStack_118,*(undefined8 *)(param_1 + 0x38),
                        auStack_88,(long)*(int *)(param_1 + 0x40));
    func_0x000107c2b36c(param_2 + 0x90,param_2 + 0x90,auStack_1a8,*(undefined8 *)(param_1 + 0x38),
                        auStack_88,(long)*(int *)(param_1 + 0x40));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_160;
    func_0x000107c2b300(puVar2,auStack_160,auStack_160,lVar3);
    func_0x000107c2b368(auStack_160,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_160;
    func_0x000107c2b300(puVar2,auStack_160,auStack_160,lVar3);
    func_0x000107c2b368(auStack_160,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_160;
    func_0x000107c2b300(puVar2,auStack_160,auStack_160,lVar3);
    func_0x000107c2b368(auStack_160,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b36c(param_2 + 0x48,auStack_1f0,param_2,uVar4,auStack_88,lVar3);
    func_0x000107c2b38c(param_2 + 0x48,param_2 + 0x48,auStack_238,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_160;
  }
  else {
    func_0x000107c2b38c(auStack_d0,param_3 + 0x90,param_3 + 0x90,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_118,param_3 + 0x48,param_3 + 0x48,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(auStack_160,param_3,auStack_118,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    func_0x000107c2b36c(auStack_1a8,param_3,auStack_d0,uVar4,auStack_88,lVar3);
    puVar2 = auStack_1f0;
    func_0x000107c2b300(puVar2,param_3,auStack_d0,lVar3);
    func_0x000107c2b368(auStack_1f0,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_238;
    func_0x000107c2b300(puVar2,auStack_1f0,auStack_1f0,lVar3);
    func_0x000107c2b368(auStack_238,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_1f0;
    func_0x000107c2b300(puVar2,auStack_1f0,auStack_238,lVar3);
    func_0x000107c2b368(auStack_1f0,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b38c(auStack_280,auStack_1a8,auStack_1f0,lVar3,*(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(param_2,auStack_280,auStack_280,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_2c8;
    func_0x000107c2b300(puVar2,auStack_160,auStack_160,lVar3);
    func_0x000107c2b368(auStack_2c8,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_2c8;
    func_0x000107c2b300(puVar2,auStack_2c8,auStack_2c8,lVar3);
    func_0x000107c2b368(auStack_2c8,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_238;
    func_0x000107c2b300(puVar2,auStack_2c8,auStack_2c8,lVar3);
    func_0x000107c2b368(auStack_238,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b36c(param_2,param_2,auStack_238,uVar4,auStack_88,lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_d0;
    func_0x000107c2b300(puVar2,auStack_118,auStack_d0,lVar3);
    func_0x000107c2b368(auStack_d0,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_1a8;
    func_0x000107c2b300(puVar2,param_3 + 0x48,param_3 + 0x90,lVar3);
    func_0x000107c2b368(auStack_1a8,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b38c(param_2 + 0x90,auStack_1a8,auStack_1a8,lVar3,
                        *(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b36c(param_2 + 0x90,param_2 + 0x90,auStack_d0,*(undefined8 *)(param_1 + 0x38),
                        auStack_88,(long)*(int *)(param_1 + 0x40));
    func_0x000107c2b36c(param_2 + 0x48,auStack_2c8,param_2,*(undefined8 *)(param_1 + 0x38),
                        auStack_88,(long)*(int *)(param_1 + 0x40));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_118;
    func_0x000107c2b300(puVar2,auStack_118,auStack_118,lVar3);
    func_0x000107c2b368(auStack_118,puVar2,uVar4,auStack_88,lVar3);
    func_0x000107c2b38c(auStack_118,auStack_118,auStack_118,lVar3,*(undefined8 *)(param_1 + 0x138));
    func_0x000107c2b38c(param_2 + 0x48,auStack_280,param_2 + 0x48,(long)*(int *)(param_1 + 0x40),
                        *(undefined8 *)(param_1 + 0x138));
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    lVar3 = (long)*(int *)(param_1 + 0x40);
    puVar2 = auStack_118;
    func_0x000107c2b300(puVar2,auStack_118,auStack_118,lVar3);
    func_0x000107c2b368(auStack_118,puVar2,uVar4,auStack_88,lVar3);
    puVar2 = auStack_118;
  }
  func_0x000107c2b36c(param_2 + 0x48,param_2 + 0x48,puVar2,uVar4,auStack_88,lVar3);
  return;
}



/* Entry: 10ae37318; end: 10ae373b3;  */

void FUN_10ae37318(long param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    puVar5 = param_3;
    do {
      uVar4 = *puVar5 | uVar4;
      uVar2 = uVar2 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar2 != 0);
    uVar2 = -(ulong)(uVar4 != 0);
  }
  func_0x000107c2b314(param_2,*(undefined8 *)(param_1 + 0x38),param_3,(long)(int)uVar1);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    do {
      *(ulong *)(param_2 + lVar3 * 8) = *(ulong *)(param_2 + lVar3 * 8) & uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x40));
  }
  return;
}



/* Entry: 10ae373b4; end: 10ae377bb;  */

long * FUN_10ae373b4(long *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                    long *param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  long *unaff_x24;
  ulong *puVar23;
  long lVar24;
  long *unaff_x25;
  long *unaff_x26;
  int iVar25;
  long *unaff_x27;
  ulong uVar26;
  long *unaff_x28;
  long lStack_1d0;
  undefined4 uStack_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  long *plStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  ulong uStack_140;
  long alStack_138 [8];
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long *plStack_b8;
  undefined1 auStack_aa [66];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = param_1;
  plVar12 = param_3;
  plVar16 = param_5;
  func_0x000107c2b434(param_1,*param_2);
  if ((int)plVar7 == 0) {
    if ((int)param_3[2] != 0) {
LAB_10ae37438:
      plVar12 = (long *)0x6b;
      plVar16 = (long *)0xe9;
      goto LAB_10ae37450;
    }
    plVar7 = param_1 + 7;
    plVar8 = param_3;
    func_0x000107c2b340();
    if (-1 < (int)plVar8) goto LAB_10ae37438;
    func_0x000107c2b290();
    func_0x000107c2b34c(param_5);
    unaff_x25 = param_5;
    func_0x000107c2b350();
    unaff_x27 = param_5;
    func_0x000107c2b350();
    unaff_x28 = param_5;
    func_0x000107c2b350();
    unaff_x26 = param_5;
    func_0x000107c2b350();
    plVar13 = param_5;
    func_0x000107c2b350();
    plVar8 = plVar13;
    if (plVar13 != (long *)0x0) {
      unaff_x24 = plVar13;
      if (unaff_x28 != (long *)0x0) {
        (**(code **)(*param_1 + 0x80))(param_1,auStack_aa,&plStack_b8,param_1 + 10);
        puVar9 = auStack_aa;
        plVar7 = plStack_b8;
        plVar12 = unaff_x28;
        func_0x000107c2b338();
        plVar8 = (long *)0x0;
        if (puVar9 == (undefined1 *)0x0) goto LAB_10ae37798;
      }
      if (unaff_x26 != (long *)0x0) {
        (**(code **)(*param_1 + 0x80))(param_1,auStack_aa,&plStack_b8,param_1 + 0x13);
        puVar9 = auStack_aa;
        plVar12 = unaff_x26;
        func_0x000107c2b338();
        plVar8 = (long *)0x0;
        plVar7 = plStack_b8;
        if (puVar9 == (undefined1 *)0x0) goto LAB_10ae37798;
      }
      plVar12 = param_1 + 7;
      plVar8 = unaff_x27;
      plVar7 = param_3;
      FUN_10ae2ebd8();
      if (((int)plVar8 != 0) &&
         (plVar8 = unaff_x25, plVar7 = unaff_x27, plVar12 = param_3, plVar16 = param_5,
         func_0x00010ae2ea80(), (int)plVar8 != 0)) {
        if ((int)param_1[0x1c] == 0) {
          plVar8 = unaff_x27;
          plVar7 = unaff_x28;
          plVar12 = param_3;
          plVar16 = param_5;
          func_0x00010ae2ea80();
          if ((int)plVar8 != 0) {
            plVar8 = unaff_x25;
            plVar7 = unaff_x25;
            plVar12 = unaff_x27;
            plVar16 = param_5;
            FUN_10ae2e7bc();
            iVar4 = (int)plVar8;
            goto joined_r0x00010ae3760c;
          }
        }
        else {
          plVar8 = unaff_x27;
          plVar7 = param_3;
          plVar12 = param_3;
          plVar16 = param_5;
          FUN_10ae2e7bc();
          if (((int)plVar8 != 0) &&
             (plVar8 = unaff_x27, plVar7 = unaff_x27, plVar12 = param_3, plVar16 = param_5,
             FUN_10ae2e7bc(), (int)plVar8 != 0)) {
            plVar8 = unaff_x25;
            plVar7 = unaff_x25;
            plVar12 = unaff_x27;
            plVar16 = param_5;
            func_0x00010ae2e994();
            iVar4 = (int)plVar8;
joined_r0x00010ae3760c:
            if ((iVar4 != 0) &&
               (plVar8 = unaff_x25, plVar7 = unaff_x25, plVar12 = unaff_x26, plVar16 = param_5,
               FUN_10ae2e7bc(), (int)plVar8 != 0)) {
              plVar12 = plVar13;
              FUN_10ae336a4(plVar13,unaff_x25,param_1 + 7,param_5);
              if (plVar12 == (long *)0x0) {
                func_0x000107c34f64();
                if (((plVar12 == (long *)0x0) ||
                    (*(uint *)((long)plVar12 + 0x184) == *(uint *)(plVar12 + 0x30))) ||
                   ((*(uint *)(plVar12 + (ulong)*(uint *)(plVar12 + 0x30) * 3 + 2) & 0xff000fff) !=
                    0x300006e)) {
                  plVar12 = (long *)0x3;
                  plVar16 = (long *)0x12b;
                }
                else {
                  func_0x000107c2b290();
                  plVar12 = (long *)0x6b;
                  plVar16 = (long *)0x129;
                }
              }
              else {
                iVar4 = (int)plVar13[1];
                if (iVar4 < 1) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = *(uint *)*plVar13 & 1;
                }
                if (uVar19 == (uint)param_4) {
LAB_10ae376e0:
                  if (iVar4 < 1) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = *(uint *)*plVar13 & 1;
                  }
                  if (uVar19 == (uint)param_4) {
                    plVar8 = param_1;
                    plVar7 = param_2;
                    plVar12 = param_3;
                    FUN_10ae35fe0();
                    goto LAB_10ae37798;
                  }
                  plVar12 = (long *)0x44;
                  plVar16 = (long *)0x13a;
                }
                else {
                  if (iVar4 != 0) {
                    uVar26 = 0;
                    lVar5 = (long)iVar4;
                    puVar6 = (ulong *)*plVar13;
                    do {
                      uVar26 = *puVar6 | uVar26;
                      lVar5 = lVar5 + -1;
                      puVar6 = puVar6 + 1;
                    } while (lVar5 != 0);
                    if (uVar26 != 0) {
                      plVar7 = param_1 + 7;
                      plVar8 = plVar13;
                      plVar12 = plVar13;
                      func_0x000107c2b2f4();
                      if ((int)plVar8 == 0) goto LAB_10ae37798;
                      iVar4 = (int)plVar13[1];
                      goto LAB_10ae376e0;
                    }
                  }
                  plVar12 = (long *)0x6c;
                  plVar16 = (long *)0x132;
                }
              }
              plVar7 = (long *)0x0;
              func_0x000107c2b29c(0xf,0,plVar12,&UNK_10f6c70f6,plVar16);
              plVar8 = (long *)0x0;
            }
          }
        }
      }
    }
LAB_10ae37798:
    if ((char)param_5[5] == '\0') {
      lVar5 = param_5[2];
      param_5[2] = lVar5 + -1;
      param_5[4] = *(long *)(param_5[1] + (lVar5 + -1) * 8);
    }
  }
  else {
    plVar12 = (long *)0x6a;
    plVar16 = (long *)0xe4;
LAB_10ae37450:
    plVar7 = (long *)0x0;
    func_0x000107c2b29c(0xf,0,plVar12,&UNK_10f6c70f6,plVar16);
    plVar8 = (long *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar8;
  }
  ___stack_chk_fail();
  plVar13 = (long *)(long)(int)plVar8[3];
  plVar8 = (long *)plVar8[6];
  puVar6 = &uStack_140;
  pcStack_c8 = FUN_10ae377bc;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_158 = param_5;
  plStack_160 = param_3;
  plStack_f0 = param_1;
  plStack_e8 = param_2;
  plStack_e0 = param_3;
  plStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((plVar13 < (long *)0xa) &&
     (plStack_158 = plVar8, plStack_160 = plVar13, plVar13 == (long *)(long)(int)plVar8[4])) {
    if (plVar13 == (long *)0x0) {
      uVar26 = 0xffffffffffffffff;
    }
    else {
      ___memcpy_chk(&uStack_140,plVar8[3],(long)plVar13 << 3,0x48);
      uVar26 = uStack_140 - 2;
      if ((uStack_140 < 2) &&
         (uStack_140 = uStack_140 | 0xfffffffffffffffe, uVar26 = uStack_140, plVar13 != (long *)0x1)
         ) {
        plVar16 = alStack_138;
        lVar5 = (long)plVar13 + -2;
        do {
          lVar17 = *plVar16;
          *plVar16 = lVar17 + -1;
          if (lVar17 != 0) break;
          bVar1 = lVar5 != 0;
          plVar16 = plVar16 + 1;
          lVar5 = lVar5 + -1;
        } while (bVar1);
      }
    }
    uStack_140 = uVar26;
    plVar21 = plVar7;
    plVar10 = plVar12;
    plVar16 = plVar13;
    param_6 = plVar8;
    FUN_10ae2ee78();
    param_2 = plVar12;
    param_1 = plVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
      return plVar21;
    }
  }
  else {
    _abort();
    plVar21 = plVar7;
    plVar10 = plVar12;
    puVar6 = (ulong *)plVar8;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_10ae2f2b4;
  uVar19 = *(uint *)(puVar6 + 1);
  plStack_1a0 = unaff_x28;
  plStack_198 = unaff_x27;
  plStack_190 = unaff_x26;
  plStack_188 = unaff_x25;
  plStack_180 = unaff_x24;
  uStack_178 = param_4;
  plStack_170 = param_1;
  plStack_168 = param_2;
  ppuStack_150 = &puStack_d0;
  if (0 < (int)uVar19) {
    puVar23 = (ulong *)*puVar6;
    uVar26 = *puVar23;
    if ((uVar26 & 1) != 0) {
      if ((int)puVar6[2] != 0) {
        uVar11 = 0x6d;
        uVar15 = 0x395;
        goto LAB_10ae2f37c;
      }
      if ((int)plVar10[2] == 0) {
        lVar5 = *plVar10;
        func_0x000107c34f78(lVar5,(long)(int)plVar10[1],puVar23,(ulong)uVar19);
        if ((int)lVar5 < 0) {
          iVar4 = (int)plVar13[1];
          if (iVar4 == 0) {
            uVar26 = uVar26 & 0xfffffffffffffffe;
            if (uVar19 != 1) {
              lVar5 = (ulong)uVar19 - 1;
              do {
                puVar23 = puVar23 + 1;
                uVar26 = *puVar23 | uVar26;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
            if (uVar26 != 0) {
              plVar12 = plVar21;
              func_0x000107c2b2fc(plVar21,1);
              if ((int)plVar12 == 0) {
                return (long *)0x0;
              }
              *(undefined4 *)(plVar21 + 2) = 0;
              *(undefined8 *)*plVar21 = 1;
              *(undefined4 *)(plVar21 + 1) = 1;
              return (long *)0x1;
            }
            *(undefined4 *)(plVar21 + 2) = 0;
            *(undefined4 *)(plVar21 + 1) = 0;
            return (long *)0x1;
          }
          if ((param_6 == (long *)0x0) &&
             (func_0x00010ae2ed3c(puVar6,plVar16), param_6 = (long *)puVar6, puVar6 == (ulong *)0x0)
             ) {
            plVar21 = (long *)0x0;
            plVar12 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          iVar3 = (int)param_6[4];
          lVar5 = (long)iVar3;
          uVar19 = 3;
          if (iVar4 != 1) {
            uVar19 = 1;
          }
          uVar2 = 4;
          if (iVar4 < 2) {
            uVar2 = uVar19;
          }
          uVar19 = 5;
          if (iVar4 < 5) {
            uVar19 = uVar2;
          }
          uVar2 = 6;
          if (iVar4 < 0xf) {
            uVar2 = uVar19;
          }
          uVar14 = 1 << (ulong)uVar2;
          uVar19 = (uint)(lVar5 << 1);
          if ((int)uVar19 <= (int)uVar14) {
            uVar19 = uVar14;
          }
          iVar18 = (uVar19 + (iVar3 << (ulong)uVar2)) * 8;
          iVar25 = iVar18 + 0x40;
          if (iVar25 == -8) {
            plVar21 = (long *)0x0;
            plVar12 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar7 = (long *)((long)iVar25 + 8);
          _malloc();
          if (plVar7 == (long *)0x0) {
            plVar21 = (long *)0x0;
            plVar12 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar12 = plVar7 + 1;
          *plVar7 = (long)iVar25;
          lVar17 = ((ulong)plVar12 & 0xffffffffffffffc0) + 0x40;
          if (iVar18 != 0) {
            _bzero(lVar17,(long)iVar18);
          }
          lStack_1b8 = lVar17 + (long)(iVar3 << (ulong)uVar2) * 8;
          lStack_1d0 = lStack_1b8 + lVar5 * 8;
          uStack_1c8 = 0;
          uStack_1b0 = 0;
          uStack_1c0 = 0x200000000;
          uStack_1a8 = 0x200000000;
          plVar8 = &lStack_1b8;
          iStack_1c4 = iVar3;
          iStack_1ac = iVar3;
          FUN_10ae2f7bc(plVar8,param_6,plVar16);
          if ((int)plVar8 == 0) {
            plVar21 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar8 = &lStack_1d0;
          func_0x000107c2b37c(plVar8,plVar10,param_6,param_6,plVar16);
          if ((int)plVar8 != 0) {
            func_0x000107c2b330(lVar17,lVar5,&lStack_1b8);
            func_0x000107c2b330(lVar17 + lVar5 * 8,lVar5,&lStack_1d0);
            if (1 < uVar2) {
              plVar8 = &lStack_1b8;
              func_0x000107c2b37c(plVar8,&lStack_1d0,&lStack_1d0,param_6,plVar16);
              if ((int)plVar8 == 0) goto LAB_10ae2f788;
              func_0x000107c2b330(lVar17 + lVar5 * 0x10,lVar5,&lStack_1b8);
              if (uVar14 < 5) {
                uVar14 = 4;
              }
              lVar24 = (ulong)uVar14 - 3;
              lVar22 = (long)plVar7 + ((long)iVar3 * 0x18 - ((ulong)plVar12 & 0x3f)) + 0x48;
              do {
                plVar7 = &lStack_1b8;
                func_0x000107c2b37c(plVar7,&lStack_1d0,&lStack_1b8,param_6,plVar16);
                if ((int)plVar7 == 0) goto LAB_10ae2f788;
                func_0x000107c2b330(lVar22,lVar5,&lStack_1b8);
                lVar22 = lVar22 + lVar5 * 8;
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
            }
            uVar19 = iVar4 * 0x40 - 1;
            uVar26 = (ulong)uVar19;
            iVar25 = 0;
            if (uVar2 != 0) {
              iVar25 = (int)uVar19 / (int)uVar2;
            }
            uVar14 = 0;
            iVar25 = uVar19 - iVar25 * uVar2;
            if (-1 < iVar25) {
              iVar18 = iVar25 + 1;
              do {
                uVar19 = (uint)uVar26;
                if (((int)uVar19 < 0) || (*(uint *)(plVar13 + 1) <= uVar19 >> 6)) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = (uint)(*(ulong *)(*plVar13 + (ulong)(uVar19 >> 6) * 8) >> (uVar26 & 0x3f)
                                 ) & 1;
                }
                uVar14 = uVar20 | uVar14 << 1;
                uVar26 = (ulong)(uVar19 - 1);
                iVar18 = iVar18 + -1;
              } while (0 < iVar18);
              uVar26 = (ulong)((iVar4 * 0x40 - iVar25) - 2);
            }
            plVar7 = &lStack_1b8;
            FUN_10ae2f864(plVar7,iVar3,lVar17,uVar14,uVar2);
            iVar4 = (int)plVar7;
            while (iVar4 != 0) {
              iVar4 = (int)uVar26;
              if (iVar4 < 0) {
                func_0x000107c2b380(plVar21,&lStack_1b8,param_6,plVar16);
                goto LAB_10ae2f790;
              }
              iVar25 = 0;
              uVar19 = 0;
              uVar26 = (ulong)(iVar4 - uVar2);
              do {
                plVar7 = &lStack_1b8;
                func_0x000107c2b37c(plVar7,&lStack_1b8,&lStack_1b8,param_6,plVar16);
                if ((int)plVar7 == 0) goto LAB_10ae2f788;
                uVar14 = iVar4 + iVar25;
                if (((int)uVar14 < 0) || (*(uint *)(plVar13 + 1) <= uVar14 >> 6)) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (uint)(*(ulong *)(*plVar13 + (ulong)(uVar14 >> 6) * 8) >>
                                 ((ulong)uVar14 & 0x3f)) & 1;
                }
                uVar19 = uVar14 | uVar19 << 1;
                iVar25 = iVar25 + -1;
              } while (uVar2 + iVar25 != 0);
              plVar7 = &lStack_1d0;
              FUN_10ae2f864(plVar7,iVar3,lVar17,uVar19,uVar2);
              if ((int)plVar7 == 0) break;
              plVar7 = &lStack_1b8;
              func_0x000107c2b37c(plVar7,&lStack_1b8,&lStack_1d0,param_6,plVar16);
              iVar4 = (int)plVar7;
            }
          }
LAB_10ae2f788:
          plVar21 = (long *)0x0;
LAB_10ae2f790:
          func_0x000107c2b384();
          func_0x000107c2b534(plVar12);
          return plVar21;
        }
      }
      uVar11 = 0x6b;
      uVar15 = 0x399;
      goto LAB_10ae2f37c;
    }
  }
  uVar11 = 0x68;
  uVar15 = 0x391;
LAB_10ae2f37c:
  func_0x000107c2b29c(3,0,uVar11,&UNK_10f6c6819,uVar15);
  return (long *)0x0;
}



/* Entry: 10ae377bc; end: 10ae377d3;  */

undefined8 *
FUN_10ae377bc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,long *param_5,
             long *param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  long lStack_110;
  undefined4 uStack_108;
  int iStack_104;
  undefined8 uStack_100;
  long lStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  ulong uStack_80;
  long alStack_78 [8];
  long lStack_38;
  
  plVar9 = (long *)(long)*(int *)(param_1 + 0x18);
  plVar11 = *(long **)(param_1 + 0x30);
  puVar19 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((plVar9 < (long *)0xa) && (plVar9 == (long *)(long)(int)plVar11[4])) {
    if (plVar9 == (long *)0x0) {
      uVar22 = 0xffffffffffffffff;
    }
    else {
      ___memcpy_chk(&uStack_80,plVar11[3],(long)plVar9 << 3,0x48);
      uVar22 = uStack_80 - 2;
      if ((uStack_80 < 2) &&
         (uStack_80 = uStack_80 | 0xfffffffffffffffe, uVar22 = uStack_80, plVar9 != (long *)0x1)) {
        plVar6 = alStack_78;
        lVar17 = (long)plVar9 - 2;
        do {
          lVar13 = *plVar6;
          *plVar6 = lVar13 + -1;
          if (lVar13 != 0) break;
          bVar1 = lVar17 != 0;
          plVar6 = plVar6 + 1;
          lVar17 = lVar17 + -1;
        } while (bVar1);
      }
    }
    uStack_80 = uVar22;
    param_5 = plVar9;
    param_6 = plVar11;
    FUN_10ae2ee78();
    plVar11 = (long *)puVar19;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return param_2;
    }
  }
  else {
    _abort();
  }
  ___stack_chk_fail();
  uVar15 = *(uint *)(plVar11 + 1);
  if (0 < (int)uVar15) {
    puVar19 = (ulong *)*plVar11;
    uVar22 = *puVar19;
    if ((uVar22 & 1) != 0) {
      if ((int)plVar11[2] != 0) {
        uVar8 = 0x6d;
        uVar12 = 0x395;
        goto LAB_10ae2f37c;
      }
      if (*(int *)(param_3 + 2) == 0) {
        uVar8 = *param_3;
        func_0x000107c34f78(uVar8,(long)*(int *)(param_3 + 1),puVar19,(ulong)uVar15);
        if ((int)uVar8 < 0) {
          iVar4 = (int)plVar9[1];
          if (iVar4 == 0) {
            uVar22 = uVar22 & 0xfffffffffffffffe;
            if (uVar15 != 1) {
              lVar17 = (ulong)uVar15 - 1;
              do {
                puVar19 = puVar19 + 1;
                uVar22 = *puVar19 | uVar22;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            if (uVar22 != 0) {
              puVar5 = param_2;
              func_0x000107c2b2fc(param_2,1);
              if ((int)puVar5 == 0) {
                return (undefined8 *)0x0;
              }
              *(undefined4 *)(param_2 + 2) = 0;
              *(undefined8 *)*param_2 = 1;
              *(undefined4 *)(param_2 + 1) = 1;
              return (undefined8 *)0x1;
            }
            *(undefined4 *)(param_2 + 2) = 0;
            *(undefined4 *)(param_2 + 1) = 0;
            return (undefined8 *)0x1;
          }
          if ((param_6 == (long *)0x0) &&
             (func_0x00010ae2ed3c(plVar11,param_5), param_6 = plVar11, plVar11 == (long *)0x0)) {
            param_2 = (undefined8 *)0x0;
            plVar11 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          iVar3 = (int)param_6[4];
          lVar17 = (long)iVar3;
          uVar15 = 3;
          if (iVar4 != 1) {
            uVar15 = 1;
          }
          uVar2 = 4;
          if (iVar4 < 2) {
            uVar2 = uVar15;
          }
          uVar15 = 5;
          if (iVar4 < 5) {
            uVar15 = uVar2;
          }
          uVar2 = 6;
          if (iVar4 < 0xf) {
            uVar2 = uVar15;
          }
          uVar10 = 1 << (ulong)uVar2;
          uVar15 = (uint)(lVar17 << 1);
          if ((int)uVar15 <= (int)uVar10) {
            uVar15 = uVar10;
          }
          iVar14 = (uVar15 + (iVar3 << (ulong)uVar2)) * 8;
          iVar21 = iVar14 + 0x40;
          if (iVar21 == -8) {
            param_2 = (undefined8 *)0x0;
            plVar11 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar6 = (long *)((long)iVar21 + 8);
          _malloc();
          if (plVar6 == (long *)0x0) {
            param_2 = (undefined8 *)0x0;
            plVar11 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar11 = plVar6 + 1;
          *plVar6 = (long)iVar21;
          lVar13 = ((ulong)plVar11 & 0xffffffffffffffc0) + 0x40;
          if (iVar14 != 0) {
            _bzero(lVar13,(long)iVar14);
          }
          lStack_f8 = lVar13 + (long)(iVar3 << (ulong)uVar2) * 8;
          lStack_110 = lStack_f8 + lVar17 * 8;
          uStack_108 = 0;
          uStack_f0 = 0;
          uStack_100 = 0x200000000;
          uStack_e8 = 0x200000000;
          plVar7 = &lStack_f8;
          iStack_104 = iVar3;
          iStack_ec = iVar3;
          FUN_10ae2f7bc(plVar7,param_6,param_5);
          if ((int)plVar7 == 0) {
            param_2 = (undefined8 *)0x0;
            goto LAB_10ae2f790;
          }
          plVar7 = &lStack_110;
          func_0x000107c2b37c(plVar7,param_3,param_6,param_6,param_5);
          if ((int)plVar7 != 0) {
            func_0x000107c2b330(lVar13,lVar17,&lStack_f8);
            func_0x000107c2b330(lVar13 + lVar17 * 8,lVar17,&lStack_110);
            if (1 < uVar2) {
              plVar7 = &lStack_f8;
              func_0x000107c2b37c(plVar7,&lStack_110,&lStack_110,param_6,param_5);
              if ((int)plVar7 == 0) goto LAB_10ae2f788;
              func_0x000107c2b330(lVar13 + lVar17 * 0x10,lVar17,&lStack_f8);
              if (uVar10 < 5) {
                uVar10 = 4;
              }
              lVar20 = (ulong)uVar10 - 3;
              lVar18 = (long)plVar6 + ((long)iVar3 * 0x18 - ((ulong)plVar11 & 0x3f)) + 0x48;
              do {
                plVar6 = &lStack_f8;
                func_0x000107c2b37c(plVar6,&lStack_110,&lStack_f8,param_6,param_5);
                if ((int)plVar6 == 0) goto LAB_10ae2f788;
                func_0x000107c2b330(lVar18,lVar17,&lStack_f8);
                lVar18 = lVar18 + lVar17 * 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            uVar15 = iVar4 * 0x40 - 1;
            uVar22 = (ulong)uVar15;
            iVar21 = 0;
            if (uVar2 != 0) {
              iVar21 = (int)uVar15 / (int)uVar2;
            }
            uVar10 = 0;
            iVar21 = uVar15 - iVar21 * uVar2;
            if (-1 < iVar21) {
              iVar14 = iVar21 + 1;
              do {
                uVar15 = (uint)uVar22;
                if (((int)uVar15 < 0) || (*(uint *)(plVar9 + 1) <= uVar15 >> 6)) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = (uint)(*(ulong *)(*plVar9 + (ulong)(uVar15 >> 6) * 8) >> (uVar22 & 0x3f))
                           & 1;
                }
                uVar10 = uVar16 | uVar10 << 1;
                uVar22 = (ulong)(uVar15 - 1);
                iVar14 = iVar14 + -1;
              } while (0 < iVar14);
              uVar22 = (ulong)((iVar4 * 0x40 - iVar21) - 2);
            }
            plVar6 = &lStack_f8;
            FUN_10ae2f864(plVar6,iVar3,lVar13,uVar10,uVar2);
            iVar4 = (int)plVar6;
            while (iVar4 != 0) {
              iVar4 = (int)uVar22;
              if (iVar4 < 0) {
                func_0x000107c2b380(param_2,&lStack_f8,param_6,param_5);
                goto LAB_10ae2f790;
              }
              iVar21 = 0;
              uVar15 = 0;
              uVar22 = (ulong)(iVar4 - uVar2);
              do {
                plVar6 = &lStack_f8;
                func_0x000107c2b37c(plVar6,&lStack_f8,&lStack_f8,param_6,param_5);
                if ((int)plVar6 == 0) goto LAB_10ae2f788;
                uVar10 = iVar4 + iVar21;
                if (((int)uVar10 < 0) || (*(uint *)(plVar9 + 1) <= uVar10 >> 6)) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (uint)(*(ulong *)(*plVar9 + (ulong)(uVar10 >> 6) * 8) >>
                                 ((ulong)uVar10 & 0x3f)) & 1;
                }
                uVar15 = uVar10 | uVar15 << 1;
                iVar21 = iVar21 + -1;
              } while (uVar2 + iVar21 != 0);
              plVar6 = &lStack_110;
              FUN_10ae2f864(plVar6,iVar3,lVar13,uVar15,uVar2);
              if ((int)plVar6 == 0) break;
              plVar6 = &lStack_f8;
              func_0x000107c2b37c(plVar6,&lStack_f8,&lStack_110,param_6,param_5);
              iVar4 = (int)plVar6;
            }
          }
LAB_10ae2f788:
          param_2 = (undefined8 *)0x0;
LAB_10ae2f790:
          func_0x000107c2b384();
          func_0x000107c2b534(plVar11);
          return param_2;
        }
      }
      uVar8 = 0x6b;
      uVar12 = 0x399;
      goto LAB_10ae2f37c;
    }
  }
  uVar8 = 0x68;
  uVar12 = 0x391;
LAB_10ae2f37c:
  func_0x000107c2b29c(3,0,uVar8,&UNK_10f6c6819,uVar12);
  return (undefined8 *)0x0;
}



/* Entry: 10ae377d4; end: 10ae37903;  */

bool FUN_10ae377d4(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((int)*(uint *)(param_1 + 3) < 1) {
    return false;
  }
  lVar2 = 0;
  uVar1 = 0;
  do {
    uVar1 = *(ulong *)(param_3 + lVar2) | uVar1;
    lVar2 = lVar2 + 8;
  } while ((ulong)*(uint *)(param_1 + 3) * 8 - lVar2 != 0);
  if (uVar1 != 0) {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    func_0x000107c2b388(param_2,(long)(int)param_1[3],param_2,(long)(int)param_1[3],param_1[6]);
  }
  return uVar1 != 0;
}



/* Entry: 10ae37904; end: 10ae37cc3;  */

void FUN_10ae37904(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  int iVar17;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  do {
    puVar6 = param_2;
    puVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 **)((long)register0x00000008 + -0x1c68) = param_4;
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x1ac8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ad0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ab8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ac0) = 0;
    unaff_x24 = (undefined8 *)((long)register0x00000008 + -0x1b80);
    *(undefined8 *)((long)register0x00000008 + -0x1ae8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1af0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ad8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ae0) = 0;
    puVar15 = (undefined8 *)((long)register0x00000008 + -0x1aa8);
    *(undefined8 *)((long)register0x00000008 + -0x1b08) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b10) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1af8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b00) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b28) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b30) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b18) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b20) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b70) = 0;
    *(undefined8 *)((long)register0x00000008 + -7000) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b80) = 0;
    uVar7 = param_3[8];
    uVar18 = param_3[5];
    uVar9 = param_3[4];
    uVar19 = param_3[6];
    *(undefined8 *)((long)register0x00000008 + -0x1a70) = param_3[7];
    *(undefined8 *)((long)register0x00000008 + -0x1a78) = uVar19;
    uVar21 = *param_3;
    uVar20 = param_3[3];
    uVar19 = param_3[2];
    *(undefined8 *)((long)register0x00000008 + -0x1aa0) = param_3[1];
    *(undefined8 *)((long)register0x00000008 + -0x1aa8) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x1ab0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a68) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x1a80) = uVar18;
    *(undefined8 *)((long)register0x00000008 + -0x1a88) = uVar9;
    *(undefined8 *)((long)register0x00000008 + -0x1a90) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -0x1a98) = uVar19;
    uVar19 = param_3[10];
    uVar18 = param_3[9];
    uVar7 = param_3[0x11];
    uVar20 = param_3[0x10];
    uVar9 = param_3[0xf];
    uVar21 = param_3[0xd];
    *(undefined8 *)((long)register0x00000008 + -0x1a38) = param_3[0xe];
    *(undefined8 *)((long)register0x00000008 + -0x1a40) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x1a28) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -0x1a30) = uVar9;
    uVar21 = param_3[0xc];
    uVar20 = param_3[0xb];
    uVar9 = param_3[0x16];
    uVar23 = param_3[0x19];
    uVar22 = param_3[0x18];
    *(undefined8 *)((long)register0x00000008 + -0x19f0) = param_3[0x17];
    *(undefined8 *)((long)register0x00000008 + -0x19f8) = uVar9;
    *(undefined8 *)((long)register0x00000008 + -0x19e0) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x19e8) = uVar22;
    uVar22 = param_3[0x12];
    uVar24 = param_3[0x15];
    uVar23 = param_3[0x14];
    uVar9 = param_3[0x1a];
    *(undefined8 *)((long)register0x00000008 + -0x1a10) = param_3[0x13];
    *(undefined8 *)((long)register0x00000008 + -0x1a18) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x1a00) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x1a08) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x1a20) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x19d8) = uVar9;
    uVar13 = 2;
    unaff_x25 = 0xd8;
    *(undefined8 *)((long)register0x00000008 + -0x1a58) = uVar19;
    *(undefined8 *)((long)register0x00000008 + -0x1a60) = uVar18;
    *(undefined8 *)((long)register0x00000008 + -0x1a48) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x1a50) = uVar20;
    unaff_x23 = puVar15;
    do {
      if ((uVar13 & 1) == 0) {
        param_4 = unaff_x24 + (uVar13 >> 1) * 0x1b;
        param_2 = unaff_x23 + 0x1b;
        FUN_10ae36c24(puVar5);
      }
      else {
        param_2 = unaff_x23 + 0x1b;
        param_4 = puVar15;
        FUN_10ae36638(puVar5,param_2,puVar15,unaff_x23);
      }
      uVar13 = uVar13 + 1;
      unaff_x23 = unaff_x23 + 0x1b;
    } while (uVar13 != 0x20);
    unaff_x22 = puVar5 + 2;
    func_0x000107c2b32c();
    uVar4 = (uint)unaff_x22;
    param_1 = unaff_x22;
    if (uVar4 == 0) {
LAB_10ae37c54:
      puVar6[8] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[10] = 0;
      puVar6[9] = 0;
      puVar6[0xc] = 0;
      puVar6[0xb] = 0;
      puVar6[0xe] = 0;
      puVar6[0xd] = 0;
      puVar6[0x10] = 0;
      puVar6[0xf] = 0;
      puVar6[0x11] = 0;
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0x17] = 0;
      puVar6[0x16] = 0;
      puVar6[0x19] = 0;
      puVar6[0x18] = 0;
      puVar6[0x1a] = 0;
      unaff_x22 = puVar15;
    }
    else {
      unaff_x28 = 0;
      uVar2 = uVar4 - 1;
      unaff_x26 = 0xcccccccd;
      puVar15 = unaff_x22;
      do {
        while( true ) {
          unaff_x27 = (undefined8 *)(ulong)uVar2;
          iVar17 = (int)unaff_x28;
          if (iVar17 != 0) {
            param_1 = puVar5;
            param_2 = puVar6;
            param_4 = puVar6;
            FUN_10ae36c24();
          }
          if ((uVar2 / 5) * 5 == uVar2) break;
          uVar2 = uVar2 - 1;
          puVar15 = unaff_x27;
          if (uVar4 <= uVar2) {
            puVar15 = unaff_x22;
            unaff_x23 = unaff_x27;
            if (iVar17 == 0) goto LAB_10ae37c54;
            goto LAB_10ae37c84;
          }
        }
        uVar1 = *(uint *)(puVar5 + 3);
        uVar16 = (uint)puVar15;
        uVar3 = uVar16 + 3 >> 6;
        if (uVar3 < uVar1) {
          uVar13 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)uVar3 * 8) >>
                    ((ulong)(uVar16 + 3) & 0x3f) & 1) << 4;
        }
        else {
          uVar13 = 0;
        }
        uVar3 = uVar16 + 2 >> 6;
        if (uVar3 < uVar1) {
          uVar10 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)uVar3 * 8) >>
                    ((ulong)(uVar16 + 2) & 0x3f) & 1) << 3;
        }
        else {
          uVar10 = 0;
        }
        uVar3 = uVar16 + 1 >> 6;
        if (uVar3 < uVar1) {
          uVar11 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)uVar3 * 8) >>
                    ((ulong)(uVar16 + 1) & 0x3f) & 1) << 2;
        }
        else {
          uVar11 = 0;
        }
        if (uVar16 >> 6 < uVar1) {
          uVar12 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) +
                              (ulong)(uVar16 >> 6) * 8) >> ((ulong)puVar15 & 0x3f) & 1) << 1;
        }
        else {
          uVar12 = 0;
        }
        if (uVar2 >> 6 < uVar1) {
          uVar8 = *(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)(uVar2 >> 6) * 8
                            ) >> ((ulong)unaff_x27 & 0x3f) & 1;
        }
        else {
          uVar8 = 0;
        }
        uVar14 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1b90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1ba8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1b98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1ba0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bc8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bd0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bb8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1be8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bd8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1be0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c08) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c10) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c00) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c28) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c18) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c20) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c48) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c50) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c38) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c60) = 0;
        unaff_x25 = uVar10 | uVar13 | uVar11 | uVar12 | uVar8;
        unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x1b80);
        unaff_x24 = (undefined8 *)(ulong)*(uint *)(puVar5 + 8);
        do {
          param_4 = (undefined8 *)((long)((uVar14 ^ unaff_x25) - 1) >> 0x3f);
          param_2 = (undefined8 *)((long)register0x00000008 + -0x1c60);
          param_1 = unaff_x24;
          FUN_10ae361dc();
          uVar14 = uVar14 + 1;
          unaff_x23 = unaff_x23 + 0x1b;
        } while (uVar14 != 0x20);
        if (iVar17 == 0) {
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1c40);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x1c28);
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x1c30);
          puVar6[5] = *(undefined8 *)((long)register0x00000008 + -0x1c38);
          puVar6[4] = uVar7;
          puVar6[7] = uVar18;
          puVar6[6] = uVar9;
          puVar6[8] = *(undefined8 *)((long)register0x00000008 + -0x1c20);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x1c60);
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x1c48);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1c50);
          puVar6[1] = *(undefined8 *)((long)register0x00000008 + -0x1c58);
          *puVar6 = uVar18;
          puVar6[3] = uVar9;
          puVar6[2] = uVar7;
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1c08);
          puVar6[0xc] = *(undefined8 *)((long)register0x00000008 + -0x1c00);
          puVar6[0xb] = uVar7;
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1bf8);
          puVar6[0xe] = *(undefined8 *)((long)register0x00000008 + -0x1bf0);
          puVar6[0xd] = uVar7;
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1be8);
          puVar6[0x10] = *(undefined8 *)((long)register0x00000008 + -0x1be0);
          puVar6[0xf] = uVar7;
          puVar6[0x11] = *(undefined8 *)((long)register0x00000008 + -0x1bd8);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1c18);
          puVar6[10] = *(undefined8 *)((long)register0x00000008 + -0x1c10);
          puVar6[9] = uVar7;
          puVar6[0x1a] = *(undefined8 *)((long)register0x00000008 + -0x1b90);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x1bb0);
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x1b98);
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1ba0);
          puVar6[0x17] = *(undefined8 *)((long)register0x00000008 + -0x1ba8);
          puVar6[0x16] = uVar18;
          puVar6[0x19] = uVar9;
          puVar6[0x18] = uVar7;
          uVar7 = *(undefined8 *)((long)register0x00000008 + -0x1bd0);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x1bb8);
          uVar9 = *(undefined8 *)((long)register0x00000008 + -0x1bc0);
          puVar6[0x13] = *(undefined8 *)((long)register0x00000008 + -0x1bc8);
          puVar6[0x12] = uVar7;
          puVar6[0x15] = uVar18;
          puVar6[0x14] = uVar9;
        }
        else {
          param_1 = puVar5;
          param_2 = puVar6;
          param_4 = puVar6;
          FUN_10ae36638();
        }
        uVar2 = uVar2 - 1;
        unaff_x28 = 1;
        puVar15 = unaff_x27;
      } while (uVar2 < uVar4);
    }
LAB_10ae37c84:
    unaff_x20 = 0x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
      return;
    }
    unaff_x30 = FUN_10ae37cc4;
    ___stack_chk_fail();
    param_3 = (undefined8 *)(param_1[1] + 8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1c70);
    unaff_x19 = puVar6;
    unaff_x21 = puVar5;
  } while( true );
}



/* Entry: 10ae37cc4; end: 10ae37cd3;  */

void FUN_10ae37cc4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  ulong uVar14;
  ulong uVar15;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *puVar16;
  undefined8 *unaff_x22;
  uint uVar17;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  int iVar18;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  do {
    puVar6 = param_2;
    puVar5 = param_1;
    puVar7 = (undefined8 *)(puVar5[1] + 8);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 **)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    *(undefined8 **)((long)register0x00000008 + -0x1c68) = param_3;
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined8 *)((long)register0x00000008 + -0x1ac8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ad0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ab8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ac0) = 0;
    unaff_x24 = (undefined8 *)((long)register0x00000008 + -0x1b80);
    *(undefined8 *)((long)register0x00000008 + -0x1ae8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1af0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ad8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1ae0) = 0;
    puVar16 = (undefined8 *)((long)register0x00000008 + -0x1aa8);
    *(undefined8 *)((long)register0x00000008 + -0x1b08) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b10) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1af8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b00) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b28) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b30) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b18) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b20) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b38) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b70) = 0;
    *(undefined8 *)((long)register0x00000008 + -7000) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1b80) = 0;
    uVar8 = puVar7[8];
    uVar19 = puVar7[5];
    uVar10 = puVar7[4];
    uVar20 = puVar7[6];
    *(undefined8 *)((long)register0x00000008 + -0x1a70) = puVar7[7];
    *(undefined8 *)((long)register0x00000008 + -0x1a78) = uVar20;
    uVar22 = *puVar7;
    uVar21 = puVar7[3];
    uVar20 = puVar7[2];
    *(undefined8 *)((long)register0x00000008 + -0x1aa0) = puVar7[1];
    *(undefined8 *)((long)register0x00000008 + -0x1aa8) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x1ab0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1a68) = uVar8;
    *(undefined8 *)((long)register0x00000008 + -0x1a80) = uVar19;
    *(undefined8 *)((long)register0x00000008 + -0x1a88) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x1a90) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x1a98) = uVar20;
    uVar20 = puVar7[10];
    uVar19 = puVar7[9];
    uVar8 = puVar7[0x11];
    uVar21 = puVar7[0x10];
    uVar10 = puVar7[0xf];
    uVar22 = puVar7[0xd];
    *(undefined8 *)((long)register0x00000008 + -0x1a38) = puVar7[0xe];
    *(undefined8 *)((long)register0x00000008 + -0x1a40) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x1a28) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x1a30) = uVar10;
    uVar22 = puVar7[0xc];
    uVar21 = puVar7[0xb];
    uVar10 = puVar7[0x16];
    uVar24 = puVar7[0x19];
    uVar23 = puVar7[0x18];
    *(undefined8 *)((long)register0x00000008 + -0x19f0) = puVar7[0x17];
    *(undefined8 *)((long)register0x00000008 + -0x19f8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x19e0) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x19e8) = uVar23;
    uVar23 = puVar7[0x12];
    uVar25 = puVar7[0x15];
    uVar24 = puVar7[0x14];
    uVar10 = puVar7[0x1a];
    *(undefined8 *)((long)register0x00000008 + -0x1a10) = puVar7[0x13];
    *(undefined8 *)((long)register0x00000008 + -0x1a18) = uVar23;
    *(undefined8 *)((long)register0x00000008 + -0x1a00) = uVar25;
    *(undefined8 *)((long)register0x00000008 + -0x1a08) = uVar24;
    *(undefined8 *)((long)register0x00000008 + -0x1a20) = uVar8;
    *(undefined8 *)((long)register0x00000008 + -0x19d8) = uVar10;
    uVar14 = 2;
    unaff_x25 = 0xd8;
    *(undefined8 *)((long)register0x00000008 + -0x1a58) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -0x1a60) = uVar19;
    *(undefined8 *)((long)register0x00000008 + -0x1a48) = uVar22;
    *(undefined8 *)((long)register0x00000008 + -0x1a50) = uVar21;
    unaff_x23 = puVar16;
    do {
      if ((uVar14 & 1) == 0) {
        param_3 = unaff_x24 + (uVar14 >> 1) * 0x1b;
        param_2 = unaff_x23 + 0x1b;
        FUN_10ae36c24(puVar5);
      }
      else {
        param_2 = unaff_x23 + 0x1b;
        param_3 = puVar16;
        FUN_10ae36638(puVar5,param_2,puVar16,unaff_x23);
      }
      uVar14 = uVar14 + 1;
      unaff_x23 = unaff_x23 + 0x1b;
    } while (uVar14 != 0x20);
    unaff_x22 = puVar5 + 2;
    func_0x000107c2b32c();
    uVar4 = (uint)unaff_x22;
    param_1 = unaff_x22;
    if (uVar4 == 0) {
LAB_10ae37c54:
      puVar6[8] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[10] = 0;
      puVar6[9] = 0;
      puVar6[0xc] = 0;
      puVar6[0xb] = 0;
      puVar6[0xe] = 0;
      puVar6[0xd] = 0;
      puVar6[0x10] = 0;
      puVar6[0xf] = 0;
      puVar6[0x11] = 0;
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0x17] = 0;
      puVar6[0x16] = 0;
      puVar6[0x19] = 0;
      puVar6[0x18] = 0;
      puVar6[0x1a] = 0;
      unaff_x22 = puVar16;
    }
    else {
      unaff_x28 = 0;
      uVar2 = uVar4 - 1;
      unaff_x26 = 0xcccccccd;
      puVar16 = unaff_x22;
      do {
        while( true ) {
          unaff_x27 = (undefined8 *)(ulong)uVar2;
          iVar18 = (int)unaff_x28;
          if (iVar18 != 0) {
            param_1 = puVar5;
            param_2 = puVar6;
            param_3 = puVar6;
            FUN_10ae36c24();
          }
          if ((uVar2 / 5) * 5 == uVar2) break;
          uVar2 = uVar2 - 1;
          puVar16 = unaff_x27;
          if (uVar4 <= uVar2) {
            puVar16 = unaff_x22;
            unaff_x23 = unaff_x27;
            if (iVar18 == 0) goto LAB_10ae37c54;
            goto LAB_10ae37c84;
          }
        }
        uVar1 = *(uint *)(puVar5 + 3);
        uVar17 = (uint)puVar16;
        uVar3 = uVar17 + 3 >> 6;
        if (uVar3 < uVar1) {
          uVar14 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)uVar3 * 8) >>
                    ((ulong)(uVar17 + 3) & 0x3f) & 1) << 4;
        }
        else {
          uVar14 = 0;
        }
        uVar3 = uVar17 + 2 >> 6;
        if (uVar3 < uVar1) {
          uVar11 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)uVar3 * 8) >>
                    ((ulong)(uVar17 + 2) & 0x3f) & 1) << 3;
        }
        else {
          uVar11 = 0;
        }
        uVar3 = uVar17 + 1 >> 6;
        if (uVar3 < uVar1) {
          uVar12 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)uVar3 * 8) >>
                    ((ulong)(uVar17 + 1) & 0x3f) & 1) << 2;
        }
        else {
          uVar12 = 0;
        }
        if (uVar17 >> 6 < uVar1) {
          uVar13 = (*(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) +
                              (ulong)(uVar17 >> 6) * 8) >> ((ulong)puVar16 & 0x3f) & 1) << 1;
        }
        else {
          uVar13 = 0;
        }
        if (uVar2 >> 6 < uVar1) {
          uVar9 = *(ulong *)(*(long *)((long)register0x00000008 + -0x1c68) + (ulong)(uVar2 >> 6) * 8
                            ) >> ((ulong)unaff_x27 & 0x3f) & 1;
        }
        else {
          uVar9 = 0;
        }
        uVar15 = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1b90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1ba8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1b98) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1ba0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bc8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bd0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bb8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bc0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1be8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bd8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1be0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c08) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c10) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1bf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c00) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c28) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c30) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c18) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c20) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c48) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c50) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c38) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c40) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c58) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1c60) = 0;
        unaff_x25 = uVar11 | uVar14 | uVar12 | uVar13 | uVar9;
        unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x1b80);
        unaff_x24 = (undefined8 *)(ulong)*(uint *)(puVar5 + 8);
        do {
          param_3 = (undefined8 *)((long)((uVar15 ^ unaff_x25) - 1) >> 0x3f);
          param_2 = (undefined8 *)((long)register0x00000008 + -0x1c60);
          param_1 = unaff_x24;
          FUN_10ae361dc();
          uVar15 = uVar15 + 1;
          unaff_x23 = unaff_x23 + 0x1b;
        } while (uVar15 != 0x20);
        if (iVar18 == 0) {
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1c40);
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1c28);
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x1c30);
          puVar6[5] = *(undefined8 *)((long)register0x00000008 + -0x1c38);
          puVar6[4] = uVar8;
          puVar6[7] = uVar19;
          puVar6[6] = uVar10;
          puVar6[8] = *(undefined8 *)((long)register0x00000008 + -0x1c20);
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1c60);
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x1c48);
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1c50);
          puVar6[1] = *(undefined8 *)((long)register0x00000008 + -0x1c58);
          *puVar6 = uVar19;
          puVar6[3] = uVar10;
          puVar6[2] = uVar8;
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1c08);
          puVar6[0xc] = *(undefined8 *)((long)register0x00000008 + -0x1c00);
          puVar6[0xb] = uVar8;
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1bf8);
          puVar6[0xe] = *(undefined8 *)((long)register0x00000008 + -0x1bf0);
          puVar6[0xd] = uVar8;
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1be8);
          puVar6[0x10] = *(undefined8 *)((long)register0x00000008 + -0x1be0);
          puVar6[0xf] = uVar8;
          puVar6[0x11] = *(undefined8 *)((long)register0x00000008 + -0x1bd8);
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1c18);
          puVar6[10] = *(undefined8 *)((long)register0x00000008 + -0x1c10);
          puVar6[9] = uVar8;
          puVar6[0x1a] = *(undefined8 *)((long)register0x00000008 + -0x1b90);
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1bb0);
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x1b98);
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1ba0);
          puVar6[0x17] = *(undefined8 *)((long)register0x00000008 + -0x1ba8);
          puVar6[0x16] = uVar19;
          puVar6[0x19] = uVar10;
          puVar6[0x18] = uVar8;
          uVar8 = *(undefined8 *)((long)register0x00000008 + -0x1bd0);
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1bb8);
          uVar10 = *(undefined8 *)((long)register0x00000008 + -0x1bc0);
          puVar6[0x13] = *(undefined8 *)((long)register0x00000008 + -0x1bc8);
          puVar6[0x12] = uVar8;
          puVar6[0x15] = uVar19;
          puVar6[0x14] = uVar10;
        }
        else {
          param_1 = puVar5;
          param_2 = puVar6;
          param_3 = puVar6;
          FUN_10ae36638();
        }
        uVar2 = uVar2 - 1;
        unaff_x28 = 1;
        puVar16 = unaff_x27;
      } while (uVar2 < uVar4);
    }
LAB_10ae37c84:
    unaff_x20 = 0x20;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x78)) {
      return;
    }
    unaff_x30 = FUN_10ae37cc4;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1c70);
    unaff_x19 = puVar6;
    unaff_x21 = puVar5;
  } while( true );
}



/* Entry: 10ae37cd4; end: 10ae37f57;  */

void FUN_10ae37cd4(ulong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_2c50;
  undefined8 uStack_2c48;
  undefined8 uStack_2c40;
  undefined8 uStack_2c38;
  undefined8 uStack_2c30;
  undefined8 uStack_2c28;
  undefined8 uStack_2c20;
  undefined8 uStack_2c18;
  undefined8 uStack_2c10;
  undefined8 uStack_2c08;
  undefined8 uStack_2c00;
  undefined8 uStack_2bf8;
  undefined8 uStack_2bf0;
  undefined8 uStack_2be8;
  undefined8 uStack_2be0;
  undefined8 uStack_2bd8;
  undefined8 uStack_2bd0;
  undefined8 uStack_2bc8;
  undefined8 uStack_2bc0;
  undefined8 uStack_2bb8;
  undefined8 uStack_2bb0;
  undefined8 uStack_2ba8;
  undefined8 uStack_2ba0;
  undefined8 uStack_2b98;
  undefined8 uStack_2b90;
  undefined8 uStack_2b88;
  undefined8 uStack_2b80;
  undefined1 auStack_2b78 [3672];
  undefined8 auStack_1d20 [459];
  undefined8 auStack_ec8 [459];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10ae37f58();
  puVar3 = auStack_1d20;
  FUN_10ae37f58(param_1);
  if (param_7 != (undefined8 *)0x0) {
    puVar3 = auStack_ec8;
    param_5 = param_7;
    FUN_10ae37f58(param_1);
  }
  uVar6 = param_1 + 0x10;
  func_0x000107c2b32c();
  bVar4 = false;
  uVar2 = uVar6;
  uVar8 = uVar6;
  do {
    iVar1 = (int)((uVar8 & 0xffffffff) / 5) * 5;
    iVar7 = (int)uVar8;
    if (bVar4) {
      uVar2 = param_1;
      puVar3 = param_2;
      param_5 = param_2;
      FUN_10ae36c24(param_1);
      if (iVar1 == iVar7) {
        FUN_10ae38074(param_1,&uStack_2c50,auStack_2b78,param_4,uVar8);
        FUN_10ae36638(param_1,param_2,param_2,&uStack_2c50);
LAB_10ae37e58:
        FUN_10ae38074(param_1,&uStack_2c50,auStack_1d20,param_6,uVar8);
        uVar2 = param_1;
        puVar3 = param_2;
        param_5 = param_2;
        FUN_10ae36638(param_1,param_2,param_2,&uStack_2c50);
        if (param_7 != (undefined8 *)0x0) {
          FUN_10ae38074(param_1,&uStack_2c50,auStack_ec8,param_8,uVar8);
          uVar2 = param_1;
          puVar3 = param_2;
          param_5 = param_2;
          FUN_10ae36638(param_1,param_2,param_2,&uStack_2c50);
        }
      }
      if ((uint)uVar6 < iVar7 - 1U) goto LAB_10ae37f18;
      bVar4 = true;
    }
    else {
      if (iVar1 == iVar7) {
        FUN_10ae38074(param_1,&uStack_2c50,auStack_2b78,param_4,uVar8);
        param_2[5] = uStack_2c28;
        param_2[4] = uStack_2c30;
        param_2[7] = uStack_2c18;
        param_2[6] = uStack_2c20;
        param_2[8] = uStack_2c10;
        param_2[1] = uStack_2c48;
        *param_2 = uStack_2c50;
        param_2[3] = uStack_2c38;
        param_2[2] = uStack_2c40;
        param_2[0xc] = uStack_2bf0;
        param_2[0xb] = uStack_2bf8;
        param_2[0xe] = uStack_2be0;
        param_2[0xd] = uStack_2be8;
        param_2[0x10] = uStack_2bd0;
        param_2[0xf] = uStack_2bd8;
        param_2[0x11] = uStack_2bc8;
        param_2[10] = uStack_2c00;
        param_2[9] = uStack_2c08;
        param_2[0x1a] = uStack_2b80;
        param_2[0x17] = uStack_2b98;
        param_2[0x16] = uStack_2ba0;
        param_2[0x19] = uStack_2b88;
        param_2[0x18] = uStack_2b90;
        param_2[0x13] = uStack_2bb8;
        param_2[0x12] = uStack_2bc0;
        param_2[0x15] = uStack_2ba8;
        param_2[0x14] = uStack_2bb0;
        goto LAB_10ae37e58;
      }
      if ((uint)uVar6 < iVar7 - 1U) {
        param_2[8] = 0;
        param_2[5] = 0;
        param_2[4] = 0;
        param_2[7] = 0;
        param_2[6] = 0;
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        param_2[10] = 0;
        param_2[9] = 0;
        param_2[0xc] = 0;
        param_2[0xb] = 0;
        param_2[0xe] = 0;
        param_2[0xd] = 0;
        param_2[0x10] = 0;
        param_2[0xf] = 0;
        param_2[0x11] = 0;
        param_2[0x13] = 0;
        param_2[0x12] = 0;
        param_2[0x15] = 0;
        param_2[0x14] = 0;
        param_2[0x17] = 0;
        param_2[0x16] = 0;
        param_2[0x19] = 0;
        param_2[0x18] = 0;
        param_2[0x1a] = 0;
LAB_10ae37f18:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
          return;
        }
        ___stack_chk_fail();
        puVar3[8] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[10] = 0;
        puVar3[9] = 0;
        puVar3[0xc] = 0;
        puVar3[0xb] = 0;
        puVar3[0xe] = 0;
        puVar3[0xd] = 0;
        puVar3[0x10] = 0;
        puVar3[0xf] = 0;
        puVar3[0x11] = 0;
        puVar3[0x13] = 0;
        puVar3[0x12] = 0;
        puVar3[0x15] = 0;
        puVar3[0x14] = 0;
        puVar3[0x17] = 0;
        puVar3[0x16] = 0;
        puVar3[0x19] = 0;
        puVar3[0x18] = 0;
        puVar3[0x1a] = 0;
        uVar9 = *param_5;
        puVar3[0x1c] = param_5[1];
        puVar3[0x1b] = uVar9;
        uVar10 = param_5[3];
        uVar9 = param_5[2];
        uVar12 = param_5[5];
        uVar11 = param_5[4];
        uVar14 = param_5[7];
        uVar13 = param_5[6];
        puVar3[0x23] = param_5[8];
        puVar3[0x22] = uVar14;
        puVar3[0x21] = uVar13;
        puVar3[0x20] = uVar12;
        puVar3[0x1f] = uVar11;
        puVar3[0x1e] = uVar10;
        puVar3[0x1d] = uVar9;
        uVar10 = param_5[0xe];
        uVar9 = param_5[0xd];
        uVar12 = param_5[0x10];
        uVar11 = param_5[0xf];
        uVar14 = param_5[0xc];
        uVar13 = param_5[0xb];
        puVar3[0x2c] = param_5[0x11];
        puVar3[0x29] = uVar10;
        puVar3[0x28] = uVar9;
        puVar3[0x2b] = uVar12;
        puVar3[0x2a] = uVar11;
        puVar3[0x27] = uVar14;
        puVar3[0x26] = uVar13;
        uVar9 = param_5[9];
        puVar3[0x25] = param_5[10];
        puVar3[0x24] = uVar9;
        uVar12 = param_5[0x17];
        uVar11 = param_5[0x16];
        uVar10 = param_5[0x19];
        uVar9 = param_5[0x18];
        uVar14 = param_5[0x15];
        uVar13 = param_5[0x14];
        puVar3[0x35] = param_5[0x1a];
        puVar3[0x32] = uVar12;
        puVar3[0x31] = uVar11;
        puVar3[0x34] = uVar10;
        puVar3[0x33] = uVar9;
        puVar3[0x30] = uVar14;
        puVar3[0x2f] = uVar13;
        uVar9 = param_5[0x12];
        puVar3[0x2e] = param_5[0x13];
        puVar3[0x2d] = uVar9;
        puVar5 = puVar3 + 0x36;
        uVar6 = 2;
        do {
          if ((uVar6 & 1) == 0) {
            FUN_10ae36c24(uVar2,puVar5,puVar3 + (uVar6 >> 1) * 0x1b);
          }
          else {
            FUN_10ae36638(uVar2,puVar5,puVar3 + 0x1b,puVar5 + -0x1b);
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 0x1b;
        } while (uVar6 != 0x11);
        return;
      }
      bVar4 = false;
    }
    uVar8 = (ulong)(iVar7 - 1);
  } while( true );
}



/* Entry: 10ae37f58; end: 10ae38073;  */

void FUN_10ae37f58(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_2[0x11] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1a] = 0;
  uVar3 = *param_3;
  param_2[0x1c] = param_3[1];
  param_2[0x1b] = uVar3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  uVar6 = param_3[5];
  uVar5 = param_3[4];
  uVar8 = param_3[7];
  uVar7 = param_3[6];
  param_2[0x23] = param_3[8];
  param_2[0x22] = uVar8;
  param_2[0x21] = uVar7;
  param_2[0x20] = uVar6;
  param_2[0x1f] = uVar5;
  param_2[0x1e] = uVar4;
  param_2[0x1d] = uVar3;
  uVar4 = param_3[0xe];
  uVar3 = param_3[0xd];
  uVar6 = param_3[0x10];
  uVar5 = param_3[0xf];
  uVar8 = param_3[0xc];
  uVar7 = param_3[0xb];
  param_2[0x2c] = param_3[0x11];
  param_2[0x29] = uVar4;
  param_2[0x28] = uVar3;
  param_2[0x2b] = uVar6;
  param_2[0x2a] = uVar5;
  param_2[0x27] = uVar8;
  param_2[0x26] = uVar7;
  uVar3 = param_3[9];
  param_2[0x25] = param_3[10];
  param_2[0x24] = uVar3;
  uVar6 = param_3[0x17];
  uVar5 = param_3[0x16];
  uVar4 = param_3[0x19];
  uVar3 = param_3[0x18];
  uVar8 = param_3[0x15];
  uVar7 = param_3[0x14];
  param_2[0x35] = param_3[0x1a];
  param_2[0x32] = uVar6;
  param_2[0x31] = uVar5;
  param_2[0x34] = uVar4;
  param_2[0x33] = uVar3;
  param_2[0x30] = uVar8;
  param_2[0x2f] = uVar7;
  uVar3 = param_3[0x12];
  param_2[0x2e] = param_3[0x13];
  param_2[0x2d] = uVar3;
  puVar1 = param_2 + 0x36;
  uVar2 = 2;
  do {
    if ((uVar2 & 1) == 0) {
      FUN_10ae36c24(param_1,puVar1,param_2 + (uVar2 >> 1) * 0x1b);
    }
    else {
      FUN_10ae36638(param_1,puVar1,param_2 + 0x1b,puVar1 + -0x1b);
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0x1b;
  } while (uVar2 != 0x11);
  return;
}



/* Entry: 10ae38074; end: 10ae38273;  */

void FUN_10ae38074(long param_1,undefined8 *param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong auStack_98 [9];
  
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar1 = (uint)param_5;
  uVar5 = uVar1 + 4 >> 6;
  if (uVar5 < uVar2) {
    uVar5 = ((uint)(*(ulong *)(param_4 + (ulong)uVar5 * 8) >> ((ulong)(uVar1 + 4) & 0x3f)) & 1) << 5
    ;
  }
  else {
    uVar5 = 0;
  }
  uVar6 = uVar1 + 3 >> 6;
  if (uVar6 < uVar2) {
    uVar6 = ((uint)(*(ulong *)(param_4 + (ulong)uVar6 * 8) >> ((ulong)(uVar1 + 3) & 0x3f)) & 1) << 4
    ;
  }
  else {
    uVar6 = 0;
  }
  uVar7 = uVar1 + 2 >> 6;
  if (uVar7 < uVar2) {
    uVar7 = ((uint)(*(ulong *)(param_4 + (ulong)uVar7 * 8) >> ((ulong)(uVar1 + 2) & 0x3f)) & 1) << 3
    ;
  }
  else {
    uVar7 = 0;
  }
  uVar8 = uVar1 + 1 >> 6;
  if (uVar8 < uVar2) {
    uVar8 = ((uint)(*(ulong *)(param_4 + (ulong)uVar8 * 8) >> ((ulong)(uVar1 + 1) & 0x3f)) & 1) << 2
    ;
  }
  else {
    uVar8 = 0;
  }
  if (uVar1 >> 6 < uVar2) {
    uVar9 = ((uint)(*(ulong *)(param_4 + (ulong)(uVar1 >> 6) * 8) >> (param_5 & 0x3f)) & 1) << 1;
  }
  else {
    uVar9 = 0;
  }
  uVar9 = uVar6 | uVar5 | uVar7 | uVar8 | uVar9;
  if (uVar1 != 0) {
    uVar5 = uVar1 - 1 >> 6;
    if (uVar5 < uVar2) {
      uVar2 = (uint)(*(ulong *)(param_4 + (ulong)uVar5 * 8) >> ((ulong)(uVar1 - 1) & 0x3f)) & 1;
    }
    else {
      uVar2 = 0;
    }
    uVar9 = uVar2 | uVar9;
  }
  uVar13 = 0;
  param_2[0x1a] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  uVar12 = -(ulong)(uVar9 >> 5);
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  uVar3 = (ulong)((uVar9 >> 5) - 1 & uVar9) | ((ulong)uVar9 ^ 0x3f) & uVar12;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  uVar3 = uVar3 - (uVar3 >> 1);
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  do {
    FUN_10ae361dc(*(undefined4 *)(param_1 + 0x40),param_2,
                  (long)((uVar13 ^ uVar3) - 1 & ~uVar3) >> 0x3f,param_3,param_2);
    uVar13 = uVar13 + 1;
    param_3 = param_3 + 0xd8;
  } while (uVar13 != 0x11);
  FUN_10ae37318(param_1,auStack_98,param_2 + 9);
  lVar4 = (long)*(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar10 = auStack_98;
    puVar11 = param_2 + 9;
    do {
      *puVar11 = *puVar11 & ~uVar12 | *puVar10 & uVar12;
      lVar4 = lVar4 + -1;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10ae38274; end: 10ae38627;  */

void FUN_10ae38274(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uStack_1bf0;
  undefined8 uStack_1be8;
  undefined8 uStack_1be0;
  undefined8 uStack_1bd8;
  undefined8 uStack_1bd0;
  undefined8 uStack_1bc8;
  undefined8 uStack_1bc0;
  undefined8 uStack_1bb8;
  undefined8 uStack_1bb0;
  undefined8 uStack_1ba8;
  undefined8 uStack_1ba0;
  undefined8 uStack_1b98;
  undefined8 uStack_1b90;
  undefined8 uStack_1b88;
  undefined8 uStack_1b80;
  undefined8 uStack_1b78;
  undefined8 uStack_1b70;
  undefined8 uStack_1b68;
  undefined8 uStack_1b60;
  undefined8 uStack_1b58;
  undefined8 uStack_1b50;
  undefined8 uStack_1b48;
  undefined8 uStack_1b40;
  undefined8 uStack_1b38;
  undefined8 uStack_1b30;
  undefined8 uStack_1b28;
  undefined8 uStack_1b20;
  ulong uStack_1b10;
  undefined8 *puStack_1b08;
  undefined8 uStack_1b00;
  long lStack_1af8;
  ulong uStack_1af0;
  ulong uStack_1ae8;
  undefined8 *puStack_1ae0;
  undefined8 *puStack_1ad8;
  long *plStack_1ad0;
  long lStack_1ac8;
  undefined1 *puStack_1ac0;
  undefined8 uStack_1ab8;
  undefined8 *puStack_1aa8;
  undefined8 auStack_1aa0 [4];
  undefined8 uStack_1a80;
  undefined8 uStack_1a78;
  undefined8 uStack_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined8 uStack_1a58;
  undefined8 uStack_1a50;
  undefined8 uStack_1a48;
  undefined8 uStack_1a40;
  undefined8 uStack_1a38;
  undefined8 uStack_1a30;
  undefined8 uStack_1a28;
  undefined8 uStack_1a20;
  undefined8 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  undefined8 uStack_19f8;
  undefined8 uStack_19f0;
  undefined8 uStack_19e8;
  undefined8 uStack_19e0;
  undefined8 uStack_19d8;
  undefined8 uStack_19d0;
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = (int)param_1 + 0x38;
  puStack_1aa8 = param_2;
  func_0x000107c2b32c();
  uVar1 = iVar4 + 4;
  uStack_19f8 = param_3[0x15];
  uStack_1a00 = param_3[0x14];
  uStack_19e8 = param_3[0x17];
  uStack_19f0 = param_3[0x16];
  uStack_19d8 = param_3[0x19];
  uStack_19e0 = param_3[0x18];
  uStack_19d0 = param_3[0x1a];
  uStack_1a38 = param_3[0xd];
  uStack_1a40 = param_3[0xc];
  uStack_1a28 = param_3[0xf];
  uStack_1a30 = param_3[0xe];
  uStack_1a18 = param_3[0x11];
  uStack_1a20 = param_3[0x10];
  uStack_1a08 = param_3[0x13];
  uStack_1a10 = param_3[0x12];
  uStack_1a78 = param_3[5];
  uStack_1a80 = param_3[4];
  uStack_1a68 = param_3[7];
  uStack_1a70 = param_3[6];
  uStack_1a58 = param_3[9];
  uStack_1a60 = param_3[8];
  uStack_1a48 = param_3[0xb];
  uStack_1a50 = param_3[10];
  auStack_1aa0[1] = param_3[1];
  auStack_1aa0[0] = *param_3;
  auStack_1aa0[3] = param_3[3];
  auStack_1aa0[2] = param_3[2];
  uVar13 = (ulong)(uVar1 / 5 - 1);
  uVar16 = 1;
  do {
    uVar15 = 1 << (ulong)((uint)uVar16 & 0x1f);
    uVar2 = uVar15 - 1;
    puVar11 = auStack_1aa0 + (ulong)uVar2 * 0x1b;
    FUN_10ae36c24(param_1,puVar11,auStack_1aa0 + (ulong)((uVar15 >> 1) - 1) * 0x1b);
    uVar14 = uVar13;
    if (9 < uVar1) {
      do {
        FUN_10ae36c24(param_1,puVar11,puVar11);
        uVar3 = (int)uVar14 - 1;
        uVar14 = (ulong)uVar3;
      } while (uVar3 != 0);
    }
    lVar10 = (ulong)uVar15 - 1;
    puVar12 = auStack_1aa0;
    do {
      FUN_10ae36638(param_1,puVar12 + (ulong)uVar2 * 0x1b + 0x1b,puVar11,puVar12);
      puVar12 = puVar12 + 0x1b;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar15 = (uint)uVar16 + 1;
    uVar16 = (ulong)uVar15;
  } while (uVar15 != 5);
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    puVar8 = &UNK_10f6c6f00;
    puVar6 = (undefined8 *)0x0;
    puVar7 = (undefined8 *)0x42;
    param_5 = 0x335;
    func_0x000107c2b29c(0xf,0,0x42,&UNK_10f6c6f00);
    plVar5 = (long *)0x0;
  }
  else {
    puVar7 = auStack_1aa0;
    puVar8 = (undefined *)0x1f;
    plVar5 = param_1;
    puVar6 = puStack_1aa8;
    (**(code **)(*param_1 + 0x20))(param_1,puStack_1aa8,puVar7,0x1f);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_1b00 = 0xd8;
    uStack_1ab8 = 0x10ae3843c;
    iVar4 = (int)plVar5 + 0x38;
    uStack_1b10 = uVar16;
    puStack_1b08 = auStack_1aa0;
    lStack_1af8 = (ulong)uVar2 * 0xd8 + 0xd8;
    uStack_1af0 = uVar13;
    uStack_1ae8 = (ulong)uVar1;
    puStack_1ae0 = puVar12;
    puStack_1ad8 = puVar11;
    plStack_1ad0 = param_1;
    lStack_1ac8 = lVar10;
    puStack_1ac0 = &stack0xfffffffffffffff0;
    func_0x000107c2b32c();
    if (iVar4 + 4U < 5) {
      puVar6[8] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[7] = 0;
      puVar6[6] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[10] = 0;
      puVar6[9] = 0;
      puVar6[0xc] = 0;
      puVar6[0xb] = 0;
      puVar6[0xe] = 0;
      puVar6[0xd] = 0;
      puVar6[0x10] = 0;
      puVar6[0xf] = 0;
      puVar6[0x11] = 0;
      puVar6[0x13] = 0;
      puVar6[0x12] = 0;
      puVar6[0x15] = 0;
      puVar6[0x14] = 0;
      puVar6[0x17] = 0;
      puVar6[0x16] = 0;
      puVar6[0x19] = 0;
      puVar6[0x18] = 0;
      puVar6[0x1a] = 0;
    }
    else {
      bVar9 = false;
      uVar15 = (iVar4 + 4U) / 5;
      uVar1 = uVar15 - 1;
      do {
        if (bVar9) {
          FUN_10ae36c24(plVar5,puVar6,puVar6);
          FUN_10ae38628(plVar5,&uStack_1bf0,puVar7,puVar8,uVar1);
          FUN_10ae36638(plVar5,puVar6,puVar6,&uStack_1bf0);
        }
        else {
          FUN_10ae38628(plVar5,&uStack_1bf0,puVar7,puVar8,uVar1);
          puVar6[5] = uStack_1bc8;
          puVar6[4] = uStack_1bd0;
          puVar6[7] = uStack_1bb8;
          puVar6[6] = uStack_1bc0;
          puVar6[8] = uStack_1bb0;
          puVar6[1] = uStack_1be8;
          *puVar6 = uStack_1bf0;
          puVar6[3] = uStack_1bd8;
          puVar6[2] = uStack_1be0;
          puVar6[0xc] = uStack_1b90;
          puVar6[0xb] = uStack_1b98;
          puVar6[0xe] = uStack_1b80;
          puVar6[0xd] = uStack_1b88;
          puVar6[0x10] = uStack_1b70;
          puVar6[0xf] = uStack_1b78;
          puVar6[0x11] = uStack_1b68;
          puVar6[10] = uStack_1ba0;
          puVar6[9] = uStack_1ba8;
          puVar6[0x1a] = uStack_1b20;
          puVar6[0x17] = uStack_1b38;
          puVar6[0x16] = uStack_1b40;
          puVar6[0x19] = uStack_1b28;
          puVar6[0x18] = uStack_1b30;
          puVar6[0x13] = uStack_1b58;
          puVar6[0x12] = uStack_1b60;
          puVar6[0x15] = uStack_1b48;
          puVar6[0x14] = uStack_1b50;
        }
        if (param_5 != 0) {
          FUN_10ae38628(plVar5,&uStack_1bf0,param_5,param_6,uVar1);
          FUN_10ae36638(plVar5,puVar6,puVar6,&uStack_1bf0);
        }
        if (param_7 != 0) {
          FUN_10ae38628(plVar5,&uStack_1bf0,param_7,param_8,uVar1);
          FUN_10ae36638(plVar5,puVar6,puVar6,&uStack_1bf0);
        }
        uVar1 = uVar1 - 1;
        bVar9 = true;
      } while (uVar1 < uVar15);
    }
    return;
  }
  return;
}



/* Entry: 10ae38628; end: 10ae387b7;  */

void FUN_10ae38628(long param_1,ulong *param_2,ulong *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar2 = (int)param_1 + 0x38;
  func_0x000107c2b32c();
  uVar3 = 0;
  uVar4 = 0;
  do {
    uVar8 = (uint)(param_5 >> 6) & 0x3ffffff;
    if (uVar8 < uVar1) {
      uVar8 = (uint)(*(ulong *)(param_4 + (ulong)uVar8 * 8) >> (param_5 & 0x3f)) & 1;
    }
    else {
      uVar8 = 0;
    }
    uVar8 = uVar8 << (ulong)(uVar4 & 0x1f) | (uint)uVar3;
    uVar3 = (ulong)uVar8;
    uVar4 = uVar4 + 1;
    param_5 = (ulong)((int)param_5 + (iVar2 + 4U) / 5);
  } while (uVar4 != 5);
  lVar6 = 0;
  param_2[0x1a] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  iVar2 = *(int *)(param_1 + 0x40);
  lVar5 = (long)iVar2;
  do {
    lVar6 = lVar6 + 1;
    if (iVar2 == 0) {
      if (lVar6 == 0x1f) {
        return;
      }
    }
    else {
      uVar10 = (long)((ulong)(uVar8 ^ (uint)lVar6) - 1) >> 0x3f;
      puVar7 = param_3;
      puVar9 = param_2;
      lVar11 = lVar5;
      do {
        *puVar9 = *puVar9 & (uVar10 ^ 0xffffffffffffffff) | *puVar7 & uVar10;
        lVar11 = lVar11 + -1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (lVar11 != 0);
      lVar11 = 0x48;
      lVar12 = lVar5;
      do {
        *(ulong *)((long)param_2 + lVar11) =
             *(ulong *)((long)param_2 + lVar11) & (uVar10 ^ 0xffffffffffffffff) |
             *(ulong *)((long)param_3 + lVar11) & uVar10;
        lVar11 = lVar11 + 8;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      if (lVar6 == 0x1f) {
        uVar3 = (long)(uVar3 - 1) >> 0x3f;
        puVar7 = param_2 + 0x12;
        puVar9 = (ulong *)(param_1 + 0x140);
        do {
          *puVar7 = *puVar9 & (uVar3 ^ 0xffffffffffffffff) | *puVar7 & uVar3;
          lVar5 = lVar5 + -1;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar5 != 0);
        return;
      }
    }
    param_3 = param_3 + 0x12;
  } while( true );
}



/* Entry: 10ae387b8; end: 10ae38833;  */

void FUN_10ae387b8(long param_1,long param_2,uint *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  lVar4 = 0;
  uVar5 = *param_3 & 0x1f;
  do {
    uVar1 = lVar4 + 5;
    uVar7 = uVar5 - 0x20;
    if (param_4 <= uVar1) {
      uVar7 = uVar5 & 0xf;
    }
    uVar2 = uVar5;
    if ((uVar5 & 0x10) != 0) {
      uVar2 = uVar7;
    }
    bVar3 = (uVar5 & 1) != 0;
    if (bVar3) {
      uVar5 = uVar5 - uVar2;
    }
    uVar7 = 0;
    if (bVar3) {
      uVar7 = uVar2;
    }
    *(char *)(param_2 + lVar4) = (char)uVar7;
    uVar7 = (uint)(uVar1 >> 6) & 0x3ffffff;
    if (uVar7 < *(uint *)(param_1 + 0x18)) {
      iVar6 = ((uint)(*(ulong *)(param_3 + (ulong)uVar7 * 2) >> (uVar1 & 0x3f)) & 1) << 4;
    }
    else {
      iVar6 = 0;
    }
    uVar5 = iVar6 + ((int)uVar5 >> 1);
    lVar4 = lVar4 + 1;
  } while (param_4 + 1 != lVar4);
  return;
}



/* Entry: 10ae38834; end: 10ae38bfb;  */

undefined8 *
FUN_10ae38834(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,long param_5,
             ulong param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_25d8 [216];
  undefined8 *puStack_2500;
  undefined8 *puStack_24f8;
  undefined8 *puStack_24f0;
  long *plStack_24e8;
  undefined8 *puStack_24e0;
  long *plStack_24d8;
  undefined1 *puStack_24d0;
  code *pcStack_24c8;
  undefined8 *puStack_24c0;
  long *plStack_24b8;
  undefined8 *puStack_24b0;
  undefined8 *puStack_24a8;
  long *plStack_24a0;
  undefined8 uStack_2498;
  undefined8 uStack_2490;
  undefined8 uStack_2488;
  undefined8 uStack_2480;
  undefined8 uStack_2478;
  undefined8 uStack_2470;
  undefined8 uStack_2468;
  undefined8 uStack_2460;
  undefined8 uStack_2458;
  undefined8 uStack_2450;
  undefined8 uStack_2448;
  undefined8 uStack_2440;
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  undefined8 uStack_2428;
  undefined8 uStack_2420;
  undefined8 uStack_2418;
  undefined8 uStack_2410;
  undefined8 uStack_2408;
  undefined8 uStack_2400;
  undefined8 uStack_23f8;
  undefined8 uStack_23f0;
  undefined8 uStack_23e8;
  undefined8 uStack_23e0;
  undefined8 uStack_23d8;
  undefined8 uStack_23d0;
  undefined8 uStack_23c8;
  undefined8 auStack_23c0 [216];
  char acStack_1cf9 [529];
  undefined8 auStack_1ae8 [648];
  long alStack_6a3 [198];
  long lStack_70;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x10;
  puVar4 = param_2;
  puVar5 = param_3;
  func_0x000107c2b32c();
  if (param_6 < 4) {
    plVar8 = (long *)0x0;
    puVar9 = (undefined8 *)0x0;
    puVar10 = auStack_1ae8;
    plVar2 = alStack_6a3;
LAB_10ae388c0:
    plStack_24a0 = plVar2;
    puStack_24a8 = puVar10;
    puVar10 = (undefined8 *)(uVar1 & 0xffffffff);
    puStack_24b0 = param_3;
    uVar1 = param_6;
    puStack_24c0 = puVar9;
    plStack_24b8 = plVar8;
    puVar9 = puStack_24a8;
    plVar2 = plStack_24a0;
    if (param_3 != (undefined8 *)0x0) {
      lVar7 = *(long *)(param_1 + 8);
      FUN_10ae387b8(param_1,acStack_1cf9,param_3,puVar10);
      puVar4 = auStack_23c0;
      puVar5 = (undefined8 *)(lVar7 + 8);
      FUN_10ae38bfc(param_1);
      puVar9 = puStack_24a8;
      plVar2 = plStack_24a0;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_10ae387b8(param_1,plVar2,param_5,puVar10);
      puVar4 = puVar9;
      puVar5 = param_4;
      FUN_10ae38bfc(param_1);
      param_4 = param_4 + 0x1b;
      param_5 = param_5 + 0x48;
      puVar9 = puVar9 + 0xd8;
      plVar2 = (long *)((long)plVar2 + 0x211);
    }
    param_4 = (undefined8 *)0x1;
    param_3 = puVar10;
    do {
      if ((int)param_4 == 0) {
        puVar4 = param_2;
        puVar5 = param_2;
        FUN_10ae36c24(param_1);
      }
      uVar1 = param_6;
      puVar9 = puStack_24c0;
      plVar8 = plStack_24b8;
      puVar3 = puStack_24a8;
      unaff_x19 = plStack_24a0;
      if ((puStack_24b0 != (undefined8 *)0x0) && (acStack_1cf9[(long)param_3] != '\0')) {
        puVar4 = &uStack_2498;
        puVar5 = auStack_23c0;
        FUN_10ae38ccc(param_1);
        if ((int)param_4 == 0) {
          puVar4 = param_2;
          puVar5 = param_2;
          FUN_10ae36638(param_1,param_2,param_2,&uStack_2498);
          puVar9 = puStack_24c0;
          plVar8 = plStack_24b8;
          puVar3 = puStack_24a8;
          unaff_x19 = plStack_24a0;
        }
        else {
          param_4 = (undefined8 *)0x0;
          param_2[8] = uStack_2458;
          param_2[0x11] = uStack_2410;
          param_2[0x1a] = uStack_23c8;
          param_2[5] = uStack_2470;
          param_2[4] = uStack_2478;
          param_2[7] = uStack_2460;
          param_2[6] = uStack_2468;
          param_2[1] = uStack_2490;
          *param_2 = uStack_2498;
          param_2[3] = uStack_2480;
          param_2[2] = uStack_2488;
          param_2[0xc] = uStack_2438;
          param_2[0xb] = uStack_2440;
          param_2[0xe] = uStack_2428;
          param_2[0xd] = uStack_2430;
          param_2[0x10] = uStack_2418;
          param_2[0xf] = uStack_2420;
          param_2[10] = uStack_2448;
          param_2[9] = uStack_2450;
          param_2[0x17] = uStack_23e0;
          param_2[0x16] = uStack_23e8;
          param_2[0x19] = uStack_23d0;
          param_2[0x18] = uStack_23d8;
          param_2[0x13] = uStack_2400;
          param_2[0x12] = uStack_2408;
          param_2[0x15] = uStack_23f0;
          param_2[0x14] = uStack_23f8;
          puVar9 = puStack_24c0;
          plVar8 = plStack_24b8;
          puVar3 = puStack_24a8;
          unaff_x19 = plStack_24a0;
        }
      }
      for (; puStack_24c0 = puVar9, plStack_24b8 = plVar8, uVar1 != 0; uVar1 = uVar1 - 1) {
        if (*(char *)((long)unaff_x19 + (long)param_3) != '\0') {
          puVar4 = &uStack_2498;
          puVar5 = puVar3;
          FUN_10ae38ccc(param_1);
          if ((int)param_4 == 0) {
            puVar4 = param_2;
            puVar5 = param_2;
            FUN_10ae36638(param_1,param_2,param_2,&uStack_2498);
          }
          else {
            param_4 = (undefined8 *)0x0;
            param_2[8] = uStack_2458;
            param_2[0x11] = uStack_2410;
            param_2[0x1a] = uStack_23c8;
            param_2[5] = uStack_2470;
            param_2[4] = uStack_2478;
            param_2[7] = uStack_2460;
            param_2[6] = uStack_2468;
            param_2[1] = uStack_2490;
            *param_2 = uStack_2498;
            param_2[3] = uStack_2480;
            param_2[2] = uStack_2488;
            param_2[0xc] = uStack_2438;
            param_2[0xb] = uStack_2440;
            param_2[0xe] = uStack_2428;
            param_2[0xd] = uStack_2430;
            param_2[0x10] = uStack_2418;
            param_2[0xf] = uStack_2420;
            param_2[10] = uStack_2448;
            param_2[9] = uStack_2450;
            param_2[0x17] = uStack_23e0;
            param_2[0x16] = uStack_23e8;
            param_2[0x19] = uStack_23d0;
            param_2[0x18] = uStack_23d8;
            param_2[0x13] = uStack_2400;
            param_2[0x12] = uStack_2408;
            param_2[0x15] = uStack_23f0;
            param_2[0x14] = uStack_23f8;
          }
        }
        unaff_x19 = (long *)((long)unaff_x19 + 0x211);
        puVar9 = puStack_24c0;
        plVar8 = plStack_24b8;
        puVar3 = puVar3 + 0xd8;
      }
      param_3 = (undefined8 *)((long)param_3 + -1);
    } while (param_3 <= puVar10);
    if ((int)param_4 != 0) {
      param_2[8] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[10] = 0;
      param_2[9] = 0;
      param_2[0xc] = 0;
      param_2[0xb] = 0;
      param_2[0xe] = 0;
      param_2[0xd] = 0;
      param_2[0x10] = 0;
      param_2[0xf] = 0;
      param_2[0x11] = 0;
      param_2[0x13] = 0;
      param_2[0x12] = 0;
      param_2[0x15] = 0;
      param_2[0x14] = 0;
      param_2[0x17] = 0;
      param_2[0x16] = 0;
      param_2[0x19] = 0;
      param_2[0x18] = 0;
      param_2[0x1a] = 0;
    }
    puVar10 = (undefined8 *)0x1;
  }
  else {
    if (param_6 < 0x25ed097b425ed0) {
      plVar2 = (long *)(param_6 * 0x211 + 8);
      _malloc();
      plVar8 = plVar2;
      if (plVar2 != (long *)0x0) {
        plVar8 = plVar2 + 1;
        *plVar2 = param_6 * 0x211;
      }
      unaff_x19 = (long *)(param_6 * 0x6c0);
      puVar10 = (undefined8 *)((ulong)unaff_x19 | 8);
      _malloc();
      puVar9 = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        puVar9 = puVar10 + 1;
        *puVar10 = unaff_x19;
        puVar10 = puVar9;
        plVar2 = plVar8;
        if (plVar8 != (long *)0x0) goto LAB_10ae388c0;
      }
      puVar4 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)0x41;
      func_0x000107c2b29c(0xf,0,0x41,&UNK_10f6c726a,0xd0);
    }
    else {
      puVar4 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)0x45;
      func_0x000107c2b29c(0xf,0,0x45,&UNK_10f6c726a,0xca);
      plVar8 = (long *)0x0;
      puVar9 = (undefined8 *)0x0;
    }
    puVar10 = (undefined8 *)0x0;
  }
  func_0x000107c2b534(plVar8);
  puVar3 = puVar9;
  func_0x000107c2b534(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar10;
  }
  ___stack_chk_fail();
  pcStack_24c8 = FUN_10ae38bfc;
  uVar6 = *puVar5;
  puVar4[1] = puVar5[1];
  *puVar4 = uVar6;
  uVar11 = puVar5[3];
  uVar6 = puVar5[2];
  uVar13 = puVar5[5];
  uVar12 = puVar5[4];
  uVar15 = puVar5[7];
  uVar14 = puVar5[6];
  puVar4[8] = puVar5[8];
  puVar4[5] = uVar13;
  puVar4[4] = uVar12;
  puVar4[7] = uVar15;
  puVar4[6] = uVar14;
  puVar4[3] = uVar11;
  puVar4[2] = uVar6;
  uVar12 = puVar5[0xe];
  uVar11 = puVar5[0xd];
  uVar14 = puVar5[0x10];
  uVar13 = puVar5[0xf];
  uVar6 = puVar5[0x11];
  uVar15 = puVar5[0xb];
  puVar4[0xc] = puVar5[0xc];
  puVar4[0xb] = uVar15;
  puVar4[0x11] = uVar6;
  puVar4[0x10] = uVar14;
  puVar4[0xf] = uVar13;
  puVar4[0xe] = uVar12;
  puVar4[0xd] = uVar11;
  uVar6 = puVar5[9];
  puVar4[10] = puVar5[10];
  puVar4[9] = uVar6;
  uVar13 = puVar5[0x17];
  uVar12 = puVar5[0x16];
  uVar11 = puVar5[0x19];
  uVar6 = puVar5[0x18];
  uVar15 = puVar5[0x15];
  uVar14 = puVar5[0x14];
  puVar4[0x1a] = puVar5[0x1a];
  puVar4[0x17] = uVar13;
  puVar4[0x16] = uVar12;
  puVar4[0x19] = uVar11;
  puVar4[0x18] = uVar6;
  puVar4[0x15] = uVar15;
  puVar4[0x14] = uVar14;
  uVar6 = puVar5[0x12];
  puVar4[0x13] = puVar5[0x13];
  puVar4[0x12] = uVar6;
  puStack_2500 = param_3;
  puStack_24f8 = param_4;
  puStack_24f0 = puVar9;
  plStack_24e8 = plVar8;
  puStack_24e0 = puVar10;
  plStack_24d8 = unaff_x19;
  puStack_24d0 = &stack0xfffffffffffffff0;
  FUN_10ae36c24();
  lVar7 = 7;
  do {
    puVar5 = puVar3;
    FUN_10ae36638(puVar3,puVar4 + 0x1b,puVar4,auStack_25d8);
    lVar7 = lVar7 + -1;
    puVar4 = puVar4 + 0x1b;
  } while (lVar7 != 0);
  return puVar5;
}



/* Entry: 10ae38bfc; end: 10ae38ccb;  */

void FUN_10ae38bfc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_118 [216];
  
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  uVar3 = param_3[3];
  uVar1 = param_3[2];
  uVar5 = param_3[5];
  uVar4 = param_3[4];
  uVar7 = param_3[7];
  uVar6 = param_3[6];
  param_2[8] = param_3[8];
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[7] = uVar7;
  param_2[6] = uVar6;
  param_2[3] = uVar3;
  param_2[2] = uVar1;
  uVar4 = param_3[0xe];
  uVar3 = param_3[0xd];
  uVar6 = param_3[0x10];
  uVar5 = param_3[0xf];
  uVar1 = param_3[0x11];
  uVar7 = param_3[0xb];
  param_2[0xc] = param_3[0xc];
  param_2[0xb] = uVar7;
  param_2[0x11] = uVar1;
  param_2[0x10] = uVar6;
  param_2[0xf] = uVar5;
  param_2[0xe] = uVar4;
  param_2[0xd] = uVar3;
  uVar1 = param_3[9];
  param_2[10] = param_3[10];
  param_2[9] = uVar1;
  uVar5 = param_3[0x17];
  uVar4 = param_3[0x16];
  uVar3 = param_3[0x19];
  uVar1 = param_3[0x18];
  uVar7 = param_3[0x15];
  uVar6 = param_3[0x14];
  param_2[0x1a] = param_3[0x1a];
  param_2[0x17] = uVar5;
  param_2[0x16] = uVar4;
  param_2[0x19] = uVar3;
  param_2[0x18] = uVar1;
  param_2[0x15] = uVar7;
  param_2[0x14] = uVar6;
  uVar1 = param_3[0x12];
  param_2[0x13] = param_3[0x13];
  param_2[0x12] = uVar1;
  FUN_10ae36c24(param_1,auStack_118);
  lVar2 = 7;
  do {
    FUN_10ae36638(param_1,param_2 + 0x1b,param_2,auStack_118);
    lVar2 = lVar2 + -1;
    param_2 = param_2 + 0x1b;
  } while (lVar2 != 0);
  return;
}



/* Entry: 10ae38ccc; end: 10ae38dcf;  */

void FUN_10ae38ccc(long param_1,undefined8 *param_2,long param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (-1 < (int)param_4) {
    puVar5 = (undefined8 *)(param_3 + (ulong)(param_4 >> 1) * 0xd8);
    uVar7 = *puVar5;
    param_2[1] = puVar5[1];
    *param_2 = uVar7;
    uVar8 = puVar5[3];
    uVar7 = puVar5[2];
    uVar10 = puVar5[5];
    uVar9 = puVar5[4];
    uVar12 = puVar5[7];
    uVar11 = puVar5[6];
    param_2[8] = puVar5[8];
    param_2[5] = uVar10;
    param_2[4] = uVar9;
    param_2[7] = uVar12;
    param_2[6] = uVar11;
    param_2[3] = uVar8;
    param_2[2] = uVar7;
    uVar9 = puVar5[0xe];
    uVar8 = puVar5[0xd];
    uVar11 = puVar5[0x10];
    uVar10 = puVar5[0xf];
    uVar7 = puVar5[0x11];
    uVar12 = puVar5[0xb];
    param_2[0xc] = puVar5[0xc];
    param_2[0xb] = uVar12;
    param_2[0x11] = uVar7;
    param_2[0x10] = uVar11;
    param_2[0xf] = uVar10;
    param_2[0xe] = uVar9;
    param_2[0xd] = uVar8;
    uVar7 = puVar5[9];
    param_2[10] = puVar5[10];
    param_2[9] = uVar7;
    uVar10 = puVar5[0x17];
    uVar9 = puVar5[0x16];
    uVar8 = puVar5[0x19];
    uVar7 = puVar5[0x18];
    uVar12 = puVar5[0x15];
    uVar11 = puVar5[0x14];
    param_2[0x1a] = puVar5[0x1a];
    param_2[0x17] = uVar10;
    param_2[0x16] = uVar9;
    param_2[0x19] = uVar8;
    param_2[0x18] = uVar7;
    param_2[0x15] = uVar12;
    param_2[0x14] = uVar11;
    uVar7 = puVar5[0x12];
    param_2[0x13] = puVar5[0x13];
    param_2[0x12] = uVar7;
    return;
  }
  puVar5 = (undefined8 *)(param_3 + (ulong)(-param_4 >> 1) * 0xd8);
  uVar7 = *puVar5;
  param_2[1] = puVar5[1];
  *param_2 = uVar7;
  uVar8 = puVar5[3];
  uVar7 = puVar5[2];
  uVar10 = puVar5[5];
  uVar9 = puVar5[4];
  uVar12 = puVar5[7];
  uVar11 = puVar5[6];
  param_2[8] = puVar5[8];
  param_2[5] = uVar10;
  param_2[4] = uVar9;
  param_2[7] = uVar12;
  param_2[6] = uVar11;
  param_2[3] = uVar8;
  param_2[2] = uVar7;
  uVar9 = puVar5[0xe];
  uVar8 = puVar5[0xd];
  uVar11 = puVar5[0x10];
  uVar10 = puVar5[0xf];
  uVar7 = puVar5[0x11];
  uVar12 = puVar5[0xb];
  param_2[0xc] = puVar5[0xc];
  param_2[0xb] = uVar12;
  param_2[0x11] = uVar7;
  param_2[0x10] = uVar11;
  param_2[0xf] = uVar10;
  param_2[0xe] = uVar9;
  param_2[0xd] = uVar8;
  uVar7 = puVar5[9];
  param_2[10] = puVar5[10];
  param_2[9] = uVar7;
  uVar10 = puVar5[0x17];
  uVar9 = puVar5[0x16];
  uVar8 = puVar5[0x19];
  uVar7 = puVar5[0x18];
  uVar12 = puVar5[0x15];
  uVar11 = puVar5[0x14];
  param_2[0x1a] = puVar5[0x1a];
  param_2[0x17] = uVar10;
  param_2[0x16] = uVar9;
  param_2[0x19] = uVar8;
  param_2[0x18] = uVar7;
  param_2[0x15] = uVar12;
  param_2[0x14] = uVar11;
  uVar7 = puVar5[0x12];
  param_2[0x13] = puVar5[0x13];
  param_2[0x12] = uVar7;
  puVar5 = param_2 + 9;
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar2 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar4 = 0;
    puVar6 = param_2 + 9;
    do {
      uVar4 = *puVar6 | uVar4;
      uVar2 = uVar2 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 != 0);
    uVar2 = -(ulong)(uVar4 != 0);
  }
  func_0x000107c2b314(puVar5,*(undefined8 *)(param_1 + 0x38),param_2 + 9,(long)(int)uVar1);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    do {
      puVar5[lVar3] = puVar5[lVar3] & uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x40));
  }
  return;
}



/* Entry: 10ae38dd0; end: 10ae38e13;  */

void FUN_10ae38dd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x68;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
  }
  return;
}



/* Entry: 10ae38e14; end: 10ae38f27;  */

void FUN_10ae38e14(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c2b49c();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae38f28; end: 10ae3903b;  */

undefined8 FUN_10ae38f28(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x10);
    uVar1 = (int)param_3 * 8;
    *(uint *)(param_1 + 0x10) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x14) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x14) + (uint)CARRY4(uVar3,uVar1);
    uVar1 = *(uint *)(param_1 + 0x58);
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar4 < 0x40)) {
        _memcpy((long)puVar2 + uVar4,param_2,param_3);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)param_3;
        return 1;
      }
      lVar5 = 0x40 - uVar4;
      if (uVar1 != 0x40) {
        _memcpy((long)puVar2 + uVar4,param_2,lVar5);
      }
      FUN_10ae3911c(param_1,puVar2,1);
      param_2 = param_2 + lVar5;
      param_3 = param_3 - lVar5;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (0x3f < param_3) {
      FUN_10ae3911c(param_1,param_2,param_3 >> 6);
      param_2 = param_2 + (param_3 & 0xffffffffffffffc0);
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x58) = (int)param_3;
      _memcpy(puVar2,param_2,param_3);
    }
  }
  return 1;
}



/* Entry: 10ae3903c; end: 10ae3911b;  */

undefined8 FUN_10ae3903c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_2 + 6);
  uVar5 = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[0x16];
  uVar4 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (uVar2 < 0x38) {
    if (lVar3 == 0x38) goto LAB_10ae390c0;
  }
  else {
    if (uVar2 != 0x3f) {
      _bzero((long)puVar1 + lVar3,0x3f - uVar4);
    }
    FUN_10ae3911c(param_2,puVar1,1);
    lVar3 = 0;
  }
  _bzero((long)puVar1 + lVar3,0x38 - lVar3);
LAB_10ae390c0:
  *(undefined8 *)(param_2 + 0x14) = uVar5;
  FUN_10ae3911c(param_2,puVar1,1);
  param_2[0x16] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}



/* Entry: 10ae3911c; end: 10ae396bb;  */

void FUN_10ae3911c(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  
  if (param_3 != 0) {
    uVar26 = param_1[2];
    uVar25 = param_1[3];
    iVar28 = *param_1;
    uVar27 = param_1[1];
    do {
      iVar2 = *param_2;
      iVar10 = param_2[1];
      uVar1 = iVar2 + iVar28 + (uVar26 & uVar27 | uVar25 & (uVar27 ^ 0xffffffff));
      uVar18 = uVar1 >> 0x1d | uVar1 * 8;
      uVar1 = iVar10 + uVar25 +
              (uVar27 & (uVar1 >> 0x1d | uVar1 * 8) |
              uVar26 & ((uVar1 >> 0x1d | uVar1 * 8) ^ 0xffffffff));
      uVar19 = uVar1 >> 0x19 | uVar1 * 0x80;
      iVar3 = param_2[2];
      iVar11 = param_2[3];
      uVar1 = iVar3 + uVar26 +
              (uVar18 & (uVar1 >> 0x19 | uVar1 * 0x80) |
              uVar27 & ((uVar1 >> 0x19 | uVar1 * 0x80) ^ 0xffffffff));
      uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
      uVar1 = iVar11 + uVar27 +
              (uVar19 & (uVar1 >> 0x15 | uVar1 * 0x800) |
              uVar18 & ((uVar1 >> 0x15 | uVar1 * 0x800) ^ 0xffffffff));
      uVar21 = uVar1 >> 0xd | uVar1 * 0x80000;
      iVar4 = param_2[4];
      iVar12 = param_2[5];
      uVar1 = uVar18 + iVar4 +
              (uVar20 & (uVar1 >> 0xd | uVar1 * 0x80000) |
              uVar19 & ((uVar1 >> 0xd | uVar1 * 0x80000) ^ 0xffffffff));
      uVar18 = uVar1 >> 0x1d | uVar1 * 8;
      uVar1 = uVar19 + iVar12 +
              (uVar21 & (uVar1 >> 0x1d | uVar1 * 8) |
              uVar20 & ((uVar1 >> 0x1d | uVar1 * 8) ^ 0xffffffff));
      uVar19 = uVar1 >> 0x19 | uVar1 * 0x80;
      iVar5 = param_2[6];
      iVar13 = param_2[7];
      uVar1 = uVar20 + iVar5 +
              (uVar18 & (uVar1 >> 0x19 | uVar1 * 0x80) |
              uVar21 & ((uVar1 >> 0x19 | uVar1 * 0x80) ^ 0xffffffff));
      uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
      uVar1 = uVar21 + iVar13 +
              (uVar19 & (uVar1 >> 0x15 | uVar1 * 0x800) |
              uVar18 & ((uVar1 >> 0x15 | uVar1 * 0x800) ^ 0xffffffff));
      iVar6 = param_2[8];
      iVar14 = param_2[9];
      uVar21 = uVar1 >> 0xd | uVar1 * 0x80000;
      uVar1 = uVar18 + iVar6 +
              (uVar20 & (uVar1 >> 0xd | uVar1 * 0x80000) |
              uVar19 & ((uVar1 >> 0xd | uVar1 * 0x80000) ^ 0xffffffff));
      uVar18 = uVar1 >> 0x1d | uVar1 * 8;
      uVar1 = uVar19 + iVar14 +
              (uVar21 & (uVar1 >> 0x1d | uVar1 * 8) |
              uVar20 & ((uVar1 >> 0x1d | uVar1 * 8) ^ 0xffffffff));
      uVar19 = uVar1 >> 0x19 | uVar1 * 0x80;
      iVar7 = param_2[10];
      iVar15 = param_2[0xb];
      uVar1 = uVar20 + iVar7 +
              (uVar18 & (uVar1 >> 0x19 | uVar1 * 0x80) |
              uVar21 & ((uVar1 >> 0x19 | uVar1 * 0x80) ^ 0xffffffff));
      uVar20 = uVar1 >> 0x15 | uVar1 * 0x800;
      uVar1 = uVar21 + iVar15 +
              (uVar19 & (uVar1 >> 0x15 | uVar1 * 0x800) |
              uVar18 & ((uVar1 >> 0x15 | uVar1 * 0x800) ^ 0xffffffff));
      uVar21 = uVar1 >> 0xd | uVar1 * 0x80000;
      iVar8 = param_2[0xc];
      iVar16 = param_2[0xd];
      uVar1 = uVar18 + iVar8 +
              (uVar20 & (uVar1 >> 0xd | uVar1 * 0x80000) |
              uVar19 & ((uVar1 >> 0xd | uVar1 * 0x80000) ^ 0xffffffff));
      uVar22 = uVar1 >> 0x1d | uVar1 * 8;
      uVar1 = uVar19 + iVar16 +
              (uVar21 & (uVar1 >> 0x1d | uVar1 * 8) |
              uVar20 & ((uVar1 >> 0x1d | uVar1 * 8) ^ 0xffffffff));
      iVar9 = param_2[0xe];
      iVar17 = param_2[0xf];
      uVar18 = uVar20 + iVar9 +
               (uVar22 & (uVar1 >> 0x19 | uVar1 * 0x80) |
               uVar21 & ((uVar1 >> 0x19 | uVar1 * 0x80) ^ 0xffffffff));
      uVar23 = uVar18 >> 0x15 | uVar18 * 0x800;
      uVar20 = uVar23 & (uVar1 >> 0x19 | uVar1 * 0x80);
      uVar19 = uVar21 + iVar17 +
               (uVar20 | uVar22 & ((uVar18 >> 0x15 | uVar18 * 0x800) ^ 0xffffffff));
      uVar21 = uVar19 >> 0xd | uVar19 * 0x80000;
      uVar20 = iVar2 + 0x5a827999 + uVar22 +
               ((uVar23 | uVar1 >> 0x19 | uVar1 * 0x80) & (uVar19 >> 0xd | uVar19 * 0x80000) |
               uVar20);
      uVar22 = uVar20 >> 0x1d | uVar20 * 8;
      uVar1 = iVar4 + 0x5a827999 + (uVar1 >> 0x19 | uVar1 * 0x80) +
              ((uVar21 | uVar18 >> 0x15 | uVar18 * 0x800) & (uVar20 >> 0x1d | uVar20 * 8) |
              uVar21 & (uVar18 >> 0x15 | uVar18 * 0x800));
      uVar24 = uVar1 >> 0x1b | uVar1 * 0x20;
      uVar18 = iVar6 + 0x5a827999 + uVar23 +
               ((uVar22 | uVar19 >> 0xd | uVar19 * 0x80000) & (uVar1 >> 0x1b | uVar1 * 0x20) |
               uVar22 & (uVar19 >> 0xd | uVar19 * 0x80000));
      uVar23 = uVar18 >> 0x17 | uVar18 * 0x200;
      uVar19 = iVar8 + 0x5a827999 + uVar21 +
               ((uVar24 | uVar20 >> 0x1d | uVar20 * 8) & (uVar18 >> 0x17 | uVar18 * 0x200) |
               uVar24 & (uVar20 >> 0x1d | uVar20 * 8));
      uVar20 = uVar19 >> 0x13 | uVar19 * 0x2000;
      uVar1 = iVar10 + 0x5a827999 + uVar22 +
              ((uVar23 | uVar1 >> 0x1b | uVar1 * 0x20) & (uVar19 >> 0x13 | uVar19 * 0x2000) |
              uVar23 & (uVar1 >> 0x1b | uVar1 * 0x20));
      uVar21 = uVar1 >> 0x1d | uVar1 * 8;
      uVar18 = iVar12 + 0x5a827999 + uVar24 +
               ((uVar20 | uVar18 >> 0x17 | uVar18 * 0x200) & (uVar1 >> 0x1d | uVar1 * 8) |
               uVar20 & (uVar18 >> 0x17 | uVar18 * 0x200));
      uVar22 = uVar18 >> 0x1b | uVar18 * 0x20;
      uVar19 = iVar14 + 0x5a827999 + uVar23 +
               ((uVar21 | uVar19 >> 0x13 | uVar19 * 0x2000) & (uVar18 >> 0x1b | uVar18 * 0x20) |
               uVar21 & (uVar19 >> 0x13 | uVar19 * 0x2000));
      uVar23 = uVar19 >> 0x17 | uVar19 * 0x200;
      uVar1 = iVar16 + 0x5a827999 + uVar20 +
              ((uVar22 | uVar1 >> 0x1d | uVar1 * 8) & (uVar19 >> 0x17 | uVar19 * 0x200) |
              uVar22 & (uVar1 >> 0x1d | uVar1 * 8));
      uVar20 = uVar1 >> 0x13 | uVar1 * 0x2000;
      uVar18 = iVar3 + 0x5a827999 + uVar21 +
               ((uVar23 | uVar18 >> 0x1b | uVar18 * 0x20) & (uVar1 >> 0x13 | uVar1 * 0x2000) |
               uVar23 & (uVar18 >> 0x1b | uVar18 * 0x20));
      uVar21 = uVar18 >> 0x1d | uVar18 * 8;
      uVar19 = iVar5 + 0x5a827999 + uVar22 +
               ((uVar20 | uVar19 >> 0x17 | uVar19 * 0x200) & (uVar18 >> 0x1d | uVar18 * 8) |
               uVar20 & (uVar19 >> 0x17 | uVar19 * 0x200));
      uVar22 = uVar19 >> 0x1b | uVar19 * 0x20;
      uVar1 = iVar7 + 0x5a827999 + uVar23 +
              ((uVar21 | uVar1 >> 0x13 | uVar1 * 0x2000) & (uVar19 >> 0x1b | uVar19 * 0x20) |
              uVar21 & (uVar1 >> 0x13 | uVar1 * 0x2000));
      uVar23 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar18 = iVar9 + 0x5a827999 + uVar20 +
               ((uVar22 | uVar18 >> 0x1d | uVar18 * 8) & (uVar1 >> 0x17 | uVar1 * 0x200) |
               uVar22 & (uVar18 >> 0x1d | uVar18 * 8));
      uVar20 = uVar18 >> 0x13 | uVar18 * 0x2000;
      uVar19 = iVar11 + 0x5a827999 + uVar21 +
               ((uVar23 | uVar19 >> 0x1b | uVar19 * 0x20) & (uVar18 >> 0x13 | uVar18 * 0x2000) |
               uVar23 & (uVar19 >> 0x1b | uVar19 * 0x20));
      uVar21 = uVar19 >> 0x1d | uVar19 * 8;
      uVar1 = iVar13 + 0x5a827999 + uVar22 +
              ((uVar20 | uVar1 >> 0x17 | uVar1 * 0x200) & (uVar19 >> 0x1d | uVar19 * 8) |
              uVar20 & (uVar1 >> 0x17 | uVar1 * 0x200));
      uVar22 = uVar1 >> 0x1b | uVar1 * 0x20;
      uVar18 = iVar15 + 0x5a827999 + uVar23 +
               ((uVar21 | uVar18 >> 0x13 | uVar18 * 0x2000) & (uVar1 >> 0x1b | uVar1 * 0x20) |
               uVar21 & (uVar18 >> 0x13 | uVar18 * 0x2000));
      uVar19 = iVar17 + 0x5a827999 + uVar20 +
               ((uVar22 | uVar19 >> 0x1d | uVar19 * 8) & (uVar18 >> 0x17 | uVar18 * 0x200) |
               uVar22 & (uVar19 >> 0x1d | uVar19 * 8));
      uVar23 = uVar19 >> 0x13 | uVar19 * 0x2000;
      uVar20 = uVar23 ^ (uVar18 >> 0x17 | uVar18 * 0x200);
      uVar1 = iVar2 + 0x6ed9eba1 + uVar21 + (uVar20 ^ (uVar1 >> 0x1b | uVar1 * 0x20));
      uVar20 = iVar6 + 0x6ed9eba1 + uVar22 + (uVar20 ^ (uVar1 >> 0x1d | uVar1 * 8));
      uVar22 = uVar20 >> 0x17 | uVar20 * 0x200;
      uVar21 = uVar22 ^ (uVar1 >> 0x1d | uVar1 * 8);
      uVar18 = iVar4 + 0x6ed9eba1 + (uVar18 >> 0x17 | uVar18 * 0x200) +
               (uVar21 ^ (uVar19 >> 0x13 | uVar19 * 0x2000));
      uVar19 = iVar8 + 0x6ed9eba1 + uVar23 + (uVar21 ^ (uVar18 >> 0x15 | uVar18 * 0x800));
      uVar21 = uVar18 >> 0x15 | uVar18 * 0x800;
      uVar1 = iVar3 + 0x6ed9eba1 + (uVar1 >> 0x1d | uVar1 * 8) +
              (uVar21 ^ (uVar20 >> 0x17 | uVar20 * 0x200) ^ (uVar19 >> 0x11 | uVar19 * 0x8000));
      uVar20 = uVar19 >> 0x11 | uVar19 * 0x8000;
      uVar18 = iVar7 + 0x6ed9eba1 + uVar22 +
               (uVar20 ^ (uVar18 >> 0x15 | uVar18 * 0x800) ^ (uVar1 >> 0x1d | uVar1 * 8));
      uVar22 = uVar1 >> 0x1d | uVar1 * 8;
      uVar19 = iVar5 + 0x6ed9eba1 + uVar21 +
               (uVar22 ^ (uVar19 >> 0x11 | uVar19 * 0x8000) ^ (uVar18 >> 0x17 | uVar18 * 0x200));
      uVar21 = uVar18 >> 0x17 | uVar18 * 0x200;
      uVar1 = iVar9 + 0x6ed9eba1 + uVar20 +
              (uVar21 ^ (uVar1 >> 0x1d | uVar1 * 8) ^ (uVar19 >> 0x15 | uVar19 * 0x800));
      uVar20 = uVar19 >> 0x15 | uVar19 * 0x800;
      uVar18 = iVar10 + 0x6ed9eba1 + uVar22 +
               (uVar20 ^ (uVar18 >> 0x17 | uVar18 * 0x200) ^ (uVar1 >> 0x11 | uVar1 * 0x8000));
      uVar22 = uVar1 >> 0x11 | uVar1 * 0x8000;
      uVar19 = iVar14 + 0x6ed9eba1 + uVar21 +
               (uVar22 ^ (uVar19 >> 0x15 | uVar19 * 0x800) ^ (uVar18 >> 0x1d | uVar18 * 8));
      uVar21 = uVar18 >> 0x1d | uVar18 * 8;
      uVar1 = iVar12 + 0x6ed9eba1 + uVar20 +
              (uVar21 ^ (uVar1 >> 0x11 | uVar1 * 0x8000) ^ (uVar19 >> 0x17 | uVar19 * 0x200));
      uVar20 = uVar19 >> 0x17 | uVar19 * 0x200;
      uVar18 = iVar16 + 0x6ed9eba1 + uVar22 +
               (uVar20 ^ (uVar18 >> 0x1d | uVar18 * 8) ^ (uVar1 >> 0x15 | uVar1 * 0x800));
      uVar22 = uVar1 >> 0x15 | uVar1 * 0x800;
      uVar19 = iVar11 + 0x6ed9eba1 + uVar21 +
               (uVar22 ^ (uVar19 >> 0x17 | uVar19 * 0x200) ^ (uVar18 >> 0x11 | uVar18 * 0x8000));
      uVar21 = uVar18 >> 0x11 | uVar18 * 0x8000;
      uVar1 = iVar15 + 0x6ed9eba1 + uVar20 +
              (uVar21 ^ (uVar1 >> 0x15 | uVar1 * 0x800) ^ (uVar19 >> 0x1d | uVar19 * 8));
      uVar20 = uVar19 >> 0x1d | uVar19 * 8;
      uVar18 = iVar13 + 0x6ed9eba1 + uVar22 +
               (uVar20 ^ (uVar18 >> 0x11 | uVar18 * 0x8000) ^ (uVar1 >> 0x17 | uVar1 * 0x200));
      uVar22 = uVar1 >> 0x17 | uVar1 * 0x200;
      uVar1 = iVar17 + 0x6ed9eba1 + uVar21 +
              (uVar22 ^ (uVar19 >> 0x1d | uVar19 * 8) ^ (uVar18 >> 0x15 | uVar18 * 0x800));
      iVar28 = uVar20 + iVar28;
      uVar26 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar26;
      uVar25 = uVar22 + uVar25;
      uVar27 = (uVar1 >> 0x11 | uVar1 * 0x8000) + uVar27;
      *param_1 = iVar28;
      param_1[1] = uVar27;
      param_1[2] = uVar26;
      param_1[3] = uVar25;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ae396bc; end: 10ae39b73;  */

undefined8
FUN_10ae396bc(long param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  byte bVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  code *pcVar12;
  
  uVar6 = *(ulong *)(param_1 + 0x38) + param_5;
  if (0xfffffffe0 < uVar6) {
    return 0;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x38),param_5)) {
    return 0;
  }
  pcVar2 = *(code **)(param_1 + 0x168);
  pcVar3 = *(code **)(param_1 + 0x170);
  pcVar12 = *(code **)(param_1 + 0x160);
  *(ulong *)(param_1 + 0x38) = uVar6;
  if (*(int *)(param_1 + 0x184) != 0) {
    (*pcVar12)(param_1 + 0x40,param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x180);
  if (*(uint *)(param_1 + 0x180) != 0) {
    if (param_5 == 0) goto LAB_10ae39904;
    lVar10 = param_1 + 0x40;
    puVar7 = param_3;
    puVar8 = param_4;
    uVar9 = param_5;
    do {
      param_3 = (ulong *)((long)puVar7 + 1);
      bVar1 = *(byte *)(param_1 + 0x10 + uVar6) ^ (byte)*puVar7;
      param_4 = (ulong *)((long)puVar8 + 1);
      *(byte *)puVar8 = bVar1;
      *(byte *)(lVar10 + uVar6) = *(byte *)(lVar10 + uVar6) ^ bVar1;
      param_5 = uVar9 - 1;
      uVar11 = (uint)uVar6 & 0xf;
      uVar6 = (ulong)((uint)uVar6 + 1 & 0xf);
      if (uVar11 == 0xf) break;
      bVar5 = uVar9 != 1;
      puVar7 = param_3;
      puVar8 = param_4;
      uVar9 = param_5;
    } while (bVar5);
    if (uVar11 != 0xf) goto LAB_10ae39904;
    (*pcVar12)(lVar10,param_1 + 0x60);
  }
  uVar11 = (*(uint *)(param_1 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 0xc) & 0xff00ff) << 8
  ;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  for (; 0xbff < param_5; param_5 = param_5 - 0xc00) {
    lVar10 = -0xc00;
    do {
      (*pcVar3)(param_1,param_1 + 0x10,param_2);
      uVar11 = uVar11 + 1;
      uVar4 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0xc) = uVar4 >> 0x10 | uVar4 << 0x10;
      *(ulong *)((long)param_4 + lVar10 + 0xc00) =
           *(ulong *)(param_1 + 0x10) ^ *(ulong *)((long)param_3 + lVar10 + 0xc00);
      *(ulong *)((long)param_4 + lVar10 + 0xc08) =
           *(ulong *)(param_1 + 0x18) ^ *(ulong *)((long)param_3 + lVar10 + 0xc08);
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,param_4,0xc00);
    param_3 = param_3 + 0x180;
    param_4 = param_4 + 0x180;
  }
  uVar6 = param_5 & 0xff0;
  if (uVar6 != 0) {
    do {
      (*pcVar3)(param_1,param_1 + 0x10,param_2);
      uVar11 = uVar11 + 1;
      uVar4 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0xc) = uVar4 >> 0x10 | uVar4 << 0x10;
      *param_4 = *(ulong *)(param_1 + 0x10) ^ *param_3;
      param_4[1] = *(ulong *)(param_1 + 0x18) ^ param_3[1];
      param_4 = param_4 + 2;
      param_3 = param_3 + 2;
      param_5 = param_5 - 0x10;
    } while (0xf < param_5);
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60,(long)param_4 - uVar6,uVar6);
  }
  if (param_5 == 0) {
    uVar6 = 0;
  }
  else {
    (*pcVar3)(param_1,param_1 + 0x10,param_2);
    uVar6 = 0;
    uVar11 = (uVar11 + 1 & 0xff00ff00) >> 8 | (uVar11 + 1 & 0xff00ff) << 8;
    *(uint *)(param_1 + 0xc) = uVar11 >> 0x10 | uVar11 << 0x10;
    do {
      bVar1 = *(byte *)(param_1 + 0x10 + (uVar6 & 0xffffffff)) ^
              *(byte *)((long)param_3 + (uVar6 & 0xffffffff));
      *(byte *)((long)param_4 + (uVar6 & 0xffffffff)) = bVar1;
      *(byte *)(param_1 + 0x40 + (uVar6 & 0xffffffff)) =
           *(byte *)(param_1 + 0x40 + (uVar6 & 0xffffffff)) ^ bVar1;
      uVar6 = uVar6 + 1;
    } while (param_5 != uVar6);
  }
LAB_10ae39904:
  *(int *)(param_1 + 0x180) = (int)uVar6;
  return 1;
}



/* Entry: 10ae39b74; end: 10ae39b7f;  */

void FUN_10ae39b74(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae39b80; end: 10ae39c1b;  */

undefined8 * FUN_10ae39b80(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x20;
  _malloc();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000107c2b29c(4,0,0x41,&UNK_10f6c72f9,0x87);
  }
  else {
    *puVar1 = 0x18;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
    func_0x000107c2b318();
    puVar3 = puVar1 + 1;
    *puVar3 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000107c2b318();
      puVar1[2] = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 3) = 0x1f;
        return puVar3;
      }
    }
    FUN_10ae39c1c(puVar3);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10ae39c1c; end: 10ae39c53;  */

void FUN_10ae39c1c(undefined8 *param_1)

{
  long *plVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  func_0x000107c2b31c(*param_1);
  func_0x000107c2b31c(param_1[1]);
  if (param_1 != (undefined8 *)0x0) {
    plVar1 = param_1 + -1;
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae39c54; end: 10ae39e7f;  */

/* WARNING: Possible PIC construction at 0x00010ae39dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae39e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae39e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae39d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae39e4c) */
/* WARNING: Removing unreachable block (ram,0x00010ae39e50) */
/* WARNING: Removing unreachable block (ram,0x00010ae39e08) */
/* WARNING: Removing unreachable block (ram,0x00010ae39e0c) */
/* WARNING: Removing unreachable block (ram,0x00010ae39e34) */
/* WARNING: Removing unreachable block (ram,0x00010ae39dd0) */
/* WARNING: Removing unreachable block (ram,0x00010ae39dd4) */
/* WARNING: Removing unreachable block (ram,0x00010ae39df0) */
/* WARNING: Removing unreachable block (ram,0x00010ae39d2c) */
/* WARNING: Removing unreachable block (ram,0x00010ae39d30) */
/* WARNING: Removing unreachable block (ram,0x00010ae39d4c) */

undefined8 *
FUN_10ae39c54(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4,
             undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar2 = *(int *)(param_2 + 2);
  *(int *)(param_2 + 2) = iVar2 + 1;
  if (iVar2 + 1 != 0x20) {
    puVar8 = (undefined8 *)*param_2;
    puVar6 = puVar8;
code_r0x000100226f44:
    if ((*(int *)(puVar6 + 2) == 0) && (*(int *)(puVar8 + 2) == 0)) {
      iVar2 = *(int *)(param_4 + 0x20);
      if (((iVar2 < 2) || (*(int *)(puVar6 + 1) != iVar2)) || (*(int *)(puVar8 + 1) != iVar2)) {
        func_0x0001002258d0(param_5);
        puVar3 = param_5;
        func_0x000100225974();
        puVar4 = puVar3;
        if (puVar3 != (undefined8 *)0x0) {
          if (puVar6 == puVar8) {
            func_0x000107c2b3b0();
            iVar2 = (int)puVar4;
          }
          else {
            func_0x000107c2b398();
            iVar2 = (int)puVar4;
          }
          if (iVar2 != 0) {
            func_0x0001002283b8(puVar8,puVar3,param_4);
            puVar4 = puVar8;
          }
        }
        if (*(char *)(param_5 + 5) != '\0') {
          return puVar4;
        }
        lVar1 = param_5[2];
        param_5[2] = lVar1 + -1;
        param_5[4] = *(undefined8 *)(param_5[1] + (lVar1 + -1) * 8);
        return puVar4;
      }
      puVar4 = puVar8;
      func_0x000100202744(puVar8,iVar2);
      if ((int)puVar4 == 0) {
        return puVar4;
      }
      uVar5 = *puVar8;
      func_0x0001002270c0(uVar5,*puVar6,*puVar8,*(undefined8 *)(param_4 + 0x18),param_4 + 0x30,iVar2
                         );
      if ((int)uVar5 != 0) {
        *(undefined4 *)(puVar8 + 2) = 0;
        *(int *)(puVar8 + 1) = iVar2;
        return (undefined8 *)0x1;
      }
      uVar5 = 0x44;
      uVar7 = 0x1b4;
    }
    else {
      uVar5 = 0x6d;
      uVar7 = 0x1a4;
    }
    func_0x0001004d2c58(3,0,uVar5,&UNK_10f6c6a15,uVar7);
    return (undefined8 *)0x0;
  }
  uVar5 = *param_2;
  func_0x000107c2b394(uVar5,1,param_4 + 0x18);
  if ((int)uVar5 != 0) {
    uVar5 = param_2[1];
    func_0x000107c2b380(uVar5,*param_2,param_4,param_5);
    if ((int)uVar5 != 0) {
      puVar8 = (undefined8 *)param_2[1];
      if ((*(int *)(puVar8 + 2) == 0) &&
         (puVar6 = puVar8, func_0x000107c2b340(puVar8,param_4 + 0x18), (int)puVar6 < 0)) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        puVar6 = &uStack_58;
        func_0x000107c2b394(puVar6,1,param_4 + 0x18);
        if ((int)puVar6 != 0) {
          puVar6 = &uStack_58;
          goto code_r0x000100226f44;
        }
        func_0x000107c2b29c(3,0,3,&UNK_10f6c689e,0x159);
        func_0x000107c2b31c(&uStack_58);
      }
      else {
        func_0x000107c2b29c(3,0,0x6b,&UNK_10f6c689e,0x14d);
      }
    }
  }
  func_0x000107c2b29c(4,0,0x44,&UNK_10f6c72f9,0xee);
  *(undefined4 *)(param_2 + 2) = 0x1f;
  return (undefined8 *)0x0;
}



/* Entry: 10ae39e80; end: 10ae39fbf;  */

undefined8
FUN_10ae39e80(undefined8 param_1,ulong *param_2,ulong param_3,byte *param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_5 == 0) {
    uVar2 = 0x78;
    uVar3 = 0xc2;
  }
  else if (param_5 < 0xb) {
    uVar2 = 0x7e;
    uVar3 = 0xcb;
  }
  else {
    uVar4 = 0;
    uVar6 = 2;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar1 = (long)((ulong)param_4[uVar6] - 1) >> 0x3f;
      uVar7 = uVar5 & uVar1;
      uVar4 = ~uVar7 & uVar4 | uVar7 & uVar6;
      uVar5 = (uVar1 ^ 0xffffffffffffffff) & uVar5;
      uVar6 = uVar6 + 1;
    } while (param_5 != uVar6);
    if ((((long)(9 - uVar4 | uVar4) < 0) &&
        ((long)(((ulong)param_4[1] ^ 2) - 1 & (ulong)*param_4 - 1) < 0)) &&
       (uVar5 != 0xffffffffffffffff)) {
      uVar4 = uVar4 + 1;
      uVar6 = param_5 - uVar4;
      if (uVar6 <= param_3) {
        if (param_5 != uVar4) {
          _memcpy(param_1,param_4 + uVar4,uVar6);
        }
        *param_2 = uVar6;
        return 1;
      }
      uVar2 = 0x89;
      uVar3 = 0xf8;
    }
    else {
      uVar2 = 0x89;
      uVar3 = 0xf0;
    }
  }
  func_0x000107c2b29c(4,0,uVar2,&UNK_10f6c7379,uVar3);
  return 0;
}



/* Entry: 10ae39fc0; end: 10ae3a02f;  */

undefined8 FUN_10ae39fc0(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 <= param_4 && param_4 != param_2) {
    uVar1 = 0x72;
    uVar2 = 0x104;
  }
  else {
    if (param_2 <= param_4) {
      if (param_4 != 0) {
        _memcpy(param_1,param_3,param_4);
      }
      return 1;
    }
    uVar1 = 0x74;
    uVar2 = 0x109;
  }
  func_0x000107c2b29c(4,0,uVar1,&UNK_10f6c7379,uVar2);
  return 0;
}



/* Entry: 10ae3a030; end: 10ae3a5e3;  */

ulong * FUN_10ae3a030(ulong *param_1,ulong param_2,byte *param_3,byte *param_4,byte *param_5,
                     byte *param_6,byte *param_7,byte *param_8)

{
  ulong uVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong *puVar22;
  ulong *puVar23;
  byte *pbVar24;
  byte *unaff_x21;
  byte *unaff_x22;
  byte *pbVar25;
  byte *pbVar26;
  long unaff_x28;
  byte abStack_1a0 [64];
  byte abStack_160 [64];
  long lStack_120;
  long lStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  ulong uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  byte abStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar8 = param_6;
  pbVar14 = param_7;
  pbVar16 = param_8;
  pbVar24 = param_5;
  if (param_7 == (byte *)0x0) {
    pbVar5 = (byte *)0x113310b08;
    pbVar10 = &UNK_10072d3f4;
    pbVar11 = param_3;
    pbVar13 = param_4;
    pbVar14 = param_5;
    _pthread_once();
    if ((int)pbVar5 == 0) {
      pbVar14 = (byte *)0x113836e60;
      goto LAB_10ae3a0a0;
    }
  }
  else {
LAB_10ae3a0a0:
    pbVar5 = pbVar14;
    if (param_8 != (byte *)0x0) {
      pbVar5 = param_8;
    }
    uVar3 = *(uint *)(pbVar14 + 4);
    param_8 = (byte *)(ulong)uVar3;
    param_7 = pbVar14;
    if (param_2 < (long)param_8 * 2 + 2U) {
      pbVar11 = (byte *)0x7e;
      pbVar14 = (byte *)0x14a;
      pbVar25 = unaff_x21;
LAB_10ae3a25c:
      pbVar13 = &UNK_10f6c7379;
      pbVar10 = (byte *)0x0;
      pbVar5 = (byte *)0x4;
      func_0x000107c2b29c();
      unaff_x21 = pbVar25;
LAB_10ae3a260:
      param_1 = (ulong *)0x0;
    }
    else {
      unaff_x28 = param_2 - 1;
      pbVar25 = (byte *)~((long)param_8 * 2);
      if (pbVar25 + unaff_x28 < param_4) {
        pbVar11 = (byte *)0x72;
        pbVar14 = (byte *)0x150;
        goto LAB_10ae3a25c;
      }
      unaff_x22 = (byte *)((long)param_1 + (long)param_8);
      pbVar21 = (byte *)((long)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      pbVar24 = unaff_x22 + 1;
      pbVar13 = (byte *)0x0;
      pbVar10 = param_6;
      pbVar11 = pbVar24;
      pbStack_b0 = pbVar5;
      func_0x000107c2b408();
      pbVar5 = param_5;
      unaff_x21 = pbVar25;
      if ((int)param_5 == 0) goto LAB_10ae3a260;
      param_6 = (byte *)(unaff_x28 - (long)param_4);
      if (param_6 + (long)pbVar25 != (byte *)0x0) {
        _bzero(pbVar24 + (long)param_8,param_6 + (long)pbVar25);
      }
      (pbVar24 + (long)param_6)[~(ulong)param_8] = 1;
      if (param_4 != (byte *)0x0) {
        _memcpy(unaff_x22 + ((param_2 - (long)param_4) - (long)param_8),param_3,param_4);
      }
      func_0x000107c2b3c4(pbVar21,param_8,&UNK_10e525a20);
      param_3 = (byte *)(unaff_x28 - (long)param_8);
      if ((byte *)0xfffffffffffffff7 < param_3) {
LAB_10ae3a244:
        pbVar11 = (byte *)0x41;
        pbVar14 = (byte *)0x169;
        goto LAB_10ae3a25c;
      }
      pbVar14 = param_3 + 8;
      _malloc();
      unaff_x21 = pbStack_b0;
      if (pbVar14 == (byte *)0x0) goto LAB_10ae3a244;
      param_4 = pbVar14 + 8;
      *(byte **)pbVar14 = param_3;
      pbVar5 = param_4;
      pbVar10 = param_3;
      pbVar11 = pbVar21;
      pbVar13 = param_8;
      pbVar14 = pbStack_b0;
      func_0x000107c34f84();
      if ((int)pbVar5 == 0) {
LAB_10ae3a2a0:
        param_1 = (ulong *)0x0;
      }
      else {
        pbVar14 = param_3;
        pbVar5 = param_4;
        pbVar10 = pbVar24;
        if (param_3 < (byte *)0x2) {
          pbVar14 = (byte *)0x1;
        }
        do {
          *pbVar10 = *pbVar10 ^ *pbVar5;
          pbVar14 = pbVar14 + -1;
          pbVar5 = pbVar5 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar14 != (byte *)0x0);
        iVar4 = (int)abStack_a8;
        pbVar10 = param_8;
        pbVar11 = pbVar24;
        pbVar13 = param_3;
        pbVar14 = unaff_x21;
        func_0x000107c34f84();
        if (iVar4 == 0) goto LAB_10ae3a2a0;
        if (uVar3 != 0) {
          pbVar25 = abStack_a8;
          pbVar5 = param_8;
          do {
            *pbVar21 = *pbVar21 ^ *pbVar25;
            pbVar5 = pbVar5 + -1;
            param_8 = (byte *)0x0;
            pbVar25 = pbVar25 + 1;
            pbVar21 = pbVar21 + 1;
          } while (pbVar5 != (byte *)0x0);
        }
        param_1 = (ulong *)0x1;
      }
      pbVar5 = param_4;
      func_0x000107c2b534();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  _abort();
  uStack_b8 = 0x10ae3a2b8;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_110 = unaff_x28;
  pbStack_108 = pbVar24;
  pbStack_100 = param_6;
  uStack_f8 = param_2;
  pbStack_f0 = param_3;
  pbStack_e8 = param_4;
  pbStack_e0 = unaff_x22;
  pbStack_d8 = unaff_x21;
  pbStack_d0 = param_8;
  puStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (pbVar16 == (byte *)0x0) {
    puVar22 = (ulong *)0x113310b08;
    _pthread_once(0x113310b08,&UNK_10072d3f4);
    if ((int)puVar22 != 0) goto LAB_10ae3a5e0;
    pbVar16 = (byte *)0x113836e60;
  }
  pbVar24 = pbVar16;
  if (pbStack_b0 != (byte *)0x0) {
    pbVar24 = pbStack_b0;
  }
  uVar3 = *(uint *)(pbVar16 + 4);
  pbVar25 = (byte *)(ulong)uVar3;
  if (pbVar14 < (byte *)((long)pbVar25 * 2 + 2)) {
    puVar22 = (ulong *)0x0;
LAB_10ae3a350:
    uVar12 = 0x85;
    uVar15 = 0x1de;
LAB_10ae3a368:
    func_0x000107c2b29c(4,0,uVar12,&UNK_10f6c7379,uVar15);
    goto LAB_10ae3a4b0;
  }
  pbVar21 = pbVar14 + ~(ulong)pbVar25;
  if (pbVar21 < (byte *)0xfffffffffffffff8) {
    puVar23 = (ulong *)(pbVar21 + 8);
    _malloc();
    if (puVar23 == (ulong *)0x0) goto LAB_10ae3a490;
    puVar22 = puVar23 + 1;
    *puVar23 = (ulong)pbVar21;
    pbVar2 = pbVar13 + 1 + (long)pbVar25;
    pbVar6 = abStack_160;
    func_0x000107c34f84(pbVar6,pbVar25,pbVar2,pbVar21,pbVar24);
    if ((int)pbVar6 == 0) goto LAB_10ae3a4b0;
    if (uVar3 != 0) {
      pbVar17 = abStack_160;
      pbVar6 = pbVar25;
      pbVar26 = pbVar13 + 1;
      do {
        *pbVar17 = *pbVar17 ^ *pbVar26;
        pbVar6 = pbVar6 + -1;
        pbVar17 = pbVar17 + 1;
        pbVar26 = pbVar26 + 1;
      } while (pbVar6 != (byte *)0x0);
    }
    puVar7 = puVar22;
    func_0x000107c34f84(puVar22,pbVar21,abStack_160,pbVar25,pbVar24);
    pbVar24 = pbVar21;
    puVar23 = puVar22;
    if ((int)puVar7 == 0) goto LAB_10ae3a4b0;
    for (; pbVar24 != (byte *)0x0; pbVar24 = pbVar24 + -1) {
      *(byte *)puVar23 = (byte)*puVar23 ^ *pbVar2;
      puVar23 = (ulong *)((long)puVar23 + 1);
      pbVar2 = pbVar2 + 1;
    }
    func_0x000107c2b408(pbVar8,param_7,abStack_1a0,0,pbVar16);
    if ((int)pbVar8 == 0) goto LAB_10ae3a4b0;
    if (uVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      pbVar16 = abStack_1a0;
      puVar23 = puVar22;
      pbVar24 = pbVar25;
      do {
        uVar9 = (ulong)((uint)(byte)(*pbVar16 ^ (byte)*puVar23) | (uint)uVar9);
        pbVar24 = pbVar24 + -1;
        pbVar16 = pbVar16 + 1;
        puVar23 = (ulong *)((long)puVar23 + 1);
      } while (pbVar24 != (byte *)0x0);
    }
    uVar9 = (long)(-(ulong)*pbVar13 | -uVar9) >> 0x3f;
    if (pbVar25 < pbVar21) {
      uVar19 = 0;
      pbVar14 = pbVar14 + ((long)pbVar25 << 1 ^ 0xffffffffffffffff);
      uVar18 = 0xffffffffffffffff;
      do {
        uVar1 = (long)(((ulong)*(byte *)((long)puVar22 + (long)pbVar25) ^ 1) - 1) >> 0x3f;
        uVar20 = uVar18 & uVar1;
        uVar19 = ~uVar20 & uVar19 | uVar20 & (ulong)pbVar25;
        uVar18 = (uVar1 ^ 0xffffffffffffffff) & uVar18;
        uVar1 = 0;
        if (*(byte *)((long)puVar22 + (long)pbVar25) != 0) {
          uVar1 = uVar18;
        }
        uVar9 = uVar1 | uVar9;
        pbVar25 = pbVar25 + 1;
        pbVar14 = pbVar14 + -1;
      } while (pbVar14 != (byte *)0x0);
      pbVar14 = (byte *)(uVar19 + 1);
    }
    else {
      pbVar14 = (byte *)0x1;
      uVar18 = 0xffffffffffffffff;
    }
    if (uVar18 != 0 || uVar9 != 0) goto LAB_10ae3a350;
    pbVar24 = pbVar21 + -(long)pbVar14;
    if (pbVar11 < pbVar24) {
      uVar12 = 0x71;
      uVar15 = 0x1d2;
      goto LAB_10ae3a368;
    }
    if (pbVar21 != pbVar14) {
      _memcpy(pbVar5,(byte *)((long)puVar22 + (long)pbVar14),pbVar24);
    }
    *(byte **)pbVar10 = pbVar24;
    puVar23 = (ulong *)0x1;
  }
  else {
LAB_10ae3a490:
    func_0x000107c2b29c(4,0,0x41,&UNK_10f6c7379,0x19f);
    puVar22 = (ulong *)0x0;
LAB_10ae3a4b0:
    puVar23 = (ulong *)0x0;
  }
  func_0x000107c2b534();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return puVar23;
  }
  ___stack_chk_fail();
LAB_10ae3a5e0:
  _abort();
  if (*(code **)(*puVar22 + 0x20) == (code *)0x0) {
    uVar9 = puVar22[1];
    func_0x000107c2b32c(uVar9);
    puVar22 = (ulong *)(ulong)((int)uVar9 + 7U >> 3);
  }
  else {
    (**(code **)(*puVar22 + 0x20))();
  }
  return puVar22;
}



/* Entry: 10ae3a5e4; end: 10ae3a617;  */

void FUN_10ae3a5e4(long *param_1)

{
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    func_0x000107c2b32c(param_1[1]);
  }
  else {
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}



/* Entry: 10ae3a618; end: 10ae3ad2b;  */

undefined8
FUN_10ae3a618(long *param_1,byte *param_2,undefined8 param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  lVar10 = param_4;
  if (param_5 != 0) {
    lVar10 = param_5;
  }
  plVar3 = (long *)param_1[1];
  lVar8 = (long)(int)plVar3[1];
  if ((int)plVar3[1] == 0) {
LAB_10ae3a6a4:
    uVar6 = 0x78;
    uVar7 = 0x259;
  }
  else {
    uVar9 = 0;
    uVar12 = (ulong)*(uint *)(param_4 + 4);
    puVar13 = (ulong *)*plVar3;
    do {
      uVar9 = *puVar13 | uVar9;
      lVar8 = lVar8 + -1;
      puVar13 = puVar13 + 1;
    } while (lVar8 != 0);
    if (uVar9 == 0) goto LAB_10ae3a6a4;
    func_0x000107c2b32c();
    uVar1 = (uint)plVar3 + 7;
    if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
      param_1 = (long *)(ulong)(uVar1 >> 3);
    }
    else {
      (**(code **)(*param_1 + 0x20))();
    }
    uVar9 = (ulong)param_1 & 0xffffffff;
    uVar2 = (uint)plVar3 & 7;
    pbVar11 = param_2;
    if (uVar2 == 1) {
      pbVar11 = param_2 + 1;
      *param_2 = 0;
      uVar9 = uVar9 - 1;
    }
    if (uVar9 < uVar12 + 2) {
      uVar6 = 0x72;
      uVar7 = 0x266;
    }
    else {
      uVar14 = uVar12;
      if (param_6 != 0xffffffff) {
        if (param_6 == 0xfffffffe) {
          uVar14 = (uVar9 - uVar12) - 2;
        }
        else {
          if ((int)param_6 < 0) {
            uVar6 = 0x8a;
            uVar7 = 0x274;
            goto LAB_10ae3a92c;
          }
          uVar14 = (ulong)param_6;
        }
      }
      if ((uVar9 - uVar12) - 2 < uVar14) {
        uVar6 = 0x72;
        uVar7 = 0x27b;
      }
      else {
        if (uVar14 == 0) {
          puVar13 = (ulong *)0x0;
LAB_10ae3a7a4:
          uStack_78 = 0;
          lStack_80 = 0;
          puStack_68 = (undefined8 *)0x0;
          uStack_70 = 0;
          plVar3 = &lStack_80;
          func_0x000107c2b418(plVar3,param_4);
          if ((int)plVar3 == 0) {
            func_0x000107c2b534(uStack_78);
            if (puStack_68 != (undefined8 *)0x0) {
              (*(code *)*puStack_68)(uStack_70);
            }
            uVar6 = 0;
            uStack_78 = 0;
            lStack_80 = 0;
            puStack_68 = (undefined8 *)0x0;
            uStack_70 = 0;
          }
          else {
            lVar8 = (uVar9 - uVar12) + -1;
            (**(code **)(lStack_80 + 0x18))(&lStack_80,&UNK_10e525a40,8);
            (**(code **)(lStack_80 + 0x18))(&lStack_80,param_3,uVar12);
            (**(code **)(lStack_80 + 0x18))(&lStack_80,puVar13,uVar14);
            (**(code **)(lStack_80 + 0x20))(&lStack_80,pbVar11 + lVar8);
            if (*(int *)(lStack_80 + 0x2c) != 0) {
              _bzero(uStack_78);
            }
            func_0x000107c2b534(uStack_78);
            if (puStack_68 != (undefined8 *)0x0) {
              (*(code *)*puStack_68)(uStack_70);
            }
            uStack_78 = 0;
            lStack_80 = 0;
            puStack_68 = (undefined8 *)0x0;
            uStack_70 = 0;
            pbVar5 = pbVar11;
            func_0x000107c34f84(pbVar11,lVar8,pbVar11 + lVar8,uVar12,lVar10);
            if ((int)pbVar5 == 0) {
              uVar6 = 0;
            }
            else {
              lVar10 = uVar9 - (uVar14 + uVar12);
              pbVar11[lVar10 + -2] = pbVar11[lVar10 + -2] ^ 1;
              if (uVar14 != 0) {
                pbVar5 = pbVar11 + uVar9 + ~(uVar14 + uVar12);
                puVar4 = puVar13;
                do {
                  *pbVar5 = *pbVar5 ^ (byte)*puVar4;
                  uVar14 = uVar14 - 1;
                  pbVar5 = pbVar5 + 1;
                  puVar4 = (ulong *)((long)puVar4 + 1);
                } while (uVar14 != 0);
              }
              if (uVar2 != 1) {
                *pbVar11 = *pbVar11 & (byte)(0xff >> (ulong)(8 - (uVar1 & 7) & 0x1f));
              }
              pbVar11[uVar9 - 1] = 0xbc;
              uVar6 = 1;
            }
          }
          goto LAB_10ae3a938;
        }
        if (uVar14 < 0xfffffffffffffff8) {
          puVar4 = (ulong *)(uVar14 + 8);
          _malloc();
          if (puVar4 != (ulong *)0x0) {
            puVar13 = puVar4 + 1;
            *puVar4 = uVar14;
            func_0x000107c2b3c4(puVar13,uVar14,&UNK_10e525a20);
            goto LAB_10ae3a7a4;
          }
        }
        uVar6 = 0x41;
        uVar7 = 0x282;
      }
    }
  }
LAB_10ae3a92c:
  func_0x000107c2b29c(4,0,uVar6,&UNK_10f6c7379,uVar7);
  uVar6 = 0;
  puVar13 = (ulong *)0x0;
LAB_10ae3a938:
  func_0x000107c2b534(puVar13);
  return uVar6;
}



/* Entry: 10ae3ad2c; end: 10ae3ad53;  */

long * FUN_10ae3ad2c(long *param_1,ulong *param_2,undefined8 param_3,ulong param_4,
                    undefined8 param_5,ulong param_6,int param_7)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ae3ad38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    iVar1 = (int)param_1[1];
    func_0x000107c2b32c();
    plVar7 = (long *)(ulong)(iVar1 + 7U >> 3);
  }
  else {
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x20))();
  }
  if (param_4 < ((ulong)plVar7 & 0xffffffff)) {
    func_0x000107c2b29c(4,0,0x87,&UNK_10f6c7473,0x1eb);
    return (long *)0x0;
  }
  uVar8 = (ulong)plVar7 & 0xffffffff;
  puVar2 = (ulong *)(uVar8 + 8);
  _malloc();
  if (puVar2 == (ulong *)0x0) {
    func_0x000107c2b29c(4,0,0x41,&UNK_10f6c7473,0x1f1);
    puVar6 = (ulong *)0x0;
  }
  else {
    puVar6 = puVar2 + 1;
    *puVar2 = uVar8;
    if (param_7 == 3) {
      puVar2 = puVar6;
      FUN_10ae39fc0(puVar6,uVar8,param_5,param_6);
      if ((int)puVar2 != 0) {
LAB_10ae3b7b0:
        if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
          FUN_10ae3b2bc(param_1,param_3,puVar6,uVar8);
          iVar1 = (int)param_1;
        }
        else {
          (**(code **)(*param_1 + 0x40))(param_1,param_3,puVar6,uVar8);
          iVar1 = (int)param_1;
        }
        if (iVar1 != 0) {
          *param_2 = uVar8;
          plVar7 = (long *)0x1;
          goto LAB_10ae3b820;
        }
      }
    }
    else {
      if (param_7 == 1) {
        if ((uint)plVar7 < 0xb) {
          puVar4 = &UNK_10f6c7379;
          uVar3 = 0x7e;
          uVar5 = 0x4f;
        }
        else {
          if (param_6 <= uVar8 - 0xb) {
            *(undefined2 *)(puVar2 + 1) = 0x100;
            _memset((long)puVar2 + 10,0xff,(uVar8 - param_6) + -3);
            *(undefined1 *)((long)puVar6 + uVar8 + ~param_6) = 0;
            if (param_6 != 0) {
              _memcpy((long)puVar6 + (uVar8 - param_6),param_5,param_6);
            }
            goto LAB_10ae3b7b0;
          }
          puVar4 = &UNK_10f6c7379;
          uVar3 = 0x76;
          uVar5 = 0x54;
        }
      }
      else {
        puVar4 = &UNK_10f6c7473;
        uVar3 = 0x8f;
        uVar5 = 0x1fd;
      }
      func_0x000107c2b29c(4,0,uVar3,puVar4,uVar5);
    }
  }
  plVar7 = (long *)0x0;
LAB_10ae3b820:
  func_0x000107c2b534(puVar6);
  return plVar7;
}



/* Entry: 10ae3ad54; end: 10ae3b097;  */

undefined8
FUN_10ae3ad54(long *param_1,ulong *param_2,ulong *param_3,ulong param_4,undefined8 param_5,
             ulong param_6,int param_7)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    iVar1 = (int)param_1[1];
    func_0x000107c2b32c();
    plVar2 = (long *)(ulong)(iVar1 + 7U >> 3);
  }
  else {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x20))();
  }
  if (param_4 < ((ulong)plVar2 & 0xffffffff)) {
    func_0x000107c2b29c(4,0,0x87,&UNK_10f6c7473,0x21c);
    return 0;
  }
  uVar7 = (ulong)plVar2 & 0xffffffff;
  puVar6 = param_3;
  if (param_7 != 3) {
    puVar3 = (ulong *)(uVar7 + 8);
    _malloc();
    if (puVar3 != (ulong *)0x0) {
      puVar6 = puVar3 + 1;
      *puVar3 = uVar7;
      goto LAB_10ae3ae04;
    }
    uVar4 = 0x41;
    uVar5 = 0x226;
    puVar6 = (ulong *)0x0;
LAB_10ae3af3c:
    func_0x000107c2b29c(4,0,uVar4,&UNK_10f6c7473,uVar5);
    uVar4 = 0;
    goto LAB_10ae3af44;
  }
LAB_10ae3ae04:
  if (param_6 == uVar7) {
    if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
      FUN_10ae3b2bc(param_1,puVar6,param_5,param_6);
      if ((int)param_1 != 0) goto LAB_10ae3ae94;
      goto LAB_10ae3ae50;
    }
    (**(code **)(*param_1 + 0x40))(param_1,puVar6,param_5,param_6);
    if ((int)param_1 == 0) goto LAB_10ae3ae50;
LAB_10ae3ae94:
    if (param_7 == 4) {
      func_0x00010ae3a2b8(param_3,param_2,param_6,puVar6,param_6,0,0,0,0);
      iVar1 = (int)param_3;
    }
    else {
      if (param_7 == 3) {
        *param_2 = param_6;
        return 1;
      }
      if (param_7 != 1) {
        uVar4 = 0x8f;
        uVar5 = 0x243;
        goto LAB_10ae3af3c;
      }
      FUN_10ae39e80(param_3,param_2,param_6,puVar6,param_6);
      iVar1 = (int)param_3;
    }
    if (iVar1 == 0) {
      uVar4 = 0x88;
      uVar5 = 0x249;
      goto LAB_10ae3ae4c;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0x70;
    uVar5 = 0x22c;
LAB_10ae3ae4c:
    func_0x000107c2b29c(4,0,uVar4,&UNK_10f6c7473,uVar5);
LAB_10ae3ae50:
    uVar4 = 0;
  }
  if (param_7 == 3) {
    return uVar4;
  }
LAB_10ae3af44:
  func_0x000107c2b534(puVar6);
  return uVar4;
}



/* Entry: 10ae3b098; end: 10ae3b1d3;  */

bool FUN_10ae3b098(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,undefined8 param_8,
                  undefined4 param_9)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  if (param_6 == *(uint *)(param_7 + 4)) {
    if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
      iVar2 = (int)param_1[1];
      func_0x000107c2b32c();
      plVar3 = (long *)(ulong)(iVar2 + 7U >> 3);
    }
    else {
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x20))();
    }
    uVar8 = (ulong)plVar3 & 0xffffffff;
    puVar4 = (ulong *)(uVar8 + 8);
    _malloc();
    if (puVar4 != (ulong *)0x0) {
      puVar7 = puVar4 + 1;
      *puVar4 = uVar8;
      plVar3 = param_1;
      FUN_10ae3a618(param_1,puVar7,param_5,param_7,param_8,param_9);
      if ((int)plVar3 == 0) {
        bVar1 = false;
      }
      else {
        FUN_10ae3ad2c(param_1,param_2,param_3,param_4,puVar7,uVar8,3);
        bVar1 = (int)param_1 != 0;
      }
      func_0x000107c2b534(puVar7);
      return bVar1;
    }
    uVar5 = 0x41;
    uVar6 = 0x249;
  }
  else {
    uVar5 = 0x7d;
    uVar6 = 0x242;
  }
  func_0x000107c2b29c(4,0,uVar5,&UNK_10f6c73f8,uVar6);
  return false;
}



/* Entry: 10ae3b1d4; end: 10ae3b1d7;  */

undefined8
FUN_10ae3b1d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long *param_6)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iStack_6c;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_6[1];
  if ((lVar1 == 0) || (param_6[2] == 0)) {
    uVar5 = 0x90;
    uVar6 = 0x259;
code_r0x00010073705c:
    func_0x0001004d2c58(4,0,uVar5,&UNK_10f6c73f8,uVar6);
    return 0;
  }
  if (*(code **)(*param_6 + 0x20) == (code *)0x0) {
    func_0x000100202834();
    plVar2 = (long *)(ulong)((int)lVar1 + 7U >> 3);
  }
  else {
    plVar2 = param_6;
    (**(code **)(*param_6 + 0x20))();
  }
  lStack_60 = 0;
  uStack_58 = 0;
  iStack_6c = 0;
  if (((int)param_1 == 0x72) && (param_3 != 0x24)) {
    uVar5 = 0x7d;
    uVar6 = 0x265;
    goto code_r0x00010073705c;
  }
  uVar8 = (ulong)plVar2 & 0xffffffff;
  puVar3 = (ulong *)(uVar8 + 8);
  func_0x000107c610a0();
  if (puVar3 == (ulong *)0x0) {
    uVar5 = 0x41;
    uVar6 = 0x26b;
    goto code_r0x00010073705c;
  }
  puVar7 = puVar3 + 1;
  *puVar3 = uVar8;
  func_0x0001002255a8(param_6,&lStack_68,puVar7,uVar8,param_4,param_5,1);
  if ((int)param_6 != 0) {
    puVar4 = &uStack_58;
    func_0x000100738404(puVar4,&lStack_60,&iStack_6c,param_1,param_2,param_3);
    if ((int)puVar4 != 0) {
      if ((lStack_68 == lStack_60) &&
         ((lStack_68 == 0 ||
          (puVar3 = puVar7, func_0x000107c610b0(puVar7,uStack_58), (int)puVar3 == 0)))) {
        uVar5 = 1;
        goto code_r0x000100737028;
      }
      func_0x0001004d2c58(4,0,0x69,&UNK_10f6c73f8,0x27a);
    }
  }
  uVar5 = 0;
code_r0x000100737028:
  func_0x0001001e33e0(puVar7);
  if (iStack_6c == 0) {
    return uVar5;
  }
  func_0x0001001e33e0(uStack_58);
  return uVar5;
}



/* Entry: 10ae3b1d8; end: 10ae3b2bb;  */

void FUN_10ae3b1d8(undefined4 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((*(int *)(param_3 + 0x10) == 0) && (func_0x000107c2b340(param_3,param_4), (int)param_3 < 0)) {
    func_0x000107c2b34c(param_6);
    lVar3 = param_6;
    func_0x000107c2b350();
    if ((lVar3 != 0) && (lVar2 = lVar3, FUN_10ae30aac(), (int)lVar2 != 0)) {
      iVar1 = 0;
      FUN_10ae2e504(0,lVar3,lVar3,param_4,param_5,param_6);
      if (iVar1 != 0) {
        FUN_10ae2e32c();
        *param_1 = (int)lVar3;
      }
    }
    if (*(char *)(param_6 + 0x28) == '\0') {
      lVar3 = *(long *)(param_6 + 0x10) + -1;
      *(long *)(param_6 + 0x10) = lVar3;
      *(undefined8 *)(param_6 + 0x20) = *(undefined8 *)(*(long *)(param_6 + 8) + lVar3 * 8);
    }
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 10ae3b2bc; end: 10ae3b69f;  */

undefined8 FUN_10ae3b2bc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x24;
  uint uStack_64;
  
  if ((param_1[1] == 0) || (param_1[3] == 0)) {
    func_0x000107c2b29c(4,0,0x90,&UNK_10f6c7473,0x2c1);
  }
  else {
    uStack_64 = 0;
    puVar15 = param_1;
    func_0x000107c2b344();
    if (puVar15 != (undefined8 *)0x0) {
      func_0x000107c2b34c();
      puVar4 = puVar15;
      func_0x000107c2b350();
      puVar5 = puVar15;
      func_0x000107c2b350();
      if ((puVar4 == (undefined8 *)0x0) || (unaff_x24 = puVar5, puVar5 == (undefined8 *)0x0)) {
        uVar6 = 0x41;
        uVar9 = 0x2d4;
        puVar5 = unaff_x24;
      }
      else {
        func_0x000107c2b338(param_3,param_4,puVar4);
        if (param_3 == 0) goto LAB_10ae3b3dc;
        uVar6 = *puVar4;
        func_0x000107c34f78(uVar6,(long)*(int *)(puVar4 + 1),*(undefined8 *)param_1[1],
                            (long)*(int *)((undefined8 *)param_1[1] + 1));
        if ((int)uVar6 < 0) goto LAB_10ae3b448;
        uVar6 = 0x73;
        uVar9 = 0x2de;
      }
LAB_10ae3b3d8:
      do {
        func_0x000107c2b29c(4,0,uVar6,&UNK_10f6c7473,uVar9);
LAB_10ae3b3dc:
        param_4 = 0;
        puVar16 = (undefined8 *)0x0;
        while( true ) {
          if (*(char *)(puVar15 + 5) == '\0') {
            lVar12 = puVar15[2];
            puVar15[2] = lVar12 + -1;
            puVar15[4] = *(undefined8 *)(puVar15[1] + (lVar12 + -1) * 8);
          }
          func_0x000107c2b348(puVar15);
          if (puVar16 == (undefined8 *)0x0) {
            return param_4;
          }
          puVar15 = (undefined8 *)(ulong)uStack_64;
          if (uStack_64 == 0x400) {
            FUN_10ae39c1c(puVar16);
            return param_4;
          }
          iVar3 = (int)param_1 + 0x58;
          _pthread_rwlock_wrlock();
          if (iVar3 == 0) {
            *(undefined1 *)(param_1[0x2d] + (long)puVar15) = 0;
            iVar3 = (int)param_1 + 0x58;
            _pthread_rwlock_unlock();
            if (iVar3 == 0) {
              return param_4;
            }
          }
          _abort();
LAB_10ae3b448:
          puVar16 = param_1;
          FUN_10ae3b8b0(param_1,puVar15);
          if ((int)puVar16 == 0) {
            uVar6 = 0x44;
            uVar9 = 0x2e3;
            goto LAB_10ae3b3d8;
          }
          uVar1 = *(uint *)((long)param_1 + 0x54);
          if ((param_1[2] == 0) && ((uVar1 >> 3 & 1) == 0)) break;
          if ((uVar1 >> 3 & 1) == 0) {
            puVar16 = param_1;
            FUN_10ae3bac0(param_1,&uStack_64);
            if (puVar16 == (undefined8 *)0x0) {
              uVar6 = 0x2f5;
              goto LAB_10ae3b640;
            }
            puVar7 = puVar4;
            FUN_10ae39c54(puVar4,puVar16,param_1[2],param_1[0x24],puVar15);
            if ((int)puVar7 != 0) goto LAB_10ae3b4dc;
LAB_10ae3b644:
            param_4 = 0;
          }
          else {
            puVar16 = (undefined8 *)0x0;
LAB_10ae3b4dc:
            plVar10 = (long *)param_1[4];
            if (((((plVar10 == (long *)0x0) ||
                  (plVar11 = (long *)param_1[5], plVar11 == (long *)0x0)) || (param_1[2] == 0)) ||
                ((param_1[6] == 0 || (param_1[7] == 0)))) ||
               ((param_1[8] == 0 || ((int)plVar11[2] != 0)))) {
LAB_10ae3b554:
              puVar7 = puVar5;
              FUN_10ae2f2b4(puVar5,puVar4,param_1[0x27],param_1[1],puVar15,param_1[0x24]);
              iVar3 = (int)puVar7;
            }
            else {
              uVar2 = *(uint *)(param_1[0x25] + 0x20);
              if (uVar2 < *(uint *)(plVar11 + 1)) {
                uVar13 = 0;
                lVar12 = (long)(int)*(uint *)(plVar11 + 1) - (long)(int)uVar2;
                puVar14 = (ulong *)(*plVar11 + (long)(int)uVar2 * 8);
                do {
                  uVar13 = *puVar14 | uVar13;
                  lVar12 = lVar12 + -1;
                  puVar14 = puVar14 + 1;
                } while (lVar12 != 0);
                if (uVar13 != 0) goto LAB_10ae3b554;
              }
              if ((int)plVar10[2] != 0) goto LAB_10ae3b554;
              uVar2 = *(uint *)(param_1[0x26] + 0x20);
              if (uVar2 < *(uint *)(plVar10 + 1)) {
                uVar13 = 0;
                lVar12 = (long)(int)*(uint *)(plVar10 + 1) - (long)(int)uVar2;
                puVar14 = (ulong *)(*plVar10 + (long)(int)uVar2 * 8);
                do {
                  uVar13 = *puVar14 | uVar13;
                  lVar12 = lVar12 + -1;
                  puVar14 = puVar14 + 1;
                } while (lVar12 != 0);
                if (uVar13 != 0) goto LAB_10ae3b554;
              }
              puVar7 = puVar5;
              FUN_10ae3bcb0(puVar5,puVar4,param_1,puVar15);
              iVar3 = (int)puVar7;
            }
            if (iVar3 == 0) goto LAB_10ae3b644;
            if ((param_1[2] != 0) &&
               (((puVar7 = puVar15, func_0x000107c2b350(), puVar7 == (undefined8 *)0x0 ||
                 (puVar8 = puVar7, func_0x000107c2b374(), (int)puVar8 == 0)) ||
                (func_0x00010ae2e3dc(puVar7,puVar4), (int)puVar7 == 0)))) {
              uVar6 = 0x31b;
LAB_10ae3b640:
              func_0x000107c2b29c(4,0,0x44,&UNK_10f6c7473,uVar6);
              goto LAB_10ae3b644;
            }
            if (((uVar1 >> 3 & 1) == 0) &&
               (puVar7 = puVar5, func_0x000107c2b37c(puVar5,puVar5,puVar16[1],param_1[0x24],puVar15)
               , (int)puVar7 == 0)) goto LAB_10ae3b644;
            uVar6 = param_2;
            func_0x000107c2b33c(param_2,param_4,puVar5);
            if ((int)uVar6 == 0) {
              uVar6 = 0x32d;
              goto LAB_10ae3b640;
            }
            param_4 = 1;
          }
        }
        uVar6 = 0x82;
        uVar9 = 0x2ee;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10ae3b6a0; end: 10ae3b8af;  */

undefined8
FUN_10ae3b6a0(long *param_1,ulong *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6,int param_7)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    iVar1 = (int)param_1[1];
    func_0x000107c2b32c();
    plVar2 = (long *)(ulong)(iVar1 + 7U >> 3);
  }
  else {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x20))();
  }
  if (param_4 < ((ulong)plVar2 & 0xffffffff)) {
    func_0x000107c2b29c(4,0,0x87,&UNK_10f6c7473,0x1eb);
    return 0;
  }
  uVar8 = (ulong)plVar2 & 0xffffffff;
  puVar3 = (ulong *)(uVar8 + 8);
  _malloc();
  if (puVar3 == (ulong *)0x0) {
    func_0x000107c2b29c(4,0,0x41,&UNK_10f6c7473,0x1f1);
    puVar7 = (ulong *)0x0;
  }
  else {
    puVar7 = puVar3 + 1;
    *puVar3 = uVar8;
    if (param_7 == 3) {
      puVar3 = puVar7;
      FUN_10ae39fc0(puVar7,uVar8,param_5,param_6);
      if ((int)puVar3 != 0) {
LAB_10ae3b7b0:
        if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
          FUN_10ae3b2bc(param_1,param_3,puVar7,uVar8);
          iVar1 = (int)param_1;
        }
        else {
          (**(code **)(*param_1 + 0x40))(param_1,param_3,puVar7,uVar8);
          iVar1 = (int)param_1;
        }
        if (iVar1 != 0) {
          *param_2 = uVar8;
          uVar4 = 1;
          goto LAB_10ae3b820;
        }
      }
    }
    else {
      if (param_7 == 1) {
        if ((uint)plVar2 < 0xb) {
          puVar5 = &UNK_10f6c7379;
          uVar4 = 0x7e;
          uVar6 = 0x4f;
        }
        else {
          if (param_6 <= uVar8 - 0xb) {
            *(undefined2 *)(puVar3 + 1) = 0x100;
            _memset((long)puVar3 + 10,0xff,(uVar8 - param_6) + -3);
            *(undefined1 *)((long)puVar7 + uVar8 + ~param_6) = 0;
            if (param_6 != 0) {
              _memcpy((long)puVar7 + (uVar8 - param_6),param_5,param_6);
            }
            goto LAB_10ae3b7b0;
          }
          puVar5 = &UNK_10f6c7379;
          uVar4 = 0x76;
          uVar6 = 0x54;
        }
      }
      else {
        puVar5 = &UNK_10f6c7473;
        uVar4 = 0x8f;
        uVar6 = 0x1fd;
      }
      func_0x000107c2b29c(4,0,uVar4,puVar5,uVar6);
    }
  }
  uVar4 = 0;
LAB_10ae3b820:
  func_0x000107c2b534(puVar7);
  return uVar4;
}



/* Entry: 10ae3b8b0; end: 10ae3babf;  */

uint * FUN_10ae3b8b0(long param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long *plVar11;
  ulong uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  uint *puVar19;
  
  lVar7 = param_1 + 0x58;
  puVar13 = param_2;
  _pthread_rwlock_rdlock();
  if ((int)lVar7 == 0) {
    bVar4 = *(byte *)(param_1 + 0x178);
    lVar7 = param_1 + 0x58;
    _pthread_rwlock_unlock();
    if ((int)lVar7 == 0) {
      if ((bVar4 & 1) != 0) {
        return (uint *)0x1;
      }
      lVar7 = param_1 + 0x58;
      _pthread_rwlock_wrlock();
      if ((int)lVar7 == 0) {
        if ((*(byte *)(param_1 + 0x178) & 1) == 0) {
          lVar7 = *(long *)(param_1 + 0x120);
          if (lVar7 == 0) {
            lVar7 = *(long *)(param_1 + 8);
            puVar13 = param_2;
            func_0x000107c2b390();
            *(long *)(param_1 + 0x120) = lVar7;
            if (lVar7 != 0) goto LAB_10ae3b91c;
            goto LAB_10ae3ba94;
          }
LAB_10ae3b91c:
          puVar13 = *(uint **)(param_1 + 0x18);
          if (puVar13 != (uint *)0x0) {
            param_3 = (uint *)(ulong)*(uint *)(lVar7 + 0x20);
            iVar6 = (int)param_1 + 0x138;
            FUN_10ae41b0c();
            if (iVar6 == 0) goto LAB_10ae3ba94;
          }
          puVar8 = *(uint **)(param_1 + 0x20);
          if ((puVar8 == (uint *)0x0) || (*(long *)(param_1 + 0x28) == 0)) {
LAB_10ae3b9c4:
            *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 1;
            goto LAB_10ae3b9d0;
          }
          puVar14 = *(uint **)(param_1 + 0x128);
          if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
            puVar13 = param_2;
            func_0x00010ae2ed3c();
            *(uint **)(param_1 + 0x128) = puVar8;
            puVar14 = puVar8;
            if (puVar8 == (uint *)0x0) goto LAB_10ae3ba94;
          }
          puVar10 = *(uint **)(param_1 + 0x130);
          if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
            puVar8 = *(uint **)(param_1 + 0x28);
            puVar13 = param_2;
            func_0x00010ae2ed3c();
            *(uint **)(param_1 + 0x130) = puVar8;
            puVar10 = puVar8;
            if (puVar8 == (uint *)0x0) goto LAB_10ae3ba94;
          }
          puVar13 = *(uint **)(param_1 + 0x30);
          if ((puVar13 == (uint *)0x0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_10ae3b9c4;
          if (*(long *)(param_1 + 0x40) == 0) {
            func_0x000107c2b318();
            if (puVar8 != (uint *)0x0) {
              param_3 = *(uint **)(param_1 + 0x20);
              puVar13 = *(uint **)(param_1 + 0x28);
              puVar9 = puVar8;
              param_4 = param_2;
              FUN_10ae30620();
              if ((int)puVar9 != 0) {
                *(uint **)(param_1 + 0x40) = puVar8;
                puVar13 = *(uint **)(param_1 + 0x30);
                goto LAB_10ae3b998;
              }
            }
            goto LAB_10ae3ba90;
          }
LAB_10ae3b998:
          param_3 = (uint *)(ulong)puVar14[8];
          iVar6 = (int)param_1 + 0x140;
          FUN_10ae41b0c();
          if (iVar6 != 0) {
            puVar13 = *(uint **)(param_1 + 0x38);
            param_3 = (uint *)(ulong)puVar10[8];
            puVar8 = (uint *)(param_1 + 0x148);
            FUN_10ae41b0c();
            if ((int)puVar8 != 0) {
              if (*(long *)(param_1 + 0x150) != 0) goto LAB_10ae3b9c4;
              func_0x000107c2b318();
              puVar14 = *(uint **)(param_1 + 0x20);
              puVar10 = *(uint **)(param_1 + 0x28);
              puVar9 = puVar14;
              puVar13 = puVar10;
              func_0x000107c2b340();
              if ((int)puVar9 < 0) {
                if ((puVar8 != (uint *)0x0) &&
                   (puVar9 = puVar8, FUN_10ae30620(), puVar13 = puVar14, param_3 = puVar10,
                   param_4 = param_2, (int)puVar9 != 0)) {
                  param_3 = *(uint **)(param_1 + 0x130);
                  puVar13 = puVar8;
                  goto LAB_10ae3ba74;
                }
              }
              else if (puVar8 != (uint *)0x0) {
                param_3 = *(uint **)(param_1 + 0x128);
                puVar13 = *(uint **)(param_1 + 0x40);
LAB_10ae3ba74:
                puVar14 = puVar8;
                param_4 = param_3;
                func_0x000107c2b37c();
                if ((int)puVar14 != 0) {
                  *(uint **)(param_1 + 0x150) = puVar8;
                  goto LAB_10ae3b9c4;
                }
              }
LAB_10ae3ba90:
              func_0x000107c2b31c(puVar8);
            }
          }
LAB_10ae3ba94:
          puVar8 = (uint *)0x0;
        }
        else {
LAB_10ae3b9d0:
          puVar8 = (uint *)0x1;
        }
        lVar7 = param_1 + 0x58;
        _pthread_rwlock_unlock();
        if ((int)lVar7 == 0) {
          return puVar8;
        }
      }
    }
  }
  _abort();
  puVar8 = (uint *)(lVar7 + 0x58);
  puVar14 = puVar13;
  _pthread_rwlock_wrlock();
  if ((int)puVar8 != 0) goto LAB_10ae3bcac;
  uVar15 = *(uint *)(lVar7 + 0x158);
  puVar8 = (uint *)(ulong)uVar15;
  if (*(long *)(lVar7 + 0x170) != 0) {
    if (uVar15 != 0) {
      plVar11 = *(long **)(lVar7 + 0x160);
      puVar10 = puVar8;
      do {
        *(undefined4 *)(*plVar11 + 0x10) = 0x1f;
        puVar10 = (uint *)((long)puVar10 + -1);
        plVar11 = plVar11 + 1;
      } while (puVar10 != (uint *)0x0);
    }
    *(undefined8 *)(lVar7 + 0x170) = 0;
  }
  if (uVar15 == 0) {
    lVar17 = 8;
    puVar10 = (uint *)0x1;
LAB_10ae3bb94:
    plVar11 = (long *)(lVar17 + 8);
    _malloc();
    plVar18 = plVar11;
    if (plVar11 != (long *)0x0) {
      plVar18 = plVar11 + 1;
      *plVar11 = lVar17;
    }
    puVar9 = puVar10 + 2;
    _malloc();
    puVar19 = puVar9;
    if (puVar9 != (uint *)0x0) {
      puVar19 = puVar9 + 2;
      *(uint **)puVar9 = puVar10;
      if (plVar18 != (long *)0x0) {
        if (uVar15 != 0) {
          _memcpy(plVar18,*(undefined8 *)(lVar7 + 0x160),(long)puVar8 << 3);
          puVar14 = *(uint **)(lVar7 + 0x168);
          puVar9 = puVar19;
          param_3 = puVar8;
          _memcpy(puVar19,puVar14);
        }
        uVar16 = (uint)puVar10;
        if (uVar15 < uVar16) {
          do {
            FUN_10ae39b80();
            plVar18[(long)puVar8] = (long)puVar9;
            if (puVar9 == (uint *)0x0) {
              uVar15 = *(uint *)(lVar7 + 0x158);
              if (uVar15 < (uint)puVar8) {
                lVar17 = ((ulong)puVar8 & 0xffffffff) - (ulong)uVar15;
                plVar11 = plVar18 + uVar15;
                do {
                  FUN_10ae39c1c(*plVar11);
                  lVar17 = lVar17 + -1;
                  plVar11 = plVar11 + 1;
                } while (lVar17 != 0);
              }
              goto LAB_10ae3bc70;
            }
            puVar8 = (uint *)((long)puVar8 + 1);
          } while (puVar10 != puVar8);
          puVar8 = (uint *)(ulong)*(uint *)(lVar7 + 0x158);
        }
        puVar14 = (uint *)(ulong)(uVar16 - (uint)puVar8);
        _bzero((undefined1 *)((long)puVar19 + (long)puVar8),puVar14);
        *(undefined1 *)((long)puVar19 + (long)puVar8) = 1;
        *puVar13 = (uint)puVar8;
        puVar10 = (uint *)plVar18[(long)puVar8];
        func_0x000107c2b534(*(undefined8 *)(lVar7 + 0x160));
        *(long **)(lVar7 + 0x160) = plVar18;
        func_0x000107c2b534(*(undefined8 *)(lVar7 + 0x168));
        *(uint **)(lVar7 + 0x168) = puVar19;
        *(uint *)(lVar7 + 0x158) = uVar16;
        goto LAB_10ae3bc84;
      }
    }
LAB_10ae3bc70:
    func_0x000107c2b534(puVar19);
    func_0x000107c2b534(plVar18);
    puVar10 = (uint *)0x0;
  }
  else {
    puVar10 = *(uint **)(lVar7 + 0x168);
    puVar14 = (uint *)0x0;
    param_3 = puVar8;
    _memchr(puVar10,0);
    if (puVar10 == (uint *)0x0) {
      if (uVar15 < 0x400) {
        uVar16 = uVar15 << 1;
        if (0x3ff < uVar16) {
          uVar16 = 0x400;
        }
        puVar10 = (uint *)(ulong)uVar16;
        lVar17 = (long)puVar10 << 3;
        goto LAB_10ae3bb94;
      }
      *puVar13 = 0x400;
      FUN_10ae39b80();
    }
    else {
      *(undefined1 *)puVar10 = 1;
      lVar17 = *(long *)(lVar7 + 0x160);
      uVar15 = (int)puVar10 - (int)*(undefined8 *)(lVar7 + 0x168);
      *puVar13 = uVar15;
      puVar10 = *(uint **)(lVar17 + (ulong)uVar15 * 8);
    }
  }
LAB_10ae3bc84:
  puVar8 = (uint *)(lVar7 + 0x58);
  _pthread_rwlock_unlock();
  if ((int)puVar8 == 0) {
    return puVar10;
  }
LAB_10ae3bcac:
  _abort();
  func_0x000107c2b34c(param_4);
  puVar13 = param_4;
  func_0x000107c2b350();
  puVar10 = param_4;
  func_0x000107c2b350();
  puVar9 = (uint *)0x0;
  if (((puVar13 != (uint *)0x0) && (puVar10 != (uint *)0x0)) &&
     (puVar9 = param_3, FUN_10ae3b8b0(param_3,param_4), (int)puVar9 != 0)) {
    uVar2 = *(undefined8 *)(param_3 + 0x50);
    uVar3 = *(undefined8 *)(param_3 + 0x52);
    lVar7 = *(long *)(param_3 + 0x4a);
    lVar17 = *(long *)(param_3 + 0x4c);
    uVar12 = *(ulong *)(param_3 + 8);
    func_0x000107c2b340(uVar12,*(undefined8 *)(param_3 + 10));
    uVar1 = uVar2;
    lVar5 = lVar17;
    if ((uVar12 & 0x80000000) != 0) {
      uVar1 = uVar3;
      uVar3 = uVar2;
      lVar5 = lVar7;
      lVar7 = lVar17;
    }
    lVar17 = *(long *)(param_3 + 0x48);
    puVar9 = puVar13;
    func_0x00010ae41b7c(puVar13,puVar14,lVar5,lVar7 + 0x18,param_4);
    if ((((((int)puVar9 != 0) &&
          (puVar9 = puVar10, FUN_10ae2f2b4(puVar10,puVar13,uVar3,lVar5 + 0x18,param_4,lVar5),
          (int)puVar9 != 0)) &&
         ((puVar9 = puVar13, func_0x00010ae41b7c(puVar13,puVar14,lVar7,lVar5 + 0x18,param_4),
          (int)puVar9 != 0 &&
          ((puVar9 = puVar8, FUN_10ae2f2b4(puVar8,puVar13,uVar1,lVar7 + 0x18,param_4,lVar7),
           (int)puVar9 != 0 &&
           (puVar9 = puVar8, FUN_10ae2e994(puVar8,puVar8,puVar10,lVar7 + 0x18,param_4),
           (int)puVar9 != 0)))))) &&
        (puVar9 = puVar8,
        func_0x000107c2b37c(puVar8,puVar8,*(undefined8 *)(param_3 + 0x54),lVar7,param_4),
        (int)puVar9 != 0)) &&
       ((puVar9 = puVar8, FUN_10ae30aac(puVar8,puVar8,lVar5 + 0x18,param_4), (int)puVar9 != 0 &&
        (puVar9 = puVar8, FUN_10ae2dfa4(puVar8,puVar8,puVar10), (int)puVar9 != 0)))) {
      func_0x000107c2b334(puVar8,(long)*(int *)(lVar17 + 0x20));
      puVar9 = puVar8;
    }
  }
  if ((char)param_4[10] == '\0') {
    lVar7 = *(long *)(param_4 + 4);
    *(long *)(param_4 + 4) = lVar7 + -1;
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 2) + (lVar7 + -1) * 8);
  }
  return puVar9;
}



/* Entry: 10ae3bac0; end: 10ae3bcaf;  */

undefined1 * FUN_10ae3bac0(long param_1,uint *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  ulong *puVar18;
  
  puVar16 = (undefined1 *)(param_1 + 0x58);
  puVar11 = param_2;
  _pthread_rwlock_wrlock();
  if ((int)puVar16 != 0) goto LAB_10ae3bcac;
  uVar12 = *(uint *)(param_1 + 0x158);
  puVar16 = (undefined1 *)(ulong)uVar12;
  if (*(long *)(param_1 + 0x170) != 0) {
    if (uVar12 != 0) {
      plVar6 = *(long **)(param_1 + 0x160);
      puVar5 = puVar16;
      do {
        *(undefined4 *)(*plVar6 + 0x10) = 0x1f;
        puVar5 = puVar5 + -1;
        plVar6 = plVar6 + 1;
      } while (puVar5 != (undefined1 *)0x0);
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (uVar12 == 0) {
    lVar14 = 8;
    puVar5 = (undefined1 *)0x1;
LAB_10ae3bb94:
    plVar6 = (long *)(lVar14 + 8);
    _malloc();
    plVar17 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar17 = plVar6 + 1;
      *plVar6 = lVar14;
    }
    puVar7 = (ulong *)(puVar5 + 8);
    _malloc();
    puVar18 = puVar7;
    if (puVar7 != (ulong *)0x0) {
      puVar18 = puVar7 + 1;
      *puVar7 = (ulong)puVar5;
      if (plVar17 != (long *)0x0) {
        if (uVar12 != 0) {
          _memcpy(plVar17,*(undefined8 *)(param_1 + 0x160),(long)puVar16 << 3);
          puVar11 = *(uint **)(param_1 + 0x168);
          puVar7 = puVar18;
          param_3 = puVar16;
          _memcpy(puVar18,puVar11);
        }
        uVar13 = (uint)puVar5;
        if (uVar12 < uVar13) {
          do {
            FUN_10ae39b80();
            plVar17[(long)puVar16] = (long)puVar7;
            if (puVar7 == (ulong *)0x0) {
              uVar12 = *(uint *)(param_1 + 0x158);
              if (uVar12 < (uint)puVar16) {
                lVar14 = ((ulong)puVar16 & 0xffffffff) - (ulong)uVar12;
                plVar6 = plVar17 + uVar12;
                do {
                  FUN_10ae39c1c(*plVar6);
                  lVar14 = lVar14 + -1;
                  plVar6 = plVar6 + 1;
                } while (lVar14 != 0);
              }
              goto LAB_10ae3bc70;
            }
            puVar16 = puVar16 + 1;
          } while (puVar5 != puVar16);
          puVar16 = (undefined1 *)(ulong)*(uint *)(param_1 + 0x158);
        }
        puVar11 = (uint *)(ulong)(uVar13 - (uint)puVar16);
        _bzero((undefined1 *)((long)puVar18 + (long)puVar16),puVar11);
        *(undefined1 *)((long)puVar18 + (long)puVar16) = 1;
        *param_2 = (uint)puVar16;
        puVar5 = (undefined1 *)plVar17[(long)puVar16];
        func_0x000107c2b534(*(undefined8 *)(param_1 + 0x160));
        *(long **)(param_1 + 0x160) = plVar17;
        func_0x000107c2b534(*(undefined8 *)(param_1 + 0x168));
        *(ulong **)(param_1 + 0x168) = puVar18;
        *(uint *)(param_1 + 0x158) = uVar13;
        goto LAB_10ae3bc84;
      }
    }
LAB_10ae3bc70:
    func_0x000107c2b534(puVar18);
    func_0x000107c2b534(plVar17);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar5 = *(undefined1 **)(param_1 + 0x168);
    puVar11 = (uint *)0x0;
    param_3 = puVar16;
    _memchr(puVar5,0);
    if (puVar5 == (undefined1 *)0x0) {
      if (uVar12 < 0x400) {
        uVar13 = uVar12 << 1;
        if (0x3ff < uVar13) {
          uVar13 = 0x400;
        }
        puVar5 = (undefined1 *)(ulong)uVar13;
        lVar14 = (long)puVar5 << 3;
        goto LAB_10ae3bb94;
      }
      *param_2 = 0x400;
      FUN_10ae39b80();
    }
    else {
      *puVar5 = 1;
      lVar14 = *(long *)(param_1 + 0x160);
      uVar12 = (int)puVar5 - (int)*(undefined8 *)(param_1 + 0x168);
      *param_2 = uVar12;
      puVar5 = *(undefined1 **)(lVar14 + (ulong)uVar12 * 8);
    }
  }
LAB_10ae3bc84:
  puVar16 = (undefined1 *)(param_1 + 0x58);
  _pthread_rwlock_unlock();
  if ((int)puVar16 == 0) {
    return puVar5;
  }
LAB_10ae3bcac:
  _abort();
  func_0x000107c2b34c(param_4);
  puVar5 = param_4;
  func_0x000107c2b350();
  puVar8 = param_4;
  func_0x000107c2b350();
  puVar9 = (undefined1 *)0x0;
  if (((puVar5 != (undefined1 *)0x0) && (puVar8 != (undefined1 *)0x0)) &&
     (puVar9 = param_3, FUN_10ae3b8b0(param_3,param_4), (int)puVar9 != 0)) {
    uVar2 = *(undefined8 *)(param_3 + 0x140);
    uVar3 = *(undefined8 *)(param_3 + 0x148);
    lVar14 = *(long *)(param_3 + 0x128);
    lVar15 = *(long *)(param_3 + 0x130);
    uVar10 = *(ulong *)(param_3 + 0x20);
    func_0x000107c2b340(uVar10,*(undefined8 *)(param_3 + 0x28));
    uVar1 = uVar2;
    lVar4 = lVar15;
    if ((uVar10 & 0x80000000) != 0) {
      uVar1 = uVar3;
      uVar3 = uVar2;
      lVar4 = lVar14;
      lVar14 = lVar15;
    }
    lVar15 = *(long *)(param_3 + 0x120);
    puVar9 = puVar5;
    func_0x00010ae41b7c(puVar5,puVar11,lVar4,lVar14 + 0x18,param_4);
    if ((((((int)puVar9 != 0) &&
          (puVar9 = puVar8, FUN_10ae2f2b4(puVar8,puVar5,uVar3,lVar4 + 0x18,param_4,lVar4),
          (int)puVar9 != 0)) &&
         ((puVar9 = puVar5, func_0x00010ae41b7c(puVar5,puVar11,lVar14,lVar4 + 0x18,param_4),
          (int)puVar9 != 0 &&
          ((puVar9 = puVar16, FUN_10ae2f2b4(puVar16,puVar5,uVar1,lVar14 + 0x18,param_4,lVar14),
           (int)puVar9 != 0 &&
           (puVar9 = puVar16, FUN_10ae2e994(puVar16,puVar16,puVar8,lVar14 + 0x18,param_4),
           (int)puVar9 != 0)))))) &&
        (puVar9 = puVar16,
        func_0x000107c2b37c(puVar16,puVar16,*(undefined8 *)(param_3 + 0x150),lVar14,param_4),
        (int)puVar9 != 0)) &&
       ((puVar9 = puVar16, FUN_10ae30aac(puVar16,puVar16,lVar4 + 0x18,param_4), (int)puVar9 != 0 &&
        (puVar9 = puVar16, FUN_10ae2dfa4(puVar16,puVar16,puVar8), (int)puVar9 != 0)))) {
      func_0x000107c2b334(puVar16,(long)*(int *)(lVar15 + 0x20));
      puVar9 = puVar16;
    }
  }
  if (param_4[0x28] == '\0') {
    lVar14 = *(long *)(param_4 + 0x10);
    *(long *)(param_4 + 0x10) = lVar14 + -1;
    *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(*(long *)(param_4 + 8) + (lVar14 + -1) * 8);
  }
  return puVar9;
}



/* Entry: 10ae3bcb0; end: 10ae3c90f;  */

void FUN_10ae3bcb0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  func_0x000107c2b34c(param_4);
  lVar9 = param_4;
  func_0x000107c2b350();
  lVar3 = param_4;
  func_0x000107c2b350();
  if (((lVar9 != 0) && (lVar3 != 0)) &&
     (lVar4 = param_3, FUN_10ae3b8b0(param_3,param_4), (int)lVar4 != 0)) {
    uVar7 = *(undefined8 *)(param_3 + 0x140);
    uVar1 = *(undefined8 *)(param_3 + 0x148);
    lVar4 = *(long *)(param_3 + 0x128);
    lVar6 = *(long *)(param_3 + 0x130);
    uVar5 = *(ulong *)(param_3 + 0x20);
    func_0x000107c2b340(uVar5,*(undefined8 *)(param_3 + 0x28));
    uVar8 = uVar7;
    lVar2 = lVar6;
    if ((uVar5 & 0x80000000) != 0) {
      uVar8 = uVar1;
      uVar1 = uVar7;
      lVar2 = lVar4;
      lVar4 = lVar6;
    }
    lVar10 = *(long *)(param_3 + 0x120);
    lVar6 = lVar9;
    func_0x00010ae41b7c(lVar9,param_2,lVar2,lVar4 + 0x18,param_4);
    if ((((((int)lVar6 != 0) &&
          (lVar6 = lVar3, FUN_10ae2f2b4(lVar3,lVar9,uVar1,lVar2 + 0x18,param_4,lVar2),
          (int)lVar6 != 0)) &&
         ((lVar6 = lVar9, func_0x00010ae41b7c(lVar9,param_2,lVar4,lVar2 + 0x18,param_4),
          (int)lVar6 != 0 &&
          ((uVar7 = param_1, FUN_10ae2f2b4(param_1,lVar9,uVar8,lVar4 + 0x18,param_4,lVar4),
           (int)uVar7 != 0 &&
           (uVar8 = param_1, FUN_10ae2e994(param_1,param_1,lVar3,lVar4 + 0x18,param_4),
           (int)uVar8 != 0)))))) &&
        (uVar8 = param_1,
        func_0x000107c2b37c(param_1,param_1,*(undefined8 *)(param_3 + 0x150),lVar4,param_4),
        (int)uVar8 != 0)) &&
       ((uVar8 = param_1, FUN_10ae30aac(param_1,param_1,lVar2 + 0x18,param_4), (int)uVar8 != 0 &&
        (uVar8 = param_1, FUN_10ae2dfa4(param_1,param_1,lVar3), (int)uVar8 != 0)))) {
      func_0x000107c2b334(param_1,(long)*(int *)(lVar10 + 0x20));
    }
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    lVar9 = *(long *)(param_4 + 0x10) + -1;
    *(long *)(param_4 + 0x10) = lVar9;
    *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(*(long *)(param_4 + 8) + lVar9 * 8);
  }
  return;
}



/* Entry: 10ae3c910; end: 10ae3c913;  */

undefined8 FUN_10ae3c910(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = param_2 + 10;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar2 = param_2[0x1a];
  uVar4 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (uVar2 < 0x38) {
    if (lVar3 == 0x38) goto code_r0x000100181814;
  }
  else {
    if (uVar2 != 0x3f) {
      func_0x000107c60ee4((long)puVar1 + lVar3,0x3f - uVar4);
    }
    func_0x000100181940(param_2,puVar1,1);
    lVar3 = 0;
  }
  func_0x000107c60ee4((long)puVar1 + lVar3,0x38 - lVar3);
code_r0x000100181814:
  uVar5 = NEON_rev32(uVar5,1);
  uVar5 = NEON_rev64(uVar5,4);
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  func_0x000100181940(param_2,puVar1,1);
  uVar5 = 0;
  param_2[0x1a] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  uVar2 = param_2[0x1b];
  if (uVar2 < 0x21) {
    if (3 < uVar2) {
      uVar4 = (ulong)(uVar2 >> 2);
      do {
        uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
        *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar4 = uVar4 - 1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (uVar4 != 0);
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* Entry: 10ae3c914; end: 10ae3c9f3;  */

undefined8 FUN_10ae3c914(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  puVar1 = param_2 + 10;
  uVar2 = (uint)param_2[0x1a];
  uVar6 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar6) = 0x80;
  lVar5 = uVar6 + 1;
  if (uVar2 < 0x70) {
    if (lVar5 == 0x70) goto LAB_10ae3c990;
  }
  else {
    if (uVar2 != 0x7f) {
      _bzero((long)puVar1 + lVar5,0x7f - uVar6);
    }
    func_0x000107c2b598(param_2,puVar1,1);
    lVar5 = 0;
  }
  _bzero((long)puVar1 + lVar5,0x70 - lVar5);
LAB_10ae3c990:
  auVar7 = NEON_rev64(*(undefined1 (*) [16])(param_2 + 8),1);
  auVar7 = NEON_ext(auVar7,auVar7,8,1);
  param_2[0x19] = auVar7._8_8_;
  param_2[0x18] = auVar7._0_8_;
  func_0x000107c2b598(param_2,puVar1,1);
  if (param_1 == (ulong *)0x0) {
    uVar4 = 0;
  }
  else {
    if (7 < *(uint *)((long)param_2 + 0xd4)) {
      uVar6 = (ulong)(*(uint *)((long)param_2 + 0xd4) >> 3);
      do {
        uVar3 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        *param_1 = uVar3 >> 0x20 | uVar3 << 0x20;
        uVar6 = uVar6 - 1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (uVar6 != 0);
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 10ae3c9f4; end: 10ae3ce1f;  */

/* WARNING: Possible PIC construction at 0x00010ae3caf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae3caf8) */
/* WARNING: Removing unreachable block (ram,0x00010ae3cafc) */
/* WARNING: Removing unreachable block (ram,0x00010ae3cb14) */

undefined8 *
FUN_10ae3c9f4(code *param_1,byte *param_2,code *param_3,undefined8 *param_4,undefined8 *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  byte *pbVar15;
  long *plVar16;
  byte *pbVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x19;
  undefined8 *puVar23;
  undefined8 unaff_x20;
  undefined8 uVar24;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  code *unaff_x23;
  byte *unaff_x24;
  code *pcVar25;
  code *pcVar26;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar27;
  code *unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined8 unaff_x30;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar24 = param_11;
  puVar4 = &uStack_90;
  puVar28 = &stack0xfffffffffffffff0;
  if (param_3 == (code *)0x0) {
    return (undefined8 *)0x1;
  }
  uStack_68 = param_10;
  uStack_70 = param_9;
  pcVar7 = param_3;
  puVar6 = param_4;
  puVar8 = param_5;
  uVar11 = param_6;
  uVar12 = param_7;
  uVar13 = param_8;
  _bzero(param_2,param_3);
  pbVar2 = (byte *)0x113310b68;
  pcVar5 = FUN_10ae35300;
  _pthread_once();
  if ((int)pbVar2 == 0) {
    if (param_1 != (code *)0x113836f20) {
      param_10 = uStack_68;
      param_9 = uStack_70;
      puVar4 = (undefined8 *)register0x00000008;
      pbVar2 = param_2;
      pcVar5 = param_3;
      pcVar7 = param_1;
      puVar6 = param_4;
      puVar8 = param_5;
      uVar11 = param_6;
      uVar12 = param_7;
      uVar13 = param_8;
      param_8 = unaff_x19;
      param_7 = unaff_x20;
      param_6 = unaff_x21;
      param_4 = unaff_x22;
      param_3 = unaff_x23;
      param_2 = unaff_x24;
      param_5 = unaff_x25;
      param_1 = unaff_x27;
      puVar28 = unaff_x29;
      param_11 = uVar24;
      goto SUB_10ae3cb7c;
    }
    pbVar2 = (byte *)0x113310af8;
    pcVar5 = FUN_10ae35094;
    _pthread_once();
    if ((int)pbVar2 == 0) {
      puVar8 = (undefined8 *)((long)param_5 - ((ulong)param_5 >> 1));
      uStack_88 = uStack_68;
      uStack_80 = uVar24;
      uStack_90 = uStack_70;
      pcVar7 = (code *)0x113836e30;
      unaff_x30 = 0x10ae3caf8;
      puVar4 = &uStack_90;
      pbVar2 = param_2;
      pcVar5 = param_3;
      puVar6 = param_4;
      uVar11 = param_6;
      uVar12 = param_7;
      uVar13 = param_8;
      unaff_x26 = puVar8;
      unaff_x28 = uVar24;
      goto SUB_10ae3cb7c;
    }
  }
  unaff_x30 = 0x10ae3cb7c;
  _abort();
  unaff_x28 = uVar24;
SUB_10ae3cb7c:
  puVar4[-0xc] = unaff_x28;
  puVar4[-0xb] = param_1;
  puVar4[-10] = unaff_x26;
  puVar4[-9] = param_5;
  puVar4[-8] = param_2;
  puVar4[-7] = param_3;
  puVar4[-6] = param_4;
  puVar4[-5] = param_6;
  puVar4[-4] = param_7;
  puVar4[-3] = param_8;
  puVar4[-2] = puVar28;
  puVar4[-1] = unaff_x30;
  puVar4[-0xf] = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcVar25 = (code *)(ulong)*(uint *)(pcVar7 + 4);
  puVar4[-0x2d] = 0;
  puVar4[-0x2e] = 0;
  puVar4[-0x2b] = 0;
  puVar4[-0x2c] = 0;
  puVar4[-0x29] = 0;
  puVar4[-0x2a] = 0;
  puVar4[-0x27] = 0;
  puVar4[-0x28] = 0;
  puVar4[-0x25] = 0;
  puVar4[-0x26] = 0;
  puVar4[-0x23] = 0;
  puVar4[-0x24] = 0;
  puVar4[-0x22] = 0;
  puVar4[-0x3b] = 0;
  puVar4[-0x3c] = 0;
  puVar4[-0x39] = 0;
  puVar4[-0x3a] = 0;
  puVar4[-0x37] = 0;
  puVar4[-0x38] = 0;
  puVar4[-0x35] = 0;
  puVar4[-0x36] = 0;
  puVar4[-0x33] = 0;
  puVar4[-0x34] = 0;
  puVar4[-0x31] = 0;
  puVar4[-0x32] = 0;
  puVar4[-0x30] = 0;
  puVar4[-0x49] = 0;
  puVar4[-0x4a] = 0;
  puVar4[-0x47] = 0;
  puVar4[-0x48] = 0;
  puVar4[-0x45] = 0;
  puVar4[-0x46] = 0;
  puVar4[-0x43] = 0;
  puVar4[-0x44] = 0;
  puVar4[-0x41] = 0;
  puVar4[-0x42] = 0;
  puVar4[-0x3f] = 0;
  puVar4[-0x40] = 0;
  puVar4[-0x3e] = 0;
  iVar22 = (int)(puVar4 + -0x4a);
  puVar10 = puVar8;
  func_0x000107c2b494();
  iVar9 = (int)pcVar7;
  uVar24 = uVar12;
  pcVar26 = pcVar25;
  if (iVar22 != 0) {
    iVar22 = (int)(puVar4 + -0x2e);
    puVar6 = puVar4 + -0x4a;
    func_0x00010ae38e40();
    iVar9 = (int)pcVar7;
    if (iVar22 != 0) {
      uVar24 = puVar4[1];
      uVar1 = puVar4[2];
      uVar27 = *puVar4;
      puVar23 = puVar4 + -0x2e;
      pcVar14 = *(code **)(puVar4[-0x2d] + 0x18);
      puVar4[-0x4e] = uVar12;
      (*pcVar14)((ulong)puVar23 | 8,uVar11);
      (**(code **)(puVar4[-0x2d] + 0x18))((ulong)puVar23 | 8,uVar13,uVar27);
      pcVar14 = *(code **)(puVar4[-0x2d] + 0x18);
      puVar4[-0x4d] = uVar24;
      puVar4[-0x4c] = uVar1;
      (*pcVar14)((ulong)puVar23 | 8,uVar24,uVar1);
      iVar22 = (int)(puVar4 + -0x2e);
      puVar6 = puVar4 + -0x18;
      puVar8 = (undefined8 *)((long)puVar4 + -0x254);
      func_0x000107c2b498();
      iVar9 = (int)pcVar7;
      if (iVar22 != 0) {
        iVar22 = (int)(puVar4 + -0x2e);
        puVar6 = puVar4 + -0x4a;
        func_0x00010ae38e40();
        iVar9 = (int)pcVar7;
        if (iVar22 != 0) {
          uVar24 = puVar4[-0x4e];
          do {
            puVar8 = (undefined8 *)(ulong)*(uint *)((long)puVar4 + -0x254);
            (**(code **)(puVar4[-0x2d] + 0x18))((ulong)puVar23 | 8,puVar4 + -0x18);
            if (pcVar25 < pcVar5) {
              iVar22 = (int)(puVar4 + -0x3c);
              puVar6 = puVar4 + -0x2e;
              func_0x00010ae38e40();
              iVar9 = (int)pcVar7;
              pcVar26 = pcVar25;
              if (iVar22 == 0) break;
            }
            (**(code **)(puVar4[-0x2d] + 0x18))((ulong)puVar23 | 8,uVar11,uVar24);
            (**(code **)(puVar4[-0x2d] + 0x18))((ulong)puVar23 | 8,uVar13,uVar27);
            (**(code **)(puVar4[-0x2d] + 0x18))((ulong)puVar23 | 8,puVar4[-0x4d],puVar4[-0x4c]);
            iVar22 = (int)(puVar4 + -0x2e);
            puVar6 = puVar4 + -0x20;
            puVar8 = puVar4 + -0x4b;
            func_0x000107c2b498();
            iVar9 = (int)pcVar7;
            pcVar26 = pcVar25;
            if (iVar22 == 0) break;
            pcVar26 = pcVar5;
            if ((code *)(ulong)*(uint *)(puVar4 + -0x4b) <= pcVar5) {
              pcVar26 = (code *)(ulong)*(uint *)(puVar4 + -0x4b);
            }
            if (pcVar26 != (code *)0x0) {
              pbVar15 = (byte *)(puVar4 + -0x20);
              pbVar17 = pbVar2;
              pcVar14 = pcVar26;
              do {
                *pbVar17 = *pbVar17 ^ *pbVar15;
                pcVar14 = pcVar14 + -1;
                pbVar15 = pbVar15 + 1;
                pbVar17 = pbVar17 + 1;
              } while (pcVar14 != (code *)0x0);
            }
            pcVar5 = pcVar5 + -(long)pcVar26;
            if (pcVar5 == (code *)0x0) {
              puVar23 = (undefined8 *)0x1;
              goto LAB_10ae3cdb0;
            }
            iVar22 = (int)(puVar4 + -0x3c);
            puVar6 = puVar4 + -0x18;
            puVar8 = (undefined8 *)((long)puVar4 + -0x254);
            func_0x000107c2b498();
            iVar9 = (int)pcVar7;
            if (iVar22 == 0) break;
            pbVar2 = pbVar2 + (long)pcVar26;
            iVar22 = (int)(puVar4 + -0x2e);
            puVar6 = puVar4 + -0x4a;
            func_0x00010ae38e40();
            iVar9 = (int)pcVar7;
            pcVar26 = pcVar25;
          } while (iVar22 != 0);
        }
      }
    }
  }
  puVar23 = (undefined8 *)0x0;
LAB_10ae3cdb0:
  puVar4[-0x13] = 0;
  puVar4[-0x14] = 0;
  puVar4[-0x11] = 0;
  puVar4[-0x12] = 0;
  puVar4[-0x17] = 0;
  puVar4[-0x18] = 0;
  puVar4[-0x15] = 0;
  puVar4[-0x16] = 0;
  func_0x000107c2b49c(puVar4 + -0x18,puVar4 + -0x2e);
  func_0x000107c2b49c(puVar4 + -0x3c);
  puVar3 = puVar4 + -0x4a;
  func_0x000107c2b49c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != puVar4[-0xf]) {
    ___stack_chk_fail();
    puVar4[-0x56] = pcVar26;
    puVar4[-0x55] = pbVar2;
    puVar4[-0x54] = pcVar5;
    puVar4[-0x53] = uVar11;
    puVar4[-0x52] = uVar24;
    puVar4[-0x51] = puVar23;
    puVar4[-0x50] = puVar4 + -2;
    puVar4[-0x4f] = FUN_10ae3ce20;
    puVar4 = puVar3;
    func_0x000107c2b314();
    iVar22 = (int)puVar10;
    if (iVar22 != 0) {
      if (iVar22 < 0) {
        uVar19 = 1;
        if (1 < -iVar22) {
          uVar19 = -iVar22;
        }
        uVar20 = (ulong)uVar19;
        plVar16 = puVar3 + iVar9;
        plVar18 = puVar8 + iVar9;
        do {
          lVar21 = *plVar18;
          *plVar16 = -(lVar21 + (long)puVar4);
          puVar4 = (undefined8 *)
                   ((ulong)puVar4 |
                   (ulong)((undefined1 *)(lVar21 + (long)puVar4) != (undefined1 *)0x0));
          uVar20 = uVar20 - 1;
          plVar16 = plVar16 + 1;
          plVar18 = plVar18 + 1;
        } while (uVar20 != 0);
      }
      else {
        uVar20 = (ulong)puVar10 & 0xffffffff;
        plVar16 = puVar3 + iVar9;
        puVar6 = puVar6 + iVar9;
        do {
          puVar8 = (undefined8 *)*puVar6;
          *plVar16 = (long)puVar8 - (long)puVar4;
          puVar4 = (undefined8 *)(ulong)(puVar8 < puVar4);
          uVar20 = uVar20 - 1;
          plVar16 = plVar16 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar20 != 0);
      }
    }
    return puVar4;
  }
  return puVar23;
}



/* Entry: 10ae3ce20; end: 10ae3cec7;  */

void FUN_10ae3ce20(ulong param_1,long param_2,long param_3,int param_4,uint param_5)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = (long)param_4;
  uVar1 = param_1;
  func_0x000107c2b314();
  if (param_5 != 0) {
    plVar2 = (long *)(param_1 + lVar8 * 8);
    if ((int)param_5 < 0) {
      uVar5 = 1;
      if (1 < (int)-param_5) {
        uVar5 = -param_5;
      }
      uVar6 = (ulong)uVar5;
      plVar4 = (long *)(param_3 + lVar8 * 8);
      do {
        lVar8 = *plVar4;
        *plVar2 = -(lVar8 + uVar1);
        uVar1 = uVar1 | lVar8 + uVar1 != 0;
        uVar6 = uVar6 - 1;
        plVar2 = plVar2 + 1;
        plVar4 = plVar4 + 1;
      } while (uVar6 != 0);
    }
    else {
      uVar6 = (ulong)param_5;
      puVar3 = (ulong *)(param_2 + lVar8 * 8);
      do {
        uVar7 = *puVar3;
        *plVar2 = uVar7 - uVar1;
        uVar1 = (ulong)(uVar7 < uVar1);
        uVar6 = uVar6 - 1;
        plVar2 = plVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



/* Entry: 10ae3cec8; end: 10ae3d553;  */

void FUN_10ae3cec8(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong *puVar21;
  
  iVar13 = (int)param_4;
  uVar7 = iVar13 * 2;
  uVar18 = (ulong)uVar7;
  uVar20 = (uint)param_5;
  uVar19 = (uint)param_6;
  if (iVar13 < 8) {
    func_0x00010ae31ffc(param_1,param_2,(long)(int)(uVar20 + iVar13),param_3,
                        (long)(int)(uVar19 + iVar13));
    iVar13 = uVar7 - (uVar19 + uVar20);
    if (iVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)
                (param_1 + (long)(int)uVar7 * 8 + (long)(int)uVar20 * 8 + (long)(int)uVar19 * 8,
                 (long)iVar13);
      return;
    }
  }
  else {
    uVar14 = param_4 & 0xffffffff;
    lVar12 = param_2 + (param_4 & 0xffffffff) * 8;
    puVar17 = (ulong *)(param_7 + uVar18 * 8);
    uVar8 = param_7;
    func_0x00010ae31cf0(param_7,param_2,lVar12,param_5,iVar13 - uVar20,puVar17);
    uVar9 = param_7 + (param_4 & 0xffffffff) * 8;
    lVar1 = param_3 + (param_4 & 0xffffffff) * 8;
    uVar15 = uVar9;
    func_0x00010ae31cf0(uVar9,lVar1,param_3,param_6,uVar19 - iVar13,puVar17);
    uVar15 = uVar15 ^ uVar8;
    lVar4 = param_1 + uVar18 * 8;
    uVar7 = iVar13 * 4;
    if (iVar13 == 8) {
      FUN_10ae30cfc(puVar17,param_7,uVar9);
      FUN_10ae30cfc(param_1,param_2,param_3);
      func_0x00010ae31ffc(lVar4,lVar12,(long)(int)uVar20,lVar1,(long)(int)uVar19);
      iVar3 = uVar19 + uVar20;
      if (iVar3 != 0x10) {
        _bzero(param_1 + (long)(iVar3 + 0x10) * 8,
               -(ulong)(0x10U - iVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)(0x10U - iVar3) << 3);
      }
    }
    else {
      lVar2 = param_7 + (ulong)uVar7 * 8;
      func_0x00010ae3d238(puVar17,param_7,uVar9,param_4,0,0,lVar2);
      func_0x00010ae3d238(param_1,param_2,param_3,param_4,0,0,lVar2);
      _bzero(lVar4,uVar18 << 3);
      if (((int)uVar20 < 0x10) && ((int)uVar19 < 0x10)) {
        func_0x00010ae31ffc(lVar4,lVar12,(long)(int)uVar20,lVar1,(long)(int)uVar19);
      }
      else {
        uVar6 = uVar20;
        if ((int)uVar20 <= (int)uVar19) {
          uVar6 = uVar19;
        }
        do {
          uVar5 = (int)param_4 / 2;
          param_4 = (ulong)uVar5;
          if ((int)uVar5 < (int)uVar6) {
            FUN_10ae3cec8(lVar4,lVar12,lVar1,param_4,uVar20 - uVar5,uVar19 - uVar5,lVar2);
            goto LAB_10ae3d138;
          }
        } while (uVar20 != uVar5 && uVar19 != uVar5);
        func_0x00010ae3d238(lVar4);
      }
    }
LAB_10ae3d138:
    uVar9 = param_7;
    func_0x000107c2b300(param_7,param_1,lVar4,uVar18);
    puVar21 = (ulong *)(param_7 + (ulong)uVar7 * 8);
    puVar10 = puVar21;
    func_0x000107c2b314(puVar21,param_7,puVar17,uVar18);
    puVar11 = puVar17;
    func_0x000107c2b300(puVar17,param_7,puVar17,uVar18);
    puVar16 = puVar17;
    do {
      *puVar16 = *puVar16 & ~uVar15 | *puVar21 & uVar15;
      uVar18 = uVar18 - 1;
      puVar16 = puVar16 + 1;
      puVar21 = puVar21 + 1;
    } while (uVar18 != 0);
    lVar12 = param_1 + uVar14 * 8;
    func_0x000107c2b300(lVar12,lVar12,puVar17);
    uVar19 = iVar13 * 3;
    uVar18 = lVar12 + (~uVar15 & (long)puVar11 + uVar9 | uVar15 & uVar9 - (long)puVar10);
    puVar17 = (ulong *)(param_1 + (ulong)uVar19 * 8);
    do {
      uVar9 = *puVar17 + uVar18;
      uVar18 = (ulong)CARRY8(*puVar17,uVar18);
      *puVar17 = uVar9;
      uVar19 = uVar19 + 1;
      puVar17 = puVar17 + 1;
    } while ((int)uVar19 < (int)uVar7);
  }
  return;
}



/* Entry: 10ae3d554; end: 10ae3d59b;  */

void FUN_10ae3d554(void)

{
  uRam0000000113836a98 = 0;
  uRam0000000113836ab0 = 0;
  uRam0000000113836ab8 = 0;
  uRam0000000113836a88 = 0x1000000010;
  uRam0000000113836a80 = 0x10000001a3;
  uRam0000000113836a90 = 0x200000108;
  pcRam0000000113836aa0 = FUN_10ae3d59c;
  pcRam0000000113836aa8 = FUN_10ae3d698;
  return;
}



/* Entry: 10ae3d59c; end: 10ae3d697;  */

bool FUN_10ae3d59c(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = param_1[2];
  uVar1 = *(uint *)(*param_1 + 0x14) & 0x3f;
  if (uVar1 == 5) {
    bVar2 = false;
  }
  else {
    bVar2 = uVar1 == 2;
    if ((param_4 == 0) && (0xfffffffd < uVar1 - 3)) {
      func_0x000107c2b15c(param_2,(int)param_1[3] << 3,lVar5);
      iVar3 = (int)param_2;
      puVar4 = &UNK_1001e51e0;
      if (uVar1 != 2) {
        puVar4 = (undefined *)0x0;
      }
      *(undefined **)(lVar5 + 0xf8) = &UNK_1001e5180;
      *(undefined **)(lVar5 + 0x100) = puVar4;
      goto LAB_10ae3d65c;
    }
  }
  func_0x000107c2b158(param_2,(int)param_1[3] << 3,lVar5);
  iVar3 = (int)param_2;
  *(undefined **)(lVar5 + 0xf8) = &UNK_1001e5120;
  *(undefined8 *)(lVar5 + 0x100) = 0;
  if (bVar2) {
    puVar4 = &UNK_1001e51e0;
  }
  else {
    if (uVar1 != 5) goto LAB_10ae3d65c;
    puVar4 = &UNK_1001e55e0;
  }
  *(undefined **)(lVar5 + 0x100) = puVar4;
LAB_10ae3d65c:
  if (iVar3 < 0) {
    func_0x000107c2b29c(0x1e,0,100,&UNK_10f6c74f3,0xe5);
  }
  return iVar3 >= 0;
}



/* Entry: 10ae3d698; end: 10ae3d947;  */

undefined8 FUN_10ae3d698(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  bool bVar2;
  long lVar3;
  ulong *puVar4;
  bool bVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  code *pcVar11;
  ulong uVar12;
  ulong auStack_70 [2];
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (*(code **)(lVar8 + 0x100) != (code *)0x0) {
    (**(code **)(lVar8 + 0x100))
              (param_3,param_2,param_4,lVar8,param_1 + 0x34,*(undefined4 *)(param_1 + 0x1c));
    return 1;
  }
  puVar1 = (ulong *)(param_1 + 0x34);
  pcVar11 = *(code **)(lVar8 + 0xf8);
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (param_4 == 0) {
      return 1;
    }
    puVar4 = puVar1;
    if ((param_3 < param_2) || ((ulong *)0x1f < param_3 && param_2 <= param_3 + -4)) {
      for (; 0xf < param_4; param_4 = param_4 - 0x10) {
        (*pcVar11)(param_3,param_2,lVar8);
        *param_2 = *puVar4 ^ *param_2;
        param_2[1] = puVar4[1] ^ param_2[1];
        param_2 = param_2 + 2;
        puVar4 = param_3;
        param_3 = param_3 + 2;
      }
      uVar12 = *puVar4;
      *(ulong *)(param_1 + 0x3c) = puVar4[1];
      *puVar1 = uVar12;
    }
    else {
      if (param_4 < 0x10) goto LAB_10ae3d8f0;
      do {
        (*pcVar11)(param_3,auStack_70,lVar8);
        lVar3 = 0;
        bVar2 = true;
        do {
          bVar5 = bVar2;
          uVar7 = *(undefined8 *)((long)param_3 + lVar3);
          *(ulong *)((long)param_2 + lVar3) =
               *(ulong *)((long)puVar1 + lVar3) ^ *(ulong *)((long)auStack_70 + lVar3);
          *(undefined8 *)((long)puVar1 + lVar3) = uVar7;
          lVar3 = 8;
          bVar2 = false;
        } while (bVar5);
        param_4 = param_4 - 0x10;
        param_3 = param_3 + 2;
        param_2 = param_2 + 2;
      } while (0xf < param_4);
    }
    if (param_4 == 0) {
      return 1;
    }
LAB_10ae3d8f0:
    (*pcVar11)(param_3,auStack_70,lVar8);
    puVar4 = param_3;
    puVar6 = puVar1;
    uVar12 = param_4;
    puVar10 = auStack_70;
    do {
      uVar9 = *puVar4;
      *(byte *)param_2 = (byte)*puVar6 ^ *(byte *)puVar10;
      *(byte *)puVar6 = (byte)uVar9;
      uVar12 = uVar12 - 1;
      puVar4 = (ulong *)((long)puVar4 + 1);
      puVar6 = (ulong *)((long)puVar6 + 1);
      param_2 = (ulong *)((long)param_2 + 1);
      puVar10 = (ulong *)((long)puVar10 + 1);
    } while (uVar12 != 0);
    do {
      *(byte *)((long)puVar1 + param_4) = *(byte *)((long)param_3 + param_4);
      param_4 = param_4 + 1;
    } while (param_4 != 0x10);
    return 1;
  }
  if (param_4 == 0) {
    return 1;
  }
  puVar4 = puVar1;
  if (0xf < param_4) {
    uVar12 = 0;
    uVar9 = param_4;
    puVar6 = param_2;
    do {
      puVar10 = (ulong *)((long)param_2 + uVar12);
      *puVar10 = *puVar4 ^ *(ulong *)((long)param_3 + uVar12);
      puVar10[1] = puVar4[1] ^ ((ulong *)((long)param_3 + uVar12))[1];
      (*pcVar11)(puVar10,puVar10,lVar8);
      uVar9 = uVar9 - 0x10;
      uVar12 = uVar12 + 0x10;
      puVar4 = puVar6;
      puVar6 = puVar6 + 2;
    } while (0xf < uVar9);
    puVar6 = (ulong *)((long)param_2 + uVar12);
    param_2 = puVar6 + -2;
    if (uVar12 == param_4) goto LAB_10ae3d870;
    param_3 = (ulong *)((long)param_3 + uVar12);
    puVar4 = param_2;
    param_2 = puVar6;
    param_4 = uVar9;
  }
  uVar12 = 0;
  do {
    *(byte *)((long)param_2 + uVar12) =
         *(byte *)((long)puVar4 + uVar12) ^ *(byte *)((long)param_3 + uVar12);
    uVar12 = uVar12 + 1;
  } while (param_4 != uVar12);
  do {
    *(byte *)((long)param_2 + param_4) = *(byte *)((long)puVar4 + param_4);
    param_4 = param_4 + 1;
  } while (param_4 != 0x10);
  (*pcVar11)(param_2,param_2,lVar8);
LAB_10ae3d870:
  uVar12 = *param_2;
  *(ulong *)(param_1 + 0x3c) = param_2[1];
  *puVar1 = uVar12;
  return 1;
}



/* Entry: 10ae3d948; end: 10ae3d98f;  */

void FUN_10ae3d948(void)

{
  uRam0000000113836ad8 = 0;
  uRam0000000113836af0 = 0;
  uRam0000000113836af8 = 0;
  uRam0000000113836ac8 = 0x1000000010;
  uRam0000000113836ac0 = 0x100000388;
  uRam0000000113836ad0 = 0x500000108;
  pcRam0000000113836ae0 = FUN_10ae3d59c;
  pcRam0000000113836ae8 = FUN_10ae3d990;
  return;
}



/* Entry: 10ae3d990; end: 10ae3dc6b;  */

undefined8 FUN_10ae3d990(long param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  
  lVar13 = *(long *)(param_1 + 0x10);
  pcVar3 = *(code **)(lVar13 + 0x100);
  puVar1 = (undefined8 *)(param_1 + 0x44);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = *(code **)(lVar13 + 0xf8);
    uVar11 = *(uint *)(param_1 + 0x68);
    if ((param_4 != 0) && (uVar12 = param_4, puVar8 = param_3, puVar9 = param_2, uVar11 != 0)) {
      do {
        param_3 = (ulong *)((long)puVar8 + 1);
        param_2 = (ulong *)((long)puVar9 + 1);
        *(byte *)puVar9 = *(byte *)((long)puVar1 + (ulong)uVar11) ^ (byte)*puVar8;
        param_4 = uVar12 - 1;
        uVar14 = uVar11 ^ 0xffffffff;
        uVar11 = uVar11 + 1 & 0xf;
        if ((uVar14 & 0xf) == 0) break;
        bVar2 = uVar12 != 1;
        uVar12 = param_4;
        puVar8 = param_3;
        puVar9 = param_2;
      } while (bVar2);
    }
    if (0xf < param_4) {
      do {
        (*pcVar3)(param_1 + 0x34,puVar1,lVar13);
        lVar10 = 0;
        uVar11 = 1;
        do {
          uVar11 = uVar11 + *(byte *)(param_1 + 0x43 + lVar10);
          *(char *)(param_1 + 0x43 + lVar10) = (char)uVar11;
          uVar11 = uVar11 >> 8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != -0x10);
        *param_2 = *(ulong *)(param_1 + 0x44) ^ *param_3;
        param_2[1] = *(ulong *)(param_1 + 0x4c) ^ param_3[1];
        param_4 = param_4 - 0x10;
        param_2 = param_2 + 2;
        param_3 = param_3 + 2;
      } while (0xf < param_4);
      uVar11 = 0;
    }
    if (param_4 != 0) {
      (*pcVar3)(param_1 + 0x34,puVar1,lVar13);
      lVar13 = 0;
      uVar14 = 1;
      do {
        uVar14 = uVar14 + *(byte *)(param_1 + 0x43 + lVar13);
        *(char *)(param_1 + 0x43 + lVar13) = (char)uVar14;
        uVar14 = uVar14 >> 8;
        lVar13 = lVar13 + -1;
      } while (lVar13 != -0x10);
      do {
        *(byte *)((long)param_2 + (ulong)uVar11) =
             *(byte *)((long)puVar1 + (ulong)uVar11) ^ *(byte *)((long)param_3 + (ulong)uVar11);
        uVar11 = uVar11 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  else {
    uVar11 = *(uint *)(param_1 + 0x68);
    uVar12 = param_4;
    if ((param_4 != 0) && (puVar8 = param_3, puVar9 = param_2, uVar11 != 0)) {
      do {
        param_3 = (ulong *)((long)puVar8 + 1);
        param_2 = (ulong *)((long)puVar9 + 1);
        *(byte *)puVar9 = *(byte *)((long)puVar1 + (ulong)uVar11) ^ (byte)*puVar8;
        uVar12 = param_4 - 1;
        uVar14 = uVar11 ^ 0xffffffff;
        uVar11 = uVar11 + 1 & 0xf;
        if ((uVar14 & 0xf) == 0) break;
        bVar2 = param_4 != 1;
        param_4 = uVar12;
        puVar8 = param_3;
        puVar9 = param_2;
      } while (bVar2);
    }
    uVar14 = (*(uint *)(param_1 + 0x40) & 0xff00ff00) >> 8 |
             (*(uint *)(param_1 + 0x40) & 0xff00ff) << 8;
    uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
    if (0xf < uVar12) {
      do {
        uVar4 = uVar12 >> 4;
        if (0xfffffff < uVar4) {
          uVar4 = 0x10000000;
        }
        uVar6 = uVar14 + (int)uVar4;
        uVar7 = (ulong)uVar6;
        uVar14 = 0;
        if (uVar4 <= uVar7) {
          uVar7 = 0;
          uVar14 = uVar6;
        }
        lVar10 = uVar4 - uVar7;
        (*pcVar3)(param_3,param_2,lVar10,lVar13,param_1 + 0x34);
        uVar6 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        *(uint *)(param_1 + 0x40) = uVar6 >> 0x10 | uVar6 << 0x10;
        if (uVar14 == 0) {
          lVar5 = 0;
          uVar6 = 1;
          do {
            uVar6 = uVar6 + *(byte *)(param_1 + 0x3f + lVar5);
            *(char *)(param_1 + 0x3f + lVar5) = (char)uVar6;
            uVar6 = uVar6 >> 8;
            lVar5 = lVar5 + -1;
          } while (lVar5 != -0xc);
        }
        uVar12 = uVar12 + lVar10 * -0x10;
        param_2 = param_2 + lVar10 * 2;
        param_3 = param_3 + lVar10 * 2;
      } while (0xf < uVar12);
    }
    if (uVar12 != 0) {
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      (*pcVar3)(puVar1,puVar1,1,lVar13,param_1 + 0x34);
      uVar6 = (uVar14 + 1 & 0xff00ff00) >> 8 | (uVar14 + 1 & 0xff00ff) << 8;
      *(uint *)(param_1 + 0x40) = uVar6 >> 0x10 | uVar6 << 0x10;
      if (uVar14 == 0xffffffff) {
        lVar13 = 0;
        uVar14 = 1;
        do {
          uVar14 = uVar14 + *(byte *)(param_1 + 0x3f + lVar13);
          *(char *)(param_1 + 0x3f + lVar13) = (char)uVar14;
          uVar14 = uVar14 >> 8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != -0xc);
      }
      do {
        *(byte *)((long)param_2 + (ulong)uVar11) =
             *(byte *)((long)puVar1 + (ulong)uVar11) ^ *(byte *)((long)param_3 + (ulong)uVar11);
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  *(uint *)(param_1 + 0x68) = uVar11;
  return 1;
}



/* Entry: 10ae3dc6c; end: 10ae3dcb3;  */

void FUN_10ae3dc6c(void)

{
  uRam00000001137ed3e8 = 0;
  uRam00000001137ed400 = 0;
  uRam00000001137ed408 = 0;
  uRam00000001137ed3d8 = 0x1000000010;
  uRam00000001137ed3d0 = 0x1000001a4;
  uRam00000001137ed3e0 = 0x400000108;
  pcRam00000001137ed3f0 = FUN_10ae3d59c;
  pcRam00000001137ed3f8 = FUN_10ae3dcb4;
  return;
}



/* Entry: 10ae3dcb4; end: 10ae3ddeb;  */

undefined8 FUN_10ae3dcb4(long param_1,byte *param_2,byte *param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  code *pcVar8;
  uint uVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar1 = param_1 + 0x34;
  pcVar8 = *(code **)(lVar7 + 0xf8);
  uVar9 = *(uint *)(param_1 + 0x68);
  if ((param_4 != 0) && (uVar4 = param_4, pbVar5 = param_3, pbVar6 = param_2, uVar9 != 0)) {
    do {
      param_3 = pbVar5 + 1;
      param_2 = pbVar6 + 1;
      *pbVar6 = *(byte *)(lVar1 + (ulong)uVar9) ^ *pbVar5;
      param_4 = uVar4 - 1;
      uVar2 = uVar9 ^ 0xffffffff;
      uVar9 = uVar9 + 1 & 0xf;
      if ((uVar2 & 0xf) == 0) break;
      bVar3 = uVar4 != 1;
      uVar4 = param_4;
      pbVar5 = param_3;
      pbVar6 = param_2;
    } while (bVar3);
  }
  for (; 0xf < param_4; param_4 = param_4 - 0x10) {
    (*pcVar8)(lVar1,lVar1,lVar7);
    if (uVar9 < 0x10) {
      uVar4 = (ulong)uVar9;
      do {
        *(ulong *)(param_2 + uVar4) = *(ulong *)(lVar1 + uVar4) ^ *(ulong *)(param_3 + uVar4);
        bVar3 = uVar4 < 8;
        uVar4 = uVar4 + 8;
      } while (bVar3);
    }
    uVar9 = 0;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + 0x10;
  }
  if (param_4 != 0) {
    (*pcVar8)(lVar1,lVar1,lVar7);
    do {
      param_2[uVar9] = *(byte *)(lVar1 + (ulong)uVar9) ^ param_3[uVar9];
      uVar9 = uVar9 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  *(uint *)(param_1 + 0x68) = uVar9;
  return 1;
}



/* Entry: 10ae3ddec; end: 10ae3de3b;  */

void FUN_10ae3ddec(void)

{
  uRam0000000113836b08 = 0xc00000010;
  uRam0000000113836b00 = 0x10000037f;
  uRam0000000113836b18 = 0;
  pcRam0000000113836b20 = FUN_10ae3de3c;
  uRam0000000113836b10 = 0x1f86000002b8;
  pcRam0000000113836b28 = FUN_10ae3df50;
  pcRam0000000113836b30 = FUN_10ae3e060;
  pcRam0000000113836b38 = FUN_10ae3e0c0;
  return;
}



/* Entry: 10ae3de3c; end: 10ae3df4f;  */

undefined8 FUN_10ae3de3c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  if (param_2 != 0 || param_3 != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x10) + (*(ulong *)(param_1 + 0x10) & 8));
    if (param_2 == 0) {
      if (*(int *)(puVar1 + 0x51) == 0) {
        if (*(int *)(puVar1 + 0x53) != 0) {
          _memcpy(puVar1[0x52],param_3);
        }
      }
      else {
        func_0x000107c2b4a8(puVar1,puVar1 + 0x32,param_3,(long)*(int *)(puVar1 + 0x53));
      }
      *(undefined4 *)((long)puVar1 + 0x28c) = 1;
      *(undefined4 *)(puVar1 + 0x54) = 0;
    }
    else {
      puVar1[0x2f] = 0;
      puVar1[0x2e] = 0;
      puVar1[0x31] = 0;
      puVar1[0x30] = 0;
      puVar1[0x2b] = 0;
      puVar1[0x2a] = 0;
      puVar1[0x2d] = 0;
      puVar1[0x2c] = 0;
      puVar1[0x27] = 0;
      puVar1[0x26] = 0;
      puVar1[0x29] = 0;
      puVar1[0x28] = 0;
      puVar1[0x23] = 0;
      puVar1[0x22] = 0;
      puVar1[0x25] = 0;
      puVar1[0x24] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x1e] = 0;
      puVar1[0x21] = 0;
      puVar1[0x20] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1d] = 0;
      puVar1[0x1c] = 0;
      puVar1[0x17] = 0;
      puVar1[0x16] = 0;
      puVar1[0x19] = 0;
      puVar1[0x18] = 0;
      puVar1[0x13] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x14] = 0;
      puVar1[0xf] = 0;
      puVar1[0xe] = 0;
      puVar1[0x11] = 0;
      puVar1[0x10] = 0;
      puVar1[0xd] = 0;
      puVar1[0xc] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      func_0x000107c2b3f0(puVar1 + 0x32,puVar1 + 10,param_2,*(undefined4 *)(param_1 + 0x18));
      puVar1[0x55] = &UNK_1001e55e0;
      if ((param_3 != 0) ||
         ((*(int *)((long)puVar1 + 0x28c) != 0 && (param_3 = puVar1[0x52], param_3 != 0)))) {
        func_0x000107c2b4a8(puVar1,puVar1 + 0x32,param_3,(long)*(int *)(puVar1 + 0x53));
        *(undefined4 *)((long)puVar1 + 0x28c) = 1;
      }
      *(undefined4 *)(puVar1 + 0x51) = 1;
    }
  }
  return 1;
}



/* Entry: 10ae3df50; end: 10ae3e05f;  */

undefined8 FUN_10ae3df50(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(ulong *)(param_1 + 0x10) + (*(ulong *)(param_1 + 0x10) & 8);
  if ((*(int *)(lVar2 + 0x288) != 0) && (*(int *)(lVar2 + 0x28c) != 0)) {
    if (param_3 == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (*(int *)(lVar2 + 0x29c) < 0) {
          return 0xffffffff;
        }
        lVar3 = lVar2;
        func_0x000107c2b4c0(lVar2,param_1 + 0x44);
        if ((int)lVar3 == 0) {
          return 0xffffffff;
        }
      }
      else {
        func_0x000107c2b4c0(lVar2,0,0);
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(lVar2 + 0x48);
        *(undefined8 *)(param_1 + 0x44) = uVar4;
        *(undefined4 *)(lVar2 + 0x29c) = 0x10;
      }
      *(undefined4 *)(lVar2 + 0x28c) = 0;
      return 0;
    }
    if (param_2 == 0) {
      func_0x000107c2b4ac(lVar2,param_3,param_4,0);
      iVar1 = (int)lVar2;
    }
    else if (*(int *)(param_1 + 0x1c) == 0) {
      if (*(long *)(lVar2 + 0x2a8) == 0) {
        func_0x00010ae3992c(lVar2,lVar2 + 400,param_3,param_2,param_4);
        iVar1 = (int)lVar2;
      }
      else {
        func_0x000107c2b4bc();
        iVar1 = (int)lVar2;
      }
    }
    else if (*(long *)(lVar2 + 0x2a8) == 0) {
      FUN_10ae396bc();
      iVar1 = (int)lVar2;
    }
    else {
      func_0x000107c2b4b8();
      iVar1 = (int)lVar2;
    }
    if (iVar1 != 0) {
      return param_4;
    }
  }
  return 0xffffffff;
}



/* Entry: 10ae3e060; end: 10ae3e0bf;  */

void FUN_10ae3e060(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x10) + (*(ulong *)(param_1 + 0x10) & 8));
  puVar1[0x2f] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x31] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  lVar2 = puVar1[0x52];
  if (lVar2 == param_1 + 0x34) {
    return;
  }
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + -8);
    if (*plVar3 + 8 != 0) {
      func_0x000107c60ee4(plVar3,*plVar3 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar3);
    return;
  }
  return;
}



/* Entry: 10ae3e0c0; end: 10ae3e42b;  */

void FUN_10ae3e0c0(long *param_1,int param_2,uint param_3,ulong *param_4)

{
  char cVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = param_1[2] + (param_1[2] & 8U);
  if (0x10 < param_2) {
    if (param_2 < 0x13) {
      if (param_2 != 0x11) {
        if (param_2 != 0x12) {
          return;
        }
        if (param_3 == 0xffffffff) {
          if (*(int *)(lVar4 + 0x298) != 0) {
            _memcpy(*(undefined8 *)(lVar4 + 0x290),param_4);
          }
        }
        else {
          if ((int)param_3 < 4) {
            return;
          }
          if ((int)(*(int *)(lVar4 + 0x298) - param_3) < 8) {
            return;
          }
          _memcpy(*(undefined8 *)(lVar4 + 0x290),param_4,(ulong)param_3);
          if (*(int *)((long)param_1 + 0x1c) != 0) {
            func_0x000107c2b3c4(*(long *)(lVar4 + 0x290) + (ulong)param_3,
                                (long)*(int *)(lVar4 + 0x298) - (long)(int)param_3,&UNK_10e525a20);
          }
        }
        *(undefined4 *)(lVar4 + 0x2a0) = 1;
        return;
      }
      if (param_3 - 0x11 < 0xfffffff0) {
        return;
      }
      if (*(int *)((long)param_1 + 0x1c) != 0) {
        return;
      }
      _memcpy((long)param_1 + 0x44,param_4,param_3);
      *(uint *)(lVar4 + 0x29c) = param_3;
      return;
    }
    if (param_2 == 0x13) {
      if (*(int *)(lVar4 + 0x2a0) == 0) {
        return;
      }
      if (*(int *)(lVar4 + 0x288) == 0) {
        return;
      }
      func_0x000107c2b4a8(lVar4,lVar4 + 400,*(undefined8 *)(lVar4 + 0x290),
                          (long)*(int *)(lVar4 + 0x298));
      uVar2 = *(uint *)(lVar4 + 0x298);
      if ((((int)param_3 < 1) || ((int)uVar2 < (int)param_3)) && (param_3 = uVar2, uVar2 == 0)) {
        lVar6 = 0;
      }
      else {
        _memcpy(param_4,(*(long *)(lVar4 + 0x290) + (long)(int)uVar2) - (long)(int)param_3,
                (long)(int)param_3);
        lVar6 = (long)*(int *)(lVar4 + 0x298);
      }
      lVar5 = 0;
      lVar6 = lVar6 + *(long *)(lVar4 + 0x290) + -1;
      do {
        cVar1 = *(char *)(lVar6 + lVar5) + '\x01';
        *(char *)(lVar6 + lVar5) = cVar1;
        if (lVar5 == -7) break;
        lVar5 = lVar5 + -1;
      } while (cVar1 == '\0');
    }
    else {
      if (param_2 != 0x18) {
        return;
      }
      if (*(int *)(lVar4 + 0x2a0) == 0) {
        return;
      }
      if (*(int *)(lVar4 + 0x288) == 0) {
        return;
      }
      if (*(int *)((long)param_1 + 0x1c) != 0) {
        return;
      }
      if (param_3 != 0) {
        _memcpy((*(long *)(lVar4 + 0x290) + (long)*(int *)(lVar4 + 0x298)) - (long)(int)param_3,
                param_4,(long)(int)param_3);
      }
      func_0x000107c2b4a8(lVar4,lVar4 + 400,*(undefined8 *)(lVar4 + 0x290),
                          (long)*(int *)(lVar4 + 0x298));
    }
    *(undefined4 *)(lVar4 + 0x28c) = 1;
    return;
  }
  if (param_2 < 9) {
    if (param_2 == 0) {
      *(undefined8 *)(lVar4 + 0x288) = 0;
      *(undefined4 *)(lVar4 + 0x298) = *(undefined4 *)(*param_1 + 0xc);
      *(long *)(lVar4 + 0x290) = (long)param_1 + 0x34;
      *(undefined8 *)(lVar4 + 0x29c) = 0xffffffff;
      return;
    }
    if (param_2 != 8) {
      return;
    }
    lVar6 = param_4[2] + (param_4[2] & 8);
    _memcpy(lVar6,lVar4,0x2b0);
    if (*(long *)(lVar4 + 0x290) == (long)param_1 + 0x34) {
      *(long *)(lVar6 + 0x290) = (long)param_4 + 0x34;
      return;
    }
    uVar2 = *(uint *)(lVar4 + 0x298);
    uVar7 = (ulong)(int)uVar2;
    if (uVar2 < 0xfffffff8) {
      puVar3 = (ulong *)(uVar7 + 8);
      _malloc();
      if (puVar3 != (ulong *)0x0) {
        param_4 = puVar3 + 1;
        *puVar3 = uVar7;
        *(ulong **)(lVar6 + 0x290) = param_4;
        if (uVar2 == 0) {
          return;
        }
        lVar4 = *(long *)(lVar4 + 0x290);
        goto LAB_10ae3e3f4;
      }
    }
    *(undefined8 *)(lVar6 + 0x290) = 0;
  }
  else {
    if (param_2 == 9) {
      if ((int)param_3 < 1) {
        return;
      }
      if ((0x10 < param_3) && (*(int *)(lVar4 + 0x298) < (int)param_3)) {
        if (*(long *)(lVar4 + 0x290) != (long)param_1 + 0x34) {
          func_0x000107c2b534();
        }
        puVar3 = (ulong *)((ulong)param_3 + 8);
        _malloc();
        if (puVar3 == (ulong *)0x0) {
          *(undefined8 *)(lVar4 + 0x290) = 0;
          return;
        }
        *puVar3 = (ulong)param_3;
        *(ulong **)(lVar4 + 0x290) = puVar3 + 1;
      }
      *(uint *)(lVar4 + 0x298) = param_3;
      return;
    }
    if (param_2 != 0x10) {
      return;
    }
    if (param_3 - 0x11 < 0xfffffff0) {
      return;
    }
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      return;
    }
    if (*(int *)(lVar4 + 0x29c) < 0) {
      return;
    }
    uVar7 = (ulong)param_3;
    lVar4 = (long)param_1 + 0x44;
LAB_10ae3e3f4:
    _memcpy(param_4,lVar4,uVar7);
  }
  return;
}



/* Entry: 10ae3e42c; end: 10ae3e6cf;  */

void FUN_10ae3e42c(void)

{
  uRam0000000113836b58 = 0;
  uRam0000000113836b70 = 0;
  uRam0000000113836b78 = 0;
  uRam0000000113836b48 = 0x1000000018;
  uRam0000000113836b40 = 0x10000001a7;
  uRam0000000113836b50 = 0x200000108;
  pcRam0000000113836b60 = FUN_10ae3d59c;
  pcRam0000000113836b68 = FUN_10ae3d698;
  return;
}



/* Entry: 10ae3e6d0; end: 10ae3e73b;  */

undefined8 FUN_10ae3e6d0(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(uint *)(*param_1 + 4);
  if (uVar2 <= param_4) {
    uVar3 = 0;
    lVar1 = param_1[2];
    do {
      (**(code **)(lVar1 + 0xf8))(param_3 + uVar3,param_2 + uVar3,lVar1);
      uVar3 = uVar3 + uVar2;
    } while (uVar3 <= param_4 - uVar2);
  }
  return 1;
}



/* Entry: 10ae3e73c; end: 10ae3e7e3;  */

void FUN_10ae3e73c(void)

{
  uRam00000001137ed528 = 0;
  uRam00000001137ed540 = 0;
  uRam00000001137ed548 = 0;
  uRam00000001137ed510 = 0x10000001a6;
  uRam00000001137ed518 = 0x18;
  uRam00000001137ed520 = 0x100000108;
  pcRam00000001137ed530 = FUN_10ae3d59c;
  pcRam00000001137ed538 = FUN_10ae3e6d0;
  return;
}



/* Entry: 10ae3e7e4; end: 10ae3e833;  */

void FUN_10ae3e7e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 0x238) = 0;
  lVar1 = param_1 + 8;
  func_0x000107c2b500(lVar1,auStack_28,param_2,param_3,param_4);
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x250) = auStack_28[0];
  }
  return;
}



/* Entry: 10ae3e834; end: 10ae3e8df;  */

void FUN_10ae3e834(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_x5;
  long in_x6;
  ulong uVar3;
  
  if (in_x6 == 0xc) {
    uVar3 = *(ulong *)(in_x5 + 4);
    if ((uVar3 != 0xffffffffffffffff) &&
       (uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8,
       uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10,
       uVar3 = uVar3 >> 0x20 | uVar3 << 0x20, *(ulong *)(param_1 + 0x238) <= uVar3)) {
      *(ulong *)(param_1 + 0x238) = uVar3 + 1;
      func_0x000107c2b504(param_1 + 8);
      return;
    }
    uVar1 = 0x7d;
    uVar2 = 0x521;
  }
  else {
    uVar1 = 0x79;
    uVar2 = 0x516;
  }
  func_0x000107c2b29c(0x1e,0,uVar1,&UNK_10f6c74f3,uVar2);
  return;
}



/* Entry: 10ae3e8e0; end: 10ae3eaf3;  */

void FUN_10ae3e8e0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0x1032547698badcfe;
  *puVar1 = 0xefcdab8967452301;
  return;
}



/* Entry: 10ae3eaf4; end: 10ae3eb33;  */

undefined8 FUN_10ae3eaf4(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 8);
  func_0x000107c2b4a0(lVar5);
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(lVar5 + 0x78);
    uVar3 = *(uint *)(lVar5 + 0x70);
    uVar1 = (int)param_3 * 8;
    *(uint *)(lVar5 + 0x70) = uVar3 + uVar1;
    *(uint *)(lVar5 + 0x74) =
         (int)(param_3 >> 0x1d) + *(int *)(lVar5 + 0x74) + (uint)CARRY4(uVar3,uVar1);
    uVar1 = *(uint *)(lVar5 + 0xb8);
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar4 < 0x40)) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,param_3);
        *(int *)(lVar5 + 0xb8) = *(int *)(lVar5 + 0xb8) + (int)param_3;
        return 1;
      }
      lVar6 = 0x40 - uVar4;
      if (uVar1 != 0x40) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,lVar6);
      }
      func_0x00010072d840(lVar5 + 0x5c,puVar2,1);
      param_2 = param_2 + lVar6;
      param_3 = param_3 - lVar6;
      *(undefined4 *)(lVar5 + 0xb8) = 0;
      *(undefined8 *)(lVar5 + 0x80) = 0;
      *puVar2 = 0;
      *(undefined8 *)(lVar5 + 0x90) = 0;
      *(undefined8 *)(lVar5 + 0x88) = 0;
      *(undefined8 *)(lVar5 + 0xa0) = 0;
      *(undefined8 *)(lVar5 + 0x98) = 0;
      *(undefined8 *)(lVar5 + 0xb0) = 0;
      *(undefined8 *)(lVar5 + 0xa8) = 0;
    }
    if (0x3f < param_3) {
      func_0x00010072d840(lVar5 + 0x5c,param_2,param_3 >> 6);
      param_2 = param_2 + (param_3 & 0xffffffffffffffc0);
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      *(int *)(lVar5 + 0xb8) = (int)param_3;
      func_0x000107c610b4(puVar2,param_2,param_3);
    }
  }
  return 1;
}



/* Entry: 10ae3eb34; end: 10ae3eb67;  */

undefined8 FUN_10ae3eb34(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  func_0x000107c2b4a4(param_2,lVar6);
  puVar2 = (uint *)(lVar6 + 0x5c);
  puVar1 = (undefined8 *)(lVar6 + 0x78);
  uVar7 = *(undefined8 *)(lVar6 + 0x70);
  uVar3 = *(uint *)(lVar6 + 0xb8);
  uVar5 = (ulong)uVar3;
  *(undefined1 *)((long)puVar1 + uVar5) = 0x80;
  lVar4 = uVar5 + 1;
  if (uVar3 < 0x38) {
    if (lVar4 == 0x38) goto code_r0x00010072eaa0;
  }
  else {
    if (uVar3 != 0x3f) {
      func_0x000107c60ee4((long)puVar1 + lVar4,0x3f - uVar5);
    }
    func_0x00010072d840(puVar2,puVar1,1);
    lVar4 = 0;
  }
  func_0x000107c60ee4((long)puVar1 + lVar4,0x38 - lVar4);
code_r0x00010072eaa0:
  uVar7 = NEON_rev32(uVar7,1);
  uVar7 = NEON_rev64(uVar7,4);
  *(undefined8 *)(lVar6 + 0xb0) = uVar7;
  func_0x00010072d840(puVar2,puVar1,1);
  *(undefined4 *)(lVar6 + 0xb8) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *puVar1 = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0xb0) = 0;
  *(undefined8 *)(lVar6 + 0xa8) = 0;
  uVar3 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
  *(uint *)(param_2 + 0x10) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(lVar6 + 0x60) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 0x60) & 0xff00ff) << 8;
  *(uint *)(param_2 + 0x14) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(lVar6 + 100) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 100) & 0xff00ff) << 8;
  *(uint *)(param_2 + 0x18) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(lVar6 + 0x68) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 0x68) & 0xff00ff) << 8;
  *(uint *)(param_2 + 0x1c) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(lVar6 + 0x6c) & 0xff00ff00) >> 8 | (*(uint *)(lVar6 + 0x6c) & 0xff00ff) << 8;
  *(uint *)(param_2 + 0x20) = uVar3 >> 0x10 | uVar3 << 0x10;
  return 1;
}



/* Entry: 10ae3eb68; end: 10ae3ec6f;  */

undefined8 FUN_10ae3eb68(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = 0x90;
    uVar4 = (ulong)uVar1;
    do {
      uVar2 = *(ulong *)(param_2 + lVar3) | uVar2;
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (uVar2 != 0) {
      FUN_10ae2f1b4(auStack_c0,param_2 + 0x90,(ulong)uVar1,*(undefined8 *)(param_1 + 0x138));
      func_0x000107c2b38c(auStack_78,auStack_c0,auStack_c0,(long)*(int *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x138));
      if (param_3 != 0) {
        func_0x000107c2b38c(param_3,param_2,auStack_78,(long)*(int *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x138));
      }
      if (param_4 != 0) {
        func_0x000107c2b38c(auStack_78,auStack_78,auStack_c0,(long)*(int *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x138));
        func_0x000107c2b38c(param_4,param_2 + 0x48,auStack_78,(long)*(int *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x138));
      }
      return 1;
    }
  }
  func_0x000107c2b29c(0xf,0,0x77,&UNK_10f6c6ff6,0xb5);
  return 0;
}



/* Entry: 10ae3ec70; end: 10ae3ee73;  */

undefined8 FUN_10ae3ec70(long param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_138 [72];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_4 == 0) {
    return 1;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x90);
  param_2[1] = *(undefined8 *)(param_3 + 0x98);
  *param_2 = uVar8;
  uVar9 = *(undefined8 *)(param_3 + 0xa8);
  uVar8 = *(undefined8 *)(param_3 + 0xa0);
  uVar11 = *(undefined8 *)(param_3 + 0xb8);
  uVar10 = *(undefined8 *)(param_3 + 0xb0);
  uVar13 = *(undefined8 *)(param_3 + 200);
  uVar12 = *(undefined8 *)(param_3 + 0xc0);
  param_2[8] = *(undefined8 *)(param_3 + 0xd0);
  param_2[5] = uVar11;
  param_2[4] = uVar10;
  param_2[7] = uVar13;
  param_2[6] = uVar12;
  param_2[3] = uVar9;
  param_2[2] = uVar8;
  uVar7 = param_4 - 1;
  if (uVar7 != 0) {
    lVar6 = param_3 + 0x168;
    puVar2 = param_2;
    uVar5 = uVar7;
    do {
      func_0x000107c2b38c(puVar2 + 0x12,puVar2,lVar6,(long)*(int *)(param_1 + 0x40),
                          *(undefined8 *)(param_1 + 0x138));
      lVar6 = lVar6 + 0xd8;
      uVar5 = uVar5 - 1;
      puVar2 = puVar2 + 0x12;
    } while (uVar5 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    puVar4 = param_2 + uVar7 * 0x12;
    uVar5 = (ulong)uVar1;
    do {
      uVar3 = *puVar4 | uVar3;
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != 0);
    if (uVar3 != 0) {
      FUN_10ae2f1b4(&uStack_a8,param_2 + uVar7 * 0x12,(ulong)uVar1,*(undefined8 *)(param_1 + 0x138))
      ;
      param_2 = param_2 + param_4 * 0x12 + -0x24;
      lVar6 = param_3 + param_4 * 0xd8 + -0x48;
      do {
        if (uVar7 == 0) {
          uStack_c8 = uStack_80;
          uStack_d0 = uStack_88;
          uStack_b8 = uStack_70;
          uStack_c0 = uStack_78;
          uStack_b0 = uStack_68;
          uStack_e8 = uStack_a0;
          uStack_f0 = uStack_a8;
          uStack_d8 = uStack_90;
          uStack_e0 = uStack_98;
        }
        else {
          func_0x000107c2b38c(&uStack_f0,&uStack_a8,param_2,(long)*(int *)(param_1 + 0x40),
                              *(undefined8 *)(param_1 + 0x138));
          func_0x000107c2b38c(&uStack_a8,&uStack_a8,lVar6,(long)*(int *)(param_1 + 0x40),
                              *(undefined8 *)(param_1 + 0x138));
        }
        func_0x000107c2b38c(auStack_138,&uStack_f0,&uStack_f0,(long)*(int *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x138));
        func_0x000107c2b38c(param_2 + 0x12,lVar6 + -0x90,auStack_138,(long)*(int *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x138));
        func_0x000107c2b38c(param_2 + 0x1b,lVar6 + -0x48,auStack_138,(long)*(int *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x138));
        func_0x000107c2b38c(param_2 + 0x1b,param_2 + 0x1b,&uStack_f0,(long)*(int *)(param_1 + 0x40),
                            *(undefined8 *)(param_1 + 0x138));
        uVar7 = uVar7 - 1;
        param_2 = param_2 + -0x12;
        lVar6 = lVar6 + -0xd8;
      } while (uVar7 < param_4);
      return 1;
    }
  }
  func_0x000107c2b29c(0xf,0,0x77,&UNK_10f6c6ff6,0xdc);
  return 0;
}



/* Entry: 10ae3ee74; end: 10ae3eecf;  */

/* WARNING: Possible PIC construction at 0x00010ae3eeac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae3eeb0) */

void FUN_10ae3ee74(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_188 [144];
  undefined1 auStack_f8 [144];
  long lStack_68;
  
  func_0x000107c2b388(param_2,(long)*(int *)(param_1 + 0x40),param_3,param_4,
                      *(undefined8 *)(param_1 + 0x138));
  uVar2 = (ulong)*(int *)(param_1 + 0x40);
  plVar3 = *(long **)(param_1 + 0x138);
  lVar1 = *plVar3;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uVar2 < 10) && (uVar2 == (long)(int)plVar3[4])) {
    if (uVar2 < 2) {
      if (param_2 == lVar1) {
        func_0x000107c2b3b4(auStack_188,param_2,uVar2,auStack_f8);
        if (uVar2 != 0) {
          func_0x000107c60e6c(auStack_f8,0,uVar2 << 4,0x90);
        }
      }
      else {
        func_0x000107c2b3ac(auStack_188,param_2,uVar2,lVar1,uVar2);
      }
      func_0x00010022846c(param_2,uVar2,auStack_188,uVar2 << 1,plVar3);
      if ((int)param_2 != 0) {
        if (uVar2 != 0) {
          func_0x000107c60e6c(auStack_188,0,uVar2 << 4,0x90);
        }
        goto code_r0x000100411314;
      }
    }
    else {
      func_0x0001002270c0(param_2,param_2,lVar1,plVar3[3],plVar3 + 6,uVar2);
      if ((int)param_2 != 0) {
code_r0x000100411314:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return;
        }
        goto code_r0x000100411348;
      }
    }
  }
  func_0x000107c60ebc();
code_r0x000100411348:
  func_0x000107c60e78();
  puRam00000001137ed648 = &UNK_10e525c10;
  uRam00000001137ed658 = 0x200000000;
  uRam00000001137ed650 = 0x100000001;
  return;
}



/* Entry: 10ae3eed0; end: 10ae3eee7;  */

/* WARNING: Possible PIC construction at 0x000100414a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100414a3c) */
/* WARNING: Removing unreachable block (ram,0x000100414a54) */
/* WARNING: Removing unreachable block (ram,0x000100414a5c) */
/* WARNING: Removing unreachable block (ram,0x000100414a6c) */

long * FUN_10ae3eed0(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar21;
  long *unaff_x21;
  long *plVar22;
  long *unaff_x22;
  long *unaff_x23;
  long lVar23;
  ulong unaff_x24;
  uint uVar24;
  ulong *puVar25;
  long lVar26;
  ulong unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  ulong uVar27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lStack_660;
  undefined4 uStack_658;
  int iStack_654;
  undefined8 uStack_650;
  long lStack_648;
  undefined4 uStack_640;
  int iStack_63c;
  undefined8 uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  long *plStack_620;
  ulong uStack_618;
  ulong uStack_610;
  long *plStack_608;
  long *plStack_600;
  long *plStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined1 **ppuStack_5e0;
  code *pcStack_5d8;
  ulong uStack_5d0;
  long alStack_5c8 [8];
  long lStack_588;
  long *plStack_580;
  long *plStack_578;
  long *plStack_570;
  long *plStack_568;
  undefined1 *puStack_560;
  code *pcStack_558;
  int iStack_550;
  uint uStack_54c;
  long *plStack_548;
  uint uStack_53c;
  long alStack_538 [9];
  long alStack_4f0 [144];
  long lStack_70;
  
  plVar12 = (long *)(long)*(int *)(param_1 + 0x40);
  plVar15 = *(long **)(param_1 + 0x138);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar21 = unaff_x19;
  plVar9 = unaff_x20;
  if ((plVar12 < (long *)0xa) &&
     (plVar21 = plVar15, plVar9 = plVar12, plVar12 == (long *)(long)(int)plVar15[4])) {
    plVar7 = param_2;
    plVar22 = param_5;
    plVar13 = param_4;
    if (param_5 != (long *)0x0) {
      unaff_x24 = (ulong)((int)param_5 * 0x40 - 0x41);
LAB_10ae2eee4:
      lVar6 = param_4[(long)plVar22 + -1];
      iVar4 = (int)unaff_x24;
      unaff_x23 = param_4;
      if (lVar6 == 0) goto code_r0x00010ae2eeec;
      plVar10 = plVar12;
      plVar5 = plVar15;
      func_0x000107c2b328();
      iVar3 = (int)lVar6;
      iVar1 = iVar3 + iVar4 + 1;
      if (iVar1 < 0x2a0) {
        if (iVar1 < 0xf0) {
          uVar18 = 3;
          if (iVar1 < 0x18) {
            uVar18 = 1;
          }
          uVar24 = 4;
          if (iVar1 < 0x50) {
            uVar24 = uVar18;
          }
          unaff_x28 = (ulong)uVar24;
        }
        else {
          unaff_x28 = 5;
        }
      }
      else {
        unaff_x28 = 6;
      }
      uVar18 = (uint)unaff_x28;
      uStack_53c = uVar18;
      if (4 < uVar18) {
        uStack_53c = 5;
      }
      plVar21 = (long *)((long)plVar12 << 3);
      if (plVar12 != (long *)0x0) {
        plVar13 = (long *)0x480;
        plVar10 = plVar21;
        ___memcpy_chk(alStack_4f0,param_3);
      }
      plStack_548 = plVar21;
      if (1 < uVar18) {
        plVar10 = alStack_4f0;
        plVar13 = plVar12;
        param_5 = plVar15;
        iStack_550 = iVar3;
        uStack_54c = uVar18;
        func_0x000107c2b38c(alStack_538,alStack_4f0,plVar10,plVar12,plVar15);
        uVar18 = uStack_53c - 1;
        if (uVar18 != 0) {
          uVar24 = 2;
          do {
            plVar10 = alStack_538;
            plVar13 = plVar12;
            param_5 = plVar15;
            func_0x000107c2b38c(alStack_4f0 + (ulong)(uVar24 - 1) * 9,
                                alStack_4f0 + (ulong)(uVar24 - 2) * 9,plVar10,plVar12,plVar15);
            uVar16 = uVar24 >> (ulong)(uVar18 & 0x1f);
            uVar24 = uVar24 + 1;
          } while (uVar16 == 0);
        }
        unaff_x28 = (ulong)uStack_54c;
        iVar3 = iStack_550;
      }
      unaff_x26 = (long *)0x0;
      uVar18 = iVar3 + iVar4;
      uVar24 = uVar18;
      do {
        while( true ) {
          uVar18 = uVar18 - 1;
          unaff_x25 = (ulong)uVar24;
          unaff_x27 = (ulong)uVar18;
          iVar4 = (int)unaff_x26;
          if (((long *)(ulong)(uVar24 >> 6) < plVar22) &&
             (((ulong)param_4[(long)(ulong)(uVar24 >> 6)] >> (unaff_x25 & 0x3f) & 1) != 0)) break;
          if (iVar4 != 0) {
            plVar10 = param_2;
            plVar13 = plVar12;
            param_5 = plVar15;
            func_0x000107c2b38c(param_2,param_2,param_2,plVar12,plVar15);
          }
          if (uVar24 == 0) goto LAB_10ae2f164;
          uVar24 = uVar24 - 1;
        }
        if (((uint)unaff_x28 < 2) || (uVar24 == 0)) {
          unaff_x27 = 0;
          unaff_x24 = 0;
          if (iVar4 == 0) goto LAB_10ae2f0e0;
LAB_10ae2f10c:
          iVar4 = (int)unaff_x24 + 1;
          do {
            func_0x000107c2b38c(param_2,param_2,param_2,plVar12,plVar15);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          plVar10 = alStack_4f0 + unaff_x27 * 9;
          plVar13 = plVar12;
          param_5 = plVar15;
          func_0x000107c2b38c(param_2,param_2,plVar10,plVar12,plVar15);
        }
        else {
          unaff_x24 = 0;
          uVar27 = 1;
          uVar18 = 1;
          do {
            uVar16 = (uint)uVar27;
            if (((long *)(unaff_x27 >> 6) < plVar22) &&
               (((ulong)param_4[(long)(unaff_x27 >> 6)] >> (unaff_x27 & 0x3f) & 1) != 0)) {
              uVar18 = uVar18 << (ulong)(uVar16 - (int)unaff_x24 & 0x1f) | 1;
              unaff_x24 = uVar27;
            }
            if (uVar24 <= uVar16) break;
            uVar27 = (ulong)(uVar16 + 1);
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
          } while (uVar16 + 1 < uStack_53c);
          unaff_x27 = (ulong)(uVar18 >> 1);
          if (iVar4 != 0) goto LAB_10ae2f10c;
LAB_10ae2f0e0:
          if (plVar12 != (long *)0x0) {
            plVar10 = plStack_548;
            _memcpy(param_2,alStack_4f0 + unaff_x27 * 9);
          }
        }
        uVar18 = uVar24 + ~(uint)unaff_x24;
        unaff_x26 = (long *)0x1;
        bVar2 = uVar24 != (uint)unaff_x24;
        uVar24 = uVar18;
      } while (bVar2);
LAB_10ae2f164:
      plVar21 = alStack_4f0;
      plVar7 = alStack_4f0;
      param_3 = (long *)0x480;
      _bzero();
      plVar15 = plVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return plVar7;
      }
      goto LAB_10ae2f1b0;
    }
LAB_10ae2eef8:
    plVar10 = (long *)*plVar15;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      do {
        plVar22 = (long *)((long)register0x00000008 + -0xd0);
        plVar5 = (long *)((long)register0x00000008 + -0xd0);
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        plVar21 = param_2;
        plVar9 = plVar12;
        plVar7 = plVar10;
        plVar13 = plVar12;
        if ((plVar12 < (long *)0xa) &&
           (unaff_x22 = (long *)((long)plVar12 << 1), unaff_x19 = plVar12, unaff_x20 = plVar15,
           plVar12 == (long *)(long)(int)plVar15[4] && plVar12 <= unaff_x22)) {
          *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
          *(undefined8 *)((long)register0x00000008 + -200) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
          if (plVar12 != (long *)0x0) {
            func_0x000107c60e68((undefined1 *)((long)register0x00000008 + -0xd0),plVar10,
                                (long)plVar12 << 3,0x90);
          }
          plVar10 = unaff_x22;
          func_0x00010022846c();
          plVar7 = plVar22;
          plVar13 = plVar10;
          unaff_x21 = param_2;
          if ((int)plVar21 == 0) goto code_r0x0001004149f8;
          if (plVar12 != (long *)0x0) {
            plVar22 = (long *)((long)plVar12 << 4);
            plVar9 = (long *)0x0;
            plVar10 = (long *)0x90;
            func_0x000107c60e6c();
            plVar21 = plVar5;
          }
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x38)) {
            return plVar21;
          }
        }
        else {
code_r0x0001004149f8:
          plVar10 = plVar13;
          plVar22 = plVar7;
          func_0x000107c60ebc();
        }
        func_0x000107c60e78();
        *(long **)((long)register0x00000008 + -0x100) = unaff_x22;
        *(long **)((long)register0x00000008 + -0xf8) = unaff_x21;
        *(long **)((long)register0x00000008 + -0xf0) = unaff_x20;
        *(long **)((long)register0x00000008 + -0xe8) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0xd8) = &UNK_100414a00;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
        plVar12 = (long *)(long)(int)plVar21[8];
        plVar15 = (long *)plVar21[0x27];
        unaff_x22 = (long *)((long)register0x00000008 + -0x148);
        param_2 = (long *)((long)register0x00000008 + -0x148);
        unaff_x30 = &UNK_100414a3c;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
        unaff_x19 = plVar22;
        unaff_x20 = plVar9;
        unaff_x21 = plVar21;
      } while( true );
    }
  }
  else {
    _abort();
    plVar7 = param_2;
    plVar10 = plVar12;
    plVar13 = param_4;
    param_2 = unaff_x21;
    plVar22 = unaff_x22;
  }
LAB_10ae2f1b0:
  ___stack_chk_fail();
  puVar8 = &uStack_5d0;
  pcStack_558 = FUN_10ae2f1b4;
  lStack_588 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_5e8 = plVar21;
  plStack_5f0 = plVar9;
  plStack_580 = plVar22;
  plStack_578 = param_2;
  plStack_570 = plVar9;
  plStack_568 = plVar21;
  puStack_560 = &stack0xfffffffffffffff0;
  if ((plVar10 < (long *)0xa) &&
     (plStack_5e8 = plVar13, plStack_5f0 = plVar10, plVar10 == (long *)(long)(int)plVar13[4])) {
    if (plVar10 == (long *)0x0) {
      uVar27 = 0xffffffffffffffff;
    }
    else {
      ___memcpy_chk(&uStack_5d0,plVar13[3],(long)plVar10 << 3,0x48);
      uVar27 = uStack_5d0 - 2;
      if ((uStack_5d0 < 2) &&
         (uStack_5d0 = uStack_5d0 | 0xfffffffffffffffe, uVar27 = uStack_5d0, plVar10 != (long *)0x1)
         ) {
        plVar21 = alStack_5c8;
        lVar6 = (long)plVar10 + -2;
        do {
          lVar17 = *plVar21;
          *plVar21 = lVar17 + -1;
          if (lVar17 != 0) break;
          bVar2 = lVar6 != 0;
          plVar21 = plVar21 + 1;
          lVar6 = lVar6 + -1;
        } while (bVar2);
      }
    }
    uStack_5d0 = uVar27;
    plVar21 = plVar7;
    plVar9 = param_3;
    param_5 = plVar10;
    plVar15 = plVar13;
    FUN_10ae2ee78();
    param_2 = param_3;
    plVar22 = plVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_588) {
      return plVar21;
    }
  }
  else {
    _abort();
    plVar21 = plVar7;
    plVar9 = param_3;
    puVar8 = (ulong *)plVar13;
  }
  ___stack_chk_fail();
  pcStack_5d8 = FUN_10ae2f2b4;
  uVar18 = *(uint *)(puVar8 + 1);
  uStack_630 = unaff_x28;
  uStack_628 = unaff_x27;
  plStack_620 = unaff_x26;
  uStack_618 = unaff_x25;
  uStack_610 = unaff_x24;
  plStack_608 = unaff_x23;
  plStack_600 = plVar22;
  plStack_5f8 = param_2;
  ppuStack_5e0 = &puStack_560;
  if (0 < (int)uVar18) {
    puVar25 = (ulong *)*puVar8;
    uVar27 = *puVar25;
    if ((uVar27 & 1) != 0) {
      if ((int)puVar8[2] != 0) {
        uVar11 = 0x6d;
        uVar14 = 0x395;
        goto LAB_10ae2f37c;
      }
      if ((int)plVar9[2] == 0) {
        lVar6 = *plVar9;
        func_0x000107c34f78(lVar6,(long)(int)plVar9[1],puVar25,(ulong)uVar18);
        if ((int)lVar6 < 0) {
          iVar4 = (int)plVar10[1];
          if (iVar4 == 0) {
            uVar27 = uVar27 & 0xfffffffffffffffe;
            if (uVar18 != 1) {
              lVar6 = (ulong)uVar18 - 1;
              do {
                puVar25 = puVar25 + 1;
                uVar27 = *puVar25 | uVar27;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
            if (uVar27 != 0) {
              plVar15 = plVar21;
              func_0x000107c2b2fc(plVar21,1);
              if ((int)plVar15 == 0) {
                return (long *)0x0;
              }
              *(undefined4 *)(plVar21 + 2) = 0;
              *(undefined8 *)*plVar21 = 1;
              *(undefined4 *)(plVar21 + 1) = 1;
              return (long *)0x1;
            }
            *(undefined4 *)(plVar21 + 2) = 0;
            *(undefined4 *)(plVar21 + 1) = 0;
            return (long *)0x1;
          }
          if ((plVar15 == (long *)0x0) &&
             (func_0x00010ae2ed3c(puVar8,param_5), plVar15 = (long *)puVar8, puVar8 == (ulong *)0x0)
             ) {
            plVar21 = (long *)0x0;
            plVar12 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          iVar1 = (int)plVar15[4];
          lVar6 = (long)iVar1;
          uVar18 = 3;
          if (iVar4 != 1) {
            uVar18 = 1;
          }
          uVar24 = 4;
          if (iVar4 < 2) {
            uVar24 = uVar18;
          }
          uVar18 = 5;
          if (iVar4 < 5) {
            uVar18 = uVar24;
          }
          uVar24 = 6;
          if (iVar4 < 0xf) {
            uVar24 = uVar18;
          }
          uVar16 = 1 << (ulong)uVar24;
          uVar18 = (uint)(lVar6 << 1);
          if ((int)uVar18 <= (int)uVar16) {
            uVar18 = uVar16;
          }
          iVar19 = (uVar18 + (iVar1 << (ulong)uVar24)) * 8;
          iVar3 = iVar19 + 0x40;
          if (iVar3 == -8) {
            plVar21 = (long *)0x0;
            plVar12 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar7 = (long *)((long)iVar3 + 8);
          _malloc();
          if (plVar7 == (long *)0x0) {
            plVar21 = (long *)0x0;
            plVar12 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar12 = plVar7 + 1;
          *plVar7 = (long)iVar3;
          lVar17 = ((ulong)plVar12 & 0xffffffffffffffc0) + 0x40;
          if (iVar19 != 0) {
            _bzero(lVar17,(long)iVar19);
          }
          lStack_648 = lVar17 + (long)(iVar1 << (ulong)uVar24) * 8;
          lStack_660 = lStack_648 + lVar6 * 8;
          uStack_658 = 0;
          uStack_640 = 0;
          uStack_650 = 0x200000000;
          uStack_638 = 0x200000000;
          plVar13 = &lStack_648;
          iStack_654 = iVar1;
          iStack_63c = iVar1;
          FUN_10ae2f7bc(plVar13,plVar15,param_5);
          if ((int)plVar13 == 0) {
            plVar21 = (long *)0x0;
            goto LAB_10ae2f790;
          }
          plVar13 = &lStack_660;
          func_0x000107c2b37c(plVar13,plVar9,plVar15,plVar15,param_5);
          if ((int)plVar13 != 0) {
            func_0x000107c2b330(lVar17,lVar6,&lStack_648);
            func_0x000107c2b330(lVar17 + lVar6 * 8,lVar6,&lStack_660);
            if (1 < uVar24) {
              plVar9 = &lStack_648;
              func_0x000107c2b37c(plVar9,&lStack_660,&lStack_660,plVar15,param_5);
              if ((int)plVar9 == 0) goto LAB_10ae2f788;
              func_0x000107c2b330(lVar17 + lVar6 * 0x10,lVar6,&lStack_648);
              if (uVar16 < 5) {
                uVar16 = 4;
              }
              lVar26 = (ulong)uVar16 - 3;
              lVar23 = (long)plVar7 + ((long)iVar1 * 0x18 - ((ulong)plVar12 & 0x3f)) + 0x48;
              do {
                plVar9 = &lStack_648;
                func_0x000107c2b37c(plVar9,&lStack_660,&lStack_648,plVar15,param_5);
                if ((int)plVar9 == 0) goto LAB_10ae2f788;
                func_0x000107c2b330(lVar23,lVar6,&lStack_648);
                lVar23 = lVar23 + lVar6 * 8;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
            }
            uVar18 = iVar4 * 0x40 - 1;
            uVar27 = (ulong)uVar18;
            iVar3 = 0;
            if (uVar24 != 0) {
              iVar3 = (int)uVar18 / (int)uVar24;
            }
            uVar16 = 0;
            iVar3 = uVar18 - iVar3 * uVar24;
            if (-1 < iVar3) {
              iVar19 = iVar3 + 1;
              do {
                uVar18 = (uint)uVar27;
                if (((int)uVar18 < 0) || (*(uint *)(plVar10 + 1) <= uVar18 >> 6)) {
                  uVar20 = 0;
                }
                else {
                  uVar20 = (uint)(*(ulong *)(*plVar10 + (ulong)(uVar18 >> 6) * 8) >> (uVar27 & 0x3f)
                                 ) & 1;
                }
                uVar16 = uVar20 | uVar16 << 1;
                uVar27 = (ulong)(uVar18 - 1);
                iVar19 = iVar19 + -1;
              } while (0 < iVar19);
              uVar27 = (ulong)((iVar4 * 0x40 - iVar3) - 2);
            }
            plVar9 = &lStack_648;
            FUN_10ae2f864(plVar9,iVar1,lVar17,uVar16,uVar24);
            iVar4 = (int)plVar9;
            while (iVar4 != 0) {
              iVar4 = (int)uVar27;
              if (iVar4 < 0) {
                func_0x000107c2b380(plVar21,&lStack_648,plVar15,param_5);
                goto LAB_10ae2f790;
              }
              iVar3 = 0;
              uVar18 = 0;
              uVar27 = (ulong)(iVar4 - uVar24);
              do {
                plVar9 = &lStack_648;
                func_0x000107c2b37c(plVar9,&lStack_648,&lStack_648,plVar15,param_5);
                if ((int)plVar9 == 0) goto LAB_10ae2f788;
                uVar16 = iVar4 + iVar3;
                if (((int)uVar16 < 0) || (*(uint *)(plVar10 + 1) <= uVar16 >> 6)) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = (uint)(*(ulong *)(*plVar10 + (ulong)(uVar16 >> 6) * 8) >>
                                 ((ulong)uVar16 & 0x3f)) & 1;
                }
                uVar18 = uVar16 | uVar18 << 1;
                iVar3 = iVar3 + -1;
              } while (uVar24 + iVar3 != 0);
              plVar9 = &lStack_660;
              FUN_10ae2f864(plVar9,iVar1,lVar17,uVar18,uVar24);
              if ((int)plVar9 == 0) break;
              plVar9 = &lStack_648;
              func_0x000107c2b37c(plVar9,&lStack_648,&lStack_660,plVar15,param_5);
              iVar4 = (int)plVar9;
            }
          }
LAB_10ae2f788:
          plVar21 = (long *)0x0;
LAB_10ae2f790:
          func_0x000107c2b384();
          func_0x000107c2b534(plVar12);
          return plVar21;
        }
      }
      uVar11 = 0x6b;
      uVar14 = 0x399;
      goto LAB_10ae2f37c;
    }
  }
  uVar11 = 0x68;
  uVar14 = 0x391;
LAB_10ae2f37c:
  func_0x000107c2b29c(3,0,uVar11,&UNK_10f6c6819,uVar14);
  return (long *)0x0;
code_r0x00010ae2eeec:
  unaff_x24 = (ulong)(iVar4 - 0x40);
  plVar22 = (long *)((long)plVar22 + -1);
  plVar7 = (long *)0x0;
  unaff_x26 = param_3;
  if (plVar22 == (long *)0x0) goto LAB_10ae2eef8;
  goto LAB_10ae2eee4;
}



/* Entry: 10ae3eee8; end: 10ae3f0ab;  */

ulong FUN_10ae3eee8(ulong param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte abStack_118 [72];
  undefined1 auStack_d0 [72];
  byte abStack_88 [32];
  undefined1 auStack_68 [40];
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    if (uVar1 == *(uint *)(param_1 + 0x18)) {
      if (0 < (int)uVar1) {
        uVar7 = 0;
        lVar8 = 0x90;
        uVar6 = (ulong)uVar1;
        do {
          uVar7 = *(ulong *)(param_2 + lVar8) | uVar7;
          lVar8 = lVar8 + 8;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (uVar7 != 0) {
          func_0x000107c2b38c(auStack_d0,param_2 + 0x90,param_2 + 0x90,(ulong)uVar1,
                              *(undefined8 *)(param_1 + 0x138));
          iVar2 = *(int *)(param_1 + 0x40);
          if (iVar2 != 0) {
            ___memcpy_chk(abStack_88,param_3,(long)iVar2 << 3,0x48);
          }
          func_0x000107c2b38c(abStack_88,abStack_88,auStack_d0,(long)iVar2,
                              *(undefined8 *)(param_1 + 0x138));
          func_0x000107c2b388(abStack_118,(long)*(int *)(param_1 + 0x40),param_2,
                              (long)*(int *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x138));
          lVar8 = (long)*(int *)(param_1 + 0x40);
          if (*(int *)(param_1 + 0x40) != 0) {
            lVar9 = 0;
            bVar5 = 0;
            do {
              bVar5 = abStack_118[lVar9] ^ abStack_88[lVar9] | bVar5;
              lVar9 = lVar9 + 1;
            } while (lVar8 * 8 - lVar9 != 0);
            if (bVar5 != 0) {
              uVar4 = param_3;
              func_0x000107c34f78(param_3,lVar8,param_1 + 0xe8,lVar8);
              if (-1 < (int)uVar4) {
                return 0;
              }
              func_0x000107c2b300(abStack_88,param_3,*(undefined8 *)(param_1 + 0x10),lVar8);
              func_0x000107c2b38c(abStack_88,abStack_88,auStack_d0,lVar8,
                                  *(undefined8 *)(param_1 + 0x138));
              if (*(int *)(param_1 + 0x40) != 0) {
                bVar5 = 0;
                lVar8 = (long)*(int *)(param_1 + 0x40) << 3;
                pbVar10 = abStack_118;
                pbVar11 = abStack_88;
                do {
                  bVar5 = *pbVar10 ^ *pbVar11 | bVar5;
                  lVar8 = lVar8 + -1;
                  pbVar10 = pbVar10 + 1;
                  pbVar11 = pbVar11 + 1;
                } while (lVar8 != 0);
                if (bVar5 != 0) {
                  return 0;
                }
              }
            }
          }
          return 1;
        }
      }
      return 0;
    }
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    uVar7 = 0;
    lVar8 = 0x90;
    do {
      uVar7 = *(ulong *)(param_2 + lVar8) | uVar7;
      lVar8 = lVar8 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (uVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_1;
      FUN_10ae3627c(param_1,auStack_68);
      if ((int)uVar6 != 0) {
        if (*(int *)(param_1 + 0x18) == 0) {
          uVar6 = 1;
        }
        else {
          puVar3 = auStack_68;
          _memcmp(puVar3,param_3,(long)*(int *)(param_1 + 0x18) << 3);
          uVar6 = (ulong)((int)puVar3 == 0);
        }
      }
    }
    return uVar6;
  }
  return 0;
}



/* Entry: 10ae3f0ac; end: 10ae3f5a3;  */

void FUN_10ae3f0ac(long param_1,ulong *param_2,long param_3,ulong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  bool bVar24;
  undefined8 uVar25;
  ulong *puVar26;
  undefined1 *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  ulong *puVar32;
  undefined8 *puVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  ulong *unaff_x19;
  ulong *unaff_x20;
  int iVar40;
  long lVar41;
  bool bVar42;
  undefined8 *unaff_x28;
  undefined1 auStack_1570 [120];
  ulong uStack_14f8;
  ulong uStack_14f0;
  ulong uStack_14e8;
  ulong uStack_14e0;
  long lStack_14d8;
  undefined8 *puStack_14d0;
  ulong *puStack_14c8;
  undefined8 ****ppppuStack_14c0;
  undefined8 uStack_14b8;
  undefined1 auStack_14b0 [120];
  ulong uStack_1438;
  ulong uStack_1430;
  ulong uStack_1428;
  ulong uStack_1420;
  ulong uStack_1418;
  ulong uStack_1410;
  ulong uStack_1408;
  ulong uStack_1400;
  long lStack_13f8;
  undefined8 *puStack_13f0;
  ulong *puStack_13e8;
  undefined8 ****ppppuStack_13e0;
  code *pcStack_13d8;
  undefined8 *puStack_13d0;
  ulong *puStack_13c8;
  ulong *puStack_13c0;
  ulong *puStack_13b8;
  ulong uStack_13b0;
  ulong uStack_13a8;
  ulong uStack_13a0;
  ulong uStack_1398;
  ulong uStack_1390;
  ulong uStack_1388;
  ulong uStack_1380;
  ulong uStack_1378;
  ulong uStack_1370;
  ulong uStack_1368;
  ulong uStack_1360;
  ulong uStack_1358;
  ulong uStack_1350;
  ulong uStack_1348;
  ulong uStack_1340;
  ulong uStack_1338;
  ulong uStack_1330;
  ulong uStack_1328;
  ulong uStack_1320;
  ulong uStack_1318;
  ulong uStack_1310;
  ulong uStack_1308;
  ulong uStack_1300;
  ulong uStack_12f8;
  ulong auStack_12f0 [204];
  long lStack_c90;
  undefined8 *puStack_c80;
  undefined8 uStack_c78;
  ulong uStack_c70;
  ulong *puStack_c68;
  undefined8 *puStack_c60;
  ulong *puStack_c58;
  undefined *puStack_c50;
  undefined *puStack_c48;
  ulong *puStack_c40;
  ulong *puStack_c38;
  undefined8 ****ppppuStack_c30;
  undefined8 uStack_c28;
  undefined8 *puStack_c20;
  ulong *puStack_c18;
  ulong uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  ulong uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  ulong uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  ulong uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  long lStack_b48;
  undefined8 *puStack_b40;
  undefined8 uStack_b38;
  long lStack_b30;
  undefined8 uStack_b28;
  undefined8 *puStack_b20;
  long lStack_b18;
  undefined8 *puStack_b10;
  undefined8 *puStack_b08;
  ulong *puStack_b00;
  ulong *puStack_af8;
  undefined1 ****ppppuStack_af0;
  undefined8 uStack_ae8;
  undefined8 *puStack_ae0;
  ulong *puStack_ad8;
  ulong *puStack_ad0;
  ulong *puStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  ulong uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 auStack_a60 [2];
  undefined8 auStack_a50 [2];
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  ulong uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  ulong auStack_9e0 [204];
  long lStack_380;
  undefined1 ***pppuStack_320;
  code *pcStack_318;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  long lStack_2a8;
  ulong *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 **ppuStack_290;
  undefined8 uStack_288;
  ulong *puStack_280;
  ulong *puStack_278;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 auStack_180 [32];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 auStack_140 [120];
  undefined1 auStack_c8 [32];
  ulong auStack_a8 [4];
  undefined1 auStack_88 [32];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar34 = (ulong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    uVar36 = 0;
    lVar37 = 0x90;
    do {
      uVar36 = *(ulong *)((long)param_2 + lVar37) | uVar36;
      lVar37 = lVar37 + 8;
      uVar34 = uVar34 - 1;
    } while (uVar34 != 0);
    unaff_x19 = param_4;
    unaff_x20 = param_2;
    if (uVar36 != 0) {
      uStack_160 = param_2[0x12] & 0xffffffffffffff;
      uStack_158 = *(ulong *)((long)param_2 + 0x97) & 0xffffffffffffff;
      uStack_150 = *(ulong *)((long)param_2 + 0x9e) & 0xffffffffffffff;
      uStack_148 = *(ulong *)((long)param_2 + 0xa4) >> 8;
      puVar26 = param_4;
      FUN_10ae4027c(auStack_140,&uStack_160);
      func_0x00010ae40318(&uStack_68,auStack_140);
      func_0x00010ae40444(auStack_140,&uStack_160,&uStack_68);
      func_0x00010ae40318(&uStack_68,auStack_140);
      FUN_10ae4027c(auStack_140,&uStack_68);
      func_0x00010ae40318(&uStack_68,auStack_140);
      func_0x00010ae40444(auStack_140,&uStack_160,&uStack_68);
      func_0x00010ae40318(&uStack_68,auStack_140);
      FUN_10ae4027c(auStack_140,&uStack_68);
      func_0x00010ae40318(auStack_88,auStack_140);
      FUN_10ae4027c(auStack_140,auStack_88);
      func_0x00010ae40318(auStack_88,auStack_140);
      FUN_10ae4027c(auStack_140,auStack_88);
      func_0x00010ae40318(auStack_88,auStack_140);
      func_0x00010ae40444(auStack_140,auStack_88,&uStack_68);
      func_0x00010ae40318(&uStack_68,auStack_140);
      FUN_10ae4027c(auStack_140,&uStack_68);
      func_0x00010ae40318(auStack_88,auStack_140);
      lVar37 = 5;
      do {
        FUN_10ae4027c(auStack_140,auStack_88);
        func_0x00010ae40318(auStack_88,auStack_140);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      func_0x00010ae40444(auStack_140,auStack_88,&uStack_68);
      func_0x00010ae40318(auStack_88,auStack_140);
      FUN_10ae4027c(auStack_140,auStack_88);
      func_0x00010ae40318(auStack_a8,auStack_140);
      lVar37 = 0xb;
      do {
        FUN_10ae4027c(auStack_140,auStack_a8);
        func_0x00010ae40318(auStack_a8,auStack_140);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      func_0x00010ae40444(auStack_140,auStack_a8,auStack_88);
      func_0x00010ae40318(auStack_88,auStack_140);
      FUN_10ae4027c(auStack_140,auStack_88);
      func_0x00010ae40318(auStack_a8,auStack_140);
      lVar37 = 0x17;
      do {
        FUN_10ae4027c(auStack_140,auStack_a8);
        func_0x00010ae40318(auStack_a8,auStack_140);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      func_0x00010ae40444(auStack_140,auStack_a8,auStack_88);
      func_0x00010ae40318(auStack_a8,auStack_140);
      FUN_10ae4027c(auStack_140,auStack_a8);
      func_0x00010ae40318(auStack_c8,auStack_140);
      lVar37 = 0x2f;
      do {
        FUN_10ae4027c(auStack_140,auStack_c8);
        func_0x00010ae40318(auStack_c8,auStack_140);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      func_0x00010ae40444(auStack_140,auStack_a8,auStack_c8);
      func_0x00010ae40318(auStack_a8,auStack_140);
      FUN_10ae4027c(auStack_140,auStack_a8);
      func_0x00010ae40318(auStack_c8,auStack_140);
      lVar37 = 0x17;
      do {
        FUN_10ae4027c(auStack_140,auStack_c8);
        func_0x00010ae40318(auStack_c8,auStack_140);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      func_0x00010ae40444(auStack_140,auStack_88,auStack_c8);
      func_0x00010ae40318(auStack_88,auStack_140);
      lVar37 = 6;
      do {
        FUN_10ae4027c(auStack_140,auStack_88);
        func_0x00010ae40318(auStack_88,auStack_140);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      func_0x00010ae40444(auStack_140,auStack_88,&uStack_68);
      func_0x00010ae40318(&uStack_68,auStack_140);
      FUN_10ae4027c(auStack_140,&uStack_68);
      func_0x00010ae40318(&uStack_68,auStack_140);
      func_0x00010ae40444(auStack_140,&uStack_68,&uStack_160);
      func_0x00010ae40318(&uStack_68,auStack_140);
      lVar37 = 0x61;
      do {
        FUN_10ae4027c(auStack_140,&uStack_68);
        func_0x00010ae40318(&uStack_68,auStack_140);
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
      puVar30 = auStack_a8;
      func_0x00010ae40444(auStack_140,&uStack_68);
      func_0x00010ae40318(auStack_180,auStack_140);
      FUN_10ae4027c(auStack_140,auStack_180);
      puVar27 = auStack_140;
      func_0x00010ae40318(&uStack_160);
      if (param_3 != 0) {
        uStack_68 = *param_2 & 0xffffffffffffff;
        uStack_60 = *(ulong *)((long)param_2 + 7) & 0xffffffffffffff;
        uStack_58 = *(ulong *)((long)param_2 + 0xe) & 0xffffffffffffff;
        uStack_50 = *(ulong *)((long)param_2 + 0x14) >> 8;
        puVar30 = &uStack_160;
        func_0x00010ae40444(auStack_140,&uStack_68);
        func_0x00010ae40318(auStack_88,auStack_140);
        puVar27 = auStack_88;
        func_0x00010ae4053c(param_3);
      }
      if (param_4 != (ulong *)0x0) {
        uStack_68 = param_2[9] & 0xffffffffffffff;
        uStack_60 = *(ulong *)((long)param_2 + 0x4f) & 0xffffffffffffff;
        uStack_58 = *(ulong *)((long)param_2 + 0x56) & 0xffffffffffffff;
        uStack_50 = *(ulong *)((long)param_2 + 0x5c) >> 8;
        func_0x00010ae40444(auStack_140,&uStack_160,auStack_180);
        func_0x00010ae40318(&uStack_160,auStack_140);
        puVar30 = &uStack_160;
        func_0x00010ae40444(auStack_140,&uStack_68);
        func_0x00010ae40318(auStack_88,auStack_140);
        puVar27 = auStack_88;
        func_0x00010ae4053c(param_4);
      }
      uVar25 = 1;
      goto LAB_10ae3f570;
    }
  }
  puVar26 = (ulong *)&UNK_10f6c759f;
  puVar27 = (undefined1 *)0x0;
  puVar30 = (ulong *)0x77;
  func_0x000107c2b29c(0xf);
  uVar25 = 0;
LAB_10ae3f570:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail(uVar25);
  puStack_1a0 = unaff_x20;
  puStack_198 = unaff_x19;
  puStack_190 = &stack0xfffffffffffffff0;
  pcStack_188 = FUN_10ae3f5a4;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1c8 = *puVar30 & 0xffffffffffffff;
  uStack_1c0 = *(ulong *)((long)puVar30 + 7) & 0xffffffffffffff;
  uStack_1b8 = *(ulong *)((long)puVar30 + 0xe) & 0xffffffffffffff;
  uStack_1b0 = *(ulong *)((long)puVar30 + 0x14) >> 8;
  uStack_1e8 = puVar30[9] & 0xffffffffffffff;
  uStack_1e0 = *(ulong *)((long)puVar30 + 0x4f) & 0xffffffffffffff;
  uStack_1d8 = *(ulong *)((long)puVar30 + 0x56) & 0xffffffffffffff;
  uStack_1d0 = *(ulong *)((long)puVar30 + 0x5c) >> 8;
  uStack_208 = puVar30[0x12] & 0xffffffffffffff;
  uStack_200 = *(ulong *)((long)puVar30 + 0x97) & 0xffffffffffffff;
  uStack_1f8 = *(ulong *)((long)puVar30 + 0x9e) & 0xffffffffffffff;
  uStack_1f0 = *(ulong *)((long)puVar30 + 0xa4) >> 8;
  uStack_228 = *puVar26 & 0xffffffffffffff;
  uStack_220 = *(ulong *)((long)puVar26 + 7) & 0xffffffffffffff;
  uStack_218 = *(ulong *)((long)puVar26 + 0xe) & 0xffffffffffffff;
  uStack_210 = *(ulong *)((long)puVar26 + 0x14) >> 8;
  uStack_248 = puVar26[9] & 0xffffffffffffff;
  uStack_240 = *(ulong *)((long)puVar26 + 0x4f) & 0xffffffffffffff;
  uStack_238 = *(ulong *)((long)puVar26 + 0x56) & 0xffffffffffffff;
  uStack_230 = *(ulong *)((long)puVar26 + 0x5c) >> 8;
  uStack_268 = puVar26[0x12] & 0xffffffffffffff;
  uStack_260 = *(ulong *)((long)puVar26 + 0x97) & 0xffffffffffffff;
  uStack_258 = *(ulong *)((long)puVar26 + 0x9e) & 0xffffffffffffff;
  uStack_250 = *(ulong *)((long)puVar26 + 0xa4) >> 8;
  puStack_278 = &uStack_268;
  puStack_280 = &uStack_248;
  puVar26 = &uStack_208;
  FUN_10ae405f0(&uStack_1c8,&uStack_1e8,puVar26,&uStack_1c8,&uStack_1e8,&uStack_208,0,&uStack_228);
  func_0x00010ae4053c(puVar27,&uStack_1c8);
  func_0x00010ae4053c(puVar27 + 0x48,&uStack_1e8);
  puVar30 = &uStack_208;
  func_0x00010ae4053c(puVar27 + 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_288 = 0x10ae3f738;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c8 = *puVar26 & 0xffffffffffffff;
  uStack_2c0 = *(ulong *)((long)puVar26 + 7) & 0xffffffffffffff;
  uStack_2b8 = *(ulong *)((long)puVar26 + 0xe) & 0xffffffffffffff;
  uStack_2b0 = *(ulong *)((long)puVar26 + 0x14) >> 8;
  uStack_2e8 = puVar26[9] & 0xffffffffffffff;
  uStack_2e0 = *(ulong *)((long)puVar26 + 0x4f) & 0xffffffffffffff;
  uStack_2d8 = *(ulong *)((long)puVar26 + 0x56) & 0xffffffffffffff;
  uStack_2d0 = *(ulong *)((long)puVar26 + 0x5c) >> 8;
  uStack_308 = puVar26[0x12] & 0xffffffffffffff;
  uStack_300 = *(ulong *)((long)puVar26 + 0x97) & 0xffffffffffffff;
  uStack_2f8 = *(ulong *)((long)puVar26 + 0x9e) & 0xffffffffffffff;
  uStack_2f0 = *(ulong *)((long)puVar26 + 0xa4) >> 8;
  puVar26 = &uStack_308;
  puVar32 = &uStack_2c8;
  puStack_2a0 = unaff_x20;
  puStack_298 = puVar27;
  ppuStack_290 = &puStack_190;
  FUN_10ae40cf8(&uStack_2c8,&uStack_2e8,puVar26,puVar32,&uStack_2e8,&uStack_308);
  func_0x00010ae4053c(puVar30,&uStack_2c8);
  func_0x00010ae4053c(puVar30 + 9,&uStack_2e8);
  puVar28 = &uStack_308;
  func_0x00010ae4053c(puVar30 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_10ae3f840;
  lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_ad0 = puVar28;
  pppuStack_320 = &ppuStack_290;
  FUN_10ae410cc(auStack_9e0,puVar26);
  lVar37 = 0;
  uStack_a38 = 0;
  uStack_a40 = 0;
  uStack_a28 = 0;
  uStack_a30 = 0;
  uStack_a18 = 0;
  uStack_a20 = 0;
  uStack_a08 = 0;
  uStack_a10 = 0;
  puStack_ac8 = &uStack_a80;
  uStack_9f8 = 0;
  uStack_a00 = 0;
  uStack_9e8 = 0;
  uStack_9f0 = 0;
  bVar42 = true;
  lVar41 = 0xdc;
  do {
    if (!bVar42) {
      puVar26 = &uStack_a00;
      FUN_10ae40cf8(&uStack_a40,&uStack_a20,puVar26,&uStack_a40,&uStack_a20,&uStack_a00);
    }
    if ((uint)((int)(lVar37 + 0xdcU) * -0x33333333) < 0x33333334) {
      if (lVar37 == 0) {
        uVar34 = 0;
      }
      else {
        uVar34 = (ulong)((*(byte *)((long)puVar32 + (lVar37 + 0xe0U >> 3)) >>
                          (ulong)((uint)(lVar37 + 0xe0U) & 7) & 1) << 5);
      }
      if (lVar37 + 0xdbU < 0xe0) {
        uVar36 = (ulong)(*(byte *)((long)puVar32 + (lVar37 + 0xdbU >> 3)) >>
                         (ulong)((int)lVar37 + 0xdbU & 7) & 1);
      }
      else {
        uVar36 = 0;
      }
      uVar36 = uVar34 | (*(byte *)((long)puVar32 + (lVar37 + 0xdfU >> 3)) >>
                         (ulong)((uint)(lVar37 + 0xdfU) & 7) & 1) << 4 |
               (ulong)((*(byte *)((long)puVar32 + (lVar37 + 0xdeU >> 3)) >>
                        (ulong)((uint)(lVar37 + 0xdeU) & 7) & 1) << 3 |
                      (*(byte *)((long)puVar32 + (lVar37 + 0xddU >> 3)) >>
                       (ulong)((uint)(lVar37 + 0xddU) & 7) & 1) << 2) |
               (ulong)((*(byte *)((long)puVar32 + (lVar37 + 0xdcU >> 3)) >>
                        (ulong)((int)lVar37 + 0xdcU & 7) & 1) << 1) | uVar36;
      uVar36 = (int)(uVar34 >> 5) - 1 & uVar36 | (uVar36 ^ 0x3f) & -(uVar34 >> 5);
      puVar26 = auStack_9e0;
      FUN_10ae4122c(uVar36 - (uVar36 >> 1),0x11,puVar26,&uStack_ac0);
      unaff_x28 = &uStack_aa0;
      FUN_10ae41290(auStack_a60,&uStack_aa0);
      bVar24 = (-(uVar34 >> 5) & 1) != 0;
      puVar33 = unaff_x28;
      if (bVar24) {
        puVar33 = auStack_a60;
      }
      uStack_a98 = puVar33[1];
      uStack_aa0 = *puVar33;
      puVar2 = &uStack_a90;
      if (bVar24) {
        puVar2 = auStack_a50;
      }
      uStack_a88 = puVar2[1];
      uStack_a90 = *puVar2;
      if (bVar42) {
        bVar42 = false;
        uStack_a18 = puVar33[1];
        uStack_a20 = *puVar33;
        uStack_a08 = puVar2[1];
        uStack_a10 = *puVar2;
        uStack_9f8 = uStack_a78;
        uStack_a00 = uStack_a80;
        uStack_9e8 = uStack_a68;
        uStack_9f0 = uStack_a70;
        uStack_a38 = uStack_ab8;
        uStack_a40 = uStack_ac0;
        uStack_a28 = uStack_aa8;
        uStack_a30 = uStack_ab0;
      }
      else {
        puStack_ad8 = puStack_ac8;
        puVar26 = &uStack_a00;
        puStack_ae0 = &uStack_aa0;
        FUN_10ae405f0(&uStack_a40,&uStack_a20,puVar26,&uStack_a40,&uStack_a20,&uStack_a00,0,
                      &uStack_ac0);
      }
    }
    puVar30 = puStack_ad0;
    lVar41 = lVar41 + -1;
    uVar34 = lVar37 + 0xdb;
    lVar37 = lVar37 + -1;
  } while (uVar34 < 0xdd);
  func_0x00010ae4053c(puStack_ad0,&uStack_a40);
  func_0x00010ae4053c(puVar30 + 9,&uStack_a20);
  puVar28 = &uStack_a00;
  func_0x00010ae4053c(puVar30 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_380) {
    ___stack_chk_fail();
    puStack_b40 = unaff_x28;
    uStack_b38 = 0x33333334;
    lStack_b30 = lVar41;
    uStack_b28 = 0xcccccccd;
    puStack_b20 = &uStack_ac0;
    lStack_b18 = lVar37;
    puStack_b10 = &uStack_a40;
    puStack_b08 = &uStack_aa0;
    puStack_b00 = puVar32;
    puStack_af8 = puVar30;
    ppppuStack_af0 = &pppuStack_320;
    uStack_ae8 = 0x10ae3fb00;
    bVar42 = false;
    lStack_b48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_ba8 = 0;
    uStack_bb0 = 0;
    uStack_b98 = 0;
    uStack_ba0 = 0;
    uStack_b88 = 0;
    uStack_b90 = 0;
    uStack_b78 = 0;
    uStack_b80 = 0;
    uStack_b68 = 0;
    uStack_b70 = 0;
    uStack_b58 = 0;
    uStack_b60 = 0;
    uVar34 = 0x6f;
    do {
      if (bVar42) {
        FUN_10ae40cf8(&uStack_bb0,&uStack_b90,&uStack_b70,&uStack_bb0,&uStack_b90,&uStack_b70);
      }
      FUN_10ae4122c((*(byte *)((long)puVar26 + (uVar34 + 0x70 >> 3)) >>
                     (ulong)((uint)(uVar34 + 0x70) & 7) & 1) << 3 |
                    (*(byte *)((long)puVar26 + (uVar34 + 0x38 >> 3)) >>
                     (ulong)((uint)(uVar34 + 0x38) & 7) & 1) << 2 |
                    (*(byte *)((long)puVar26 + (uVar34 >> 3)) >> (ulong)((uint)uVar34 & 7) & 1) << 1
                    | *(byte *)((long)puVar26 + (uVar34 - 0x38 >> 3)) >>
                      (ulong)((uint)(uVar34 - 0x38) & 7) & 1,0x10,&UNK_10e526e48,&uStack_c10);
      if (bVar42) {
        puStack_c20 = &uStack_bf0;
        puStack_c18 = &uStack_bd0;
        FUN_10ae405f0(&uStack_bb0,&uStack_b90,&uStack_b70,&uStack_bb0,&uStack_b90,&uStack_b70,1,
                      &uStack_c10);
      }
      else {
        uStack_b88 = uStack_be8;
        uStack_b90 = uStack_bf0;
        uStack_b78 = uStack_bd8;
        uStack_b80 = uStack_be0;
        uStack_b68 = uStack_bc8;
        uStack_b70 = uStack_bd0;
        uStack_b58 = uStack_bb8;
        uStack_b60 = uStack_bc0;
        uStack_ba8 = uStack_c08;
        uStack_bb0 = uStack_c10;
        uStack_b98 = uStack_bf8;
        uStack_ba0 = uStack_c00;
      }
      uVar1 = (uint)uVar34 - 0x54 & 7;
      FUN_10ae4122c((*(byte *)((long)puVar26 + (uVar34 + 0x54 >> 3)) >> (ulong)uVar1 & 1) << 3 |
                    (*(byte *)((long)puVar26 + (uVar34 + 0x1c >> 3)) >> (ulong)uVar1 & 1) << 2 |
                    (*(byte *)((long)puVar26 + (uVar34 - 0x1c >> 3)) >> (ulong)uVar1 & 1) << 1 |
                    *(byte *)((long)puVar26 + (uVar34 - 0x54 >> 3)) >> (ulong)uVar1 & 1,0x10,
                    &UNK_10e526848,&uStack_c10);
      bVar42 = true;
      puVar30 = &uStack_b70;
      puVar32 = &uStack_bb0;
      puVar33 = &uStack_b90;
      puStack_c20 = &uStack_bf0;
      puStack_c18 = &uStack_bd0;
      FUN_10ae405f0(&uStack_bb0,&uStack_b90);
      uVar36 = uVar34 - 0x55;
      uVar34 = uVar34 - 1;
    } while (uVar36 < 0x1c);
    func_0x00010ae4053c(puVar28,&uStack_bb0);
    func_0x00010ae4053c(puVar28 + 9,&uStack_b90);
    puVar29 = &uStack_b70;
    func_0x00010ae4053c(puVar28 + 0x12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b48) {
      return;
    }
    ___stack_chk_fail();
    uStack_c78 = 1;
    puStack_c50 = &UNK_10e526848;
    puStack_c48 = &UNK_10e526e48;
    uStack_c28 = 0x10ae3fd48;
    lStack_c90 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar31 = puVar30;
    puStack_13c0 = puVar29;
    puStack_c80 = unaff_x28;
    uStack_c70 = uVar34;
    puStack_c68 = &uStack_bd0;
    puStack_c60 = &uStack_bf0;
    puStack_c58 = &uStack_bb0;
    puStack_c40 = puVar26;
    puStack_c38 = puVar28;
    ppppuStack_c30 = &ppppuStack_af0;
    FUN_10ae410cc(auStack_12f0,puVar32);
    lVar37 = 0;
    uStack_1348 = 0;
    uStack_1350 = 0;
    uStack_1338 = 0;
    uStack_1340 = 0;
    uStack_1328 = 0;
    uStack_1330 = 0;
    uStack_1318 = 0;
    uStack_1320 = 0;
    uStack_1308 = 0;
    uStack_1310 = 0;
    uStack_12f8 = 0;
    uStack_1300 = 0;
    puStack_13b8 = &uStack_1370;
    bVar42 = true;
    do {
      if (!bVar42) {
        puVar31 = &uStack_1310;
        puVar32 = &uStack_1350;
        FUN_10ae40cf8(&uStack_1350,&uStack_1330,puVar31,puVar32,&uStack_1330,&uStack_1310);
      }
      uVar34 = lVar37 + 0xdc;
      iVar40 = (int)lVar37;
      if (uVar34 < 0x1c) {
        lVar41 = (ulong)((*(byte *)((long)puVar30 + (lVar37 + 0x1a0U >> 3)) >>
                          (ulong)((uint)(lVar37 + 0x1a0U) & 7) & 1) << 3 |
                         (*(byte *)((long)puVar30 + (lVar37 + 0x168U >> 3)) >>
                          (ulong)((uint)(lVar37 + 0x168U) & 7) & 1) << 2 |
                         (*(byte *)((long)puVar30 + (lVar37 + 0x130U >> 3)) >>
                          (ulong)((uint)(lVar37 + 0x130U) & 7) & 1) << 1 |
                        *(byte *)((long)puVar30 + (lVar37 + 0xf8U >> 3)) >>
                        (ulong)((uint)(lVar37 + 0xf8U) & 7) & 1) * 0x60;
        puStack_13d0 = (undefined8 *)(&UNK_10e526e68 + lVar41);
        puStack_13c8 = (ulong *)(&UNK_10e526e88 + lVar41);
        FUN_10ae405f0(&uStack_1350,&uStack_1330,&uStack_1310,&uStack_1350,&uStack_1330,&uStack_1310,
                      1,&UNK_10e526e48 + lVar41);
        uVar1 = iVar40 + 0xdcU & 7;
        lVar41 = (ulong)((*(byte *)((long)puVar30 + (lVar37 + 0x184U >> 3)) >> (ulong)uVar1 & 1) <<
                         3 | (*(byte *)((long)puVar30 + (lVar37 + 0x14cU >> 3)) >> (ulong)uVar1 & 1)
                             << 2 |
                         (*(byte *)((long)puVar30 + (lVar37 + 0x114U >> 3)) >> (ulong)uVar1 & 1) <<
                         1 | *(byte *)((long)puVar30 + (uVar34 >> 3)) >> (ulong)uVar1 & 1) * 0x60;
        puStack_13d0 = (undefined8 *)(&UNK_10e526868 + lVar41);
        puStack_13c8 = (ulong *)(&UNK_10e526888 + lVar41);
        puVar31 = &uStack_1310;
        puVar32 = &uStack_1350;
        FUN_10ae405f0(&uStack_1350,&uStack_1330,puVar31,puVar32,&uStack_1330,&uStack_1310,1);
      }
      if ((uint)((int)uVar34 * -0x33333333) < 0x33333334) {
        if (lVar37 == 0) {
          uVar36 = 0;
        }
        else {
          uVar36 = (ulong)((*(byte *)((long)puVar33 + (lVar37 + 0xe0U >> 3)) >>
                            (ulong)((uint)(lVar37 + 0xe0U) & 7) & 1) << 5);
        }
        if (lVar37 + 0xdbU < 0xe0) {
          uVar35 = (ulong)(*(byte *)((long)puVar33 + (lVar37 + 0xdbU >> 3)) >>
                           (ulong)(iVar40 + 0xdbU & 7) & 1);
        }
        else {
          uVar35 = 0;
        }
        uVar35 = uVar36 | (*(byte *)((long)puVar33 + (lVar37 + 0xdfU >> 3)) >>
                           (ulong)((uint)(lVar37 + 0xdfU) & 7) & 1) << 4 |
                 (ulong)((*(byte *)((long)puVar33 + (lVar37 + 0xdeU >> 3)) >>
                          (ulong)((uint)(lVar37 + 0xdeU) & 7) & 1) << 3 |
                        (*(byte *)((long)puVar33 + (lVar37 + 0xddU >> 3)) >>
                         (ulong)((uint)(lVar37 + 0xddU) & 7) & 1) << 2) |
                 (ulong)((*(byte *)((long)puVar33 + (uVar34 >> 3)) >> (ulong)(iVar40 + 0xdcU & 7) &
                         1) << 1) | uVar35;
        uVar34 = (int)(uVar36 >> 5) - 1 & uVar35 | (uVar35 ^ 0x3f) & -(uVar36 >> 5);
        lVar41 = uVar34 - (uVar34 >> 1);
        uStack_1388 = auStack_12f0[lVar41 * 0xc + 5];
        uStack_1390 = auStack_12f0[lVar41 * 0xc + 4];
        uStack_1378 = auStack_12f0[lVar41 * 0xc + 7];
        uStack_1380 = auStack_12f0[lVar41 * 0xc + 6];
        uStack_1368 = auStack_12f0[lVar41 * 0xc + 9];
        uStack_1370 = auStack_12f0[lVar41 * 0xc + 8];
        uStack_1358 = auStack_12f0[lVar41 * 0xc + 0xb];
        uStack_1360 = auStack_12f0[lVar41 * 0xc + 10];
        uStack_13a8 = auStack_12f0[lVar41 * 0xc + 1];
        uStack_13b0 = auStack_12f0[lVar41 * 0xc];
        uStack_1398 = auStack_12f0[lVar41 * 0xc + 3];
        uStack_13a0 = auStack_12f0[lVar41 * 0xc + 2];
        if ((-(uVar36 >> 5) & 1) != 0) {
          FUN_10ae41290(&uStack_1390,&uStack_1390);
        }
        if (bVar42) {
          bVar42 = false;
          uStack_1328 = uStack_1388;
          uStack_1330 = uStack_1390;
          uStack_1318 = uStack_1378;
          uStack_1320 = uStack_1380;
          uStack_1308 = uStack_1368;
          uStack_1310 = uStack_1370;
          uStack_12f8 = uStack_1358;
          uStack_1300 = uStack_1360;
          uStack_1348 = uStack_13a8;
          uStack_1350 = uStack_13b0;
          uStack_1338 = uStack_1398;
          uStack_1340 = uStack_13a0;
        }
        else {
          puStack_13c8 = puStack_13b8;
          puVar31 = &uStack_1310;
          puVar32 = &uStack_1350;
          puStack_13d0 = &uStack_1390;
          FUN_10ae405f0(&uStack_1350,&uStack_1330,puVar31,puVar32,&uStack_1330,&uStack_1310,0,
                        &uStack_13b0);
        }
      }
      puVar26 = puStack_13c0;
      uVar34 = lVar37 + 0xdb;
      lVar37 = lVar37 + -1;
    } while (uVar34 < 0xdd);
    func_0x00010ae4053c(puStack_13c0,&uStack_1350);
    func_0x00010ae4053c(puVar26 + 9,&uStack_1330);
    puVar30 = &uStack_1310;
    func_0x00010ae4053c(puVar26 + 0x12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c90) {
      ___stack_chk_fail();
      puStack_13e8 = puVar26;
      pcStack_13d8 = FUN_10ae40118;
      lStack_13f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_1418 = *puVar31 & 0xffffffffffffff;
      uStack_1410 = *(ulong *)((long)puVar31 + 7) & 0xffffffffffffff;
      uStack_1408 = *(ulong *)((long)puVar31 + 0xe) & 0xffffffffffffff;
      uStack_1400 = *(ulong *)((long)puVar31 + 0x14) >> 8;
      uStack_1438 = *puVar32 & 0xffffffffffffff;
      uStack_1430 = *(ulong *)((long)puVar32 + 7) & 0xffffffffffffff;
      uStack_1428 = *(ulong *)((long)puVar32 + 0xe) & 0xffffffffffffff;
      uStack_1420 = *(ulong *)((long)puVar32 + 0x14) >> 8;
      puVar28 = &uStack_1438;
      puStack_13f0 = puVar33;
      ppppuStack_13e0 = &ppppuStack_c30;
      func_0x00010ae40444(auStack_14b0,&uStack_1418);
      func_0x00010ae40318(&uStack_1418,auStack_14b0);
      puVar26 = &uStack_1418;
      func_0x00010ae4053c(puVar30);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_13f8) {
        return;
      }
      ___stack_chk_fail();
      uStack_14b8 = 0x10ae401e0;
      lStack_14d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_14f8 = *puVar28 & 0xffffffffffffff;
      uStack_14f0 = *(ulong *)((long)puVar28 + 7) & 0xffffffffffffff;
      uStack_14e8 = *(ulong *)((long)puVar28 + 0xe) & 0xffffffffffffff;
      uStack_14e0 = *(ulong *)((long)puVar28 + 0x14) >> 8;
      puStack_14d0 = puVar33;
      puStack_14c8 = puVar30;
      ppppuStack_14c0 = &ppppuStack_13e0;
      FUN_10ae4027c(auStack_1570,&uStack_14f8);
      func_0x00010ae40318(&uStack_14f8,auStack_1570);
      puVar30 = &uStack_14f8;
      func_0x00010ae4053c();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_14d8) {
        ___stack_chk_fail();
        uVar34 = *puVar30;
        uVar35 = puVar30[1];
        uVar38 = uVar35 * 2;
        uVar36 = puVar30[2];
        uVar3 = puVar30[3];
        uVar39 = uVar36 * 2;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar34;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar34;
        *puVar26 = uVar34 * uVar34;
        puVar26[1] = SUB168(auVar4 * auVar14,8);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar38;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar34;
        puVar26[2] = uVar38 * uVar34;
        puVar26[3] = SUB168(auVar5 * auVar15,8);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar39;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar34;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar35;
        puVar26[4] = uVar39 * uVar34 + uVar35 * uVar35;
        puVar26[5] = SUB168(auVar6 * auVar16,8) + SUB168(auVar7 * auVar17,8) +
                     (ulong)CARRY8(uVar39 * uVar34,uVar35 * uVar35);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar3;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar34 * 2;
        uVar34 = uVar3 * uVar34 * 2;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar39;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar35;
        puVar26[6] = uVar34 + uVar39 * uVar35;
        puVar26[7] = SUB168(auVar8 * auVar18,8) + SUB168(auVar9 * auVar19,8) +
                     (ulong)CARRY8(uVar34,uVar39 * uVar35);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar3;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar38;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar36;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar36;
        puVar26[8] = uVar3 * uVar38 + uVar36 * uVar36;
        puVar26[9] = SUB168(auVar10 * auVar20,8) + SUB168(auVar11 * auVar21,8) +
                     (ulong)CARRY8(uVar3 * uVar38,uVar36 * uVar36);
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar3;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        puVar26[10] = uVar3 * uVar39;
        puVar26[0xb] = SUB168(auVar12 * auVar22,8);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar3;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar3;
        puVar26[0xc] = uVar3 * uVar3;
        puVar26[0xd] = SUB168(auVar13 * auVar23,8);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10ae3f5a4; end: 10ae3f83f;  */

/* WARNING: Possible PIC construction at 0x00010ae40234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae40238) */
/* WARNING: Removing unreachable block (ram,0x00010ae40278) */
/* WARNING: Removing unreachable block (ram,0x00010ae40268) */

void FUN_10ae3f5a4(undefined8 param_1,long param_2,ulong *param_3,ulong *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  undefined8 *unaff_x28;
  undefined1 auStack_1330 [120];
  ulong uStack_12b8;
  ulong uStack_12b0;
  ulong uStack_12a8;
  ulong uStack_12a0;
  ulong uStack_1298;
  ulong uStack_1290;
  ulong uStack_1288;
  ulong uStack_1280;
  long lStack_1278;
  undefined8 *puStack_1270;
  ulong *puStack_1268;
  undefined8 ****ppppuStack_1260;
  code *pcStack_1258;
  undefined8 *puStack_1250;
  ulong *puStack_1248;
  ulong *puStack_1240;
  ulong *puStack_1238;
  ulong uStack_1230;
  ulong uStack_1228;
  ulong uStack_1220;
  ulong uStack_1218;
  ulong uStack_1210;
  ulong uStack_1208;
  ulong uStack_1200;
  ulong uStack_11f8;
  ulong uStack_11f0;
  ulong uStack_11e8;
  ulong uStack_11e0;
  ulong uStack_11d8;
  ulong uStack_11d0;
  ulong uStack_11c8;
  ulong uStack_11c0;
  ulong uStack_11b8;
  ulong uStack_11b0;
  ulong uStack_11a8;
  ulong uStack_11a0;
  ulong uStack_1198;
  ulong uStack_1190;
  ulong uStack_1188;
  ulong uStack_1180;
  ulong uStack_1178;
  ulong auStack_1170 [204];
  long lStack_b10;
  undefined8 *puStack_b00;
  undefined8 uStack_af8;
  ulong uStack_af0;
  ulong *puStack_ae8;
  undefined8 *puStack_ae0;
  ulong *puStack_ad8;
  undefined *puStack_ad0;
  undefined *puStack_ac8;
  ulong *puStack_ac0;
  ulong *puStack_ab8;
  undefined1 ****ppppuStack_ab0;
  undefined8 uStack_aa8;
  undefined8 *puStack_aa0;
  ulong *puStack_a98;
  ulong uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  ulong uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  ulong uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  ulong uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  long lStack_9c8;
  undefined8 *puStack_9c0;
  undefined8 uStack_9b8;
  long lStack_9b0;
  undefined8 uStack_9a8;
  undefined8 *puStack_9a0;
  long lStack_998;
  undefined8 *puStack_990;
  undefined8 *puStack_988;
  ulong *puStack_980;
  ulong *puStack_978;
  undefined1 ***pppuStack_970;
  undefined8 uStack_968;
  undefined8 *puStack_960;
  ulong *puStack_958;
  ulong *puStack_950;
  ulong *puStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  ulong uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 auStack_8e0 [2];
  undefined8 auStack_8d0 [2];
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  ulong uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  ulong auStack_860 [204];
  long lStack_200;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *param_3 & 0xffffffffffffff;
  uStack_40 = *(ulong *)((long)param_3 + 7) & 0xffffffffffffff;
  uStack_38 = *(ulong *)((long)param_3 + 0xe) & 0xffffffffffffff;
  uStack_30 = *(ulong *)((long)param_3 + 0x14) >> 8;
  uStack_68 = param_3[9] & 0xffffffffffffff;
  uStack_60 = *(ulong *)((long)param_3 + 0x4f) & 0xffffffffffffff;
  uStack_58 = *(ulong *)((long)param_3 + 0x56) & 0xffffffffffffff;
  uStack_50 = *(ulong *)((long)param_3 + 0x5c) >> 8;
  uStack_88 = param_3[0x12] & 0xffffffffffffff;
  uStack_80 = *(ulong *)((long)param_3 + 0x97) & 0xffffffffffffff;
  uStack_78 = *(ulong *)((long)param_3 + 0x9e) & 0xffffffffffffff;
  uStack_70 = *(ulong *)((long)param_3 + 0xa4) >> 8;
  uStack_a8 = *param_4 & 0xffffffffffffff;
  uStack_a0 = *(ulong *)((long)param_4 + 7) & 0xffffffffffffff;
  uStack_98 = *(ulong *)((long)param_4 + 0xe) & 0xffffffffffffff;
  uStack_90 = *(ulong *)((long)param_4 + 0x14) >> 8;
  uStack_c8 = param_4[9] & 0xffffffffffffff;
  uStack_c0 = *(ulong *)((long)param_4 + 0x4f) & 0xffffffffffffff;
  uStack_b8 = *(ulong *)((long)param_4 + 0x56) & 0xffffffffffffff;
  uStack_b0 = *(ulong *)((long)param_4 + 0x5c) >> 8;
  uStack_e8 = param_4[0x12] & 0xffffffffffffff;
  uStack_e0 = *(ulong *)((long)param_4 + 0x97) & 0xffffffffffffff;
  uStack_d8 = *(ulong *)((long)param_4 + 0x9e) & 0xffffffffffffff;
  uStack_d0 = *(ulong *)((long)param_4 + 0xa4) >> 8;
  puStack_f8 = &uStack_e8;
  puStack_100 = &uStack_c8;
  puVar7 = &uStack_88;
  FUN_10ae405f0(&uStack_48,&uStack_68,puVar7,&uStack_48,&uStack_68,&uStack_88,0,&uStack_a8);
  func_0x00010ae4053c(param_2,&uStack_48);
  func_0x00010ae4053c(param_2 + 0x48,&uStack_68);
  puVar4 = &uStack_88;
  func_0x00010ae4053c(param_2 + 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_108 = 0x10ae3f738;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = *puVar7 & 0xffffffffffffff;
  uStack_140 = *(ulong *)((long)puVar7 + 7) & 0xffffffffffffff;
  uStack_138 = *(ulong *)((long)puVar7 + 0xe) & 0xffffffffffffff;
  uStack_130 = *(ulong *)((long)puVar7 + 0x14) >> 8;
  uStack_168 = puVar7[9] & 0xffffffffffffff;
  uStack_160 = *(ulong *)((long)puVar7 + 0x4f) & 0xffffffffffffff;
  uStack_158 = *(ulong *)((long)puVar7 + 0x56) & 0xffffffffffffff;
  uStack_150 = *(ulong *)((long)puVar7 + 0x5c) >> 8;
  uStack_188 = puVar7[0x12] & 0xffffffffffffff;
  uStack_180 = *(ulong *)((long)puVar7 + 0x97) & 0xffffffffffffff;
  uStack_178 = *(ulong *)((long)puVar7 + 0x9e) & 0xffffffffffffff;
  uStack_170 = *(ulong *)((long)puVar7 + 0xa4) >> 8;
  puVar7 = &uStack_188;
  puVar9 = &uStack_148;
  puStack_110 = &stack0xfffffffffffffff0;
  FUN_10ae40cf8(&uStack_148,&uStack_168,puVar7,puVar9,&uStack_168,&uStack_188);
  func_0x00010ae4053c(puVar4,&uStack_148);
  func_0x00010ae4053c(puVar4 + 9,&uStack_168);
  puVar5 = &uStack_188;
  func_0x00010ae4053c(puVar4 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10ae3f840;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_950 = puVar5;
  ppuStack_1a0 = &puStack_110;
  FUN_10ae410cc(auStack_860,puVar7);
  lVar13 = 0;
  uStack_8b8 = 0;
  uStack_8c0 = 0;
  uStack_8a8 = 0;
  uStack_8b0 = 0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  uStack_890 = 0;
  puStack_948 = &uStack_900;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  bVar17 = true;
  lVar15 = 0xdc;
  do {
    if (!bVar17) {
      puVar7 = &uStack_880;
      FUN_10ae40cf8(&uStack_8c0,&uStack_8a0,puVar7,&uStack_8c0,&uStack_8a0,&uStack_880);
    }
    if ((uint)((int)(lVar13 + 0xdcU) * -0x33333333) < 0x33333334) {
      if (lVar13 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (ulong)((*(byte *)((long)puVar9 + (lVar13 + 0xe0U >> 3)) >>
                          (ulong)((uint)(lVar13 + 0xe0U) & 7) & 1) << 5);
      }
      if (lVar13 + 0xdbU < 0xe0) {
        uVar11 = (ulong)(*(byte *)((long)puVar9 + (lVar13 + 0xdbU >> 3)) >>
                         (ulong)((int)lVar13 + 0xdbU & 7) & 1);
      }
      else {
        uVar11 = 0;
      }
      uVar11 = uVar16 | (*(byte *)((long)puVar9 + (lVar13 + 0xdfU >> 3)) >>
                         (ulong)((uint)(lVar13 + 0xdfU) & 7) & 1) << 4 |
               (ulong)((*(byte *)((long)puVar9 + (lVar13 + 0xdeU >> 3)) >>
                        (ulong)((uint)(lVar13 + 0xdeU) & 7) & 1) << 3 |
                      (*(byte *)((long)puVar9 + (lVar13 + 0xddU >> 3)) >>
                       (ulong)((uint)(lVar13 + 0xddU) & 7) & 1) << 2) |
               (ulong)((*(byte *)((long)puVar9 + (lVar13 + 0xdcU >> 3)) >>
                        (ulong)((int)lVar13 + 0xdcU & 7) & 1) << 1) | uVar11;
      uVar11 = (int)(uVar16 >> 5) - 1 & uVar11 | (uVar11 ^ 0x3f) & -(uVar16 >> 5);
      puVar7 = auStack_860;
      FUN_10ae4122c(uVar11 - (uVar11 >> 1),0x11,puVar7,&uStack_940);
      unaff_x28 = &uStack_920;
      FUN_10ae41290(auStack_8e0,&uStack_920);
      bVar3 = (-(uVar16 >> 5) & 1) != 0;
      puVar10 = unaff_x28;
      if (bVar3) {
        puVar10 = auStack_8e0;
      }
      uStack_918 = puVar10[1];
      uStack_920 = *puVar10;
      puVar2 = &uStack_910;
      if (bVar3) {
        puVar2 = auStack_8d0;
      }
      uStack_908 = puVar2[1];
      uStack_910 = *puVar2;
      if (bVar17) {
        bVar17 = false;
        uStack_898 = puVar10[1];
        uStack_8a0 = *puVar10;
        uStack_888 = puVar2[1];
        uStack_890 = *puVar2;
        uStack_878 = uStack_8f8;
        uStack_880 = uStack_900;
        uStack_868 = uStack_8e8;
        uStack_870 = uStack_8f0;
        uStack_8b8 = uStack_938;
        uStack_8c0 = uStack_940;
        uStack_8a8 = uStack_928;
        uStack_8b0 = uStack_930;
      }
      else {
        puStack_958 = puStack_948;
        puVar7 = &uStack_880;
        puStack_960 = &uStack_920;
        FUN_10ae405f0(&uStack_8c0,&uStack_8a0,puVar7,&uStack_8c0,&uStack_8a0,&uStack_880,0,
                      &uStack_940);
      }
    }
    puVar4 = puStack_950;
    lVar15 = lVar15 + -1;
    uVar16 = lVar13 + 0xdb;
    lVar13 = lVar13 + -1;
  } while (uVar16 < 0xdd);
  func_0x00010ae4053c(puStack_950,&uStack_8c0);
  func_0x00010ae4053c(puVar4 + 9,&uStack_8a0);
  puVar5 = &uStack_880;
  func_0x00010ae4053c(puVar4 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  puStack_9c0 = unaff_x28;
  uStack_9b8 = 0x33333334;
  lStack_9b0 = lVar15;
  uStack_9a8 = 0xcccccccd;
  puStack_9a0 = &uStack_940;
  lStack_998 = lVar13;
  puStack_990 = &uStack_8c0;
  puStack_988 = &uStack_920;
  puStack_980 = puVar9;
  puStack_978 = puVar4;
  pppuStack_970 = &ppuStack_1a0;
  uStack_968 = 0x10ae3fb00;
  bVar17 = false;
  lStack_9c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a28 = 0;
  uStack_a30 = 0;
  uStack_a18 = 0;
  uStack_a20 = 0;
  uStack_a08 = 0;
  uStack_a10 = 0;
  uStack_9f8 = 0;
  uStack_a00 = 0;
  uStack_9e8 = 0;
  uStack_9f0 = 0;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  uVar16 = 0x6f;
  do {
    if (bVar17) {
      FUN_10ae40cf8(&uStack_a30,&uStack_a10,&uStack_9f0,&uStack_a30,&uStack_a10,&uStack_9f0);
    }
    FUN_10ae4122c((*(byte *)((long)puVar7 + (uVar16 + 0x70 >> 3)) >>
                   (ulong)((uint)(uVar16 + 0x70) & 7) & 1) << 3 |
                  (*(byte *)((long)puVar7 + (uVar16 + 0x38 >> 3)) >>
                   (ulong)((uint)(uVar16 + 0x38) & 7) & 1) << 2 |
                  (*(byte *)((long)puVar7 + (uVar16 >> 3)) >> (ulong)((uint)uVar16 & 7) & 1) << 1 |
                  *(byte *)((long)puVar7 + (uVar16 - 0x38 >> 3)) >>
                  (ulong)((uint)(uVar16 - 0x38) & 7) & 1,0x10,&UNK_10e526e48,&uStack_a90);
    if (bVar17) {
      puStack_aa0 = &uStack_a70;
      puStack_a98 = &uStack_a50;
      FUN_10ae405f0(&uStack_a30,&uStack_a10,&uStack_9f0,&uStack_a30,&uStack_a10,&uStack_9f0,1,
                    &uStack_a90);
    }
    else {
      uStack_a08 = uStack_a68;
      uStack_a10 = uStack_a70;
      uStack_9f8 = uStack_a58;
      uStack_a00 = uStack_a60;
      uStack_9e8 = uStack_a48;
      uStack_9f0 = uStack_a50;
      uStack_9d8 = uStack_a38;
      uStack_9e0 = uStack_a40;
      uStack_a28 = uStack_a88;
      uStack_a30 = uStack_a90;
      uStack_a18 = uStack_a78;
      uStack_a20 = uStack_a80;
    }
    uVar1 = (uint)uVar16 - 0x54 & 7;
    FUN_10ae4122c((*(byte *)((long)puVar7 + (uVar16 + 0x54 >> 3)) >> (ulong)uVar1 & 1) << 3 |
                  (*(byte *)((long)puVar7 + (uVar16 + 0x1c >> 3)) >> (ulong)uVar1 & 1) << 2 |
                  (*(byte *)((long)puVar7 + (uVar16 - 0x1c >> 3)) >> (ulong)uVar1 & 1) << 1 |
                  *(byte *)((long)puVar7 + (uVar16 - 0x54 >> 3)) >> (ulong)uVar1 & 1,0x10,
                  &UNK_10e526848,&uStack_a90);
    bVar17 = true;
    puVar4 = &uStack_9f0;
    puVar9 = &uStack_a30;
    puVar10 = &uStack_a10;
    puStack_aa0 = &uStack_a70;
    puStack_a98 = &uStack_a50;
    FUN_10ae405f0(&uStack_a30,&uStack_a10);
    uVar11 = uVar16 - 0x55;
    uVar16 = uVar16 - 1;
  } while (uVar11 < 0x1c);
  func_0x00010ae4053c(puVar5,&uStack_a30);
  func_0x00010ae4053c(puVar5 + 9,&uStack_a10);
  puVar6 = &uStack_9f0;
  func_0x00010ae4053c(puVar5 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9c8) {
    return;
  }
  ___stack_chk_fail();
  uStack_af8 = 1;
  puStack_ad0 = &UNK_10e526848;
  puStack_ac8 = &UNK_10e526e48;
  uStack_aa8 = 0x10ae3fd48;
  lStack_b10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar4;
  puStack_1240 = puVar6;
  puStack_b00 = unaff_x28;
  uStack_af0 = uVar16;
  puStack_ae8 = &uStack_a50;
  puStack_ae0 = &uStack_a70;
  puStack_ad8 = &uStack_a30;
  puStack_ac0 = puVar7;
  puStack_ab8 = puVar5;
  ppppuStack_ab0 = &pppuStack_970;
  FUN_10ae410cc(auStack_1170,puVar9);
  lVar13 = 0;
  uStack_11c8 = 0;
  uStack_11d0 = 0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  uStack_1188 = 0;
  uStack_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  puStack_1238 = &uStack_11f0;
  bVar17 = true;
  do {
    if (!bVar17) {
      puVar8 = &uStack_1190;
      puVar9 = &uStack_11d0;
      FUN_10ae40cf8(&uStack_11d0,&uStack_11b0,puVar8,puVar9,&uStack_11b0,&uStack_1190);
    }
    uVar16 = lVar13 + 0xdc;
    iVar14 = (int)lVar13;
    if (uVar16 < 0x1c) {
      lVar15 = (ulong)((*(byte *)((long)puVar4 + (lVar13 + 0x1a0U >> 3)) >>
                        (ulong)((uint)(lVar13 + 0x1a0U) & 7) & 1) << 3 |
                       (*(byte *)((long)puVar4 + (lVar13 + 0x168U >> 3)) >>
                        (ulong)((uint)(lVar13 + 0x168U) & 7) & 1) << 2 |
                       (*(byte *)((long)puVar4 + (lVar13 + 0x130U >> 3)) >>
                        (ulong)((uint)(lVar13 + 0x130U) & 7) & 1) << 1 |
                      *(byte *)((long)puVar4 + (lVar13 + 0xf8U >> 3)) >>
                      (ulong)((uint)(lVar13 + 0xf8U) & 7) & 1) * 0x60;
      puStack_1250 = (undefined8 *)(&UNK_10e526e68 + lVar15);
      puStack_1248 = (ulong *)(&UNK_10e526e88 + lVar15);
      FUN_10ae405f0(&uStack_11d0,&uStack_11b0,&uStack_1190,&uStack_11d0,&uStack_11b0,&uStack_1190,1,
                    &UNK_10e526e48 + lVar15);
      uVar1 = iVar14 + 0xdcU & 7;
      lVar15 = (ulong)((*(byte *)((long)puVar4 + (lVar13 + 0x184U >> 3)) >> (ulong)uVar1 & 1) << 3 |
                       (*(byte *)((long)puVar4 + (lVar13 + 0x14cU >> 3)) >> (ulong)uVar1 & 1) << 2 |
                       (*(byte *)((long)puVar4 + (lVar13 + 0x114U >> 3)) >> (ulong)uVar1 & 1) << 1 |
                      *(byte *)((long)puVar4 + (uVar16 >> 3)) >> (ulong)uVar1 & 1) * 0x60;
      puStack_1250 = (undefined8 *)(&UNK_10e526868 + lVar15);
      puStack_1248 = (ulong *)(&UNK_10e526888 + lVar15);
      puVar8 = &uStack_1190;
      puVar9 = &uStack_11d0;
      FUN_10ae405f0(&uStack_11d0,&uStack_11b0,puVar8,puVar9,&uStack_11b0,&uStack_1190,1);
    }
    if ((uint)((int)uVar16 * -0x33333333) < 0x33333334) {
      if (lVar13 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (ulong)((*(byte *)((long)puVar10 + (lVar13 + 0xe0U >> 3)) >>
                          (ulong)((uint)(lVar13 + 0xe0U) & 7) & 1) << 5);
      }
      if (lVar13 + 0xdbU < 0xe0) {
        uVar12 = (ulong)(*(byte *)((long)puVar10 + (lVar13 + 0xdbU >> 3)) >>
                         (ulong)(iVar14 + 0xdbU & 7) & 1);
      }
      else {
        uVar12 = 0;
      }
      uVar12 = uVar11 | (*(byte *)((long)puVar10 + (lVar13 + 0xdfU >> 3)) >>
                         (ulong)((uint)(lVar13 + 0xdfU) & 7) & 1) << 4 |
               (ulong)((*(byte *)((long)puVar10 + (lVar13 + 0xdeU >> 3)) >>
                        (ulong)((uint)(lVar13 + 0xdeU) & 7) & 1) << 3 |
                      (*(byte *)((long)puVar10 + (lVar13 + 0xddU >> 3)) >>
                       (ulong)((uint)(lVar13 + 0xddU) & 7) & 1) << 2) |
               (ulong)((*(byte *)((long)puVar10 + (uVar16 >> 3)) >> (ulong)(iVar14 + 0xdcU & 7) & 1)
                      << 1) | uVar12;
      uVar16 = (int)(uVar11 >> 5) - 1 & uVar12 | (uVar12 ^ 0x3f) & -(uVar11 >> 5);
      lVar15 = uVar16 - (uVar16 >> 1);
      uStack_1208 = auStack_1170[lVar15 * 0xc + 5];
      uStack_1210 = auStack_1170[lVar15 * 0xc + 4];
      uStack_11f8 = auStack_1170[lVar15 * 0xc + 7];
      uStack_1200 = auStack_1170[lVar15 * 0xc + 6];
      uStack_11e8 = auStack_1170[lVar15 * 0xc + 9];
      uStack_11f0 = auStack_1170[lVar15 * 0xc + 8];
      uStack_11d8 = auStack_1170[lVar15 * 0xc + 0xb];
      uStack_11e0 = auStack_1170[lVar15 * 0xc + 10];
      uStack_1228 = auStack_1170[lVar15 * 0xc + 1];
      uStack_1230 = auStack_1170[lVar15 * 0xc];
      uStack_1218 = auStack_1170[lVar15 * 0xc + 3];
      uStack_1220 = auStack_1170[lVar15 * 0xc + 2];
      if ((-(uVar11 >> 5) & 1) != 0) {
        FUN_10ae41290(&uStack_1210,&uStack_1210);
      }
      if (bVar17) {
        bVar17 = false;
        uStack_11a8 = uStack_1208;
        uStack_11b0 = uStack_1210;
        uStack_1198 = uStack_11f8;
        uStack_11a0 = uStack_1200;
        uStack_1188 = uStack_11e8;
        uStack_1190 = uStack_11f0;
        uStack_1178 = uStack_11d8;
        uStack_1180 = uStack_11e0;
        uStack_11c8 = uStack_1228;
        uStack_11d0 = uStack_1230;
        uStack_11b8 = uStack_1218;
        uStack_11c0 = uStack_1220;
      }
      else {
        puStack_1248 = puStack_1238;
        puVar8 = &uStack_1190;
        puVar9 = &uStack_11d0;
        puStack_1250 = &uStack_1210;
        FUN_10ae405f0(&uStack_11d0,&uStack_11b0,puVar8,puVar9,&uStack_11b0,&uStack_1190,0,
                      &uStack_1230);
      }
    }
    puVar7 = puStack_1240;
    uVar16 = lVar13 + 0xdb;
    lVar13 = lVar13 + -1;
  } while (uVar16 < 0xdd);
  func_0x00010ae4053c(puStack_1240,&uStack_11d0);
  func_0x00010ae4053c(puVar7 + 9,&uStack_11b0);
  puVar4 = &uStack_1190;
  func_0x00010ae4053c(puVar7 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b10) {
    ___stack_chk_fail();
    puStack_1268 = puVar7;
    pcStack_1258 = FUN_10ae40118;
    lStack_1278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1298 = *puVar8 & 0xffffffffffffff;
    uStack_1290 = *(ulong *)((long)puVar8 + 7) & 0xffffffffffffff;
    uStack_1288 = *(ulong *)((long)puVar8 + 0xe) & 0xffffffffffffff;
    uStack_1280 = *(ulong *)((long)puVar8 + 0x14) >> 8;
    uStack_12b8 = *puVar9 & 0xffffffffffffff;
    uStack_12b0 = *(ulong *)((long)puVar9 + 7) & 0xffffffffffffff;
    uStack_12a8 = *(ulong *)((long)puVar9 + 0xe) & 0xffffffffffffff;
    uStack_12a0 = *(ulong *)((long)puVar9 + 0x14) >> 8;
    puStack_1270 = puVar10;
    ppppuStack_1260 = &ppppuStack_ab0;
    func_0x00010ae40444(auStack_1330,&uStack_1298);
    func_0x00010ae40318(&uStack_1298,auStack_1330);
    func_0x00010ae4053c(puVar4,&uStack_1298);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1278) {
      ___stack_chk_fail();
      return;
    }
    return;
  }
  return;
}



/* Entry: 10ae3f840; end: 10ae40117;  */

/* WARNING: Possible PIC construction at 0x00010ae40234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae40238) */
/* WARNING: Removing unreachable block (ram,0x00010ae40278) */
/* WARNING: Removing unreachable block (ram,0x00010ae40268) */

void FUN_10ae3f840(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  bool bVar16;
  undefined8 *unaff_x28;
  undefined1 auStack_11a0 [120];
  ulong uStack_1128;
  ulong uStack_1120;
  ulong uStack_1118;
  ulong uStack_1110;
  ulong uStack_1108;
  ulong uStack_1100;
  ulong uStack_10f8;
  ulong uStack_10f0;
  long lStack_10e8;
  undefined8 *puStack_10e0;
  ulong *puStack_10d8;
  undefined1 ***pppuStack_10d0;
  code *pcStack_10c8;
  undefined8 *puStack_10c0;
  ulong *puStack_10b8;
  ulong *puStack_10b0;
  ulong *puStack_10a8;
  ulong uStack_10a0;
  ulong uStack_1098;
  ulong uStack_1090;
  ulong uStack_1088;
  ulong uStack_1080;
  ulong uStack_1078;
  ulong uStack_1070;
  ulong uStack_1068;
  ulong uStack_1060;
  ulong uStack_1058;
  ulong uStack_1050;
  ulong uStack_1048;
  ulong uStack_1040;
  ulong uStack_1038;
  ulong uStack_1030;
  ulong uStack_1028;
  ulong uStack_1020;
  ulong uStack_1018;
  ulong uStack_1010;
  ulong uStack_1008;
  ulong uStack_1000;
  ulong uStack_ff8;
  ulong uStack_ff0;
  ulong uStack_fe8;
  ulong auStack_fe0 [204];
  long lStack_980;
  undefined8 *puStack_970;
  undefined8 uStack_968;
  ulong uStack_960;
  ulong *puStack_958;
  undefined8 *puStack_950;
  ulong *puStack_948;
  undefined *puStack_940;
  undefined *puStack_938;
  undefined8 *puStack_930;
  undefined8 *puStack_928;
  undefined1 **ppuStack_920;
  undefined8 uStack_918;
  undefined8 *puStack_910;
  ulong *puStack_908;
  ulong uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  ulong uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  ulong uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  ulong uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  long lStack_838;
  undefined8 *puStack_830;
  undefined8 uStack_828;
  long lStack_820;
  undefined8 uStack_818;
  undefined8 *puStack_810;
  long lStack_808;
  undefined8 *puStack_800;
  undefined8 *puStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  undefined1 *puStack_7e0;
  undefined8 uStack_7d8;
  undefined8 *puStack_7d0;
  undefined8 *puStack_7c8;
  long lStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 auStack_750 [2];
  undefined8 auStack_740 [2];
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 auStack_6d0 [204];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_7c0 = param_2;
  FUN_10ae410cc(auStack_6d0,param_3);
  lVar12 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  puStack_7b8 = &uStack_770;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  bVar16 = true;
  lVar14 = 0xdc;
  do {
    if (!bVar16) {
      param_3 = &uStack_6f0;
      FUN_10ae40cf8(&uStack_730,&uStack_710,param_3,&uStack_730,&uStack_710,&uStack_6f0);
    }
    if ((uint)((int)(lVar12 + 0xdcU) * -0x33333333) < 0x33333334) {
      if (lVar12 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = (ulong)((*(byte *)(param_4 + (lVar12 + 0xe0U >> 3)) >>
                          (ulong)((uint)(lVar12 + 0xe0U) & 7) & 1) << 5);
      }
      if (lVar12 + 0xdbU < 0xe0) {
        uVar10 = (ulong)(*(byte *)(param_4 + (lVar12 + 0xdbU >> 3)) >>
                         (ulong)((int)lVar12 + 0xdbU & 7) & 1);
      }
      else {
        uVar10 = 0;
      }
      uVar10 = uVar15 | (*(byte *)(param_4 + (lVar12 + 0xdfU >> 3)) >>
                         (ulong)((uint)(lVar12 + 0xdfU) & 7) & 1) << 4 |
               (ulong)((*(byte *)(param_4 + (lVar12 + 0xdeU >> 3)) >>
                        (ulong)((uint)(lVar12 + 0xdeU) & 7) & 1) << 3 |
                      (*(byte *)(param_4 + (lVar12 + 0xddU >> 3)) >>
                       (ulong)((uint)(lVar12 + 0xddU) & 7) & 1) << 2) |
               (ulong)((*(byte *)(param_4 + (lVar12 + 0xdcU >> 3)) >>
                        (ulong)((int)lVar12 + 0xdcU & 7) & 1) << 1) | uVar10;
      uVar10 = (int)(uVar15 >> 5) - 1 & uVar10 | (uVar10 ^ 0x3f) & -(uVar15 >> 5);
      param_3 = auStack_6d0;
      FUN_10ae4122c(uVar10 - (uVar10 >> 1),0x11,param_3,&uStack_7b0);
      unaff_x28 = &uStack_790;
      FUN_10ae41290(auStack_750,&uStack_790);
      bVar3 = (-(uVar15 >> 5) & 1) != 0;
      puVar4 = unaff_x28;
      if (bVar3) {
        puVar4 = auStack_750;
      }
      uStack_788 = puVar4[1];
      uStack_790 = *puVar4;
      puVar9 = &uStack_780;
      if (bVar3) {
        puVar9 = auStack_740;
      }
      uStack_778 = puVar9[1];
      uStack_780 = *puVar9;
      if (bVar16) {
        bVar16 = false;
        uStack_6e8 = uStack_768;
        uStack_6f0 = uStack_770;
        uStack_6d8 = uStack_758;
        uStack_6e0 = uStack_760;
        uStack_728 = uStack_7a8;
        uStack_730 = uStack_7b0;
        uStack_718 = uStack_798;
        uStack_720 = uStack_7a0;
        uStack_710 = *puVar4;
        uStack_708 = puVar4[1];
        uStack_700 = uStack_780;
        uStack_6f8 = uStack_778;
      }
      else {
        puStack_7c8 = puStack_7b8;
        param_3 = &uStack_6f0;
        puStack_7d0 = &uStack_790;
        FUN_10ae405f0(&uStack_730,&uStack_710,param_3,&uStack_730,&uStack_710,&uStack_6f0,0,
                      &uStack_7b0);
      }
    }
    lVar2 = lStack_7c0;
    lVar14 = lVar14 + -1;
    uVar15 = lVar12 + 0xdb;
    lVar12 = lVar12 + -1;
  } while (uVar15 < 0xdd);
  func_0x00010ae4053c(lStack_7c0,&uStack_730);
  func_0x00010ae4053c(lVar2 + 0x48,&uStack_710);
  puVar4 = &uStack_6f0;
  func_0x00010ae4053c(lVar2 + 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_830 = unaff_x28;
  uStack_828 = 0x33333334;
  lStack_820 = lVar14;
  uStack_818 = 0xcccccccd;
  puStack_810 = &uStack_7b0;
  lStack_808 = lVar12;
  puStack_800 = &uStack_730;
  puStack_7f8 = &uStack_790;
  lStack_7f0 = param_4;
  lStack_7e8 = lVar2;
  puStack_7e0 = &stack0xfffffffffffffff0;
  uStack_7d8 = 0x10ae3fb00;
  bVar16 = false;
  lStack_838 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  uVar15 = 0x6f;
  do {
    if (bVar16) {
      FUN_10ae40cf8(&uStack_8a0,&uStack_880,&uStack_860,&uStack_8a0,&uStack_880,&uStack_860);
    }
    FUN_10ae4122c((*(byte *)((long)param_3 + (uVar15 + 0x70 >> 3)) >>
                   (ulong)((uint)(uVar15 + 0x70) & 7) & 1) << 3 |
                  (*(byte *)((long)param_3 + (uVar15 + 0x38 >> 3)) >>
                   (ulong)((uint)(uVar15 + 0x38) & 7) & 1) << 2 |
                  (*(byte *)((long)param_3 + (uVar15 >> 3)) >> (ulong)((uint)uVar15 & 7) & 1) << 1 |
                  *(byte *)((long)param_3 + (uVar15 - 0x38 >> 3)) >>
                  (ulong)((uint)(uVar15 - 0x38) & 7) & 1,0x10,&UNK_10e526e48,&uStack_900);
    if (bVar16) {
      puStack_910 = &uStack_8e0;
      puStack_908 = &uStack_8c0;
      FUN_10ae405f0(&uStack_8a0,&uStack_880,&uStack_860,&uStack_8a0,&uStack_880,&uStack_860,1,
                    &uStack_900);
    }
    else {
      uStack_878 = uStack_8d8;
      uStack_880 = uStack_8e0;
      uStack_868 = uStack_8c8;
      uStack_870 = uStack_8d0;
      uStack_858 = uStack_8b8;
      uStack_860 = uStack_8c0;
      uStack_848 = uStack_8a8;
      uStack_850 = uStack_8b0;
      uStack_898 = uStack_8f8;
      uStack_8a0 = uStack_900;
      uStack_888 = uStack_8e8;
      uStack_890 = uStack_8f0;
    }
    uVar1 = (uint)uVar15 - 0x54 & 7;
    FUN_10ae4122c((*(byte *)((long)param_3 + (uVar15 + 0x54 >> 3)) >> (ulong)uVar1 & 1) << 3 |
                  (*(byte *)((long)param_3 + (uVar15 + 0x1c >> 3)) >> (ulong)uVar1 & 1) << 2 |
                  (*(byte *)((long)param_3 + (uVar15 - 0x1c >> 3)) >> (ulong)uVar1 & 1) << 1 |
                  *(byte *)((long)param_3 + (uVar15 - 0x54 >> 3)) >> (ulong)uVar1 & 1,0x10,
                  &UNK_10e526848,&uStack_900);
    bVar16 = true;
    puVar6 = &uStack_860;
    puVar8 = &uStack_8a0;
    puVar9 = &uStack_880;
    puStack_910 = &uStack_8e0;
    puStack_908 = &uStack_8c0;
    FUN_10ae405f0(&uStack_8a0,&uStack_880);
    uVar10 = uVar15 - 0x55;
    uVar15 = uVar15 - 1;
  } while (uVar10 < 0x1c);
  func_0x00010ae4053c(puVar4,&uStack_8a0);
  func_0x00010ae4053c(puVar4 + 9,&uStack_880);
  puVar5 = &uStack_860;
  func_0x00010ae4053c(puVar4 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_838) {
    return;
  }
  ___stack_chk_fail();
  uStack_968 = 1;
  puStack_940 = &UNK_10e526848;
  puStack_938 = &UNK_10e526e48;
  uStack_918 = 0x10ae3fd48;
  lStack_980 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puStack_10b0 = puVar5;
  puStack_970 = unaff_x28;
  uStack_960 = uVar15;
  puStack_958 = &uStack_8c0;
  puStack_950 = &uStack_8e0;
  puStack_948 = &uStack_8a0;
  puStack_930 = param_3;
  puStack_928 = puVar4;
  ppuStack_920 = &puStack_7e0;
  FUN_10ae410cc(auStack_fe0,puVar8);
  lVar12 = 0;
  uStack_1038 = 0;
  uStack_1040 = 0;
  uStack_1028 = 0;
  uStack_1030 = 0;
  uStack_1018 = 0;
  uStack_1020 = 0;
  uStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  uStack_1000 = 0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  puStack_10a8 = &uStack_1060;
  bVar16 = true;
  do {
    if (!bVar16) {
      puVar7 = &uStack_1000;
      puVar8 = &uStack_1040;
      FUN_10ae40cf8(&uStack_1040,&uStack_1020,puVar7,puVar8,&uStack_1020,&uStack_1000);
    }
    uVar15 = lVar12 + 0xdc;
    iVar13 = (int)lVar12;
    if (uVar15 < 0x1c) {
      lVar14 = (ulong)((*(byte *)((long)puVar6 + (lVar12 + 0x1a0U >> 3)) >>
                        (ulong)((uint)(lVar12 + 0x1a0U) & 7) & 1) << 3 |
                       (*(byte *)((long)puVar6 + (lVar12 + 0x168U >> 3)) >>
                        (ulong)((uint)(lVar12 + 0x168U) & 7) & 1) << 2 |
                       (*(byte *)((long)puVar6 + (lVar12 + 0x130U >> 3)) >>
                        (ulong)((uint)(lVar12 + 0x130U) & 7) & 1) << 1 |
                      *(byte *)((long)puVar6 + (lVar12 + 0xf8U >> 3)) >>
                      (ulong)((uint)(lVar12 + 0xf8U) & 7) & 1) * 0x60;
      puStack_10c0 = (undefined8 *)(&UNK_10e526e68 + lVar14);
      puStack_10b8 = (ulong *)(&UNK_10e526e88 + lVar14);
      FUN_10ae405f0(&uStack_1040,&uStack_1020,&uStack_1000,&uStack_1040,&uStack_1020,&uStack_1000,1,
                    &UNK_10e526e48 + lVar14);
      uVar1 = iVar13 + 0xdcU & 7;
      lVar14 = (ulong)((*(byte *)((long)puVar6 + (lVar12 + 0x184U >> 3)) >> (ulong)uVar1 & 1) << 3 |
                       (*(byte *)((long)puVar6 + (lVar12 + 0x14cU >> 3)) >> (ulong)uVar1 & 1) << 2 |
                       (*(byte *)((long)puVar6 + (lVar12 + 0x114U >> 3)) >> (ulong)uVar1 & 1) << 1 |
                      *(byte *)((long)puVar6 + (uVar15 >> 3)) >> (ulong)uVar1 & 1) * 0x60;
      puStack_10c0 = (undefined8 *)(&UNK_10e526868 + lVar14);
      puStack_10b8 = (ulong *)(&UNK_10e526888 + lVar14);
      puVar7 = &uStack_1000;
      puVar8 = &uStack_1040;
      FUN_10ae405f0(&uStack_1040,&uStack_1020,puVar7,puVar8,&uStack_1020,&uStack_1000,1);
    }
    if ((uint)((int)uVar15 * -0x33333333) < 0x33333334) {
      if (lVar12 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)((*(byte *)((long)puVar9 + (lVar12 + 0xe0U >> 3)) >>
                          (ulong)((uint)(lVar12 + 0xe0U) & 7) & 1) << 5);
      }
      if (lVar12 + 0xdbU < 0xe0) {
        uVar11 = (ulong)(*(byte *)((long)puVar9 + (lVar12 + 0xdbU >> 3)) >>
                         (ulong)(iVar13 + 0xdbU & 7) & 1);
      }
      else {
        uVar11 = 0;
      }
      uVar11 = uVar10 | (*(byte *)((long)puVar9 + (lVar12 + 0xdfU >> 3)) >>
                         (ulong)((uint)(lVar12 + 0xdfU) & 7) & 1) << 4 |
               (ulong)((*(byte *)((long)puVar9 + (lVar12 + 0xdeU >> 3)) >>
                        (ulong)((uint)(lVar12 + 0xdeU) & 7) & 1) << 3 |
                      (*(byte *)((long)puVar9 + (lVar12 + 0xddU >> 3)) >>
                       (ulong)((uint)(lVar12 + 0xddU) & 7) & 1) << 2) |
               (ulong)((*(byte *)((long)puVar9 + (uVar15 >> 3)) >> (ulong)(iVar13 + 0xdcU & 7) & 1)
                      << 1) | uVar11;
      uVar15 = (int)(uVar10 >> 5) - 1 & uVar11 | (uVar11 ^ 0x3f) & -(uVar10 >> 5);
      lVar14 = uVar15 - (uVar15 >> 1);
      uStack_1078 = auStack_fe0[lVar14 * 0xc + 5];
      uStack_1080 = auStack_fe0[lVar14 * 0xc + 4];
      uStack_1068 = auStack_fe0[lVar14 * 0xc + 7];
      uStack_1070 = auStack_fe0[lVar14 * 0xc + 6];
      uStack_1058 = auStack_fe0[lVar14 * 0xc + 9];
      uStack_1060 = auStack_fe0[lVar14 * 0xc + 8];
      uStack_1048 = auStack_fe0[lVar14 * 0xc + 0xb];
      uStack_1050 = auStack_fe0[lVar14 * 0xc + 10];
      uStack_1098 = auStack_fe0[lVar14 * 0xc + 1];
      uStack_10a0 = auStack_fe0[lVar14 * 0xc];
      uStack_1088 = auStack_fe0[lVar14 * 0xc + 3];
      uStack_1090 = auStack_fe0[lVar14 * 0xc + 2];
      if ((-(uVar10 >> 5) & 1) != 0) {
        FUN_10ae41290(&uStack_1080,&uStack_1080);
      }
      if (bVar16) {
        bVar16 = false;
        uStack_1018 = uStack_1078;
        uStack_1020 = uStack_1080;
        uStack_1008 = uStack_1068;
        uStack_1010 = uStack_1070;
        uStack_ff8 = uStack_1058;
        uStack_1000 = uStack_1060;
        uStack_fe8 = uStack_1048;
        uStack_ff0 = uStack_1050;
        uStack_1038 = uStack_1098;
        uStack_1040 = uStack_10a0;
        uStack_1028 = uStack_1088;
        uStack_1030 = uStack_1090;
      }
      else {
        puStack_10b8 = puStack_10a8;
        puVar7 = &uStack_1000;
        puVar8 = &uStack_1040;
        puStack_10c0 = &uStack_1080;
        FUN_10ae405f0(&uStack_1040,&uStack_1020,puVar7,puVar8,&uStack_1020,&uStack_1000,0,
                      &uStack_10a0);
      }
    }
    puVar5 = puStack_10b0;
    uVar15 = lVar12 + 0xdb;
    lVar12 = lVar12 + -1;
  } while (uVar15 < 0xdd);
  func_0x00010ae4053c(puStack_10b0,&uStack_1040);
  func_0x00010ae4053c(puVar5 + 9,&uStack_1020);
  puVar6 = &uStack_1000;
  func_0x00010ae4053c(puVar5 + 0x12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_980) {
    ___stack_chk_fail();
    puStack_10d8 = puVar5;
    pcStack_10c8 = FUN_10ae40118;
    lStack_10e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1108 = *puVar7 & 0xffffffffffffff;
    uStack_1100 = *(ulong *)((long)puVar7 + 7) & 0xffffffffffffff;
    uStack_10f8 = *(ulong *)((long)puVar7 + 0xe) & 0xffffffffffffff;
    uStack_10f0 = *(ulong *)((long)puVar7 + 0x14) >> 8;
    uStack_1128 = *puVar8 & 0xffffffffffffff;
    uStack_1120 = *(ulong *)((long)puVar8 + 7) & 0xffffffffffffff;
    uStack_1118 = *(ulong *)((long)puVar8 + 0xe) & 0xffffffffffffff;
    uStack_1110 = *(ulong *)((long)puVar8 + 0x14) >> 8;
    puStack_10e0 = puVar9;
    pppuStack_10d0 = &ppuStack_920;
    func_0x00010ae40444(auStack_11a0,&uStack_1108);
    func_0x00010ae40318(&uStack_1108,auStack_11a0);
    func_0x00010ae4053c(puVar6,&uStack_1108);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_10e8) {
      ___stack_chk_fail();
      return;
    }
    return;
  }
  return;
}


