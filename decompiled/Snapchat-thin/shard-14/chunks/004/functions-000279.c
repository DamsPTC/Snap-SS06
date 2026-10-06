/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1f4ff0; end: 10b1f504b;  */

undefined8 * FUN_10b1f4ff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    FUN_10b1f4f38(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    param_1[3] = param_2[3];
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return param_1;
}



/* Entry: 10b1f504c; end: 10b1f509f;  */

void FUN_10b1f504c(long param_1,undefined8 param_2)

{
  func_0x000107c313f8();
  func_0x000107c313dc(param_1);
  func_0x000107c313d8(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



/* Entry: 10b1f50a0; end: 10b1f50cb;  */

long FUN_10b1f50a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b1f50cc(param_1);
  }
  return param_1;
}



/* Entry: 10b1f50cc; end: 10b1f512f;  */

void FUN_10b1f50cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x20;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10b1f5130; end: 10b1f5193;  */

undefined8 * FUN_10b1f5130(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_10b1f5194(param_1 + 1,param_2 + 1);
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return param_1;
}



/* Entry: 10b1f5194; end: 10b1f51b7;  */

void FUN_10b1f5194(long param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 10b1f51b8; end: 10b1f51d7;  */

void FUN_10b1f51b8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 10b1f51d8; end: 10b1f520b;  */

undefined8 FUN_10b1f51d8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b1f50cc(&uStack_28);
  return param_1;
}



/* Entry: 10b1f520c; end: 10b1f5277;  */

undefined8 * FUN_10b1f520c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 6) != '\0') {
    func_0x00010b1f4f14(param_1 + 2);
  }
  FUN_10b1f51b8((ulong)&uStack_50 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_10b1f51b8(param_1 + 2);
  return param_1;
}



/* Entry: 10b1f5278; end: 10b1f5297;  */

void FUN_10b1f5278(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10b1f51d8();
  }
  return;
}



/* Entry: 10b1f5298; end: 10b1f52e3;  */

void FUN_10b1f5298(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x58) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cc4c28)[*(uint *)(param_1 + 0x58)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 10b1f52e4; end: 10b1f531b;  */

void FUN_10b1f52e4(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10b1f51d8();
  }
  return;
}



/* Entry: 10b1f531c; end: 10b1f53bb;  */

undefined1  [16] FUN_10b1f531c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b1f53bc; end: 10b1f53db;  */

void FUN_10b1f53bc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  return;
}



/* Entry: 10b1f53dc; end: 10b1f634b;  */

void FUN_10b1f53dc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  long lVar8;
  ulong *puVar9;
  int iVar10;
  undefined8 extraout_x8;
  ulong *puVar11;
  undefined8 *puVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  long extraout_x9;
  long extraout_x9_00;
  ulong *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *unaff_x22;
  undefined8 uVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  ulong *puVar29;
  ulong uVar30;
  long lVar31;
  undefined8 *puVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong *puVar35;
  long lVar36;
  ulong uVar37;
  ulong *puStack_390;
  ulong *puStack_388;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  long alStack_348 [10];
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [8];
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  char cStack_2b8;
  ulong *puStack_2b0;
  ulong *puStack_2a8;
  ulong *puStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong auStack_258 [6];
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [48];
  long alStack_1c8 [5];
  byte bStack_1a0;
  long lStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  byte bStack_170;
  ulong **ppuStack_168;
  undefined1 uStack_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  ulong uStack_128;
  ulong *puStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  char cStack_c0;
  int iStack_80;
  undefined8 uStack_78;
  
  func_0x00010b1f6578();
  puVar20 = *(undefined8 **)(param_2 + 0x10);
  puVar28 = (undefined8 *)*puVar20;
  puVar11 = (ulong *)puVar20[4];
  puVar16 = puVar28 + 9;
  uStack_78 = extraout_x8;
  func_0x000107c278c4(puVar16,puVar20 + 1);
  puVar32 = (undefined8 *)puVar28[7];
  if (puVar32 != (undefined8 *)0x0) {
    uVar30 = (long)puVar32 - 1;
    if (((ulong)puVar32 & uVar30) == 0) {
      unaff_x22 = (undefined8 *)(uVar30 & (ulong)puVar16);
    }
    else {
      unaff_x22 = puVar16;
      if (puVar32 <= puVar16) {
        uVar24 = 0;
        if (puVar32 != (undefined8 *)0x0) {
          uVar24 = (ulong)puVar16 / (ulong)puVar32;
        }
        unaff_x22 = (undefined8 *)((long)puVar16 - uVar24 * (long)puVar32);
      }
    }
    puVar23 = *(ulong **)(puVar28[6] + (long)unaff_x22 * 8);
    if (puVar23 != (ulong *)0x0) {
      do {
        while( true ) {
          puVar23 = (ulong *)*puVar23;
          if (puVar23 == (ulong *)0x0) goto LAB_10b1f54bc;
          puVar12 = (undefined8 *)puVar23[1];
          if (puVar12 != puVar16) break;
          puVar21 = puVar23 + 2;
          func_0x000107c278d0(puVar21,puVar20 + 1);
          if (((ulong)puVar21 & 1) != 0) goto LAB_10b1f5788;
        }
        if (((ulong)puVar32 & uVar30) == 0) {
          puVar12 = (undefined8 *)((ulong)puVar12 & uVar30);
        }
        else if (puVar32 <= puVar12) {
          uVar24 = 0;
          if (puVar32 != (undefined8 *)0x0) {
            uVar24 = (ulong)puVar12 / (ulong)puVar32;
          }
          puVar12 = (undefined8 *)((long)puVar12 - uVar24 * (long)puVar32);
        }
      } while (puVar12 == unaff_x22);
    }
  }
LAB_10b1f54bc:
  puVar21 = puVar28 + 8;
  puVar23 = (ulong *)0x70;
  __Znwm();
  puStack_d0 = (ulong *)0x0;
  *puVar23 = 0;
  puVar23[1] = (ulong)puVar16;
  puStack_e0 = puVar23;
  puStack_d8 = puVar21;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar23 + 2,puVar20 + 1);
  puVar23[0xd] = 0;
  puVar23[0xc] = 0;
  puVar23[0xb] = 0;
  puVar23[10] = 0;
  puVar23[9] = 0;
  puVar23[8] = 0;
  puVar23[7] = 0;
  puVar23[6] = 0;
  puVar23[5] = 0;
  puStack_d0 = (ulong *)CONCAT71(puStack_d0._1_7_,1);
  if ((puVar32 == (undefined8 *)0x0) ||
     (*(float *)(puVar28 + 10) * (float)puVar32 < (float)(puVar28[9] + 1))) {
    uVar30 = 1;
    if ((undefined8 *)0x2 < puVar32) {
      uVar30 = (ulong)(((ulong)puVar32 & (long)puVar32 - 1U) != 0);
    }
    puVar12 = (undefined8 *)(uVar30 | (long)puVar32 << 1);
    puVar32 = (undefined8 *)(long)((float)(puVar28[9] + 1) / *(float *)(puVar28 + 10));
    if (puVar12 <= puVar32) {
      puVar12 = puVar32;
    }
    if ((long)puVar12 - 1U == 0) {
      puVar12 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar12 & (long)puVar12 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar32 = (undefined8 *)puVar28[7];
    if (puVar32 < puVar12) {
LAB_10b1f5584:
      if ((ulong)puVar12 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b1f617c;
      }
      lVar31 = (long)puVar12 << 3;
      __Znwm(lVar31);
      func_0x00010b1f64c4(puVar28 + 6,lVar31);
      puVar28[7] = puVar12;
      lVar31 = puVar28[6];
      for (puVar32 = (undefined8 *)0x0; puVar12 != puVar32;
          puVar32 = (undefined8 *)((long)puVar32 + 1)) {
        *(undefined8 *)(lVar31 + (long)puVar32 * 8) = 0;
      }
      puVar17 = (ulong *)*puVar21;
      puVar32 = puVar12;
      if (puVar17 != (ulong *)0x0) {
        puVar18 = (undefined8 *)puVar17[1];
        uVar24 = (long)puVar12 - 1;
        uVar30 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          uVar30 = (ulong)puVar18 / (ulong)puVar12;
        }
        puVar19 = puVar18;
        if (puVar12 <= puVar18) {
          puVar19 = (undefined8 *)((long)puVar18 - uVar30 * (long)puVar12);
        }
        if (((ulong)puVar12 & uVar24) == 0) {
          puVar19 = (undefined8 *)((ulong)puVar18 & uVar24);
        }
        *(ulong **)(lVar31 + (long)puVar19 * 8) = puVar21;
        while (puVar9 = puVar17, puVar17 = (ulong *)*puVar9, puVar17 != (ulong *)0x0) {
          puVar18 = (undefined8 *)puVar17[1];
          if (((ulong)puVar12 & uVar24) == 0) {
            puVar18 = (undefined8 *)((ulong)puVar18 & uVar24);
          }
          else if (puVar12 <= puVar18) {
            uVar30 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              uVar30 = (ulong)puVar18 / (ulong)puVar12;
            }
            puVar18 = (undefined8 *)((long)puVar18 - uVar30 * (long)puVar12);
          }
          if (puVar18 != puVar19) {
            if (*(long *)(lVar31 + (long)puVar18 * 8) == 0) {
              *(ulong **)(lVar31 + (long)puVar18 * 8) = puVar9;
              puVar19 = puVar18;
            }
            else {
              *puVar9 = *puVar17;
              *puVar17 = **(ulong **)(lVar31 + (long)puVar18 * 8);
              **(ulong **)(lVar31 + (long)puVar18 * 8) = (ulong)puVar17;
              puVar17 = puVar9;
            }
          }
        }
      }
    }
    else if (puVar12 < puVar32) {
      puVar18 = (undefined8 *)(long)((float)(ulong)puVar28[9] / *(float *)(puVar28 + 10));
      if ((puVar32 < (undefined8 *)0x3) || (((ulong)puVar32 & (long)puVar32 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined8 *)0x1 < puVar18) {
        puVar18 = (undefined8 *)(1L << (-LZCOUNT((long)puVar18 - 1) & 0x3fU));
      }
      if (puVar12 <= puVar18) {
        puVar12 = puVar18;
      }
      if (puVar12 < puVar32) {
        if (puVar12 != (undefined8 *)0x0) goto LAB_10b1f5584;
        func_0x00010b1f64c4(puVar28 + 6,0);
        puVar28[7] = 0;
        puVar32 = (undefined8 *)0x0;
      }
      else {
        puVar32 = (undefined8 *)puVar28[7];
      }
    }
    if (((ulong)puVar32 & (long)puVar32 - 1U) == 0) {
      unaff_x22 = (undefined8 *)((long)puVar32 - 1U & (ulong)puVar16);
    }
    else {
      unaff_x22 = puVar16;
      if (puVar32 <= puVar16) {
        uVar30 = 0;
        if (puVar32 != (undefined8 *)0x0) {
          uVar30 = (ulong)puVar16 / (ulong)puVar32;
        }
        unaff_x22 = (undefined8 *)((long)puVar16 - uVar30 * (long)puVar32);
      }
    }
  }
  lVar31 = puVar28[6];
  puVar17 = *(ulong **)(lVar31 + (long)unaff_x22 * 8);
  if (puVar17 == (ulong *)0x0) {
    *puVar23 = *puVar21;
    *puVar21 = (ulong)puVar23;
    *(ulong **)(lVar31 + (long)unaff_x22 * 8) = puVar21;
    if (*puVar23 != 0) {
      puVar16 = *(undefined8 **)(*puVar23 + 8);
      if (((ulong)puVar32 & (long)puVar32 - 1U) == 0) {
        puVar16 = (undefined8 *)((ulong)puVar16 & (long)puVar32 - 1U);
      }
      else if (puVar32 <= puVar16) {
        uVar30 = 0;
        if (puVar32 != (undefined8 *)0x0) {
          uVar30 = (ulong)puVar16 / (ulong)puVar32;
        }
        puVar16 = (undefined8 *)((long)puVar16 - uVar30 * (long)puVar32);
      }
      *(ulong **)(lVar31 + (long)puVar16 * 8) = puVar23;
    }
  }
  else {
    *puVar23 = *puVar17;
    *puVar17 = (ulong)puVar23;
  }
  puStack_e0 = (ulong *)0x0;
  puVar28[9] = puVar28[9] + 1;
  FUN_10b1f64dc(&puStack_e0);
LAB_10b1f5788:
  puVar21 = puVar23 + 0xc;
  if (*puVar21 == 0) {
    uVar7 = puVar11 == (ulong *)puVar23[6];
    if ((long)puVar23[6] <= (long)puVar11) {
      uVar24 = puVar23[5];
      lVar31 = puVar28[2];
      iVar10 = *(int *)(puVar28 + 1);
      uVar30 = puVar23[0xd];
      uVar26 = *puVar28;
      func_0x000107c27f70(&uStack_368,puVar20 + 1);
      puVar17 = puVar11 + lVar31 * 0x7d;
      lVar31 = (long)(int)uVar30 + (long)iVar10;
      uStack_128 = uStack_128 & 0xffffffffffffff00;
      uStack_118 = uStack_118 & 0xffffffffffffff00;
      func_0x00010bccbc98(alStack_348,uVar26,&UNK_10f7384d9,0x31);
      lStack_2f8 = *(long *)(alStack_348[0] + 8);
      lStack_2f0 = *(long *)(alStack_348[0] + 0x10);
      if (lStack_2f0 != 0) {
        plVar1 = (long *)(lStack_2f0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10b1fb51c(auStack_2e8,*(undefined8 *)(lStack_2f8 + 0x10),&uStack_368,(long)uVar24 / 1000,1
                    ,(long)puVar17 / 1000,1,lVar31);
      uStack_220 = uStack_220 & 0xffffffffffffff00;
      uStack_200 = 0;
      if (cStack_2b8 != '\0') {
        uStack_218 = uStack_2d0;
        uStack_220 = uStack_2d8;
        uStack_210 = uStack_2c8;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        uStack_2d8 = 0;
        uStack_208 = uStack_2c0;
        uStack_200 = 1;
        func_0x00010b1f4f14(&uStack_2d8);
      }
      uStack_228 = uStack_2e0;
      uStack_2e0 = 0;
      func_0x00010b1f4e94(auStack_1f8,&uStack_228);
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      func_0x00010b1f4e94(auStack_258,&uStack_290);
      puStack_2a8 = (ulong *)0x0;
      puStack_2a0 = (ulong *)0x0;
      puStack_2b0 = (ulong *)0x0;
      FUN_10b1f5130(&lStack_198,auStack_1f8);
      puVar9 = auStack_258;
      FUN_10b1f5130(alStack_1c8);
      ppuStack_168 = &puStack_2b0;
      uStack_160 = 0;
      while ((((bStack_170 & 1) != 0 || ((bStack_1a0 & 1) != 0)) && (lStack_198 != alStack_1c8[0])))
      {
        if ((bStack_170 & 1) == 0) {
          uVar26 = *(undefined8 *)(lStack_198 + 8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_158,lStack_198 + 0x58);
          func_0x000107c27f54(auStack_140,&UNK_10f2e0451,auStack_158);
          puVar9 = (ulong *)0x65;
          func_0x00010bcc7444(uVar26,0x65,auStack_140);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
        }
        puVar33 = puStack_2a8;
        puVar29 = puStack_2b0;
        if (puStack_2a8 < puStack_2a0) {
          puStack_2a8[2] = uStack_180;
          puStack_2a8[1] = uStack_188;
          *puStack_2a8 = uStack_190;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_190 = 0;
          puStack_2a8[3] = uStack_178;
          puVar27 = puStack_2a8 + 4;
        }
        else {
          lVar25 = (long)puStack_2a8 - (long)puStack_2b0;
          lVar36 = lVar25 >> 5;
          uVar30 = lVar36 + 1;
          if (uVar30 >> 0x3b != 0) {
            FUN_10b1f4f64();
            goto LAB_10b1f617c;
          }
          uVar24 = (long)puStack_2a0 - (long)puStack_2b0 >> 4;
          if (uVar24 <= uVar30) {
            uVar24 = uVar30;
          }
          if (0x7fffffffffffffdf < (ulong)((long)puStack_2a0 - (long)puStack_2b0)) {
            uVar24 = 0x7ffffffffffffff;
          }
          if (uVar24 == 0) {
            lVar8 = 0;
          }
          else {
            if (uVar24 >> 0x3b != 0) goto LAB_10b1f6168;
            lVar8 = uVar24 << 5;
            __Znwm();
          }
          uVar30 = uStack_180;
          puVar27 = (ulong *)(lVar8 + lVar25);
          puVar27[1] = uStack_188;
          *puVar27 = uStack_190;
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_190 = 0;
          puVar27[2] = uVar30;
          puVar27[3] = uStack_178;
          puVar34 = puVar27 + lVar36 * -4;
          puVar14 = puVar34;
          for (puVar15 = puVar29; puVar15 != puVar33; puVar15 = puVar15 + 4) {
            uVar37 = puVar15[1];
            uVar30 = *puVar15;
            puVar14[2] = puVar15[2];
            puVar14[1] = uVar37;
            *puVar14 = uVar30;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *puVar15 = 0;
            puVar14[3] = puVar15[3];
            puVar14 = puVar14 + 4;
          }
          for (; puVar29 != puVar33; puVar29 = puVar29 + 4) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar29);
          }
          puVar27 = puVar27 + 4;
          puStack_2a0 = (ulong *)(lVar8 + uVar24 * 0x20);
          bVar3 = puStack_2b0 != (ulong *)0x0;
          puStack_2b0 = puVar34;
          if (bVar3) {
            puStack_2a8 = puVar27;
            __ZdlPv();
          }
        }
        puStack_2a8 = puVar27;
        FUN_10b1f4f78(&lStack_198);
      }
      uStack_160 = 1;
      FUN_10b1f50a0(&ppuStack_168);
      func_0x00010b1f6540(alStack_1c8);
      FUN_10b1f51b8(&uStack_190);
      func_0x00010b1f6540(auStack_258);
      func_0x00010b1f6618();
      func_0x00010b1f6540(auStack_1f8);
      func_0x00010b1f6540(&uStack_228);
      puStack_108 = puStack_2a8;
      puStack_110 = puStack_2b0;
      puStack_100 = puStack_2a0;
      puStack_2b0 = (ulong *)0x0;
      puStack_2a8 = (ulong *)0x0;
      puStack_2a0 = (ulong *)0x0;
      puStack_f8._0_1_ = '\x01';
      FUN_10b1f51d8(&puStack_2b0);
      FUN_10b1f520c(auStack_2e8);
      FUN_10b1b7824(&lStack_2f8);
      func_0x00010bccbe4c(alStack_348);
      func_0x00010bccbdb4(alStack_348);
      puStack_d8 = (ulong *)((ulong)puStack_d8 & 0xffffffffffffff00);
      cStack_c0 = (char)puStack_f8 == '\x01';
      if ((bool)cStack_c0) {
        puStack_d0 = puStack_108;
        puStack_d8 = puStack_110;
        puStack_c8 = puStack_100;
        puStack_108 = (ulong *)0x0;
        puStack_100 = (ulong *)0x0;
        puStack_110 = (ulong *)0x0;
      }
      iStack_80 = 0;
      func_0x00010b1f65b4();
      puStack_110 = (ulong *)((ulong)puStack_110 & 0xffffffffffffff00);
      puStack_f8 = (ulong *)((ulong)puStack_f8._1_7_ << 8);
      if (iStack_80 == 0) {
        puStack_390 = (ulong *)((ulong)puStack_390._1_7_ << 8);
        bVar3 = false;
        uVar7 = cStack_c0 == '\x01';
        if ((bool)uVar7) {
          puStack_388 = puStack_d0;
          puStack_390 = puStack_d8;
          puStack_d0 = (ulong *)0x0;
          puStack_c8 = (ulong *)0x0;
          puStack_d8 = (ulong *)0x0;
          bVar3 = true;
        }
      }
      else {
        if (iStack_80 != 1) {
          func_0x00010563ab98();
          goto LAB_10b1f617c;
        }
        puStack_390 = (ulong *)((ulong)puStack_390._1_7_ << 8);
        bVar3 = false;
        uVar7 = true;
      }
      func_0x00010b1f65b4();
      func_0x00010b1f662c();
      FUN_10b1b78d0(&uStack_128);
      func_0x000107c279a4(&uStack_368);
      if (bVar3) {
        puVar33 = puVar23 + 7;
        for (puVar29 = puStack_390; puVar29 != puStack_388; puVar29 = puVar29 + 4) {
          puVar14 = puVar29;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_368);
          puVar15 = (ulong *)puVar23[8];
          puVar27 = (ulong *)puVar23[9];
          uVar30 = (long)puVar27 - (long)puVar15;
          uStack_350 = puVar29[3] * 1000;
          lVar25 = 0;
          if (uVar30 != 0) {
            lVar25 = ((long)puVar27 - (long)puVar15) * 0x10 + -1;
          }
          uVar24 = puVar23[0xb];
          puVar9 = puVar14;
          if (lVar25 == puVar23[0xc] + uVar24) {
            if (uVar24 < 0x80) {
              puVar9 = (ulong *)puVar23[10];
              puVar34 = (ulong *)*puVar33;
              if (uVar30 < (ulong)((long)puVar9 - (long)puVar34)) {
                uVar30 = 0x1000;
                __Znwm();
                if (puVar9 == puVar27) {
                  if (puVar15 == puVar34) {
                    lVar25 = (long)puVar9 - (long)puVar15 >> 2;
                    if (puVar27 == puVar15) {
                      lVar25 = 1;
                    }
                    func_0x00010b1f664c();
                    FUN_10b1f531c(lVar25);
                    func_0x00010b1f65cc(lVar25 << 1);
                    puVar14 = (ulong *)puVar23[8];
                    func_0x00010b1f52f4(&puStack_e0,puVar14,puVar23[9]);
                    func_0x00010b1f6550();
                    puVar15 = (ulong *)puVar23[8];
                  }
                  puVar15[-1] = uVar30;
                  puVar27 = (ulong *)puVar23[9];
                  goto LAB_10b1f5cec;
                }
                *puVar27 = uVar30;
                puVar23[9] = (ulong)(puVar27 + 1);
                puVar9 = puVar14;
              }
              else {
                puVar13 = (ulong *)((long)puVar9 - (long)puVar34 >> 2);
                if (puVar9 == puVar34) {
                  puVar13 = (ulong *)0x1;
                }
                puStack_f0 = puVar23 + 10;
                FUN_10b1f531c();
                puVar34 = (ulong *)((long)puVar13 + uVar30);
                puVar22 = puVar13 + (long)puVar14;
                uVar24 = 0x1000;
                puVar9 = puVar14;
                puStack_110 = puVar13;
                puStack_108 = puVar34;
                puStack_100 = puVar34;
                puStack_f8 = puVar22;
                __Znwm();
                uStack_118 = 0x80;
                puVar35 = puVar34;
                puStack_120 = puVar21;
                if (uVar30 == (long)puVar14 * 8) {
                  if (puVar27 == puVar15) {
                    uStack_128 = uVar24;
                    func_0x00010b1f664c();
                    puVar27 = (ulong *)0x1;
                    FUN_10b1f531c();
                    puStack_c8 = puVar27 + (long)puVar9;
                    puVar9 = puVar34;
                    puStack_e0 = puVar27;
                    puStack_d8 = puVar27;
                    puStack_d0 = puVar27;
                    func_0x00010b1f52f4(&puStack_e0,puVar34,puVar34);
                    puVar14 = puStack_c8;
                    puVar35 = puStack_d0;
                    puVar15 = puStack_d8;
                    puVar27 = puStack_e0;
                    puStack_108 = puStack_d8;
                    puStack_110 = puStack_e0;
                    puStack_f8 = puStack_c8;
                    puStack_e0 = puVar13;
                    puStack_d8 = puVar34;
                    puStack_d0 = puVar34;
                    puStack_c8 = puVar22;
                    func_0x00010b1f537c(&puStack_e0);
                    puVar22 = puVar14;
                    puVar13 = puVar27;
                    puVar34 = puVar15;
                  }
                  else {
                    puVar34 = puVar34 + (((long)puVar34 - (long)puVar13 >> 3) + 1) / -2;
                    puVar35 = puVar34;
                    puStack_108 = puVar34;
                  }
                }
                puVar27 = puVar35 + 1;
                *puVar35 = uVar24;
                uStack_128 = 0;
                puVar15 = (ulong *)puVar23[9];
                puStack_100 = puVar27;
                while (puVar14 = (ulong *)puVar23[8], puVar15 != puVar14) {
                  puVar14 = puVar34;
                  if (puVar34 == puVar13) {
                    if (puVar27 < puVar22) {
                      lVar25 = (long)puVar27 - (long)puVar13;
                      puVar35 = puVar27 + (((long)puVar22 - (long)puVar27 >> 3) + 1) / 2;
                      puVar14 = (ulong *)((long)puVar35 - ((long)puVar27 - (long)puVar13));
                      puVar27 = puVar35;
                      if (lVar25 != 0) {
                        _memmove(puVar14,puVar34,lVar25);
                        puVar9 = puVar34;
                      }
                    }
                    else {
                      lVar25 = (long)puVar22 - (long)puVar13 >> 2;
                      if ((long)puVar22 - (long)puVar13 == 0) {
                        lVar25 = 1;
                      }
                      func_0x00010b1f664c();
                      FUN_10b1f531c(lVar25);
                      func_0x00010b1f65cc(lVar25 << 1);
                      puVar9 = puVar13;
                      func_0x00010b1f52f4(&puStack_e0,puVar13,puVar27);
                      puVar5 = puStack_c8;
                      puVar4 = puStack_d0;
                      puVar14 = puStack_d8;
                      puVar35 = puStack_e0;
                      puStack_e0 = puVar13;
                      puStack_d8 = puVar34;
                      puStack_d0 = puVar27;
                      puStack_c8 = puVar22;
                      func_0x00010b1f537c(&puStack_e0);
                      puVar22 = puVar5;
                      puVar13 = puVar35;
                      puVar27 = puVar4;
                    }
                  }
                  puVar15 = puVar15 + -1;
                  puVar34 = puVar14 + -1;
                  *puVar34 = *puVar15;
                }
                puStack_110 = (ulong *)puVar23[7];
                puVar23[7] = (ulong)puVar13;
                puVar23[8] = (ulong)puVar34;
                puStack_f8 = (ulong *)puVar23[10];
                puStack_100 = (ulong *)puVar23[9];
                puVar23[9] = (ulong)puVar27;
                puVar23[10] = (ulong)puVar22;
                puStack_108 = puVar14;
                func_0x00010b1f5350(&uStack_128);
                func_0x00010b1f537c(&puStack_110);
              }
            }
            else {
              puVar23[0xb] = uVar24 - 0x80;
              uVar30 = *puVar15;
              puVar15 = puVar15 + 1;
LAB_10b1f5cec:
              puVar23[8] = (ulong)puVar15;
              if (puVar27 == (ulong *)puVar23[10]) {
                puVar9 = (ulong *)*puVar33;
                if (puVar15 < puVar9 || (long)puVar15 - (long)puVar9 == 0) {
                  puVar15 = (ulong *)((long)puVar27 - (long)puVar9 >> 2);
                  if ((long)puVar27 - (long)puVar9 == 0) {
                    puVar15 = (ulong *)0x1;
                  }
                  func_0x00010b1f664c();
                  puVar9 = puVar15;
                  FUN_10b1f531c();
                  puStack_d8 = puVar9 + ((ulong)puVar15 >> 2);
                  puStack_c8 = puVar9 + (long)puVar14;
                  puVar14 = (ulong *)puVar23[8];
                  puStack_e0 = puVar9;
                  puStack_d0 = puStack_d8;
                  func_0x00010b1f52f4(&puStack_e0,puVar14,puVar23[9]);
                  func_0x00010b1f6550();
                  puVar27 = (ulong *)puVar23[9];
                }
                else {
                  lVar25 = (((long)puVar15 - (long)puVar9 >> 3) + 1) / -2;
                  puVar9 = puVar15 + lVar25;
                  lVar36 = (long)puVar27 - (long)puVar15;
                  puVar34 = puVar15;
                  if (lVar36 != 0) {
                    _memmove(puVar9,puVar15,lVar36);
                    puVar34 = (ulong *)puVar23[8];
                    puVar14 = puVar15;
                  }
                  puVar27 = (ulong *)((long)puVar9 + lVar36);
                  puVar23[8] = (ulong)(puVar34 + lVar25);
                }
              }
              *puVar27 = uVar30;
              puVar23[9] = (ulong)(puVar27 + 1);
              puVar9 = puVar14;
            }
          }
          func_0x00010b1d3414(puVar33);
          puVar9[1] = uStack_360;
          *puVar9 = uStack_368;
          puVar9[2] = uStack_358;
          uStack_360 = 0;
          uStack_358 = 0;
          uStack_368 = 0;
          puVar9[3] = uStack_350;
          *puVar21 = *puVar21 + 1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_368);
        }
        lVar25 = (long)puStack_388 - (long)puStack_390 >> 5;
        uVar7 = lVar31 == lVar25;
        if (lVar25 < lVar31) {
          iVar10 = 0;
          puVar23[5] = (ulong)(puVar17 + 0x7d);
          puVar23[6] = (ulong)puVar17;
        }
        else {
          uVar30 = (puVar23[0xc] + puVar23[0xb]) - 1;
          uVar30 = *(ulong *)(*(long *)(puVar23[8] + (uVar30 >> 7) * 8) + (uVar30 & 0x7f) * 0x20 +
                             0x18);
          puVar23[5] = uVar30;
          puVar21 = puVar33;
          func_0x00010b1d3414();
          puVar17 = puVar9;
          func_0x00010b1d33f0(puVar33);
          iVar10 = 0;
          for (; uVar7 = puVar17 == puVar9, !(bool)uVar7; puVar9 = puVar9 + -4) {
            if ((ulong *)*puVar21 == puVar9) {
              puVar21 = puVar21 + -1;
              uVar7 = *(ulong *)(*puVar21 + 0xff8) == uVar30;
              if (!(bool)uVar7) break;
              puVar9 = (ulong *)(*puVar21 + 0x1000);
            }
            else {
              uVar7 = puVar9[-1] == uVar30;
              if (!(bool)uVar7) break;
            }
            iVar10 = iVar10 + 1;
          }
        }
        *(int *)(puVar23 + 0xd) = iVar10;
        uVar30 = puVar23[0xc];
        func_0x00010b1f6624();
        if (uVar30 != 0) goto LAB_10b1f5794;
      }
      else {
        puVar23[6] = (ulong)puVar17;
        func_0x00010b1f6624();
      }
    }
