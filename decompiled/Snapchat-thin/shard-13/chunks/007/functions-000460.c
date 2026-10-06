/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aacb314; end: 10aacb473;  */

void FUN_10aacb314(undefined8 *param_1,long *param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long *plVar6;
  int iVar7;
  int aiStack_b0 [14];
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)((long)param_1 + 0x14) = 0x101;
  *(undefined1 *)((long)param_1 + 0x16) = 2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *param_1 = 0;
  param_1[1] = 0xffffffff3da9fbe7;
  piVar1 = (int *)param_1;
  if (param_3 != 0) {
    plVar6 = param_2 + param_3 * 0xb;
    do {
      lVar4 = (long)*(char *)((long)param_2 + 0x17);
      plVar2 = param_2;
      if (lVar4 < 0) {
        lVar4 = param_2[1];
        plVar2 = (long *)*param_2;
      }
      if (((lVar4 == 9) && (*plVar2 == 0x646f427265707075 && (char)plVar2[1] == 'y')) &&
         (0 < (int)param_2[5])) {
        iVar7 = 0;
        do {
          uStack_78 = 0;
          uStack_70 = 0x500;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_64 = 3;
          uStack_60 = 0;
          uStack_5c = 0;
          aiStack_b0[0] = iVar7;
          FUN_10a4c3c44(param_1,aiStack_b0);
          piVar1 = aiStack_b0;
          FUN_10a22d0f8();
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)param_2[5]);
      }
      param_2 = param_2 + 0xb;
    } while (param_2 != plVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (piVar1 != (int *)0x0) {
    if (((*(byte *)((long)piVar1 + 0x10) >> 1 & 1) != 0) &&
       ((*(byte *)(*(long *)((long)piVar1 + 0x50) + 0x10) >> 2 & 1) != 0)) {
      lVar4 = *(long *)(*(long *)((long)piVar1 + 0x50) + 0x28);
      *(undefined1 *)(lVar4 + 0x48) = 0;
      *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 8;
    }
    uVar3 = *(ulong *)((long)piVar1 + 0x30);
    puVar5 = (ulong *)((long)piVar1 + 0x30);
    if ((uVar3 & 1) != 0) {
      puVar5 = (ulong *)(uVar3 + 7);
    }
    if (*(int *)((long)piVar1 + 0x38) != 0) {
      lVar4 = (long)*(int *)((long)piVar1 + 0x38) << 3;
      do {
        FUN_10aacb474(*puVar5);
        lVar4 = lVar4 + -8;
        puVar5 = puVar5 + 1;
      } while (lVar4 != 0);
    }
  }
  return;
}



/* Entry: 10aacb474; end: 10aacb4e3;  */

void FUN_10aacb474(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (param_1 != 0) {
    if (((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x50) + 0x10) >> 2 & 1) != 0)) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x28);
      *(undefined1 *)(lVar1 + 0x48) = 0;
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) | 8;
    }
    uVar2 = *(ulong *)(param_1 + 0x30);
    puVar3 = (ulong *)(param_1 + 0x30);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar1 = (long)*(int *)(param_1 + 0x38) << 3;
      do {
        FUN_10aacb474(*puVar3);
        lVar1 = lVar1 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar1 != 0);
    }
  }
  return;
}



/* Entry: 10aacb4e4; end: 10aaccd53;  */

/* WARNING: Removing unreachable block (ram,0x00010aacbf18) */

void FUN_10aacb4e4(ulong *param_1,undefined8 *****param_2,uint *param_3,long param_4,
                  undefined8 *param_5,long param_6,long param_7,undefined8 *param_8)

{
  float *pfVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined **ppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  long *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 uVar20;
  long lVar21;
  ulong *puVar22;
  ulong *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong uVar29;
  undefined **ppuVar30;
  long lVar31;
  long *plVar32;
  int *piVar33;
  uint *puVar34;
  ulong *puVar35;
  undefined8 *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  ulong *puVar39;
  ulong *puVar40;
  undefined8 *puVar41;
  uint *puVar42;
  ulong *puVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 ****ppppuStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined8 ****ppppuStack_278;
  undefined8 *puStack_270;
  char cStack_261;
  long *plStack_260;
  long *plStack_258;
  undefined8 ****ppppuStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined1 auStack_190 [24];
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong *puStack_160;
  ulong *puStack_158;
  ulong *puStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  ulong *puStack_138;
  undefined8 ****ppppuStack_130;
  long *plStack_128;
  undefined7 uStack_120;
  char cStack_119;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  
  puStack_148 = (ulong *)0x0;
  puStack_140 = (ulong *)0x0;
  puStack_138 = (ulong *)0x0;
  puStack_160 = (ulong *)0x0;
  puStack_158 = (ulong *)0x0;
  puStack_150 = (ulong *)0x0;
  puVar23 = param_1;
  puVar43 = puStack_160;
  puVar35 = puStack_158;
  puVar40 = puStack_150;
  if (param_4 != 0) {
    puVar40 = (ulong *)0x0;
    puVar35 = (ulong *)0x0;
    puVar12 = (ulong *)0x0;
    puVar11 = (ulong *)0x0;
    puVar42 = param_3;
    do {
      if (puStack_138 <= puStack_140) {
        lVar21 = (long)puStack_140 - (long)puVar11;
        uVar29 = (lVar21 >> 4) * -0x5555555555555555 + 1;
        if (uVar29 < 0x555555555555556) {
          lVar31 = (long)puStack_138 - (long)puVar11 >> 4;
          uVar37 = lVar31 * 0x5555555555555556;
          if (uVar37 < uVar29 || uVar37 - uVar29 == 0) {
            uVar37 = uVar29;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar31 * -0x5555555555555555)) {
            uVar37 = 0x555555555555555;
          }
          if (uVar37 < 0x555555555555556) {
            puVar10 = (ulong *)(uVar37 * 0x30);
            __Znwm();
            puVar43 = (ulong *)((long)puVar10 + lVar21);
            uVar45 = *(ulong *)(puVar42 + 0x24);
            uVar27 = *(ulong *)(puVar42 + 0x22);
            uVar47 = *(ulong *)(puVar42 + 0x26);
            uVar26 = *(ulong *)(puVar42 + 0x2c);
            uVar29 = *(ulong *)(puVar42 + 0x2a);
            puVar43[3] = *(ulong *)(puVar42 + 0x28);
            puVar43[2] = uVar47;
            puVar43[5] = uVar26;
            puVar43[4] = uVar29;
            puVar43[1] = uVar45;
            *puVar43 = uVar27;
            puVar23 = puVar10;
            _memcpy();
            puStack_148 = puVar10;
            puStack_138 = puVar10 + uVar37 * 6;
            if (puVar11 != (ulong *)0x0) {
              __ZdlPv();
              puVar23 = puVar11;
            }
            goto LAB_10aacb644;
          }
LAB_10aacc6ec:
          puStack_160 = puVar12;
          puStack_158 = puVar35;
          puStack_150 = puVar40;
          func_0x000109ffded8();
        }
        else {
          puStack_160 = puVar12;
          puStack_158 = puVar35;
          puStack_150 = puVar40;
          func_0x00010aadb014();
        }
        goto LAB_10aaccacc;
      }
      uVar27 = *(ulong *)(puVar42 + 0x24);
      uVar26 = *(ulong *)(puVar42 + 0x22);
      uVar45 = *(ulong *)(puVar42 + 0x26);
      uVar37 = *(ulong *)(puVar42 + 0x2c);
      uVar29 = *(ulong *)(puVar42 + 0x2a);
      puStack_140[3] = *(ulong *)(puVar42 + 0x28);
      puStack_140[2] = uVar45;
      puStack_140[5] = uVar37;
      puStack_140[4] = uVar29;
      puStack_140[1] = uVar27;
      *puStack_140 = uVar26;
      puVar10 = puVar11;
      puVar43 = puStack_140;
LAB_10aacb644:
      puStack_140 = puVar43 + 6;
      if (puVar35 < puVar40) {
        uVar27 = *(ulong *)(puVar42 + 4);
        uVar26 = *(ulong *)(puVar42 + 2);
        uVar45 = *(ulong *)(puVar42 + 6);
        uVar37 = *(ulong *)(puVar42 + 0xc);
        uVar29 = *(ulong *)(puVar42 + 10);
        puVar35[3] = *(ulong *)(puVar42 + 8);
        puVar35[2] = uVar45;
        puVar35[5] = uVar37;
        puVar35[4] = uVar29;
        puVar35[1] = uVar27;
        *puVar35 = uVar26;
        uVar27 = *(ulong *)(puVar42 + 0x10);
        uVar26 = *(ulong *)(puVar42 + 0xe);
        uVar47 = *(ulong *)(puVar42 + 0x14);
        uVar45 = *(ulong *)(puVar42 + 0x12);
        uVar37 = *(ulong *)(puVar42 + 0x18);
        uVar29 = *(ulong *)(puVar42 + 0x16);
        uVar7 = *(undefined8 *)(puVar42 + 0x19);
        *(undefined8 *)((long)puVar35 + 100) = *(undefined8 *)(puVar42 + 0x1b);
        *(undefined8 *)((long)puVar35 + 0x5c) = uVar7;
        puVar35[9] = uVar47;
        puVar35[8] = uVar45;
        puVar35[0xb] = uVar37;
        puVar35[10] = uVar29;
        puVar35[7] = uVar27;
        puVar35[6] = uVar26;
        lVar21 = *(long *)(puVar42 + 0x20);
        uVar29 = *(ulong *)(puVar42 + 0x1e);
        puVar35[0xf] = *(ulong *)(puVar42 + 0x20);
        puVar35[0xe] = uVar29;
        puVar43 = puVar12;
        if (lVar21 != 0) {
          plVar16 = (long *)(lVar21 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = *plVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        lVar21 = (long)puVar35 - (long)puVar12 >> 7;
        uVar29 = lVar21 + 1;
        if (uVar29 >> 0x39 != 0) {
          puStack_160 = puVar12;
          puStack_158 = puVar35;
          puStack_150 = puVar40;
          func_0x00010aadb028();
          goto LAB_10aaccacc;
        }
        uVar37 = (long)puVar40 - (long)puVar12 >> 6;
        if (uVar37 <= uVar29) {
          uVar37 = uVar29;
        }
        if (0x7fffffffffffff7f < (ulong)((long)puVar40 - (long)puVar12)) {
          uVar37 = 0x1ffffffffffffff;
        }
        if (uVar37 >> 0x39 != 0) goto LAB_10aacc6ec;
        puVar40 = (ulong *)(uVar37 << 7);
        __Znwm();
        puVar11 = (ulong *)((long)puVar40 + ((long)puVar35 - (long)puVar12));
        uVar45 = *(ulong *)(puVar42 + 4);
        uVar27 = *(ulong *)(puVar42 + 2);
        uVar47 = *(ulong *)(puVar42 + 6);
        uVar26 = *(ulong *)(puVar42 + 0xc);
        uVar29 = *(ulong *)(puVar42 + 10);
        puVar11[3] = *(ulong *)(puVar42 + 8);
        puVar11[2] = uVar47;
        puVar11[5] = uVar26;
        puVar11[4] = uVar29;
        puVar11[1] = uVar45;
        *puVar11 = uVar27;
        uVar45 = *(ulong *)(puVar42 + 0x10);
        uVar27 = *(ulong *)(puVar42 + 0xe);
        uVar48 = *(ulong *)(puVar42 + 0x14);
        uVar47 = *(ulong *)(puVar42 + 0x12);
        uVar26 = *(ulong *)(puVar42 + 0x18);
        uVar29 = *(ulong *)(puVar42 + 0x16);
        uVar7 = *(undefined8 *)(puVar42 + 0x19);
        *(undefined8 *)((long)puVar11 + 100) = *(undefined8 *)(puVar42 + 0x1b);
        *(undefined8 *)((long)puVar11 + 0x5c) = uVar7;
        puVar11[9] = uVar48;
        puVar11[8] = uVar47;
        puVar11[0xb] = uVar26;
        puVar11[10] = uVar29;
        puVar11[7] = uVar45;
        puVar11[6] = uVar27;
        lVar31 = *(long *)(puVar42 + 0x20);
        uVar29 = *(ulong *)(puVar42 + 0x1e);
        puVar11[0xf] = *(ulong *)(puVar42 + 0x20);
        puVar11[0xe] = uVar29;
        if (lVar31 != 0) {
          plVar16 = (long *)(lVar31 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar5) {
              *plVar16 = *plVar16 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar43 = puVar11 + lVar21 * -0x10;
        puVar23 = puVar40;
        puVar22 = puVar12;
        puVar28 = puVar43;
        if (puVar12 != puVar35) {
          do {
            uVar45 = puVar22[1];
            uVar27 = *puVar22;
            uVar47 = puVar22[2];
            uVar26 = puVar22[5];
            uVar29 = puVar22[4];
            puVar28[3] = puVar22[3];
            puVar28[2] = uVar47;
            puVar28[5] = uVar26;
            puVar28[4] = uVar29;
            puVar28[1] = uVar45;
            *puVar28 = uVar27;
            uVar45 = puVar22[7];
            uVar27 = puVar22[6];
            uVar48 = puVar22[9];
            uVar47 = puVar22[8];
            uVar26 = puVar22[0xb];
            uVar29 = puVar22[10];
            uVar7 = *(undefined8 *)((long)puVar22 + 0x5c);
            *(undefined8 *)((long)puVar28 + 100) = *(undefined8 *)((long)puVar22 + 100);
            *(undefined8 *)((long)puVar28 + 0x5c) = uVar7;
            puVar28[9] = uVar48;
            puVar28[8] = uVar47;
            puVar28[0xb] = uVar26;
            puVar28[10] = uVar29;
            puVar28[7] = uVar45;
            puVar28[6] = uVar27;
            uVar29 = puVar22[0xe];
            puVar28[0xf] = puVar22[0xf];
            puVar28[0xe] = uVar29;
            puVar22[0xe] = 0;
            puVar22[0xf] = 0;
            puVar22 = puVar22 + 0x10;
            puVar28 = puVar28 + 0x10;
            puVar39 = puVar12;
          } while (puVar22 != puVar35);
          do {
            puVar23 = puVar39 + 0xe;
            func_0x00010a042d30();
            puVar39 = puVar39 + 0x10;
          } while (puVar39 != puVar35);
        }
        puVar40 = puVar40 + uVar37 * 0x10;
        puVar35 = puVar11;
        if (puVar12 != (ulong *)0x0) {
          __ZdlPv();
          puVar23 = puVar12;
        }
      }
      puVar35 = puVar35 + 0x10;
      puVar42 = puVar42 + 0x32;
      puVar12 = puVar43;
      puVar11 = puVar10;
    } while (puVar42 != param_3 + param_4 * 0x32);
  }
  puStack_150 = puVar40;
  puStack_158 = puVar35;
  puStack_160 = puVar43;
  iVar9 = (int)puVar23;
  FUN_10ad055a0();
  if (iVar9 != 0) {
    ppuVar13 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar13 == (undefined *)0x0) {
      ppuVar13 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar16 = (long *)*ppuVar13;
      if ((plVar16 == (long *)0x0) || ((**(code **)(*plVar16 + 0x18))(), plVar16 == (long *)0x0))
      goto LAB_10aacb830;
      plVar16 = plVar16 + 7;
    }
    else {
      plVar16 = (long *)(*ppuVar13 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar16 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppuStack_2a0,&UNK_10f68dfb0);
      func_0x000107c2b054(&ppppuStack_130,&UNK_10f68da37);
      if ((long)uStack_290 < 0) {
        ppppuStack_250 = (undefined8 ****)"null";
        if (puStack_298 != (undefined8 *)0x0) {
          ppppuStack_250 = ppppuStack_2a0;
        }
      }
      else {
        ppppuStack_250 = (undefined8 ****)"null";
        if (uStack_290._7_1_ != '\0') {
          ppppuStack_250 = &ppppuStack_2a0;
        }
      }
      if (cStack_119 < '\0') {
        uStack_110 = (undefined8 *****)"null";
        if (plStack_128 != (long *)0x0) {
          uStack_110 = (undefined8 *****)ppppuStack_130;
        }
      }
      else {
        uStack_110 = (undefined8 *****)"null";
        if (cStack_119 != '\0') {
          uStack_110 = &ppppuStack_130;
        }
      }
      FUN_10a224324(&ppppuStack_250,&uStack_110);
      if ((long)uStack_290 < 0) {
        if (puStack_298 == (undefined8 *)0x0) goto LAB_10aacc874;
        func_0x000107c3192c(&ppppuStack_250,ppppuStack_2a0);
LAB_10aacc990:
        uVar20 = 1;
      }
      else {
        if (uStack_290._7_1_ != '\0') {
          puStack_248 = puStack_298;
          ppppuStack_250 = ppppuStack_2a0;
          uStack_240 = uStack_290;
          goto LAB_10aacc990;
        }
LAB_10aacc874:
        uVar20 = 0;
        ppppuStack_250 = (undefined8 ****)((ulong)ppppuStack_250 & 0xffffffffffffff00);
      }
      uStack_238 = CONCAT71(uStack_238._1_7_,uVar20);
      if (cStack_119 < '\0') {
        if (plStack_128 == (long *)0x0) goto LAB_10aacc9bc;
        func_0x000107c3192c(&uStack_110,ppppuStack_130);
LAB_10aacca68:
        uVar20 = 1;
      }
      else {
        if (cStack_119 != '\0') {
          uStack_108 = plStack_128;
          uStack_110 = (undefined8 *****)ppppuStack_130;
          uStack_100 = CONCAT17(cStack_119,uStack_120);
          goto LAB_10aacca68;
        }
LAB_10aacc9bc:
        uVar20 = 0;
        uStack_110 = (undefined8 *****)((ulong)uStack_110 & 0xffffffffffffff00);
      }
      uStack_f8 = CONCAT71(uStack_f8._1_7_,uVar20);
      FUN_10a234a0c(&ppppuStack_250,&uStack_110);
      goto LAB_10aaccacc;
    }
  }
LAB_10aacb830:
  ppppuStack_2a0 =
       (undefined8 ****)
       (CONCAT71(ppppuStack_2a0._1_7_,*(byte *)((long)param_5 + 0x2c) >> 6) & 0xffffffffffffff01);
  uStack_110 = (undefined8 *****)0x0;
  puStack_248 = &uStack_110;
  uStack_240 = &ppppuStack_2a0;
  ppppuStack_250 = param_2;
  func_0x0001093f3884(param_2[3],&ppppuStack_250);
  puVar23 = (ulong *)(param_5[3] + 0x30);
  uVar29 = *puVar23;
  if ((uVar29 & 1) != 0) {
    puVar23 = (ulong *)(uVar29 + 7);
  }
  iVar9 = *(int *)(param_5[3] + 0x38);
  if (iVar9 != 0) {
    puVar40 = puVar23 + iVar9;
    do {
      ppuVar30 = *(undefined ***)(*puVar23 + 0x50);
      ppuVar13 = &PTR_PTR_1132d18f0;
      if (ppuVar30 != (undefined **)0x0) {
        ppuVar13 = ppuVar30;
      }
      ppuVar30 = &PTR_PTR_1132d1630;
      if ((undefined **)ppuVar13[5] != (undefined **)0x0) {
        ppuVar30 = (undefined **)ppuVar13[5];
      }
      if (((ulong)ppuVar30[2] & 1) == 0) {
        puVar41 = (undefined8 *)((ulong)ppuVar30[7] & 0xfffffffffffffffc);
        cVar4 = *(char *)((long)puVar41 + 0x17);
        if (cVar4 < '\0') {
          if (puVar41[1] != 0) goto LAB_10aacb8d4;
        }
        else if (cVar4 != '\0') {
LAB_10aacb8d4:
          plVar16 = (long *)(*(ulong *)(*puVar23 + 0x48) & 0xfffffffffffffffc);
          cVar3 = *(char *)((long)plVar16 + 0x17);
          lVar21 = (long)cVar3;
          pppppuVar14 = param_2;
          if (lVar21 < 0) {
            plVar24 = (long *)*plVar16;
            lVar31 = plVar16[1];
            func_0x0001093f2fec(param_2,plVar24,lVar31);
          }
          else {
            func_0x0001093f2fec(param_2,plVar16,lVar21);
            plVar24 = plVar16;
            lVar31 = lVar21;
          }
          if (((ulong)pppppuVar14 & 1) == 0) {
            if (((lVar31 != 4) || ((int)*plVar24 != 0x646e6168)) ||
               ((*(byte *)((long)param_5 + 0x2c) & 3) == 0)) {
              plVar24 = plVar16;
              lVar31 = lVar21;
              if (cVar3 < '\0') {
                plVar24 = (long *)*plVar16;
                lVar31 = plVar16[1];
              }
              if (((lVar31 != 5) ||
                  ((int)*plVar24 != 0x6c6f6877 || *(char *)((long)plVar24 + 4) != 'e')) ||
                 ((*(byte *)((long)param_5 + 0x2c) & 0x18) == 0)) {
                plVar24 = plVar16;
                if (cVar3 < '\0') {
                  lVar21 = plVar16[1];
                  plVar24 = (long *)*plVar16;
                }
                if (((lVar21 != 0x15) ||
                    ((*plVar24 != 0x65636e6174736e69 || plVar24[1] != 0x746e656d6765735f) ||
                     *(long *)((long)plVar24 + 0xd) != 0x6e6f697461746e65)) ||
                   ((*(byte *)((long)param_5 + 0x2c) >> 5 & 1) == 0)) goto LAB_10aacba88;
              }
            }
            if (cVar4 < '\0') {
              func_0x000107c3192c(&ppppuStack_250,*puVar41,puVar41[1]);
            }
            else {
              puStack_248 = (undefined8 *)puVar41[1];
              ppppuStack_250 = (undefined8 ****)*puVar41;
              uStack_240 = (undefined8 *****)puVar41[2];
            }
            FUN_10ad0279c(&uStack_110,&ppppuStack_250);
            if ((long)uStack_240 < 0) {
              __ZdlPv(ppppuStack_250);
            }
            func_0x0001093f30bc(param_2,plVar16,(ulong)ppuVar30[7] & 0xfffffffffffffffc);
            plVar16 = uStack_108;
            if (uStack_108 != (long *)0x0) {
              plVar24 = uStack_108 + 1;
              do {
                lVar21 = *plVar24;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar5) {
                  *plVar24 = lVar21 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*uStack_108 + 0x10))(uStack_108);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
              }
            }
          }
        }
      }
LAB_10aacba88:
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar40);
  }
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  if (param_4 != 0) {
    uVar37 = 0;
    uVar29 = 0;
    puVar42 = param_3;
    do {
      ppppuStack_250 = (undefined8 ****)&PTR_DAT_110aefaa0;
      puStack_248 = (undefined8 *)0x0;
      uStack_1f0 = 0;
      puStack_208 = (undefined8 *)0x0;
      puStack_210 = (undefined8 *)0x0;
      puStack_200 = (undefined8 *)0x0;
      uStack_238 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lStack_218 = 0;
      uStack_220 = 0;
      uStack_1e8 = *(undefined4 *)(param_5 + 5);
      uStack_240._0_4_ = 0x48;
      uStack_240._4_4_ = 0;
      lStack_1f8 = param_6 / 1000;
      FUN_10aaca31c(&uStack_110,puVar42 + 2);
      uStack_240 = (undefined8 *****)(CONCAT44(uStack_240._4_4_,(undefined4)uStack_240) | 1);
      if (puStack_210 == (undefined8 *)0x0) {
        puVar41 = puStack_248;
        if (((ulong)puStack_248 & 1) != 0) {
          puVar41 = *(undefined8 **)((ulong)puStack_248 & 0xfffffffffffffffe);
        }
        func_0x00010933f890();
        puStack_210 = puVar41;
      }
      puVar41 = puStack_210;
      if (puStack_210 != &uStack_110) {
        plVar24 = (long *)puStack_210[1];
        plVar16 = plVar24;
        if (((ulong)plVar24 & 1) != 0) {
          plVar16 = *(long **)((ulong)plVar24 & 0xfffffffffffffffe);
        }
        plVar32 = uStack_108;
        if (((ulong)uStack_108 & 1) != 0) {
          plVar32 = *(long **)((ulong)uStack_108 & 0xfffffffffffffffe);
        }
        if (plVar16 == plVar32) {
          lVar21 = 0;
          puStack_210[1] = uStack_108;
          uStack_108 = plVar24;
          uVar2 = *(undefined4 *)(puStack_210 + 2);
          *(undefined4 *)(puStack_210 + 2) = (undefined4)uStack_100;
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar2);
          do {
            uVar20 = *(undefined1 *)((long)puStack_210 + lVar21 + 0x18);
            *(undefined1 *)((long)puStack_210 + lVar21 + 0x18) =
                 *(undefined1 *)((long)&uStack_f8 + lVar21);
            *(undefined1 *)((long)&uStack_f8 + lVar21) = uVar20;
            lVar21 = lVar21 + 1;
          } while (lVar21 != 0x18);
        }
        else {
          func_0x00010933df90(puStack_210);
          func_0x00010933e2a4(puVar41,&uStack_110);
        }
      }
      func_0x00010933df00(&uStack_110);
      uStack_240 = (undefined8 *****)((ulong)uStack_240 | 2);
      if (puStack_208 == (undefined8 *)0x0) {
        puVar41 = puStack_248;
        if (((ulong)puStack_248 & 1) != 0) {
          puVar41 = *(undefined8 **)((ulong)puStack_248 & 0xfffffffffffffffe);
        }
        func_0x00010933f844();
        puStack_208 = puVar41;
      }
      uVar44 = puVar42[0x1c];
      if (uVar44 - 1 < 3) {
LAB_10aacbc90:
        uStack_1f0 = CONCAT44(uVar44,(undefined4)uStack_1f0);
        uStack_240 = (undefined8 *****)((ulong)uStack_240 | 0x20);
        uStack_220 = uStack_220 & 0xffffffff00000000;
        puVar34 = puVar42 + 2;
        func_0x00010a0ed4c8();
        puVar41 = *(undefined8 **)puVar34;
        puVar34 = puVar42 + 2;
        func_0x00010a0ed4c8();
        puVar38 = *(undefined8 **)(puVar34 + 2);
        iVar9 = (int)uStack_220 + (int)((ulong)((long)puVar38 - (long)puVar41) >> 3);
        iVar17 = (int)uStack_220;
        if (uStack_220._4_4_ < iVar9) {
          func_0x000109340710(&uStack_220,uStack_220 & 0xffffffff,iVar9);
          iVar17 = (int)uStack_220;
        }
        uStack_220 = CONCAT44(uStack_220._4_4_,iVar9);
        if (puVar41 != puVar38) {
          puVar25 = (undefined8 *)(lStack_218 + (long)iVar17 * 8);
          do {
            puVar36 = puVar41 + 1;
            *puVar25 = *puVar41;
            puVar25 = puVar25 + 1;
            puVar41 = puVar36;
          } while (puVar36 != puVar38);
        }
      }
      else {
        if (uVar44 != 0) {
          func_0x00010ae02ecc(0,uVar44);
          ppuVar13 = &PTR_PTR_1133064a8;
          FUN_10ae079a0();
          func_0x00010ae02edc();
          FUN_10ae07cd4(ppuVar13,&PTR_PTR_1133064a8);
          uVar44 = 0;
          goto LAB_10aacbc90;
        }
        uStack_1f0 = uStack_1f0 & 0xffffffff;
        uStack_240 = (undefined8 *****)((ulong)uStack_240 | 0x20);
        uStack_220 = uStack_220 & 0xffffffff00000000;
      }
      if (0 < (int)uStack_230) {
        func_0x00010598fd84(&uStack_238);
      }
      puVar23 = (ulong *)&UNK_110c43d10;
      lVar21 = 0x20;
      do {
        puVar40 = (ulong *)puVar23[-1];
        plVar16 = (long *)*puVar23;
        if (plVar16 == (long *)0xa) {
          uVar26 = (*puVar40 & 0xff00ff00ff00ff00) >> 8 | (*puVar40 & 0xff00ff00ff00ff) << 8;
          uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
          uVar26 = uVar26 >> 0x20 | uVar26 << 0x20;
          uVar27 = 0x72696768745f6861;
          if (uVar26 == 0x72696768745f6861) {
            uVar44 = (uint)(ushort)((ushort)puVar40[1] >> 8) | ((ushort)puVar40[1] & 0xff00ff) << 8;
            uVar26 = (ulong)uVar44;
            if (uVar44 != 0x6e64) {
              uVar27 = 0x6e64;
              goto LAB_10aacbdb0;
            }
            iVar9 = 0;
          }
          else {
LAB_10aacbdb0:
            iVar9 = 1;
            if (uVar26 < uVar27) {
              iVar9 = -1;
            }
          }
          uVar44 = 2;
          if (iVar9 != 0) {
            uVar44 = 0;
          }
        }
        else if ((plVar16 == (long *)0x9) &&
                (*puVar40 == 0x6e61685f7466656c && (char)puVar40[1] == 'd')) {
          uVar44 = 1;
        }
        else {
          uVar44 = 0;
        }
        if ((*(uint *)((long)param_5 + 0x2c) & uVar44) == 0) {
          if ((long *)0x7ffffffffffffff7 < plVar16) {
            func_0x000109ffde50();
            goto LAB_10aaccacc;
          }
          if (plVar16 < (long *)0x17) {
            uStack_100 = CONCAT17((char)plVar16,(undefined7)uStack_100);
            pppppuVar15 = (undefined8 *****)&uStack_110;
            if (plVar16 != (long *)0x0) goto LAB_10aacbe24;
          }
          else {
            pppppuVar14 = (undefined8 *****)0x19;
            if (((ulong)plVar16 | 7) != 0x17) {
              pppppuVar14 = (undefined8 *****)(((ulong)plVar16 | 7) + 1);
            }
            pppppuVar15 = pppppuVar14;
            __Znwm();
            uStack_100 = (ulong)pppppuVar14 | 0x8000000000000000;
            uStack_110 = pppppuVar15;
            uStack_108 = plVar16;
LAB_10aacbe24:
            _memmove(pppppuVar15,puVar40,plVar16);
          }
          *(char *)((long)pppppuVar15 + (long)plVar16) = '\0';
          lVar31 = (long)(int)uStack_230;
          if ((uStack_238 & 1) == 0) {
            if ((int)(uint)(uStack_238 != 0) <= (int)uStack_230) {
              if (uStack_238 != 0) {
LAB_10aacbec0:
                func_0x000107c303a8(&uStack_238,1);
              }
LAB_10aacbed0:
              if ((uStack_238 & 1) != 0) {
                *(int *)(uStack_238 - 1) = *(int *)(uStack_238 - 1) + 1;
              }
              uVar26 = uStack_228;
              func_0x0001072efdd0(uStack_228,&uStack_110);
              lVar31 = (long)(int)uStack_230;
              uStack_230 = CONCAT44(uStack_230._4_4_,(int)uStack_230 + 1);
              puVar40 = &uStack_238;
              if ((uStack_238 & 1) != 0) {
                puVar40 = (ulong *)(uStack_238 + lVar31 * 8 + 7);
              }
              *puVar40 = uVar26;
              goto LAB_10aacbf20;
            }
          }
          else if (*(int *)(uStack_238 - 1) <= (int)uStack_230) {
            if (uStack_230._4_4_ < *(int *)(uStack_238 - 1)) goto LAB_10aacbec0;
            goto LAB_10aacbed0;
          }
          uStack_230 = CONCAT44(uStack_230._4_4_,(int)uStack_230 + 1);
          puVar40 = &uStack_238;
          if ((uStack_238 & 1) != 0) {
            puVar40 = (ulong *)(uStack_238 + lVar31 * 8 + 7);
          }
          puVar41 = (undefined8 *)*puVar40;
          if (*(char *)((long)puVar41 + 0x17) < '\0') {
            __ZdlPv(*puVar41);
          }
          puVar41[2] = uStack_100;
          puVar41[1] = uStack_108;
          *puVar41 = uStack_110;
        }
LAB_10aacbf20:
        puVar23 = puVar23 + 2;
        lVar21 = lVar21 + -0x10;
      } while (lVar21 != 0);
      if (((*(byte *)((long)param_5 + 0x2c) >> 2 & 1) != 0) && (param_7 != 0)) {
        uVar44 = *puVar42;
        if (1 < uVar44) goto LAB_10aaccacc;
        uStack_240 = (undefined8 *****)((ulong)uStack_240 | 4);
        if (puStack_200 == (undefined8 *)0x0) {
          puVar41 = puStack_248;
          if (((ulong)puStack_248 & 1) != 0) {
            puVar41 = *(undefined8 **)((ulong)puStack_248 & 0xfffffffffffffffe);
          }
          func_0x00010933f64c();
          puStack_200 = puVar41;
        }
        puVar41 = puStack_200;
        puVar34 = (uint *)(param_7 + (ulong)uVar44 * 0x298);
        lVar21 = *(long *)(puVar34 + 4);
        if (lVar21 != 0) {
          uVar44 = puVar34[1];
          uVar26 = (ulong)uVar44;
          if ((int)uVar44 < 3) {
            lVar31 = (long)(int)puVar34[3] * (long)(int)puVar34[2];
          }
          else {
            lVar31 = 1;
            piVar33 = *(int **)(puVar34 + 0x10);
            do {
              lVar31 = lVar31 * *piVar33;
              uVar26 = uVar26 - 1;
              piVar33 = piVar33 + 1;
            } while (uVar26 != 0);
          }
          if (lVar31 != 0 && (char)puVar34[0x7d] == '\0') {
            uVar46 = *puVar34;
            uStack_110 = (undefined8 *****)CONCAT44(uVar44,uVar46);
            uStack_108 = *(long **)(puVar34 + 2);
            uStack_f0 = *(undefined8 *)(puVar34 + 8);
            uStack_f8 = *(undefined8 *)(puVar34 + 6);
            uStack_e0 = *(undefined8 *)(puVar34 + 0xc);
            uStack_e8 = *(undefined8 *)(puVar34 + 10);
            lStack_d8 = *(long *)(puVar34 + 0xe);
            lStack_c0 = 0;
            lStack_b8 = 0;
            if (lStack_d8 != 0) {
              piVar33 = (int *)(lStack_d8 + 0x14);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                if (bVar5) {
                  *piVar33 = *piVar33 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              uVar44 = puVar34[1];
            }
            uStack_100 = lVar21;
            puStack_d0 = &uStack_108;
            plStack_c8 = &lStack_c0;
            if ((int)uVar44 < 3) {
              lStack_c0 = **(long **)(puVar34 + 0x12);
              lStack_b8 = (*(long **)(puVar34 + 0x12))[1];
            }
            else {
              uStack_110 = (undefined8 *****)(ulong)uVar46;
              func_0x000109a84868(&uStack_110,puVar34);
            }
            *(int *)(puVar41 + 10) = uStack_108._4_4_;
            *(int *)((long)puVar41 + 0x54) = (int)uStack_108;
            *(undefined4 *)(puVar41 + 0xc) = 8;
            puVar41[0xb] = 0x410000003c23d70a;
            *(uint *)(puVar41 + 2) = *(uint *)(puVar41 + 2) | 0xf8;
            iVar17 = (int)uStack_108;
            iVar9 = uStack_108._4_4_;
            if (0 < (int)uStack_108) {
              lVar21 = 0;
              iVar9 = (int)uStack_108;
              iVar17 = uStack_108._4_4_;
              do {
                if (0 < iVar17) {
                  lVar31 = 0;
                  iVar9 = *(int *)(puVar41 + 5);
                  do {
                    fVar53 = *(float *)(uStack_100 + lVar21 * *plStack_c8 + lVar31 * 4);
                    fVar55 = (float)puVar34[0x7e];
                    fVar52 = *(float *)(puVar41 + 0xb);
                    fVar54 = *(float *)((long)puVar41 + 0x5c);
                    iVar18 = iVar9;
                    if (iVar9 == *(int *)((long)puVar41 + 0x2c)) {
                      func_0x000109311970(puVar41 + 5,iVar9,iVar9 + 1);
                      iVar18 = *(int *)(puVar41 + 5);
                      iVar17 = uStack_108._4_4_;
                    }
                    iVar9 = iVar18 + 1;
                    *(int *)(puVar41 + 5) = iVar9;
                    *(float *)(puVar41[6] + (long)iVar18 * 4) =
                         (fVar53 * fVar55 * 0.01 - fVar52) / (fVar54 - fVar52);
                    lVar31 = lVar31 + 1;
                  } while (lVar31 < iVar17);
                  iVar9 = (int)uStack_108;
                }
                lVar21 = lVar21 + 1;
              } while (lVar21 < iVar9);
              iVar9 = *(int *)(puVar41 + 10);
              iVar17 = *(int *)((long)puVar41 + 0x54);
            }
            uVar44 = puVar42[3];
            uVar46 = puVar42[4];
            if (0.0001 < ABS((float)(int)uVar44 / (float)iVar9 - (float)(int)uVar46 / (float)iVar17)
               ) {
              ppuVar13 = &PTR_PTR_113306660;
              FUN_10ae079a0(0,&PTR_PTR_113306660);
              FUN_10ae07cd4(ppuVar13,&PTR_PTR_113306660);
            }
            piVar33 = (int *)(puVar41 + 3);
            iVar19 = *piVar33;
            iVar18 = iVar19 + 6;
            if (*(int *)((long)puVar41 + 0x1c) < iVar18) {
              func_0x000109311970(piVar33,iVar19,iVar18);
              iVar19 = *piVar33;
            }
            *(int *)(puVar41 + 3) = iVar18;
            pfVar1 = (float *)(puVar41[4] + (long)iVar19 * 4);
            *pfVar1 = (float)(int)uVar44 / (float)iVar9;
            pfVar1[2] = 0.0;
            pfVar1[3] = 0.0;
            pfVar1[1] = 0.0;
            pfVar1[4] = (float)(int)uVar46 / (float)iVar17;
            pfVar1[5] = 0.0;
            if (lStack_d8 != 0) {
              piVar33 = (int *)(lStack_d8 + 0x14);
              do {
                iVar9 = *piVar33;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar33,0x10);
                if (bVar5) {
                  *piVar33 = iVar9 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar9 + -1 == 0) {
                func_0x000109a848d4(&uStack_110);
              }
            }
            lStack_d8 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            if (0 < uStack_110._4_4_) {
              lVar21 = 0;
              do {
                *(undefined4 *)((long)puStack_d0 + lVar21 * 4) = 0;
                lVar21 = lVar21 + 1;
              } while (lVar21 < uStack_110._4_4_);
            }
            uVar37 = uStack_168;
            uVar29 = uStack_170;
            if (plStack_c8 != &lStack_c0 && plStack_c8 != (long *)0x0) {
              _free(plStack_c8[-1]);
              uVar37 = uStack_168;
              uVar29 = uStack_170;
            }
          }
        }
      }
      uVar26 = uStack_178;
      if (uVar29 < uVar37) {
        FUN_10aadaf18(uVar29,&ppppuStack_250);
        uVar29 = uVar29 + 0x70;
      }
      else {
        lVar21 = uVar29 - uStack_178;
        uVar27 = (lVar21 >> 4) * 0x6db6db6db6db6db7 + 1;
        if (0x249249249249249 < uVar27) {
          FUN_10aadafa4();
          goto LAB_10aaccacc;
        }
        lVar31 = (long)(uVar37 - uStack_178) >> 4;
        uVar37 = lVar31 * -0x2492492492492492;
        if (uVar37 < uVar27 || uVar37 - uVar27 == 0) {
          uVar37 = uVar27;
        }
        if (0x124924924924923 < (ulong)(lVar31 * 0x6db6db6db6db6db7)) {
          uVar37 = 0x249249249249249;
        }
        if (uVar37 == 0) {
          uVar27 = 0;
        }
        else {
          if (0x249249249249249 < uVar37) {
            func_0x000109ffded8();
            goto LAB_10aaccacc;
          }
          uVar27 = uVar37 * 0x70;
          __Znwm();
        }
        lVar21 = uVar27 + lVar21;
        FUN_10aadaf18(lVar21,&ppppuStack_250);
        uVar47 = uVar27;
        uVar45 = uVar26;
        if (uVar26 != uVar29) {
          do {
            FUN_10aadaf18(uVar47,uVar45);
            uVar45 = uVar45 + 0x70;
            uVar48 = uVar26;
            uVar47 = uVar47 + 0x70;
          } while (uVar45 != uVar29);
          do {
            func_0x00010933fb14();
            uVar48 = uVar48 + 0x70;
          } while (uVar48 != uVar29);
        }
        uVar29 = lVar21 + 0x70;
        uVar37 = uVar27 + uVar37 * 0x70;
        uStack_178 = uVar27;
        uStack_168 = uVar37;
        if (uVar26 != 0) {
          __ZdlPv(uVar26);
        }
      }
      uStack_170 = uVar29;
      func_0x00010933fb14(&ppppuStack_250);
      puVar42 = puVar42 + 0x32;
    } while (puVar42 != param_3 + param_4 * 0x32);
  }
  puVar23 = puStack_160;
  (*(code *)*param_8)(auStack_190,puStack_160,(long)puStack_158 - (long)puStack_160 >> 7,param_5);
  iVar9 = (int)puVar23;
  FUN_10ad055a0();
  if (iVar9 != 0) {
    ppuVar13 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar13 == (undefined *)0x0) {
      ppuVar13 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar16 = (long *)*ppuVar13;
      if ((plVar16 == (long *)0x0) || ((**(code **)(*plVar16 + 0x18))(), plVar16 == (long *)0x0))
      goto LAB_10aacc430;
      plVar16 = plVar16 + 7;
    }
    else {
      plVar16 = (long *)(*ppuVar13 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar16 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppuStack_2a0,&UNK_10f68dfc8);
      func_0x000107c2b054(&ppppuStack_130,&UNK_10f68da37);
      if ((long)uStack_290 < 0) {
        ppppuStack_250 = (undefined8 ****)"null";
        if (puStack_298 != (undefined8 *)0x0) {
          ppppuStack_250 = ppppuStack_2a0;
        }
      }
      else {
        ppppuStack_250 = (undefined8 ****)"null";
        if (uStack_290._7_1_ != '\0') {
          ppppuStack_250 = &ppppuStack_2a0;
        }
      }
      if (cStack_119 < '\0') {
        uStack_110 = (undefined8 *****)"null";
        if (plStack_128 != (long *)0x0) {
          uStack_110 = (undefined8 *****)ppppuStack_130;
        }
      }
      else {
        uStack_110 = (undefined8 *****)"null";
        if (cStack_119 != '\0') {
          uStack_110 = &ppppuStack_130;
        }
      }
      FUN_10a224324(&ppppuStack_250,&uStack_110);
      if ((long)uStack_290 < 0) {
        if (puStack_298 == (undefined8 *)0x0) goto LAB_10aacc900;
        func_0x000107c3192c(&ppppuStack_250,ppppuStack_2a0);
LAB_10aacc9d8:
        uVar20 = 1;
      }
      else {
        if (uStack_290._7_1_ != '\0') {
          puStack_248 = puStack_298;
          ppppuStack_250 = ppppuStack_2a0;
          uStack_240 = uStack_290;
          goto LAB_10aacc9d8;
        }
LAB_10aacc900:
        uVar20 = 0;
        ppppuStack_250 = (undefined8 ****)((ulong)ppppuStack_250 & 0xffffffffffffff00);
      }
      uStack_238 = CONCAT71(uStack_238._1_7_,uVar20);
      if (cStack_119 < '\0') {
        if (plStack_128 == (long *)0x0) goto LAB_10aacca04;
        func_0x000107c3192c(&uStack_110,ppppuStack_130);
LAB_10aacca90:
        uVar20 = 1;
      }
      else {
        if (cStack_119 != '\0') {
          uStack_108 = plStack_128;
          uStack_110 = (undefined8 *****)ppppuStack_130;
          uStack_100 = CONCAT17(cStack_119,uStack_120);
          goto LAB_10aacca90;
        }
LAB_10aacca04:
        uVar20 = 0;
        uStack_110 = (undefined8 *****)((ulong)uStack_110 & 0xffffffffffffff00);
      }
      uStack_f8 = CONCAT71(uStack_f8._1_7_,uVar20);
      FUN_10a234a0c(&ppppuStack_250,&uStack_110);
      goto LAB_10aaccacc;
    }
  }