LAB_10b1f609c:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  else {
LAB_10b1f5794:
    func_0x00010b1f6600();
    puVar16 = (undefined8 *)(extraout_x8_00 + extraout_x9 * 0x20);
    puVar21 = (ulong *)puVar16[3];
    uVar7 = puVar21 == puVar11;
    if ((long)puVar11 <= (long)puVar21) goto LAB_10b1f609c;
    puStack_d8 = (ulong *)puVar16[1];
    puStack_e0 = (ulong *)*puVar16;
    puStack_d0 = (ulong *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puStack_c8 = puVar21;
    func_0x00010b1f6600();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              (extraout_x8_01 + extraout_x9_00 * 0x20);
    uVar30 = puVar23[0xb] + 1;
    puVar23[0xc] = puVar23[0xc] - 1;
    puVar23[0xb] = uVar30;
    uVar7 = uVar30 == 0x100;
    if (0xff < uVar30) {
      __ZdlPv(*(undefined8 *)puVar23[8]);
      puVar23[8] = puVar23[8] + 8;
      puVar23[0xb] = puVar23[0xb] - 0x80;
    }
    puVar11 = puStack_d0;
    param_1[1] = puStack_d8;
    *param_1 = puStack_e0;
    puStack_d8 = (ulong *)0x0;
    puStack_d0 = (ulong *)0x0;
    puStack_e0 = (ulong *)0x0;
    param_1[2] = puVar11;
    param_1[3] = puVar21;
    *(undefined1 *)(param_1 + 4) = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_e0);
  }
  func_0x00010b1f6520(uStack_78);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1f6168:
  func_0x000104bd35f4();
LAB_10b1f617c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1f6180);
  (*pcVar6)();
}



/* Entry: 10b1f634c; end: 10b1f636b;  */

void FUN_10b1f634c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1f4d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1f636c; end: 10b1f63b7;  */

void FUN_10b1f636c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1f63b8; end: 10b1f642f;  */

void FUN_10b1f63b8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *extraout_x9;
  code *pcVar5;
  ulong extraout_x11;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (param_1[2] != 0) {
    plVar1 = (long *)(param_1[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b1f6638(uVar4);
  pcVar5 = extraout_x9;
  if ((extraout_x11 & 1) != 0) {
    pcVar5 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  (*pcVar5)();
  func_0x00010b1f65ac();
  return;
}



/* Entry: 10b1f6430; end: 10b1f643f;  */

void FUN_10b1f6430(void)

{
  return;
}



/* Entry: 10b1f6440; end: 10b1f64b3;  */

void FUN_10b1f6440(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  code *extraout_x9;
  code *pcVar5;
  ulong extraout_x11;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (param_1[2] != 0) {
    plVar1 = (long *)(param_1[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010b1f6638(uVar4);
  pcVar5 = extraout_x9;
  if ((extraout_x11 & 1) != 0) {
    pcVar5 = *(code **)(*param_1 + ((ulong)extraout_x9 & 0xffffffff));
  }
  (*pcVar5)();
  func_0x00010b1f65ac();
  return;
}



/* Entry: 10b1f64b4; end: 10b1f64db;  */

void FUN_10b1f64b4(void)

{
  return;
}



/* Entry: 10b1f64dc; end: 10b1f651f;  */

long * FUN_10b1f64dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b1d32cc(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b1f6520; end: 10b1f66c7;  */

void FUN_10b1f6520(void)

{
  return;
}



/* Entry: 10b1f66c8; end: 10b1f6733;  */

void FUN_10b1f66c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  plVar2 = (long *)(param_3 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    puVar1 = param_1;
    FUN_10b11e978(param_1,plVar2 + 2);
    *(undefined4 *)puVar1 = 1;
  }
  return;
}



/* Entry: 10b1f6734; end: 10b1f678b;  */

void FUN_10b1f6734(void)

{
  return;
}



/* Entry: 10b1f678c; end: 10b1f679f;  */

void FUN_10b1f678c(void)

{
  FUN_10b1f67a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1f67a0; end: 10b1f67cf;  */

undefined8 * FUN_10b1f67a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cc4cc0;
  func_0x00010b125864(param_1 + 1);
  return param_1;
}



/* Entry: 10b1f67d0; end: 10b1f67d7;  */

undefined8 FUN_10b1f67d0(void)

{
  return 1;
}



/* Entry: 10b1f67d8; end: 10b1f6887;  */

undefined8 FUN_10b1f67d8(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined1 auStack_78 [80];
  uint uStack_28;
  undefined1 uStack_24;
  
  if ((param_4 & 1) == 0) {
    uStack_28 = uStack_28 & 0xffffff00;
    uStack_24 = *(char *)(param_3 + 0x88) == '\x01' && *(int *)(param_3 + 100) == 2;
    if ((bool)uStack_24) {
      uStack_28 = 2;
    }
    FUN_10b202630(auStack_78);
    func_0x00010b1f6888(param_1,auStack_78,&uStack_28);
  }
  else {
    FUN_10b202630(auStack_78);
    func_0x00010b1f68d0(param_1,auStack_78,*(undefined4 *)(param_3 + 0x60));
  }
  func_0x00010b121e00(auStack_78);
  return param_1;
}



/* Entry: 10b1f6888; end: 10b1f68fb;  */

bool FUN_10b1f6888(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  bool bVar1;
  undefined8 *unaff_x21;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x00010b1f7d80();
  FUN_10b1bac30(*param_1);
  FUN_10b1262f4();
  FUN_10b1bad9c(auStack_48,*unaff_x21);
  if (lStack_38 == 0) {
    bVar1 = false;
  }
  else if ((char)param_3[1] == '\x01') {
    bVar1 = *(int *)(lStack_38 + 0x1c) == *param_3;
  }
  else {
    bVar1 = true;
  }
  func_0x00010b1ec1ec();
  return bVar1;
}



/* Entry: 10b1f68fc; end: 10b1f693f;  */

void FUN_10b1f68fc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_3);
  lVar4 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = uVar5;
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



/* Entry: 10b1f6940; end: 10b1f697b;  */

void FUN_10b1f6940(long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 extraout_x8;
  long lVar7;
  long lVar8;
  undefined8 unaff_x19;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 auStack_100 [3];
  long lStack_e8;
  undefined1 auStack_e0 [16];
  long lStack_d0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *apuStack_a8 [10];
  undefined8 uStack_58;
  
  func_0x00010b1f7df0();
  lVar5 = *param_1;
  param_4 = param_4 & 0xffffffff;
  func_0x00010b1f7e10();
  func_0x00010b1eb63c();
  func_0x00010b1eaf40();
  uStack_58 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar11 = *(long *)(unaff_x20 + 0x518);
  func_0x00010b1ebdbc(auStack_e0);
  func_0x00010b1eb674();
  if (lStack_d0 == 0) goto LAB_10b1c9304;
  lVar11 = lVar5 + lVar11 * -1000;
  lVar7 = *(long *)(lStack_d0 + 0x60);
  in_ZR = lVar7 == lVar11;
  if (lVar11 < lVar7) {
    in_ZR = *(char *)(unaff_x20 + 0x660) == '\x01';
    if (!(bool)in_ZR) goto LAB_10b1c9304;
    lVar11 = *(long *)(lStack_d0 + 0x48);
    in_ZR = 1;
    lVar1 = lVar11;
    if (lVar11 == *(long *)(lStack_d0 + 0x50)) goto LAB_10b1c9304;
    while (lVar8 = lVar11, lVar11 = lVar1 + 0x88, lVar11 != *(long *)(lStack_d0 + 0x50)) {
      plVar9 = (long *)(lVar1 + 200);
      lVar1 = lVar11;
      if (*(long *)(lVar8 + 0x40) <= *plVar9) {
        lVar11 = lVar8;
      }
    }
    lVar7 = lVar7 - *(long *)(lVar8 + 0x40);
    in_ZR = lVar7 == 60000000;
    if (60000000 < lVar7) goto LAB_10b1c9304;
    lVar7 = *(long *)(lVar8 + 0x40) + 60000000;
    in_ZR = lVar5 == lVar7;
    lVar11 = lVar5;
    if (lVar5 <= lVar7) {
      lVar5 = lVar7;
      lVar11 = lVar7;
    }
  }
  if (((param_4 & 1) != 0) && ((*(byte *)(lStack_d0 + 0x163) & 1) == 0)) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x238);
    in_ZR = (param_3 & 0x100000000) == 0;
    uVar6 = 0x87;
    if ((bool)in_ZR) {
      uVar6 = 0x88;
    }
    FUN_10b12983c(&pcStack_b8,param_3);
    func_0x00010b1eb654(&uStack_138,&pcStack_b8);
    func_0x00010b1eb5b4(uVar10,uVar6,&uStack_138);
    func_0x00010b1eb750();
    func_0x00010b1eb5ac(&pcStack_b8);
  }
  *(long *)(lStack_d0 + 0x60) = lVar5;
  *(undefined1 *)(lStack_d0 + 0x163) = 1;
  plVar9 = *(long **)(unaff_x20 + 0x6c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_138);
  func_0x00010b1ee038(&uStack_120);
  puVar2 = auStack_100;
  lStack_110 = unaff_x20;
  lStack_108 = lVar5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2,unaff_x19);
  pcStack_b8 = FUN_10b1e6794;
  ppuStack_b0 = &PTR_FUN_110cc4430;
  lStack_e8 = lVar11;
  func_0x00010b1ed008();
  puVar2[1] = uStack_130;
  *puVar2 = uStack_138;
  puVar2[2] = uStack_128;
  puVar3 = puVar2;
  func_0x00010b1ed800();
  puVar3[4] = uStack_118;
  puVar3[3] = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  puVar3[6] = lStack_108;
  puVar3[5] = lStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar3 + 7,auStack_100);
  puVar2[10] = lStack_e8;
  apuStack_a8[0] = puVar2;
  (**(code **)(*plVar9 + 0x10))(plVar9,&pcStack_b8);
  func_0x00010b1eafb4(ppuStack_b0);
  FUN_10b1c93c0(&uStack_138);
LAB_10b1c9304:
  func_0x00010b1ecdb0();
  func_0x00010b1eaddc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1eb230();
    ppuVar4 = apuStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4);
    func_0x00010b1ecdb0();
    func_0x00010b1eb590();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar4 + 7);
    func_0x00010b125908(ppuVar4 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
              (ppuVar4);
    return;
  }
  return;
}



/* Entry: 10b1f697c; end: 10b1f69ab;  */

void FUN_10b1f697c(void)

{
  undefined1 auStack_408 [24];
  undefined1 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined1 auStack_2d0 [640];
  
  func_0x00010b1f7d08();
  func_0x00010b1f7d54();
  func_0x00010b1ecf44(auStack_408);
  uStack_3f0 = 0;
  func_0x00010b1ec904();
  uStack_3e8 = 0;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  func_0x00010b1ee4b8(auStack_2d0);
  FUN_10b1c446c();
  func_0x00010b1ec240();
  func_0x00010b1ecca8();
  func_0x00010b1ed368();
  return;
}



/* Entry: 10b1f69ac; end: 10b1f69df;  */

void FUN_10b1f69ac(undefined8 *param_1,undefined8 param_2,long param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x29;
  undefined8 unaff_x30;
  long *plVar6;
  undefined1 auStack_470 [16];
  long lStack_460;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_178;
  undefined1 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  long lStack_40;
  ulong uStack_38;
  ulong uVar7;
  
  func_0x00010b1f7d30();
  func_0x00010b1f7d98(*param_1);
  func_0x00010b1ec024();
  func_0x00010b1ebe28();
  func_0x00010b1ee4f0();
  func_0x00010b1ebb5c(auStack_470);
  lVar5 = lStack_460;
  func_0x00010b1edf14();
  func_0x00010b1edee8(&uStack_1f8,*(undefined4 *)(param_3 + 0x18));
  lVar5 = lVar5 + 0x28;
  func_0x000107c28108(lVar5,&uStack_1f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1f8);
  if (lVar5 == 0) {
    *(undefined4 *)(unaff_x19 + 0x4f) = 0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&stack0xffffffffffffffe8,lVar5 + 0x28);
  }
  func_0x00010b1eb9c4();
  if (lVar5 == 0) goto LAB_10b1c5110;
  func_0x00010b1eca58(auStack_470);
  func_0x00010b1edf14();
  lVar5 = lStack_460 + 0x108;
  FUN_10b1e4440(lVar5,&stack0xffffffffffffffe8);
  if (lVar5 == 0) {
    uVar7 = 0;
    lVar5 = 0;
  }
  else {
    uVar7 = *(ulong *)(lVar5 + 0x28);
    lVar5 = *(long *)(lVar5 + 0x30);
    if (lVar5 != 0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b1eb9c4();
  if (uVar7 == 0) {
    *(undefined4 *)(unaff_x19 + 0x4f) = 0;
  }
  else {
    lVar4 = uVar7 + 0x40;
    uVar3 = uVar7;
    __ZNSt3__15mutex8try_lockEv();
    lStack_58 = lVar4;
    if ((int)uVar3 == 0) {
      lStack_58 = 0;
    }
    if (*(char *)(unaff_x20 + 0x76) == '\x01') {
      uStack_38 = uVar7;
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
      uStack_38 = 0;
    }
    uStack_48 = (undefined1)uVar3;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_50 = uVar7;
    lStack_40 = lStack_58;
    func_0x00010b1de708(&uStack_78);
    func_0x000107c2798c(&uStack_68);
    if ((uVar3 & 1) == 0) {
      plVar6 = unaff_x19;
      func_0x00010b1ee4f0(unaff_x30);
      unaff_x19[1] = unaff_x29;
      *unaff_x19 = (long)plVar6;
      unaff_x19[2] = extraout_x8;
      func_0x00010b1ec8f8();
      *(undefined4 *)(unaff_x19 + 0x4f) = 1;
      func_0x00010b1eb738();
    }
    else {
      if ((((*(byte *)(uVar7 + 0x80) & 1) != 0) || (*(char *)(uVar7 + 0x1a2) == '\x01')) &&
         ((param_4 == 0 || ((*(byte *)(uVar7 + 0x170) & 1) != 0)))) {
        lVar5 = (long)*(char *)(uVar7 + 0x57);
        if (lVar5 < 0) {
          lVar5 = *(long *)(uVar7 + 0x48);
        }
        if (((lVar5 != 0) && (FUN_10b1bf250(lVar4,param_3), lVar4 != 0)) &&
           (*(long *)(lVar4 + 0x30) == 0)) {
          uStack_1f0 = 0;
          uStack_1f8 = 0;
          uStack_1d0 = 0;
          uStack_1d8 = 0;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          uStack_1e8 = 0;
          uStack_1b0 = 0;
          uStack_1a0 = 0;
          uStack_1a8 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_178 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          func_0x00010b1ee018(auStack_470);
          func_0x00010b1eb714();
          FUN_10b121c1c();
          *(undefined4 *)(unaff_x19 + 0x4f) = 2;
          func_0x00010b1ebb80();
          FUN_10b1213b8(&uStack_1f8);
          goto LAB_10b1c5104;
        }
      }
      *(undefined4 *)(unaff_x19 + 0x4f) = 0;
    }
LAB_10b1c5104:
    func_0x00010b1d3e60(&uStack_50);
  }
  func_0x00010b1edad8();
LAB_10b1c5110:
  func_0x00010b1edf4c();
  return;
}



/* Entry: 10b1f69e0; end: 10b1f6a6f;  */

void FUN_10b1f69e0(void)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined1 auStack_440 [24];
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined8 uStack_404;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined4 uStack_3c8;
  undefined1 auStack_2c0 [640];
  
  func_0x00010b1f7d08();
  func_0x00010b1f7d54();
  func_0x00010b1eb434();
  if (extraout_x8 != 0) {
    func_0x00010b1eb8e4();
    func_0x00010b1ecf44(auStack_440);
    func_0x00010b1ec904();
    uStack_420 = 0;
    uStack_428 = 0;
    uStack_410 = 0;
    uStack_418 = 0;
    uStack_404 = 0;
    uStack_40c = 0;
    uStack_408 = 0;
    uStack_3f0 = 0;
    uStack_3e8 = 0;
    uStack_3f8 = 0;
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3c8 = 0;
    func_0x00010b1eb6f8(auStack_2c0);
    FUN_10b1c446c();
    func_0x00010b1ec240();
    func_0x00010b1ecca8();
    func_0x00010b1ed368();
    return;
  }
  func_0x00010b1ead30();
  *(undefined1 *)(extraout_x8_00 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)(extraout_x8_00 + 0x1c8,0xb0);
  return;
}



/* Entry: 10b1f6a70; end: 10b1f6ad3;  */

void FUN_10b1f6a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 auStack_40 [2];
  
  FUN_10b1245a8(auStack_40);
  FUN_10b1cf4e4(param_1,auStack_40[0],param_2,param_3);
  func_0x00010b1245e8(auStack_40);
  return;
}



/* Entry: 10b1f6ad4; end: 10b1f6b3b;  */

void FUN_10b1f6ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_1c0 [384];
  
  func_0x00010b1f7e34();
  func_0x00010b1f7e4c();
  uVar1 = *param_1;
  func_0x00010b1213e8(auStack_1c0);
  FUN_10b1c43b8(uVar1);
  func_0x00010b1f7dc4();
  return;
}



/* Entry: 10b1f6b3c; end: 10b1f6b97;  */

void FUN_10b1f6b3c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x00010b1f7d20();
  uVar1 = *param_1;
  func_0x00010b1f7e04();
  func_0x00010b1f7e10(uVar1);
  FUN_10b1bfb30();
  func_0x00010b1f7dc4();
  return;
}



/* Entry: 10b1f6b98; end: 10b1f6bff;  */

void FUN_10b1f6b98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_1d0 [384];
  
  func_0x00010b1f7d20();
  uVar1 = *param_1;
  func_0x00010b1213e8(auStack_1d0);
  FUN_10b1bb564(uVar1);
  func_0x00010b1f7dc4();
  return;
}



/* Entry: 10b1f6c00; end: 10b1f6c63;  */

void FUN_10b1f6c00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x00010b1f7d30();
  uVar1 = *param_1;
  func_0x00010b1f7e04();
  FUN_10b1c4280(uVar1);
  func_0x00010b1f7dc4();
  return;
}



/* Entry: 10b1f6c64; end: 10b1f6c93;  */

undefined8 ****
FUN_10b1f6c64(undefined8 ***param_1,undefined8 param_2,undefined8 ****param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 ***param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined1 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  int iVar9;
  code *pcVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  undefined8 ****ppppuVar11;
  undefined1 auStack_cc8 [48];
  undefined1 auStack_c98 [24];
  long lStack_c80;
  undefined8 ***pppuStack_c70;
  undefined8 ***pppuStack_c68;
  undefined1 **ppuStack_c60;
  code *pcStack_c58;
  undefined8 **ppuStack_c50;
  undefined8 **ppuStack_c48;
  undefined1 auStack_c40 [40];
  undefined1 uStack_c18;
  undefined8 **ppuStack_c10;
  undefined8 **ppuStack_c08;
  undefined1 auStack_bf8 [80];
  undefined1 auStack_ba8 [24];
  undefined1 auStack_b90 [24];
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 **ppuStack_b60;
  undefined8 uStack_b58;
  undefined1 auStack_b50 [64];
  undefined1 auStack_b10 [168];
  undefined1 uStack_a68;
  undefined1 uStack_a28;
  undefined4 uStack_a20;
  undefined1 uStack_a1c;
  undefined1 uStack_a18;
  undefined1 uStack_a14;
  undefined1 auStack_a10 [24];
  undefined1 auStack_9f8 [136];
  byte bStack_970;
  undefined8 ***pppuStack_968;
  undefined8 uStack_960;
  undefined1 auStack_958 [24];
  undefined1 auStack_940 [64];
  char cStack_900;
  undefined8 uStack_8f8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 **ppuStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined **ppuStack_670;
  undefined8 ***pppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  char cStack_558;
  undefined8 uStack_368;
  undefined8 **ppuStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [56];
  undefined1 *puStack_310;
  code *pcStack_308;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  ppppuVar7 = param_3;
  func_0x00010b1f7d30();
  func_0x00010b1f7db0();
  pppuVar5 = param_1;
  ppppuVar11 = param_3;
  func_0x00010b1eaeac();
  ppuStack_358 = pppuVar5;
  uStack_350 = param_2;
  uStack_38 = extraout_x8;
  FUN_10b121c1c(auStack_348,ppppuVar7);
  iVar9 = (int)param_5;
  uVar1 = *param_3 == (undefined8 ***)0x0;
  ppppuVar4 = (undefined8 ****)(param_1 + 0x49);
  if (!(bool)uVar1) {
    ppppuVar4 = param_3;
  }
  ppuStack_d0 = *ppppuVar4;
  ppuStack_c8 = ppppuVar4[1];
  if ((undefined8 ***)ppuStack_c8 != (undefined8 ***)0x0) {
    do {
      func_0x00010b1eb124();
      iVar9 = (int)param_5;
    } while (extraout_w10 != 0);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_70 = 0;
  iVar3 = (int)&ppuStack_358;
  uVar8 = 0;
  FUN_10b1c1bc8();
  if (iVar3 == 0) {
LAB_10b1c3cc0:
    func_0x00010b1ede68();
    *(undefined1 *)(unaff_x19 + 0x278) = 0;
    *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
  }
  else if (lStack_98 == 0) {
    func_0x00010b1ede68();
    uStack_68 = 0x10b1e4ce4;
    ppuStack_60 = &PTR_DAT_110cc42b8;
    func_0x00010b1edc04();
    func_0x00010b1edb9c();
  }
  else {
    iVar3 = (int)&ppuStack_358;
    FUN_10b1c2318();
    if (iVar3 == 0) goto LAB_10b1c3cc0;
    FUN_10b1c367c(unaff_x19,&ppuStack_358);
  }
  ppppuVar4 = (undefined8 ****)&ppuStack_358;
  FUN_10b1d6668();
  func_0x00010b1eaddc(uStack_38);
  if ((bool)uVar1) {
    return ppppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010b1eb668();
  FUN_10b1d6668();
  func_0x00010b1eb590();
  pcVar10 = FUN_10b1c3d30;
  func_0x00010b1ec024();
  puStack_310 = &stack0xfffffffffffffff0;
  pcStack_308 = pcVar10;
  func_0x00010b1eb8e4();
  func_0x00010b1eaeac();
  pppuStack_968 = ppppuVar4;
  uStack_960 = uVar8;
  uStack_368 = extraout_x8_00;
  FUN_10b121c1c(auStack_958,ppppuVar7);
  uVar1 = *param_7 == (undefined8 **)0x0;
  pppuVar5 = param_1 + 0x49;
  if (!(bool)uVar1) {
    pppuVar5 = param_7;
  }
  puStack_6e0 = *pppuVar5;
  puStack_6d8 = pppuVar5[1];
  if ((undefined8 **)puStack_6d8 != (undefined8 **)0x0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  uStack_698 = 0;
  uStack_6a0 = 0;
  ppuStack_688 = (undefined8 ***)0x0;
  uStack_690 = 0;
  uStack_6b8 = 0;
  lStack_6c0 = 0;
  lStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_680 = 0;
  pppuVar5 = *ppppuVar11;
  if (pppuVar5 == (undefined8 ***)0x0) {
    pppuVar5 = (undefined8 ***)0x0;
  }
  else {
    func_0x00010b1ebf40();
    (*extraout_x8_01)();
  }
  ppppuVar4 = &pppuStack_968;
  FUN_10b1c1bc8(ppppuVar4,1);
  if ((int)ppppuVar4 != 0) {
    if (lStack_6a8 == 0) {
      func_0x00010b1ec4b0();
      pppuStack_5e0 = (undefined8 ****)0x10b1e4cf8;
      ppuStack_5d8 = &PTR_DAT_110cc42d0;
      func_0x00010b1d664c(unaff_x19 + 0x278,&pppuStack_5e0);
      func_0x000107c281f0(&pppuStack_5e0);
      goto LAB_10b1c3f80;
    }
    uVar2 = *(char *)(lStack_6c0 + 0x160) == '\x01';
    if ((((bool)uVar2) && (*(long *)(lStack_6c0 + 0x28) == 0)) &&
       (uVar2 = false, cStack_900 == '\x01')) {
      uStack_5c0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      ppuStack_5d8 = (undefined **)0x0;
      pppuStack_5e0 = (undefined8 ****)0x0;
      FUN_10b1be194(&uStack_6d0,&pppuStack_5e0);
      func_0x00010b1d3e60(&pppuStack_5e0);
      puVar6 = auStack_958;
      FUN_10b1c41c0();
      if (puVar6 == (undefined1 *)0x0) {
        auStack_a10[0] = 0;
        bStack_970 = 0;
      }
      else {
        puVar6 = auStack_958;
        FUN_10b1c41c0(puVar6);
        FUN_10b125778(auStack_a10,puVar6);
        if ((iVar9 != 0) && ((bStack_970 & 1) != 0)) {
          FUN_10b24f3f8(auStack_a10);
          FUN_10b250520(auStack_9f8);
          func_0x00010b24f428(auStack_a10);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_b90,auStack_958);
      uStack_b78 = uStack_8f8;
      uStack_b70 = 0;
      uStack_b68 = 0;
      uStack_b58 = 0;
      ppuStack_b60 = pppuVar5;
      func_0x00010b125750(auStack_b50,auStack_940);
      FUN_10b121494(auStack_b10,auStack_a10);
      uStack_a68 = 0;
      uStack_a28 = 0;
      uStack_a1c = (undefined1)((ulong)param_6 >> 0x20);
      uStack_a20 = (undefined4)param_6;
      uStack_a18 = 0;
      uStack_a14 = 0;
      FUN_10b202630(auStack_bf8,auStack_958);
      ppuStack_c08 = ppppuVar11[1];
      ppuStack_c10 = *ppppuVar11;
      if (ppppuVar11[1] != (undefined8 ***)0x0) {
        do {
          func_0x00010b1eb124();
        } while (extraout_w10_02 != 0);
      }
      auStack_c40[0] = 0;
      uStack_c18 = 0;
      FUN_10b17d524(&uStack_678,auStack_bf8,&ppuStack_c10,auStack_c40);
      FUN_10b1a4728(auStack_ba8,&uStack_678,1);
      func_0x00010b1eb6f8(&pppuStack_5e0);
      FUN_10b1c4280();
      FUN_10b17dec8(auStack_ba8);
      func_0x00010b17dd64(&uStack_678);
      FUN_10b17d950(auStack_c40);
      func_0x00010b1ecee4();
      func_0x00010b121e00(auStack_bf8);
      FUN_10b1213b8(auStack_b90);
      uVar1 = cStack_558 == '\x01';
      if ((bool)uVar1) {
        func_0x00010b1ec240();
        uStack_678 = 0x10b1e4d0c;
        ppuStack_670 = &PTR_DAT_110cc42e8;
        func_0x00010b1d664c(unaff_x19 + 0x278,&uStack_678);
        func_0x000107c281f0(&uStack_678);
        func_0x00010b1edb84();
      }
      else {
        func_0x00010b1edb84();
        func_0x00010b1ec4b0();
        *(undefined1 *)(unaff_x19 + 0x278) = 0;
        *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
      }
      FUN_10b12130c(auStack_a10);
      goto LAB_10b1c3f80;
    }
    ppuStack_c48 = ppppuVar11[1];
    ppuStack_c50 = *ppppuVar11;
    if (ppppuVar11[1] != (undefined8 ***)0x0) {
      do {
        func_0x00010b1eb124();
      } while (extraout_w10_01 != 0);
    }
    param_3 = &pppuStack_968;
    FUN_10b1c2054(param_3,&ppuStack_c50,lStack_6c0);
    func_0x000107c27d78(&ppuStack_c50);
    uVar1 = uVar2;
    if ((int)param_3 != 0) {
      *(undefined8 ****)(lStack_6c0 + 0x30) = pppuVar5;
      ppuStack_688 = pppuVar5;
      if (iVar9 != 0) {
        func_0x00010b1ee218();
        uVar1 = 0;
        if (((bool)uVar2) &&
           (uVar1 = *(long *)(extraout_x8_02 + 0xe0) == *(long *)(extraout_x8_02 + 0xe8),
           !(bool)uVar1)) {
          FUN_10b1c428c(&pppuStack_5e0,extraout_x8_02 + 0xc0);
          param_3 = (undefined8 ****)pppuStack_5e0;
          FUN_10b24f3f8(pppuStack_5e0);
          FUN_10b250520(param_3 + 3);
          func_0x00010b24f428(pppuStack_5e0);
          FUN_10b1c4308(lStack_6c0 + 0xc0,pppuStack_5e0,1);
          FUN_10b1e4d20(&pppuStack_5e0);
        }
      }
      FUN_10b1c367c(unaff_x19,&pppuStack_968);
      goto LAB_10b1c3f80;
    }
  }
  func_0x00010b1ec4b0();
  *(undefined1 *)(unaff_x19 + 0x278) = 0;
  *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
LAB_10b1c3f80:
  ppppuVar4 = &pppuStack_968;
  FUN_10b1d6668();
  func_0x00010b1eaddc(uStack_368);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b1edb84();
    FUN_10b12130c(auStack_a10);
    ppppuVar7 = &pppuStack_968;
    FUN_10b1d6668();
    func_0x00010b1eb590();
    pcStack_c58 = FUN_10b1c41c0;
    if (((ulong)ppppuVar7[0x26] & 1) == 0) {
      ppppuVar11 = ppppuVar7 + 0x3d;
      pppuStack_c70 = param_3;
      pppuStack_c68 = ppppuVar4;
      ppuStack_c60 = &puStack_310;
      FUN_10b1e4d9c();
      if (ppppuVar11 == (undefined8 ****)0x0) {
        func_0x00010b1edb04();
        if (lStack_c80 == 0) {
          ppppuVar11 = (undefined8 ****)0x0;
        }
        else {
          FUN_10b1bebd0(auStack_c98);
          func_0x00010b1ed728();
          if ((bool)uVar1) {
            FUN_10b1c3338(auStack_cc8,extraout_x9 + 0xc0);
            func_0x00010b1218b4(ppppuVar7 + 0x3d,auStack_cc8);
            func_0x00010b121bb0(auStack_cc8);
            ppppuVar11 = ppppuVar7 + 0x3d;
            FUN_10b1e4d9c(ppppuVar11);
          }
          else {
            ppppuVar11 = (undefined8 ****)0x0;
          }
          func_0x00010b1ebe94();
        }
        func_0x00010b1ecf24();
      }
    }
    else {
      ppppuVar11 = ppppuVar7 + 0x12;
    }
    return ppppuVar11;
  }
  return ppppuVar4;
}



/* Entry: 10b1f6c94; end: 10b1f6d2b;  */

void FUN_10b1f6c94(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_2;
  FUN_10b1262f4();
  uVar2 = *puVar1;
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  FUN_10b1c3d30(param_1,uVar2,param_2,param_3,&uStack_60,param_5,param_6,param_7);
  func_0x000107c27d78(&uStack_60);
  return;
}



/* Entry: 10b1f6d2c; end: 10b1f6db3;  */

undefined8 FUN_10b1f6d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x00010b1f7e40();
  uVar1 = *param_1;
  func_0x00010b1f7e04();
  FUN_10b1c5708(uVar1);
  func_0x00010b1f7dc4();
  return uVar1;
}



/* Entry: 10b1f6db4; end: 10b1f6ea7;  */

void FUN_10b1f6db4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [72];
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  puVar1 = param_2;
  FUN_10b1262f4();
  uVar2 = *puVar1;
  auStack_a0[0] = *param_4;
  uStack_90 = *(undefined8 *)(param_4 + 4);
  uStack_98 = *(undefined8 *)(param_4 + 2);
  uStack_88 = *(undefined8 *)(param_4 + 6);
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  *(undefined8 *)(param_4 + 2) = 0;
  uStack_80 = *(undefined8 *)(param_4 + 8);
  uStack_78 = (undefined4)*(undefined8 *)(param_4 + 10);
  uStack_6c = *(undefined8 *)(param_4 + 0xd);
  uStack_74 = (undefined4)*(undefined8 *)(param_4 + 0xb);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0xb) >> 0x20);
  FUN_10b12110c(auStack_e8,param_7);
  FUN_10b1c7734(param_1,uVar2,param_2,param_3,auStack_a0,param_5,param_6,auStack_e8,param_8,param_9)
  ;
  FUN_10b121398(auStack_e8);
  func_0x00010b1f7e68();
  return;
}



/* Entry: 10b1f6ea8; end: 10b1f6f17;  */

undefined8 FUN_10b1f6ea8(void)

{
  undefined8 unaff_x22;
  undefined1 auStack_58 [24];
  
  func_0x00010b1f7d40();
  FUN_10b1f6f18(auStack_58);
  func_0x00010b1f7e80();
  FUN_10b1c837c();
  func_0x00010b1f7e24();
  return unaff_x22;
}



/* Entry: 10b1f6f18; end: 10b1f6f73;  */

void FUN_10b1f6f18(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10b1f7618(param_1,(param_2[1] - *param_2) / 0x18);
  FUN_10b1f7918(*param_2,param_2[1],param_1);
  return;
}



/* Entry: 10b1f6f74; end: 10b1f6fdf;  */

undefined8 FUN_10b1f6f74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010b1f7d80();
  uVar1 = *param_1;
  FUN_10b1f6f18(auStack_48);
  FUN_10b1c84d0(uVar1);
  func_0x00010b1f7e24();
  return uVar1;
}



/* Entry: 10b1f6fe0; end: 10b1f701b;  */

void FUN_10b1f6fe0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_c0 [40];
  long lStack_98;
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  func_0x00010b1f7df0();
  func_0x00010b1f7e10(*param_1);
  func_0x00010b1eb63c();
  func_0x00010b1ed980(&uStack_68);
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  uStack_40 = uStack_58;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_38 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  func_0x00010b1ec518();
  func_0x00010b1ebdbc(auStack_90);
  FUN_10b1baed4();
  if ((lStack_80 != 0) && (FUN_10b1bf250(lStack_80,&uStack_50), lStack_80 != 0)) {
    *(undefined1 *)(lStack_80 + 0x20) = 0;
    func_0x00010b1ebdbc(&lStack_98);
    FUN_10b1be290();
    if (lStack_98 != 0) {
      func_0x00010b1ebcb4();
      FUN_10b1be194(auStack_90,auStack_c0);
      func_0x00010b1eb910();
      __ZNSt3__117__assoc_sub_state4waitEv(lStack_98);
    }
    func_0x00010b1ec230();
  }
  func_0x00010b1ebe64();
  func_0x00010b1ece94();
  return;
}