LAB_10aacc430:
  func_0x0001093f32d4(&ppppuStack_250,param_2,&puStack_148,&uStack_178,auStack_190);
  plVar16 = (long *)0xd0;
  __Znwm();
  plVar16[1] = 0;
  plVar16[2] = 0;
  plVar24 = plVar16 + 3;
  *plVar16 = (long)&PTR_FUN_110bef6c8;
  func_0x0001093a1fb8(plVar24,0,&ppppuStack_250);
  plStack_260 = plVar24;
  plStack_258 = plVar16;
  FUN_10ad055a0();
  if ((int)plVar24 != 0) {
    ppuVar13 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar13 == (undefined *)0x0) {
      ppuVar13 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar16 = (long *)*ppuVar13;
      if ((plVar16 == (long *)0x0) || ((**(code **)(*plVar16 + 0x18))(), plVar16 == (long *)0x0))
      goto LAB_10aacc4a8;
      plVar16 = plVar16 + 7;
    }
    else {
      plVar16 = (long *)(*ppuVar13 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar16 + 0x10) >> 1 & 1) != 0) {
      func_0x000107c2b054(&ppppuStack_130,&UNK_10f68dff0);
      func_0x000107c2b054(&ppppuStack_278,&UNK_10f68da37);
      ppppuStack_2a0 = (undefined8 ****)0x10f29b0c6;
      uStack_110 = (undefined8 *****)ppppuStack_2a0;
      if (cStack_119 < '\0') {
        if (plStack_128 != (long *)0x0) {
          uStack_110 = (undefined8 *****)ppppuStack_130;
        }
      }
      else if (cStack_119 != '\0') {
        uStack_110 = &ppppuStack_130;
      }
      if (cStack_261 < '\0') {
        if (puStack_270 != (undefined8 *)0x0) {
          ppppuStack_2a0 = ppppuStack_278;
        }
      }
      else if (cStack_261 != '\0') {
        ppppuStack_2a0 = &ppppuStack_278;
      }
      FUN_10a224324(&uStack_110,&ppppuStack_2a0);
      if (cStack_119 < '\0') {
        if (plStack_128 == (long *)0x0) goto LAB_10aacc974;
        func_0x000107c3192c(&uStack_110,ppppuStack_130);
LAB_10aacca20:
        uVar20 = 1;
      }
      else {
        if (cStack_119 != '\0') {
          uStack_108 = plStack_128;
          uStack_110 = (undefined8 *****)ppppuStack_130;
          uStack_100 = CONCAT17(cStack_119,uStack_120);
          goto LAB_10aacca20;
        }
LAB_10aacc974:
        uVar20 = 0;
        uStack_110 = (undefined8 *****)((ulong)uStack_110 & 0xffffffffffffff00);
      }
      uStack_f8 = CONCAT71(uStack_f8._1_7_,uVar20);
      if (cStack_261 < '\0') {
        if (puStack_270 == (undefined8 *)0x0) goto LAB_10aacca4c;
        func_0x000107c3192c(&ppppuStack_2a0,ppppuStack_278);
LAB_10aaccab8:
        uVar20 = 1;
      }
      else {
        if (cStack_261 != '\0') {
          puStack_298 = puStack_270;
          ppppuStack_2a0 = ppppuStack_278;
          goto LAB_10aaccab8;
        }
LAB_10aacca4c:
        uVar20 = 0;
        ppppuStack_2a0 = (undefined8 ****)((ulong)ppppuStack_2a0 & 0xffffffffffffff00);
      }
      uStack_288 = CONCAT31(uStack_288._1_3_,uVar20);
      FUN_10a234a0c(&uStack_110,&ppppuStack_2a0);
      goto LAB_10aaccacc;
    }
  }
LAB_10aacc4a8:
  plVar16 = plStack_260;
  if (param_4 == 0) {
LAB_10aaccacc:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10aaccad0);
    (*pcVar8)();
  }
  uStack_108 = *(long **)(param_3 + 0xd);
  uStack_110 = *(undefined8 ******)(param_3 + 0xb);
  uStack_f8 = *(undefined8 *)(param_3 + 0x11);
  uStack_100 = *(ulong *)(param_3 + 0xf);
  uStack_e8 = *(undefined8 *)(param_3 + 0x15);
  uStack_f0 = *(undefined8 *)(param_3 + 0x13);
  lStack_d8 = *(long *)(param_3 + 0x19);
  uStack_e0 = *(undefined8 *)(param_3 + 0x17);
  FUN_10a05181c(&ppppuStack_130,&uStack_110);
  fVar52 = SUB84(ppppuStack_130,0);
  fVar49 = fVar52 * fVar52;
  fVar53 = (float)((ulong)ppppuStack_130 >> 0x20);
  fVar50 = fVar53 * fVar53;
  fVar54 = SUB84(plStack_128,0);
  fVar55 = (float)((ulong)plStack_128 >> 0x20);
  auVar51._4_4_ = fVar50;
  auVar51._0_4_ = fVar49;
  auVar51._8_4_ = fVar54 * fVar54;
  auVar51._12_4_ = fVar55 * fVar55;
  auVar6._4_4_ = fVar50;
  auVar6._0_4_ = fVar49;
  auVar6._8_4_ = fVar54 * fVar54;
  auVar6._12_4_ = fVar55 * fVar55;
  auVar51 = NEON_ext(auVar51,auVar6,8,1);
  fVar49 = SQRT(fVar49 + auVar51._0_4_ + fVar50 + auVar51._4_4_);
  ppppuStack_2a0 = (undefined8 ****)CONCAT44(fVar53 / fVar49,fVar52 / fVar49);
  puStack_298 = (undefined8 *)CONCAT44(fVar55 / fVar49,fVar54 / fVar49);
  uStack_288 = uStack_118;
  func_0x0001093f614c(&ppppuStack_2a0,param_5[3],plVar16);
  uVar29 = param_5[1];
  puVar41 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar29 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar41 = param_5;
  }
  if (0x7ffffffffffffff7 < uVar29) {
    func_0x000109ffde50();
    goto LAB_10aaccacc;
  }
  if (uVar29 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar29;
    puVar40 = param_1;
    if (uVar29 == 0) goto LAB_10aacc59c;
  }
  else {
    puVar23 = (ulong *)0x19;
    if ((uVar29 | 7) != 0x17) {
      puVar23 = (ulong *)((uVar29 | 7) + 1);
    }
    puVar40 = puVar23;
    __Znwm();
    param_1[1] = uVar29;
    param_1[2] = (ulong)puVar23 | 0x8000000000000000;
    *param_1 = (ulong)puVar40;
  }
  _memmove(puVar40,puVar41,uVar29);
LAB_10aacc59c:
  plVar16 = plStack_258;
  *(undefined1 *)((long)puVar40 + uVar29) = 0;
  param_1[4] = (ulong)plStack_258;
  param_1[3] = (ulong)plStack_260;
  if (plStack_258 != (long *)0x0) {
    plVar24 = plStack_258 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *plVar24 = *plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      lVar21 = *plVar24;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *plVar24 = lVar21 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_258 + 0x10))(plStack_258);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  func_0x00010930ef1c(&ppppuStack_250);
  func_0x00010aadada4(auStack_190);
  FUN_10aadafb8(&uStack_178);
  FUN_10aadb03c(&puStack_160);
  if (puStack_148 != (ulong *)0x0) {
    puStack_140 = puStack_148;
    __ZdlPv();
  }
  return;
}



/* Entry: 10aaccd54; end: 10aaccdcf;  */

undefined8 * FUN_10aaccd54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  func_0x00010aae53f4(param_1 + 3);
  return param_1;
}



/* Entry: 10aaccdd0; end: 10aacce0f;  */

long FUN_10aaccdd0(long param_1)

{
  long lStack_28;
  
  func_0x00010aae53f4(param_1 + 0x18,0);
  lStack_28 = param_1;
  FUN_10aadb0a8(&lStack_28);
  return param_1;
}



/* Entry: 10aacce10; end: 10aacd8eb;  */

void FUN_10aacce10(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined8 *****extraout_x8;
  int extraout_w9;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  long *plVar24;
  long lVar25;
  double dVar26;
  undefined8 auStack_2a8 [2];
  char cStack_291;
  long *plStack_288;
  long alStack_280 [6];
  undefined8 ****ppppuStack_250;
  undefined8 ***pppuStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  long *plStack_228;
  undefined7 uStack_220;
  char cStack_219;
  undefined4 uStack_214;
  undefined8 ****ppppuStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_19c;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 ****ppppuStack_180;
  long *plStack_178;
  undefined7 uStack_170;
  char cStack_169;
  undefined1 uStack_161;
  undefined8 ****ppppuStack_160;
  long *plStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f4;
  undefined8 uStack_e8;
  long *plStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 uStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 ****ppppuStack_a8;
  long *plStack_a0;
  long alStack_98 [3];
  
  alStack_98[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10aacd8ec(param_2,param_5,param_6);
  alStack_280[3] = 0;
  alStack_280[2] = 0;
  alStack_280[5] = 0;
  alStack_280[4] = 0;
  alStack_280[1] = 0;
  alStack_280[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_6 != 0) {
    lVar18 = param_5 + param_6 * 0x58;
    ppuVar12 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    ppuVar13 = &PTR___tlv_bootstrap_11340dd98;
    (*(code *)PTR___tlv_bootstrap_11340dd98)();
    do {
      lVar20 = param_2;
      FUN_10aacd9e4(param_2,param_5);
      ppuVar19 = *(undefined ***)(*(long *)(param_5 + 0x18) + 0x70);
      ppuVar3 = &PTR_PTR_1132d1970;
      if (ppuVar19 != (undefined **)0x0) {
        ppuVar3 = ppuVar19;
      }
      bVar6 = *(byte *)((long)ppuVar3 + 0x31);
      uVar22 = (ulong)bVar6;
      plVar24 = alStack_280 + uVar22 * 3;
      ppppuVar15 = (undefined8 ****)*plVar24;
      ppppuVar23 = (undefined8 ****)alStack_280[uVar22 * 3 + 1];
      if (ppppuVar15 == ppppuVar23) {
        lVar25 = *(long *)(param_2 + 0x18);
        uVar4 = *(undefined4 *)(*(long *)(param_4 + 0x218) + 0xa0);
        lVar14 = lVar20;
        FUN_10ad055a0();
        if ((int)lVar14 != 0) {
          if (*ppuVar12 == (undefined *)0x0) {
            plVar21 = (long *)*ppuVar13;
            if ((plVar21 == (long *)0x0) ||
               ((**(code **)(*plVar21 + 0x18))(), plVar21 == (long *)0x0)) goto LAB_10aaccf5c;
            plVar21 = plVar21 + 7;
          }
          else {
            plVar21 = (long *)(*ppuVar12 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar21 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppuStack_250,&UNK_10f68df66);
            func_0x000107c2b054(&ppppuStack_180,&UNK_10f68da37);
            if (uStack_240 < 0) {
              ppppuStack_160 = (undefined8 ****)"null";
              if (pppuStack_248 != (undefined8 ***)0x0) {
                ppppuStack_160 = ppppuStack_250;
              }
            }
            else {
              ppppuStack_160 = (undefined8 ****)"null";
              if (uStack_240._7_1_ != '\0') {
                ppppuStack_160 = &ppppuStack_250;
              }
            }
            if (cStack_169 < '\0') {
              ppppuStack_210 = (undefined8 ****)"null";
              if (plStack_178 != (long *)0x0) {
                ppppuStack_210 = ppppuStack_180;
              }
            }
            else {
              ppppuStack_210 = (undefined8 ****)"null";
              if (cStack_169 != '\0') {
                ppppuStack_210 = &ppppuStack_180;
              }
            }
            FUN_10a224324(&ppppuStack_160,&ppppuStack_210);
            if (uStack_240 < 0) {
              if (pppuStack_248 == (undefined8 ***)0x0) goto LAB_10aacd648;
              func_0x000107c3192c(&ppppuStack_160,ppppuStack_250);
LAB_10aacd6b4:
              uVar16 = 1;
            }
            else {
              if (uStack_240._7_1_ != '\0') {
                plStack_158 = (long *)pppuStack_248;
                ppppuStack_160 = ppppuStack_250;
                lStack_150 = uStack_240;
                goto LAB_10aacd6b4;
              }
LAB_10aacd648:
              uVar16 = 0;
              ppppuStack_160 = (undefined8 ****)((ulong)ppppuStack_160 & 0xffffffffffffff00);
            }
            uStack_148 = CONCAT71(uStack_148._1_7_,uVar16);
            if (cStack_169 < '\0') {
              if (plStack_178 == (long *)0x0) goto LAB_10aacd6e0;
              func_0x000107c3192c(&ppppuStack_210,ppppuStack_180);
LAB_10aacd728:
              uStack_1f8 = 1;
            }
            else {
              if (cStack_169 != '\0') {
                plStack_208 = plStack_178;
                ppppuStack_210 = ppppuStack_180;
                goto LAB_10aacd728;
              }
LAB_10aacd6e0:
              uStack_1f8 = 0;
              ppppuStack_210 = (undefined8 ****)((ulong)ppppuStack_210 & 0xffffffffffffff00);
            }
            FUN_10a234a0c(&ppppuStack_160,&ppppuStack_210);
            goto LAB_10aacd73c;
          }
        }
LAB_10aaccf5c:
        uVar17 = 7;
        if (bVar6 == 0) {
          uVar17 = 1;
        }
        lVar14 = *(long *)(param_4 + 0x218);
        FUN_10a22b608(lVar14,*(undefined4 *)(lVar14 + 0xa0));
        ppppuStack_210 = (undefined8 *****)0x0;
        plStack_208 = (long *)0x0;
        FUN_10a4cb5a0(&uStack_200);
        uVar5 = (int)lVar14;
        FUN_10a0ec6f0();
        uStack_214 = uVar5;
        uVar5 = *(undefined4 *)(param_3 + 0x24);
        ppppuStack_160 = (undefined8 ****)&uStack_230;
        uStack_230 = uVar5;
        uStack_22c = uVar17;
        FUN_10a505794(lVar25,&uStack_230,&UNK_10dd5b8f9,&ppppuStack_160,&uStack_161);
        plVar21 = (long *)(lVar25 + 0x18);
        ppppuVar15 = (undefined8 ****)*plVar21;
        if (ppppuVar15 == (undefined8 ****)0x0) {
          FUN_10a1b498c(&ppppuStack_160,uVar5,uVar17);
          func_0x00010a343394(plVar21,&ppppuStack_160);
          plVar2 = plStack_158;
          if (plStack_158 != (long *)0x0) {
            plVar1 = plStack_158 + 1;
            do {
              lVar14 = *plVar1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar8) {
                *plVar1 = lVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_158 + 0x10))(plStack_158);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
            }
          }
          ppppuVar15 = (undefined8 ****)*plVar21;
          if (ppppuVar15 == (undefined8 ****)0x0) {
            FUN_10a00946c(&UNK_10f65cf3f);
            goto LAB_10aacd73c;
          }
        }
        plVar21 = *(long **)(lVar25 + 0x20);
        if (plVar21 != (long *)0x0) {
          plVar2 = plVar21 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        ppppuStack_250 = ppppuVar15;
        pppuStack_248 = (undefined8 ***)plVar21;
        (*(code *)**ppppuVar15)
                  (&ppppuStack_180,ppppuVar15,param_3,&uStack_214,(long)&uStack_200 + 4);
        iVar11 = (int)ppppuVar15;
        if (plVar21 != (long *)0x0) {
          plVar2 = plVar21 + 1;
          do {
            lVar14 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            iVar11 = (int)plVar21;
          }
        }
        plVar2 = plStack_178;
        ppppuStack_210 = ppppuStack_180;
        plVar21 = plStack_208;
        ppppuStack_180 = (undefined8 *****)0x0;
        plStack_178 = (long *)0x0;
        plStack_208 = plVar2;
        if (plVar21 != (long *)0x0) {
          plVar2 = plVar21 + 1;
          do {
            lVar14 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            iVar11 = (int)plVar21;
          }
        }
        plVar21 = plStack_178;
        if (plStack_178 != (long *)0x0) {
          plVar2 = plStack_178 + 1;
          do {
            lVar14 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            iVar11 = (int)plVar21;
          }
        }
        FUN_10ad055a0();
        if (iVar11 != 0) {
          if (*ppuVar12 == (undefined *)0x0) {
            plVar21 = (long *)*ppuVar13;
            if ((plVar21 == (long *)0x0) ||
               ((**(code **)(*plVar21 + 0x18))(), plVar21 == (long *)0x0)) goto LAB_10aacd148;
            plVar21 = plVar21 + 7;
          }
          else {
            plVar21 = (long *)(*ppuVar12 + 8);
          }
          if (((uint)*(undefined8 *)(*plVar21 + 0x10) >> 1 & 1) != 0) {
            func_0x000107c2b054(&ppppuStack_180,&UNK_10f68df8b);
            func_0x000107c2b054(&uStack_230,&UNK_10f68da37);
            iVar11 = (int)cStack_169;
            ppppuStack_250 = (undefined8 ****)0x10f29b0c6;
            if (-1 < cStack_169) goto LAB_10aacd554;
            ppppuStack_160 = ppppuStack_250;
            if (plStack_178 != (long *)0x0) {
              ppppuStack_160 = ppppuStack_180;
            }
            goto LAB_10aacd560;
          }
        }
LAB_10aacd148:
        plVar21 = plStack_208;
        iVar11 = *(int *)((long)ppppuStack_210 + 0x24);
        uStack_120 = uStack_1c8;
        uStack_128 = uStack_1d0;
        uStack_110 = uStack_1b8;
        uStack_118 = uStack_1c0;
        uStack_108 = uStack_1b0;
        uStack_f4 = uStack_19c;
        lStack_150 = CONCAT71(uStack_1f7,uStack_1f8);
        plStack_158 = uStack_200;
        uStack_140 = uStack_1e8;
        uStack_148 = uStack_1f0;
        ppppuStack_160 = (undefined8 ****)CONCAT44(ppppuStack_160._4_4_,uVar4);
        uStack_130 = uStack_1d8;
        uStack_138 = uStack_1e0;
        plStack_e0 = plStack_188;
        uStack_e8 = uStack_190;
        if (plStack_188 != (long *)0x0) {
          plVar2 = plStack_188 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        bVar10 = iVar11 == 7;
        pppuStack_d8 = ppppuStack_210[5];
        uStack_d0 = 0;
        bVar8 = (int)((uint)bVar10 << 0x1f) < 0;
        bVar10 = (int)((uint)bVar10 << 0x1f) < 0;
        uStack_c0 = CONCAT44((uint)(~-bVar10 & 4) + (uint)bVar10,(uint)(~-bVar8 & 3) + (uint)bVar8);
        pppuStack_c8 = ppppuStack_210[2];
        uStack_b0 = 0;
        uStack_b8 = SUB84(ppppuStack_210[3],0);
        uStack_b4 = 0;
        ppppuStack_a8 = ppppuStack_210;
        plStack_a0 = plStack_208;
        if (plStack_208 != (long *)0x0) {
          plVar2 = plStack_208 + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = *plVar2 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        ppppuStack_250 = (undefined8 ****)0x0;
        pppuStack_248 = (undefined8 ****)0x0;
        uStack_240 = 0;
        FUN_10aadae00(&ppppuStack_250,&ppppuStack_160,alStack_98,1);
        if (plVar21 != (long *)0x0) {
          plVar2 = plVar21 + 1;
          do {
            lVar14 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        plVar21 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar2 = plStack_e0 + 1;
          do {
            lVar14 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        plVar21 = plStack_188;
        if (plStack_188 != (long *)0x0) {
          plVar2 = plStack_188 + 1;
          do {
            lVar14 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_188 + 0x10))(plStack_188);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        plVar21 = plStack_208;
        if (plStack_208 != (long *)0x0) {
          plVar2 = plStack_208 + 1;
          do {
            lVar14 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar14 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_208 + 0x10))(plStack_208);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
        if (*plVar24 != 0) {
          FUN_10aada900(plVar24);
          __ZdlPv(*plVar24);
        }
        ppppuVar15 = ppppuStack_250;
        alStack_280[uVar22 * 3 + 1] = (long)pppuStack_248;
        *plVar24 = (long)ppppuStack_250;
        ppppuVar23 = (undefined8 ****)pppuStack_248;
        alStack_280[uVar22 * 3 + 2] = uStack_240;
        pppuStack_248 = (undefined8 ***)0x0;
        uStack_240 = 0;
        ppppuStack_250 = (undefined8 *****)0x0;
        func_0x00010aada8d0(&ppppuStack_250);
      }
      dVar26 = *(double *)(param_4 + 0x20);
      func_0x00010a4d88c0(&ppppuStack_160,param_4);
      FUN_10aacb4e4(auStack_2a8,lVar20,ppppuVar15,
                    ((long)ppppuVar23 - (long)ppppuVar15 >> 3) * -0x70a3d70a3d70a3d7,param_5,
                    (long)(dVar26 * 1000000000.0),*(undefined8 *)(param_4 + 0x70),param_7);
      FUN_10a503d70(param_1,auStack_2a8);
      plVar24 = plStack_288;
      if (plStack_288 != (long *)0x0) {
        plVar21 = plStack_288 + 1;
        do {
          lVar20 = *plVar21;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar8) {
            *plVar21 = lVar20 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_288 + 0x10))(plStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
        }
      }
      if (cStack_291 < '\0') {
        __ZdlPv(auStack_2a8[0]);
      }
      param_5 = param_5 + 0x58;
    } while (param_5 != lVar18);
  }
  lVar18 = 0x18;
  do {
    func_0x00010aada8d0((long)alStack_280 + lVar18);
    lVar18 = lVar18 + -0x18;
  } while (lVar18 != -0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_98[0]) {
    return;
  }
  ___stack_chk_fail();
  ppppuStack_250 = extraout_x8;
  iVar11 = extraout_w9;
LAB_10aacd554:
  ppppuStack_160 = ppppuStack_250;
  if (iVar11 != 0) {
    ppppuStack_160 = &ppppuStack_180;
  }
LAB_10aacd560:
  if (cStack_219 < '\0') {
    if (plStack_228 != (long *)0x0) {
      ppppuStack_250 = (undefined8 *****)CONCAT44(uStack_22c,uStack_230);
    }
  }
  else if (cStack_219 != '\0') {
    ppppuStack_250 = (undefined8 ****)&uStack_230;
  }
  FUN_10a224324(&ppppuStack_160,&ppppuStack_250);
  if (cStack_169 < '\0') {
    if (plStack_178 == (long *)0x0) goto LAB_10aacd5bc;
    func_0x000107c3192c(&ppppuStack_160,ppppuStack_180);
LAB_10aacd66c:
    uVar16 = 1;
  }
  else {
    if (cStack_169 != '\0') {
      plStack_158 = plStack_178;
      ppppuStack_160 = ppppuStack_180;
      lStack_150 = CONCAT17(cStack_169,uStack_170);
      goto LAB_10aacd66c;
    }
LAB_10aacd5bc:
    uVar16 = 0;
    ppppuStack_160 = (undefined8 ****)((ulong)ppppuStack_160 & 0xffffffffffffff00);
  }
  uStack_148 = CONCAT71(uStack_148._1_7_,uVar16);
  if (cStack_219 < '\0') {
    if (plStack_228 == (long *)0x0) {
LAB_10aacd698:
      uStack_238 = 0;
      ppppuStack_250 = (undefined8 ****)((ulong)ppppuStack_250 & 0xffffffffffffff00);
      goto LAB_10aacd700;
    }
    func_0x000107c3192c(&ppppuStack_250,CONCAT44(uStack_22c,uStack_230));
  }
  else {
    if (cStack_219 == '\0') goto LAB_10aacd698;
    ppppuStack_250 = (undefined8 ****)CONCAT44(uStack_22c,uStack_230);
    pppuStack_248 = (undefined8 ***)plStack_228;
    uStack_240 = CONCAT17(cStack_219,uStack_220);
  }
  uStack_238 = 1;
LAB_10aacd700:
  FUN_10a234a0c(&ppppuStack_160,&ppppuStack_250);
LAB_10aacd73c:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10aacd740);
  (*pcVar9)();
}



/* Entry: 10aacd8ec; end: 10aacd9e3;  */

void FUN_10aacd8ec(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x58;
    do {
      puVar2 = param_1;
      FUN_10aacd9e4(param_1,param_2);
      uStack_68 = puVar2[1];
      puStack_70 = (undefined8 *)*puVar2;
      if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
        uStack_68 = (ulong)*(byte *)((long)puVar2 + 0x17);
        puStack_70 = puVar2;
      }
      func_0x0001086af96c(&uStack_60,&puStack_70,&puStack_70);
      param_2 = param_2 + 0x58;
      param_3 = param_3 + -0x58;
    } while (param_3 != 0);
  }
  plVar1 = (long *)param_1[1];
  for (plVar3 = (long *)*param_1; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    puVar2 = (undefined8 *)*plVar3;
    uStack_68 = (ulong)*(char *)((long)puVar2 + 0x17);
    puStack_70 = puVar2;
    if ((long)uStack_68 < 0) {
      puStack_70 = (undefined8 *)*puVar2;
      uStack_68 = puVar2[1];
    }
    puVar2 = &uStack_60;
    func_0x0001086eb2c8(puVar2,&puStack_70);
    if (puVar2 == (undefined8 *)0x0) {
      func_0x0001093a1d6c(*(undefined8 *)(*plVar3 + 0x18));
    }
  }
  func_0x0001086af8b0(&uStack_60);
  return;
}



/* Entry: 10aacd9e4; end: 10aacdcf7;  */

undefined8 * FUN_10aacd9e4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  long *plStack_60;
  long *plStack_58;
  
  puVar14 = (undefined8 *)*param_1;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar14 != puVar5) {
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    do {
      puVar17 = (undefined8 *)*puVar14;
      uVar13 = (ulong)*(char *)((long)puVar17 + 0x17);
      puVar9 = puVar17;
      if ((long)uVar13 < 0) {
        uVar13 = puVar17[1];
        puVar9 = (undefined8 *)*puVar17;
      }
      if ((uVar13 == uVar1) && (_memcmp(puVar9,puVar2,uVar1), (int)puVar9 == 0)) {
        return puVar17;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar5);
  }
  ppuVar3 = &PTR_PTR_1132d18f0;
  if (*(undefined ***)(param_2[3] + 0x50) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2[3] + 0x50);
  }
  ppuVar4 = &PTR_PTR_1132d1630;
  if ((undefined **)ppuVar3[5] != (undefined **)0x0) {
    ppuVar4 = (undefined **)ppuVar3[5];
  }
  puVar14 = (undefined8 *)((ulong)ppuVar4[7] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar14 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_80,*puVar14,puVar14[1]);
  }
  else {
    uStack_78 = puVar14[1];
    uStack_80 = *puVar14;
    lStack_70 = puVar14[2];
  }
  FUN_10ad0279c(auStack_68,&uStack_80);
  if (lStack_70 < 0) {
    __ZdlPv(uStack_80);
  }
  plVar10 = (long *)0x20;
  __Znwm();
  plVar10[2] = 0;
  plVar10[3] = 0;
  *plVar10 = (long)&PTR_FUN_110ba56f0;
  plVar10[1] = 0;
  lVar11 = 0x40;
  __Znwm();
  plStack_58 = plVar10;
  func_0x0001093f29e0();
  lStack_88 = lVar11;
  if (plStack_58 != (long *)0x0) {
    (**(code **)(*plStack_58 + 8))();
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 < (long *)param_1[2]) {
    plVar19 = plVar10 + 1;
    *plVar10 = lVar11;
LAB_10aacdc00:
    param_1[1] = (long)plVar19;
  }
  else {
    lVar16 = *param_1;
    lVar18 = (long)plVar10 - lVar16;
    uVar1 = (lVar18 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10aadb144();
      goto LAB_10aacdc78;
    }
    uVar15 = param_1[2] - lVar16;
    uVar13 = (long)uVar15 >> 2;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 >> 0x3d != 0) {
      func_0x000109ffded8();
      goto LAB_10aacdc78;
    }
    lVar12 = uVar13 << 3;
    __Znwm();
    plVar10 = (long *)(lVar12 + lVar18);
    lStack_88 = 0;
    plVar19 = plVar10 + 1;
    *plVar10 = lVar11;
    _memcpy(plVar10 + -(lVar18 >> 3),lVar16,lVar18);
    *param_1 = (long)(plVar10 + -(lVar18 >> 3));
    param_1[1] = (long)plVar19;
    param_1[2] = lVar12 + uVar13 * 8;
    if (lVar16 == 0) goto LAB_10aacdc00;
    __ZdlPv(lVar16);
    lVar11 = lStack_88;
    param_1[1] = (long)plVar19;
    lStack_88 = 0;
    if (lVar11 != 0) {
      func_0x00010aae5364(&lStack_88);
      plVar19 = (long *)param_1[1];
    }
  }
  if ((long *)*param_1 != plVar19) {
    puVar14 = (undefined8 *)plVar19[-1];
    if (plStack_60 != (long *)0x0) {
      plVar10 = plStack_60 + 1;
      do {
        lVar11 = *plVar10;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar7) {
          *plVar10 = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
      }
    }
    return puVar14;
  }
LAB_10aacdc78:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10aacdc7c);
  (*pcVar8)();
}



/* Entry: 10aacdcf8; end: 10aace257;  */

undefined8 * FUN_10aacdcf8(ulong **param_1,long param_2,undefined4 *param_3,long *param_4)