/* Entry: 10b1f701c; end: 10b1f7063;  */

void FUN_10b1f701c(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 in_x4;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 *puVar4;
  int extraout_w10;
  int extraout_w11;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [80];
  undefined4 uStack_160;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  long lStack_d8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  func_0x00010b1f7d40();
  lVar3 = *param_1;
  puVar4 = &uStack_1e0;
  func_0x00010b1ee250();
  lVar1 = lVar3;
  func_0x00010b1eaf40();
  uStack_68 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  FUN_10b1e3630(&uStack_100,lVar3 + 8);
  lStack_f0 = lVar3;
  uStack_e0 = in_x4;
  lStack_d8 = lVar1;
  FUN_10b1e3630(&uStack_1e0,lVar3 + 8);
  lStack_1d0 = lVar3;
  func_0x00010b1ec9d4(auStack_1c8);
  FUN_10b17d5c4(auStack_1b0,unaff_x23);
  puVar2 = auStack_158;
  uStack_160 = unaff_w22;
  func_0x00010b1ec1fc();
  lStack_138 = lStack_f8;
  uStack_140 = uStack_100;
  if (lStack_f8 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  lStack_130 = lStack_f0;
  lStack_118 = lStack_d8;
  uStack_120 = uStack_e0;
  pcStack_c8 = FUN_10b1ea1ec;
  ppuStack_c0 = &PTR_FUN_110cc4a50;
  uStack_110 = in_x4;
  func_0x00010b1ecea4();
  puVar2[1] = uStack_1d8;
  *puVar2 = uStack_1e0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  puVar2[2] = lStack_1d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2 + 3,auStack_1c8);
  FUN_10b17d5c4(puVar2 + 6,auStack_1b0);
  *(undefined4 *)(puVar2 + 0x10) = uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (puVar2 + 0x11,auStack_158);
  puVar2[0x15] = lStack_138;
  puVar2[0x14] = uStack_140;
  if (lStack_138 != 0) {
    do {
      func_0x00010b1eaf98();
      puVar4 = (undefined8 *)extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uVar7 = *(undefined8 *)((long)puVar4 + 0xb0);
  uVar6 = *(undefined8 *)((long)puVar4 + 200);
  uVar5 = *(undefined8 *)((long)puVar4 + 0xc0);
  puVar2[0x17] = *(undefined8 *)((long)puVar4 + 0xb8);
  puVar2[0x16] = uVar7;
  puVar2[0x19] = uVar6;
  puVar2[0x18] = uVar5;
  puVar2[0x1a] = uStack_110;
  puStack_b8 = puVar2;
  func_0x00010b1ed83c();
  func_0x00010b1ecb00();
  func_0x00010b1eafb4(ppuStack_c0);
  FUN_10b1d1a90(&uStack_1e0);
  func_0x00010b1edbf4();
  func_0x00010b1eaddc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1eafb4(ppuStack_c0);
    FUN_10b1d1a90(&uStack_1e0);
    func_0x00010b1edbf4();
    do {
      func_0x00010b1eb590();
    } while( true );
  }
  return;
}



/* Entry: 10b1f7064; end: 10b1f7127;  */

/* WARNING: Removing unreachable block (ram,0x00010b1d0638) */

void FUN_10b1f7064(undefined8 *param_1)

{
  undefined1 auStack_40 [16];
  
  func_0x00010b1f7d30();
  func_0x00010b1f7d98(*param_1);
  FUN_10b1d04a8(auStack_40);
  FUN_10b1c1fcc(&stack0xffffffffffffffd0,auStack_40);
  func_0x00010b1eb908();
  func_0x00010b1ec934();
  func_0x00010b1ecff8();
  return;
}



/* Entry: 10b1f7128; end: 10b1f71a3;  */

undefined1  [16] FUN_10b1f7128(void)

{
  undefined1 *puVar1;
  ulong unaff_x22;
  undefined1 auVar2 [16];
  undefined1 auStack_90 [80];
  
  puVar1 = auStack_90;
  func_0x00010b1f7d40();
  FUN_10b202630(auStack_90);
  func_0x00010b1f7e80();
  FUN_10b1c8538();
  func_0x00010b121e00(auStack_90);
  auVar2._8_8_ = unaff_x22 & 0xff;
  auVar2._0_8_ = puVar1;
  return auVar2;
}



/* Entry: 10b1f71a4; end: 10b1f7263;  */

undefined8 FUN_10b1f71a4(undefined8 *param_1)

{
  undefined8 *in_x5;
  undefined8 uVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [80];
  
  func_0x00010b1f7e40();
  uVar1 = *param_1;
  FUN_10b202630(auStack_a0);
  uStack_b8 = in_x5[1];
  uStack_c0 = *in_x5;
  uStack_b0 = in_x5[2];
  in_x5[1] = 0;
  in_x5[2] = 0;
  *in_x5 = 0;
  FUN_10b1c9414(uVar1);
  func_0x000107c27914(&uStack_c0);
  func_0x00010b121e00(auStack_a0);
  return uVar1;
}



/* Entry: 10b1f7264; end: 10b1f72cb;  */

void FUN_10b1f7264(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long extraout_x9;
  long lVar14;
  undefined4 *puVar15;
  undefined4 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 in_register_00005008;
  undefined8 uVar16;
  undefined1 auStack_3f0 [80];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_390;
  undefined1 auStack_388 [24];
  undefined8 uStack_370;
  undefined8 uStack_368;
  long lStack_360;
  undefined4 uStack_358;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 *puStack_328;
  undefined4 *puStack_320;
  undefined4 *puStack_318;
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [64];
  undefined1 uStack_2b8;
  undefined1 auStack_2a8 [128];
  long lStack_228;
  char cStack_220;
  
  uVar5 = param_4;
  func_0x00010b1f7df0();
  func_0x00010b1f7e10(*param_2);
  func_0x00010b1ec024();
  func_0x00010b1eb434();
  if (extraout_x8 == 0) {
    return;
  }
  func_0x00010b1ebbd4(*(undefined1 *)(param_4 + 0x17));
  if (extraout_x8_00 == 0) {
    return;
  }
  func_0x00010b1eb8e4();
  func_0x00010b1ebe54();
  if ((uVar5 & 1) != 0) {
    return;
  }
  FUN_10b202630(auStack_2f8,param_4);
  func_0x00010b1eb6f8(auStack_2a8);
  FUN_10b1c52c8();
  func_0x00010b121e00(auStack_2f8);
  if (cStack_220 != '\x01' || 0 < lStack_228) goto LAB_10b1c7ec8;
  auStack_2f8[0] = 0;
  uStack_2b8 = 0;
  puVar6 = auStack_2a8;
  FUN_10b1c4ae8();
  if (puVar6 != (undefined1 *)0x0) {
    func_0x00010b11fdec(auStack_2f8);
  }
  FUN_10b1bfa28(auStack_310,auStack_2f8);
  puStack_328 = (undefined4 *)0x0;
  puStack_320 = (undefined4 *)0x0;
  puStack_318 = (undefined4 *)0x0;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_330 = 0;
  func_0x00010b1eb6f8(&uStack_370);
  func_0x00010b1eb674();
  if (lStack_360 == 0) {
    puVar8 = &uStack_370;
LAB_10b1c7ea8:
    func_0x00010b1d3e60(puVar8);
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_340);
    lVar1 = *(long *)(lStack_360 + 0x50);
    puVar13 = unaff_x20;
    for (lVar10 = *(long *)(lStack_360 + 0x48); puVar11 = puStack_320, lVar10 != lVar1;
        lVar10 = lVar10 + 0x88) {
      if (*(long *)(lVar10 + 0x30) == 0) {
        if (puStack_320 < puStack_318) {
          func_0x00010b1edd84();
          puStack_320 = puVar11 + 0x10;
        }
        else {
          lVar14 = (long)puStack_320 - (long)puStack_328;
          uVar5 = (lVar14 >> 6) + 1;
          if (uVar5 >> 0x3a != 0) {
            FUN_10b1d7554();
LAB_10b1c8044:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1c8048);
            (*pcVar3)();
          }
          uVar12 = (long)puStack_318 - (long)puStack_328 >> 5;
          if (uVar12 <= uVar5) {
            uVar12 = uVar5;
          }
          if (0x7fffffffffffffbf < (ulong)((long)puStack_318 - (long)puStack_328)) {
            uVar12 = 0x3ffffffffffffff;
          }
          if (uVar12 == 0) {
            lVar7 = 0;
          }
          else {
            if (uVar12 >> 0x3a != 0) {
              func_0x000104bd35f4();
              goto LAB_10b1c8044;
            }
            lVar7 = uVar12 << 6;
            __Znwm();
          }
          lVar14 = lVar7 + lVar14;
          func_0x00010b1edd84();
          puVar2 = puStack_320;
          puVar15 = puStack_328;
          puVar9 = (undefined4 *)((long)puStack_328 + (lVar14 - (long)puStack_320));
          puVar11 = puVar9;
          puVar13 = puStack_328;
          while (puVar13 != puVar2) {
            func_0x00010b1ec614(puVar11);
            uVar16 = *(undefined8 *)(extraout_x9 + 0x2c);
            *(undefined8 *)(extraout_x8_01 + 0x34) = *(undefined8 *)(extraout_x9 + 0x34);
            *(undefined8 *)(extraout_x8_01 + 0x2c) = uVar16;
            *(undefined8 *)(extraout_x8_01 + 0x28) = in_register_00005008;
            *(undefined8 *)(extraout_x8_01 + 0x20) = param_1;
            puVar11 = (undefined4 *)(extraout_x8_01 + 0x40);
            puVar13 = (undefined4 *)(extraout_x9 + 0x40);
          }
          for (; puVar13 = puStack_328, puVar15 != puVar2; puVar15 = puVar15 + 0x10) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar15 + 2);
          }
          puVar11 = (undefined4 *)(lVar14 + 0x40);
          puStack_328 = puVar9;
          puStack_320 = puVar11;
          puStack_318 = (undefined4 *)(lVar7 + uVar12 * 0x40);
          FUN_10b1d7560(&stack0xffffffffffffffd0);
          puStack_320 = puVar11;
        }
      }
    }
    func_0x00010b1d3e60(&uStack_370);
    uVar4 = puStack_328 == puStack_320;
    if (!(bool)uVar4) {
      puVar8 = &uStack_340;
      func_0x000107c278d0(puVar8,auStack_2a8);
      if (((ulong)puVar8 & 1) == 0) {
        func_0x00010b1ed4c4();
        func_0x00010b1eb674(&stack0xffffffffffffffd0,unaff_x21,unaff_x20,param_4);
        if (((puVar13 != (undefined4 *)0x0) &&
            (func_0x00010b1ec3bc(), puVar11 = puStack_320, (bool)uVar4)) &&
           (puVar15 = puStack_328, *(long *)(extraout_x8_02 + 0x38) < 1)) {
          for (; puVar15 != puVar11; puVar15 = puVar15 + 0x10) {
            __ZNSt3__16chrono12system_clock3nowEv();
            func_0x000107c27994(auStack_388,auStack_310);
            func_0x00010b1ed77c();
            func_0x00010b1ede04();
            func_0x000107c27914();
            func_0x00010b1ed77c();
            FUN_10b1be404();
          }
          puVar6 = &stack0xffffffffffffffd0;
          func_0x00010b1d3e60();
          func_0x00010b1ed4c4();
          func_0x00010b1ed77c(&stack0xffffffffffffffd0);
          func_0x00010b1eb674();
          if (puVar13 != (undefined4 *)0x0) {
            __ZNSt3__16chrono12system_clock3nowEv();
            puVar15 = puStack_320;
            for (puVar11 = puStack_328; puVar11 != puVar15; puVar11 = puVar11 + 0x10) {
              func_0x00010b1eca94(&uStack_3a0);
              uStack_358 = *puVar11;
              uStack_368 = uStack_398;
              uStack_370 = uStack_3a0;
              lStack_360 = lStack_390;
              uStack_398 = 0;
              lStack_390 = 0;
              uStack_3a0 = 0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_3a0);
              puVar9 = puVar13;
              FUN_10b1bf250(puVar13,&uStack_370);
              if ((puVar9 != (undefined4 *)0x0) && (*(long *)(puVar9 + 0xc) == 0)) {
                *(undefined1 **)(puVar9 + 0xc) = puVar6;
                func_0x00010b1ed77c();
                FUN_10b1be404();
              }
              func_0x00010b1ebf28();
            }
            lVar10 = *(long *)(puVar13 + 0x12);
            FUN_10b1bf2b0(lVar10,*(undefined8 *)(puVar13 + 0x14));
            if (lVar10 == 0) {
              func_0x00010b1ed77c(auStack_3f0);
              func_0x00010b1ebe44();
              FUN_10b1d6520(auStack_3f0);
              func_0x00010b1ec750();
            }
          }
        }
        puVar8 = (undefined8 *)&stack0xffffffffffffffd0;
        goto LAB_10b1c7ea8;
      }
    }
  }
  func_0x00010b1ed294();
  FUN_10b1d75a4(&puStack_328);
  func_0x000107c27914(auStack_310);
  FUN_10b121398(auStack_2f8);
LAB_10b1c7ec8:
  func_0x00010b121af0(auStack_2a8);
  return;
}



/* Entry: 10b1f72cc; end: 10b1f731f;  */

void FUN_10b1f72cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong in_x4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined1 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [24];
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 uStack_d8;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_68;
  
  func_0x00010b1f7e34();
  FUN_10b1262f4();
  puVar6 = (undefined1 *)*param_1;
  puVar5 = &uStack_120;
  puVar9 = &uStack_120;
  puVar7 = unaff_x19;
  func_0x00010b1eaf40();
  puVar10 = puVar6;
  uStack_68 = extraout_x8;
  if (((((puVar7[0x1c2] & 1) == 0) && (func_0x00010b1eb434(), puVar10 = puVar6, extraout_x8_00 != 0)
       ) && ((puVar7[0x88] & 1) != 0)) &&
     (in_ZR = *(long *)(puVar7 + 0x80) == 0, *(long *)(puVar7 + 0x80) < 1)) {
    func_0x00010b1eb8f0();
    FUN_10b1c41c0();
    puVar10 = puVar6;
    unaff_x21 = unaff_x20;
    if (puVar6 != (undefined1 *)0x0) {
      if ((((byte)puVar6[0x10] >> 4 & 1) == 0) ||
         (puVar10 = unaff_x19,
         FUN_10b1c9560(unaff_x19,*(undefined4 *)(*(long *)(puVar6 + 0x70) + 0x88)),
         ((ulong)puVar10 & 0x100000000) == 0)) {
        if ((((byte)puVar6[0x10] >> 4 & 1) == 0) || (*(int *)(*(long *)(puVar6 + 0x70) + 0x88) != 0)
           ) goto LAB_10b1c548c;
        uVar13 = *(uint *)(*(long *)(puVar6 + 0x70) + 0x70);
        puVar10 = (undefined1 *)(ulong)uVar13;
        FUN_10b24a690();
        uVar11 = (int)puVar10 - 1;
        in_ZR = uVar11 == 3;
        if ((3 < uVar11) ||
           (puVar10 = unaff_x19,
           FUN_10b1c9560(unaff_x19,*(undefined4 *)(&UNK_10ddd05c0 + (ulong)uVar11 * 4)),
           (ulong)puVar10 >> 0x20 == 0)) goto LAB_10b1c548c;
        uVar11 = uVar13 & 0xffffff00;
        uVar13 = uVar13 & 0xff;
        uVar12 = 1;
      }
      else {
        uVar11 = 0;
        uVar13 = 0;
        uVar12 = 0;
        puVar10 = (undefined1 *)((ulong)puVar10 & 0x1ffffffff);
      }
      puVar7[0x1c2] = 1;
      func_0x00010b1ecd44(&uStack_120);
      func_0x00010b1ec1fc(auStack_110);
      plVar3 = &lStack_f8;
      func_0x00010b1ec76c();
      uStack_dc = uVar13 | uVar11;
      uStack_e0 = SUB84(puVar10,0);
      lVar8 = *(long *)(unaff_x19 + 0x6c8);
      uStack_d8 = uVar12;
      func_0x00010b1ecd34();
      in_ZR = lVar8 == *plVar3;
      if ((bool)in_ZR) {
        FUN_10b1c9600(&uStack_120);
      }
      else {
        uStack_c8 = 0x10b1e6a84;
        ppuStack_c0 = &PTR_FUN_110cc4478;
        puVar4 = (undefined8 *)0x50;
        __Znwm();
        puVar4[1] = uStack_118;
        *puVar4 = uStack_120;
        uStack_120 = 0;
        uStack_118 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (puVar4 + 2,auStack_110);
        uVar2 = uStack_e8;
        uVar1 = uStack_f0;
        lVar8 = lStack_f8;
        uStack_f0 = 0;
        uStack_e8 = 0;
        lStack_f8 = 0;
        *(undefined1 *)(puVar4 + 9) = uStack_d8;
        puVar9 = &uStack_c8;
        puVar4[6] = uVar1;
        puVar4[5] = lVar8;
        puVar4[7] = uVar2;
        puVar4[8] = CONCAT44(uStack_dc,uStack_e0);
        puStack_b8 = puVar4;
        func_0x00010b1ed83c();
        func_0x00010b1ecb00();
        func_0x00010b1eafb4(ppuStack_c0);
      }
      FUN_10b1c9768();
      puVar10 = (undefined1 *)puVar5;
      unaff_x21 = puVar9;
    }
  }
LAB_10b1c548c:
  func_0x00010b1eaddc(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eafb4(ppuStack_c0);
  FUN_10b1c9768(&uStack_120);
  func_0x00010b1eb590();
  func_0x00010b1ee250();
  func_0x00010b1eb424();
  if ((in_x4 & 1) == 0) {
    FUN_10b1c5424(unaff_x21);
  }
  func_0x00010b1eb6f8(puVar10);
  FUN_10b1c51e8();
  func_0x00010b1eb6f8();
  FUN_10b1c545c();
  return;
}



/* Entry: 10b1f7320; end: 10b1f744f;  */

undefined *** FUN_10b1f7320(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined8 uStack_b0;
  long alStack_a8 [5];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = *param_2;
  (**(code **)(param_2[1] + 0x10))(alStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_80,param_1);
  pcStack_68 = FUN_10b1f7b88;
  ppuStack_60 = &PTR_FUN_110cc4d80;
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = uStack_b0;
  (**(code **)(alStack_a8[0] + 0x10))(puVar1 + 1,alStack_a8);
  puVar1[7] = uStack_78;
  puVar1[6] = uStack_80;
  puVar1[8] = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  puStack_58 = puVar1;
  FUN_10b1f7450(&uStack_b0);
  FUN_10b1d0d78(*(undefined8 *)(param_1 + 0x18),&pcStack_68);
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  pppuVar2 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  func_0x00010b1f7da8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar2 + 6);
  (*(code *)*pppuVar2[1])();
  return pppuVar2;
}



/* Entry: 10b1f7450; end: 10b1f7483;  */