{
  ulong *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  ulong **ppuVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  long lVar14;
  ulong *puVar15;
  undefined4 uVar16;
  long lStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong **ppuStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  ulong **ppuStack_160;
  long lStack_158;
  undefined8 uStack_150;
  ulong *puStack_148;
  ulong *puStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  ulong *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = 0;
  puStack_148 = (ulong *)0x0;
  puStack_140 = (ulong *)0x0;
  lStack_130 = param_2;
  FUN_10a22fc9c(&puStack_148,*param_4,param_4[1],(param_4[1] - *param_4 >> 3) * 0x2e8ba2e8ba2e8ba3);
  puVar15 = puStack_140;
  puVar1 = puStack_148;
  if ((int)*param_1[4] != 0) {
    for (; puVar1 != puVar15; puVar1 = puVar1 + 0xb) {
      FUN_10aacb474(puVar1[3]);
    }
  }
  FUN_10aacd8ec(param_1,puStack_148,
                ((long)puStack_140 - (long)puStack_148 >> 3) * 0x2e8ba2e8ba2e8ba3);
  puVar1 = puStack_148;
  do {
    if (puVar1 == puStack_140) {
      uVar16 = 0x40000000;
LAB_10aacde0c:
      puVar1 = puStack_140;
      ppuStack_160 = (ulong **)0x0;
      lStack_158 = 0;
      uStack_150 = 0;
      if (puStack_148 != puStack_140) {
        puVar15 = puStack_148;
        do {
          uVar12 = puVar15[3];
          ppuVar13 = *(undefined ***)(uVar12 + 0x70);
          ppuVar3 = &PTR_PTR_1132d1970;
          if (ppuVar13 != (undefined **)0x0) {
            ppuVar3 = ppuVar13;
          }
          plVar7 = &lStack_130;
          FUN_10aaca4d0(plVar7,*(undefined1 *)(uVar12 + 0x92),*(undefined1 *)((long)ppuVar3 + 0x31))
          ;
          ppuVar8 = param_1;
          FUN_10aacd9e4(param_1,puVar15);
          uStack_1b0 = puVar15[1];
          uStack_1b8 = *puVar15;
          uStack_1a8 = puVar15[2];
          puVar15[1] = 0;
          puVar15[2] = 0;
          *puVar15 = 0;
          plStack_198 = (long *)puVar15[4];
          uStack_1a0 = puVar15[3];
          puVar15[3] = 0;
          puVar15[4] = 0;
          uStack_190 = puVar15[5];
          ppuStack_1c0 = ppuVar8;
          func_0x000107c2b12c(&lStack_188,puVar15 + 6);
          lStack_128 = 0;
          lStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = (ulong **)CONCAT44((int)plVar7,0x20000000);
          uStack_108 = CONCAT44(uVar16,0x40000000);
          FUN_10a26ebc0(&lStack_128,0,&uStack_110,&uStack_100,4);
          uStack_d0 = uStack_180;
          lVar10 = lStack_188;
          uStack_110 = ppuStack_1c0;
          uStack_100 = uStack_1b0;
          uStack_108 = uStack_1b8;
          uStack_f8 = uStack_1a8;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          plStack_e8 = plStack_198;
          uStack_f0 = uStack_1a0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          plStack_198 = (long *)0x0;
          uStack_e0 = uStack_190;
          lStack_d8 = lStack_188;
          lStack_188 = 0;
          uStack_180 = 0;
          lStack_c8 = lStack_178;
          lStack_c0 = lStack_170;
          uStack_b8 = uStack_168;
          if (lStack_170 != 0) {
            uVar12 = *(ulong *)(lStack_178 + 8);
            if ((uStack_d0 & uStack_d0 - 1) == 0) {
              uVar12 = uVar12 & uStack_d0 - 1;
            }
            else if (uStack_d0 <= uVar12) {
              uVar6 = 0;
              if (uStack_d0 != 0) {
                uVar6 = uVar12 / uStack_d0;
              }
              uVar12 = uVar12 - uVar6 * uStack_d0;
            }
            *(long **)(lVar10 + uVar12 * 8) = &lStack_c8;
            lStack_178 = 0;
            lStack_170 = 0;
          }
          pcStack_b0 = FUN_10aadb31c;
          ppuStack_a8 = &PTR_FUN_110c43d60;
          puVar9 = (ulong *)0x60;
          __Znwm();
          *puVar9 = (ulong)uStack_110;
          puVar9[2] = uStack_100;
          puVar9[1] = uStack_108;
          puVar9[3] = uStack_f8;
          uStack_108 = 0;
          uStack_100 = 0;
          puVar9[5] = (ulong)plStack_e8;
          puVar9[4] = uStack_f0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          plStack_e8 = (long *)0x0;
          puVar9[6] = uStack_e0;
          func_0x000107c2b12c(puVar9 + 7,&lStack_d8);
          lVar10 = param_2 + 0x18;
          puStack_a0 = puVar9;
          FUN_10aadb158(lVar10,&pcStack_b0,&lStack_128);
          (*(code *)*ppuStack_a8)(&ppuStack_a8);
          func_0x000107c2ab24(&lStack_d8);
          plVar7 = plStack_e8;
          if (plStack_e8 != (long *)0x0) {
            plVar2 = plStack_e8 + 1;
            do {
              lVar14 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          if ((long)uStack_f8 < 0) {
            __ZdlPv(uStack_108);
          }
          if (lStack_128 != 0) {
            lStack_120 = lStack_128;
            __ZdlPv();
          }
          func_0x000107c2ab24(&lStack_188);
          plVar7 = plStack_198;
          if (plStack_198 != (long *)0x0) {
            plVar2 = plStack_198 + 1;
            do {
              lVar14 = *plVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_198 + 0x10))(plStack_198);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          if ((long)uStack_1a8 < 0) {
            __ZdlPv(uStack_1b8);
          }
          FUN_10aace298(&ppuStack_160,lVar10);
          puVar15 = puVar15 + 0xb;
        } while (puVar15 != puVar1);
      }
      lVar10 = lStack_158;
      ppuVar8 = ppuStack_160;
      uStack_110 = (ulong **)0x0;
      uStack_108 = 0;
      uStack_100 = 0;
      FUN_10aadb768(&uStack_110,ppuStack_160,lStack_158,lStack_158 - (long)ppuStack_160 >> 2);
      uStack_1b0 = uStack_150;
      lStack_158 = 0;
      uStack_150 = 0;
      ppuStack_160 = (ulong **)0x0;
      uStack_1d8 = uStack_108;
      lStack_1e0 = (long)uStack_110;
      uStack_1d0 = uStack_100;
      uStack_110 = (ulong **)0x0;
      uStack_108 = 0;
      uStack_100 = 0;
      ppuStack_1c0 = ppuVar8;
      uStack_1b8 = lVar10;
      FUN_10aace36c(param_2,&ppuStack_1c0,&lStack_1e0);
      *param_3 = (int)param_2;
      if (lStack_1e0 != 0) {
        __ZdlPv();
      }
      if (ppuStack_1c0 != (ulong **)0x0) {
        __ZdlPv();
      }
      if (uStack_110 != (ulong **)0x0) {
        uStack_108 = (ulong)uStack_110;
        __ZdlPv();
      }
      uStack_110 = &puStack_148;
      puVar11 = &uStack_110;
      FUN_10a22ff44();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        ppuStack_1c0 = &puStack_148;
        FUN_10a22ff44(&ppuStack_1c0);
        __Unwind_Resume();
        func_0x000107c2ab24(puVar11 + 7);
        func_0x00010a052434(puVar11 + 4);
        if (*(char *)((long)puVar11 + 0x1f) < '\0') {
          __ZdlPv(puVar11[1]);
        }
        return puVar11;
      }
      return puVar11;
    }
    if ((*(byte *)((long)puVar1 + 0x2c) >> 2 & 1) != 0) {
      uStack_110 = (ulong **)((ulong)uStack_110 & 0xffffffffffffff00);
      plVar7 = &lStack_130;
      func_0x0001098ac018(plVar7,&UNK_10e4c8e94,0x23,&uStack_110,0,0);
      uVar16 = SUB84(plVar7,0);
      goto LAB_10aacde0c;
    }
    puVar1 = puVar1 + 0xb;
  } while( true );
}



/* Entry: 10aace258; end: 10aace297;  */

long FUN_10aace258(long param_1)

{
  func_0x000107c2ab24(param_1 + 0x38);
  func_0x00010a052434(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10aace298; end: 10aace36b;  */

/* WARNING: Removing unreachable block (ram,0x00010aace7f8) */

long * FUN_10aace298(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined ***pppuVar6;
  code ***pppcVar7;
  code ***pppcVar8;
  undefined ***pppuVar9;
  long *plVar10;
  code **ppcVar11;
  code **ppcVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  long *plVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  undefined **ppuVar23;
  undefined4 *puVar24;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined *puStack_3a0;
  undefined ***pppuStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  long *plStack_370;
  undefined *puStack_368;
  long lStack_360;
  ulong uStack_358;
  long lStack_350;
  long lStack_348;
  undefined4 uStack_340;
  undefined1 auStack_338 [24];
  long lStack_320;
  long lStack_318;
  char cStack_308;
  undefined1 auStack_300 [104];
  undefined **appuStack_298 [3];
  undefined ***pppuStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  code **ppcStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long *plStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined4 uStack_1d8;
  code *pcStack_1d0;
  undefined **ppuStack_1c8;
  long *plStack_1c0;
  long lStack_190;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar14 = (undefined4 *)param_1[1];
  if (puVar14 < (undefined4 *)param_1[2]) {
    puVar24 = puVar14 + 1;
    *puVar14 = (int)param_2;
    plVar10 = param_1;
LAB_10aace348:
    param_1[1] = (long)puVar24;
    return plVar10;
  }
  plVar21 = (long *)*param_1;
  lVar22 = (long)puVar14 - (long)plVar21;
  uVar20 = (lVar22 >> 2) + 1;
  plVar10 = param_1;
  puVar13 = param_2;
  if (uVar20 >> 0x3e == 0) {
    uVar16 = param_1[2] - (long)plVar21;
    uVar19 = (long)uVar16 >> 1;
    if (uVar19 <= uVar20) {
      uVar19 = uVar20;
    }
    if (0x7ffffffffffffffb < uVar16) {
      uVar19 = 0x3fffffffffffffff;
    }
    if (uVar19 >> 0x3e == 0) {
      lVar5 = uVar19 << 2;
      __Znwm();
      puVar14 = (undefined4 *)(lVar5 + lVar22);
      plVar15 = (long *)(puVar14 + -(lVar22 >> 2));
      puVar24 = puVar14 + 1;
      *puVar14 = (int)param_2;
      plVar10 = plVar15;
      _memcpy(plVar15,plVar21,lVar22);
      *param_1 = (long)plVar15;
      param_1[1] = (long)puVar24;
      param_1[2] = lVar5 + uVar19 * 4;
      if (plVar21 != (long *)0x0) {
        __ZdlPv(plVar21);
        plVar10 = plVar21;
      }
      goto LAB_10aace348;
    }
  }
  else {
    FUN_10aadb754();
  }
  func_0x000109ffded8();
  plVar15 = &lStack_120;
  pcStack_58 = FUN_10aace36c;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_110 = param_3[2];
  lStack_118 = param_3[1];
  lStack_120 = *param_3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_a8 = puVar13[2];
  uStack_b0 = puVar13[1];
  uStack_b8 = *puVar13;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
  pcStack_108 = FUN_10aadb7d8;
  ppuStack_100 = &PTR_FUN_110c43d78;
  pcStack_c8 = FUN_10aadb7d8;
  ppuStack_c0 = &PTR_FUN_110c43d78;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  puVar14 = (undefined4 *)&UNK_110bef3a0;
  plVar10 = plVar10 + 3;
  ppcVar12 = &pcStack_c8;
  lStack_80 = lVar22;
  puStack_78 = param_2;
  lStack_70 = (long)plVar21;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0001098aeecc(plVar10);
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  pppuVar6 = &ppuStack_100;
  (*(code *)*ppuStack_100)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return plVar10;
  }
  ___stack_chk_fail();
  if (lStack_120 != 0) {
    lStack_118 = lStack_120;
    __ZdlPv();
  }
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  __Unwind_Resume();
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_258 = 0;
  ppuStack_268 = (undefined **)0x0;
  ppuStack_260 = (undefined **)0x0;
  ppcStack_250 = ppcVar12;
  FUN_10a22fc9c(&ppuStack_268,*plVar15,plVar15[1],(plVar15[1] - *plVar15 >> 3) * 0x2e8ba2e8ba2e8ba3)
  ;
  ppuVar23 = ppuStack_260;
  ppuVar4 = ppuStack_268;
  if (*(int *)pppuVar6[4] != 0) {
    for (; ppuVar4 != ppuVar23; ppuVar4 = ppuVar4 + 0xb) {
      FUN_10aacb474(ppuVar4[3]);
    }
  }
  FUN_10aacd8ec(pppuVar6,ppuStack_268,
                ((long)ppuStack_260 - (long)ppuStack_268 >> 3) * 0x2e8ba2e8ba2e8ba3);
  pppuStack_280 = (undefined ***)0x0;
  lStack_278 = 0;
  uStack_270 = 0;
  FUN_10aacb314(auStack_338,ppuStack_268,
                ((long)ppuStack_260 - (long)ppuStack_268 >> 3) * 0x2e8ba2e8ba2e8ba3);
  pppcVar7 = &ppcStack_250;
  func_0x0001098ac018(pppcVar7,&UNK_10e4a7b05,0x24,auStack_338,0,1);
  uStack_230 = appuStack_298;
  FUN_10a22d224(&uStack_230);
  FUN_10a22ce48(auStack_300);
  if ((cStack_308 == '\x01') && (lStack_320 != 0)) {
    lStack_318 = lStack_320;
    __ZdlPv();
  }
  ppuVar4 = ppuStack_260;
  if (ppuStack_268 == ppuStack_260) {
    lVar22 = 0;
    pppuVar9 = (undefined ***)0x0;
  }
  else {
    ppuVar23 = ppuStack_268;
    do {
      puVar17 = ppuVar23[3];
      ppuVar18 = *(undefined ***)(puVar17 + 0x70);
      ppuVar1 = &PTR_PTR_1132d1970;
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar1 = ppuVar18;
      }
      pppcVar8 = &ppcStack_250;
      FUN_10aaca4d0(pppcVar8,puVar17[0x92],*(undefined1 *)((long)ppuVar1 + 0x31));
      pppuVar9 = pppuVar6;
      FUN_10aacd9e4(pppuVar6,ppuVar23);
      puStack_388 = ppuVar23[1];
      puStack_390 = *ppuVar23;
      puStack_380 = ppuVar23[2];
      ppuVar23[1] = (undefined *)0x0;
      ppuVar23[2] = (undefined *)0x0;
      *ppuVar23 = (undefined *)0x0;
      plStack_370 = (long *)ppuVar23[4];
      puStack_378 = ppuVar23[3];
      ppuVar23[3] = (undefined *)0x0;
      ppuVar23[4] = (undefined *)0x0;
      puStack_368 = ppuVar23[5];
      pppuStack_398 = pppuVar9;
      func_0x000107c2b12c(&lStack_360,ppuVar23 + 6);
      lStack_248 = 0;
      lStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = (undefined ***)CONCAT44((int)pppcVar8,0x20000000);
      uStack_228 = (undefined ***)CONCAT44((int)pppcVar7,0x40000000);
      FUN_10a26ebc0(&lStack_248,0,&uStack_230,&puStack_220,4);
      uStack_1f0 = uStack_358;
      lVar22 = lStack_360;
      uStack_230 = pppuStack_398;
      puStack_220 = puStack_388;
      uStack_228 = (undefined ***)puStack_390;
      puStack_218 = puStack_380;
      puStack_390 = (undefined *)0x0;
      puStack_388 = (undefined *)0x0;
      plStack_208 = plStack_370;
      puStack_210 = puStack_378;
      puStack_380 = (undefined *)0x0;
      puStack_378 = (undefined *)0x0;
      plStack_370 = (long *)0x0;
      puStack_200 = puStack_368;
      lStack_1f8 = lStack_360;
      lStack_360 = 0;
      uStack_358 = 0;
      lStack_1e8 = lStack_350;
      lStack_1e0 = lStack_348;
      uStack_1d8 = uStack_340;
      if (lStack_348 != 0) {
        uVar20 = *(ulong *)(lStack_350 + 8);
        if ((uStack_1f0 & uStack_1f0 - 1) == 0) {
          uVar20 = uVar20 & uStack_1f0 - 1;
        }
        else if (uStack_1f0 <= uVar20) {
          uVar19 = 0;
          if (uStack_1f0 != 0) {
            uVar19 = uVar20 / uStack_1f0;
          }
          uVar20 = uVar20 - uVar19 * uStack_1f0;
        }
        *(long **)(lVar22 + uVar20 * 8) = &lStack_1e8;
        lStack_350 = 0;
        lStack_348 = 0;
      }
      pcStack_1d0 = FUN_10aadb970;
      ppuStack_1c8 = &PTR_FUN_110c43da8;
      plVar10 = (long *)0x60;
      __Znwm();
      *plVar10 = (long)uStack_230;
      plVar10[2] = (long)puStack_220;
      plVar10[1] = (long)uStack_228;
      plVar10[3] = (long)puStack_218;
      uStack_228 = (undefined ***)0x0;
      puStack_220 = (undefined *)0x0;
      plVar10[5] = (long)plStack_208;
      plVar10[4] = (long)puStack_210;
      puStack_218 = (undefined *)0x0;
      puStack_210 = (undefined *)0x0;
      plStack_208 = (long *)0x0;
      plVar10[6] = (long)puStack_200;
      func_0x000107c2b12c(plVar10 + 7,&lStack_1f8);
      ppcVar11 = ppcVar12 + 3;
      plStack_1c0 = plVar10;
      FUN_10aadb158(ppcVar11,&pcStack_1d0,&lStack_248);
      (*(code *)*ppuStack_1c8)(&ppuStack_1c8);
      func_0x000107c2ab24(&lStack_1f8);
      plVar10 = plStack_208;
      if (plStack_208 != (long *)0x0) {
        plVar21 = plStack_208 + 1;
        do {
          lVar22 = *plVar21;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (lStack_248 != 0) {
        lStack_240 = lStack_248;
        __ZdlPv();
      }
      func_0x000107c2ab24(&lStack_360);
      plVar10 = plStack_370;
      if (plStack_370 != (long *)0x0) {
        plVar21 = plStack_370 + 1;
        do {
          lVar22 = *plVar21;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *plVar21 = lVar22 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_370 + 0x10))(plStack_370);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if ((long)puStack_380 < 0) {
        __ZdlPv(puStack_390);
      }
      FUN_10aace298(&pppuStack_280,ppcVar11);
      ppuVar23 = ppuVar23 + 0xb;
      lVar22 = lStack_278;
      pppuVar9 = pppuStack_280;
    } while (ppuVar23 != ppuVar4);
  }
  uStack_230 = (undefined ***)0x0;
  uStack_228 = (undefined ***)0x0;
  puStack_220 = (undefined *)0x0;
  FUN_10aadb768(&uStack_230,pppuVar9,lVar22,lVar22 - (long)pppuVar9 >> 2);
  puStack_388 = (undefined *)uStack_270;
  lStack_278 = 0;
  uStack_270 = 0;
  pppuStack_280 = (undefined ***)0x0;
  uStack_3a8 = uStack_228;
  lStack_3b0 = (long)uStack_230;
  puStack_3a0 = puStack_220;
  uStack_230 = (undefined ***)0x0;
  uStack_228 = (undefined ***)0x0;
  puStack_220 = (undefined *)0x0;
  pppuStack_398 = pppuVar9;
  puStack_390 = (undefined *)lVar22;
  FUN_10aace36c(ppcVar12,&pppuStack_398,&lStack_3b0);
  *puVar14 = (int)ppcVar12;
  if (lStack_3b0 != 0) {
    __ZdlPv();
  }
  if (pppuStack_398 != (undefined ***)0x0) {
    __ZdlPv();
  }
  if (uStack_230 != (undefined ***)0x0) {
    uStack_228 = uStack_230;
    __ZdlPv();
  }
  uStack_230 = &ppuStack_268;
  plVar10 = &uStack_230;
  FUN_10a22ff44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return plVar10;
  }
  ___stack_chk_fail();
  if (lStack_3b0 != 0) {
    __ZdlPv();
  }
  if (pppuStack_398 != (undefined ***)0x0) {
    __ZdlPv();
  }
  if (uStack_230 != (undefined ***)0x0) {
    uStack_228 = uStack_230;
    __ZdlPv();
  }
  if (pppuStack_280 != (undefined ***)0x0) {
    __ZdlPv();
  }
  pppuStack_398 = &ppuStack_268;
  FUN_10a22ff44(&pppuStack_398);
  __Unwind_Resume();
  func_0x000107c2ab24(plVar10 + 7);
  func_0x00010a052434(plVar10 + 4);
  if (*(char *)((long)plVar10 + 0x1f) < '\0') {
    __ZdlPv(plVar10[1]);
  }
  return plVar10;
}



/* Entry: 10aace36c; end: 10aace4a3;  */

/* WARNING: Removing unreachable block (ram,0x00010aace7f8) */

undefined8 * FUN_10aace36c(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  code ***pppcVar9;
  code ***pppcVar10;
  undefined ***pppuVar11;
  long *plVar12;
  code **ppcVar13;
  code **ppcVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  ulong uVar19;
  undefined **ppuVar20;
  long lStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined ***pppuStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  long *plStack_320;
  undefined *puStack_318;
  long lStack_310;
  ulong uStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined4 uStack_2f0;
  undefined1 auStack_2e8 [24];
  long lStack_2d0;
  long lStack_2c8;
  char cStack_2b8;
  undefined1 auStack_2b0 [104];
  undefined **appuStack_248 [3];
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  code **ppcStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  long *plStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined4 uStack_188;
  code *pcStack_180;
  undefined **ppuStack_178;
  long *plStack_170;
  long lStack_140;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_38;
  
  plVar12 = &lStack_d0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_c0 = param_3[2];
  lStack_c8 = param_3[1];
  lStack_d0 = *param_3;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_58 = param_2[2];
  uStack_60 = param_2[1];
  uStack_68 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  pcStack_b8 = FUN_10aadb7d8;
  ppuStack_b0 = &PTR_FUN_110c43d78;
  pcStack_78 = FUN_10aadb7d8;
  ppuStack_70 = &PTR_FUN_110c43d78;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  puVar15 = (undefined4 *)&UNK_110bef3a0;
  puVar7 = (undefined8 *)(param_1 + 0x18);
  ppcVar14 = &pcStack_78;
  func_0x0001098aeecc(puVar7);
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar8 = &ppuStack_b0;
  (*(code *)*ppuStack_b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  (*(code *)*ppuStack_70)(&ppuStack_70);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  __Unwind_Resume();
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_208 = 0;
  ppuStack_218 = (undefined **)0x0;
  ppuStack_210 = (undefined **)0x0;
  ppcStack_200 = ppcVar14;
  FUN_10a22fc9c(&ppuStack_218,*plVar12,plVar12[1],(plVar12[1] - *plVar12 >> 3) * 0x2e8ba2e8ba2e8ba3)
  ;
  ppuVar20 = ppuStack_210;
  ppuVar6 = ppuStack_218;
  if (*(int *)pppuVar8[4] != 0) {
    for (; ppuVar6 != ppuVar20; ppuVar6 = ppuVar6 + 0xb) {
      FUN_10aacb474(ppuVar6[3]);
    }
  }
  FUN_10aacd8ec(pppuVar8,ppuStack_218,
                ((long)ppuStack_210 - (long)ppuStack_218 >> 3) * 0x2e8ba2e8ba2e8ba3);
  pppuStack_230 = (undefined ***)0x0;
  lStack_228 = 0;
  uStack_220 = 0;
  FUN_10aacb314(auStack_2e8,ppuStack_218,
                ((long)ppuStack_210 - (long)ppuStack_218 >> 3) * 0x2e8ba2e8ba2e8ba3);
  pppcVar9 = &ppcStack_200;
  func_0x0001098ac018(pppcVar9,&UNK_10e4a7b05,0x24,auStack_2e8,0,1);
  uStack_1e0 = appuStack_248;
  FUN_10a22d224(&uStack_1e0);
  FUN_10a22ce48(auStack_2b0);
  if ((cStack_2b8 == '\x01') && (lStack_2d0 != 0)) {
    lStack_2c8 = lStack_2d0;
    __ZdlPv();
  }
  ppuVar6 = ppuStack_210;
  if (ppuStack_218 == ppuStack_210) {
    lVar18 = 0;
    pppuVar11 = (undefined ***)0x0;
  }
  else {
    ppuVar20 = ppuStack_218;
    do {
      puVar16 = ppuVar20[3];
      ppuVar17 = *(undefined ***)(puVar16 + 0x70);
      ppuVar2 = &PTR_PTR_1132d1970;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar2 = ppuVar17;
      }
      pppcVar10 = &ppcStack_200;
      FUN_10aaca4d0(pppcVar10,puVar16[0x92],*(undefined1 *)((long)ppuVar2 + 0x31));
      pppuVar11 = pppuVar8;
      FUN_10aacd9e4(pppuVar8,ppuVar20);
      puStack_338 = ppuVar20[1];
      puStack_340 = *ppuVar20;
      puStack_330 = ppuVar20[2];
      ppuVar20[1] = (undefined *)0x0;
      ppuVar20[2] = (undefined *)0x0;
      *ppuVar20 = (undefined *)0x0;
      plStack_320 = (long *)ppuVar20[4];
      puStack_328 = ppuVar20[3];
      ppuVar20[3] = (undefined *)0x0;
      ppuVar20[4] = (undefined *)0x0;
      puStack_318 = ppuVar20[5];
      pppuStack_348 = pppuVar11;
      func_0x000107c2b12c(&lStack_310,ppuVar20 + 6);
      lStack_1f8 = 0;
      lStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_1e0 = (undefined ***)CONCAT44((int)pppcVar10,0x20000000);
      uStack_1d8 = (undefined ***)CONCAT44((int)pppcVar9,0x40000000);
      FUN_10a26ebc0(&lStack_1f8,0,&uStack_1e0,&puStack_1d0,4);
      uStack_1a0 = uStack_308;
      lVar18 = lStack_310;
      uStack_1e0 = pppuStack_348;
      puStack_1d0 = puStack_338;
      uStack_1d8 = (undefined ***)puStack_340;
      puStack_1c8 = puStack_330;
      puStack_340 = (undefined *)0x0;
      puStack_338 = (undefined *)0x0;
      plStack_1b8 = plStack_320;
      puStack_1c0 = puStack_328;
      puStack_330 = (undefined *)0x0;
      puStack_328 = (undefined *)0x0;
      plStack_320 = (long *)0x0;
      puStack_1b0 = puStack_318;
      lStack_1a8 = lStack_310;
      lStack_310 = 0;
      uStack_308 = 0;
      lStack_198 = lStack_300;
      lStack_190 = lStack_2f8;
      uStack_188 = uStack_2f0;
      if (lStack_2f8 != 0) {
        uVar19 = *(ulong *)(lStack_300 + 8);
        if ((uStack_1a0 & uStack_1a0 - 1) == 0) {
          uVar19 = uVar19 & uStack_1a0 - 1;
        }
        else if (uStack_1a0 <= uVar19) {
          uVar5 = 0;
          if (uStack_1a0 != 0) {
            uVar5 = uVar19 / uStack_1a0;
          }
          uVar19 = uVar19 - uVar5 * uStack_1a0;
        }
        *(long **)(lVar18 + uVar19 * 8) = &lStack_198;
        lStack_300 = 0;
        lStack_2f8 = 0;
      }
      pcStack_180 = FUN_10aadb970;
      ppuStack_178 = &PTR_FUN_110c43da8;
      plVar12 = (long *)0x60;
      __Znwm();
      *plVar12 = (long)uStack_1e0;
      plVar12[2] = (long)puStack_1d0;
      plVar12[1] = (long)uStack_1d8;
      plVar12[3] = (long)puStack_1c8;
      uStack_1d8 = (undefined ***)0x0;
      puStack_1d0 = (undefined *)0x0;
      plVar12[5] = (long)plStack_1b8;
      plVar12[4] = (long)puStack_1c0;
      puStack_1c8 = (undefined *)0x0;
      puStack_1c0 = (undefined *)0x0;
      plStack_1b8 = (long *)0x0;
      plVar12[6] = (long)puStack_1b0;
      func_0x000107c2b12c(plVar12 + 7,&lStack_1a8);
      ppcVar13 = ppcVar14 + 3;
      plStack_170 = plVar12;
      FUN_10aadb158(ppcVar13,&pcStack_180,&lStack_1f8);
      (*(code *)*ppuStack_178)(&ppuStack_178);
      func_0x000107c2ab24(&lStack_1a8);
      plVar12 = plStack_1b8;
      if (plStack_1b8 != (long *)0x0) {
        plVar1 = plStack_1b8 + 1;
        do {
          lVar18 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      if (lStack_1f8 != 0) {
        lStack_1f0 = lStack_1f8;
        __ZdlPv();
      }
      func_0x000107c2ab24(&lStack_310);
      plVar12 = plStack_320;
      if (plStack_320 != (long *)0x0) {
        plVar1 = plStack_320 + 1;
        do {
          lVar18 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_320 + 0x10))(plStack_320);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      if ((long)puStack_330 < 0) {
        __ZdlPv(puStack_340);
      }
      FUN_10aace298(&pppuStack_230,ppcVar13);
      ppuVar20 = ppuVar20 + 0xb;
      lVar18 = lStack_228;
      pppuVar11 = pppuStack_230;
    } while (ppuVar20 != ppuVar6);
  }
  uStack_1e0 = (undefined ***)0x0;
  uStack_1d8 = (undefined ***)0x0;
  puStack_1d0 = (undefined *)0x0;
  FUN_10aadb768(&uStack_1e0,pppuVar11,lVar18,lVar18 - (long)pppuVar11 >> 2);
  puStack_338 = (undefined *)uStack_220;
  lStack_228 = 0;
  uStack_220 = 0;
  pppuStack_230 = (undefined ***)0x0;
  uStack_358 = uStack_1d8;
  lStack_360 = (long)uStack_1e0;
  puStack_350 = puStack_1d0;
  uStack_1e0 = (undefined ***)0x0;
  uStack_1d8 = (undefined ***)0x0;
  puStack_1d0 = (undefined *)0x0;
  pppuStack_348 = pppuVar11;
  puStack_340 = (undefined *)lVar18;
  FUN_10aace36c(ppcVar14,&pppuStack_348,&lStack_360);
  *puVar15 = (int)ppcVar14;
  if (lStack_360 != 0) {
    __ZdlPv();
  }
  if (pppuStack_348 != (undefined ***)0x0) {
    __ZdlPv();
  }
  if (uStack_1e0 != (undefined ***)0x0) {
    uStack_1d8 = uStack_1e0;
    __ZdlPv();
  }
  uStack_1e0 = &ppuStack_218;
  puVar7 = &uStack_1e0;
  FUN_10a22ff44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (lStack_360 != 0) {
    __ZdlPv();
  }
  if (pppuStack_348 != (undefined ***)0x0) {
    __ZdlPv();
  }
  if (uStack_1e0 != (undefined ***)0x0) {
    uStack_1d8 = uStack_1e0;
    __ZdlPv();
  }
  if (pppuStack_230 != (undefined ***)0x0) {
    __ZdlPv();
  }
  pppuStack_348 = &ppuStack_218;
  FUN_10a22ff44(&pppuStack_348);
  __Unwind_Resume();
  func_0x000107c2ab24(puVar7 + 7);
  func_0x00010a052434(puVar7 + 4);
  if (*(char *)((long)puVar7 + 0x1f) < '\0') {
    __ZdlPv(puVar7[1]);
  }
  return puVar7;
}



/* Entry: 10aace4a4; end: 10aacea2f;  */

/* WARNING: Removing unreachable block (ram,0x00010aace7f8) */

undefined8 * FUN_10aace4a4(long **param_1,long param_2,undefined4 *param_3,long *param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long **pplStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long *plStack_250;
  long lStack_248;
  long lStack_240;
  ulong uStack_238;
  long lStack_230;
  long lStack_228;
  undefined4 uStack_220;
  undefined1 auStack_218 [24];
  long lStack_200;
  long lStack_1f8;
  char cStack_1e8;
  undefined1 auStack_1e0 [104];
  long *aplStack_178 [3];
  long **pplStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = 0;
  plStack_148 = (long *)0x0;
  plStack_140 = (long *)0x0;
  lStack_130 = param_2;
  FUN_10a22fc9c(&plStack_148,*param_4,param_4[1],(param_4[1] - *param_4 >> 3) * 0x2e8ba2e8ba2e8ba3);
  plVar6 = plStack_140;
  plVar7 = plStack_148;
  if ((int)*param_1[4] != 0) {
    for (; plVar7 != plVar6; plVar7 = plVar7 + 0xb) {
      FUN_10aacb474(plVar7[3]);
    }
  }
  FUN_10aacd8ec(param_1,plStack_148,
                ((long)plStack_140 - (long)plStack_148 >> 3) * 0x2e8ba2e8ba2e8ba3);
  pplStack_160 = (long **)0x0;
  lStack_158 = 0;
  uStack_150 = 0;
  FUN_10aacb314(auStack_218,plStack_148,
                ((long)plStack_140 - (long)plStack_148 >> 3) * 0x2e8ba2e8ba2e8ba3);
  plVar7 = &lStack_130;
  func_0x0001098ac018(plVar7,&UNK_10e4a7b05,0x24,auStack_218,0,1);
  uStack_110 = aplStack_178;
  FUN_10a22d224(&uStack_110);
  FUN_10a22ce48(auStack_1e0);
  if ((cStack_1e8 == '\x01') && (lStack_200 != 0)) {
    lStack_1f8 = lStack_200;
    __ZdlPv();
  }
  plVar6 = plStack_140;
  if (plStack_148 == plStack_140) {
    lVar11 = 0;
    pplVar8 = (long **)0x0;
  }
  else {
    plVar15 = plStack_148;
    do {
      lVar11 = plVar15[3];
      ppuVar12 = *(undefined ***)(lVar11 + 0x70);
      ppuVar2 = &PTR_PTR_1132d1970;
      if (ppuVar12 != (undefined **)0x0) {
        ppuVar2 = ppuVar12;
      }
      plVar9 = &lStack_130;
      FUN_10aaca4d0(plVar9,*(undefined1 *)(lVar11 + 0x92),*(undefined1 *)((long)ppuVar2 + 0x31));
      pplVar8 = param_1;
      FUN_10aacd9e4(param_1,plVar15);
      lStack_268 = plVar15[1];
      lStack_270 = *plVar15;
      lStack_260 = plVar15[2];
      plVar15[1] = 0;
      plVar15[2] = 0;
      *plVar15 = 0;
      plStack_250 = (long *)plVar15[4];
      lStack_258 = plVar15[3];
      plVar15[3] = 0;
      plVar15[4] = 0;
      lStack_248 = plVar15[5];
      pplStack_278 = pplVar8;
      func_0x000107c2b12c(&lStack_240,plVar15 + 6);
      lStack_128 = 0;
      lStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = (long **)CONCAT44((int)plVar9,0x20000000);
      uStack_108 = (long **)CONCAT44((int)plVar7,0x40000000);
      FUN_10a26ebc0(&lStack_128,0,&uStack_110,&lStack_100,4);
      uStack_d0 = uStack_238;
      lVar11 = lStack_240;
      uStack_110 = pplStack_278;
      lStack_100 = lStack_268;
      uStack_108 = (long **)lStack_270;
      lStack_f8 = lStack_260;
      lStack_270 = 0;
      lStack_268 = 0;
      plStack_e8 = plStack_250;
      lStack_f0 = lStack_258;
      lStack_260 = 0;
      lStack_258 = 0;
      plStack_250 = (long *)0x0;
      lStack_e0 = lStack_248;
      lStack_d8 = lStack_240;
      lStack_240 = 0;
      uStack_238 = 0;
      lStack_c8 = lStack_230;
      lStack_c0 = lStack_228;
      uStack_b8 = uStack_220;
      if (lStack_228 != 0) {
        uVar14 = *(ulong *)(lStack_230 + 8);
        if ((uStack_d0 & uStack_d0 - 1) == 0) {
          uVar14 = uVar14 & uStack_d0 - 1;
        }
        else if (uStack_d0 <= uVar14) {
          uVar5 = 0;
          if (uStack_d0 != 0) {
            uVar5 = uVar14 / uStack_d0;
          }
          uVar14 = uVar14 - uVar5 * uStack_d0;
        }
        *(long **)(lVar11 + uVar14 * 8) = &lStack_c8;
        lStack_230 = 0;
        lStack_228 = 0;
      }
      pcStack_b0 = FUN_10aadb970;
      ppuStack_a8 = &PTR_FUN_110c43da8;
      plVar9 = (long *)0x60;
      __Znwm();
      *plVar9 = (long)uStack_110;
      plVar9[2] = lStack_100;
      plVar9[1] = (long)uStack_108;
      plVar9[3] = lStack_f8;
      uStack_108 = (long **)0x0;
      lStack_100 = 0;
      plVar9[5] = (long)plStack_e8;
      plVar9[4] = lStack_f0;
      lStack_f8 = 0;
      lStack_f0 = 0;
      plStack_e8 = (long *)0x0;
      plVar9[6] = lStack_e0;
      func_0x000107c2b12c(plVar9 + 7,&lStack_d8);
      lVar11 = param_2 + 0x18;
      plStack_a0 = plVar9;
      FUN_10aadb158(lVar11,&pcStack_b0,&lStack_128);
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      func_0x000107c2ab24(&lStack_d8);
      plVar9 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar1 = plStack_e8 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (lStack_128 != 0) {
        lStack_120 = lStack_128;
        __ZdlPv();
      }
      func_0x000107c2ab24(&lStack_240);
      plVar9 = plStack_250;
      if (plStack_250 != (long *)0x0) {
        plVar1 = plStack_250 + 1;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_250 + 0x10))(plStack_250);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (lStack_260 < 0) {
        __ZdlPv(lStack_270);
      }
      FUN_10aace298(&pplStack_160,lVar11);
      plVar15 = plVar15 + 0xb;
      lVar11 = lStack_158;
      pplVar8 = pplStack_160;
    } while (plVar15 != plVar6);
  }
  uStack_110 = (long **)0x0;
  uStack_108 = (long **)0x0;
  lStack_100 = 0;
  FUN_10aadb768(&uStack_110,pplVar8,lVar11,lVar11 - (long)pplVar8 >> 2);
  lStack_268 = uStack_150;
  lStack_158 = 0;
  uStack_150 = 0;
  pplStack_160 = (long **)0x0;
  uStack_288 = uStack_108;
  lStack_290 = (long)uStack_110;
  lStack_280 = lStack_100;
  uStack_110 = (long **)0x0;
  uStack_108 = (long **)0x0;
  lStack_100 = 0;
  pplStack_278 = pplVar8;
  lStack_270 = lVar11;
  FUN_10aace36c(param_2,&pplStack_278,&lStack_290);
  *param_3 = (int)param_2;
  if (lStack_290 != 0) {
    __ZdlPv();
  }
  if (pplStack_278 != (long **)0x0) {
    __ZdlPv();
  }
  if (uStack_110 != (long **)0x0) {
    uStack_108 = uStack_110;
    __ZdlPv();
  }
  uStack_110 = &plStack_148;
  puVar10 = &uStack_110;
  FUN_10a22ff44();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar10;
  }
  ___stack_chk_fail();
  if (lStack_290 != 0) {
    __ZdlPv();
  }
  if (pplStack_278 != (long **)0x0) {
    __ZdlPv();
  }
  if (uStack_110 != (long **)0x0) {
    uStack_108 = uStack_110;
    __ZdlPv();
  }
  if (pplStack_160 != (long **)0x0) {
    __ZdlPv();
  }
  pplStack_278 = &plStack_148;
  FUN_10a22ff44(&pplStack_278);
  __Unwind_Resume();
  func_0x000107c2ab24(puVar10 + 7);
  func_0x00010a052434(puVar10 + 4);
  if (*(char *)((long)puVar10 + 0x1f) < '\0') {
    __ZdlPv(puVar10[1]);
  }
  return puVar10;
}



/* Entry: 10aacea30; end: 10aacea6f;  */

long FUN_10aacea30(long param_1)

{
  func_0x000107c2ab24(param_1 + 0x38);
  func_0x00010a052434(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10aacea70; end: 10aaceac3;  */

undefined8 * FUN_10aacea70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c433d0;
  uVar1 = 0x20;
  __Znwm();
  FUN_10aaccd54();
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 10aaceac4; end: 10aaceb33;  */

undefined8 * FUN_10aaceac4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c433d0;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10aae541c();
  }
  return param_1;
}



/* Entry: 10aaceb34; end: 10aaceb6b;  */

undefined8 FUN_10aaceb34(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  if ((*(byte *)(param_2 + 0x2d0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaceb6c);
    (*pcVar1)();
  }
  lVar2 = *(long *)(param_2 + 0x2b8);
  while( true ) {
    if (lVar2 == *(long *)(param_2 + 0x2c0)) {
      return 0x101;
    }
    if ((*(byte *)(lVar2 + 0x2c) >> 2 & 1) != 0) break;
    lVar2 = lVar2 + 0x58;
  }
  return 0x109;
}



/* Entry: 10aaceb6c; end: 10aaced87;  */

void FUN_10aaceb6c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long *aplStack_1b8 [3];
  long lStack_1a0;
  long lStack_198;
  char cStack_188;
  undefined1 auStack_180 [96];
  undefined1 uStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  long lStack_e8;
  long lStack_e0;
  byte bStack_d0;
  undefined1 auStack_c8 [96];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if ((*(byte *)(param_2 + 0x2d0) & 1) != 0) {
    FUN_10aacb314(aplStack_1b8,*(long *)(param_2 + 0x2b8),
                  (*(long *)(param_2 + 0x2c0) - *(long *)(param_2 + 0x2b8) >> 3) *
                  0x2e8ba2e8ba2e8ba3);
    if ((*(byte *)(param_2 + 0x110) & 1) == 0) {
      plStack_100 = aplStack_1b8[0];
      FUN_10a22cb80(&lStack_e8,&lStack_1a0);
      FUN_10a22cd3c(auStack_c8,auStack_180);
      uStack_68 = uStack_120;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      FUN_10a22ce94(&uStack_60,lStack_118,lStack_110,
                    (lStack_110 - lStack_118 >> 3) * 0x2e8ba2e8ba2e8ba3);
      FUN_10a4c3cb8(param_2 + 0x58,&plStack_100);
      puStack_48 = &uStack_60;
      FUN_10a22d224(&puStack_48);
      FUN_10a22ce48(auStack_c8);
      if (((bStack_d0 & 1) != 0) && (lStack_e8 != 0)) {
        lStack_e0 = lStack_e8;
        __ZdlPv();
      }
    }
    else {
      FUN_10aab73e4(param_2 + 0x58,aplStack_1b8);
    }
    plStack_100 = &lStack_118;
    FUN_10a22d224(&plStack_100);
    FUN_10a22ce48(auStack_180);
    if ((cStack_188 == '\x01') && (lStack_1a0 != 0)) {
      lStack_198 = lStack_1a0;
      __ZdlPv();
    }
    if ((*(byte *)(param_2 + 0x2d0) & 1) != 0) {
      lVar2 = *(long *)(param_2 + 0x2b8);
      while( true ) {
        if (lVar2 == *(long *)(param_2 + 0x2c0)) {
          return;
        }
        if ((*(byte *)(lVar2 + 0x2c) >> 2 & 1) != 0) break;
        lVar2 = lVar2 + 0x58;
      }
      uStack_f8 = 0;
      uStack_f1 = 0;
      uStack_f0 = 0;
      uStack_e9 = 0;
      lStack_e8 = 0;
      plStack_100 = (long *)((ulong)plStack_100 & 0xffff000000000000);
      FUN_10a113ca0(param_2 + 0x2d8,&plStack_100);
      if (-1 < lStack_e8) {
        return;
      }
      __ZdlPv(CONCAT17(uStack_f1,uStack_f8));
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aaced1c);
  (*pcVar1)();
}



/* Entry: 10aaced88; end: 10aacf123;  */

void FUN_10aaced88(long param_1,undefined8 param_2,undefined8 param_3,long param_4,char *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 ***pppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 ***pppuStack_c8;
  long lStack_c0;
  undefined7 uStack_b8;
  char cStack_b1;
  undefined8 ***pppuStack_b0;
  undefined **ppuStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  long lStack_98;
  undefined8 ***pppuStack_90;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_98 = param_4;
  if ((param_5[0x2d0] & 1U) == 0) goto LAB_10aacf084;
  if (*param_5 == '\0') {
    lVar7 = *(long *)(param_5 + 0x2c0);
    for (lVar6 = *(long *)(param_5 + 0x2b8); lVar6 != lVar7; lVar6 = lVar6 + 0x58) {
      FUN_10aacb474(*(undefined8 *)(lVar6 + 0x18));
    }
  }
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  pppuStack_90 = (undefined8 ****)0x0;
  func_0x00010a2914e4(param_4 + 0x80,puVar3);
  func_0x00010a2914e4(&pppuStack_90,0);
  if ((param_5[0x2d0] & 1U) == 0) goto LAB_10aacf084;
  pppuStack_90 = (undefined8 ***)FUN_10aae5460;
  ppuStack_88 = &PTR_FUN_110c446c8;
  plStack_80 = &lStack_98;
  FUN_10aacce10(&pppuStack_f0,*(undefined8 *)(param_1 + 8),param_2,lStack_98,
                *(long *)(param_5 + 0x2b8),
                (*(long *)(param_5 + 0x2c0) - *(long *)(param_5 + 0x2b8) >> 3) * 0x2e8ba2e8ba2e8ba3,
                &pppuStack_90);
  puVar3 = *(undefined8 **)(lStack_98 + 0x80);
  FUN_10aadbcac(puVar3);
  puVar3[1] = lStack_e8;
  *puVar3 = pppuStack_f0;
  puVar3[2] = uStack_e0;
  pppuStack_f0 = (undefined8 ***)0x0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  pppuStack_b0 = &pppuStack_f0;
  FUN_10a291524(&pppuStack_b0);
  iVar2 = (int)&ppuStack_88;
  (*(code *)*ppuStack_88)();
  FUN_10ad055a0();
  if (iVar2 == 0) {
LAB_10aaceee0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    ppuVar4 = &PTR___tlv_bootstrap_11340dfd8;
    (*(code *)PTR___tlv_bootstrap_11340dfd8)();
    if (*ppuVar4 == (undefined *)0x0) {
      ppuVar4 = &PTR___tlv_bootstrap_11340dd98;
      (*(code *)PTR___tlv_bootstrap_11340dd98)();
      plVar5 = (long *)*ppuVar4;
      if ((plVar5 == (long *)0x0) || ((**(code **)(*plVar5 + 0x18))(), plVar5 == (long *)0x0))
      goto LAB_10aaceee0;
      plVar5 = plVar5 + 7;
    }
    else {
      plVar5 = (long *)(*ppuVar4 + 8);
    }
    if (((uint)*(undefined8 *)(*plVar5 + 0x10) >> 1 & 1) == 0) goto LAB_10aaceee0;
  }
  func_0x000107c2b054(&pppuStack_b0,&UNK_10f68e017);
  func_0x000107c2b054(&pppuStack_c8,&UNK_10f68da37);
  pppuStack_f0 = (undefined8 ***)0x10f29b0c6;
  pppuStack_90 = pppuStack_f0;
  if (cStack_99 < '\0') {
    if (ppuStack_a8 != (undefined **)0x0) {
      pppuStack_90 = pppuStack_b0;
    }
  }
  else if (cStack_99 != '\0') {
    pppuStack_90 = &pppuStack_b0;
  }
  if (cStack_b1 < '\0') {
    if (lStack_c0 != 0) {
      pppuStack_f0 = pppuStack_c8;
    }
  }
  else if (cStack_b1 != '\0') {
    pppuStack_f0 = &pppuStack_c8;
  }
  FUN_10a224324(&pppuStack_90,&pppuStack_f0);
  if (cStack_99 < '\0') {
    if (ppuStack_a8 == (undefined **)0x0) goto LAB_10aacf00c;
    func_0x000107c3192c(&pppuStack_90,pppuStack_b0);
LAB_10aacf028:
    uStack_78 = 1;
  }
  else {
    if (cStack_99 != '\0') {
      ppuStack_88 = ppuStack_a8;
      pppuStack_90 = pppuStack_b0;
      plStack_80 = (long *)CONCAT17(cStack_99,uStack_a0);
      goto LAB_10aacf028;
    }
LAB_10aacf00c:
    uStack_78 = 0;
    pppuStack_90 = (undefined8 ***)((ulong)pppuStack_90 & 0xffffffffffffff00);
  }
  if (cStack_b1 < '\0') {
    if (lStack_c0 == 0) goto LAB_10aacf054;
    func_0x000107c3192c(&pppuStack_f0,pppuStack_c8);
LAB_10aacf070:
    uStack_d8 = 1;
  }
  else {
    if (cStack_b1 != '\0') {
      lStack_e8 = lStack_c0;
      pppuStack_f0 = pppuStack_c8;
      uStack_e0 = CONCAT17(cStack_b1,uStack_b8);
      goto LAB_10aacf070;
    }
LAB_10aacf054:
    uStack_d8 = 0;
    pppuStack_f0 = (undefined8 ***)((ulong)pppuStack_f0 & 0xffffffffffffff00);
  }
  FUN_10a234a0c(&pppuStack_90,&pppuStack_f0);
LAB_10aacf084:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aacf088);
  (*pcVar1)();
}



/* Entry: 10aacf124; end: 10aacf163;  */

void FUN_10aacf124(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar1 = (long *)(*(undefined8 **)(param_1 + 8))[1];
    for (plVar2 = (long *)**(undefined8 **)(param_1 + 8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
      func_0x0001093a1d6c(*(undefined8 *)(*plVar2 + 0x18));
    }
  }
  return;
}



/* Entry: 10aacf164; end: 10aacf16f;  */

undefined8 FUN_10aacf164(void)

{
  return 0x16800000001;
}



/* Entry: 10aacf170; end: 10aacf1c3;  */

undefined8 * FUN_10aacf170(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c43448;
  uVar1 = 0x20;
  __Znwm();
  FUN_10aaccd54();
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 10aacf1c4; end: 10aacf233;  */

undefined8 * FUN_10aacf1c4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_110c43448;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_10aae541c();
  }
  return param_1;
}



/* Entry: 10aacf234; end: 10aacf26b;  */

undefined8 FUN_10aacf234(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aacf26c);
    (*pcVar1)();
  }
  lVar2 = *(long *)(param_2 + 0x298);
  while( true ) {
    if (lVar2 == *(long *)(param_2 + 0x2a0)) {
      return 0x100;
    }
    if ((*(byte *)(lVar2 + 0x2c) >> 2 & 1) != 0) break;
    lVar2 = lVar2 + 0x58;
  }
  return 0x108;
}



/* Entry: 10aacf26c; end: 10aacf333;  */

void FUN_10aacf26c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((*(byte *)(param_2 + 0x2b0) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10aacf318);
    (*pcVar1)();
  }
  lVar2 = *(long *)(param_2 + 0x298);
  lVar3 = *(long *)(param_2 + 0x2a0);
  lVar4 = lVar2;
  if (lVar2 != lVar3) {
    do {
      if (*(char *)(*(long *)(lVar4 + 0x18) + 0x92) == '\x01') {
        *(undefined1 *)(param_2 + 3) = 1;
        break;
      }
      lVar4 = lVar4 + 0x58;
    } while (lVar4 != lVar3);
    do {
      if ((*(byte *)(lVar2 + 0x2c) >> 2 & 1) != 0) {
        uStack_38 = 0;
        uStack_30 = 0;
        lStack_28 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        FUN_10a113ca0(param_2 + 0x2d8,&uStack_40);
        if (-1 < lStack_28) {
          return;
        }
        __ZdlPv(uStack_38);
        return;
      }
      lVar2 = lVar2 + 0x58;
    } while (lVar2 != lVar3);
  }
  return;
}



/* Entry: 10aacf334; end: 10aacf4bb;  */

void FUN_10aacf334(long param_1,undefined8 param_2,undefined8 param_3,long param_4,char *param_5)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_5[0x2b0] & 1U) != 0) {
    if (*param_5 == '\0') {
      lVar7 = *(long *)(param_5 + 0x2a0);
      for (lVar5 = *(long *)(param_5 + 0x298); lVar5 != lVar7; lVar5 = lVar5 + 0x58) {
        FUN_10aacb474(*(undefined8 *)(lVar5 + 0x18));
      }
    }
    puVar3 = (undefined8 *)0x18;
    __Znwm();
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uStack_88 = 0;
    func_0x00010a2914e4(param_4 + 0x78,puVar3);
    func_0x00010a2914e4(&uStack_88,0);
    if ((param_5[0x2b0] & 1U) != 0) {
      lVar5 = *(long *)(param_1 + 8);
      uStack_88 = 0x10aae55b8;
      appuStack_80[0] = &PTR_DAT_110c446e0;
      FUN_10aacce10(&uStack_b0,lVar5,param_2,param_4,*(long *)(param_5 + 0x298),
                    (*(long *)(param_5 + 0x2a0) - *(long *)(param_5 + 0x298) >> 3) *
                    0x2e8ba2e8ba2e8ba3,&uStack_88);
      puVar3 = *(undefined8 **)(param_4 + 0x78);
      FUN_10aadbcac(puVar3);
      puVar3[1] = uStack_a8;
      *puVar3 = uStack_b0;
      puVar3[2] = uStack_a0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      puStack_90 = (undefined1 *)&uStack_b0;
      FUN_10a291524(&puStack_90);
      pppuVar4 = appuStack_80;
      (*(code *)*appuStack_80[0])();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
        ___stack_chk_fail();
        (*(code *)*appuStack_80[0])(appuStack_80);
        __Unwind_Resume();
        if ((*(byte *)(lVar5 + 8) & 1) == 0) {
          plVar1 = (long *)pppuVar4[1][1];
          for (plVar6 = (long *)*pppuVar4[1]; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            func_0x0001093a1d6c(*(undefined8 *)(*plVar6 + 0x18));
          }
        }
        return;
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aacf49c);
  (*pcVar2)();
}



/* Entry: 10aacf4bc; end: 10aacf4fb;  */

void FUN_10aacf4bc(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    plVar1 = (long *)(*(undefined8 **)(param_1 + 8))[1];
    for (plVar2 = (long *)**(undefined8 **)(param_1 + 8); plVar2 != plVar1; plVar2 = plVar2 + 1) {
      func_0x0001093a1d6c(*(undefined8 *)(*plVar2 + 0x18));
    }
  }
  return;
}



/* Entry: 10aacf4fc; end: 10aacf507;  */

undefined8 FUN_10aacf4fc(void)

{
  return 0x16800000001;
}



/* Entry: 10aacf508; end: 10aacf5b7;  */

undefined8 * FUN_10aacf508(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  piVar2 = (int *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(int *)(param_1 + 5) = *piVar2 + 1;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x000107c2ab1c(param_1 + 6,piVar2,piVar2);
  }
  func_0x00010a290054(param_1 + 3,param_2 + 0x18);
  return param_1;
}



/* Entry: 10aacf5b8; end: 10aacf63b;  */

ulong * FUN_10aacf5b8(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined **ppuVar3;
  ulong *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  
  uVar5 = *(uint *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_2 + 0x28)) {
    iVar2 = *(int *)(param_2 + 0x28);
  }
  *(int *)(param_1 + 0x28) = iVar2;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | uVar5;
  for (plVar14 = *(long **)(param_2 + 0x40); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    func_0x000107c2ab1c(param_1 + 0x30,plVar14 + 2,plVar14 + 2);
  }
  puVar13 = (ulong *)(param_1 + 0x18);
  uVar8 = *puVar13;
  if (uVar8 == 0) {
    uVar17 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(ulong *)(param_2 + 0x18);
    if (*(long *)(param_2 + 0x20) != 0) {
      plVar14 = (long *)(*(long *)(param_2 + 0x20) + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = *plVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar14 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar17;
    *puVar13 = uVar8;
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 1;
      do {
        lVar10 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    return puVar13;
  }
  lVar10 = *(long *)(param_2 + 0x18);
  *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 2;
  uVar15 = *(ulong *)(uVar8 + 0x50);
  if (uVar15 == 0) {
    uVar15 = *(ulong *)(uVar8 + 8);
    if ((uVar15 & 1) != 0) {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
    }
    func_0x00010932f598();
    *(ulong *)(uVar8 + 0x50) = uVar15;
  }
  *(uint *)(uVar15 + 0x10) = *(uint *)(uVar15 + 0x10) | 4;
  puVar13 = *(ulong **)(uVar15 + 0x28);
  if (puVar13 == (ulong *)0x0) {
    puVar13 = *(ulong **)(uVar15 + 8);
    if (((ulong)puVar13 & 1) != 0) {
      puVar13 = *(ulong **)((ulong)puVar13 & 0xfffffffffffffffe);
    }
    func_0x00010932ed6c();
    *(ulong **)(uVar15 + 0x28) = puVar13;
  }
  ppuVar12 = *(undefined ***)(lVar10 + 0x50);
  ppuVar3 = &PTR_PTR_1132d18f0;
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar3 = ppuVar12;
  }
  ppuVar12 = &PTR_PTR_1132d1630;
  if ((undefined **)ppuVar3[5] != (undefined **)0x0) {
    ppuVar12 = (undefined **)ppuVar3[5];
  }
  puVar9 = puVar13 + 7;
  cVar6 = *(char *)((*puVar9 & 0xfffffffffffffffc) + 0x17);
  if (cVar6 < '\0') {
    if (*(long *)((*puVar9 & 0xfffffffffffffffc) + 8) != 0) goto LAB_10aacf724;
  }
  else if (cVar6 != '\0') goto LAB_10aacf724;
  uVar15 = (ulong)ppuVar12[7] & 0xfffffffffffffffc;
  lVar16 = (long)*(char *)(uVar15 + 0x17);
  if (lVar16 < 0) {
    lVar16 = *(long *)(uVar15 + 8);
  }
  if (lVar16 != 0) {
    *(uint *)(puVar13 + 2) = (uint)puVar13[2] | 2;
    uVar11 = puVar13[1];
    if ((uVar11 & 1) != 0) {
      uVar11 = *(ulong *)(uVar11 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(puVar9,uVar15,uVar11);
    puVar13 = puVar9;
  }
LAB_10aacf724:
  if (0 < *(int *)(uVar8 + 0x38)) {
    lVar16 = 0;
    puVar9 = (ulong *)(lVar10 + 0x30);
    lVar10 = 8;
    do {
      puVar13 = (ulong *)(uVar8 + 0x30);
      if ((*(ulong *)(uVar8 + 0x30) & 1) != 0) {
        puVar13 = (ulong *)(*(ulong *)(uVar8 + 0x30) + lVar10 + -1);
      }
      puVar13 = (ulong *)*puVar13;
      uVar15 = *puVar9;
      puVar4 = puVar9;
      if ((uVar15 & 1) != 0) {
        puVar4 = (ulong *)(uVar15 + lVar10 + -1);
      }
      FUN_10aacf63c(puVar13,*puVar4);
      lVar16 = lVar16 + 1;
      lVar10 = lVar10 + 8;
    } while (lVar16 < *(int *)(uVar8 + 0x38));
  }
  return puVar13;
}



/* Entry: 10aacf63c; end: 10aacf7bf;  */

void FUN_10aacf63c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  uVar8 = *(ulong *)(param_1 + 0x50);
  if (uVar8 == 0) {
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
    }
    func_0x00010932f598();
    *(ulong *)(param_1 + 0x50) = uVar8;
  }
  *(uint *)(uVar8 + 0x10) = *(uint *)(uVar8 + 0x10) | 4;
  uVar6 = *(ulong *)(uVar8 + 0x28);
  if (uVar6 == 0) {
    uVar6 = *(ulong *)(uVar8 + 8);
    if ((uVar6 & 1) != 0) {
      uVar6 = *(ulong *)(uVar6 & 0xfffffffffffffffe);
    }
    func_0x00010932ed6c();
    *(ulong *)(uVar8 + 0x28) = uVar6;
  }
  ppuVar1 = &PTR_PTR_1132d18f0;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x50);
  }
  ppuVar2 = &PTR_PTR_1132d1630;
  if ((undefined **)ppuVar1[5] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[5];
  }
  uVar8 = *(ulong *)(uVar6 + 0x38) & 0xfffffffffffffffc;
  cVar5 = *(char *)(uVar8 + 0x17);
  if (cVar5 < '\0') {
    if (*(long *)(uVar8 + 8) != 0) goto LAB_10aacf724;
  }
  else if (cVar5 != '\0') goto LAB_10aacf724;
  uVar8 = (ulong)ppuVar2[7] & 0xfffffffffffffffc;
  lVar9 = (long)*(char *)(uVar8 + 0x17);
  if (lVar9 < 0) {
    lVar9 = *(long *)(uVar8 + 8);
  }
  if (lVar9 != 0) {
    *(uint *)(uVar6 + 0x10) = *(uint *)(uVar6 + 0x10) | 2;
    uVar7 = *(ulong *)(uVar6 + 8);
    if ((uVar7 & 1) != 0) {
      uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
    }
    func_0x000107c30248((ulong *)(uVar6 + 0x38),uVar8,uVar7);
  }
LAB_10aacf724:
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar9 = 0;
    lVar10 = 8;
    do {
      puVar3 = (undefined8 *)(param_1 + 0x30);
      if ((*(ulong *)(param_1 + 0x30) & 1) != 0) {
        puVar3 = (undefined8 *)(*(ulong *)(param_1 + 0x30) + lVar10 + -1);
      }
      uVar8 = *(ulong *)(param_2 + 0x30);
      puVar4 = (ulong *)(param_2 + 0x30);
      if ((uVar8 & 1) != 0) {
        puVar4 = (ulong *)(uVar8 + lVar10 + -1);
      }
      FUN_10aacf63c(*puVar3,*puVar4);
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 8;
    } while (lVar9 < *(int *)(param_1 + 0x38));
  }
  return;
}



/* Entry: 10aacf7c0; end: 10aacf8d7;  */

undefined8 * FUN_10aacf7c0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 auStack_98 [2];
  char cStack_81;
  long *plStack_78;
  undefined1 auStack_68 [40];
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar9 = (undefined8 *)*param_1; puVar9 != puVar2; puVar9 = puVar9 + 0xb) {
    lVar8 = (long)*(char *)((long)puVar9 + 0x17);
    puVar7 = puVar9;
    if (lVar8 < 0) {
      lVar8 = puVar9[1];
      puVar7 = (undefined8 *)*puVar9;
    }
    if ((param_3 == lVar8) && (uVar6 = param_2, _memcmp(param_2,puVar7,param_3), (int)uVar6 == 0)) {
      return puVar9;
    }
  }
  FUN_10aadbdf0(auStack_98,param_2,param_3);
  FUN_10aacf8d8(param_1,auStack_98);
  func_0x000107c2ab24(auStack_68);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (*param_1 != param_1[1]) {
    return (undefined8 *)(param_1[1] + -0x58);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aacf8c4);
  (*pcVar5)();
}



/* Entry: 10aacf8d8; end: 10aacfa57;  */

long * FUN_10aacf8d8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    uVar9 = param_2[1];
    uVar3 = *param_2;
    puVar8[2] = param_2[2];
    puVar8[1] = uVar9;
    *puVar8 = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[3];
    puVar8[4] = param_2[4];
    puVar8[3] = uVar3;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar8[5] = param_2[5];
    plVar2 = puVar8 + 6;
    func_0x000107c2b12c(plVar2,param_2 + 6);
    puVar8 = puVar8 + 0xb;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar6 = (lVar7 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar6) {
      FUN_10a22fd6c();
      func_0x000107c2ab24(param_1 + 6);
      func_0x00010a052434(param_1 + 3);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      return param_1;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * 0x5d1745d1745d1746;
    if (uVar5 < uVar6 || uVar5 - uVar6 == 0) {
      uVar5 = uVar6;
    }
    if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    plVar2 = param_1;
    plStack_48 = param_1;
    FUN_10a22fd80();
    puVar1 = (undefined8 *)((long)plVar2 + lVar7);
    uVar3 = param_2[2];
    uVar9 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar9;
    puVar1[2] = uVar3;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[3] = uVar3;
    param_2[3] = 0;
    param_2[4] = 0;
    puVar1[5] = param_2[5];
    func_0x000107c2b12c(puVar1 + 6,param_2 + 6);
    puVar8 = puVar1 + 0xb;
    lVar7 = (long)puVar1 + (*param_1 - param_1[1]);
    func_0x00010aadbd10(*param_1,param_1[1],lVar7);
    lStack_68 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar8;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 0xb);
    plVar2 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_10aadbda4(plVar2);
  }
  param_1[1] = (long)puVar8;
  return plVar2;
}



/* Entry: 10aacfa58; end: 10aacfa97;  */

undefined8 * FUN_10aacfa58(undefined8 *param_1)