long FUN_10b1f7450(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10b1f7484; end: 10b1f7493;  */

long * FUN_10b1f7484(long param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  long *aplStack_30 [2];
  
  func_0x00010b1ebb5c(auStack_48,*(undefined8 *)(param_1 + 0x18),param_1,param_2);
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x00010b1ec8a4(aplStack_30);
  FUN_10b1d072c();
  FUN_10b127f28(&uStack_58);
  func_0x00010b1eb9bc();
  if (aplStack_30[0] == (long *)0x0) {
    aplStack_30[0] = (long *)0x0;
  }
  else {
    (**(code **)(*aplStack_30[0] + 0x90))();
  }
  func_0x00010b125864(aplStack_30);
  return aplStack_30[0];
}



/* Entry: 10b1f7494; end: 10b1f74cf;  */

void FUN_10b1f7494(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x21;
  
  func_0x00010b1f7e4c();
  FUN_10b1cfcd0(*param_1 + 0x80,FUN_10b1fabf4,0,&stack0xffffffffffffffd8,&stack0xffffffffffffffd0);
  if ((char)unaff_x21[3] == '\x01') {
    lVar1 = *unaff_x21;
    lVar2 = unaff_x21[1];
    if (lVar1 != lVar2) {
      FUN_10b1daf5c(lVar1,lVar2,LZCOUNT(lVar2 - lVar1 >> 6) << 1 ^ 0x7e,1);
    }
  }
  return;
}



/* Entry: 10b1f74d0; end: 10b1f74f7;  */

void FUN_10b1f74d0(undefined8 *param_1)

{
  ulong uVar1;
  long **pplVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  char extraout_w8;
  byte extraout_w8_00;
  int iVar10;
  undefined8 extraout_x8;
  long ***extraout_x8_00;
  long extraout_x8_01;
  long *****ppppplVar11;
  long *****extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  long ****pppplVar12;
  long ****extraout_x8_07;
  long ***ppplVar13;
  long ***extraout_x8_08;
  long ***extraout_x8_09;
  long ***extraout_x8_10;
  long *****extraout_x9;
  long *****ppppplVar14;
  long *****extraout_x9_00;
  ulong uVar15;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  undefined8 *puVar16;
  long *****extraout_x9_03;
  long *****ppppplVar17;
  long ****pppplVar18;
  long ****extraout_x9_04;
  long ****extraout_x9_05;
  ulong uVar19;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  long *****extraout_x10;
  ulong extraout_x10_00;
  long ***ppplVar20;
  long ***extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  long *****ppppplVar21;
  long *****extraout_x11;
  long *****extraout_x11_00;
  long ****pppplVar22;
  long ****pppplVar23;
  long ****extraout_x11_01;
  long ****extraout_x11_02;
  long *****extraout_x12;
  long ***extraout_x12_00;
  long *****ppppplVar24;
  long *plVar25;
  long ****pppplVar26;
  ulong unaff_x19;
  undefined8 unaff_x20;
  long ****pppplVar27;
  long unaff_x21;
  long ****pppplVar28;
  long ***ppplVar29;
  ulong uVar30;
  long *****ppppplVar31;
  long ****pppplVar32;
  long *****unaff_x25;
  ulong uVar33;
  long *****ppppplVar34;
  ulong uStack_440;
  long ****pppplStack_438;
  long ****pppplStack_430;
  long ***ppplStack_428;
  undefined4 uStack_420;
  long ****pppplStack_410;
  long ****pppplStack_408;
  long ***ppplStack_400;
  long **pplStack_3f0;
  long **pplStack_3e8;
  long **pplStack_3e0;
  byte bStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  char cStack_3b8;
  long alStack_3a8 [10];
  undefined1 auStack_358 [296];
  long **pplStack_230;
  long ***ppplStack_228;
  long ***ppplStack_220;
  undefined1 auStack_218 [16];
  undefined1 uStack_208;
  long alStack_200 [10];
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long ****pppplStack_198;
  long ****pppplStack_190;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ****pppplStack_168;
  byte bStack_158;
  int iStack_120;
  ulong auStack_f0 [12];
  int iStack_90;
  
  func_0x00010b1f7e54();
  func_0x00010b1ec024(*param_1);
  func_0x00010b1eb8e4();
  func_0x00010b1eaf40();
  func_0x000107c27f70(alStack_200);
  uStack_440 = uStack_440 & 0xffffffffffffff00;
  pppplStack_430 = (long ****)((ulong)pppplStack_430 & 0xffffffffffffff00);
  func_0x00010bccbc98(alStack_3a8,unaff_x21 + 0x80,&UNK_10f73833e,0x3e);
  ppplVar29 = *(long ****)(alStack_3a8[0] + 8);
  pplStack_3e8 = *(long ***)(alStack_3a8[0] + 0x10);
  pplStack_3f0 = (long **)ppplVar29;
  if ((long ***)pplStack_3e8 != (long ***)0x0) {
    do {
      func_0x00010b1eaf98();
      ppplVar29 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fadb4(auStack_358,ppplVar29[2],alStack_200,unaff_x19 & 0xffffffff | 0x100000000);
  FUN_10b1d3ecc(&pplStack_230,auStack_358);
  ppplStack_178 = ppplStack_228;
  ppplStack_180 = (long ***)pplStack_230;
  ppplStack_170 = ppplStack_220;
  ppplStack_220 = (long ***)0x0;
  ppplStack_228 = (long ***)0x0;
  pplStack_230 = (long **)0x0;
  pppplStack_168._0_1_ = 1;
  FUN_10b1d8ae4(&pplStack_230);
  FUN_10b1d4718(auStack_358);
  FUN_10b1b7824(&pplStack_3f0);
  func_0x00010bccbe4c(alStack_3a8);
  func_0x00010b1ecedc();
  FUN_10b1d4780(auStack_f0,&ppplStack_180);
  func_0x00010b1ecf9c();
  if (iStack_90 == 1) {
    func_0x00010b1d47e4(auStack_f0);
    ppplStack_180 = (long ***)((ulong)ppplStack_180 & 0xffffffffffffff00);
    pppplStack_168 = (long ****)((ulong)pppplStack_168._1_7_ << 8);
    if (iStack_90 != 1) goto LAB_10b1ce87c;
    FUN_10b1d481c(&uStack_3d0,&ppplStack_180);
  }
  else {
    ppplStack_180 = (long ***)((ulong)ppplStack_180 & 0xffffffffffffff00);
    pppplStack_168 = (long ****)((ulong)pppplStack_168._1_7_ << 8);
LAB_10b1ce87c:
    puVar8 = auStack_f0;
    func_0x00010b1d4800();
    uStack_3d0 = uStack_3d0 & 0xffffffffffffff00;
    cStack_3b8 = '\0';
    if ((char)puVar8[3] == '\x01') {
      uStack_3c8 = puVar8[1];
      uStack_3d0 = *puVar8;
      uStack_3c0 = puVar8[2];
      func_0x00010b1eb5fc();
      cStack_3b8 = extraout_w8;
    }
  }
  func_0x00010b1ecf9c();
  func_0x00010b1ebfa4(auStack_f0);
  func_0x00010b1ec6d0();
  func_0x000107c279a4(alStack_200);
  func_0x000107c27f70(&pppplStack_410,unaff_x20);
  auStack_218[0] = 0;
  uStack_208 = 0;
  func_0x00010bccbc98(alStack_200,unaff_x21 + 0x80,&UNK_10f738301,0x3c);
  lVar9 = *(long *)(alStack_200[0] + 8);
  lStack_1a8 = *(long *)(alStack_200[0] + 0x10);
  lStack_1b0 = lVar9;
  if (lStack_1a8 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar9 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  FUN_10b1fad4c(auStack_f0,*(undefined8 *)(lVar9 + 0x10),&pppplStack_410,
                unaff_x19 & 0xffffffff | 0x100000000);
  FUN_10b1d4fe0(&uStack_1a0,auStack_f0);
  pppplStack_438 = pppplStack_198;
  uStack_440 = uStack_1a0;
  pppplStack_430 = pppplStack_190;
  pppplStack_190 = (long ****)0x0;
  pppplStack_198 = (long ****)0x0;
  uStack_1a0 = 0;
  ppplStack_428._0_1_ = 1;
  FUN_10b1d4f78(&uStack_1a0);
  FUN_10b1d57fc(auStack_f0);
  FUN_10b1b7824(&lStack_1b0);
  func_0x00010bccbe4c(alStack_200);
  func_0x00010bccbdb4(alStack_200);
  FUN_10b1d5864(&ppplStack_180,&uStack_440);
  func_0x00010b1ed178();
  if (iStack_120 == 1) {
    func_0x00010b1d58c8(&ppplStack_180);
    uStack_440 = uStack_440 & 0xffffffffffffff00;
    ppplStack_428 = (long ***)((ulong)ppplStack_428._1_7_ << 8);
    if (iStack_120 != 1) goto LAB_10b1ce9d8;
    FUN_10b1d5900(&pplStack_3f0,&uStack_440);
  }
  else {
    uStack_440 = uStack_440 & 0xffffffffffffff00;
    ppplStack_428 = (long ***)((ulong)ppplStack_428._1_7_ << 8);
LAB_10b1ce9d8:
    pppplVar12 = &ppplStack_180;
    func_0x00010b1d58e4();
    func_0x00010b1ee4c4();
    if (*(char *)(pppplVar12 + 3) == '\x01') {
      pplStack_3e8 = (long **)pppplVar12[1];
      pplStack_3f0 = (long **)*pppplVar12;
      pplStack_3e0 = (long **)pppplVar12[2];
      func_0x00010b1eb5fc();
      bStack_3d8 = extraout_w8_00;
    }
  }
  func_0x00010b1ed178();
  func_0x00010b1ec228(&ppplStack_180);
  FUN_10b1b78d0(auStack_218);
  func_0x00010b1eda44();
  uVar33 = uStack_3c8;
  uVar6 = 0;
  if ((((cStack_3b8 == '\x01') && (uVar6 = uStack_3d0 == uStack_3c8, !(bool)uVar6)) &&
      ((bStack_3d8 & 1) != 0)) && (uVar6 = pplStack_3f0 == pplStack_3e8, !(bool)uVar6)) {
    pppplStack_438 = (long ****)0x0;
    uStack_440 = 0;
    ppplStack_428 = (long ***)0x0;
    pppplStack_430 = (long ****)0x0;
    uStack_420 = 0x3f800000;
    uVar19 = uStack_3d0;
    while( true ) {
      pplVar2 = pplStack_3e8;
      uVar5 = (long)(uVar19 - uVar33) < 0;
      uVar6 = uVar19 == uVar33;
      ppplVar29 = (long ***)pplStack_3f0;
      if ((bool)uVar6) break;
      func_0x0001072e787c(uVar19 + 0x20);
      FUN_10b1bcb0c(&pppplStack_410,uVar19);
      func_0x00010b1eca94(&ppplStack_180);
      pppplStack_168 = pppplStack_410;
      pppplStack_410 = (long ****)0x0;
      FUN_10b1de9cc(&pppplStack_410);
      ppppplVar17 = (long *****)&ppplStack_428;
      func_0x000107c278c4(ppppplVar17,&ppplStack_180);
      ppppplVar14 = (long *****)pppplStack_438;
      ppppplVar34 = ppppplVar17;
      if ((long *****)pppplStack_438 != (long *****)0x0) {
        uVar30 = (long)pppplStack_438 - 1;
        if (((ulong)pppplStack_438 & uVar30) == 0) {
          unaff_x25 = (long *****)(uVar30 & (ulong)ppppplVar17);
          uVar6 = true;
          uVar5 = false;
        }
        else {
          uVar5 = (long)ppppplVar17 - (long)pppplStack_438 < 0;
          uVar6 = ppppplVar17 == (long *****)pppplStack_438;
          unaff_x25 = ppppplVar17;
          if (pppplStack_438 <= ppppplVar17) {
            uVar1 = 0;
            if ((long *****)pppplStack_438 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar17 / (ulong)pppplStack_438;
            }
            unaff_x25 = (long *****)((long)ppppplVar17 - uVar1 * (long)pppplStack_438);
          }
        }
        plVar25 = *(long **)(uStack_440 + (long)unaff_x25 * 8);
        if (plVar25 != (long *)0x0) {
          do {
            while( true ) {
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) goto LAB_10b1ceb48;
              ppppplVar11 = (long *****)plVar25[1];
              uVar5 = (long)ppppplVar11 - (long)ppppplVar17 < 0;
              uVar6 = ppppplVar11 == ppppplVar17;
              if (!(bool)uVar6) break;
              ppppplVar34 = (long *****)(plVar25 + 2);
              func_0x000107c278d0(ppppplVar34,&ppplStack_180);
              if (((ulong)ppppplVar34 & 1) != 0) goto LAB_10b1cedb4;
            }
            if (((ulong)ppppplVar14 & uVar30) == 0) {
              ppppplVar11 = (long *****)((ulong)ppppplVar11 & uVar30);
            }
            else if (ppppplVar14 <= ppppplVar11) {
              uVar1 = 0;
              if (ppppplVar14 != (long *****)0x0) {
                uVar1 = (ulong)ppppplVar11 / (ulong)ppppplVar14;
              }
              ppppplVar11 = (long *****)((long)ppppplVar11 - uVar1 * (long)ppppplVar14);
            }
            uVar5 = (long)ppppplVar11 - (long)unaff_x25 < 0;
            uVar6 = ppppplVar11 == unaff_x25;
          } while ((bool)uVar6);
        }
      }
LAB_10b1ceb48:
      func_0x00010b1ec5d4();
      ppplStack_400 = (long ***)0x1;
      pppplStack_410 = (long ****)ppppplVar34;
      pppplStack_408 = (long ****)&pppplStack_430;
      *ppppplVar34 = (long ****)0x0;
      ppppplVar34[1] = (long ****)ppppplVar17;
      ppppplVar34[3] = (long ****)ppplStack_178;
      ppppplVar34[2] = (long ****)ppplStack_180;
      pppplVar12 = pppplStack_168;
      ppplVar29 = ppplStack_170;
      ppplStack_178 = (long ***)0x0;
      ppplStack_180 = (long ***)0x0;
      ppplStack_170 = (long ***)0x0;
      pppplStack_168 = (long ****)0x0;
      ppppplVar34[4] = (long ****)ppplVar29;
      ppppplVar34[5] = pppplVar12;
      ppppplVar11 = ppppplVar34;
      func_0x00010b1ebbc8(ppplStack_428);
      if ((ppppplVar14 == (long *****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar5)) {
        bVar4 = (long *****)0x2 < ppppplVar14;
        bVar7 = ppppplVar14 == (long *****)0x3;
        func_0x00010b1eaeec((long)ppppplVar14 << 1);
        ppppplVar31 = extraout_x8_02;
        if (!bVar4 || bVar7) {
          ppppplVar31 = extraout_x9;
        }
        if ((long)ppppplVar31 - 1U == 0) {
          ppppplVar31 = (long *****)0x2;
        }
        else if (((ulong)ppppplVar31 & (long)ppppplVar31 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          ppppplVar11 = ppppplVar31;
        }
        pppplVar12 = pppplStack_438;
        if (pppplStack_438 < ppppplVar31) {
LAB_10b1cebf4:
          if ((ulong)ppppplVar31 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1cf2d0;
          }
          lVar9 = (long)ppppplVar31 << 3;
          __Znwm(lVar9);
          func_0x00010b1e7d28(&uStack_440,lVar9);
          ppppplVar14 = (long *****)0x0;
          uVar30 = uStack_440;
          pppplStack_438 = (long ****)ppppplVar31;
          while (ppppplVar31 != ppppplVar14) {
            func_0x00010b1ebda4();
            uVar30 = extraout_x8_03;
            ppppplVar14 = extraout_x9_00;
          }
          ppppplVar14 = ppppplVar31;
          if ((long *****)pppplStack_430 != (long *****)0x0) {
            ppppplVar11 = (long *****)pppplStack_430[1];
            uVar15 = (long)ppppplVar31 - 1;
            uVar1 = 0;
            if (ppppplVar31 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar11 / (ulong)ppppplVar31;
            }
            ppppplVar21 = ppppplVar11;
            if (ppppplVar31 <= ppppplVar11) {
              ppppplVar21 = (long *****)((long)ppppplVar11 - uVar1 * (long)ppppplVar31);
            }
            if (((ulong)ppppplVar31 & uVar15) == 0) {
              ppppplVar21 = (long *****)((ulong)ppppplVar11 & uVar15);
            }
            *(long ******)(uVar30 + (long)ppppplVar21 * 8) = &pppplStack_430;
            ppppplVar11 = (long *****)pppplStack_430;
            while (ppppplVar11 = (long *****)*ppppplVar11, ppppplVar11 != (long *****)0x0) {
              ppppplVar24 = (long *****)ppppplVar11[1];
              if (((ulong)ppppplVar31 & uVar15) == 0) {
                ppppplVar24 = (long *****)((ulong)ppppplVar24 & uVar15);
              }
              else if (ppppplVar31 <= ppppplVar24) {
                uVar1 = 0;
                if (ppppplVar31 != (long *****)0x0) {
                  uVar1 = (ulong)ppppplVar24 / (ulong)ppppplVar31;
                }
                ppppplVar24 = (long *****)((long)ppppplVar24 - uVar1 * (long)ppppplVar31);
              }
              if (ppppplVar24 != ppppplVar21) {
                if (*(long *)(uVar30 + (long)ppppplVar24 * 8) == 0) {
                  func_0x00010b1ebf54();
                  uVar30 = extraout_x8_05;
                  uVar15 = extraout_x9_02;
                  ppppplVar11 = extraout_x12;
                  ppppplVar21 = extraout_x11_00;
                }
                else {
                  func_0x00010b1ead88();
                  uVar30 = extraout_x8_04;
                  uVar15 = extraout_x9_01;
                  ppppplVar11 = extraout_x10;
                  ppppplVar21 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          ppppplVar14 = (long *****)pppplStack_438;
          if (ppppplVar31 < pppplStack_438) {
            func_0x00010b1ebdb0((float)ppplStack_428,uStack_420);
            if ((pppplVar12 < (long *****)0x3) || (((ulong)pppplVar12 & (long)pppplVar12 - 1U) != 0)
               ) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x00010b1ead68();
            }
            if (ppppplVar31 <= ppppplVar11) {
              ppppplVar31 = ppppplVar11;
            }
            ppppplVar14 = (long *****)pppplStack_438;
            if (ppppplVar31 < pppplVar12) {
              if (ppppplVar31 != (long *****)0x0) goto LAB_10b1cebf4;
              func_0x00010b1e7d28(&uStack_440,0);
              pppplStack_438 = (long ****)0x0;
              ppppplVar14 = (long *****)0x0;
            }
          }
        }
        if (((ulong)ppppplVar14 & (long)ppppplVar14 - 1U) == 0) {
          uVar6 = 1;
          unaff_x25 = (long *****)((long)ppppplVar14 - 1U & (ulong)ppppplVar17);
        }
        else {
          uVar6 = ppppplVar17 == ppppplVar14;
          unaff_x25 = ppppplVar17;
          if (ppppplVar14 <= ppppplVar17) {
            uVar30 = 0;
            if (ppppplVar14 != (long *****)0x0) {
              uVar30 = (ulong)ppppplVar17 / (ulong)ppppplVar14;
            }
            unaff_x25 = (long *****)((long)ppppplVar17 - uVar30 * (long)ppppplVar14);
          }
        }
      }
      puVar16 = *(undefined8 **)(uStack_440 + (long)unaff_x25 * 8);
      if (puVar16 == (undefined8 *)0x0) {
        *ppppplVar34 = pppplStack_430;
        *(long ******)(uStack_440 + (long)unaff_x25 * 8) = &pppplStack_430;
        pppplStack_430 = (long ****)ppppplVar34;
        if (*ppppplVar34 != (long ****)0x0) {
          func_0x00010b1ed484();
          if ((bool)uVar6) {
            ppppplVar17 = (long *****)((ulong)extraout_x9_03 & extraout_x10_00);
          }
          else {
            ppppplVar17 = extraout_x9_03;
            if (ppppplVar14 <= extraout_x9_03) {
              uVar30 = 0;
              if (ppppplVar14 != (long *****)0x0) {
                uVar30 = (ulong)extraout_x9_03 / (ulong)ppppplVar14;
              }
              ppppplVar17 = (long *****)((long)extraout_x9_03 - uVar30 * (long)ppppplVar14);
            }
          }
          *(long ******)(extraout_x8_06 + (long)ppppplVar17 * 8) = ppppplVar34;
        }
      }
      else {
        *ppppplVar34 = (long ****)*puVar16;
        *puVar16 = ppppplVar34;
      }
      pppplStack_410 = (long ****)0x0;
      ppplStack_428 = (long ***)((long)ppplStack_428 + 1);
      func_0x00010b1e7d40(&pppplStack_410);
LAB_10b1cedb4:
      func_0x00010b1e7d94(&ppplStack_180);
      uVar19 = uVar19 + 0x110;
    }
    for (; uVar5 = (long)ppplVar29 - (long)pplVar2 < 0, ppplVar29 != (long ***)pplVar2;
        ppplVar29 = ppplVar29 + 0x19) {
      ppppplVar17 = (long *****)(ppplVar29 + 4);
      func_0x0001072e787c();
      pppplVar12 = pppplStack_438;
      if (((long *****)pppplStack_438 != (long *****)0x0) &&
         ((long ****)ppplStack_428 != (long ****)0x0)) {
        func_0x00010b1ed9d4(&uStack_440);
        uVar33 = (long)pppplVar12 - 1;
        if (((ulong)pppplVar12 & uVar33) == 0) {
          ppppplVar34 = (long *****)((ulong)ppppplVar17 & uVar33);
        }
        else {
          ppppplVar34 = ppppplVar17;
          if (pppplVar12 <= ppppplVar17) {
            uVar19 = 0;
            if ((long *****)pppplVar12 != (long *****)0x0) {
              uVar19 = (ulong)ppppplVar17 / (ulong)pppplVar12;
            }
            ppppplVar34 = (long *****)((long)ppppplVar17 - uVar19 * (long)pppplVar12);
          }
        }
        plVar25 = *(long **)(uStack_440 + (long)ppppplVar34 * 8);
        if (plVar25 != (long *)0x0) {
          do {
            while( true ) {
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) goto LAB_10b1ceea4;
              ppppplVar14 = (long *****)plVar25[1];
              if (ppppplVar14 != ppppplVar17) break;
              iVar10 = (int)plVar25 + 0x10;
              func_0x00010b1ebe54();
              if (iVar10 != 0) {
                lVar9 = plVar25[5];
                FUN_10b1c46b8(&ppplStack_180,ppplVar29,*(undefined8 *)(unaff_x21 + 0x238));
                FUN_10b1d5c00(lVar9 + 0x48,&ppplStack_180);
                FUN_10b1d5ca0(&ppplStack_180);
                goto LAB_10b1ceea4;
              }
            }
            if (((ulong)pppplVar12 & uVar33) == 0) {
              ppppplVar14 = (long *****)((ulong)ppppplVar14 & uVar33);
            }
            else if (pppplVar12 <= ppppplVar14) {
              uVar19 = 0;
              if ((long *****)pppplVar12 != (long *****)0x0) {
                uVar19 = (ulong)ppppplVar14 / (ulong)pppplVar12;
              }
              ppppplVar14 = (long *****)((long)ppppplVar14 - uVar19 * (long)pppplVar12);
            }
          } while (ppppplVar14 == ppppplVar34);
        }
      }
LAB_10b1ceea4:
    }
    ppplVar29 = (long ***)0x0;
    uVar6 = 1;
    for (ppppplVar17 = (long *****)pppplStack_430; ppppplVar17 != (long *****)0x0;
        ppppplVar17 = (long *****)*ppppplVar17) {
      pppplVar12 = ppppplVar17[5];
      uVar5 = (long)pppplVar12[9] - (long)pppplVar12[10] < 0;
      uVar6 = pppplVar12[9] == pppplVar12[10];
      if (!(bool)uVar6) {
        ppplVar29 = (long ***)((long)ppplVar29 + (ulong)*(byte *)(pppplVar12 + 8));
      }
      FUN_10b1be528(&ppplStack_180);
      if ((bStack_158 & 1) != 0) {
        pppplVar12 = ppppplVar17[5];
        pppplStack_408 = (long ****)pppplVar12[10];
        pppplStack_410 = (long ****)pppplVar12[9];
        ppplStack_400 = pppplVar12[0xb];
        pppplVar12[10] = (long ***)0x0;
        pppplVar12[0xb] = (long ***)0x0;
        pppplVar12[9] = (long ***)0x0;
        FUN_10b1cf4dc(ppppplVar17[5] + 9);
        FUN_10b1b92e0(ppplStack_170,ppppplVar17[5]);
        pppplVar12 = pppplStack_408;
        ppppplVar34 = (long *****)pppplStack_410;
        while( true ) {
          uVar5 = (long)ppppplVar34 - (long)pppplVar12 < 0;
          uVar6 = ppppplVar34 == (long *****)pppplVar12;
          if ((bool)uVar6) break;
          ppppplVar34[0xd] = (long ****)0x0;
          ppppplVar34[0xe] = (long ****)0x0;
          ppppplVar34[0xf] = (long ****)0x0;
          func_0x00010b1eb6f8();
          func_0x00010b1ed90c();
          func_0x00010b1ec5e4();
          ppppplVar34 = ppppplVar34 + 0x11;
        }
        FUN_10b1d31b4(&pppplStack_410);
      }
      func_0x00010b1d3e60(&ppplStack_180);
    }
    func_0x00010b1ed284(&pppplStack_410);
    pppplVar12 = (long ****)ppplStack_400;
    func_0x00010b1ec238();
    iVar10 = (int)unaff_x19;
    pppplVar28 = (long ****)(long)iVar10;
    pppplVar32 = (long ****)pppplVar12[0x17];
    if (pppplVar32 == (long ****)0x0) {
      pppplVar26 = (long ****)0x0;
    }
    else {
      uVar33 = (long)pppplVar32 - 1;
      if (((ulong)pppplVar32 & uVar33) == 0) {
        pppplVar26 = (long ****)(uVar33 & (ulong)pppplVar28);
        uVar6 = true;
        uVar5 = false;
      }
      else {
        uVar5 = (long)pppplVar32 - (long)pppplVar28 < 0;
        uVar6 = pppplVar32 == pppplVar28;
        pppplVar26 = pppplVar28;
        if (pppplVar32 <= pppplVar28) {
          uVar19 = 0;
          if (pppplVar32 != (long ****)0x0) {
            uVar19 = (ulong)pppplVar28 / (ulong)pppplVar32;
          }
          pppplVar26 = (long ****)((long)pppplVar28 - uVar19 * (long)pppplVar32);
        }
      }
      pppplVar27 = (long ****)pppplVar12[0x16][(long)pppplVar26];
      if (pppplVar27 != (long ****)0x0) {
        do {
          while( true ) {
            pppplVar27 = (long ****)*pppplVar27;
            if (pppplVar27 == (long ****)0x0) goto LAB_10b1cf02c;
            pppplVar18 = (long ****)pppplVar27[1];
            if (pppplVar18 != pppplVar28) break;
            uVar5 = *(int *)(pppplVar27 + 2) - iVar10 < 0;
            uVar6 = *(int *)(pppplVar27 + 2) == iVar10;
            if ((bool)uVar6) goto LAB_10b1cf288;
          }
          if (((ulong)pppplVar32 & uVar33) == 0) {
            pppplVar18 = (long ****)((ulong)pppplVar18 & uVar33);
          }
          else if (pppplVar32 <= pppplVar18) {
            uVar19 = 0;
            if (pppplVar32 != (long ****)0x0) {
              uVar19 = (ulong)pppplVar18 / (ulong)pppplVar32;
            }
            pppplVar18 = (long ****)((long)pppplVar18 - uVar19 * (long)pppplVar32);
          }
          uVar5 = (long)pppplVar18 - (long)pppplVar26 < 0;
          uVar6 = pppplVar18 == pppplVar26;
        } while ((bool)uVar6);
      }
    }
LAB_10b1cf02c:
    pppplVar27 = pppplVar12;
    func_0x00010b1ebccc();
    pppplVar18 = pppplVar12 + 0x18;
    ppplStack_170 = (long ***)0x1;
    *pppplVar27 = (long ***)0x0;
    pppplVar27[1] = (long ***)pppplVar28;
    *(int *)(pppplVar27 + 2) = iVar10;
    pppplVar27[3] = (long ***)0x0;
    pppplVar22 = pppplVar27;
    ppplStack_180 = (long ***)pppplVar27;
    ppplStack_178 = (long ***)pppplVar18;
    func_0x00010b1ebbc8(pppplVar12[0x19]);
    if ((pppplVar32 == (long ****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar5)) {
      bVar4 = (long ****)0x2 < pppplVar32;
      bVar7 = pppplVar32 == (long ****)0x3;
      func_0x00010b1eaeec((long)pppplVar32 << 1);
      pppplVar26 = extraout_x8_07;
      if (!bVar4 || bVar7) {
        pppplVar26 = extraout_x9_04;
      }
      if ((long)pppplVar26 - 1U == 0) {
        pppplVar26 = (long ****)0x2;
      }
      else if (((ulong)pppplVar26 & (long)pppplVar26 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        pppplVar32 = (long ****)pppplVar12[0x17];
        pppplVar22 = pppplVar26;
      }
      if (pppplVar32 < pppplVar26) {
LAB_10b1cf0c8:
        if ((ulong)pppplVar26 >> 0x3d != 0) goto LAB_10b1cf2cc;
        lVar9 = (long)pppplVar26 << 3;
        __Znwm(lVar9);
        FUN_10b1e7dfc(pppplVar12 + 0x16,lVar9);
        pppplVar32 = (long ****)0x0;
        pppplVar12[0x17] = (long ***)pppplVar26;
        ppplVar13 = pppplVar12[0x16];
        while (pppplVar26 != pppplVar32) {
          func_0x00010b1ebda4();
          ppplVar13 = extraout_x8_08;
          pppplVar32 = extraout_x9_05;
        }
        ppplVar20 = *pppplVar18;
        pppplVar32 = pppplVar26;
        if (ppplVar20 != (long ***)0x0) {
          pppplVar22 = (long ****)ppplVar20[1];
          uVar19 = (long)pppplVar26 - 1;
          uVar33 = 0;
          if (pppplVar26 != (long ****)0x0) {
            uVar33 = (ulong)pppplVar22 / (ulong)pppplVar26;
          }
          pppplVar23 = pppplVar22;
          if (pppplVar26 <= pppplVar22) {
            pppplVar23 = (long ****)((long)pppplVar22 - uVar33 * (long)pppplVar26);
          }
          if (((ulong)pppplVar26 & uVar19) == 0) {
            pppplVar23 = (long ****)((ulong)pppplVar22 & uVar19);
          }
          ppplVar13[(long)pppplVar23] = (long **)pppplVar18;
          while (ppplVar20 = (long ***)*ppplVar20, ppplVar20 != (long ***)0x0) {
            pppplVar22 = (long ****)ppplVar20[1];
            if (((ulong)pppplVar26 & uVar19) == 0) {
              pppplVar22 = (long ****)((ulong)pppplVar22 & uVar19);
            }
            else if (pppplVar26 <= pppplVar22) {
              uVar33 = 0;
              if (pppplVar26 != (long ****)0x0) {
                uVar33 = (ulong)pppplVar22 / (ulong)pppplVar26;
              }
              pppplVar22 = (long ****)((long)pppplVar22 - uVar33 * (long)pppplVar26);
            }
            if (pppplVar22 != pppplVar23) {
              if (ppplVar13[(long)pppplVar22] == (long **)0x0) {
                func_0x00010b1ebf54();
                ppplVar13 = extraout_x8_10;
                uVar19 = extraout_x9_07;
                ppplVar20 = extraout_x12_00;
                pppplVar23 = extraout_x11_02;
              }
              else {
                func_0x00010b1ead88();
                ppplVar13 = extraout_x8_09;
                uVar19 = extraout_x9_06;
                ppplVar20 = extraout_x10_01;
                pppplVar23 = extraout_x11_01;
              }
            }
          }
        }
      }
      else if (pppplVar26 < pppplVar32) {
        func_0x00010b1ebdb0((float)pppplVar12[0x19],*(undefined4 *)(pppplVar12 + 0x1a));
        if ((pppplVar32 < (long ****)0x3) || (((ulong)pppplVar32 & (long)pppplVar32 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010b1ead68();
        }
        if (pppplVar26 <= pppplVar22) {
          pppplVar26 = pppplVar22;
        }
        if (pppplVar26 < pppplVar32) {
          if (pppplVar26 != (long ****)0x0) goto LAB_10b1cf0c8;
          FUN_10b1e7dfc(pppplVar12 + 0x16,0);
          pppplVar12[0x17] = (long ***)0x0;
          pppplVar32 = (long ****)0x0;
        }
        else {
          pppplVar32 = (long ****)pppplVar12[0x17];
        }
      }
      if (((ulong)pppplVar32 & (long)pppplVar32 - 1U) == 0) {
        uVar6 = 1;
        pppplVar26 = (long ****)((long)pppplVar32 - 1U & (ulong)pppplVar28);
      }
      else {
        uVar6 = pppplVar32 == pppplVar28;
        pppplVar26 = pppplVar28;
        if (pppplVar32 <= pppplVar28) {
          uVar33 = 0;
          if (pppplVar32 != (long ****)0x0) {
            uVar33 = (ulong)pppplVar28 / (ulong)pppplVar32;
          }
          pppplVar26 = (long ****)((long)pppplVar28 - uVar33 * (long)pppplVar32);
        }
      }
    }
    ppplVar13 = pppplVar12[0x16];
    if (ppplVar13[(long)pppplVar26] == (long **)0x0) {
      *pppplVar27 = *pppplVar18;
      *pppplVar18 = (long ***)pppplVar27;
      ppplVar13[(long)pppplVar26] = (long **)pppplVar18;
      if (*pppplVar27 != (long ***)0x0) {
        pppplVar28 = (long ****)(*pppplVar27)[1];
        if (((ulong)pppplVar32 & (long)pppplVar32 - 1U) == 0) {
          pppplVar28 = (long ****)((ulong)pppplVar28 & (long)pppplVar32 - 1U);
          uVar6 = true;
        }
        else {
          uVar6 = pppplVar28 == pppplVar32;
          if (pppplVar32 <= pppplVar28) {
            uVar33 = 0;
            if (pppplVar32 != (long ****)0x0) {
              uVar33 = (ulong)pppplVar28 / (ulong)pppplVar32;
            }
            pppplVar28 = (long ****)((long)pppplVar28 - uVar33 * (long)pppplVar32);
          }
        }
        ppplVar13[(long)pppplVar28] = (long **)pppplVar27;
      }
    }
    else {
      func_0x00010b1ec534();
    }
    ppplStack_180 = (long ***)0x0;
    pppplVar12[0x19] = (long ***)((long)pppplVar12[0x19] + 1);
    FUN_10b1e7e14(&ppplStack_180);
LAB_10b1cf288:
    pppplVar27[3] = ppplVar29;
    func_0x00010b1ecda8();
    FUN_10b1e7db4(&uStack_440);
  }
  FUN_10b1d59d8(&pplStack_3f0);
  FUN_10b1d48fc(&uStack_3d0);
  func_0x00010b1eaddc(extraout_x8);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1cf2cc:
  func_0x000104bd35f4();
LAB_10b1cf2d0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1cf2d4);
  (*pcVar3)();
}



/* Entry: 10b1f74f8; end: 10b1f7537;  */

void FUN_10b1f74f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x22;
  undefined1 auStack_40 [16];
  
  puVar1 = param_1;
  FUN_10b1262f4();
  func_0x00010b1ebb5c(auStack_40,*puVar1,param_1);
  func_0x00010b1ec238(unaff_x22);
  FUN_10b1d0a10();
  FUN_10b1d0a30();
  func_0x00010b1eb9c4();
  return;
}



/* Entry: 10b1f7538; end: 10b1f755f;  */

/* WARNING: Removing unreachable block (ram,0x00010b1d00fc) */
/* WARNING: Removing unreachable block (ram,0x00010b1d0104) */

void FUN_10b1f7538(undefined8 *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long *plVar9;
  long extraout_x9_00;
  int extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long *plStack_3a0;
  long *plStack_398;
  long *plStack_390;
  undefined1 uStack_388;
  long *plStack_378;
  long *plStack_370;
  ulong uStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  char cStack_348;
  long alStack_340 [10];
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [8];
  undefined8 uStack_2d8;
  uint auStack_2d0 [2];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  char cStack_298;
  long *plStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [72];
  undefined8 uStack_1e0;
  uint uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined1 auStack_198 [72];
  long alStack_150 [8];
  byte bStack_110;
  long lStack_108;
  undefined4 auStack_100 [2];
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c8;
  long **pplStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [48];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar8 = param_1;
  FUN_10b1262f4();
  func_0x00010b1ec024(*puVar8);
  func_0x00010b1eae28();
  func_0x000107c27f70(&plStack_3c0);
  plStack_378 = (long *)((ulong)plStack_378 & 0xffffffffffffff00);
  uStack_368 = uStack_368 & 0xffffffffffffff00;
  func_0x00010bccbc98(alStack_340,unaff_x19 + 0x80,&UNK_10f73866b,0x30);
  lVar12 = *(long *)(alStack_340[0] + 8);
  lStack_2e8 = *(long *)(alStack_340[0] + 0x10);
  lStack_2f0 = lVar12;
  if (lStack_2e8 != 0) {
    do {
      func_0x00010b1eaf98();
      lVar12 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b1fbc90(auStack_2e0,*(undefined8 *)(lVar12 + 0x10),&plStack_3c0);
  uStack_1d8 = uStack_1d8 & 0xffffff00;
  uStack_1a0 = 0;
  if (cStack_298 != '\0') {
    uStack_1d8 = auStack_2d0[0];
    uStack_1c8 = uStack_2c0;
    uStack_1d0 = uStack_2c8;
    uStack_1c0 = uStack_2b8;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_1b0 = uStack_2a8;
    uStack_1b8 = uStack_2b0;
    uStack_1a8 = uStack_2a0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_1a0 = 1;
    func_0x00010b1dbd78(auStack_2d0);
  }
  uStack_1e0 = uStack_2d8;
  uStack_2d8 = 0;
  func_0x00010b1dbccc(auStack_198,&uStack_1e0);
  uStack_230 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  func_0x00010b1dbccc(auStack_228,&uStack_270);
  plStack_288 = (long *)0x0;
  plStack_280 = (long *)0x0;
  plStack_290 = (long *)0x0;
  FUN_10b1dbf4c(&lStack_108,auStack_198);
  FUN_10b1dbf4c(alStack_150,auStack_228);
  pplStack_c0 = &plStack_290;
  uStack_b8 = 0;
  while ((((bStack_c8 & 1) != 0 || ((bStack_110 & 1) != 0)) && (lStack_108 != alStack_150[0]))) {
    if ((bStack_c8 & 1) == 0) {
      uVar10 = *(undefined8 *)(lStack_108 + 8);
      func_0x00010b1eb9a4(auStack_b0);
      func_0x00010b1ee27c();
      func_0x000107c27f54(&UNK_10f2e0451);
      func_0x00010b1eb99c(uVar10);
      func_0x00010b1ebf08();
      func_0x00010b1ebf10();
    }
    unaff_x20 = plStack_288;
    plVar7 = plStack_290;
    if (plStack_288 < plStack_280) {
      *(undefined4 *)plStack_288 = auStack_100[0];
      plStack_288[3] = lStack_e8;
      plStack_288[2] = lStack_f0;
      plStack_288[1] = lStack_f8;
      lStack_f0 = 0;
      lStack_e8 = 0;
      lStack_f8 = 0;
      plStack_288[5] = lStack_d8;
      plStack_288[4] = lStack_e0;
      plStack_288[6] = lStack_d0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      lStack_e0 = 0;
      plVar7 = plStack_288 + 7;
    }
    else {
      lVar12 = (long)plStack_288 - (long)plStack_290;
      uVar1 = lVar12 / 0x38 + 1;
      uVar5 = 0x492492492492491 < uVar1;
      if (0x492492492492492 < uVar1) {
        FUN_10b1dbdec();
        goto LAB_10b1d0300;
      }
      func_0x00010b1eb414(((long)plStack_280 - (long)plStack_290) / 0x38);
      func_0x00010b1ed5cc();
      uVar1 = extraout_x9;
      if ((bool)uVar5) {
        uVar1 = 0x492492492492492;
      }
      if (uVar1 == 0) {
        lVar11 = 0;
      }
      else {
        if (0x492492492492492 < uVar1) {
          func_0x000104bd35f4();
          goto LAB_10b1d0300;
        }
        lVar11 = uVar1 * 0x38;
        __Znwm();
      }
      lVar15 = lStack_d8;
      lVar14 = lStack_e0;
      puVar2 = (undefined4 *)(lVar11 + lVar12);
      *puVar2 = auStack_100[0];
      *(long *)(puVar2 + 4) = lStack_f0;
      *(long *)(puVar2 + 2) = lStack_f8;
      *(long *)(puVar2 + 6) = lStack_e8;
      lStack_f8 = 0;
      lStack_f0 = 0;
      *(long *)(puVar2 + 10) = lStack_d8;
      *(long *)(puVar2 + 8) = lStack_e0;
      *(long *)(puVar2 + 0xc) = lStack_d0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      plVar13 = (long *)(puVar2 + (lVar12 / -0x38) * 0xe);
      plVar6 = plVar13;
      plVar9 = plVar7;
      while (plVar9 != unaff_x20) {
        func_0x00010b1ec614(plVar6);
        *(undefined8 *)(extraout_x8_00 + 0x30) = *(undefined8 *)(extraout_x9_00 + 0x30);
        *(long *)(extraout_x8_00 + 0x28) = lVar15;
        *(long *)(extraout_x8_00 + 0x20) = lVar14;
        *(undefined8 *)(extraout_x9_00 + 0x28) = 0;
        *(undefined8 *)(extraout_x9_00 + 0x30) = 0;
        *(undefined8 *)(extraout_x9_00 + 0x20) = 0;
        plVar6 = (long *)(extraout_x8_00 + 0x38);
        plVar9 = (long *)(extraout_x9_00 + 0x38);
      }
      for (; plVar7 != unaff_x20; plVar7 = plVar7 + 7) {
        FUN_10b1dbdc8(plVar7);
      }
      plStack_280 = (long *)(lVar11 + uVar1 * 0x38);
      plVar7 = (long *)(puVar2 + 0xe);
      bVar3 = plStack_290 != (long *)0x0;
      plStack_290 = plVar13;
      if (bVar3) {
        plStack_288 = plVar7;
        __ZdlPv();
      }
    }
    plStack_288 = plVar7;
    FUN_10b1dbdf8(&lStack_108);
  }
  uStack_b8 = 1;
  FUN_10b1dbee0(&pplStack_c0);
  func_0x00010b1ebd28(alStack_150);
  FUN_10b1dbfc4(auStack_100);
  func_0x00010b1ebd28(auStack_228);
  func_0x00010b1edcd8();
  func_0x00010b1ebd28(auStack_198);
  func_0x00010b1ebd28(&uStack_1e0);
  plStack_358 = plStack_288;
  plStack_360 = plStack_290;
  plStack_350 = plStack_280;
  plStack_290 = (long *)0x0;
  plStack_288 = (long *)0x0;
  plStack_280 = (long *)0x0;
  cStack_348 = '\x01';
  FUN_10b1dbfe4(&plStack_290);
  FUN_10b1dc008(auStack_2e0);
  FUN_10b1b7824(&lStack_2f0);
  func_0x00010bccbe4c(alStack_340);
  func_0x00010bccbdb4(alStack_340);
  func_0x00010b1ecd94();
  uVar5 = cStack_348 == '\x01';
  if ((bool)uVar5) {
    plStack_70 = plStack_358;
    plStack_78 = plStack_360;
    plStack_68 = plStack_350;
    plStack_358 = (long *)0x0;
    plStack_350 = (long *)0x0;
    plStack_360 = (long *)0x0;
    lStack_60 = CONCAT71(lStack_60._1_7_,1);
  }
  func_0x00010b1ecad8();
  func_0x00010b1ee4c4();
  func_0x00010b1ed710();
  func_0x00010b1ecd88();
  if ((bool)uVar5) {
    plStack_398 = plStack_70;
    plStack_3a0 = plStack_78;
    plStack_390 = plStack_68;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    plStack_78 = (long *)0x0;
    uStack_388 = 1;
    func_0x00010b1ecad8();
    FUN_10b1dc080(&plStack_78);
    func_0x00010b1ecac8();
    func_0x00010b1ebf8c();
    plStack_3b0 = plStack_390;
    plStack_3b8 = plStack_398;
    plVar7 = plStack_3a0;
    plStack_3a0 = (long *)0x0;
    plStack_398 = (long *)0x0;
    plStack_390 = (long *)0x0;
    plStack_3c0 = plVar7;
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    plStack_80 = (long *)0x0;
    FUN_10b1dbfe4(&plStack_80);
    func_0x00010b1ee56c();
    plStack_378 = (long *)0x0;
    plStack_370 = (long *)0x0;
    uStack_368 = 0;
    uStack_b8 = 0;
    pplStack_c0 = &plStack_378;
    for (; plVar7 != unaff_x20; plVar7 = plVar7 + 7) {
      func_0x00010b1edee8(&plStack_360,(int)*plVar7);
      plStack_78 = plStack_358;
      plStack_80 = plStack_360;
      plStack_70 = plStack_350;
      plStack_358 = (long *)0x0;
      plStack_350 = (long *)0x0;
      plStack_360 = (long *)0x0;
      lStack_60 = plVar7[5];
      plStack_68 = (long *)plVar7[4];
      lStack_58 = plVar7[6];
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[4] = 0;
      func_0x00010b1ed224();
      func_0x000107c280dc(&plStack_378,&plStack_80);
      func_0x000107c27bbc(&plStack_80);
    }
    uStack_b8 = 1;
    func_0x000107c280d4(&pplStack_c0);
    FUN_10b1b8c14(&plStack_360,unaff_x19 + 0x2a0);
    plVar6 = plStack_350;
    FUN_10b1b8c30(plStack_350,param_1);
    plVar9 = plStack_370;
    for (plVar7 = plStack_378; uVar5 = plVar7 == plVar9, !(bool)uVar5; plVar7 = plVar7 + 6) {
      plStack_78 = (long *)plVar7[1];
      plStack_80 = (long *)*plVar7;
      plStack_70 = (long *)plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      lStack_60 = plVar7[4];
      plStack_68 = (long *)plVar7[3];
      lStack_58 = plVar7[5];
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[3] = 0;
      func_0x000107c283d4(plVar6 + 5,&plStack_80);
      func_0x000107c278c0(&plStack_80);
    }
    plVar7 = plStack_350;
    FUN_10b1b8c30(plStack_350,param_1);
    *(undefined1 *)(plVar7 + 10) = 1;
    func_0x000107c2798c(&plStack_360);
    func_0x000107c280f8(&plStack_378);
    FUN_10b1dbfe4(&plStack_3c0);
  }
  else {
    func_0x00010b1ecad8();
    func_0x00010b1ec3f0();
    FUN_10b1dc080();
    func_0x00010b1ecac8();
    func_0x00010b1ebf8c();
  }
  FUN_10b1dc060(&plStack_3a0);
  func_0x00010b1eadc4();
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010563ab98();
LAB_10b1d0300:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b1d0304);
  (*pcVar4)();
}



/* Entry: 10b1f7560; end: 10b1f758f;  */

void FUN_10b1f7560(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  long **pplVar8;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  undefined8 extraout_x8_00;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar19;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_3d8 [16];
  long lStack_3c8;
  undefined8 *puStack_3b0;
  code *pcStack_3a8;
  code *pcStack_398;
  undefined **ppuStack_390;
  undefined8 **ppuStack_388;
  char cStack_380;
  long *plStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  long **pplStack_360;
  undefined8 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  long alStack_340 [4];
  undefined1 auStack_320 [40];
  code *pcStack_2f8;
  undefined **ppuStack_2f0;
  undefined8 **ppuStack_2e8;
  char cStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 **ppuStack_2b0;
  char cStack_2a8;
  long *plStack_2a0;
  long *plStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  long lStack_278;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined **ppuStack_220;
  undefined8 **ppuStack_218;
  undefined1 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 **ppuStack_1e0;
  char cStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [24];
  long *plStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined1 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_150;
  undefined1 auStack_148 [16];
  ulong uStack_138;
  code *pcStack_120;
  undefined **ppuStack_118;
  undefined8 **ppuStack_110;
  char cStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  code **ppcStack_c0;
  undefined8 **ppuStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  code *pcStack_48;
  undefined **ppuStack_40;
  undefined8 **ppuStack_38;
  
  lVar10 = param_3;
  func_0x00010b1f7d30();
  func_0x00010b1f7db0();
  func_0x00010b1ec024();
  lVar5 = lVar10;
  lVar11 = param_3;
  func_0x00010b1eb424();
  func_0x00010b1eae84();
  func_0x000107c278d0(lVar5,lVar11);
  if ((int)lVar5 != 0) {
    func_0x00010b1ecb24();
    func_0x000107c278b8(&plStack_100);
    FUN_10b199864(&pcStack_120,&UNK_10f731cfd);
    uVar19 = uStack_f0;
    plStack_a8 = plStack_f8;
    plStack_b0 = plStack_100;
    uStack_f0 = 0;
    plStack_100 = (long *)0x0;
    plStack_f8 = (long *)0x0;
    func_0x00010b1ec38c(uVar19);
    uVar3 = cStack_108 == '\x01';
    if ((bool)uVar3) {
      ppuStack_88 = ppuStack_118;
      pcStack_90 = pcStack_120;
      ppuStack_80 = ppuStack_110;
      ppuStack_110 = (code ***)0x0;
      pcStack_120 = (code *)0x0;
      ppuStack_118 = (undefined **)0x0;
      func_0x00010b1ee508();
    }
    func_0x00010b1eb3b0();
    func_0x00010b1ec138();
    func_0x000107c279a4(&pcStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_100);
    goto LAB_10b1d29ec;
  }
  func_0x00010b1eb6f8(auStack_148);
  func_0x00010b1eb674();
  plStack_1a0 = (long *)((ulong)plStack_1a0 & 0xffffffffffffff00);
  bStack_150 = 0;
  uVar13 = uStack_138;
  func_0x00010b1ebe54();
  uVar12 = uStack_138;
  if ((uVar13 & 1) == 0) {
    cVar1 = *(char *)(param_3 + 0x30);
    if (cVar1 == '\x01') {
      func_0x00010b1edc70(auStack_1b8);
      FUN_10b2026a0(&plStack_b0,uVar12,auStack_1b8);
    }
    else {
      FUN_10b202630(&plStack_b0,uStack_138);
    }
    uVar4 = bStack_150 == 1;
    if ((bool)uVar4) {
      FUN_10b1559a4(&plStack_1a0,&plStack_b0);
    }
    else {
      plStack_198 = plStack_a8;
      plStack_1a0 = plStack_b0;
      uStack_190 = uStack_a0;
      plStack_a8 = (long *)0x0;
      uStack_a0 = 0;
      plStack_b0 = (long *)0x0;
      uStack_188 = uStack_188 & 0xffffffffffffff00;
      uVar4 = (char)ppuStack_80 == '\x01';
      if ((bool)uVar4) {
        pcStack_180 = pcStack_90;
        uStack_188 = uStack_98;
        ppuStack_178 = ppuStack_88;
        pcStack_90 = (code *)0x0;
        ppuStack_88 = (undefined **)0x0;
        uStack_98 = 0;
      }
      uStack_160 = uStack_70;
      uStack_168 = uStack_78;
      uStack_158 = uStack_68;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
      bStack_150 = 1;
      uStack_170 = uVar4;
    }
    func_0x00010b121e00(&plStack_b0);
    if (cVar1 != '\0') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    }
LAB_10b1d2360:
    uVar3 = uVar4;
    if ((bStack_150 & 1) != 0) {
      uVar12 = uStack_138;
      func_0x000107c278d0(uStack_138,param_3);
      uVar3 = uVar4;
      if (((uVar12 & 1) == 0) && (func_0x00010b1ec3bc(uStack_138), uVar3 = 0, (bool)uVar4)) {
        uVar3 = *(long *)(extraout_x8 + 0x38) == 1;
        if (0 < *(long *)(extraout_x8 + 0x38)) {
          pcStack_90 = (code *)0x0;
          plStack_a8 = (long *)0x0;
          plStack_b0 = (long *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          func_0x00010b1edd24();
          func_0x00010b1d3e60(&plStack_b0);
          func_0x00010b1ed284(&pplStack_360);
          lVar5 = lStack_350;
          func_0x00010b1ec238();
          plVar6 = (long *)(lVar5 + 0x108);
          FUN_10b1e4440(plVar6,lVar10);
          if (plVar6 == (long *)0x0) {
            uVar19 = *(undefined8 *)(unaff_x21 + 0x238);
            func_0x00010b1ebd14();
            func_0x00010b1eb884(&plStack_b0);
            func_0x00010b1eb654(&pcStack_48,&plStack_b0);
            func_0x00010b1eb040(uVar19);
            func_0x00010b1ec10c();
            func_0x00010b1eb5ac(&plStack_b0);
          }
          else {
            uVar13 = *(ulong *)(lVar5 + 0x110);
            lVar11 = *plVar6;
            uVar12 = plVar6[1];
            uVar15 = uVar13 - 1;
            if ((uVar13 & uVar15) == 0) {
              uVar12 = uVar15 & uVar12;
            }
            else if (uVar13 <= uVar12) {
              uVar17 = 0;
              if (uVar13 != 0) {
                uVar17 = uVar12 / uVar13;
              }
              uVar12 = uVar12 - uVar17 * uVar13;
            }
            lVar16 = *(long *)(lVar5 + 0x108);
            plVar2 = *(long **)(lVar16 + uVar12 * 8);
            do {
              plVar14 = plVar2;
              plVar2 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar6);
            plStack_a8 = (long *)(lVar5 + 0x118);
            uVar3 = true;
            if (plVar14 == plStack_a8) {
LAB_10b1d2488:
              if (lVar11 == 0) {
LAB_10b1d24bc:
                *(undefined8 *)(lVar16 + uVar12 * 8) = 0;
                lVar11 = *plVar6;
                goto LAB_10b1d24c4;
              }
              uVar17 = *(ulong *)(lVar11 + 8);
              if ((uVar13 & uVar15) == 0) {
                uVar18 = uVar17 & uVar15;
              }
              else {
                uVar18 = uVar17;
                if (uVar13 <= uVar17) {
                  uVar18 = 0;
                  if (uVar13 != 0) {
                    uVar18 = uVar17 / uVar13;
                  }
                  uVar18 = uVar17 - uVar18 * uVar13;
                }
              }
              uVar3 = uVar18 == uVar12;
              if (!(bool)uVar3) goto LAB_10b1d24bc;
LAB_10b1d24cc:
              if ((uVar13 & uVar15) == 0) {
                uVar17 = uVar17 & uVar15;
              }
              else if (uVar13 <= uVar17) {
                uVar15 = 0;
                if (uVar13 != 0) {
                  uVar15 = uVar17 / uVar13;
                }
                uVar17 = uVar17 - uVar15 * uVar13;
              }
              uVar3 = uVar17 == uVar12;
              if (!(bool)uVar3) {
                *(long **)(lVar16 + uVar17 * 8) = plVar14;
                lVar11 = *plVar6;
              }
            }
            else {
              uVar17 = plVar14[1];
              if ((uVar13 & uVar15) == 0) {
                uVar17 = uVar17 & uVar15;
              }
              else if (uVar13 <= uVar17) {
                uVar18 = 0;
                if (uVar13 != 0) {
                  uVar18 = uVar17 / uVar13;
                }
                uVar17 = uVar17 - uVar18 * uVar13;
              }
              uVar3 = uVar17 == uVar12;
              if (!(bool)uVar3) goto LAB_10b1d2488;
LAB_10b1d24c4:
              if (lVar11 != 0) {
                uVar17 = *(ulong *)(lVar11 + 8);
                goto LAB_10b1d24cc;
              }
            }
            *plVar14 = lVar11;
            *plVar6 = 0;
            *(long *)(lVar5 + 0x120) = *(long *)(lVar5 + 0x120) + -1;
            uStack_a0 = 1;
            plStack_b0 = plVar6;
            FUN_10b1d5e60(&plStack_b0);
          }
          func_0x00010b1eceec();
          func_0x00010b1eb6f8(&plStack_b0);
          func_0x00010b1eb674();
          func_0x00010b1edd24();
          func_0x00010b1d3e60(&plStack_b0);
          if ((uStack_138 == 0) || (func_0x00010b1ebe54(), (uStack_138 & 1) == 0)) {
            func_0x00010b1ecb24();
            func_0x000107c278b8(&plStack_208);
            func_0x000107c278b8(&pcStack_228,&UNK_10f731d43);
            uStack_a0 = uStack_1f8;
            uStack_210 = 1;
            plStack_a8 = plStack_200;
            plStack_b0 = plStack_208;
            plStack_208 = (long *)0x0;
            plStack_200 = (long *)0x0;
            uStack_1f8 = 0;
            uStack_98 = 2;
            ppuStack_88 = ppuStack_220;
            pcStack_90 = pcStack_228;
            ppuStack_80 = ppuStack_218;
            pcStack_228 = (code *)0x0;
            ppuStack_220 = (undefined **)0x0;
            ppuStack_218 = (code ***)0x0;
            uStack_78 = CONCAT71(uStack_78._1_7_,1);
            func_0x00010b1eb3b0();
            func_0x00010b1ec138();
            func_0x000107c279a4(&pcStack_228);
            pplVar8 = &plStack_208;
            goto LAB_10b1d26e4;
          }
          if ((bStack_150 & 1) != 0) {
            func_0x00010b121e00(&plStack_1a0);
            bStack_150 = 0;
          }
        }
      }
    }
    if ((bStack_150 & 1) == 0) {
      func_0x00010b1eb6f8(auStack_288);
      func_0x00010b1eb674();
      if (lStack_278 == 0) {
        func_0x00010b1ecb24();
        func_0x000107c278b8(&plStack_2a0);
        func_0x0001073a471c(&pcStack_2c0,&UNK_10f731dc3);
        uStack_a0 = uStack_290;
        plStack_a8 = plStack_298;
        plStack_b0 = plStack_2a0;
        plStack_298 = (long *)0x0;
        uStack_290 = 0;
        plStack_2a0 = (long *)0x0;
        uStack_98 = 1;
        pcStack_90 = (code *)((ulong)pcStack_90 & 0xffffffffffffff00);
        uVar12 = uStack_78 >> 8;
        uStack_78 = uStack_78 & 0xffffffffffffff00;
        uVar3 = cStack_2a8 == '\x01';
        if ((bool)uVar3) {
          ppuStack_88 = ppuStack_2b8;
          pcStack_90 = pcStack_2c0;
          ppuStack_80 = ppuStack_2b0;
          ppuStack_2b8 = (undefined **)0x0;
          ppuStack_2b0 = (code ***)0x0;
          pcStack_2c0 = (code *)0x0;
          uStack_78 = CONCAT71((int7)uVar12,1);
        }
        func_0x00010b1eb3b0();
        func_0x00010b1ec138();
        func_0x00010b1edbfc();
        pplVar8 = &plStack_2a0;
LAB_10b1d2768:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar8);
      }
      else {
        func_0x00010b1ebe54();
        if ((int)lStack_278 != 0) {
          func_0x00010b1ecb24();
          func_0x000107c278b8(&plStack_2d8);
          func_0x0001068868b0(&pcStack_2f8,&UNK_10f731dd4);
          uVar19 = uStack_2c8;
          plStack_a8 = plStack_2d0;
          plStack_b0 = plStack_2d8;
          plStack_2d0 = (long *)0x0;
          uStack_2c8 = 0;
          plStack_2d8 = (long *)0x0;
          func_0x00010b1ec38c(uVar19);
          uVar3 = cStack_2e0 == '\x01';
          if ((bool)uVar3) {
            ppuStack_88 = ppuStack_2f0;
            pcStack_90 = pcStack_2f8;
            ppuStack_80 = ppuStack_2e8;
            ppuStack_2f0 = (undefined **)0x0;
            ppuStack_2e8 = (code ***)0x0;
            pcStack_2f8 = (code *)0x0;
            func_0x00010b1ee508();
          }
          func_0x00010b1eb3b0();
          func_0x00010b1ec138();
          func_0x000107c279a4(&pcStack_2f8);
          pplVar8 = &plStack_2d8;
          goto LAB_10b1d2768;
        }
        func_0x000107c27f70(&pplStack_360,unaff_x20);
        func_0x000107c27f70(alStack_340,lVar10);
        func_0x00010b1ebfc4(auStack_320);
        pcStack_d0 = FUN_10b1fcf9c;
        uStack_c8 = 0;
        uStack_e8 = 0;
        uStack_d8 = 0;
        ppcStack_c0 = &pcStack_d0;
        pcStack_48 = FUN_10b1ea864;
        ppuStack_40 = &PTR_FUN_110cc4ac8;
        ppuStack_38 = &ppcStack_c0;
        ppuStack_b8 = &pplStack_360;
        func_0x00010b1ec284();
        func_0x00010b1ebe34(unaff_x21 + 0x80,&pcStack_48);
        func_0x00010b1ebb00(ppuStack_40);
        plStack_b0 = (long *)CONCAT71(plStack_b0._1_7_,1);
        uStack_58 = 0;
        pplVar8 = &plStack_b0;
        func_0x00010b1dd05c();
        plVar6 = *pplVar8;
        func_0x00010b1eda6c();
        func_0x00010b1ed91c();
        if (((ulong)plVar6 & 1) == 0) {
          func_0x00010b1ecb24();
          func_0x000107c278b8(&plStack_378);
          func_0x0001073a471c(&pcStack_398,&UNK_10f731df2);
          uVar19 = uStack_368;
          plStack_a8 = plStack_370;
          plStack_b0 = plStack_378;
          plStack_370 = (long *)0x0;
          uStack_368 = 0;
          plStack_378 = (long *)0x0;
          func_0x00010b1ec38c(uVar19);
          uVar3 = cStack_380 == '\x01';
          if ((bool)uVar3) {
            ppuStack_88 = ppuStack_390;
            pcStack_90 = pcStack_398;
            ppuStack_80 = ppuStack_388;
            func_0x00010b1ed800();
            func_0x00010b1ee508();
          }
          func_0x00010b1eb3b0();
          func_0x00010b1ec138();
          func_0x00010b1ed0e0();
          func_0x00010b1ed29c();
        }
        else {
          func_0x00010b1eb6f8();
          FUN_10b1bebec();
          *unaff_x19 = 0;
          unaff_x19[0x40] = 0;
        }
        FUN_10b1de578(&pplStack_360);
      }
      func_0x00010b1d3e60(auStack_288);
    }
    else {
      puVar7 = &uStack_168;
      func_0x000107c278d0(puVar7,param_3 + 0x38);
      if ((int)puVar7 == 0) {
        func_0x00010b1ecb24();
        func_0x000107c278b8(&plStack_240);
        pplStack_360 = &plStack_1a0;
        uStack_358 = 0x10b1ea830;
        uStack_348 = 0x10b1ea830;
        alStack_340[1] = 0x10b1ea830;
        lStack_350 = param_3;
        alStack_340[0] = lVar10;
        func_0x000107c2793c(&UNK_10f731d6b);
        func_0x000107c3173c(&pcStack_48);
        ppuStack_80 = ppuStack_38;
        ppuStack_88 = ppuStack_40;
        pcStack_90 = pcStack_48;
        uStack_a0 = uStack_230;
        uStack_258 = 0;
        pcStack_48 = (code *)0x0;
        ppuStack_40 = (undefined **)0x0;
        ppuStack_38 = (code ***)0x0;
        uStack_248 = 1;
        plStack_a8 = plStack_238;
        plStack_b0 = plStack_240;
        plStack_240 = (long *)0x0;
        plStack_238 = (long *)0x0;
        uStack_230 = 0;
        uStack_98 = 3;
        uStack_260 = 0;
        uStack_250 = 0;
        uStack_78 = CONCAT71(uStack_78._1_7_,1);
        func_0x00010b1eb3b0();
        func_0x00010b1ec138();
        func_0x000107c279a4(&uStack_260);
        func_0x00010b1ed9a8();
        pplVar8 = &plStack_240;
        goto LAB_10b1d26e4;
      }
      *unaff_x19 = 0;
      unaff_x19[0x40] = 0;
    }
  }
  else {
    if ((*(byte *)(uStack_138 + 0x40) & 1) == 0) {
      uVar4 = 1;
      if (*(long *)(uStack_138 + 0x48) == *(long *)(uStack_138 + 0x50)) goto LAB_10b1d2360;
    }
    func_0x00010b1ecb24();
    func_0x000107c278b8(&plStack_1d0);
    func_0x000107273db0(&pcStack_1f0,&UNK_10f731d23);
    uVar19 = uStack_1c0;
    plStack_a8 = plStack_1c8;
    plStack_b0 = plStack_1d0;
    plStack_1c8 = (long *)0x0;
    uStack_1c0 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x00010b1ec38c(uVar19);
    uVar3 = cStack_1d8 == '\x01';
    if ((bool)uVar3) {
      ppuStack_88 = ppuStack_1e8;
      pcStack_90 = pcStack_1f0;
      ppuStack_80 = ppuStack_1e0;
      ppuStack_1e8 = (undefined **)0x0;
      ppuStack_1e0 = (code ***)0x0;
      pcStack_1f0 = (code *)0x0;
      func_0x00010b1ee508();
    }
    func_0x00010b1eb3b0();
    func_0x00010b1ec138();
    func_0x00010b1edbe0();
    pplVar8 = &plStack_1d0;
LAB_10b1d26e4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pplVar8);
  }
  FUN_10b1de5a0(&plStack_1a0);
  func_0x00010b1d3e60(auStack_148);
LAB_10b1d29ec:
  func_0x00010b1eadc4();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eda6c();
  func_0x00010b1ed91c();
  FUN_10b1de578(&pplStack_360);
  func_0x00010b1d3e60(auStack_288);
  FUN_10b1de5a0(&plStack_1a0);
  puVar9 = auStack_148;
  func_0x00010b1d3e60(puVar9);
  func_0x00010b1edf04();
  pcStack_3a8 = FUN_10b1d2ae8;
  puStack_3b0 = &stack0x00000050;
  FUN_10b1bad14(auStack_3d8,puVar9 + 0x360);
  FUN_10b1de5c0(extraout_x8_00,lStack_3c8 + 0x30);
  func_0x00010b1ec680();
  return;
}



/* Entry: 10b1f7590; end: 10b1f75ef;  */

void FUN_10b1f7590(undefined8 *param_1)

{
  func_0x00010b1f7d40();
  FUN_10b1c85d8(*param_1);
  return;
}



/* Entry: 10b1f75f0; end: 10b1f7617;  */

char FUN_10b1f75f0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 auStack_60 [24];
  char cStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x00010b1f7e54();
  lVar2 = *param_1;
  func_0x00010b1ebbb0();
  __ZNSt3__16chrono12system_clock3nowEv();
  lStack_40 = lVar2 / 1000;
  uStack_38 = 1;
  func_0x00010b1ec6ac(auStack_60);
  uStack_68 = (undefined4)unaff_x19;
  uStack_64 = 1;
  uVar1 = unaff_x19 + 0x80;
  FUN_10b1d1d44(uVar1,FUN_10b1fca94,0,&lStack_40,auStack_60,&uStack_68);
  func_0x00010b1ecff0();
  if ((uVar1 & 1) == 0) {
    cStack_48 = '\0';
  }
  else {
    func_0x00010b1ed9e0(auStack_60);
    if (cStack_48 == '\x01') {
      FUN_10b1cd178(unaff_x19,auStack_60,5);
    }
    FUN_10b1d48fc(auStack_60);
  }
  return cStack_48;
}



/* Entry: 10b1f7618; end: 10b1f769f;  */

void FUN_10b1f7618(long *param_1,ulong param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x50) < param_2) {
    if (0x333333333333333 < param_2) {
      FUN_10b1f76a0();
      func_0x00010b1f7e2c();
      func_0x00010b1f7da8();
      plVar1 = (long *)&UNK_10f732589;
      func_0x000104bd47e8();
      func_0x00010b1f7e34();
      lVar2 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x50) * 0x50;
      FUN_10b1f77d8(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    FUN_10b1f773c(auStack_48,param_2,(param_1[1] - *param_1) / 0x50);
    func_0x00010b1f7e74();
    func_0x00010b1f7e2c();
  }
  return;
}



/* Entry: 10b1f76a0; end: 10b1f76b3;  */

void FUN_10b1f76a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&UNK_10f732589;
  func_0x000104bd47e8();
  func_0x00010b1f7e34();
  lVar3 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x50) * 0x50;
  FUN_10b1f77d8(plVar1 + 2,*plVar1,plVar1[1],lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b1f76b4; end: 10b1f773b;  */

void FUN_10b1f76b4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b1f7e34();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x50) * 0x50;
  FUN_10b1f77d8(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b1f773c; end: 10b1f77ab;  */

long * FUN_10b1f773c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b1f7788();
  }
  lVar1 = param_4 + param_3 * 0x50;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x50;
  return param_1;
}



/* Entry: 10b1f77ac; end: 10b1f77d7;  */

void FUN_10b1f77ac(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x333333333333334) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x50);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x50) {
    FUN_10b1a46c8(param_4,uVar1);
    param_4 = lStack_48 + 0x50;
  }
  uStack_58 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x00010b121e00(param_2);
  }
  FUN_10b1f786c(&uStack_70);
  return;
}