{
  func_0x000107c2ab24(param_1 + 6);
  func_0x00010a052434(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10aacfa98; end: 10aacfb97;  */

undefined8 * FUN_10aacfa98(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  while( true ) {
    if (puVar1 == puVar2) {
      return (undefined8 *)0x0;
    }
    lVar5 = (long)*(char *)((long)puVar1 + 0x17);
    puVar4 = puVar1;
    if (lVar5 < 0) {
      lVar5 = puVar1[1];
      puVar4 = (undefined8 *)*puVar1;
    }
    if ((param_3 == lVar5) && (uVar3 = param_2, _memcmp(param_2,puVar4,param_3), (int)uVar3 == 0))
    break;
    puVar1 = puVar1 + 0xb;
  }
  return puVar1;
}



/* Entry: 10aacfb98; end: 10aacfbd3;  */

void FUN_10aacfb98(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_58;
  undefined1 auStack_48 [40];
  
  uVar2 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  FUN_10aacf7c0(param_1,puVar5,uVar2);
  FUN_10aacf508(auStack_78,param_2);
  FUN_10aacf5b8(param_1,auStack_78);
  func_0x000107c2ab24(auStack_48);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10aacfbd4; end: 10aacfc73;  */

void FUN_10aacfbd4(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_58;
  undefined1 auStack_48 [40];
  
  FUN_10aacf508(auStack_78);
  FUN_10aacf5b8(param_1,auStack_78);
  func_0x000107c2ab24(auStack_48);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10aacfc74; end: 10aacfcaf;  */

ulong * FUN_10aacfc74(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined **ppuVar3;
  ulong *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined **ppuVar13;
  ulong *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  
  uVar9 = param_2[1];
  puVar8 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar8 = param_2;
  }
  FUN_10aacf7c0(param_1,puVar8,uVar9);
  uVar5 = *(uint *)((long)param_2 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) <= *(int *)(param_2 + 5)) {
    iVar2 = *(int *)(param_2 + 5);
  }
  *(int *)(param_1 + 0x28) = iVar2;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | uVar5;
  for (plVar15 = (long *)param_2[8]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
    func_0x000107c2ab1c(param_1 + 0x30,plVar15 + 2,plVar15 + 2);
  }
  puVar14 = (ulong *)(param_1 + 0x18);
  uVar9 = *puVar14;
  if (uVar9 == 0) {
    uVar18 = param_2[4];
    uVar9 = param_2[3];
    if (param_2[4] != 0) {
      plVar15 = (long *)(param_2[4] + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *plVar15 = *plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    plVar15 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar18;
    *puVar14 = uVar9;
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
      do {
        lVar11 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar11 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
    return puVar14;
  }
  lVar11 = param_2[3];
  *(uint *)(uVar9 + 0x10) = *(uint *)(uVar9 + 0x10) | 2;
  uVar16 = *(ulong *)(uVar9 + 0x50);
  if (uVar16 == 0) {
    uVar16 = *(ulong *)(uVar9 + 8);
    if ((uVar16 & 1) != 0) {
      uVar16 = *(ulong *)(uVar16 & 0xfffffffffffffffe);
    }
    func_0x00010932f598();
    *(ulong *)(uVar9 + 0x50) = uVar16;
  }
  *(uint *)(uVar16 + 0x10) = *(uint *)(uVar16 + 0x10) | 4;
  puVar14 = *(ulong **)(uVar16 + 0x28);
  if (puVar14 == (ulong *)0x0) {
    puVar14 = *(ulong **)(uVar16 + 8);
    if (((ulong)puVar14 & 1) != 0) {
      puVar14 = *(ulong **)((ulong)puVar14 & 0xfffffffffffffffe);
    }
    func_0x00010932ed6c();
    *(ulong **)(uVar16 + 0x28) = puVar14;
  }
  ppuVar13 = *(undefined ***)(lVar11 + 0x50);
  ppuVar3 = &PTR_PTR_1132d18f0;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar3 = ppuVar13;
  }
  ppuVar13 = &PTR_PTR_1132d1630;
  if ((undefined **)ppuVar3[5] != (undefined **)0x0) {
    ppuVar13 = (undefined **)ppuVar3[5];
  }
  puVar10 = puVar14 + 7;
  cVar6 = *(char *)((*puVar10 & 0xfffffffffffffffc) + 0x17);
  if (cVar6 < '\0') {
    if (*(long *)((*puVar10 & 0xfffffffffffffffc) + 8) != 0) goto LAB_10aacf724;
  }
  else if (cVar6 != '\0') goto LAB_10aacf724;
  uVar16 = (ulong)ppuVar13[7] & 0xfffffffffffffffc;
  lVar17 = (long)*(char *)(uVar16 + 0x17);
  if (lVar17 < 0) {
    lVar17 = *(long *)(uVar16 + 8);
  }
  if (lVar17 != 0) {
    *(uint *)(puVar14 + 2) = (uint)puVar14[2] | 2;
    uVar12 = puVar14[1];
    if ((uVar12 & 1) != 0) {
      uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(puVar10,uVar16,uVar12);
    puVar14 = puVar10;
  }
LAB_10aacf724:
  if (0 < *(int *)(uVar9 + 0x38)) {
    lVar17 = 0;
    puVar10 = (ulong *)(lVar11 + 0x30);
    lVar11 = 8;
    do {
      puVar14 = (ulong *)(uVar9 + 0x30);
      if ((*(ulong *)(uVar9 + 0x30) & 1) != 0) {
        puVar14 = (ulong *)(*(ulong *)(uVar9 + 0x30) + lVar11 + -1);
      }
      puVar14 = (ulong *)*puVar14;
      uVar16 = *puVar10;
      puVar4 = puVar10;
      if ((uVar16 & 1) != 0) {
        puVar4 = (ulong *)(uVar16 + lVar11 + -1);
      }
      FUN_10aacf63c(puVar14,*puVar4);
      lVar17 = lVar17 + 1;
      lVar11 = lVar11 + 8;
    } while (lVar17 < *(int *)(uVar9 + 0x38));
  }
  return puVar14;
}



/* Entry: 10aacfcb0; end: 10aacfdd7;  */

long * FUN_10aacfcb0(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    param_1 = (long *)*param_1;
    plVar6 = param_1;
    for (; param_1 != plVar2; param_1 = param_1 + 5) {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar1 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar1 = (ulong)bVar3;
      }
      if (param_3 == uVar1) {
        plVar5 = (long *)*param_1;
        if (-1 < (char)bVar3) {
          plVar5 = param_1;
        }
        uVar4 = param_2;
        _memcmp(param_2,plVar5,param_3);
        plVar6 = param_1;
        if ((int)uVar4 == 0) break;
      }
      plVar6 = plVar2;
    }
    plVar5 = (long *)0x0;
    if (plVar6 != plVar2) {
      plVar5 = plVar6;
    }
  }
  return plVar5;
}



/* Entry: 10aacfdd8; end: 10aacfe37;  */

ulong FUN_10aacfdd8(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    puVar3 = (ulong *)(param_1 + 0x18);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar4 = (long)*(int *)(param_1 + 0x20) << 3;
      do {
        uVar2 = *puVar3;
        uVar1 = *(uint *)(uVar2 + 0x10);
        if ((uVar1 >> 0x13 & 1) == 0) {
          if ((uVar1 >> 0x15 & 1) != 0) {
LAB_10aacfe18:
            if (*(int *)(uVar2 + 0x144) == param_2) {
              return uVar2;
            }
          }
        }
        else if (((uVar1 >> 0x15 & 1) != 0) && ((*(byte *)(uVar2 + 0x13c) & 1) != 0))
        goto LAB_10aacfe18;
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return 0;
}



/* Entry: 10aacfe38; end: 10aacff4f;  */

undefined8 * FUN_10aacfe38(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 auStack_98 [2];
  char cStack_81;
  long *plStack_78;
  undefined1 auStack_68 [40];
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar9 = (undefined8 *)*param_1; puVar9 != puVar2; puVar9 = puVar9 + 0xb) {
    lVar8 = (long)*(char *)((long)puVar9 + 0x17);
    puVar7 = puVar9;
    if (lVar8 < 0) {
      lVar8 = puVar9[1];
      puVar7 = (undefined8 *)*puVar9;
    }
    if ((param_3 == lVar8) && (uVar6 = param_2, _memcmp(param_2,puVar7,param_3), (int)uVar6 == 0)) {
      return puVar9;
    }
  }
  FUN_10aadbdf0(auStack_98,param_2,param_3);
  FUN_10aacf8d8(param_1,auStack_98);
  func_0x000107c2ab24(auStack_68);
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
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
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (cStack_81 < '\0') {
    __ZdlPv(auStack_98[0]);
  }
  if (*param_1 != param_1[1]) {
    return (undefined8 *)(param_1[1] + -0x58);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10aacff3c);
  (*pcVar5)();
}



/* Entry: 10aacff50; end: 10aad004f;  */

undefined8 * FUN_10aacff50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  while( true ) {
    if (puVar1 == puVar2) {
      return (undefined8 *)0x0;
    }
    lVar5 = (long)*(char *)((long)puVar1 + 0x17);
    puVar4 = puVar1;
    if (lVar5 < 0) {
      lVar5 = puVar1[1];
      puVar4 = (undefined8 *)*puVar1;
    }
    if ((param_3 == lVar5) && (uVar3 = param_2, _memcmp(param_2,puVar4,param_3), (int)uVar3 == 0))
    break;
    puVar1 = puVar1 + 0xb;
  }
  return puVar1;
}



/* Entry: 10aad0050; end: 10aad00c7;  */

void FUN_10aad0050(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_58;
  undefined1 auStack_48 [40];
  
  uVar2 = param_2[1];
  puVar5 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar5 = param_2;
  }
  FUN_10aacfe38(param_1,puVar5,uVar2);
  FUN_10aacf508(auStack_78,param_2);
  FUN_10aacf5b8(param_1,auStack_78);
  func_0x000107c2ab24(auStack_48);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10aad00c8; end: 10aad06df;  */

void FUN_10aad00c8(ulong param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined4 *puStack_218;
  undefined4 *puStack_210;
  undefined4 *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined4 uStack_1f0;
  long lStack_1e8;
  undefined4 uStack_1e0;
  long lStack_1d8;
  ushort uStack_1d0;
  undefined1 auStack_1c8 [40];
  undefined1 auStack_1a0 [16];
  long *plStack_190;
  long lStack_188;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  undefined4 *puStack_150;
  long lStack_148;
  long lStack_140;
  undefined4 uStack_138;
  long lStack_130;
  undefined4 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  code *pcStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined4 uStack_98;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_178 = param_2;
  FUN_10aad06e0(auStack_1a0,param_4,0);
  if (lStack_188 != 0) {
    FUN_10aae5918(auStack_1c8,param_1);
    if (plStack_190 == (long *)0x0) {
      puStack_150 = (undefined4 *)0x0;
      puVar12 = (undefined4 *)0x0;
      puVar10 = (undefined4 *)0x0;
      lStack_148 = 0;
      puStack_158 = (undefined4 *)0x0;
      puStack_b0 = (undefined4 *)0x0;
    }
    else {
      puStack_218 = (undefined4 *)0x0;
      puVar12 = (undefined4 *)0x0;
      puVar10 = (undefined4 *)0x0;
      plVar11 = plStack_190;
      do {
        plVar13 = plVar11 + 2;
        uStack_c0 = (undefined4)*plVar13;
        uStack_bc = 0xffffffff;
        uStack_b8 = 0x168;
        puStack_b0 = (undefined4 *)CONCAT35(puStack_b0._5_3_,1);
        uVar5 = (ulong)puStack_a8 >> 0x28;
        uVar1 = (uint)puStack_a8;
        puStack_a8._0_5_ = (uint5)(uVar1 & 0xffffff00);
        puStack_a8 = (undefined4 *)CONCAT35((int3)uVar5,(uint5)puStack_a8);
        plVar3 = &lStack_178;
        func_0x0001098ac018(plVar3,&UNK_10e4a7ac1,0x23,&uStack_c0,0,1);
        FUN_10aae5984(auStack_1c8,(int)*plVar13,plVar13);
        FUN_10aae5df0(&lStack_1d8,auStack_1c8,(int)*plVar13);
        func_0x00010aae5f94(&puStack_210,plVar11 + 3);
        lStack_1e8 = lStack_1d8 + 0x18;
        uStack_1e0 = (undefined4)*plVar13;
        lStack_170 = 0;
        lStack_168 = 0;
        uStack_160 = 0;
        uStack_c0 = SUB84(plVar3,0);
        FUN_10a26ebc0(&lStack_170,0,&uStack_c0,&uStack_bc,1);
        puStack_150 = puStack_208;
        puStack_158 = puStack_210;
        puStack_210 = (undefined4 *)0x0;
        puStack_208 = (undefined4 *)0x0;
        lStack_148 = lStack_200;
        lStack_140 = lStack_1f8;
        uStack_138 = uStack_1f0;
        if (lStack_1f8 != 0) {
          puVar8 = *(undefined4 **)(lStack_200 + 8);
          if (((ulong)puStack_150 & (long)puStack_150 - 1U) == 0) {
            puVar8 = (undefined4 *)((ulong)puVar8 & (long)puStack_150 - 1U);
          }
          else if (puStack_150 <= puVar8) {
            uVar5 = 0;
            if (puStack_150 != (undefined4 *)0x0) {
              uVar5 = (ulong)puVar8 / (ulong)puStack_150;
            }
            puVar8 = (undefined4 *)((long)puVar8 - uVar5 * (long)puStack_150);
          }
          *(long **)(puStack_158 + (long)puVar8 * 2) = &lStack_148;
          lStack_200 = 0;
          lStack_1f8 = 0;
        }
        lStack_130 = lStack_1e8;
        uStack_128 = uStack_1e0;
        pcStack_100 = FUN_10aadbf1c;
        ppuStack_f8 = &PTR_FUN_110c43de0;
        puVar8 = (undefined4 *)0x38;
        __Znwm();
        func_0x00010aae5f94();
        *(long *)(puVar8 + 10) = lStack_130;
        puVar8[0xc] = uStack_128;
        uStack_c0 = 0xaadbf1c;
        uStack_bc = 1;
        uStack_b8 = 0x10c43de0;
        uStack_b4 = 1;
        uStack_f0 = 0;
        lStack_118 = lStack_168;
        lStack_120 = lStack_170;
        uStack_110 = uStack_160;
        lStack_170 = 0;
        lStack_168 = 0;
        uStack_160 = 0;
        lVar4 = param_2 + 0x18;
        puStack_b0 = puVar8;
        func_0x0001098aeecc(lVar4,&uStack_c0,&UNK_110c43dc0,&lStack_120);
        if (lStack_120 != 0) {
          lStack_118 = lStack_120;
          __ZdlPv();
        }
        (**(code **)CONCAT44(uStack_b4,uStack_b8))(&uStack_b8);
        (*(code *)*ppuStack_f8)(&ppuStack_f8);
        FUN_10a22c96c(&puStack_158);
        if (lStack_170 != 0) {
          lStack_168 = lStack_170;
          __ZdlPv();
        }
        if (puVar12 < puVar10) {
          *puVar12 = (int)lVar4;
          puVar8 = puStack_218;
        }
        else {
          uVar5 = ((long)puVar12 - (long)puStack_218 >> 2) + 1;
          if (uVar5 >> 0x3e != 0) {
            FUN_10aadbea8();
            goto LAB_10aad06dc;
          }
          uVar9 = (long)puVar10 - (long)puStack_218 >> 1;
          if (uVar9 <= uVar5) {
            uVar9 = uVar5;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar10 - (long)puStack_218)) {
            uVar9 = 0x3fffffffffffffff;
          }
          if (uVar9 >> 0x3e != 0) {
            func_0x000109ffded8();
            goto LAB_10aad06dc;
          }
          puVar8 = (undefined4 *)(uVar9 << 2);
          __Znwm();
          puVar12 = (undefined4 *)((long)puVar8 + ((long)puVar12 - (long)puStack_218));
          puVar10 = puVar8 + uVar9;
          *puVar12 = (int)lVar4;
          _memcpy();
          if (puStack_218 != (undefined4 *)0x0) {
            __ZdlPv(puStack_218);
          }
        }
        puStack_218 = puVar8;
        puVar12 = puVar12 + 1;
        FUN_10a22c96c(&puStack_210);
        lVar4 = lStack_1d8;
        if ((lStack_1d8 != 0) &&
           (uVar5 = param_1, FUN_10aae6000(param_1,lStack_1d8), (uVar5 & 1) == 0)) {
          if ((uStack_1d0 >> 8 & 1) == 0) goto LAB_10aad06dc;
          FUN_10aae5db8(1,lVar4);
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      puStack_210 = (undefined4 *)0x0;
      puStack_208 = (undefined4 *)0x0;
      lStack_200 = 0;
      if ((long)puVar12 - (long)puStack_218 == 0) {
        puStack_150 = (undefined4 *)0x0;
        lStack_148 = 0;
        puStack_158 = (undefined4 *)0x0;
        puStack_b0 = puStack_218;
      }
      else {
        FUN_10a26d390(&puStack_210,(long)puVar12 - (long)puStack_218 >> 2);
        puVar8 = puStack_218;
        do {
          puVar7 = puVar8 + 1;
          puStack_150 = puStack_208 + 1;
          *puStack_208 = *puVar8;
          puStack_208 = puStack_150;
          puVar8 = puVar7;
          lStack_148 = lStack_200;
          puStack_158 = puStack_210;
          puStack_b0 = puStack_218;
        } while (puVar7 != puVar12);
      }
    }
    puStack_210 = (undefined4 *)0x0;
    puStack_208 = (undefined4 *)0x0;
    lStack_200 = 0;
    pcStack_100 = FUN_10aadc0c8;
    ppuStack_f8 = &PTR_FUN_110c43df8;
    uStack_d8 = 0x20000000;
    uStack_c0 = 0xaadc0c8;
    uStack_bc = 1;
    uStack_b8 = 0x10c43df8;
    uStack_b4 = 1;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
    uStack_98 = 0x20000000;
    param_2 = param_2 + 0x18;
    puStack_a8 = puVar12;
    puStack_a0 = puVar10;
    func_0x0001098aeecc(param_2,&uStack_c0,&UNK_110bef3c0,&puStack_158);
    if (puStack_158 != (undefined4 *)0x0) {
      puStack_150 = puStack_158;
      __ZdlPv();
    }
    (**(code **)CONCAT44(uStack_b4,uStack_b8))(&uStack_b8);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    *param_3 = (int)param_2;
    if (puStack_210 != (undefined4 *)0x0) {
      puStack_208 = puStack_210;
      __ZdlPv();
    }
    FUN_10a522e28(auStack_1c8);
  }
  puVar6 = auStack_1a0;
  func_0x00010a22c9fc(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_210 != (undefined4 *)0x0) {
    puStack_208 = puStack_210;
    __ZdlPv();
  }
  if (puStack_218 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  FUN_10a522e28(auStack_1c8);
  func_0x00010a22c9fc(auStack_1a0);
  __Unwind_Resume(puVar6);
LAB_10aad06dc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10aad06e0);
  (*pcVar2)();
}



/* Entry: 10aad06e0; end: 10aad092b;  */

void FUN_10aad06e0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uStack_40;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  plVar11 = param_1;
  uStack_40 = param_3;
  FUN_10a22bd48();
  uVar4 = plVar11[1];
  if (uVar4 != 0) {
    uVar6 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    if ((uVar4 & uVar6) == 0) {
      uVar7 = (ulong)(uVar3 - 1) & 0x7fffffff;
    }
    else {
      uVar7 = 0x7fffffff;
      if (uVar4 >> 0x1f == 0) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = 0x7fffffff / uVar3;
        }
        uVar7 = (ulong)(uVar1 * uVar3 ^ 0x7fffffff);
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + uVar7 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar11 = (long *)*puVar8; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar9 = plVar11[1];
        if (uVar9 == 0x7fffffff) {
          if ((int)plVar11[2] == 0x7fffffff) {
            plVar2 = param_1;
            puStack_38 = (undefined1 *)&uStack_40;
            FUN_10aae6e98(param_1,&uStack_40,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
            for (plVar12 = (long *)plVar11[5]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
              FUN_10a22c4c8(plVar2 + 3,plVar12 + 2,plVar12 + 2);
            }
            uVar6 = param_1[1];
            lVar5 = *plVar11;
            uVar4 = plVar11[1];
            uVar7 = uVar6 - 1;
            if ((uVar6 & uVar7) == 0) {
              uVar4 = uVar7 & uVar4;
            }
            else if (uVar6 <= uVar4) {
              uVar9 = 0;
              if (uVar6 != 0) {
                uVar9 = uVar4 / uVar6;
              }
              uVar4 = uVar4 - uVar9 * uVar6;
            }
            plVar12 = *(long **)(*param_1 + uVar4 * 8);
            do {
              plVar2 = plVar12;
              plVar12 = (long *)*plVar2;
            } while ((long *)*plVar2 != plVar11);
            if (plVar2 == param_1 + 2) {
LAB_10aad0864:
              if (lVar5 == 0) {
LAB_10aad0898:
                *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
                lVar5 = *plVar11;
                goto LAB_10aad08a0;
              }
              uVar9 = *(ulong *)(lVar5 + 8);
              if ((uVar6 & uVar7) == 0) {
                uVar10 = uVar9 & uVar7;
              }
              else {
                uVar10 = uVar9;
                if (uVar6 <= uVar9) {
                  uVar10 = 0;
                  if (uVar6 != 0) {
                    uVar10 = uVar9 / uVar6;
                  }
                  uVar10 = uVar9 - uVar10 * uVar6;
                }
              }
              if (uVar10 != uVar4) goto LAB_10aad0898;
            }
            else {
              uVar9 = plVar2[1];
              if ((uVar6 & uVar7) == 0) {
                uVar9 = uVar9 & uVar7;
              }
              else if (uVar6 <= uVar9) {
                uVar10 = 0;
                if (uVar6 != 0) {
                  uVar10 = uVar9 / uVar6;
                }
                uVar9 = uVar9 - uVar10 * uVar6;
              }
              if (uVar9 != uVar4) goto LAB_10aad0864;
LAB_10aad08a0:
              if (lVar5 == 0) goto LAB_10aad08dc;
              uVar9 = *(ulong *)(lVar5 + 8);
            }
            if ((uVar6 & uVar7) == 0) {
              uVar9 = uVar9 & uVar7;
            }
            else if (uVar6 <= uVar9) {
              uVar7 = 0;
              if (uVar6 != 0) {
                uVar7 = uVar9 / uVar6;
              }
              uVar9 = uVar9 - uVar7 * uVar6;
            }
            if (uVar9 != uVar4) {
              *(long **)(*param_1 + uVar9 * 8) = plVar2;
              lVar5 = *plVar11;
            }
LAB_10aad08dc:
            *plVar2 = lVar5;
            *plVar11 = 0;
            param_1[3] = param_1[3] + -1;
            FUN_10a22c96c(plVar11 + 3);
            __ZdlPv(plVar11);
            return;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar10 = 0;
            if (uVar4 != 0) {
              uVar10 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar10 * uVar4;
          }
          if (uVar9 != uVar7) {
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10aad092c; end: 10aad09b7;  */

ulong FUN_10aad092c(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar6;
  undefined1 auVar5 [16];
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar3 = *param_2;
  auVar8 = NEON_ext(auVar3,auVar3,8,1);
  auVar10._0_8_ = (auVar8._0_8_ & 0xffffffff) + 0x9e3779b9;
  auVar10._8_8_ = (ulong)(uint)auVar3._0_4_ + 0x9e3779b9;
  auVar2._8_4_ = 0x9e3779b9;
  auVar2._0_8_ = 0x9e3779b9;
  auVar2._12_4_ = 0;
  auVar1._8_8_ = (long)(int)-(uint)(auVar3._0_4_ == 0.0);
  auVar1._0_8_ = (long)(int)-(uint)(auVar8._0_4_ == 0.0);
  auVar10 = auVar10 ^ (auVar10 ^ auVar2) & auVar1;
  auVar9._0_8_ = (long)(int)-(uint)(auVar8._4_4_ == 0.0);
  auVar9._8_8_ = (long)(int)-(uint)(auVar3._4_4_ == 0.0);
  auVar8._0_8_ = (ulong)(uint)auVar8._4_4_ + 0x9e3779b9;
  auVar8._8_8_ = (ulong)(uint)auVar3._4_4_ + 0x9e3779b9;
  auVar3._8_4_ = 0x9e3779b9;
  auVar3._0_8_ = 0x9e3779b9;
  auVar3._12_4_ = 0;
  auVar8 = auVar8 ^ (auVar8 ^ auVar3) & auVar9;
  lVar4 = auVar8._0_8_ + auVar10._0_8_ * 0x40 + (auVar10._0_8_ >> 2);
  lVar6 = auVar8._8_8_ + auVar10._8_8_ * 0x40 + (auVar10._8_8_ >> 2);
  auVar5._0_8_ = CONCAT26(0,CONCAT15((char)((ulong)lVar4 >> 0x28),
                                     CONCAT14((byte)((ulong)lVar4 >> 0x20) ^ auVar10[4],
                                              CONCAT13((byte)((ulong)lVar4 >> 0x18) ^ auVar10[3],
                                                       CONCAT12((byte)((ulong)lVar4 >> 0x10) ^
                                                                auVar10[2],
                                                                CONCAT11((byte)((ulong)lVar4 >> 8) ^
                                                                         auVar10[1],
                                                                         (byte)lVar4 ^ auVar10[0])))
                                             )));
  auVar5[8] = (byte)lVar6 ^ auVar10[8];
  auVar5[9] = (byte)((ulong)lVar6 >> 8) ^ auVar10[9];
  auVar5[10] = (byte)((ulong)lVar6 >> 0x10) ^ auVar10[10];
  auVar5[0xb] = (byte)((ulong)lVar6 >> 0x18) ^ auVar10[0xb];
  auVar5[0xc] = (byte)((ulong)lVar6 >> 0x20) ^ auVar10[0xc];
  auVar5[0xd] = (byte)((ulong)lVar6 >> 0x28) ^ auVar10[0xd];
  auVar5[0xe] = (byte)((ulong)lVar6 >> 0x30) ^ auVar10[0xe];
  auVar5[0xf] = (byte)((ulong)lVar6 >> 0x38) ^ auVar10[0xf];
  uVar7 = auVar5._8_8_ + 0x9e3779b9;
  uVar7 = auVar5._0_8_ + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
  lVar4 = 0x9e3779b9;
  if (*(float *)param_2[1] != 0.0) {
    lVar4 = (ulong)(uint)*(float *)param_2[1] + 0x9e3779b9;
  }
  return lVar4 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
}



/* Entry: 10aad09b8; end: 10aad0b9b;  */

ulong FUN_10aad09b8(undefined1 *param_1,int *param_2)

{
  ulong uVar1;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uVar1 = (long)*param_2 + 0x9e3779b9;
  uVar1 = uVar1 * 0x40 + (long)(int)*(long *)(param_2 + 1) + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  uVar1 = (*(long *)(param_2 + 1) >> 0x20) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
  if ((char)param_2[9] == '\x01') {
    param_1 = &uStack_32;
    FUN_10a8cce74(param_1,param_2 + 3);
    uVar1 = (ulong)(param_1 + uVar1 * 0x40 + 0x9e3779b9 + (uVar1 >> 2)) ^ uVar1;
  }
  if ((char)param_2[0x11] == '\x01') {
    param_1 = &uStack_31;
    FUN_10a8ca36c(param_1,param_2 + 10);
    uVar1 = (ulong)(param_1 + uVar1 * 0x40 + 0x9e3779b9 + (uVar1 >> 2)) ^ uVar1;
  }
  if ((char)param_2[0x17] == '\x01') {
    FUN_10aad092c();
    uVar1 = (ulong)(param_1 + uVar1 * 0x40 + 0x9e3779b9 + (uVar1 >> 2)) ^ uVar1;
  }
  return uVar1;
}



/* Entry: 10aad0b9c; end: 10aad2c1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10aad0b9c(uint *******param_1,long *param_2,uint ******param_3,ulong param_4,
                  uint *******param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  uint *******pppppppuVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  uint *******pppppppuVar21;
  uint ****ppppuVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined4 uVar25;
  uint *****pppppuVar26;
  uint *******pppppppuVar27;
  uint *******pppppppuVar28;
  uint ******ppppppuVar29;
  byte *pbVar30;
  uint *******pppppppuVar31;
  uint *******pppppppuVar32;
  undefined1 uVar33;
  uint *****pppppuVar34;
  uint ******ppppppuVar35;
  ulong uVar36;
  uint *****pppppuVar37;
  int iVar38;
  uint *******pppppppuVar39;
  int iVar40;
  uint ******ppppppuVar41;
  ulong uVar42;
  uint ******ppppppuVar43;
  uint ******ppppppuVar44;
  ulong uVar45;
  uint *******pppppppuVar46;
  undefined8 *puVar47;
  uint ******ppppppuVar48;
  undefined8 uVar49;
  uint ****ppppuVar50;
  uint *******unaff_x22;
  uint *******pppppppuVar51;
  uint *******pppppppuVar52;
  int iVar53;
  uint *******pppppppuVar54;
  uint *******pppppppuVar55;
  long *plVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  uint ******ppppppuVar61;
  float fVar62;
  float fVar63;
  uint *******pppppppuStack_350;
  uint *******pppppppuStack_348;
  uint *******pppppppuStack_340;
  uint *******pppppppuStack_338;
  uint *******pppppppuStack_330;
  uint *******pppppppuStack_328;
  uint *******pppppppuStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  uint *******pppppppuStack_300;
  uint *******pppppppuStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 auStack_2e0 [2];
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined4 auStack_2c8 [2];
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  uint *******pppppppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined1 auStack_260 [16];
  uint *******pppppppuStack_250;
  uint *******pppppppuStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_208;
  long lStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [16];
  long lStack_1e0;
  uint *******pppppppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1bc;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 *puStack_1a8;
  long *plStack_1a0;
  uint *******pppppppuStack_198;
  uint *******pppppppuStack_190;
  undefined8 uStack_188;
  uint *******pppppppuStack_180;
  uint *******pppppppuStack_178;
  code *pcStack_170;
  undefined8 uStack_140;
  undefined8 uStack_138;
  uint *******pppppppuStack_130;
  undefined8 uStack_128;
  uint *******pppppppuStack_120;
  undefined8 uStack_118;
  uint *******pppppppuStack_110;
  long lStack_b0;
  
  uVar25 = (undefined4)param_4;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == (uint ******)0x0) {
LAB_10aad122c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uVar42 = param_4;
    plVar18 = param_2;
    pppppppuStack_338 = param_1;
    FUN_10a0ec6f0();
    pppppuVar26 = param_3[2];
    pppppuVar37 = pppppuVar26;
    pppppuVar34 = (uint *****)((ulong)pppppuVar26 >> 0x20);
    if ((uVar42 & 1) != 0) {
      pppppuVar37 = (uint *****)((ulong)pppppuVar26 >> 0x20);
      pppppuVar34 = pppppuVar26;
    }
    pppppppuStack_350 = (uint *******)0x0;
    pppppppuStack_348 = (uint *******)0x0;
    pppppppuStack_340 = (uint *******)0x0;
    pppppppuVar17 = (uint *******)(param_2[3] << 1);
    if (pppppppuVar17 == (uint *******)0x0) {
LAB_10aad0c64:
      plVar56 = (long *)param_2[2];
      pppppppuStack_350 = pppppppuStack_348;
      if (plVar56 == (long *)0x0) {
        lVar24 = 0;
        pppppppuStack_318 = (uint *******)0x0;
        puStack_310 = (undefined8 *)0x0;
        bVar15 = true;
        puStack_308 = (undefined8 *)0x0;
        pppppppuVar17 = pppppppuStack_348;
        pppppppuVar46 = pppppppuStack_348;
      }
      else {
        pppppppuVar54 = param_1 + 0x11;
        do {
          if ((*(byte *)((long)plVar56 + 0x6c) & 1) == 0) {
            if (*(char *)((long)plVar56 + 0x34) == '\x01') {
              func_0x00010aae61b4(&uStack_140,param_1 + 10,plVar56 + 2);
              pppppppuVar17 = (uint *******)uStack_140;
              if ((uint *******)uStack_140 == (uint *******)0x0) {
                pppppppuVar46 = param_1 + 0xf;
                FUN_10aae6304(pppppppuVar46,plVar56 + 2);
                pppppppuVar28 = (uint *******)0x0;
              }
              else {
                pppppppuVar46 = param_1 + 0xf;
                pppppppuVar27 = (uint *******)uStack_140;
                FUN_10aae63dc();
                pppppppuVar28 = pppppppuVar46;
                if (((ulong)pppppppuVar27 & 1) == 0) {
                  if (((ushort)uStack_138 >> 8 & 1) == 0) goto LAB_10aad2b50;
                  __ZdlPv();
                  pppppppuVar28 = pppppppuVar17;
                }
              }
              if (pppppppuVar46 == (uint *******)0x0) {
                if ((*(byte *)((long)plVar56 + 0x34) & 1) == 0) goto LAB_10aad2b50;
                uVar42 = (ulong)*(uint *)((long)plVar56 + 0x14);
                uVar2 = *(uint *)(plVar56 + 3);
                uVar36 = (ulong)uVar2;
                if ((*(byte *)((long)plVar56 + 0x2c) | 2) == 3) {
                  uVar36 = uVar42;
                  uVar42 = (ulong)uVar2;
                }
                if ((*(byte *)((long)plVar56 + 0x2f) & 1) == 0) {
                  iVar38 = (int)pppppuVar37;
                  iVar53 = (int)uVar36 * iVar38;
                  iVar40 = (int)pppppuVar34;
                  iVar7 = (int)uVar42 * iVar40;
                  if (iVar53 != iVar7) {
                    if (iVar7 < iVar53) {
                      uVar3 = 0;
                      if (iVar38 != 0) {
                        uVar3 = iVar7 / iVar38;
                      }
                      if (*(char *)((long)plVar56 + 0x2d) == '\x01') {
                        uVar3 = ((uVar3 ^ uVar2) & 1) + uVar3;
                      }
                      uVar36 = (ulong)uVar3;
                    }
                    else {
                      uVar2 = 0;
                      if (iVar40 != 0) {
                        uVar2 = iVar53 / iVar40;
                      }
                      uVar42 = (ulong)uVar2;
                      if (*(char *)((long)plVar56 + 0x2e) == '\x01') {
                        uVar42 = (ulong)(((uVar2 ^ *(uint *)((long)plVar56 + 0x14)) & 1) + uVar2);
                      }
                    }
                  }
                }
                uVar2 = *(uint *)(plVar56 + 2);
                func_0x00010aad09b8();
                pppppppuVar17 = (uint *******)param_1[0x10];
                if (pppppppuVar17 != (uint *******)0x0) {
                  uVar45 = (long)pppppppuVar17 - 1;
                  if (((ulong)pppppppuVar17 & uVar45) == 0) {
                    unaff_x22 = (uint *******)(uVar45 & (ulong)pppppppuVar28);
                  }
                  else {
                    unaff_x22 = pppppppuVar28;
                    if (pppppppuVar17 <= pppppppuVar28) {
                      uVar20 = 0;
                      if (pppppppuVar17 != (uint *******)0x0) {
                        uVar20 = (ulong)pppppppuVar28 / (ulong)pppppppuVar17;
                      }
                      unaff_x22 = (uint *******)((long)pppppppuVar28 - uVar20 * (long)pppppppuVar17)
                      ;
                    }
                  }
                  if (param_1[0xf][(long)unaff_x22] != (uint *****)0x0) {
                    for (pppppppuVar46 = (uint *******)*param_1[0xf][(long)unaff_x22];
                        pppppppuVar46 != (uint *******)0x0;
                        pppppppuVar46 = (uint *******)*pppppppuVar46) {
                      pppppppuVar27 = (uint *******)pppppppuVar46[1];
                      if (pppppppuVar27 == pppppppuVar28) {
                        pppppppuVar27 = pppppppuVar46 + 2;
                        FUN_10a22c6f0(pppppppuVar27,plVar56 + 2);
                        if (((ulong)pppppppuVar27 & 1) != 0) goto LAB_10aad0f78;
                      }
                      else {
                        if (((ulong)pppppppuVar17 & uVar45) == 0) {
                          pppppppuVar27 = (uint *******)((ulong)pppppppuVar27 & uVar45);
                        }
                        else if (pppppppuVar17 <= pppppppuVar27) {
                          uVar20 = 0;
                          if (pppppppuVar17 != (uint *******)0x0) {
                            uVar20 = (ulong)pppppppuVar27 / (ulong)pppppppuVar17;
                          }
                          pppppppuVar27 =
                               (uint *******)((long)pppppppuVar27 - uVar20 * (long)pppppppuVar17);
                        }
                        if (pppppppuVar27 != unaff_x22) break;
                      }
                    }
                  }
                }
                pppppppuVar46 = (uint *******)0xd0;
                __Znwm();
                *pppppppuVar46 = (uint ******)0x0;
                pppppppuVar46[1] = (uint ******)pppppppuVar28;
                ppppppuVar35 = (uint ******)plVar56[2];
                ppppppuVar29 = (uint ******)plVar56[5];
                ppppppuVar48 = (uint ******)plVar56[4];
                pppppppuVar46[3] = (uint ******)plVar56[3];
                pppppppuVar46[2] = ppppppuVar35;
                pppppppuVar46[5] = ppppppuVar29;
                pppppppuVar46[4] = ppppppuVar48;
                ppppppuVar35 = (uint ******)plVar56[6];
                ppppppuVar41 = (uint ******)plVar56[7];
                ppppppuVar29 = (uint ******)plVar56[9];
                ppppppuVar48 = (uint ******)plVar56[8];
                ppppppuVar43 = (uint ******)plVar56[10];
                ppppppuVar61 = (uint ******)plVar56[0xd];
                ppppppuVar44 = (uint ******)plVar56[0xc];
                pppppppuVar46[0xb] = (uint ******)plVar56[0xb];
                pppppppuVar46[10] = ppppppuVar43;
                pppppppuVar46[0xd] = ppppppuVar61;
                pppppppuVar46[0xc] = ppppppuVar44;
                pppppppuVar46[7] = ppppppuVar41;
                pppppppuVar46[6] = ppppppuVar35;
                pppppppuVar46[9] = ppppppuVar29;
                pppppppuVar46[8] = ppppppuVar48;
                *(uint *)(pppppppuVar46 + 0xe) = uVar2;
                *(ulong *)((long)pppppppuVar46 + 0x74) = uVar42 | uVar36 << 0x20;
                *(undefined1 *)((long)pppppppuVar46 + 0x7c) = 0;
                *(undefined1 *)((long)pppppppuVar46 + 0x94) = 0;
                *(undefined1 *)(pppppppuVar46 + 0x13) = 0;
                *(undefined1 *)((long)pppppppuVar46 + 0xb4) = 0;
                *(undefined1 *)(pppppppuVar46 + 0x17) = 0;
                *(undefined1 *)((long)pppppppuVar46 + 0xcc) = 0;
                if ((pppppppuVar17 == (uint *******)0x0) ||
                   (*(float *)(param_1 + 0x13) * (float)pppppppuVar17 <
                    (float)((long)param_1[0x12] + 1))) {
                  uVar42 = 1;
                  if ((uint *******)0x2 < pppppppuVar17) {
                    uVar42 = (ulong)(((ulong)pppppppuVar17 & (long)pppppppuVar17 - 1U) != 0);
                  }
                  uVar42 = uVar42 | (long)pppppppuVar17 << 1;
                  uVar36 = (ulong)((float)((long)param_1[0x12] + 1) / *(float *)(param_1 + 0x13));
                  if (uVar42 <= uVar36) {
                    uVar42 = uVar36;
                  }
                  FUN_10aae65c4(param_1 + 0xf,uVar42);
                  pppppppuVar17 = (uint *******)param_1[0x10];
                  if (((ulong)pppppppuVar17 & (long)pppppppuVar17 - 1U) == 0) {
                    unaff_x22 = (uint *******)((long)pppppppuVar17 - 1U & (ulong)pppppppuVar28);
                  }
                  else {
                    unaff_x22 = pppppppuVar28;
                    if (pppppppuVar17 <= pppppppuVar28) {
                      uVar42 = 0;
                      if (pppppppuVar17 != (uint *******)0x0) {
                        uVar42 = (ulong)pppppppuVar28 / (ulong)pppppppuVar17;
                      }
                      unaff_x22 = (uint *******)((long)pppppppuVar28 - uVar42 * (long)pppppppuVar17)
                      ;
                    }
                  }
                }
                ppppppuVar29 = param_1[0xf];
                ppppppuVar48 = (uint ******)ppppppuVar29[(long)unaff_x22];
                if (ppppppuVar48 == (uint ******)0x0) {
                  *pppppppuVar46 = *pppppppuVar54;
                  *pppppppuVar54 = (uint ******)pppppppuVar46;
                  ppppppuVar29[(long)unaff_x22] = (uint *****)pppppppuVar54;
                  if (*pppppppuVar46 != (uint ******)0x0) {
                    pppppppuVar28 = (uint *******)(*pppppppuVar46)[1];
                    if (((ulong)pppppppuVar17 & (long)pppppppuVar17 - 1U) == 0) {
                      pppppppuVar28 =
                           (uint *******)((ulong)pppppppuVar28 & (long)pppppppuVar17 - 1U);
                    }
                    else if (pppppppuVar17 <= pppppppuVar28) {
                      uVar42 = 0;
                      if (pppppppuVar17 != (uint *******)0x0) {
                        uVar42 = (ulong)pppppppuVar28 / (ulong)pppppppuVar17;
                      }
                      pppppppuVar28 =
                           (uint *******)((long)pppppppuVar28 - uVar42 * (long)pppppppuVar17);
                    }
                    ppppppuVar48 = param_1[0xf] + (long)pppppppuVar28;
                    goto LAB_10aad0f68;
                  }
                }
                else {
                  *pppppppuVar46 = (uint ******)*ppppppuVar48;
LAB_10aad0f68:
                  *ppppppuVar48 = (uint *****)pppppppuVar46;
                }
                param_1[0x12] = (uint ******)((long)param_1[0x12] + 1);
              }
LAB_10aad0f78:
              plVar18 = param_2;
              FUN_10a518708(param_2,pppppppuVar46 + 0xe);
              if (plVar18 == (long *)0x0) {
                pppppppuVar17 = param_1 + 0x14;
                FUN_10a518708(pppppppuVar17,pppppppuVar46 + 0xe);
                if (pppppppuVar17 == (uint *******)0x0) {
                  FUN_10a22c4c8(param_1 + 0x14,pppppppuVar46 + 0xe,pppppppuVar46 + 0xe);
                  func_0x00010aad0a98(&pppppppuStack_350,pppppppuVar46 + 0xe);
                }
              }
            }
            plVar18 = plVar56 + 2;
            func_0x00010aad0a98(&pppppppuStack_350);
          }
          pppppppuVar46 = pppppppuStack_348;
          pppppppuVar17 = pppppppuStack_350;
          plVar56 = (long *)*plVar56;
        } while (plVar56 != (long *)0x0);
        pppppppuStack_318 = (uint *******)0x0;
        puStack_310 = (undefined8 *)0x0;
        puStack_308 = (undefined8 *)0x0;
        if ((long)pppppppuStack_348 - (long)pppppppuStack_350 == 0) {
          lVar24 = 0;
          bVar15 = true;
        }
        else {
          puVar47 = (undefined8 *)
                    (((long)pppppppuStack_348 - (long)pppppppuStack_350 >> 5) * -0x5555555555555555)
          ;
          if ((ulong)puVar47 >> 0x3c != 0) {
            FUN_10aadc210();
            goto LAB_10aad2b50;
          }
          pppppppuStack_120 = (uint *******)&pppppppuStack_318;
          puVar19 = puVar47;
          FUN_10aadc224();
          pppppppuVar54 =
               (uint *******)((long)puVar19 - ((long)puStack_310 - (long)pppppppuStack_318));
          _memcpy(pppppppuVar54);
          pppppppuStack_130 = pppppppuStack_318;
          uStack_128 = puStack_308;
          uStack_138 = pppppppuStack_318;
          uStack_140 = (undefined **)pppppppuStack_318;
          pppppppuStack_318 = pppppppuVar54;
          puStack_310 = puVar19;
          puStack_308 = puVar19 + (long)plVar18 * 2;
          func_0x00010aadc258(&uStack_140);
          bVar15 = false;
          lVar24 = LZCOUNT(puVar47) * -2 + 0x7e;
        }
      }
      FUN_10aadc2a4(pppppppuVar17,pppppppuVar46,lVar24,1);
      FUN_10a0ec6f0();
      pppppuVar34 = param_3[2];
      bVar16 = (param_4 & 1) != 0;
      pppppuVar37 = (uint *****)((ulong)pppppuVar34 >> 0x20);
      if (bVar16) {
        pppppuVar37 = pppppuVar34;
      }
      pppppuVar26 = (uint *****)((ulong)pppppuVar34 & 0xffffffff);
      if (bVar16) {
        pppppuVar26 = (uint *****)((ulong)pppppuVar34 >> 0x20);
      }
      if (!bVar15) {
        pppppppuVar39 = (uint *******)((ulong)pppppuVar26 | (long)pppppuVar37 << 0x20);
        pppppppuVar54 = param_1 + 5;
        pppppppuVar28 = param_1 + 7;
        pppppppuVar27 = param_5 + 2;
LAB_10aad12b0:
        if (*(char *)((long)pppppppuVar17 + 0x24) != '\x01') {
          uVar2 = *(uint *)pppppppuVar17;
          if (uVar2 == 0xffffffff) {
            uVar2 = *(uint *)((long)param_3 + 0x24);
          }
          pppppppuVar51 = *(uint ********)((long)pppppppuVar17 + 4);
          bVar15 = true;
          bVar16 = false;
          if (0 < (int)((ulong)pppppppuVar51 >> 0x20)) {
            bVar16 = SBORROW4((int)pppppppuVar51,1);
            bVar15 = (int)pppppppuVar51 + -1 < 0;
          }
          pppppppuVar55 = pppppppuVar39;
          if (bVar15 == bVar16) {
            pppppppuVar55 = pppppppuVar51;
          }
          uVar42 = (long)puStack_310 - (long)pppppppuStack_318;
          pppppppuStack_198 = pppppppuVar55;
          if (0 < (int)(uVar42 >> 4)) {
            uVar45 = uVar42 >> 4 & 0x7fffffff;
            uVar36 = uVar45 + 1;
            pppppppuVar51 = pppppppuStack_318 + uVar45 * 2;
            do {
              pppppppuVar51 = pppppppuVar51 + -2;
              if ((ulong)((long)uVar42 >> 4) <= uVar36 - 2) goto LAB_10aad2b50;
              ppppppuVar48 = *pppppppuVar51;
              uVar3 = *(uint *)(ppppppuVar48 + 2);
              uVar5 = *(uint *)((long)ppppppuVar48 + 0x14);
              iVar53 = (int)((ulong)pppppppuVar55 >> 0x20);
              if ((int)pppppppuVar55 <= (int)uVar3 && iVar53 <= (int)uVar5) {
                uVar4 = *(uint *)((long)ppppppuVar48 + 0x24);
                uVar20 = (ulong)uVar4;
                if (uVar2 == 7) {
                  if (uVar4 < 9 && (1 << (ulong)(uVar4 & 0x1f) & 0x184U) != 0) {
LAB_10aad18e0:
                    lVar24 = 0;
                    goto LAB_10aad18ec;
                  }
                }
                else if ((uVar4 != 7) && (FUN_10a1b4288(uVar20,uVar2), (uVar20 & 1) != 0))
                goto LAB_10aad18e0;
              }
              uVar36 = uVar36 - 1;
              uVar45 = uVar45 - 1;
            } while (1 < uVar36);
          }
          ppppppuVar29 = (uint ******)0x0;
          goto LAB_10aad1930;
        }
        func_0x00010aae61b4(&uStack_140,param_1 + 10,pppppppuVar17);
        pppppppuVar51 = (uint *******)uStack_140;
        if ((uint *******)uStack_140 == (uint *******)0x0) {
          pppppppuVar55 = param_1 + 0xf;
          FUN_10aae6304(pppppppuVar55,pppppppuVar17);
          if (pppppppuVar55 == (uint *******)0x0) {
            FUN_109ffdddc(&UNK_10f639994);
            goto LAB_10aad2b50;
          }
        }
        else {
          pppppppuVar55 = param_1 + 0xf;
          pppppppuVar21 = (uint *******)uStack_140;
          FUN_10aae63dc(pppppppuVar55);
          if (((ulong)pppppppuVar21 & 1) == 0) {
            if (((ushort)uStack_138 >> 8 & 1) == 0) goto LAB_10aad2b50;
            __ZdlPv(pppppppuVar51);
          }
        }
        pppppppuVar51 = param_5;
        FUN_10aae6794(param_5,pppppppuVar55 + 0xe);
        if (pppppppuVar51 != (uint *******)0x0) {
          pppppppuVar51 = pppppppuVar51 + 0xe;
          ppppppuVar48 = *pppppppuVar51;
          uStack_1d0 = ppppppuVar48[2];
          if ((*(byte *)((long)pppppppuVar17 + 0x24) & 1) == 0) goto LAB_10aad2b50;
          pppppuVar34 = (uint *****)((ulong)uStack_1d0 >> 0x20);
          pppppuVar37 = uStack_1d0;
          if ((*(byte *)((long)pppppppuVar17 + 0x1c) | 2) == 3) {
            pppppuVar26 = (uint *****)((ulong)pppppuVar34 | (long)uStack_1d0 << 0x20);
            pppppuVar37 = pppppuVar34;
            pppppuVar34 = uStack_1d0;
            uStack_1d0 = pppppuVar26;
          }
          pppppppuVar55 = (uint *******)((long)pppppppuVar17 + 4);
          if (*(uint *)pppppppuVar55 == (uint)pppppuVar37 &&
              *(uint *)(pppppppuVar17 + 1) == (uint)pppppuVar34) {
            uStack_140 = &PTR_FUN_110babc88;
            pppppppuStack_130 = (uint *******)0x0;
            uStack_138 = (uint *******)0x0;
            pppppppuStack_120 = (uint *******)0x0;
            uStack_128 = (undefined8 *)0x0;
            pppppppuStack_110 = (uint *******)0x0;
            uStack_118 = 0;
            iVar53 = (int)pppppppuVar17 + 0xc;
            FUN_10a8ccc9c();
            uStack_240 = (uint *******)CONCAT44(uStack_240._4_4_,iVar53);
            pppppppuVar21 = (uint *******)&uStack_138;
            FUN_10a1b3670(&pppppppuStack_330,pppppppuVar21,ppppppuVar48,&uStack_240,pppppppuVar55);
            pppppppuVar31 = pppppppuStack_110;
            uStack_140 = &PTR_FUN_110babc88;
            if (pppppppuStack_110 != (uint *******)0x0) {
              pppppppuVar52 = pppppppuStack_110 + 1;
              do {
                ppppppuVar48 = *pppppppuVar52;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                if (bVar15) {
                  *pppppppuVar52 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_110)[2])(pppppppuStack_110);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar21 = pppppppuVar31;
              }
            }
            pppppppuVar31 = pppppppuStack_120;
            if (pppppppuStack_120 != (uint *******)0x0) {
              pppppppuVar52 = pppppppuStack_120 + 1;
              do {
                ppppppuVar48 = *pppppppuVar52;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                if (bVar15) {
                  *pppppppuVar52 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_120)[2])(pppppppuStack_120);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar21 = pppppppuVar31;
              }
            }
            pppppppuVar31 = pppppppuStack_130;
            if (pppppppuStack_130 != (uint *******)0x0) {
              pppppppuVar52 = pppppppuStack_130 + 1;
              do {
                ppppppuVar48 = *pppppppuVar52;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar52,0x10);
                if (bVar15) {
                  *pppppppuVar52 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_130)[2])(pppppppuStack_130);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar21 = pppppppuVar31;
              }
            }
            if (pppppppuStack_330 == (uint *******)*pppppppuVar51) {
              pppppppuVar21 = (uint *******)&pppppppuStack_330;
              FUN_10a2382fc(pppppppuVar21,pppppppuVar51);
            }
          }
          else {
            uStack_140 = &PTR_FUN_110babc88;
            pppppppuStack_130 = (uint *******)0x0;
            uStack_138 = (uint *******)0x0;
            pppppppuStack_120 = (uint *******)0x0;
            uStack_128 = (undefined8 *)0x0;
            pppppppuStack_110 = (uint *******)0x0;
            uStack_118 = 0;
            iVar53 = (int)pppppppuVar17 + 0xc;
            FUN_10a8ccc9c();
            uStack_240 = (uint *******)CONCAT44(uStack_240._4_4_,iVar53);
            FUN_10a1b3670(&lStack_1e0,&uStack_138,ppppppuVar48,&uStack_240,&uStack_1d0);
            pppppppuVar51 = pppppppuStack_110;
            uStack_140 = &PTR_FUN_110babc88;
            if (pppppppuStack_110 != (uint *******)0x0) {
              pppppppuVar55 = pppppppuStack_110 + 1;
              do {
                ppppppuVar48 = *pppppppuVar55;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar55,0x10);
                if (bVar15) {
                  *pppppppuVar55 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_110)[2])(pppppppuStack_110);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar51);
              }
            }
            pppppppuVar51 = pppppppuStack_120;
            if (pppppppuStack_120 != (uint *******)0x0) {
              pppppppuVar55 = pppppppuStack_120 + 1;
              do {
                ppppppuVar48 = *pppppppuVar55;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar55,0x10);
                if (bVar15) {
                  *pppppppuVar55 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_120)[2])(pppppppuStack_120);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar51);
              }
            }
            pppppppuVar51 = pppppppuStack_130;
            if (pppppppuStack_130 != (uint *******)0x0) {
              pppppppuVar55 = pppppppuStack_130 + 1;
              do {
                ppppppuVar48 = *pppppppuVar55;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar55,0x10);
                if (bVar15) {
                  *pppppppuVar55 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_130)[2])(pppppppuStack_130);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar51);
              }
            }
            if ((*(byte *)((long)pppppppuVar17 + 0x24) & 1) == 0) goto LAB_10aad2b50;
            cVar8 = *(char *)((long)pppppppuVar17 + 0x1d);
            cVar6 = *(char *)((long)pppppppuVar17 + 0x1e);
            FUN_10a8cc8cc(&uStack_140,(uint *)((long)pppppppuVar17 + 0xc),&UNK_10e482b24);
            fVar57 = 1.0;
            if (cVar6 != '\x02') {
              fVar57 = 0.0;
            }
            fVar62 = -1.0;
            if (cVar6 != '\0') {
              fVar62 = fVar57;
            }
            fVar57 = -1.0;
            if (cVar8 != '\0') {
              fVar57 = 0.0;
            }
            fVar63 = 1.0;
            if (cVar8 != '\x02') {
              fVar63 = fVar57;
            }
            fVar57 = (float)uStack_140;
            fVar9 = uStack_140._4_4_;
            fVar10 = uStack_138._4_4_;
            fVar60 = pppppppuStack_130._0_4_;
            fVar11 = (float)uStack_128;
            fVar12 = uStack_128._4_4_;
            uVar2 = *(uint *)((long)pppppppuVar17 + 4);
            uVar3 = *(uint *)(pppppppuVar17 + 1);
            iVar53 = (int)uStack_1d0;
            iVar7 = uStack_1d0._4_4_;
            lVar24 = 0;
            if (lStack_1e0 != 0) {
              lVar24 = lStack_1e0 + 0x10;
            }
            FUN_10a0f3910(&uStack_240,lVar24,0);
            uVar49 = *(undefined8 *)((long)pppppppuVar17 + 4);
            pppppppuVar55 = (uint *******)(ulong)*(uint *)pppppppuVar17;
            pppppppuVar21 = (uint *******)0xa8;
            __Znwm();
            pppppppuVar21[2] = (uint ******)0x0;
            pppppppuVar51 = pppppppuVar21 + 3;
            *pppppppuVar21 = (uint ******)&PTR_FUN_110baa4d8;
            pppppppuVar21[1] = (uint ******)0x0;
            FUN_10a1b2a84(pppppppuVar51,uVar49,pppppppuVar55,0);
            pppppppuStack_250 = pppppppuVar51;
            pppppppuStack_248 = pppppppuVar21;
            FUN_10a0f3910(&uStack_2b0,pppppppuVar21 + 5,0);
            auStack_2c8[0] = 0x1010000;
            puStack_2c0 = &uStack_240;
            uStack_2b8 = 0;
            auStack_2e0[0] = 0x2010000;
            puStack_2d8 = &uStack_2b0;
            uStack_2d0 = 0;
            if ((*(byte *)((long)pppppppuVar17 + 0x24) & 1) == 0) goto LAB_10aad2b50;
            uVar5 = *(uint *)pppppppuVar17;
            auVar58._4_4_ = (int)(long)(float)(int)(*(float *)(pppppppuVar17 + 2) * 255.0);
            auVar58._0_4_ = (int)(long)(float)(int)(*(float *)((long)pppppppuVar17 + 0xc) * 255.0);
            auVar58._8_4_ = (int)(long)(float)(int)(*(float *)((long)pppppppuVar17 + 0x14) * 255.0);
            auVar58._12_4_ = (int)(long)(float)(int)(*(float *)(pppppppuVar17 + 3) * 255.0);
            auVar58 = NEON_smax(auVar58,ZEXT216(0),4);
            auVar59[8] = 0xff;
            auVar59._0_8_ = 0xff000000ff;
            auVar59._9_3_ = 0;
            auVar59[0xc] = 0xff;
            auVar59._13_3_ = 0;
            auVar59 = NEON_smin(auVar58,auVar59,4);
            uStack_140 = (undefined **)
                         CONCAT44(uStack_140._4_4_,
                                  CONCAT13(auVar59[0xc],
                                           CONCAT12(auVar59[8],CONCAT11(auVar59[4],auVar59[0]))));
            pppppppuStack_198 = (uint *******)0x0;
            pppppppuStack_190 = (uint *******)0x0;
            uStack_188 = 0;
            func_0x000107c2b048(&pppppppuStack_198,&uStack_140,(long)&uStack_140 + 4,4);
            pppppppuStack_180 = (uint *******)0x109d138c8;
            pppppppuStack_178 = (uint *******)&PTR_DAT_110b3e838;
            pcStack_170 = FUN_10a1b2664;
            FUN_10a1b2668(&uStack_140,pppppppuStack_198,0x100000001,4,1,&pppppppuStack_180,0,0);
            (*(code *)*pppppppuStack_178)(&pppppppuStack_178);
            FUN_10a1b43e4(&puStack_1a8,1,uVar5);
            if (puStack_1a8 == (undefined8 *)0x0) {
              pppppppuStack_2f8 = (uint *******)0x0;
              pppppppuStack_300 = (uint *******)0x0;
              uStack_2e8 = 0;
              uStack_2f0 = 0;
            }
            else {
              uStack_1bc = 0;
              uStack_1c8 = 0x100000001;
              (**(code **)*puStack_1a8)(&lStack_1b8,puStack_1a8,&uStack_140,&uStack_1bc,&uStack_1c8)
              ;
              plVar18 = plStack_1b0;
              pbVar30 = *(byte **)(lStack_1b8 + 0x28);
              iVar38 = *(int *)(lStack_1b8 + 0x20);
              if (iVar38 < 3) {
                if (iVar38 == 1) {
                  pppppppuStack_300 = (uint *******)NEON_ucvtf((ulong)*pbVar30);
                  uStack_2f0 = 0;
                  uStack_2e8 = 0;
                  pppppppuStack_2f8 = (uint *******)0x0;
                }
                else if (iVar38 == 2) {
                  pppppppuStack_300 = (uint *******)NEON_ucvtf((ulong)*pbVar30);
                  pppppppuStack_2f8 = (uint *******)NEON_ucvtf((ulong)pbVar30[1]);
                  uStack_2f0 = 0;
                  uStack_2e8 = 0;
                }
                else {
LAB_10aad1ce4:
                  pppppppuStack_2f8 = (uint *******)0x0;
                  pppppppuStack_300 = (uint *******)0x0;
                  uStack_2e8 = 0;
                  uStack_2f0 = 0;
                }
              }
              else if (iVar38 == 3) {
                pppppppuStack_300 = (uint *******)NEON_ucvtf((ulong)*pbVar30);
                pppppppuStack_2f8 = (uint *******)NEON_ucvtf((ulong)pbVar30[1]);
                uStack_2f0 = NEON_ucvtf((ulong)pbVar30[2]);
                uStack_2e8 = 0;
              }
              else {
                if (iVar38 != 4) goto LAB_10aad1ce4;
                pppppppuStack_300 = (uint *******)NEON_ucvtf((ulong)*pbVar30);
                pppppppuStack_2f8 = (uint *******)NEON_ucvtf((ulong)pbVar30[1]);
                uStack_2f0 = NEON_ucvtf((ulong)pbVar30[2]);
                uStack_2e8 = NEON_ucvtf((ulong)pbVar30[3]);
              }
              if (plStack_1b0 != (long *)0x0) {
                plVar56 = plStack_1b0 + 1;
                do {
                  lVar24 = *plVar56;
                  cVar8 = '\x01';
                  bVar15 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                  if (bVar15) {
                    *plVar56 = lVar24 + -1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
                if (lVar24 == 0) {
                  (**(code **)(*plStack_1b0 + 0x10))(plStack_1b0);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
                }
              }
            }
            plVar18 = plStack_1a0;
            if (plStack_1a0 != (long *)0x0) {
              plVar56 = plStack_1a0 + 1;
              do {
                lVar24 = *plVar56;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(plVar56,0x10);
                if (bVar15) {
                  *plVar56 = lVar24 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (lVar24 == 0) {
                (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
              }
            }
            FUN_10a1b2b9c(&uStack_140);
            if (pppppppuStack_198 != (uint *******)0x0) {
              pppppppuStack_190 = pppppppuStack_198;
              __ZdlPv();
            }
            fVar9 = (fVar12 + fVar63 * fVar60 + fVar62 * fVar9 + 1.0) * 0.5;
            fVar60 = (float)(int)(uVar2 - iVar53);
            fVar57 = (fVar11 + fVar63 * fVar10 + fVar62 * fVar57 + 1.0) * 0.5;
            pppppppuVar21 = (uint *******)auStack_2c8;
            func_0x000109a4a0a4(pppppppuVar21,auStack_2e0,(int)(fVar9 * (float)(int)(uVar3 - iVar7))
                                ,(int)((1.0 - fVar9) * (float)(int)(uVar3 - iVar7)),
                                (int)(fVar57 * fVar60),(int)((1.0 - fVar57) * fVar60),0,
                                &pppppppuStack_300);
            pppppppuStack_328 = pppppppuStack_248;
            pppppppuStack_330 = pppppppuStack_250;
            pppppppuStack_250 = (uint *******)0x0;
            pppppppuStack_248 = (uint *******)0x0;
            if (lStack_278 != 0) {
              piVar1 = (int *)(lStack_278 + 0x14);
              do {
                iVar53 = *piVar1;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar15) {
                  *piVar1 = iVar53 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar53 + -1 == 0) {
                pppppppuVar21 = (uint *******)&uStack_2b0;
                func_0x000109a848d4();
              }
            }
            lStack_278 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            if (0 < uStack_2b0._4_4_) {
              lVar24 = 0;
              do {
                *(undefined4 *)(lStack_270 + lVar24 * 4) = 0;
                lVar24 = lVar24 + 1;
              } while (lVar24 < uStack_2b0._4_4_);
            }
            if (puStack_268 != auStack_260 && puStack_268 != (undefined1 *)0x0) {
              pppppppuVar21 = *(uint ********)(puStack_268 + -8);
              _free();
            }
            pppppppuVar51 = pppppppuStack_248;
            if (pppppppuStack_248 != (uint *******)0x0) {
              pppppppuVar31 = pppppppuStack_248 + 1;
              do {
                ppppppuVar48 = *pppppppuVar31;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
                if (bVar15) {
                  *pppppppuVar31 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_248)[2])(pppppppuStack_248);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar21 = pppppppuVar51;
              }
            }
            if (lStack_208 != 0) {
              piVar1 = (int *)(lStack_208 + 0x14);
              do {
                iVar53 = *piVar1;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar15) {
                  *piVar1 = iVar53 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar53 + -1 == 0) {
                pppppppuVar21 = (uint *******)&uStack_240;
                func_0x000109a848d4();
              }
            }
            lStack_208 = 0;
            uStack_228 = 0;
            uStack_230 = 0;
            uStack_218 = 0;
            uStack_220 = 0;
            if (0 < uStack_240._4_4_) {
              lVar24 = 0;
              do {
                *(undefined4 *)(lStack_200 + lVar24 * 4) = 0;
                lVar24 = lVar24 + 1;
              } while (lVar24 < uStack_240._4_4_);
            }
            if (puStack_1f8 != auStack_1f0 && puStack_1f8 != (undefined1 *)0x0) {
              pppppppuVar21 = *(uint ********)(puStack_1f8 + -8);
              _free();
            }
            pppppppuVar51 = pppppppuStack_1d8;
            if (pppppppuStack_1d8 != (uint *******)0x0) {
              pppppppuVar31 = pppppppuStack_1d8 + 1;
              do {
                ppppppuVar48 = *pppppppuVar31;
                cVar8 = '\x01';
                bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
                if (bVar15) {
                  *pppppppuVar31 = (uint ******)((long)ppppppuVar48 + -1);
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (ppppppuVar48 == (uint ******)0x0) {
                (*(code *)(*pppppppuStack_1d8)[2])(pppppppuStack_1d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppppppuVar21 = pppppppuVar51;
              }
            }
          }
          func_0x00010aad09b8();
          pppppppuVar51 = (uint *******)param_5[1];
          if (pppppppuVar51 != (uint *******)0x0) {
            uVar42 = (long)pppppppuVar51 - 1;
            if (((ulong)pppppppuVar51 & uVar42) == 0) {
              pppppppuVar55 = (uint *******)(uVar42 & (ulong)pppppppuVar21);
            }
            else {
              pppppppuVar55 = pppppppuVar21;
              if (pppppppuVar51 <= pppppppuVar21) {
                uVar36 = 0;
                if (pppppppuVar51 != (uint *******)0x0) {
                  uVar36 = (ulong)pppppppuVar21 / (ulong)pppppppuVar51;
                }
                pppppppuVar55 = (uint *******)((long)pppppppuVar21 - uVar36 * (long)pppppppuVar51);
              }
            }
            if ((*param_5)[(long)pppppppuVar55] != (uint *****)0x0) {
              for (ppppuVar50 = *(*param_5)[(long)pppppppuVar55]; ppppuVar50 != (uint ****)0x0;
                  ppppuVar50 = (uint ****)*ppppuVar50) {
                pppppppuVar31 = (uint *******)ppppuVar50[1];
                if (pppppppuVar31 == pppppppuVar21) {
                  ppppuVar22 = ppppuVar50 + 2;
                  FUN_10a22c6f0(ppppuVar22,pppppppuVar17);
                  if (((ulong)ppppuVar22 & 1) != 0) goto LAB_10aad219c;
                }
                else {
                  if (((ulong)pppppppuVar51 & uVar42) == 0) {
                    pppppppuVar31 = (uint *******)((ulong)pppppppuVar31 & uVar42);
                  }
                  else if (pppppppuVar51 <= pppppppuVar31) {
                    uVar36 = 0;
                    if (pppppppuVar51 != (uint *******)0x0) {
                      uVar36 = (ulong)pppppppuVar31 / (ulong)pppppppuVar51;
                    }
                    pppppppuVar31 =
                         (uint *******)((long)pppppppuVar31 - uVar36 * (long)pppppppuVar51);
                  }
                  if (pppppppuVar31 != pppppppuVar55) break;
                }
              }
            }
          }
          pppppppuVar31 = (uint *******)0x88;
          __Znwm();
          pppppppuStack_130 = (uint *******)0x1;
          *pppppppuVar31 = (uint ******)0x0;
          pppppppuVar31[1] = (uint ******)pppppppuVar21;
          ppppppuVar35 = *pppppppuVar17;
          ppppppuVar29 = pppppppuVar17[3];
          ppppppuVar48 = pppppppuVar17[2];
          pppppppuVar31[3] = pppppppuVar17[1];
          pppppppuVar31[2] = ppppppuVar35;
          pppppppuVar31[5] = ppppppuVar29;
          pppppppuVar31[4] = ppppppuVar48;
          ppppppuVar35 = pppppppuVar17[4];
          ppppppuVar41 = pppppppuVar17[5];
          ppppppuVar29 = pppppppuVar17[7];
          ppppppuVar48 = pppppppuVar17[6];
          ppppppuVar43 = pppppppuVar17[8];
          ppppppuVar61 = pppppppuVar17[0xb];
          ppppppuVar44 = pppppppuVar17[10];
          pppppppuVar31[0xb] = pppppppuVar17[9];
          pppppppuVar31[10] = ppppppuVar43;
          pppppppuVar31[0xd] = ppppppuVar61;
          pppppppuVar31[0xc] = ppppppuVar44;
          pppppppuVar31[7] = ppppppuVar41;
          pppppppuVar31[6] = ppppppuVar35;
          pppppppuVar31[9] = ppppppuVar29;
          pppppppuVar31[8] = ppppppuVar48;
          pppppppuVar31[0xf] = (uint ******)pppppppuStack_328;
          pppppppuVar31[0xe] = (uint ******)pppppppuStack_330;
          pppppppuStack_330 = (uint *******)0x0;
          pppppppuStack_328 = (uint *******)0x0;
          pppppppuVar31[0x10] = (uint ******)pppppppuVar39;
          uStack_140 = (undefined **)pppppppuVar31;
          if ((pppppppuVar51 == (uint *******)0x0) ||
             (uStack_138 = param_5,
             *(float *)(param_5 + 4) * (float)pppppppuVar51 < (float)((long)param_5[3] + 1))) {
            if (pppppppuVar51 < (uint *******)0x3) {
              uVar42 = 1;
            }
            else {
              uVar42 = (ulong)(((ulong)pppppppuVar51 & (long)pppppppuVar51 - 1U) != 0);
            }
            uVar42 = uVar42 | (long)pppppppuVar51 << 1;
            uVar36 = (ulong)((float)((long)param_5[3] + 1) / *(float *)(param_5 + 4));
            if (uVar42 <= uVar36) {
              uVar42 = uVar36;
            }
            uStack_138 = param_5;
            FUN_10a503210(param_5,uVar42);
            pppppppuVar51 = (uint *******)param_5[1];
            if (((ulong)pppppppuVar51 & (long)pppppppuVar51 - 1U) == 0) {
              pppppppuVar55 = (uint *******)((long)pppppppuVar51 - 1U & (ulong)pppppppuVar21);
            }
            else {
              pppppppuVar55 = pppppppuVar21;
              if (pppppppuVar51 <= pppppppuVar21) {
                uVar42 = 0;
                if (pppppppuVar51 != (uint *******)0x0) {
                  uVar42 = (ulong)pppppppuVar21 / (ulong)pppppppuVar51;
                }
                pppppppuVar55 = (uint *******)((long)pppppppuVar21 - uVar42 * (long)pppppppuVar51);
              }
            }
          }
          ppppppuVar29 = *param_5;
          ppppppuVar48 = (uint ******)ppppppuVar29[(long)pppppppuVar55];
          if (ppppppuVar48 == (uint ******)0x0) {
            *pppppppuVar31 = *pppppppuVar27;
            *pppppppuVar27 = (uint ******)pppppppuVar31;
            ppppppuVar29[(long)pppppppuVar55] = (uint *****)pppppppuVar27;
            if (*pppppppuVar31 != (uint ******)0x0) {
              pppppppuVar55 = (uint *******)(*pppppppuVar31)[1];
              if (((ulong)pppppppuVar51 & (long)pppppppuVar51 - 1U) == 0) {
                pppppppuVar55 = (uint *******)((ulong)pppppppuVar55 & (long)pppppppuVar51 - 1U);
              }
              else if (pppppppuVar51 <= pppppppuVar55) {
                uVar42 = 0;
                if (pppppppuVar51 != (uint *******)0x0) {
                  uVar42 = (ulong)pppppppuVar55 / (ulong)pppppppuVar51;
                }
                pppppppuVar55 = (uint *******)((long)pppppppuVar55 - uVar42 * (long)pppppppuVar51);
              }
              ppppppuVar48 = *param_5 + (long)pppppppuVar55;
              goto LAB_10aad218c;
            }
          }
          else {
            *pppppppuVar31 = (uint ******)*ppppppuVar48;
LAB_10aad218c:
            *ppppppuVar48 = (uint *****)pppppppuVar31;
          }
          param_5[3] = (uint ******)((long)param_5[3] + 1);
LAB_10aad219c:
          if (pppppppuStack_328 != (uint *******)0x0) {
            pppppppuVar51 = pppppppuStack_328 + 1;
            do {
              ppppppuVar48 = *pppppppuVar51;
              cVar8 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
              if (bVar15) {
                *pppppppuVar51 = (uint ******)((long)ppppppuVar48 + -1);
                cVar8 = ExclusiveMonitorsStatus();
              }
              pppppppuVar21 = pppppppuStack_328;
            } while (cVar8 != '\0');
            goto LAB_10aad2958;
          }
          goto LAB_10aad2974;
        }
        FUN_109ffdddc(&UNK_10f639994);
        goto LAB_10aad2b50;
      }
LAB_10aad10cc:
      ppppppuVar48 = param_1[0x16];
      if (ppppppuVar48 != (uint ******)0x0) {
        do {
          pppppppuVar17 = param_5;
          FUN_10aae6794(param_5,ppppppuVar48 + 2);
          if (pppppppuVar17 != (uint *******)0x0) {
            ppppppuVar35 = param_5[1];
            ppppppuVar29 = pppppppuVar17[1];
            uVar42 = (long)ppppppuVar35 - 1;
            if (((ulong)ppppppuVar35 & uVar42) == 0) {
              ppppppuVar29 = (uint ******)(uVar42 & (ulong)ppppppuVar29);
            }
            else if (ppppppuVar35 <= ppppppuVar29) {
              uVar36 = 0;
              if (ppppppuVar35 != (uint ******)0x0) {
                uVar36 = (ulong)ppppppuVar29 / (ulong)ppppppuVar35;
              }
              ppppppuVar29 = (uint ******)((long)ppppppuVar29 - uVar36 * (long)ppppppuVar35);
            }
            ppppppuVar41 = *pppppppuVar17;
            pppppppuVar46 = (uint *******)(*param_5)[(long)ppppppuVar29];
            do {
              pppppppuVar54 = pppppppuVar46;
              pppppppuVar46 = (uint *******)*pppppppuVar54;
            } while ((uint *******)*pppppppuVar54 != pppppppuVar17);
            if (pppppppuVar54 == param_5 + 2) {
LAB_10aad1168:
              if (ppppppuVar41 == (uint ******)0x0) {
LAB_10aad119c:
                (*param_5)[(long)ppppppuVar29] = (uint *****)0x0;
                ppppppuVar41 = *pppppppuVar17;
                goto LAB_10aad11a4;
              }
              ppppppuVar43 = (uint ******)ppppppuVar41[1];
              if (((ulong)ppppppuVar35 & uVar42) == 0) {
                ppppppuVar44 = (uint ******)((ulong)ppppppuVar43 & uVar42);
              }
              else {
                ppppppuVar44 = ppppppuVar43;
                if (ppppppuVar35 <= ppppppuVar43) {
                  uVar36 = 0;
                  if (ppppppuVar35 != (uint ******)0x0) {
                    uVar36 = (ulong)ppppppuVar43 / (ulong)ppppppuVar35;
                  }
                  ppppppuVar44 = (uint ******)((long)ppppppuVar43 - uVar36 * (long)ppppppuVar35);
                }
              }
              if (ppppppuVar44 != ppppppuVar29) goto LAB_10aad119c;
LAB_10aad11ac:
              if (((ulong)ppppppuVar35 & uVar42) == 0) {
                ppppppuVar43 = (uint ******)((ulong)ppppppuVar43 & uVar42);
              }
              else if (ppppppuVar35 <= ppppppuVar43) {
                uVar42 = 0;
                if (ppppppuVar35 != (uint ******)0x0) {
                  uVar42 = (ulong)ppppppuVar43 / (ulong)ppppppuVar35;
                }
                ppppppuVar43 = (uint ******)((long)ppppppuVar43 - uVar42 * (long)ppppppuVar35);
              }
              if (ppppppuVar43 != ppppppuVar29) {
                (*param_5)[(long)ppppppuVar43] = (uint *****)pppppppuVar54;
                ppppppuVar41 = *pppppppuVar17;
              }
            }
            else {
              ppppppuVar43 = pppppppuVar54[1];
              if (((ulong)ppppppuVar35 & uVar42) == 0) {
                ppppppuVar43 = (uint ******)((ulong)ppppppuVar43 & uVar42);
              }
              else if (ppppppuVar35 <= ppppppuVar43) {
                uVar36 = 0;
                if (ppppppuVar35 != (uint ******)0x0) {
                  uVar36 = (ulong)ppppppuVar43 / (ulong)ppppppuVar35;
                }
                ppppppuVar43 = (uint ******)((long)ppppppuVar43 - uVar36 * (long)ppppppuVar35);
              }
              if (ppppppuVar43 != ppppppuVar29) goto LAB_10aad1168;
LAB_10aad11a4:
              if (ppppppuVar41 != (uint ******)0x0) {
                ppppppuVar43 = (uint ******)ppppppuVar41[1];
                goto LAB_10aad11ac;
              }
            }
            *pppppppuVar54 = ppppppuVar41;
            *pppppppuVar17 = (uint ******)0x0;
            param_5[3] = (uint ******)((long)param_5[3] + -1);
            func_0x00010a136de4(pppppppuVar17 + 0xe);
            __ZdlPv(pppppppuVar17);
          }
          ppppppuVar48 = (uint ******)*ppppppuVar48;
        } while (ppppppuVar48 != (uint ******)0x0);
      }
      FUN_10aaddf70(&pppppppuStack_318);
      if (pppppppuStack_350 != (uint *******)0x0) {
        pppppppuStack_348 = pppppppuStack_350;
        __ZdlPv();
      }
      FUN_10aad2c1c(&pppppppuStack_338);
      goto LAB_10aad122c;
    }
    if (pppppppuVar17 < (uint *******)0x2aaaaaaaaaaaaab) {
      FUN_10aaddfe0();
      pppppppuStack_340 = pppppppuVar17 + (long)plVar18 * 0xc;
      pppppppuStack_348 = pppppppuVar17;
      goto LAB_10aad0c64;
    }
  }
  FUN_10aaddfcc();
LAB_10aad2b50:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10aad2b54);
  (*pcVar14)();
  while( true ) {
    ppppppuVar35 = *(uint *******)((long)pppppppuVar51 + lVar24);
    ppppppuVar29 = ppppppuVar48;
    if (((*(uint *)((long)ppppppuVar35 + 0x14) * *(uint *)(ppppppuVar35 + 2) != uVar5 * uVar3) ||
        (ppppppuVar29 = ppppppuVar35,
        (*(uint *)((long)ppppppuVar35 + 0x24) == uVar2 &&
        (int)pppppppuVar55 <= (int)*(uint *)(ppppppuVar35 + 2)) &&
        iVar53 <= (int)*(uint *)((long)ppppppuVar35 + 0x14))) ||
       (lVar24 = lVar24 + -0x10, ppppppuVar29 = ppppppuVar48, (long)uVar45 < 1)) break;
LAB_10aad18ec:
    uVar45 = uVar45 - 1;
    if ((ulong)((long)uVar42 >> 4) <= uVar45) goto LAB_10aad2b50;
  }
LAB_10aad1930:
  ppppppuVar48 = param_3;
  if (ppppppuVar29 != (uint ******)0x0) {
    ppppppuVar48 = ppppppuVar29;
  }
  if (ppppppuVar48 == param_3) {
    uVar13 = uVar25;
    FUN_10a0ec6f0();
    auStack_2c8[0] = uVar13;
    pppppppuVar55 = pppppppuStack_198;
  }
  else {
    auStack_2c8[0] = 0;
  }
  uVar3 = *(uint *)((long)ppppppuVar48 + 0x24);
  uStack_2b0 = (uint *******)CONCAT44(uVar2,uVar3);
  pppppppuStack_178 = (uint *******)0x0;
  pppppppuStack_180 = (uint *******)0x0;
  pppppppuVar51 = param_1;
  pppppppuStack_2a8 = pppppppuVar55;
  FUN_10aae686c(param_1,&uStack_2b0);
  if (pppppppuVar51 == (uint *******)0x0) {
    uStack_240 = (uint *******)0x0;
    uStack_238 = (long *)0x0;
    pppppppuVar51 = pppppppuVar54;
    FUN_10aae686c(pppppppuVar54,&uStack_2b0);
  }
  else {
    ppppppuVar35 = param_1[1];
    ppppppuVar29 = pppppppuVar51[1];
    uVar42 = (long)ppppppuVar35 - 1;
    if (((ulong)ppppppuVar35 & uVar42) == 0) {
      ppppppuVar29 = (uint ******)(uVar42 & (ulong)ppppppuVar29);
    }
    else if (ppppppuVar35 <= ppppppuVar29) {
      uVar36 = 0;
      if (ppppppuVar35 != (uint ******)0x0) {
        uVar36 = (ulong)ppppppuVar29 / (ulong)ppppppuVar35;
      }
      ppppppuVar29 = (uint ******)((long)ppppppuVar29 - uVar36 * (long)ppppppuVar35);
    }
    pppppppuVar21 = (uint *******)(*param_1)[(long)ppppppuVar29];
    do {
      pppppppuVar31 = pppppppuVar21;
      pppppppuVar21 = (uint *******)*pppppppuVar31;
    } while ((uint *******)*pppppppuVar31 != pppppppuVar51);
    if (pppppppuVar31 == param_1 + 2) {
LAB_10aad1a74:
      if (*pppppppuVar51 != (uint ******)0x0) {
        ppppppuVar41 = (uint ******)(*pppppppuVar51)[1];
        if (((ulong)ppppppuVar35 & uVar42) == 0) {
          ppppppuVar41 = (uint ******)((ulong)ppppppuVar41 & uVar42);
        }
        else if (ppppppuVar35 <= ppppppuVar41) {
          uVar36 = 0;
          if (ppppppuVar35 != (uint ******)0x0) {
            uVar36 = (ulong)ppppppuVar41 / (ulong)ppppppuVar35;
          }
          ppppppuVar41 = (uint ******)((long)ppppppuVar41 - uVar36 * (long)ppppppuVar35);
        }
        if (ppppppuVar41 == ppppppuVar29) goto LAB_10aad1aac;
      }
      (*param_1)[(long)ppppppuVar29] = (uint *****)0x0;
    }
    else {
      ppppppuVar41 = pppppppuVar31[1];
      if (((ulong)ppppppuVar35 & uVar42) == 0) {
        ppppppuVar41 = (uint ******)((ulong)ppppppuVar41 & uVar42);
      }
      else if (ppppppuVar35 <= ppppppuVar41) {
        uVar36 = 0;
        if (ppppppuVar35 != (uint ******)0x0) {
          uVar36 = (ulong)ppppppuVar41 / (ulong)ppppppuVar35;
        }
        ppppppuVar41 = (uint ******)((long)ppppppuVar41 - uVar36 * (long)ppppppuVar35);
      }
      if (ppppppuVar41 != ppppppuVar29) goto LAB_10aad1a74;
    }
LAB_10aad1aac:
    ppppppuVar41 = *pppppppuVar51;
    if (ppppppuVar41 != (uint ******)0x0) {
      ppppppuVar43 = (uint ******)ppppppuVar41[1];
      if (((ulong)ppppppuVar35 & uVar42) == 0) {
        ppppppuVar43 = (uint ******)((ulong)ppppppuVar43 & uVar42);
      }
      else if (ppppppuVar35 <= ppppppuVar43) {
        uVar42 = 0;
        if (ppppppuVar35 != (uint ******)0x0) {
          uVar42 = (ulong)ppppppuVar43 / (ulong)ppppppuVar35;
        }
        ppppppuVar43 = (uint ******)((long)ppppppuVar43 - uVar42 * (long)ppppppuVar35);
      }
      if (ppppppuVar43 != ppppppuVar29) {
        (*param_1)[(long)ppppppuVar43] = (uint *****)pppppppuVar31;
        ppppppuVar41 = *pppppppuVar51;
      }
    }
    *pppppppuVar31 = ppppppuVar41;
    *pppppppuVar51 = (uint ******)0x0;
    param_1[3] = (uint ******)((long)param_1[3] + -1);
    uStack_238._0_2_ = CONCAT11(1,(byte)uStack_238);
    uVar42 = (long)(int)*(uint *)(pppppppuVar51 + 2) + 0x9e3779b9;
    uVar42 = (long)(int)*(uint *)((long)pppppppuVar51 + 0x14) + 0x9e3779b9 + uVar42 * 0x40 +
             (uVar42 >> 2) ^ uVar42;
    ppppppuVar35 = (uint ******)
                   ((ulong)((*(uint *)(pppppppuVar51 + 3) & 0xff00 |
                            *(uint *)((long)pppppppuVar51 + 0x1c) & 0xff) + 0x9e3779b9) +
                    uVar42 * 0x40 + (uVar42 >> 2) ^ uVar42);
    pppppppuVar51[1] = ppppppuVar35;
    ppppppuVar29 = param_1[6];
    if (ppppppuVar29 != (uint ******)0x0) {
      uVar42 = (long)ppppppuVar29 - 1;
      if (((ulong)ppppppuVar29 & uVar42) == 0) {
        ppppppuVar41 = (uint ******)((ulong)ppppppuVar35 & (long)ppppppuVar29 + 0x3fffffffffffU);
      }
      else {
        ppppppuVar41 = ppppppuVar35;
        if (ppppppuVar29 <= ppppppuVar35) {
          uVar36 = 0;
          if (ppppppuVar29 != (uint ******)0x0) {
            uVar36 = (ulong)ppppppuVar35 / (ulong)ppppppuVar29;
          }
          ppppppuVar41 = (uint ******)((long)ppppppuVar35 - uVar36 * (long)ppppppuVar29);
        }
      }
      pppppppuVar21 = (uint *******)(*pppppppuVar54)[(long)ppppppuVar41];
      if (pppppppuVar21 != (uint *******)0x0) {
        do {
          while( true ) {
            pppppppuVar21 = (uint *******)*pppppppuVar21;
            if (pppppppuVar21 == (uint *******)0x0) goto LAB_10aad1bfc;
            ppppppuVar43 = pppppppuVar21[1];
            if (ppppppuVar43 != ppppppuVar35) break;
            if ((*(uint *)(pppppppuVar21 + 2) == *(uint *)(pppppppuVar51 + 2) &&
                 *(uint *)((long)pppppppuVar21 + 0x14) == *(uint *)((long)pppppppuVar51 + 0x14)) &&
               (*(uint *)(pppppppuVar21 + 3) == *(uint *)(pppppppuVar51 + 3) &&
                *(uint *)((long)pppppppuVar21 + 0x1c) == *(uint *)((long)pppppppuVar51 + 0x1c))) {
              uVar33 = 0;
              pppppppuStack_130 = pppppppuVar51;
              pppppppuVar51 = pppppppuVar21;
              goto LAB_10aad21f8;
            }
          }
          if (((ulong)ppppppuVar29 & uVar42) == 0) {
            ppppppuVar43 = (uint ******)((ulong)ppppppuVar43 & uVar42);
          }
          else if (ppppppuVar29 <= ppppppuVar43) {
            uVar36 = 0;
            if (ppppppuVar29 != (uint ******)0x0) {
              uVar36 = (ulong)ppppppuVar43 / (ulong)ppppppuVar29;
            }
            ppppppuVar43 = (uint ******)((long)ppppppuVar43 - uVar36 * (long)ppppppuVar29);
          }
        } while (ppppppuVar43 == ppppppuVar41);
      }
    }
LAB_10aad1bfc:
    if ((ppppppuVar29 == (uint ******)0x0) ||
       (*(float *)(param_1 + 9) * (float)ppppppuVar29 < (float)((long)param_1[8] + 1))) {
      uVar42 = 1;
      if ((uint ******)0x2 < ppppppuVar29) {
        uVar42 = (ulong)(((ulong)ppppppuVar29 & (long)ppppppuVar29 - 1U) != 0);
      }
      uVar42 = uVar42 | (long)ppppppuVar29 << 1;
      uVar36 = (ulong)((float)((long)param_1[8] + 1) / *(float *)(param_1 + 9));
      if (uVar42 <= uVar36) {
        uVar42 = uVar36;
      }
      uStack_240 = pppppppuVar51;
      FUN_10aae69a0(pppppppuVar54,uVar42);
      ppppppuVar29 = param_1[6];
      ppppppuVar35 = pppppppuVar51[1];
    }
    uVar42 = (long)ppppppuVar29 - 1;
    if (((ulong)ppppppuVar29 & uVar42) == 0) {
      ppppppuVar35 = (uint ******)(uVar42 & (ulong)ppppppuVar35);
    }
    else if (ppppppuVar29 <= ppppppuVar35) {
      uVar36 = 0;
      if (ppppppuVar29 != (uint ******)0x0) {
        uVar36 = (ulong)ppppppuVar35 / (ulong)ppppppuVar29;
      }
      ppppppuVar35 = (uint ******)((long)ppppppuVar35 - uVar36 * (long)ppppppuVar29);
    }
    ppppppuVar43 = *pppppppuVar54;
    ppppppuVar41 = (uint ******)ppppppuVar43[(long)ppppppuVar35];
    if (ppppppuVar41 == (uint ******)0x0) {
      *pppppppuVar51 = *pppppppuVar28;
      *pppppppuVar28 = (uint ******)pppppppuVar51;
      ppppppuVar43[(long)ppppppuVar35] = (uint *****)pppppppuVar28;
      if (*pppppppuVar51 != (uint ******)0x0) {
        ppppppuVar41 = (uint ******)(*pppppppuVar51)[1];
        if (((ulong)ppppppuVar29 & uVar42) == 0) {
          ppppppuVar41 = (uint ******)((ulong)ppppppuVar41 & uVar42);
        }
        else if (ppppppuVar29 <= ppppppuVar41) {
          uVar42 = 0;
          if (ppppppuVar29 != (uint ******)0x0) {
            uVar42 = (ulong)ppppppuVar41 / (ulong)ppppppuVar29;
          }
          ppppppuVar41 = (uint ******)((long)ppppppuVar41 - uVar42 * (long)ppppppuVar29);
        }
        ppppppuVar41 = *pppppppuVar54 + (long)ppppppuVar41;
        goto LAB_10aad21d4;
      }
    }
    else {
      *pppppppuVar51 = (uint ******)*ppppppuVar41;
LAB_10aad21d4:
      *ppppppuVar41 = (uint *****)pppppppuVar51;
    }
    pppppppuStack_130 = (uint *******)0x0;
    param_1[8] = (uint ******)((long)param_1[8] + 1);
    uStack_238._0_2_ = (ushort)(byte)uStack_238;
    uVar33 = 1;
LAB_10aad21f8:
    uStack_138 = (uint *******)CONCAT71(uStack_138._1_7_,uVar33);
    uStack_128 = (undefined8 *)CONCAT62(uStack_128._2_6_,(ushort)uStack_238);
    uStack_240 = (uint *******)0x0;
    if ((ushort)uStack_238 >> 8 != 0) {
      uStack_238._0_2_ = (ushort)(byte)uStack_238;
    }
    uStack_140 = (undefined **)pppppppuVar51;
    FUN_10aae6b70(&pppppppuStack_130);
  }
  ppppppuVar29 = (uint ******)&uStack_140;
  FUN_10aae6b70(&uStack_240);
  if (pppppppuVar51 == (uint *******)0x0) {
    FUN_10a1b43e4(&uStack_140,(long)(int)uVar3,uVar2);
    pppppppuVar21 = uStack_138;
    pppppppuVar51 = (uint *******)uStack_140;
    pppppppuStack_180 = (uint *******)uStack_140;
    pppppppuStack_178 = uStack_138;
    ppppppuVar35 = param_1[6];
    uVar42 = (long)(int)uVar3 + 0x9e3779b9;
    uVar42 = (long)(int)uVar2 + 0x9e3779b9 + uVar42 * 0x40 + (uVar42 >> 2) ^ uVar42;
    ppppppuVar41 = (uint ******)
                   (((ulong)pppppppuVar55 >> 0x20 & 0xff) + 0x9e3779b9 +
                    ((ulong)pppppppuVar55 & 0xff00) + uVar42 * 0x40 + (uVar42 >> 2) ^ uVar42);
    if (ppppppuVar35 != (uint ******)0x0) {
      uVar42 = (long)ppppppuVar35 - 1;
      if (((ulong)ppppppuVar35 & uVar42) == 0) {
        ppppppuVar29 = (uint ******)(uVar42 & (ulong)ppppppuVar41);
      }
      else {
        ppppppuVar29 = ppppppuVar41;
        if (ppppppuVar35 <= ppppppuVar41) {
          uVar36 = 0;
          if (ppppppuVar35 != (uint ******)0x0) {
            uVar36 = (ulong)ppppppuVar41 / (ulong)ppppppuVar35;
          }
          ppppppuVar29 = (uint ******)((long)ppppppuVar41 - uVar36 * (long)ppppppuVar35);
        }
      }
      pppppuVar37 = (*pppppppuVar54)[(long)ppppppuVar29];
      if (pppppuVar37 != (uint *****)0x0) {
        do {
          while( true ) {
            pppppuVar37 = (uint *****)*pppppuVar37;
            if (pppppuVar37 == (uint *****)0x0) goto LAB_10aad2368;
            ppppppuVar43 = (uint ******)pppppuVar37[1];
            if (ppppppuVar43 != ppppppuVar41) break;
            if ((*(uint *)(pppppuVar37 + 2) == uVar3 && *(uint *)((long)pppppuVar37 + 0x14) == uVar2
                ) && (*(int *)(pppppuVar37 + 3) == (int)pppppppuVar55 &&
                      *(int *)((long)pppppuVar37 + 0x1c) == (int)((ulong)pppppppuVar55 >> 0x20)))
            goto LAB_10aad24c4;
          }
          if (((ulong)ppppppuVar35 & uVar42) == 0) {
            ppppppuVar43 = (uint ******)((ulong)ppppppuVar43 & uVar42);
          }
          else if (ppppppuVar35 <= ppppppuVar43) {
            uVar36 = 0;
            if (ppppppuVar35 != (uint ******)0x0) {
              uVar36 = (ulong)ppppppuVar43 / (ulong)ppppppuVar35;
            }
            ppppppuVar43 = (uint ******)((long)ppppppuVar43 - uVar36 * (long)ppppppuVar35);
          }
        } while (ppppppuVar43 == ppppppuVar29);
      }
    }
LAB_10aad2368:
    pppppppuVar55 = (uint *******)0x30;
    __Znwm();
    pppppppuStack_130 = (uint *******)0x1;
    *pppppppuVar55 = (uint ******)0x0;
    pppppppuVar55[1] = ppppppuVar41;
    pppppppuVar55[3] = (uint ******)pppppppuStack_2a8;
    pppppppuVar55[2] = (uint ******)uStack_2b0;
    pppppppuVar55[4] = (uint ******)pppppppuVar51;
    pppppppuVar55[5] = (uint ******)pppppppuVar21;
    if (pppppppuVar21 != (uint *******)0x0) {
      pppppppuVar31 = pppppppuVar21 + 1;
      do {
        cVar8 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
        if (bVar15) {
          *pppppppuVar31 = (uint ******)((long)*pppppppuVar31 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    uStack_140 = (undefined **)pppppppuVar55;
    uStack_138 = pppppppuVar54;
    if ((ppppppuVar35 == (uint ******)0x0) ||
       (*(float *)(param_1 + 9) * (float)ppppppuVar35 < (float)((long)param_1[8] + 1))) {
      uVar42 = 1;
      if ((uint ******)0x2 < ppppppuVar35) {
        uVar42 = (ulong)(((ulong)ppppppuVar35 & (long)ppppppuVar35 - 1U) != 0);
      }
      uVar42 = uVar42 | (long)ppppppuVar35 << 1;
      uVar36 = (ulong)((float)((long)param_1[8] + 1) / *(float *)(param_1 + 9));
      if (uVar42 <= uVar36) {
        uVar42 = uVar36;
      }
      FUN_10aae69a0(pppppppuVar54,uVar42);
      ppppppuVar35 = param_1[6];
      if (((ulong)ppppppuVar35 & (long)ppppppuVar35 - 1U) == 0) {
        ppppppuVar29 = (uint ******)((long)ppppppuVar35 - 1U & (ulong)ppppppuVar41);
      }
      else {
        ppppppuVar29 = ppppppuVar41;
        if (ppppppuVar35 <= ppppppuVar41) {
          uVar42 = 0;
          if (ppppppuVar35 != (uint ******)0x0) {
            uVar42 = (ulong)ppppppuVar41 / (ulong)ppppppuVar35;
          }
          ppppppuVar29 = (uint ******)((long)ppppppuVar41 - uVar42 * (long)ppppppuVar35);
        }
      }
    }
    ppppppuVar43 = *pppppppuVar54;
    ppppppuVar41 = (uint ******)ppppppuVar43[(long)ppppppuVar29];
    if (ppppppuVar41 == (uint ******)0x0) {
      *pppppppuVar55 = *pppppppuVar28;
      *pppppppuVar28 = (uint ******)pppppppuVar55;
      ppppppuVar43[(long)ppppppuVar29] = (uint *****)pppppppuVar28;
      if (*pppppppuVar55 != (uint ******)0x0) {
        ppppppuVar41 = (uint ******)(*pppppppuVar55)[1];
        if (((ulong)ppppppuVar35 & (long)ppppppuVar35 - 1U) == 0) {
          ppppppuVar41 = (uint ******)((ulong)ppppppuVar41 & (long)ppppppuVar35 - 1U);
        }
        else if (ppppppuVar35 <= ppppppuVar41) {
          uVar42 = 0;
          if (ppppppuVar35 != (uint ******)0x0) {
            uVar42 = (ulong)ppppppuVar41 / (ulong)ppppppuVar35;
          }
          ppppppuVar41 = (uint ******)((long)ppppppuVar41 - uVar42 * (long)ppppppuVar35);
        }
        ppppppuVar41 = *pppppppuVar54 + (long)ppppppuVar41;
        goto LAB_10aad24b0;
      }
    }
    else {
      *pppppppuVar55 = (uint ******)*ppppppuVar41;
LAB_10aad24b0:
      *ppppppuVar41 = (uint *****)pppppppuVar55;
    }
    param_1[8] = (uint ******)((long)param_1[8] + 1);
LAB_10aad24c4:
    pppppppuVar55 = pppppppuVar21;
    if (pppppppuVar51 == (uint *******)0x0) {
      lVar24 = 0x240;
      puVar47 = (undefined8 *)&UNK_110bac0c0;
      puVar19 = puVar47;
      while (*(uint *)(puVar19 + -2) != uVar3) {
        puVar19 = puVar19 + 3;
        lVar24 = lVar24 + -0x18;
        if (lVar24 == 0) goto LAB_10aad2994;
      }
      if (lVar24 == 0) {
LAB_10aad2994:
        FUN_10a26f290(&UNK_10f61d92d);
        goto LAB_10aad2b50;
      }
      lVar24 = 0x240;
      while (*(uint *)(puVar47 + -2) != uVar2) {
        puVar47 = puVar47 + 3;
        lVar24 = lVar24 + -0x18;
        if (lVar24 == 0) goto LAB_10aad2994;
      }
      if (lVar24 == 0) goto LAB_10aad2994;
      FUN_10ae03140(0,puVar19[-1],*puVar19);
      FUN_10ae03140();
      ppuVar23 = &PTR_PTR_113306328;
      FUN_10ae079a0();
      FUN_10ae0314c();
      FUN_10ae0314c();
      FUN_10ae07cd4(ppuVar23,&PTR_PTR_113306328);
    }
  }
  else {
    pppppppuVar21 = (uint *******)pppppppuVar51[5];
    pppppppuVar55 = SUB168(*(undefined1 (*) [16])(pppppppuVar51 + 4),8);
    pppppppuVar51 = SUB168(*(undefined1 (*) [16])(pppppppuVar51 + 4),0);
    if (pppppppuVar21 != (uint *******)0x0) {
      pppppppuVar31 = pppppppuVar21 + 1;
      do {
        cVar8 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
        if (bVar15) {
          *pppppppuVar31 = (uint ******)((long)*pppppppuVar31 + 1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
  }
  pppppppuStack_2f8 = pppppppuVar55;
  pppppppuStack_300 = pppppppuVar51;
  if (pppppppuStack_300 == (uint *******)0x0) goto LAB_10aad2938;
  (*(code *)**pppppppuStack_300)
            (&uStack_240,pppppppuStack_300,ppppppuVar48,auStack_2c8,&pppppppuStack_198);
  pppppppuVar55 = pppppppuStack_198;
  pppppppuVar21 = (uint *******)0xa8;
  __Znwm();
  pppppppuVar31 = pppppppuVar21 + 1;
  *pppppppuVar31 = (uint ******)0x0;
  pppppppuVar21[2] = (uint ******)0x0;
  *pppppppuVar21 = (uint ******)&PTR_FUN_110baa4d8;
  pppppppuVar51 = pppppppuVar21 + 3;
  FUN_10a1b2a84(pppppppuVar51,pppppppuVar55,uVar2,0);
  pppppppuVar55 = pppppppuVar51;
  ppppppuVar48 = (uint ******)uStack_240;
  uStack_2b0 = pppppppuVar51;
  pppppppuStack_2a8 = pppppppuVar21;
  func_0x00010a1b30c0();
  do {
    cVar8 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
    if (bVar15) {
      *pppppppuVar31 = (uint ******)((long)*pppppppuVar31 + 1);
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pppppppuStack_180 = pppppppuVar51;
  pppppppuStack_178 = pppppppuVar21;
  if (puStack_310 < puStack_308) {
    *puStack_310 = pppppppuVar51;
    puStack_310[1] = pppppppuVar21;
    puVar47 = puStack_310 + 2;
  }
  else {
    lVar24 = (long)puStack_310 - (long)pppppppuStack_318;
    uVar42 = (lVar24 >> 4) + 1;
    if (uVar42 >> 0x3c != 0) {
      FUN_10aadc210();
      goto LAB_10aad2b50;
    }
    uVar36 = (long)puStack_308 - (long)pppppppuStack_318 >> 3;
    if (uVar36 <= uVar42) {
      uVar36 = uVar42;
    }
    if (0x7fffffffffffffef < (ulong)((long)puStack_308 - (long)pppppppuStack_318)) {
      uVar36 = 0xfffffffffffffff;
    }
    pppppppuStack_120 = (uint *******)&pppppppuStack_318;
    FUN_10aadc224();
    puVar19 = (undefined8 *)(uVar36 + lVar24);
    *puVar19 = pppppppuVar51;
    puVar19[1] = pppppppuVar21;
    puVar47 = puVar19 + 2;
    pppppppuVar51 = (uint *******)((long)puVar19 - ((long)puStack_310 - (long)pppppppuStack_318));
    _memcpy(pppppppuVar51);
    pppppppuStack_130 = pppppppuStack_318;
    uStack_128 = puStack_308;
    uStack_138 = pppppppuStack_318;
    uStack_140 = (undefined **)pppppppuStack_318;
    pppppppuVar55 = (uint *******)&uStack_140;
    pppppppuStack_318 = pppppppuVar51;
    puStack_310 = puVar47;
    puStack_308 = (undefined8 *)(uVar36 + (long)ppppppuVar48 * 0x10);
    func_0x00010aadc258();
  }
  puStack_310 = puVar47;
  func_0x00010aad09b8();
  pppppppuVar52 = (uint *******)param_5[1];
  pppppppuVar51 = pppppppuVar17;
  if (pppppppuVar52 != (uint *******)0x0) {
    uVar42 = (long)pppppppuVar52 - 1;
    if (((ulong)pppppppuVar52 & uVar42) == 0) {
      pppppppuVar51 = (uint *******)(uVar42 & (ulong)pppppppuVar55);
    }
    else {
      pppppppuVar51 = pppppppuVar55;
      if (pppppppuVar52 <= pppppppuVar55) {
        uVar36 = 0;
        if (pppppppuVar52 != (uint *******)0x0) {
          uVar36 = (ulong)pppppppuVar55 / (ulong)pppppppuVar52;
        }
        pppppppuVar51 = (uint *******)((long)pppppppuVar55 - uVar36 * (long)pppppppuVar52);
      }
    }
    if ((*param_5)[(long)pppppppuVar51] != (uint *****)0x0) {
      for (ppppuVar50 = *(*param_5)[(long)pppppppuVar51]; ppppuVar50 != (uint ****)0x0;
          ppppuVar50 = (uint ****)*ppppuVar50) {
        pppppppuVar32 = (uint *******)ppppuVar50[1];
        if (pppppppuVar32 == pppppppuVar55) {
          ppppuVar22 = ppppuVar50 + 2;
          FUN_10a22c6f0(ppppuVar22,pppppppuVar17);
          if ((int)ppppuVar22 != 0) goto LAB_10aad27f4;
        }
        else {
          if (((ulong)pppppppuVar52 & uVar42) == 0) {
            pppppppuVar32 = (uint *******)((ulong)pppppppuVar32 & uVar42);
          }
          else if (pppppppuVar52 <= pppppppuVar32) {
            uVar36 = 0;
            if (pppppppuVar52 != (uint *******)0x0) {
              uVar36 = (ulong)pppppppuVar32 / (ulong)pppppppuVar52;
            }
            pppppppuVar32 = (uint *******)((long)pppppppuVar32 - uVar36 * (long)pppppppuVar52);
          }
          if (pppppppuVar32 != pppppppuVar51) break;
        }
      }
    }
  }
  pppppppuVar32 = (uint *******)0x88;
  __Znwm();
  pppppppuVar31 = uStack_2b0;
  pppppppuStack_130 = (uint *******)0x1;
  *pppppppuVar32 = (uint ******)0x0;
  pppppppuVar32[1] = (uint ******)pppppppuVar55;
  ppppppuVar35 = *pppppppuVar17;
  ppppppuVar29 = pppppppuVar17[3];
  ppppppuVar48 = pppppppuVar17[2];
  pppppppuVar32[3] = pppppppuVar17[1];
  pppppppuVar32[2] = ppppppuVar35;
  pppppppuVar32[5] = ppppppuVar29;
  pppppppuVar32[4] = ppppppuVar48;
  ppppppuVar35 = pppppppuVar17[4];
  ppppppuVar41 = pppppppuVar17[5];
  ppppppuVar29 = pppppppuVar17[7];
  ppppppuVar48 = pppppppuVar17[6];
  ppppppuVar43 = pppppppuVar17[8];
  ppppppuVar61 = pppppppuVar17[0xb];
  ppppppuVar44 = pppppppuVar17[10];
  pppppppuVar32[0xb] = pppppppuVar17[9];
  pppppppuVar32[10] = ppppppuVar43;
  pppppppuVar32[0xd] = ppppppuVar61;
  pppppppuVar32[0xc] = ppppppuVar44;
  pppppppuVar32[7] = ppppppuVar41;
  pppppppuVar32[6] = ppppppuVar35;
  pppppppuVar32[9] = ppppppuVar29;
  pppppppuVar32[8] = ppppppuVar48;
  uStack_2b0 = (uint *******)0x0;
  pppppppuStack_2a8 = (uint *******)0x0;
  pppppppuVar32[0xe] = (uint ******)pppppppuVar31;
  pppppppuVar32[0xf] = (uint ******)pppppppuVar21;
  pppppppuVar32[0x10] = (uint ******)pppppppuVar39;
  uStack_140 = (undefined **)pppppppuVar32;
  if ((pppppppuVar52 == (uint *******)0x0) ||
     (uStack_138 = param_5,
     *(float *)(param_5 + 4) * (float)pppppppuVar52 < (float)((long)param_5[3] + 1))) {
    if (pppppppuVar52 < (uint *******)0x3) {
      uVar42 = 1;
    }
    else {
      uVar42 = (ulong)(((ulong)pppppppuVar52 & (long)pppppppuVar52 - 1U) != 0);
    }
    uVar42 = uVar42 | (long)pppppppuVar52 << 1;
    uVar36 = (ulong)((float)((long)param_5[3] + 1) / *(float *)(param_5 + 4));
    if (uVar42 <= uVar36) {
      uVar42 = uVar36;
    }
    uStack_138 = param_5;
    FUN_10a503210(param_5,uVar42);
    pppppppuVar52 = (uint *******)param_5[1];
    if (((ulong)pppppppuVar52 & (long)pppppppuVar52 - 1U) == 0) {
      pppppppuVar51 = (uint *******)((long)pppppppuVar52 - 1U & (ulong)pppppppuVar55);
    }
    else {
      pppppppuVar51 = pppppppuVar55;
      if (pppppppuVar52 <= pppppppuVar55) {
        uVar42 = 0;
        if (pppppppuVar52 != (uint *******)0x0) {
          uVar42 = (ulong)pppppppuVar55 / (ulong)pppppppuVar52;
        }
        pppppppuVar51 = (uint *******)((long)pppppppuVar55 - uVar42 * (long)pppppppuVar52);
      }
    }
  }
  ppppppuVar29 = *param_5;
  ppppppuVar48 = (uint ******)ppppppuVar29[(long)pppppppuVar51];
  if (ppppppuVar48 == (uint ******)0x0) {
    *pppppppuVar32 = *pppppppuVar27;
    *pppppppuVar27 = (uint ******)pppppppuVar32;
    ppppppuVar29[(long)pppppppuVar51] = (uint *****)pppppppuVar27;
    if (*pppppppuVar32 != (uint ******)0x0) {
      pppppppuVar51 = (uint *******)(*pppppppuVar32)[1];
      if (((ulong)pppppppuVar52 & (long)pppppppuVar52 - 1U) == 0) {
        pppppppuVar51 = (uint *******)((ulong)pppppppuVar51 & (long)pppppppuVar52 - 1U);
      }
      else if (pppppppuVar52 <= pppppppuVar51) {
        uVar42 = 0;
        if (pppppppuVar52 != (uint *******)0x0) {
          uVar42 = (ulong)pppppppuVar51 / (ulong)pppppppuVar52;
        }
        pppppppuVar51 = (uint *******)((long)pppppppuVar51 - uVar42 * (long)pppppppuVar52);
      }
      ppppppuVar48 = *param_5 + (long)pppppppuVar51;
      goto LAB_10aad28ec;
    }
  }
  else {
    *pppppppuVar32 = (uint ******)*ppppppuVar48;
LAB_10aad28ec:
    *ppppppuVar48 = (uint *****)pppppppuVar32;
  }
  param_5[3] = (uint ******)((long)param_5[3] + 1);
LAB_10aad28fc:
  plVar18 = uStack_238;
  pppppppuVar21 = pppppppuStack_2f8;
  if (uStack_238 != (long *)0x0) {
    plVar56 = uStack_238 + 1;
    do {
      lVar24 = *plVar56;
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar56,0x10);
      if (bVar15) {
        *plVar56 = lVar24 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar24 == 0) {
      (**(code **)(*uStack_238 + 0x10))(uStack_238);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
      pppppppuVar21 = pppppppuStack_2f8;
    }
  }
LAB_10aad2938:
  if (pppppppuVar21 != (uint *******)0x0) {
    pppppppuVar51 = pppppppuVar21 + 1;
    do {
      ppppppuVar48 = *pppppppuVar51;
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar51,0x10);
      if (bVar15) {
        *pppppppuVar51 = (uint ******)((long)ppppppuVar48 + -1);
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_10aad2958:
    if (ppppppuVar48 == (uint ******)0x0) {
      (*(code *)(*pppppppuVar21)[2])(pppppppuVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
    }
  }
LAB_10aad2974:
  pppppppuVar17 = pppppppuVar17 + 0xc;
  if (pppppppuVar17 == pppppppuVar46) goto LAB_10aad10cc;
  goto LAB_10aad12b0;
LAB_10aad27f4:
  do {
    ppppppuVar48 = *pppppppuVar31;
    cVar8 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
    if (bVar15) {
      *pppppppuVar31 = (uint ******)((long)ppppppuVar48 + -1);
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (ppppppuVar48 == (uint ******)0x0) {
    (*(code *)(*pppppppuVar21)[2])(pppppppuVar21);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar21);
  }
  goto LAB_10aad28fc;
}



/* Entry: 10aad2c1c; end: 10aad2dcb;  */

undefined8 * FUN_10aad2c1c(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  if (plVar7[3] != 0) {
    func_0x00010aae6bb4(plVar7,plVar7[2]);
    plVar7[2] = 0;
    lVar3 = plVar7[1];
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*plVar7 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    plVar7[3] = 0;
  }
  lVar4 = plVar7[5];
  plVar7[5] = 0;
  lVar3 = *plVar7;
  *plVar7 = lVar4;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = plVar7[7];
  plVar7[2] = lVar3;
  uVar5 = plVar7[6];
  plVar7[1] = uVar5;
  plVar7[6] = 0;
  plVar7[3] = plVar7[8];
  *(int *)(plVar7 + 4) = (int)plVar7[9];
  if (plVar7[8] != 0) {
    uVar6 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar1 * uVar5;
    }
    *(long **)(*plVar7 + uVar6 * 8) = plVar7 + 2;
    plVar7[7] = 0;
    plVar7[8] = 0;
  }
  if (plVar7[0xd] != 0) {
    plVar2 = (long *)plVar7[0xc];
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      __ZdlPv();
    }
    plVar7[0xc] = 0;
    lVar3 = plVar7[0xb];
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(plVar7[10] + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    plVar7[0xd] = 0;
  }
  lVar4 = plVar7[0xf];
  plVar7[0xf] = 0;
  lVar3 = plVar7[10];
  plVar7[10] = lVar4;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  lVar3 = plVar7[0x11];
  plVar7[0xc] = lVar3;
  uVar5 = plVar7[0x10];
  plVar7[0xb] = uVar5;
  plVar7[0x10] = 0;
  plVar7[0xd] = plVar7[0x12];
  *(int *)(plVar7 + 0xe) = (int)plVar7[0x13];
  if (plVar7[0x12] != 0) {
    uVar6 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar6 = uVar6 & uVar5 - 1;
    }
    else if (uVar5 <= uVar6) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar6 / uVar5;
      }
      uVar6 = uVar6 - uVar1 * uVar5;
    }
    *(long **)(plVar7[10] + uVar6 * 8) = plVar7 + 0xc;
    plVar7[0x11] = 0;
    plVar7[0x12] = 0;
  }
  func_0x00010aae6bf0(plVar7 + 0x14);
  return param_1;
}



/* Entry: 10aad2dcc; end: 10aad2e1b;  */

long FUN_10aad2dcc(long param_1)

{
  FUN_10a522e28(param_1 + 8);
  return param_1;
}



/* Entry: 10aad2e1c; end: 10aad301b;  */

void FUN_10aad2e1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lStack_e0;
  ushort uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined1 auStack_78 [40];
  
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 6) = 0x3f800000;
  FUN_10a236e48(param_4 + 0x58,puVar2);
  puVar7 = *(undefined4 **)(param_4 + 0x58);
  *puVar7 = *(undefined4 *)(*(long *)(param_4 + 0x218) + 0xa0);
  *(long *)(puVar7 + 2) = (long)(*(double *)(param_4 + 0x20) * 1000000000.0);
  FUN_10aae5918(auStack_78,param_1 + 8);
  if ((*(byte *)(param_5 + 0x48) & 1) != 0) {
    FUN_10aad06e0(auStack_a0,param_5 + 0x20,**(undefined4 **)(param_4 + 0x58));
    plVar8 = (long *)lStack_90;
    do {
      if (plVar8 == (long *)0x0) {
        func_0x00010a22c9fc(auStack_a0);
        FUN_10a522e28(auStack_78);
        return;
      }
      puVar7 = (undefined4 *)(plVar8 + 2);
      puVar3 = auStack_78;
      FUN_10aae5984(puVar3,*puVar7,puVar7);
      lVar4 = param_4 + 0x30;
      FUN_10a236708(lVar4,puVar7);
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(param_4 + 0x218);
        FUN_10a22b608(uVar5,*puVar7);
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0x3f800000;
        FUN_10aad0b9c(*(undefined8 *)(puVar3 + 0x18),plVar8 + 3,*(undefined8 *)(lVar4 + 0x38),uVar5,
                      &uStack_d0);
        FUN_10aade024(*(long *)(param_4 + 0x58) + 0x10,*puVar7,*puVar7,&uStack_d0);
        FUN_10aae5df0(&lStack_e0,auStack_78,*puVar7);
        lVar4 = lStack_e0;
        if (lStack_e0 != 0) {
          uVar6 = param_1 + 8;
          FUN_10aae6000(uVar6,lStack_e0);
          if ((uVar6 & 1) == 0) {
            if ((uStack_d8 >> 8 & 1) == 0) break;
            FUN_10aae5db8(1,lVar4);
          }
          else {
            uStack_d8 = uStack_d8 & 0xff;
          }
        }
        func_0x00010a236ef8(&uStack_d0);
      }
      plVar8 = (long *)*plVar8;
    } while( true );
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aad2fe8);
  (*pcVar1)();
}



/* Entry: 10aad301c; end: 10aad30c3;  */

void FUN_10aad301c(undefined8 *param_1,int *param_2,int *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  int iStack_24;
  
  if (param_2 != (int *)0x0) {
    iStack_24 = *param_3;
    if (iStack_24 == 0x7fffffff) {
      iStack_24 = *param_2;
    }
    param_2 = param_2 + 4;
    FUN_10aae6d20(param_2,&iStack_24);
    if (param_2 != (int *)0x0) {
      param_2 = param_2 + 6;
      FUN_10aae6dc0(param_2,param_3 + 1);
      if (param_2 != (int *)0x0) {
        lVar5 = *(long *)(param_2 + 0x1e);
        uVar6 = *(undefined8 *)(param_2 + 0x1c);
        param_1[1] = *(undefined8 *)(param_2 + 0x1e);
        *param_1 = uVar6;
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
        param_1[2] = *(undefined8 *)(param_2 + 0x20);
        uVar4 = 1;
        goto LAB_10aad30b0;
      }
    }
  }
  uVar4 = 0;
  *(undefined1 *)param_1 = 0;
LAB_10aad30b0:
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}



/* Entry: 10aad30c4; end: 10aad32df;  */

byte FUN_10aad30c4(int *param_1,int *param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  
  if (*(byte *)(param_1 + 9) != *(byte *)(param_2 + 9)) {
    return *(byte *)(param_2 + 9) & (*(byte *)(param_1 + 9) ^ 0xff);
  }
  piVar6 = param_1 + 1;
  piVar7 = param_2 + 1;
  if (param_2[2] * *piVar7 < param_1[2] * *piVar6) {
    return true;
  }
  if (param_1[2] * *piVar6 < param_2[2] * *piVar7) {
    return false;
  }
  bVar3 = true;
  do {
    bVar2 = bVar3;
    lVar1 = 0;
    if (!bVar2) {
      lVar1 = 4;
    }
    if (*(int *)((long)piVar6 + lVar1) != *(int *)((long)piVar7 + lVar1)) {
      if (*(int *)((long)piVar7 + lVar1) <= *(int *)((long)piVar6 + lVar1)) {
        return true;
      }
      break;
    }
    bVar3 = false;
  } while (bVar2);
  bVar3 = true;
  do {
    bVar2 = bVar3;
    lVar1 = 0;
    if (!bVar2) {
      lVar1 = 4;
    }
    if (*(int *)((long)piVar6 + lVar1) != *(int *)((long)piVar7 + lVar1)) {
      if (*(int *)((long)piVar6 + lVar1) < *(int *)((long)piVar7 + lVar1)) {
        return false;
      }
      break;
    }
    bVar3 = false;
  } while (bVar2);
  uVar8 = 0;
  piVar6 = (int *)&UNK_10e4f3618;
  while( true ) {
    for (; piVar7 = (int *)(&UNK_10e4f35d0 + uVar8 * 8), *piVar7 < *param_1; uVar8 = uVar8 * 2 + 2)
    {
      piVar7 = piVar6;
      if (3 < uVar8) goto LAB_10aad31d8;
    }
    if (3 < uVar8) break;
    uVar8 = uVar8 << 1 | 1;
    piVar6 = piVar7;
  }
LAB_10aad31d8:
  if ((piVar7 == (int *)&UNK_10e4f3618) || (*param_1 < *piVar7 || piVar7 == (int *)&UNK_10e4f3618))
  {
    iVar5 = -1;
  }
  else {
    iVar5 = piVar7[1];
  }
  uVar8 = 0;
  piVar6 = (int *)&UNK_10e4f3618;
  while( true ) {
    for (; piVar7 = (int *)(&UNK_10e4f35d0 + uVar8 * 8), *piVar7 < *param_2; uVar8 = uVar8 * 2 + 2)
    {
      piVar7 = piVar6;
      if (3 < uVar8) goto LAB_10aad324c;
    }
    if (3 < uVar8) break;
    uVar8 = uVar8 << 1 | 1;
    piVar6 = piVar7;
  }
LAB_10aad324c:
  if ((piVar7 == (int *)&UNK_10e4f3618) || (*param_2 < *piVar7 || piVar7 == (int *)&UNK_10e4f3618))
  {
    iVar4 = -1;
  }
  else {
    iVar4 = piVar7[1];
  }
  return iVar5 < iVar4;
}



/* Entry: 10aad32e0; end: 10aad332b;  */

void FUN_10aad32e0(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  lStack_28 = param_2;
  FUN_10aae6e98(param_1,param_2,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22c4c8(param_1 + 0x18,param_2 + 4,param_2 + 4);
  return;
}



/* Entry: 10aad332c; end: 10aad33b3;  */

void FUN_10aad332c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uStack_94;
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
  undefined8 uStack_38;
  
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    for (plVar2 = (long *)plVar1[5]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      uStack_94 = *(undefined4 *)(plVar1 + 2);
      uStack_88 = plVar2[3];
      uStack_90 = plVar2[2];
      uStack_78 = plVar2[5];
      uStack_80 = plVar2[4];
      uStack_48 = plVar2[0xb];
      uStack_50 = plVar2[10];
      uStack_38 = plVar2[0xd];
      uStack_40 = plVar2[0xc];
      uStack_68 = plVar2[7];
      uStack_70 = plVar2[6];
      uStack_58 = plVar2[9];
      uStack_60 = plVar2[8];
      FUN_10aad32e0(param_1,&uStack_94);
    }
  }
  return;
}