/* Entry: 10b1f77d8; end: 10b1f786b;  */

void FUN_10b1f77d8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x50) {
    FUN_10b1a46c8(param_4,lVar1);
    param_4 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x00010b121e00(param_2);
  }
  FUN_10b1f786c(&uStack_60);
  return;
}



/* Entry: 10b1f786c; end: 10b1f78db;  */

long FUN_10b1f786c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x50;
      func_0x00010b121e00();
    }
  }
  return param_1;
}



/* Entry: 10b1f78dc; end: 10b1f78e3;  */

void FUN_10b1f78dc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f7e34(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x00010b121e00();
  }
  return;
}



/* Entry: 10b1f78e4; end: 10b1f7917;  */

void FUN_10b1f78e4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f7e34();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x50;
    func_0x00010b121e00();
  }
  return;
}



/* Entry: 10b1f7918; end: 10b1f7943;  */

void FUN_10b1f7918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b1f7944(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b1f7944; end: 10b1f79bb;  */

undefined1  [16] FUN_10b1f7944(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auStack_80 [80];
  
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_10b202630(auStack_80,param_2);
    FUN_10b1f79bc(param_4,auStack_80);
    func_0x00010b121e00(auStack_80);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10b1f79bc; end: 10b1f7a1f;  */

long FUN_10b1f79bc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010b1f79f8();
    lVar2 = uVar1 + 0x50;
  }
  else {
    lVar2 = param_1;
    FUN_10b1f7a20();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x50;
}



/* Entry: 10b1f7a20; end: 10b1f7adb;  */

long * FUN_10b1f7a20(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plStack_78;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  uVar1 = (param_1[1] - *param_1) / 0x50 + 1;
  if (0x333333333333333 < uVar1) {
    FUN_10b1f76a0();
    func_0x00010b1f7e2c();
    func_0x00010b1f7da8();
    plStack_78 = param_1;
    func_0x00010b1f7b10(&plStack_78);
    return param_1;
  }
  uVar2 = (param_1[2] - *param_1) / 0x50;
  uVar3 = uVar2 * 2;
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar3 = uVar1;
  }
  if (0x199999999999998 < uVar2) {
    uVar3 = 0x333333333333333;
  }
  FUN_10b1f773c(auStack_48,uVar3);
  FUN_10b1a46c8(lStack_38,param_2);
  lStack_38 = lStack_38 + 0x50;
  func_0x00010b1f7e74();
  plVar4 = (long *)param_1[1];
  func_0x00010b1f7e2c();
  return plVar4;
}



/* Entry: 10b1f7adc; end: 10b1f7b4b;  */

undefined8 FUN_10b1f7adc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b1f7b10(&uStack_28);
  return param_1;
}



/* Entry: 10b1f7b4c; end: 10b1f7b53;  */

void FUN_10b1f7b4c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f7e34(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x00010b121e00();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1f7b54; end: 10b1f7b87;  */

void FUN_10b1f7b54(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b1f7e34();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x50;
    func_0x00010b121e00();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b1f7b88; end: 10b1f7ccf;  */

void FUN_10b1f7b88(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  puVar5 = *(undefined8 **)(param_3 + 0x10);
  lStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lVar1 = param_1[1];
  for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x48) {
    puVar3 = puVar5 + 6;
    func_0x000107c278d0(puVar3,lVar6);
    uVar2 = uStack_88;
    if ((int)puVar3 != 0) {
      if (uStack_88 < uStack_80) {
        FUN_10b1285e0(uStack_88,lVar6);
        uStack_88 = uVar2 + 0x48;
      }
      else {
        plVar4 = &lStack_90;
        FUN_10b1d850c(&lStack_90,(long)(uStack_88 - lStack_90) / 0x48 + 1);
        FUN_10b1d85bc(auStack_78,plVar4,(long)(uStack_88 - lStack_90) / 0x48,&uStack_80);
        FUN_10b1285e0(lStack_68,lVar6);
        lStack_68 = lStack_68 + 0x48;
        FUN_10b1d8564(&lStack_90,auStack_78);
        uVar2 = uStack_88;
        func_0x00010b1d86c8(auStack_78);
        uStack_88 = uVar2;
      }
    }
  }
  (*(code *)*puVar5)(&lStack_90,param_2,puVar5);
  func_0x00010b128754(&lStack_90);
  return;
}



/* Entry: 10b1f7cd0; end: 10b1f7cef;  */

void FUN_10b1f7cd0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1f7450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1f7cf0; end: 10b1f7e93;  */

void FUN_10b1f7cf0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1f7e94; end: 10b1f8203;  */

undefined8 * FUN_10b1f7e94(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [24];
  undefined1 uStack_598;
  undefined1 uStack_568;
  undefined8 uStack_560;
  undefined1 auStack_558 [24];
  undefined1 uStack_540;
  undefined1 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [24];
  undefined1 uStack_4e8;
  undefined1 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 auStack_4a8 [24];
  undefined1 uStack_490;
  undefined1 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_450 [24];
  undefined1 uStack_438;
  undefined1 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [24];
  undefined1 uStack_3e0;
  undefined1 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 uStack_388;
  undefined1 uStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [24];
  undefined1 uStack_330;
  undefined1 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [24];
  undefined1 uStack_2d8;
  undefined1 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined1 uStack_280;
  undefined1 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [24];
  undefined1 uStack_228;
  undefined1 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 uStack_1d0;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [24];
  undefined1 uStack_178;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_5b8 = 0x500000004;
  func_0x000107c278b8(auStack_5b0,&UNK_10f7333d2);
  uStack_598 = 0;
  uStack_568 = 0;
  uStack_560 = 0x600000005;
  func_0x000107c278b8(auStack_558,&UNK_10f733464);
  uStack_540 = 0;
  uStack_510 = 0;
  uStack_508 = 0x700000006;
  func_0x000107c278b8(auStack_500,&DAT_10f590110);
  uStack_4e8 = 0;
  uStack_4b8 = 0;
  uStack_4b0 = 0x800000007;
  func_0x000107c278b8(auStack_4a8,&UNK_10f7334b4);
  uStack_490 = 0;
  uStack_460 = 0;
  uStack_458 = 0x900000008;
  func_0x000107c278b8(auStack_450,&UNK_10f73350a);
  uStack_438 = 0;
  uStack_408 = 0;
  uStack_400 = 0xa00000009;
  func_0x000107c278b8(auStack_3f8,&UNK_10f733555);
  uStack_3e0 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0xb0000000a;
  func_0x000107c278b8(auStack_3a0,&UNK_10f73366e);
  uStack_388 = 0;
  uStack_358 = 0;
  uStack_350 = 0xc0000000b;
  func_0x000107c278b8(auStack_348,&UNK_10f7336b2);
  uStack_330 = 0;
  uStack_300 = 0;
  uStack_2f8 = 0xd0000000c;
  func_0x000107c278b8(auStack_2f0,&UNK_10f733713);
  uStack_2d8 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0xe0000000d;
  func_0x000107c278b8(auStack_298,&UNK_10f7338e9);
  uStack_280 = 0;
  uStack_250 = 0;
  uStack_248 = 0xf0000000e;
  func_0x000107c278b8(auStack_240,&UNK_10f7339f1);
  uStack_228 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0x100000000f;
  func_0x000107c278b8(auStack_1e8,&UNK_10f733b43);
  uStack_1d0 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0x1100000010;
  func_0x000107c278b8(auStack_190,&UNK_10f733b90);
  uStack_178 = 0;
  uStack_148 = 0;
  uStack_140 = 0x1200000011;
  func_0x000107c278b8(auStack_138,&UNK_10f733be0);
  uStack_120 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0x1300000012;
  func_0x000107c278b8(auStack_e0,&UNK_10f733c88);
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0x1400000013;
  func_0x000107c278b8(auStack_88,&UNK_10f733e36);
  uStack_70 = 0;
  uStack_40 = 0;
  uVar3 = 0x14;
  func_0x000107c313e4(param_1,0x14,&UNK_10f732590,&uStack_5b8,0x10);
  lVar4 = 0x528;
  do {
    puVar1 = (undefined8 *)(auStack_5b0 + lVar4 + -8);
    func_0x000107c27e50();
    lVar4 = lVar4 + -0x58;
  } while (lVar4 != -0x58);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_90;
  lVar4 = -0x580;
  do {
    func_0x000107c27e50(puVar2);
    puVar2 = puVar2 + -0xb;
    lVar4 = lVar4 + 0x58;
  } while (lVar4 != 0);
  __Unwind_Resume();
  *puVar1 = &PTR_FUN_110cc4da8;
  puVar1[1] = uVar3;
  FUN_10b1f823c(puVar1 + 2,uVar3);
  return puVar1;
}



/* Entry: 10b1f8204; end: 10b1f823b;  */

undefined8 * FUN_10b1f8204(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cc4da8;
  param_1[1] = param_2;
  FUN_10b1f823c(param_1 + 2,param_2);
  return param_1;
}



/* Entry: 10b1f823c; end: 10b1f8287;  */

void FUN_10b1f823c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x20b8;
  __Znwm();
  FUN_10b1f9614();
  *param_1 = uVar1;
  return;
}