/* Entry: 10aad33b4; end: 10aad3517;  */

undefined8 * FUN_10aad33b4(undefined8 param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c1;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = (code *)0x17fffffff;
  ppuStack_70 = (undefined **)0x10000000100;
  uStack_68 = CONCAT35(uStack_68._5_3_,2);
  uStack_60 = 0;
  uStack_5c = 0;
  plVar1 = &lStack_98;
  lStack_98 = param_2;
  func_0x0001098ac018(plVar1,&UNK_10e4a7ac1,0x23,&uStack_78,0,1);
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)plVar1);
  FUN_10a26ebc0(&puStack_90,0,&uStack_78,(long)&uStack_78 + 4,1);
  uStack_78 = FUN_10aade290;
  ppuStack_70 = &PTR_FUN_110c43e10;
  param_2 = param_2 + 0x18;
  uStack_68 = param_1;
  FUN_10a517480(param_2,&uStack_78,&puStack_90);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  puVar2 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
  }
  *param_3 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (puStack_90 != (undefined8 *)0x0) {
    puStack_88 = puStack_90;
    __ZdlPv();
  }
  puVar3 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_10aad3518;
  uStack_e8 = 0x100;
  uStack_e4 = 0x100;
  uStack_ec = 0x100;
  lStack_c0 = param_2;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10aae70cc(&uStack_e0,&uStack_c1,&uStack_e4,&uStack_e8,&uStack_ec);
  puVar3[1] = uStack_d8;
  *puVar3 = uStack_e0;
  return puVar3;
}



/* Entry: 10aad3518; end: 10aad356b;  */

undefined8 * FUN_10aad3518(undefined8 *param_1)

{
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  
  uStack_48 = 0x100;
  uStack_44 = 0x100;
  uStack_4c = 0x100;
  FUN_10aae70cc(&uStack_40,&uStack_21,&uStack_44,&uStack_48,&uStack_4c);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  return param_1;
}



/* Entry: 10aad356c; end: 10aad37e7;  */

void FUN_10aad356c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,param_3,&uStack_40);
  plVar6 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
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
  *param_1 = plVar6;
  func_0x0001074287b0();
  func_0x0001074287b0(plVar6 + 3,*(undefined4 *)(*param_2 + 8));
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 8) == 0) {
    *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(lVar9 + 0x54);
    uVar8 = 0;
LAB_10aad36f0:
    bVar4 = false;
    dVar18 = 0.0;
  }
  else {
    uVar13 = 0;
    lVar2 = *(long *)(lVar9 + 0x18);
    uVar12 = *(long *)(lVar9 + 0x20) - lVar2 >> 4;
    lVar14 = 0xc;
    do {
      if ((uVar12 == uVar13) || ((ulong)(plVar6[1] - *plVar6 >> 2) <= uVar13)) goto LAB_10aad37b8;
      *(undefined4 *)(*plVar6 + uVar13 * 4) = *(undefined4 *)(lVar2 + lVar14);
      if (((ulong)(*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 4) <= uVar13) ||
         ((ulong)(plVar6[4] - plVar6[3] >> 2) <= uVar13)) goto LAB_10aad37b8;
      *(undefined4 *)(plVar6[3] + uVar13 * 4) = *(undefined4 *)(*(long *)(lVar9 + 0x30) + lVar14);
      uVar13 = uVar13 + 1;
      uVar8 = *(uint *)(lVar9 + 8);
      lVar14 = lVar14 + 0x10;
    } while (uVar13 < uVar8);
    *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(lVar9 + 0x54);
    if (uVar8 < 2) goto LAB_10aad36f0;
    uVar13 = 0;
    if (uVar12 != 0) {
      uVar13 = uVar12 - 1;
    }
    if (uVar13 <= uVar8 - 2) goto LAB_10aad37b8;
    uVar10 = 0;
    uVar13 = 1;
    piVar11 = (int *)(lVar2 + 0x1c);
    do {
      uVar10 = uVar10 + *piVar11 * (int)uVar13;
      uVar13 = uVar13 + 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != uVar13);
    dVar18 = (double)uVar10;
    bVar4 = true;
  }
  dVar17 = (double)(uint)(*(int *)(lVar9 + 0x10) * *(int *)(lVar9 + 0xc));
  uVar10 = (uint)(dVar18 / dVar17);
  *(uint *)((long)plVar6 + 0x34) = uVar10;
  dVar18 = 0.0;
  if (bVar4) {
    lVar14 = *(long *)(lVar9 + 0x20) - *(long *)(lVar9 + 0x18) >> 4;
    uVar13 = 0;
    if (lVar14 != 0) {
      uVar13 = lVar14 - 1;
    }
    if (uVar13 <= uVar8 - 2) {
LAB_10aad37b8:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10aad37bc);
      (*pcVar5)();
    }
    uVar7 = 0;
    uVar13 = 1;
    piVar11 = (int *)(*(long *)(lVar9 + 0x18) + 0x1c);
    do {
      uVar7 = uVar7 + (int)uVar13 * (int)uVar13 * *piVar11;
      uVar13 = uVar13 + 1;
      piVar11 = piVar11 + 4;
    } while (uVar8 != uVar13);
    dVar18 = (double)uVar7;
  }
  *(int *)(plVar6 + 7) = (int)SQRT(dVar18 / dVar17);
  fVar15 = (float)uVar10 / 255.0;
  fVar16 = 0.7;
  if (fVar15 <= 0.7) {
    fVar16 = fVar15;
  }
  *(float *)((long)plVar6 + 0x3c) = fVar16 / 0.7 + 0.05;
  return;
}