/* Entry: 10b1f8288; end: 10b1f8507;  */

undefined8 * FUN_10b1f8288(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110cc4da8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010b1f9600(0x2030);
    func_0x00010b1f9600(0x1fa8);
    func_0x00010b1f9600(0x1f20);
    func_0x00010b1f9600(0x1e98);
    func_0x00010b1f9600(0x1e10);
    func_0x00010b1f9600(0x1d88);
    func_0x00010b1f9600(0x1d00);
    func_0x00010b1f9600(0x1c78);
    func_0x00010b1f9600(0x1bf0);
    func_0x00010b1f9600(0x1b68);
    func_0x00010b1f9600(0x1ae0);
    func_0x00010b1f9600(0x1a58);
    func_0x00010b1f9600(0x19d0);
    func_0x00010b1f9600(0x1948);
    func_0x00010b1f9600(0x18c0);
    func_0x00010b1f9600(0x1838);
    func_0x00010b1f9600(0x17b0);
    func_0x00010b1f9600(0x1728);
    func_0x00010b1f9600(0x16a0);
    func_0x00010b1f9600(0x1618);
    func_0x00010b1f9600(0x1590);
    FUN_10b1f8520(lVar1 + 0x1518);
    func_0x00010b1f85a0(lVar1 + 0x14a0);
    func_0x00010b1f8620(lVar1 + 0x1428);
    func_0x00010b1f86a0(lVar1 + 0x13b0);
    func_0x00010b1f8720(lVar1 + 0x1338);
    func_0x00010b1f87a0(lVar1 + 0x12c0);
    func_0x00010b1f87a0(lVar1 + 0x1248);
    func_0x00010b1f8820(lVar1 + 0x11d0);
    func_0x00010b1f88a0(lVar1 + 0x1158);
    func_0x00010b1f8920(lVar1 + 0x10e0);
    func_0x00010b1f89a0(lVar1 + 0x1068);
    func_0x00010b1f8a20(lVar1 + 0xff0);
    func_0x00010b1f8aa0(lVar1 + 0xf78);
    func_0x00010b1f8aa0(lVar1 + 0xf00);
    func_0x00010b1f8aa0(lVar1 + 0xe88);
    func_0x00010b1f8b20(lVar1 + 0xe10);
    func_0x00010b1f8ba0(lVar1 + 0xd98);
    func_0x00010b1f8c20(lVar1 + 0xd20);
    func_0x00010b1f8aa0(lVar1 + 0xca8);
    func_0x00010b1f8b20(lVar1 + 0xc30);
    func_0x00010b1f8b20(lVar1 + 3000);
    func_0x00010b1f8b20(lVar1 + 0xb40);
    func_0x00010b1f8b20(lVar1 + 0xac8);
    func_0x00010b1f8ca0(lVar1 + 0xa50);
    func_0x00010b1f8d20(lVar1 + 0x9d8);
    func_0x00010b1f8da0(lVar1 + 0x960);
    func_0x00010b1f8b20(lVar1 + 0x8e8);
    func_0x00010b1f8b20(lVar1 + 0x870);
    func_0x00010b1f8e20(lVar1 + 0x7f8);
    func_0x00010b1f8ea0(lVar1 + 0x780);
    func_0x00010b1f8f20(lVar1 + 0x708);
    func_0x00010b1f8fa0(lVar1 + 0x690);
    func_0x00010b1f9020(lVar1 + 0x618);
    func_0x00010b1f90a0(lVar1 + 0x5a0);
    func_0x00010b1f9120(lVar1 + 0x528);
    func_0x00010b1f91a0(lVar1 + 0x4b0);
    func_0x00010b1f8b20(lVar1 + 0x438);
    func_0x00010b1f8b20(lVar1 + 0x3c0);
    func_0x00010b1f8aa0(lVar1 + 0x348);
    func_0x00010b1f9220(lVar1 + 0x2d0);
    func_0x00010b1f92a0(lVar1 + 600);
    func_0x00010b1f9320(lVar1 + 0x1e0);
    func_0x00010b1f93a0(lVar1 + 0x168);
    func_0x00010b1f9420(lVar1 + 0xf0);
    func_0x00010b1f94a0(lVar1 + 0x78);
    func_0x00010b1f9520(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1f8508; end: 10b1f850b;  */

undefined8 * FUN_10b1f8508(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110cc4da8;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    func_0x00010b1f9600(0x2030);
    func_0x00010b1f9600(0x1fa8);
    func_0x00010b1f9600(0x1f20);
    func_0x00010b1f9600(0x1e98);
    func_0x00010b1f9600(0x1e10);
    func_0x00010b1f9600(0x1d88);
    func_0x00010b1f9600(0x1d00);
    func_0x00010b1f9600(0x1c78);
    func_0x00010b1f9600(0x1bf0);
    func_0x00010b1f9600(0x1b68);
    func_0x00010b1f9600(0x1ae0);
    func_0x00010b1f9600(0x1a58);
    func_0x00010b1f9600(0x19d0);
    func_0x00010b1f9600(0x1948);
    func_0x00010b1f9600(0x18c0);
    func_0x00010b1f9600(0x1838);
    func_0x00010b1f9600(0x17b0);
    func_0x00010b1f9600(0x1728);
    func_0x00010b1f9600(0x16a0);
    func_0x00010b1f9600(0x1618);
    func_0x00010b1f9600(0x1590);
    FUN_10b1f8520(lVar1 + 0x1518);
    func_0x00010b1f85a0(lVar1 + 0x14a0);
    func_0x00010b1f8620(lVar1 + 0x1428);
    func_0x00010b1f86a0(lVar1 + 0x13b0);
    func_0x00010b1f8720(lVar1 + 0x1338);
    func_0x00010b1f87a0(lVar1 + 0x12c0);
    func_0x00010b1f87a0(lVar1 + 0x1248);
    func_0x00010b1f8820(lVar1 + 0x11d0);
    func_0x00010b1f88a0(lVar1 + 0x1158);
    func_0x00010b1f8920(lVar1 + 0x10e0);
    func_0x00010b1f89a0(lVar1 + 0x1068);
    func_0x00010b1f8a20(lVar1 + 0xff0);
    func_0x00010b1f8aa0(lVar1 + 0xf78);
    func_0x00010b1f8aa0(lVar1 + 0xf00);
    func_0x00010b1f8aa0(lVar1 + 0xe88);
    func_0x00010b1f8b20(lVar1 + 0xe10);
    func_0x00010b1f8ba0(lVar1 + 0xd98);
    func_0x00010b1f8c20(lVar1 + 0xd20);
    func_0x00010b1f8aa0(lVar1 + 0xca8);
    func_0x00010b1f8b20(lVar1 + 0xc30);
    func_0x00010b1f8b20(lVar1 + 3000);
    func_0x00010b1f8b20(lVar1 + 0xb40);
    func_0x00010b1f8b20(lVar1 + 0xac8);
    func_0x00010b1f8ca0(lVar1 + 0xa50);
    func_0x00010b1f8d20(lVar1 + 0x9d8);
    func_0x00010b1f8da0(lVar1 + 0x960);
    func_0x00010b1f8b20(lVar1 + 0x8e8);
    func_0x00010b1f8b20(lVar1 + 0x870);
    func_0x00010b1f8e20(lVar1 + 0x7f8);
    func_0x00010b1f8ea0(lVar1 + 0x780);
    func_0x00010b1f8f20(lVar1 + 0x708);
    func_0x00010b1f8fa0(lVar1 + 0x690);
    func_0x00010b1f9020(lVar1 + 0x618);
    func_0x00010b1f90a0(lVar1 + 0x5a0);
    func_0x00010b1f9120(lVar1 + 0x528);
    func_0x00010b1f91a0(lVar1 + 0x4b0);
    func_0x00010b1f8b20(lVar1 + 0x438);
    func_0x00010b1f8b20(lVar1 + 0x3c0);
    func_0x00010b1f8aa0(lVar1 + 0x348);
    func_0x00010b1f9220(lVar1 + 0x2d0);
    func_0x00010b1f92a0(lVar1 + 600);
    func_0x00010b1f9320(lVar1 + 0x1e0);
    func_0x00010b1f93a0(lVar1 + 0x168);
    func_0x00010b1f9420(lVar1 + 0xf0);
    func_0x00010b1f94a0(lVar1 + 0x78);
    func_0x00010b1f9520(lVar1);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1f850c; end: 10b1f851f;  */

void FUN_10b1f850c(void)

{
  FUN_10b1f8288();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1f8520; end: 10b1f8543;  */

void FUN_10b1f8520(void)

{
  func_0x00010b1f95f4();
  FUN_10b1f8544();
  func_0x00010b1f95d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)();
  return;
}



/* Entry: 10b1f8544; end: 10b1f8583;  */

void FUN_10b1f8544(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b1f95a0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10b1f8584();
    }
  }
  return;
}



/* Entry: 10b1f8584; end: 10b1f85c3;  */

void FUN_10b1f8584(void)

{
  func_0x00010b1f95c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1f85c4; end: 10b1f8603;  */

void FUN_10b1f85c4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b1f95a0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10b1f8604();
    }
  }
  return;
}



/* Entry: 10b1f8604; end: 10b1f8643;  */

void FUN_10b1f8604(void)

{
  func_0x00010b1f95c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1f8644; end: 10b1f8683;  */

void FUN_10b1f8644(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b1f95a0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10b1f8684();
    }
  }
  return;
}



/* Entry: 10b1f8684; end: 10b1f86c3;  */

void FUN_10b1f8684(void)

{
  func_0x00010b1f95c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1f86c4; end: 10b1f8703;  */

void FUN_10b1f86c4(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b1f95a0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10b1f8704();
    }
  }
  return;
}



/* Entry: 10b1f8704; end: 10b1f8743;  */

void FUN_10b1f8704(void)

{
  func_0x00010b1f95c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1f8744; end: 10b1f8783;  */

void FUN_10b1f8744(long param_1,long param_2)

{
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_10b1f95a0();
    while (param_2 != unaff_x19) {
      param_2 = *(long *)(param_2 + 8);
      FUN_10b1f8784();
    }
  }
  return;
}



/* Entry: 10b1f8784; end: 10b1f87c3;  */

void FUN_10b1f8784(void)

{
  func_0x00010b1f95c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