/* Entry: 10aad37e8; end: 10aad3887;  */

undefined8 *
FUN_10aad37e8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110c43558;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  FUN_10aade35c(param_1 + 3,param_2);
  FUN_10aade35c(param_1 + 6,param_2);
  lVar1 = param_1[3];
  if (lVar1 != param_1[4]) {
    _bzero(lVar1,param_1[4] - lVar1 & 0xfffffffffffffff0);
  }
  lVar1 = param_1[6];
  if (lVar1 != param_1[7]) {
    _bzero(lVar1,param_1[7] - lVar1 & 0xfffffffffffffff0);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



/* Entry: 10aad3888; end: 10aad3b3f;  */

undefined8 * FUN_10aad3888(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c43558;
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad3b40; end: 10aad3bd7;  */

byte FUN_10aad3b40(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x101) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10aad3bd8; end: 10aad3d33;  */

undefined8 * FUN_10aad3bd8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_110c42db0;
  param_1[3] = &PTR_FUN_110c42e78;
  FUN_10a235538(param_1 + 0x4d);
  FUN_10a15206c(param_1 + 0x4b);
  if (*(char *)((long)param_1 + 599) < '\0') {
    __ZdlPv(param_1[0x48]);
  }
  FUN_10aae0e4c(param_1 + 0x46);
  FUN_10aae0df0(param_1 + 0x41);
  plVar4 = (long *)param_1[0x40];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110c42cc0;
  param_1[3] = &PTR_FUN_110c42d88;
  FUN_10aab82e4(param_1,1);
  FUN_10aabb088(param_1 + 4,0);
  func_0x00010a136de4(param_1 + 0x3c);
  func_0x00010a1bb0e8(param_1 + 0x39);
  func_0x000109d18f34(param_1 + 0x22);
  lVar5 = param_1[0x21];
  param_1[0x21] = 0;
  if (lVar5 != 0) {
    func_0x00010a237b14(param_1 + 0x21);
  }
  plVar4 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x000109d18f34(param_1 + 8);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  FUN_10aabb088(param_1 + 4,0);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aad3d34; end: 10aad3d3b;  */

undefined8 FUN_10aad3d34(void)

{
  return 0;
}



/* Entry: 10aad3d3c; end: 10aad3e9f;  */

undefined8 * FUN_10aad3d3c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  puVar7 = param_1 + -3;
  *puVar7 = &PTR_FUN_110c42db0;
  *param_1 = &PTR_FUN_110c42e78;
  FUN_10a235538(param_1 + 0x4a);
  FUN_10a15206c(param_1 + 0x48);
  if (*(char *)((long)param_1 + 0x23f) < '\0') {
    __ZdlPv(param_1[0x45]);
  }
  FUN_10aae0e4c(param_1 + 0x43);
  FUN_10aae0df0(param_1 + 0x3e);
  plVar4 = (long *)param_1[0x3d];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  *puVar7 = &PTR_FUN_110c42cc0;
  *param_1 = &PTR_FUN_110c42d88;
  FUN_10aab82e4(puVar7,1);
  FUN_10aabb088(param_1 + 1,0);
  func_0x00010a136de4(param_1 + 0x39);
  func_0x00010a1bb0e8(param_1 + 0x36);
  func_0x000109d18f34(param_1 + 0x1f);
  lVar5 = param_1[0x1e];
  param_1[0x1e] = 0;
  if (lVar5 != 0) {
    func_0x00010a237b14(param_1 + 0x1e);
  }
  plVar4 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x000109d18f34(param_1 + 5);
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  FUN_10aabb088(param_1 + 1,0);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar7;
}



/* Entry: 10aad3ea0; end: 10aad3ea3;  */

undefined8 * FUN_10aad3ea0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_110c42ea0;
  FUN_10aade53c(param_1 + 0x2a);
  func_0x00010a23495c(param_1 + 0x28);
  FUN_10a235538(param_1 + 0x26);
  func_0x00010aae1558(param_1 + 0x22);
  func_0x00010aadf46c(param_1 + 0x20);
  plVar4 = (long *)param_1[0x1f];
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
  func_0x00010aadf46c(param_1 + 0x1d);
  plVar4 = (long *)param_1[0x1c];
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
  func_0x000109d18f34(param_1 + 5);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10aad3ea4; end: 10aad3eb7;  */

void FUN_10aad3ea4(void)

{
  FUN_10aade400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aad3eb8; end: 10aad3eeb;  */

undefined8 * FUN_10aad3eb8(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
  return param_1;
}



/* Entry: 10aad3eec; end: 10aad3f1f;  */

void FUN_10aad3eec(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_110b01d60;
  func_0x000107c2acd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10aad3f20; end: 10aad3f23;  */

undefined8 * FUN_10aad3f20(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c43558;
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad3f24; end: 10aad3f37;  */

void FUN_10aad3f24(void)

{
  FUN_10aad3888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aad3f38; end: 10aad418f;  */

long * FUN_10aad3f38(long *param_1,long *param_2,long *param_3,undefined8 *param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  
  plVar4 = param_2;
  if (0 < param_5) {
    puVar6 = (undefined8 *)param_1[1];
    if ((param_1[2] - (long)puVar6 >> 2) * -0x5555555555555555 < param_5) {
      lVar12 = *param_1;
      uVar5 = param_5 + ((long)puVar6 - lVar12 >> 2) * -0x5555555555555555;
      if (0x1555555555555555 < uVar5) {
        FUN_10a051b10();
        plVar4 = (long *)&DAT_10f62a4d8;
        FUN_109ffde64();
        lVar12 = plVar4[1];
        lVar7 = plVar4[2];
        while (lVar7 != lVar12) {
          puVar6 = *(undefined8 **)(lVar7 + -0x40);
          plVar4[2] = (long)(lVar7 + -0x40);
          (*(code *)*puVar6)();
          lVar7 = plVar4[2];
        }
        if (*plVar4 != 0) {
          __ZdlPv();
        }
        return plVar4;
      }
      lVar7 = param_1[2] - lVar12 >> 2;
      uVar11 = lVar7 * 0x5555555555555556;
      if (uVar11 < uVar5 || uVar11 - uVar5 == 0) {
        uVar11 = uVar5;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar11 = 0x1555555555555555;
      }
      if (uVar11 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = param_1;
        FUN_10a051b24();
      }
      plVar4 = (long *)((long)plVar2 + ((long)param_2 - lVar12));
      lVar12 = (long)plVar4 + param_5 * 0xc;
      param_5 = param_5 * 0xc;
      plVar9 = plVar4;
      do {
        lVar7 = *param_3;
        *(int *)(plVar9 + 1) = (int)param_3[1];
        *plVar9 = lVar7;
        param_3 = (long *)((long)param_3 + 0xc);
        param_5 = param_5 + -0xc;
        plVar9 = (long *)((long)plVar9 + 0xc);
      } while (param_5 != 0);
      _memcpy(lVar12,param_2,param_1[1] - (long)param_2);
      lVar7 = param_1[1];
      param_1[1] = (long)param_2;
      lVar15 = (long)plVar4 - ((long)param_2 - *param_1);
      _memcpy(lVar15);
      lVar3 = *param_1;
      *param_1 = lVar15;
      param_1[1] = lVar12 + (lVar7 - (long)param_2);
      param_1[2] = (long)plVar2 + uVar11 * 0xc;
      if (lVar3 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar12 = (long)puVar6 - (long)param_2;
      if ((lVar12 >> 2) * -0x5555555555555555 < param_5) {
        puVar8 = puVar6;
        puVar10 = puVar6;
        for (puVar14 = (undefined8 *)(lVar12 + (long)param_3); puVar14 != param_4;
            puVar14 = (undefined8 *)((long)puVar14 + 0xc)) {
          uVar13 = *puVar14;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
          *puVar10 = uVar13;
          puVar8 = (undefined8 *)((long)puVar8 + 0xc);
          puVar10 = (undefined8 *)((long)puVar10 + 0xc);
        }
        param_1[1] = (long)puVar8;
        if (lVar12 < 1) {
          return param_2;
        }
        puVar1 = (undefined8 *)((long)param_2 + param_5 * 0xc);
        puVar14 = (undefined8 *)((long)puVar8 + param_5 * -0xc);
        for (; puVar14 < puVar6; puVar14 = (undefined8 *)((long)puVar14 + 0xc)) {
          uVar13 = *puVar14;
          *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar14 + 1);
          *puVar8 = uVar13;
          puVar8 = (undefined8 *)((long)puVar8 + 0xc);
        }
        param_1[1] = (long)puVar8;
        if (puVar10 != puVar1) {
          _memmove(puVar1,param_2);
        }
      }
      else {
        puVar8 = (undefined8 *)((long)param_2 + param_5 * 0xc);
        puVar10 = puVar6;
        for (puVar14 = (undefined8 *)((long)puVar6 + param_5 * -0xc); puVar14 < puVar6;
            puVar14 = (undefined8 *)((long)puVar14 + 0xc)) {
          uVar13 = *puVar14;
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar14 + 1);
          *puVar10 = uVar13;
          puVar10 = (undefined8 *)((long)puVar10 + 0xc);
        }
        param_1[1] = (long)puVar10;
        if (puVar6 != puVar8) {
          _memmove(puVar8,param_2);
        }
        lVar12 = param_5 * 0xc;
      }
      _memmove(param_2,param_3,lVar12);
    }
  }
  return plVar4;
}



/* Entry: 10aad4190; end: 10aad41a3;  */

long * FUN_10aad4190(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x40);
    plVar2[2] = (long)(lVar3 + -0x40);
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10aad41a4; end: 10aad41f3;  */

long * FUN_10aad41a4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x40);
    param_1[2] = (long)(lVar2 + -0x40);
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad41f4; end: 10aad4207;  */

long * FUN_10aad41f4(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar5 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)plVar3[2];
  plVar3[5] = 0;
  lVar4 = (long)puVar1 - (long)puVar5;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar5);
    puVar1 = (undefined8 *)plVar3[2];
    puVar5 = (undefined8 *)(plVar3[1] + 8);
    plVar3[1] = (long)puVar5;
    lVar4 = (long)puVar1 - (long)puVar5;
  }
  if (uVar2 == 1) {
    lVar4 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10aad4284;
    lVar4 = 0x400;
  }
  plVar3[4] = lVar4;
LAB_10aad4284:
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    __ZdlPv(*puVar5);
  }
  lVar4 = plVar3[2];
  if (lVar4 != plVar3[1]) {
    plVar3[2] = lVar4 + ((plVar3[1] - lVar4) + 7U & 0xfffffffffffffff8);
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 10aad4208; end: 10aad429f;  */

long * FUN_10aad4208(long *param_1)

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
    lVar3 = 0x200;
  }
  else {
    if (uVar2 != 2) goto LAB_10aad4284;
    lVar3 = 0x400;
  }
  param_1[4] = lVar3;
LAB_10aad4284:
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



/* Entry: 10aad42a0; end: 10aad42c7;  */

long * FUN_10aad42a0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar8 = plVar1[1] - *plVar1;
  uVar5 = (lVar8 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar5) {
    FUN_10a22cf64();
    FUN_10aad4560(&plStack_78);
    __Unwind_Resume();
    plVar3 = plVar1;
    if (plVar1 != param_2) {
      do {
        FUN_10aad4480(param_3,plVar3);
        lVar4 = plVar3[9];
        lVar8 = plVar3[8];
        *(undefined8 *)(param_3 + 0x4d) = *(undefined8 *)((long)plVar3 + 0x4d);
        *(long *)(param_3 + 0x48) = lVar4;
        *(long *)(param_3 + 0x40) = lVar8;
        plVar3 = plVar3 + 0xb;
        param_3 = param_3 + 0x58;
        plVar7 = plVar1;
      } while (plVar3 != param_2);
      do {
        plVar1 = plVar7;
        FUN_10a22d0f8(plVar7);
        plVar7 = plVar7 + 0xb;
      } while (plVar7 != param_2);
    }
    return plVar1;
  }
  lVar4 = plVar1[2] - *plVar1 >> 3;
  uVar6 = lVar4 * 0x5d1745d1745d1746;
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar6 = uVar5;
  }
  if (0x1745d1745d1745c < (ulong)(lVar4 * 0x2e8ba2e8ba2e8ba3)) {
    uVar6 = 0x2e8ba2e8ba2e8ba;
  }
  plStack_58 = plVar1;
  if (uVar6 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = plVar1;
    FUN_10a22cf78();
  }
  puVar2 = (undefined *)((long)plVar3 + lVar8);
  plStack_78 = plVar3;
  plStack_70 = (long *)puVar2;
  plStack_68 = (long *)puVar2;
  plStack_60 = plVar3 + uVar6 * 0xb;
  FUN_10a22d054(puVar2,param_2);
  lVar4 = param_2[9];
  lVar8 = param_2[8];
  *(undefined8 *)(puVar2 + 0x4d) = *(undefined8 *)((long)param_2 + 0x4d);
  *(long *)(puVar2 + 0x48) = lVar4;
  *(long *)(puVar2 + 0x40) = lVar8;
  lVar8 = *plVar1;
  lVar4 = plVar1[1];
  FUN_10aad4408(lVar8,lVar4,puVar2 + (lVar8 - lVar4));
  plStack_78 = (long *)*plVar1;
  *plVar1 = (long)(puVar2 + (lVar8 - lVar4));
  plVar1[1] = (long)(puVar2 + 0x58);
  plStack_60 = (long *)plVar1[2];
  plVar1[2] = (long)(plVar3 + uVar6 * 0xb);
  plStack_70 = plStack_78;
  plStack_68 = plStack_78;
  FUN_10aad4560(&plStack_78);
  return (long *)(puVar2 + 0x58);
}



/* Entry: 10aad42c8; end: 10aad4407;  */

long * FUN_10aad42c8(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar3) {
    FUN_10a22cf64();
    FUN_10aad4560(&plStack_58);
    __Unwind_Resume();
    plVar1 = param_1;
    if (param_1 != param_2) {
      do {
        FUN_10aad4480(param_3,plVar1);
        lVar2 = plVar1[9];
        lVar6 = plVar1[8];
        *(undefined8 *)(param_3 + 0x4d) = *(undefined8 *)((long)plVar1 + 0x4d);
        *(long *)(param_3 + 0x48) = lVar2;
        *(long *)(param_3 + 0x40) = lVar6;
        plVar1 = plVar1 + 0xb;
        param_3 = param_3 + 0x58;
        plVar5 = param_1;
      } while (plVar1 != param_2);
      do {
        param_1 = plVar5;
        FUN_10a22d0f8(plVar5);
        plVar5 = plVar5 + 0xb;
      } while (plVar5 != param_2);
    }
    return param_1;
  }
  lVar2 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar2 * 0x5d1745d1745d1746;
  if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
    uVar4 = uVar3;
  }
  if (0x1745d1745d1745c < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
    uVar4 = 0x2e8ba2e8ba2e8ba;
  }
  plStack_38 = param_1;
  if (uVar4 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    FUN_10a22cf78();
  }
  lVar6 = (long)plVar1 + lVar6;
  plStack_58 = plVar1;
  plStack_50 = (long *)lVar6;
  plStack_48 = (long *)lVar6;
  plStack_40 = plVar1 + uVar4 * 0xb;
  FUN_10a22d054(lVar6,param_2);
  lVar7 = param_2[9];
  lVar2 = param_2[8];
  *(undefined8 *)(lVar6 + 0x4d) = *(undefined8 *)((long)param_2 + 0x4d);
  *(long *)(lVar6 + 0x48) = lVar7;
  *(long *)(lVar6 + 0x40) = lVar2;
  lVar2 = lVar6 + (*param_1 - param_1[1]);
  FUN_10aad4408(*param_1,param_1[1],lVar2);
  plStack_58 = (long *)*param_1;
  *param_1 = lVar2;
  param_1[1] = lVar6 + 0x58;
  plStack_40 = (long *)param_1[2];
  param_1[2] = (long)(plVar1 + uVar4 * 0xb);
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  FUN_10aad4560(&plStack_58);
  return (long *)(lVar6 + 0x58);
}



/* Entry: 10aad4408; end: 10aad447f;  */

void FUN_10aad4408(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  if (param_1 != param_2) {
    do {
      FUN_10aad4480(param_3,lVar1);
      uVar3 = *(undefined8 *)(lVar1 + 0x48);
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)(param_3 + 0x4d) = *(undefined8 *)(lVar1 + 0x4d);
      *(undefined8 *)(param_3 + 0x48) = uVar3;
      *(undefined8 *)(param_3 + 0x40) = uVar2;
      lVar1 = lVar1 + 0x58;
      param_3 = param_3 + 0x58;
    } while (lVar1 != param_2);
    do {
      FUN_10a22d0f8(param_1);
      param_1 = param_1 + 0x58;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10aad4480; end: 10aad44b3;  */

undefined1 * FUN_10aad4480(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_10aad44b4();
  return param_1;
}



/* Entry: 10aad44b4; end: 10aad4513;  */

void FUN_10aad44b4(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_10a22d0f8();
  uVar1 = *(uint *)(param_2 + 0x38);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110c43750)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 10aad4514; end: 10aad455f;  */

void FUN_10aad4514(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10aad4560; end: 10aad45ab;  */

long * FUN_10aad4560(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x58;
    FUN_10a22d0f8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad45ac; end: 10aad45c3;  */

void FUN_10aad45ac(undefined8 *param_1,int *param_2)

{
  *(int *)(*(long *)*param_1 + 4) = *param_2 + 1;
  return;
}



/* Entry: 10aad45c4; end: 10aad472b;  */

void FUN_10aad45c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_78 [2];
  char cStack_61;
  long *plStack_58;
  undefined1 auStack_48 [40];
  
  lVar4 = *(long *)(*param_1 + 8);
  if ((*(byte *)(lVar4 + 0x90) & 1) != 0) {
    FUN_10aacf508(auStack_78);
    FUN_10aacf5b8(lVar4 + 0x38,auStack_78);
    func_0x000107c2ab24(auStack_48);
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    return;
  }
  FUN_10aacf508(auStack_78);
  func_0x00010aad4670(lVar4 + 0x38,auStack_78);
  func_0x000107c2ab24(auStack_48);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10aad472c; end: 10aad47eb;  */

void FUN_10aad472c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 7) == 1) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
    }
    uVar3 = param_3[1];
    uVar2 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar3;
    *param_2 = uVar2;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    FUN_10a009fa8(param_2 + 3,param_3 + 3);
    uVar1 = *(undefined1 *)(param_3 + 6);
    param_2[5] = param_3[5];
    *(undefined1 *)(param_2 + 6) = uVar1;
  }
  else {
    FUN_10a22d0f8();
    uVar3 = param_3[1];
    uVar2 = *param_3;
    param_1[2] = param_3[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    uVar2 = param_3[3];
    param_1[4] = param_3[4];
    param_1[3] = uVar2;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar2 = param_3[5];
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_3 + 6);
    param_1[5] = uVar2;
    *(undefined4 *)(param_1 + 7) = 1;
  }
  return;
}



/* Entry: 10aad47ec; end: 10aad47ff;  */

void FUN_10aad47ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        *param_3 = &PTR_SUB_110b01d60;
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        puVar2[1] = 0;
        *param_3 = &PTR_DAT_110b051b8;
        param_3[2] = puVar2[2];
        puVar2 = puVar2 + 3;
        param_3 = param_3 + 3;
      } while (puVar2 != param_2);
      do {
        *puVar1 = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(puVar1);
        puVar1 = puVar1 + 3;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x18);
  return;
}



/* Entry: 10aad4800; end: 10aad4843;  */

void FUN_10aad4800(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0xaaaaaaaaaaaaaaa < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = &PTR_SUB_110b01d60;
        uVar2 = *puVar1;
        param_3[1] = puVar1[1];
        *param_3 = uVar2;
        puVar1[1] = 0;
        *param_3 = &PTR_DAT_110b051b8;
        param_3[2] = puVar1[2];
        puVar1 = puVar1 + 3;
        param_3 = param_3 + 3;
      } while (puVar1 != param_2);
      do {
        *param_1 = &PTR_SUB_110b01d60;
        func_0x000107c2acd4(param_1);
        param_1 = param_1 + 3;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x18);
  return;
}



/* Entry: 10aad4844; end: 10aad48cf;  */

void FUN_10aad4844(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = &PTR_SUB_110b01d60;
      uVar2 = *puVar1;
      param_3[1] = puVar1[1];
      *param_3 = uVar2;
      puVar1[1] = 0;
      *param_3 = &PTR_DAT_110b051b8;
      param_3[2] = puVar1[2];
      puVar1 = puVar1 + 3;
      param_3 = param_3 + 3;
    } while (puVar1 != param_2);
    do {
      *param_1 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(param_1);
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10aad48d0; end: 10aad494b;  */

void FUN_10aad48d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar2 != puVar3) {
    do {
      puVar2 = puVar2 + -3;
      *puVar2 = &PTR_SUB_110b01d60;
      func_0x000107c2acd4(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 10aad494c; end: 10aad4a2f;  */

long FUN_10aad494c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined8 *)((long)puVar5 + (param_2 - (long)param_4));
  puVar2 = puVar5;
  for (puVar1 = puVar3; puVar1 < param_3; puVar1 = puVar1 + 3) {
    *puVar2 = &PTR_SUB_110b01d60;
    uVar7 = *puVar1;
    puVar2[1] = puVar1[1];
    *puVar2 = uVar7;
    puVar1[1] = 0;
    *puVar2 = &PTR_DAT_110b051b8;
    puVar2[2] = puVar1[2];
    puVar2 = puVar2 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  if (puVar5 != param_4) {
    lVar6 = 0;
    do {
      uVar8 = *(undefined8 *)((long)puVar3 + lVar6 + -0x10);
      uVar7 = *(undefined8 *)((long)puVar3 + lVar6 + -0x18);
      uVar9 = *(undefined8 *)((long)puVar5 + lVar6 + -0x18);
      *(undefined8 *)((long)puVar3 + lVar6 + -0x10) = *(undefined8 *)((long)puVar5 + lVar6 + -0x10);
      *(undefined8 *)((long)puVar3 + lVar6 + -0x18) = uVar9;
      *(undefined8 *)((long)puVar5 + lVar6 + -0x10) = uVar8;
      *(undefined8 *)((long)puVar5 + lVar6 + -0x18) = uVar7;
      *(undefined8 *)((long)puVar5 + lVar6 + -8) = *(undefined8 *)((long)puVar3 + lVar6 + -8);
      lVar6 = lVar6 + -0x18;
    } while ((long)param_4 - (long)puVar5 != lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_58 = param_1 + 0xa8;
  FUN_10a22d224(&lStack_58);
  FUN_10a22ce48(param_1 + 0x40);
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad4a30; end: 10aad4a8b;  */

long FUN_10aad4a30(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xa8;
  FUN_10a22d224(&lStack_28);
  FUN_10a22ce48(param_1 + 0x40);
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aad4a8c; end: 10aad4c37;  */

void FUN_10aad4a8c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  ulong param_5,long param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar15 = *(undefined8 **)(param_6 + 0x10);
  lStack_88 = param_1;
  uStack_80 = param_2;
  if (param_5 != 0) {
    plVar11 = &lStack_70;
    lStack_70 = param_1;
    lStack_68 = param_2;
    func_0x00010a289568(plVar11,*param_4);
    if (param_5 != 1) {
      plVar4 = &lStack_70;
      lStack_70 = param_1;
      lStack_68 = param_2;
      func_0x00010a526684(plVar4,param_4[1]);
      if (2 < param_5) {
        plVar5 = &lStack_70;
        lStack_70 = param_1;
        lStack_68 = param_2;
        FUN_10a4ff0c0(plVar5,param_4[2]);
        if (param_5 != 3) {
          plVar6 = &lStack_70;
          lStack_70 = param_1;
          lStack_68 = param_2;
          func_0x00010a291414(plVar6,param_4[3]);
          if (*plVar11 != 0) {
            plVar7 = &lStack_88;
            func_0x00010a290d64(plVar7,param_3);
            puVar10 = (undefined8 *)*plVar11;
            lVar12 = *plVar5;
            lVar13 = *plVar6;
            puVar14 = (undefined8 *)*puVar15;
            FUN_10aab25d4(*puVar14,puVar10 + 2);
            uVar8 = *puVar14;
            uVar9 = *puVar10;
            plVar11 = (long *)plVar4[1];
            lStack_68 = plVar4[1];
            lStack_70 = *plVar4;
            if (plVar11 != (long *)0x0) {
              plVar4 = plVar11 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar2) {
                  *plVar4 = *plVar4 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            FUN_10aab2844(&lStack_78,uVar8,uVar9,uVar9,lVar12,&lStack_70,lVar13,puVar15 + 1);
            if (plVar11 != (long *)0x0) {
              plVar4 = plVar11 + 1;
              do {
                lVar12 = *plVar4;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                if (bVar2) {
                  *plVar4 = lVar12 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            plVar11 = (long *)*plVar7;
            *plVar7 = lStack_78;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aad4c24);
  (*pcVar3)();
}



/* Entry: 10aad4c38; end: 10aad4c9b;  */

void FUN_10aad4c38(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    lStack_28 = lVar1 + 0xa8;
    FUN_10a22d224(&lStack_28);
    FUN_10a22ce48(lVar1 + 0x40);
    if ((*(char *)(lVar1 + 0x38) == '\x01') && (*(long *)(lVar1 + 0x20) != 0)) {
      *(long *)(lVar1 + 0x28) = *(long *)(lVar1 + 0x20);
      __ZdlPv();
    }
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10aad4c9c; end: 10aad4cb3;  */

void FUN_10aad4c9c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10aad4cb4; end: 10aad4d23;  */

void FUN_10aad4cb4(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10aad4d24(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10aad4d24; end: 10aad4d5b;  */

void FUN_10aad4d24(long *param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3e == 0) {
    plVar2 = param_1;
    FUN_10aad4d70();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)plVar2 + param_2 * 4;
    return;
  }
  FUN_10aad4d5c();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar2 = *(long **)(puVar1 + 0x20);
  FUN_10aad4dd4();
                    /* WARNING: Could not recover jumptable at 0x00010aad4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10aad4d5c; end: 10aad4d6f;  */

void FUN_10aad4d5c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar2 = *(long **)(puVar1 + 0x20);
  FUN_10aad4dd4();
                    /* WARNING: Could not recover jumptable at 0x00010aad4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0);
  return;
}



/* Entry: 10aad4d70; end: 10aad4dd3;  */

void FUN_10aad4d70(long param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000109ffded8();
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_10aad4dd4();
                    /* WARNING: Could not recover jumptable at 0x00010aad4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10aad4dd4; end: 10aad4ebb;  */

void FUN_10aad4dd4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_28;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10aad4e90);
    (*pcVar4)();
  }
  lVar6 = param_1[3];
  param_1[3] = 0;
  lStack_28 = lVar6;
  (**(code **)*param_1)();
  plVar1 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar1;
    if (lVar5 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10aad4e48;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10aad4e48:
      if (*(char *)(param_1 + 2) == '\x01') {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      lStack_28 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_28,lVar6), lStack_28 != 0)) {
        func_0x0001092b4274(&lStack_28);
      }
      return;
    }
  } while( true );
}



/* Entry: 10aad4ebc; end: 10aad5003;  */

undefined8 * FUN_10aad4ebc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c43798;
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}


