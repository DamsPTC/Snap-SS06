/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108360170; end: 108360197;  */

undefined8 * FUN_108360170(undefined8 *param_1)

{
  _free(param_1[3]);
  *param_1 = &PTR_FUN_110a3f318;
  FUN_108383ce0();
  FUN_108355184(param_1 + 6);
  return param_1;
}



/* Entry: 108360198; end: 1083601ab;  */

void FUN_108360198(void)

{
  FUN_108360170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083601ac; end: 1083601e3;  */

undefined8 FUN_1083601ac(void)

{
  return 0;
}



/* Entry: 1083601e4; end: 108360227;  */

long FUN_1083601e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x0001083601b4();
  lVar2 = (long)(int)(lVar1 * 3);
  if (0x7ffffffe < lVar1 * 3 - 1U) {
    lVar2 = 0;
  }
  if (*(char *)(param_1 + 0x1c) == '\x02') {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 108360228; end: 10836023f;  */

ulong FUN_108360228(long param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 3U & 0xfffffffffffffffc;
  uVar2 = uVar1;
  if (param_2 == 1) {
    _calloc(uVar1,1);
  }
  else {
    _malloc();
  }
  FUN_1084107ec(uVar1,uVar2);
  return uVar2;
}



/* Entry: 108360240; end: 108360363;  */

void FUN_108360240(undefined8 *param_1,ulong param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte bStack_51;
  
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  iVar3 = (int)param_4[2] - (int)param_4[1];
  uVar1 = (-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar3;
  iVar4 = *(int *)((long)param_4 + 0x14) - *(int *)((long)param_4 + 0xc);
  uVar2 = (-(param_3 >> 0x1f & 1) & 0xfffffffe00000000 | (param_3 & 0xffffffff) << 1) + (long)iVar4;
  bStack_51 = ((uint)param_3 < 0x80000000 && (ulong)(long)iVar4 <= uVar2) &&
              ((uint)param_2 < 0x80000000 && (ulong)(long)iVar3 <= uVar1);
  pbVar5 = &bStack_51;
  func_0x000108154764(pbVar5,uVar1,uVar2);
  if ((((uVar1 >> 0x1f == 0) && (uVar2 >> 0x1f == 0)) && ((ulong)pbVar5 >> 0x1f == 0)) &&
     ((bStack_51 & 1) != 0)) {
    puVar6 = param_1 + 1;
    *(undefined4 *)puVar6 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(int *)(param_1 + 2) = (int)uVar1;
    *(int *)((long)param_1 + 0x14) = (int)uVar2;
    FUN_10821a06c(puVar6,(int)param_4[1],*(undefined4 *)((long)param_4 + 0xc));
    FUN_10821a06c(puVar6,-(uint)param_2,-(uint)param_3);
    *(int *)(param_1 + 3) = (int)uVar1;
    if (*param_4 != 0) {
      FUN_108360228(pbVar5,0);
      *param_1 = pbVar5;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 108360364; end: 108360413;  */

long FUN_108360364(long *param_1,int param_2,int param_3)

{
  return *param_1 + (ulong)(uint)((param_3 - *(int *)((long)param_1 + 0xc)) * (int)param_1[3]) +
         (long)(param_2 - (int)param_1[1] <<
               (ulong)(*(uint *)(&UNK_10df1db0c + (ulong)*(byte *)((long)param_1 + 0x1c) * 4) & 0x1f
                      ));
}



/* Entry: 108360414; end: 1083613ef;  */

ulong FUN_108360414(double *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  code *pcVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  long extraout_x8;
  long extraout_x8_00;
  uint *puVar16;
  long extraout_x8_01;
  ulong uVar17;
  ulong uVar18;
  long extraout_x8_02;
  int iVar19;
  uint uVar20;
  int extraout_w9;
  uint uVar21;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  uint *puVar22;
  undefined8 extraout_x9;
  byte *pbVar23;
  byte *pbVar24;
  long extraout_x9_00;
  int iVar25;
  uint extraout_w10;
  uint extraout_w10_00;
  int iVar26;
  ulong extraout_x10;
  int iVar27;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  uint uVar28;
  int iVar29;
  uint *extraout_x12;
  uint *extraout_x12_00;
  uint *extraout_x15;
  uint *extraout_x15_00;
  uint *extraout_x15_01;
  uint *extraout_x15_02;
  uint *extraout_x15_03;
  uint *extraout_x15_04;
  uint *extraout_x15_05;
  byte *pbVar30;
  ulong uVar31;
  uint *puVar32;
  uint *puVar33;
  undefined1 *puVar34;
  uint uVar35;
  ulong uVar36;
  undefined1 *puVar37;
  uint *puVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  uint *puVar42;
  uint *puVar43;
  uint *puVar44;
  long lVar45;
  ulong uVar46;
  double dVar47;
  ulong uStack_5d0;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  undefined4 uStack_598;
  undefined1 uStack_594;
  ulong uStack_590;
  undefined8 uStack_588;
  int iStack_580;
  int iStack_57c;
  uint uStack_578;
  undefined1 uStack_574;
  long lStack_568;
  uint uStack_560;
  int iStack_55c;
  int iStack_558;
  int iStack_554;
  int iStack_550;
  int iStack_538;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long lStack_4e0;
  long lStack_4d8;
  undefined1 auStack_4c8 [48];
  int iStack_498;
  uint auStack_c8 [2];
  long lStack_c0;
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((2.0 <= *param_1) || (dVar47 = param_1[1], 2.0 <= dVar47)) {
    func_0x0001081f5cd0(auStack_4c8,0x400);
    func_0x0001083613f0(*param_1,&lStack_568);
    func_0x0001083613f0(param_1[1],&uStack_590);
    uVar31 = (ulong)uStack_560;
    uVar36 = uStack_588 & 0xffffffff;
    FUN_108360240(&uStack_5b0,uVar31,uVar36,param_2);
    *param_3 = uStack_5b0;
    param_3[2] = uStack_5a0;
    param_3[1] = uStack_5a8;
    *(undefined4 *)(param_3 + 3) = uStack_598;
    *(undefined1 *)((long)param_3 + 0x1c) = uStack_594;
    if (*param_2 == 0) {
LAB_10836117c:
      func_0x000108362618();
      goto LAB_10836135c;
    }
    if (uStack_5b0 == 0) {
      func_0x000108362644();
      goto LAB_10836117c;
    }
    uVar7 = iStack_554 + iStack_558 + iStack_550;
    uVar35 = iStack_57c + iStack_580 + uStack_578;
    if (uVar7 <= uVar35) {
      uVar7 = uVar35;
    }
    if (((int)uVar7 < 0) || (uVar7 >> 0x1e != 0)) goto LAB_10836139c;
    uVar46 = param_2[2];
    iVar15 = *(int *)((long)param_2 + 0x14);
    uVar40 = param_2[1];
    iVar25 = *(int *)((long)param_2 + 0xc);
    uVar18 = param_3[2];
    iVar19 = *(int *)((long)param_3 + 0x14);
    puVar32 = (uint *)(ulong)(uVar7 << 2);
    uVar17 = param_3[1];
    iVar4 = *(int *)((long)param_3 + 0xc);
    puVar11 = auStack_c8;
    func_0x0001081865e0(puVar11,puVar32,4);
    uVar7 = iVar15 - iVar25;
    uVar35 = (int)uVar18 - (int)uVar17;
    lStack_c0 = (long)puVar11 + (long)puVar32;
    iVar15 = 0;
    if (uVar7 != 0) {
      iVar15 = 0x7fffffff / (int)uVar7;
    }
    if (iVar15 < (int)uVar35) {
      uVar31 = 0;
      uVar36 = 0;
      goto LAB_10836117c;
    }
    lVar13 = (long)(int)uVar35 * (long)(int)uVar7;
    puVar12 = auStack_c8;
    func_0x0001081e4ba0();
    iVar15 = (int)uVar46 - (int)uVar40;
    uVar21 = iStack_55c - iVar15;
    if (uVar21 == 0 || iStack_55c < iVar15) {
      uVar21 = 0;
    }
    if (*(byte *)((long)param_2 + 0x1c) < 5) {
      lVar45 = (long)(int)uVar7;
      puVar3 = puVar11 + iStack_558;
      puVar42 = puVar3 + iStack_554;
      puVar39 = puVar42 + iStack_550;
      switch(*(byte *)((long)param_2 + 0x1c)) {
      case 0:
        puVar33 = (uint *)*param_2;
        puVar32 = (uint *)((long)puVar33 + (long)(iVar15 / 8));
        uVar10 = ((iVar15 / 8) * 8 - iVar15) + 7;
        puVar22 = puVar11;
        for (uVar46 = 0; uVar46 != (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)); uVar46 = uVar46 + 1
            ) {
          func_0x000108362518();
          uVar20 = 0;
          iVar25 = 0;
          iVar15 = 0;
          uVar28 = 7;
          puVar22 = puVar42;
          puVar44 = puVar3;
          puVar38 = puVar11;
          puVar37 = (undefined1 *)((long)puVar12 + uVar46);
          while ((puVar33 < puVar32 ||
                 (uVar2 = uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU),
                 puVar33 == puVar32 && (int)uVar10 < (int)uVar28))) {
            uVar6 = -((byte)((byte)*puVar33 >> (ulong)(uVar28 & 0x1f)) & 1);
            uVar20 = uVar20 + (uVar6 & 0xff);
            uVar2 = uVar20 + iVar25;
            *puVar37 = (char)(lStack_568 * (ulong)(uVar2 + iVar15) + 0x80000000 >> 0x20);
            iVar15 = (uVar2 + iVar15) - *puVar22;
            puVar43 = puVar22 + 1;
            *puVar22 = uVar2;
            puVar22 = puVar43;
            if (puVar39 <= puVar43) {
              puVar22 = puVar42;
            }
            iVar25 = uVar2 - *puVar44;
            puVar43 = puVar44 + 1;
            *puVar44 = uVar20;
            puVar44 = puVar43;
            if (puVar42 <= puVar43) {
              puVar44 = puVar3;
            }
            uVar20 = uVar20 - *puVar38;
            puVar43 = puVar38 + 1;
            *puVar38 = uVar6 & 0xff;
            puVar38 = puVar43;
            if (puVar3 <= puVar43) {
              puVar38 = puVar11;
            }
            uVar2 = uVar28 - 1;
            if ((int)uVar28 < 1) {
              puVar33 = (uint *)((long)puVar33 + 1);
            }
            bVar1 = 0 < (int)uVar28;
            uVar28 = 7;
            if (bVar1) {
              uVar28 = uVar2;
            }
            puVar37 = puVar37 + lVar45;
          }
          for (; puVar33 = puVar22, uVar2 != 0; uVar2 = uVar2 - 1) {
            uVar28 = iVar25 + uVar20;
            *puVar37 = (char)(lStack_568 * (ulong)(iVar15 + uVar28) + 0x80000000 >> 0x20);
            iVar15 = (iVar15 + uVar28) - *puVar33;
            *puVar33 = uVar28;
            puVar22 = puVar33 + 1;
            if (puVar39 <= puVar33 + 1) {
              puVar22 = puVar42;
            }
            iVar25 = uVar28 - *puVar44;
            puVar33 = puVar44 + 1;
            *puVar44 = uVar20;
            puVar44 = puVar33;
            if (puVar42 <= puVar33) {
              puVar44 = puVar3;
            }
            uVar20 = uVar20 - *puVar38;
            puVar33 = puVar38 + 1;
            *puVar38 = 0;
            puVar38 = puVar33;
            if (puVar3 <= puVar33) {
              puVar38 = puVar11;
            }
            puVar37 = puVar37 + lVar45;
          }
          puVar34 = (undefined1 *)((long)puVar12 + uVar46) + lVar13;
          func_0x000108362518();
          iVar29 = 0;
          iVar25 = 0;
          iVar15 = 0;
          puVar22 = puVar32;
          uVar20 = uVar10;
          while (puVar37 < puVar34) {
            puVar34 = puVar34 + -lVar45;
            uVar28 = 0;
            if ((int)uVar20 < 7) {
              uVar28 = uVar20 + 1;
            }
            puVar22 = (uint *)((long)puVar22 - (ulong)(6 < (int)uVar20));
            uVar6 = -((byte)((byte)*puVar22 >> (ulong)(uVar28 & 0x1f)) & 1);
            uVar20 = iVar29 + (uVar6 & 0xff);
            uVar2 = uVar20 + iVar25;
            *puVar34 = (char)(lStack_568 * (ulong)(uVar2 + iVar15) + 0x80000000 >> 0x20);
            iVar15 = (uVar2 + iVar15) - *puVar33;
            puVar43 = puVar33 + 1;
            *puVar33 = uVar2;
            puVar33 = puVar43;
            if (puVar39 <= puVar43) {
              puVar33 = puVar42;
            }
            iVar25 = uVar2 - *puVar44;
            puVar43 = puVar44 + 1;
            *puVar44 = uVar20;
            puVar44 = puVar43;
            if (puVar42 <= puVar43) {
              puVar44 = puVar3;
            }
            iVar29 = uVar20 - *puVar38;
            puVar43 = puVar38 + 1;
            *puVar38 = uVar6 & 0xff;
            puVar38 = puVar43;
            uVar20 = uVar28;
            if (puVar3 <= puVar43) {
              puVar38 = puVar11;
            }
          }
          func_0x000108362590();
          puVar32 = (uint *)((long)puVar32 + extraout_x8);
          puVar22 = extraout_x15;
        }
        break;
      case 1:
        func_0x000108362630();
        puVar33 = (uint *)((long)puVar32 + (long)extraout_w9_03);
        func_0x0001083625d0();
        uVar46 = extraout_x11_01;
        puVar22 = extraout_x15_04;
        while (uVar46 != (extraout_w10_00 & ((int)extraout_w10_00 >> 0x1f ^ 0xffffffffU))) {
          func_0x000108362518();
          uVar21 = 0;
          iVar25 = 0;
          iVar15 = 0;
          puVar22 = (uint *)((long)puVar12 + uVar46);
          puVar44 = puVar42;
          puVar43 = puVar3;
          puVar38 = puVar11;
          while (uVar10 = extraout_w8_05 & ((int)extraout_w8_05 >> 0x1f ^ 0xffffffffU),
                puVar32 < puVar33) {
            uVar20 = *puVar32;
            uVar21 = uVar21 + (byte)uVar20;
            uVar10 = uVar21 + iVar25;
            *(char *)puVar22 = (char)(lStack_568 * (ulong)(uVar10 + iVar15) + 0x80000000 >> 0x20);
            iVar15 = (uVar10 + iVar15) - *puVar44;
            puVar16 = puVar44 + 1;
            *puVar44 = uVar10;
            puVar44 = puVar16;
            if (puVar39 <= puVar16) {
              puVar44 = puVar42;
            }
            iVar25 = uVar10 - *puVar43;
            puVar16 = puVar43 + 1;
            *puVar43 = uVar21;
            puVar43 = puVar16;
            if (puVar42 <= puVar16) {
              puVar43 = puVar3;
            }
            uVar21 = uVar21 - *puVar38;
            puVar16 = puVar38 + 1;
            *puVar38 = (uint)(byte)uVar20;
            puVar38 = puVar16;
            if (puVar3 <= puVar16) {
              puVar38 = puVar11;
            }
            puVar22 = (uint *)((long)puVar22 + lVar45);
            puVar32 = (uint *)((long)puVar32 + 1);
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            uVar20 = iVar25 + uVar21;
            *(char *)puVar22 = (char)(lStack_568 * (ulong)(iVar15 + uVar20) + 0x80000000 >> 0x20);
            iVar15 = (iVar15 + uVar20) - *puVar44;
            puVar32 = puVar44 + 1;
            *puVar44 = uVar20;
            puVar44 = puVar32;
            if (puVar39 <= puVar32) {
              puVar44 = puVar42;
            }
            iVar25 = uVar20 - *puVar43;
            puVar32 = puVar43 + 1;
            *puVar43 = uVar21;
            puVar43 = puVar32;
            if (puVar42 <= puVar32) {
              puVar43 = puVar3;
            }
            uVar21 = uVar21 - *puVar38;
            puVar32 = puVar38 + 1;
            *puVar38 = 0;
            puVar38 = puVar32;
            if (puVar3 <= puVar32) {
              puVar38 = puVar11;
            }
            puVar22 = (uint *)((long)puVar22 + lVar45);
          }
          puVar32 = (uint *)((long)((long)puVar12 + uVar46) + lVar13);
          func_0x000108362518();
          iVar29 = 0;
          iVar25 = 0;
          iVar15 = 0;
          puVar16 = puVar33;
          while (puVar16 = (uint *)((long)puVar16 + -1), puVar22 < puVar32) {
            puVar32 = (uint *)((long)puVar32 - lVar45);
            bVar5 = *(byte *)puVar16;
            uVar21 = iVar29 + (uint)bVar5;
            uVar10 = uVar21 + iVar25;
            *(char *)puVar32 = (char)(lStack_568 * (ulong)(uVar10 + iVar15) + 0x80000000 >> 0x20);
            iVar15 = (uVar10 + iVar15) - *puVar44;
            puVar41 = puVar44 + 1;
            *puVar44 = uVar10;
            puVar44 = puVar41;
            if (puVar39 <= puVar41) {
              puVar44 = puVar42;
            }
            iVar25 = uVar10 - *puVar43;
            puVar41 = puVar43 + 1;
            *puVar43 = uVar21;
            puVar43 = puVar41;
            if (puVar42 <= puVar41) {
              puVar43 = puVar3;
            }
            iVar29 = uVar21 - *puVar38;
            puVar41 = puVar38 + 1;
            *puVar38 = (uint)bVar5;
            puVar38 = puVar41;
            if (puVar3 <= puVar41) {
              puVar38 = puVar11;
            }
          }
          func_0x000108362590();
          puVar33 = (uint *)((long)puVar33 + extraout_x8_01);
          uVar46 = extraout_x11_02;
          puVar22 = extraout_x15_05;
        }
        break;
      case 2:
        goto LAB_1083613a0;
      case 3:
        func_0x000108362630();
        puVar33 = puVar32 + extraout_w9;
        func_0x0001083625d0();
        puVar22 = extraout_x15_00;
        for (uVar46 = extraout_x11;
            uVar46 != (extraout_w10 & ((int)extraout_w10 >> 0x1f ^ 0xffffffffU));
            uVar46 = uVar46 + 1) {
          func_0x000108362518();
          uVar21 = 0;
          iVar25 = 0;
          iVar15 = 0;
          puVar22 = (uint *)((long)puVar12 + uVar46);
          puVar44 = puVar42;
          puVar43 = puVar3;
          puVar38 = puVar11;
          while (uVar10 = extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU), puVar32 < puVar33)
          {
            uVar20 = *puVar32;
            uVar21 = uVar21 + (uVar20 >> 0x18);
            uVar10 = uVar21 + iVar25;
            *(char *)puVar22 = (char)(lStack_568 * (ulong)(uVar10 + iVar15) + 0x80000000 >> 0x20);
            iVar15 = (uVar10 + iVar15) - *puVar44;
            puVar16 = puVar44 + 1;
            *puVar44 = uVar10;
            puVar44 = puVar16;
            if (puVar39 <= puVar16) {
              puVar44 = puVar42;
            }
            iVar25 = uVar10 - *puVar43;
            puVar16 = puVar43 + 1;
            *puVar43 = uVar21;
            puVar43 = puVar16;
            if (puVar42 <= puVar16) {
              puVar43 = puVar3;
            }
            uVar21 = uVar21 - *puVar38;
            puVar16 = puVar38 + 1;
            *puVar38 = uVar20 >> 0x18;
            puVar38 = puVar16;
            if (puVar3 <= puVar16) {
              puVar38 = puVar11;
            }
            puVar22 = (uint *)((long)puVar22 + lVar45);
            puVar32 = puVar32 + 1;
          }
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            uVar20 = iVar25 + uVar21;
            *(char *)puVar22 = (char)(lStack_568 * (ulong)(iVar15 + uVar20) + 0x80000000 >> 0x20);
            iVar15 = (iVar15 + uVar20) - *puVar44;
            puVar32 = puVar44 + 1;
            *puVar44 = uVar20;
            puVar44 = puVar32;
            if (puVar39 <= puVar32) {
              puVar44 = puVar42;
            }
            iVar25 = uVar20 - *puVar43;
            puVar32 = puVar43 + 1;
            *puVar43 = uVar21;
            puVar43 = puVar32;
            if (puVar42 <= puVar32) {
              puVar43 = puVar3;
            }
            uVar21 = uVar21 - *puVar38;
            puVar32 = puVar38 + 1;
            *puVar38 = 0;
            puVar38 = puVar32;
            if (puVar3 <= puVar32) {
              puVar38 = puVar11;
            }
            puVar22 = (uint *)((long)puVar22 + lVar45);
          }
          puVar32 = (uint *)((long)((long)puVar12 + uVar46) + lVar13);
          func_0x000108362518();
          iVar29 = 0;
          iVar25 = 0;
          iVar15 = 0;
          puVar16 = puVar33;
          while (puVar16 = puVar16 + -1, puVar22 < puVar32) {
            puVar32 = (uint *)((long)puVar32 - lVar45);
            uVar20 = *puVar16;
            uVar21 = iVar29 + (uVar20 >> 0x18);
            uVar10 = uVar21 + iVar25;
            *(char *)puVar32 = (char)(lStack_568 * (ulong)(uVar10 + iVar15) + 0x80000000 >> 0x20);
            iVar15 = (uVar10 + iVar15) - *puVar44;
            puVar41 = puVar44 + 1;
            *puVar44 = uVar10;
            puVar44 = puVar41;
            if (puVar39 <= puVar41) {
              puVar44 = puVar42;
            }
            iVar25 = uVar10 - *puVar43;
            puVar41 = puVar43 + 1;
            *puVar43 = uVar21;
            puVar43 = puVar41;
            if (puVar42 <= puVar41) {
              puVar43 = puVar3;
            }
            iVar29 = uVar21 - *puVar38;
            puVar41 = puVar38 + 1;
            *puVar38 = uVar20 >> 0x18;
            puVar38 = puVar41;
            if (puVar3 <= puVar41) {
              puVar38 = puVar11;
            }
          }
          func_0x000108362590();
          puVar33 = (uint *)((long)puVar33 + extraout_x8_00);
          puVar22 = extraout_x15_01;
        }
        break;
      case 4:
        uVar40 = *param_2;
        func_0x0001083625d0();
        puVar22 = extraout_x15_02;
        uStack_5d0 = extraout_x10;
        for (uVar46 = extraout_x11_00; uVar46 != (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
            uVar46 = uVar46 + 1) {
          _bzero(puVar11,extraout_x9);
          uVar21 = 0;
          puVar37 = (undefined1 *)((long)puVar12 + uVar46);
          puVar33 = puVar3;
          puVar32 = puVar11;
          for (uStack_5b0 = uVar40; uStack_5b0 < uStack_5d0; uStack_5b0 = uStack_5b0 + 2) {
            uVar10 = (uint)&uStack_5b0;
            FUN_10833a314();
            func_0x0001083625e0(uVar21 + uVar10);
            *puVar33 = extraout_w8_01;
            func_0x0001083625b0();
            uVar21 = extraout_w8_02 - extraout_w9_00;
            puVar22 = puVar32 + 1;
            *puVar32 = uVar10;
            if (puVar3 <= puVar22) {
              puVar22 = extraout_x12;
            }
            puVar37 = puVar37 + lVar45;
            puVar33 = puVar33 + 1;
            puVar32 = puVar22;
          }
          puVar22 = puVar33;
          puVar38 = puVar32;
          if ((extraout_w8_00 & ((int)extraout_w8_00 >> 0x1f ^ 0xffffffffU)) != 0) {
            do {
              func_0x0001083625e0();
              puVar33 = puVar22 + 1;
              *puVar22 = uVar21;
              func_0x0001083625b0();
              uVar21 = uVar21 - extraout_w9_01;
              puVar32 = puVar38 + 1;
              *puVar38 = 0;
              if (puVar3 <= puVar32) {
                puVar32 = extraout_x12_00;
              }
              puVar37 = puVar37 + lVar45;
              puVar22 = puVar33;
              puVar38 = puVar32;
            } while (extraout_w8_03 != 1);
          }
          puVar34 = (undefined1 *)((long)puVar12 + uVar46) + lVar13;
          _bzero(puVar11,extraout_x9);
          iVar29 = 0;
          iVar25 = 0;
          iVar15 = 0;
          uStack_5b0 = uStack_5d0;
          puVar22 = puVar11;
          puVar38 = puVar42;
          while (puVar37 < puVar34) {
            puVar34 = puVar34 + -lVar45;
            uStack_5b0 = uStack_5b0 - 2;
            uVar21 = (uint)&uStack_5b0;
            FUN_10833a314();
            uVar10 = iVar29 + uVar21 + iVar25;
            *puVar34 = (char)(lStack_568 * (ulong)(uVar10 + iVar15) + 0x80000000 >> 0x20);
            iVar15 = (uVar10 + iVar15) - *puVar38;
            puVar22 = puVar38 + 1;
            *puVar38 = uVar10;
            puVar38 = puVar22;
            if (puVar39 <= puVar22) {
              puVar38 = puVar42;
            }
            iVar25 = uVar10 - *puVar33;
            puVar44 = puVar33 + 1;
            *puVar33 = iVar29 + uVar21;
            func_0x0001083625b0();
            iVar29 = extraout_w8_04 - extraout_w9_02;
            puVar43 = puVar32 + 1;
            *puVar32 = uVar21;
            puVar22 = extraout_x15_03;
            puVar33 = puVar44;
            puVar32 = puVar43;
            if (puVar3 <= puVar43) {
              puVar32 = extraout_x15_03;
            }
          }
          uVar40 = uVar40 + (uint)param_2[3];
          uStack_5d0 = uStack_5d0 + (uint)param_2[3];
        }
      }
      uVar40 = uStack_590;
      iVar25 = uStack_588._4_4_;
      iVar15 = uStack_588._4_4_ - uVar7;
      puVar22 = puVar22 + iStack_580;
      puVar32 = puVar22 + iStack_57c;
      puVar3 = puVar32 + (int)uStack_578;
      pbVar30 = (byte *)((long)puVar12 + lVar45 + -1);
      for (uVar46 = 0; uVar46 != (uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU)); uVar46 = uVar46 + 1
          ) {
        puVar44 = (uint *)((long)puVar12 + uVar46 * lVar45);
        uVar17 = *param_3;
        uVar18 = param_3[3];
        lVar13 = (long)(int)uVar18;
        func_0x000108362600();
        uVar21 = 0;
        iVar26 = 0;
        iVar29 = 0;
        puVar37 = (undefined1 *)(uVar17 + uVar46);
        puVar39 = puVar32;
        puVar42 = puVar11;
        puVar38 = puVar44;
        puVar33 = puVar22;
        while (puVar38 < (uint *)((long)puVar44 + lVar45)) {
          uVar20 = *puVar38;
          uVar21 = uVar21 + (byte)uVar20;
          uVar10 = uVar21 + iVar26;
          *puVar37 = (char)(uVar40 * (uVar10 + iVar29) + 0x80000000 >> 0x20);
          iVar29 = (uVar10 + iVar29) - *puVar39;
          puVar43 = puVar39 + 1;
          *puVar39 = uVar10;
          puVar39 = puVar43;
          if (puVar3 <= puVar43) {
            puVar39 = puVar32;
          }
          iVar26 = uVar10 - *puVar33;
          puVar43 = puVar33 + 1;
          *puVar33 = uVar21;
          puVar33 = puVar43;
          if (puVar32 <= puVar43) {
            puVar33 = puVar22;
          }
          uVar21 = uVar21 - *puVar42;
          puVar43 = puVar42 + 1;
          *puVar42 = (uint)(byte)uVar20;
          puVar42 = puVar43;
          if (puVar22 <= puVar43) {
            puVar42 = puVar11;
          }
          puVar37 = puVar37 + lVar13;
          puVar38 = (uint *)((long)puVar38 + 1);
        }
        for (iVar27 = 0; (int)uVar7 < iVar25 && iVar27 < iVar15; iVar27 = iVar27 + 1) {
          uVar10 = iVar26 + uVar21;
          *puVar37 = (char)(uVar40 * (iVar29 + uVar10) + 0x80000000 >> 0x20);
          iVar29 = (iVar29 + uVar10) - *puVar39;
          puVar38 = puVar39 + 1;
          *puVar39 = uVar10;
          puVar39 = puVar38;
          if (puVar3 <= puVar38) {
            puVar39 = puVar32;
          }
          iVar26 = uVar10 - *puVar33;
          puVar38 = puVar33 + 1;
          *puVar33 = uVar21;
          puVar33 = puVar38;
          if (puVar32 <= puVar38) {
            puVar33 = puVar22;
          }
          uVar21 = uVar21 - *puVar42;
          puVar38 = puVar42 + 1;
          *puVar42 = 0;
          puVar42 = puVar38;
          if (puVar22 <= puVar38) {
            puVar42 = puVar11;
          }
          puVar37 = puVar37 + lVar13;
        }
        puVar34 = (undefined1 *)(uVar17 + uVar46) + (uint)((int)uVar18 * (iVar19 - iVar4));
        func_0x000108362600();
        iVar27 = 0;
        iVar26 = 0;
        iVar29 = 0;
        pbVar23 = pbVar30;
        while (puVar37 < puVar34) {
          puVar34 = puVar34 + -lVar13;
          pbVar24 = pbVar23 + -1;
          bVar5 = *pbVar23;
          uVar21 = iVar27 + (uint)bVar5;
          uVar10 = uVar21 + iVar26;
          *puVar34 = (char)(uVar40 * (uVar10 + iVar29) + 0x80000000 >> 0x20);
          iVar29 = (uVar10 + iVar29) - *puVar39;
          puVar38 = puVar39 + 1;
          *puVar39 = uVar10;
          puVar39 = puVar38;
          if (puVar3 <= puVar38) {
            puVar39 = puVar32;
          }
          iVar26 = uVar10 - *puVar33;
          puVar38 = puVar33 + 1;
          *puVar33 = uVar21;
          puVar33 = puVar38;
          if (puVar32 <= puVar38) {
            puVar33 = puVar22;
          }
          iVar27 = uVar21 - *puVar42;
          puVar38 = puVar42 + 1;
          *puVar42 = (uint)bVar5;
          pbVar23 = pbVar24;
          puVar42 = puVar38;
          if (puVar22 <= puVar38) {
            puVar42 = puVar11;
          }
        }
        pbVar30 = pbVar30 + lVar45;
      }
      goto LAB_10836117c;
    }
  }
  else {
    FUN_108351120(auStack_4c8);
    FUN_108351120(dVar47,&lStack_568);
    uVar31 = (long)iStack_498 - 1;
    uVar36 = (ulong)(iStack_538 - 1);
    func_0x000108361474(auStack_4c8,auStack_98);
    func_0x000108361474(&lStack_568,auStack_a4);
    FUN_108360240(&uStack_590,uVar31,uVar36,param_2);
    *param_3 = uStack_590;
    param_3[2] = CONCAT44(iStack_57c,iStack_580);
    param_3[1] = uStack_588;
    *(uint *)(param_3 + 3) = uStack_578;
    *(undefined1 *)((long)param_3 + 0x1c) = uStack_574;
    if (*param_2 != 0) {
      if (uStack_590 == 0) {
        func_0x000108362644();
        uVar36 = (long)iStack_498;
        goto LAB_10836135c;
      }
      if (4 < *(byte *)((long)param_2 + 0x1c)) {
LAB_1083613b0:
        goto LAB_1083613bc;
      }
      uVar7 = (int)param_2[2] - (int)param_2[1];
      uVar46 = param_3[2];
      iVar15 = *(int *)((long)param_3 + 0x14);
      uVar40 = param_3[1];
      iVar25 = *(int *)((long)param_3 + 0xc);
      iVar19 = (int)uVar31;
      switch(*(byte *)((long)param_2 + 0x1c)) {
      case 0:
        func_0x00010836266c(uStack_590 + uVar31);
        FUN_1083614a4(FUN_108361548,1);
        uVar18 = uVar31;
        goto code_r0x0001083611f0;
      case 1:
        func_0x00010836266c(uStack_590 + (long)iVar19);
        FUN_1083614a4(0,8);
        break;
      case 2:
        goto LAB_1083613b0;
      case 3:
        func_0x00010836266c(uStack_590 + (long)iVar19);
        FUN_1083614a4(0x108361578,0x20);
        break;
      case 4:
        func_0x00010836266c(uStack_590 + (long)iVar19);
        FUN_1083614a4(0x108361598,0x10);
      }
      uVar18 = (long)iVar19;
code_r0x0001083611f0:
      if (iStack_498 - 2U < 4) {
        iVar19 = (int)uVar46 - (int)uVar40;
        uVar21 = iVar15 - iVar25;
        uVar46 = *param_3;
        uVar8 = *(undefined2 *)((ulong)auStack_98 | 6);
        uStack_520 = CONCAT26(uVar8,CONCAT24(uVar8,CONCAT22(uVar8,uVar8)));
        uStack_518 = CONCAT26(uVar8,CONCAT24(uVar8,CONCAT22(uVar8,uVar8)));
        lVar13 = uVar46 + uVar18;
        for (uVar35 = 0; uVar35 != (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU));
            uVar35 = uVar35 + 1) {
          uVar40 = 0;
          uStack_588 = 0x80008000800080;
          uStack_590 = 0x80008000800080;
          iVar15 = iVar19;
          while( true ) {
            uStack_5a8 = 0x80008000800080;
            uStack_5b0 = 0x80008000800080;
            if ((int)(uVar7 - 8) < (int)uVar40) break;
            lVar45 = lVar13 + uVar40;
            lVar14 = 8;
            FUN_108361b94(lVar45,8,0);
            lStack_4e0 = lVar45;
            lStack_4d8 = lVar14;
            func_0x00010836255c();
            func_0x000108361c24(uStack_590,uVar46 + uVar40,8);
            uStack_588 = uStack_5a8;
            uStack_590 = uStack_5b0;
            uVar40 = uVar40 + 8;
            iVar15 = iVar15 + -8;
          }
          lVar45 = uVar7 - uVar40;
          if (0 < (int)lVar45) {
            lVar14 = lVar13 + uVar40;
            FUN_108361b94(lVar14,lVar45,0);
            lStack_4e0 = lVar14;
            lStack_4d8 = lVar45;
            func_0x00010836255c();
            func_0x00010836260c();
            uStack_588 = uStack_5a8;
            uStack_590 = uStack_5b0;
            if (7 < iVar15) {
              iVar15 = 8;
            }
            uVar40 = (ulong)(uint)(iVar15 + (int)uVar40);
          }
          if (0 < iVar19 - (int)uVar40) {
            func_0x00010836260c();
          }
          lVar13 = lVar13 + (ulong)uStack_578;
          uVar46 = uVar46 + uStack_578;
        }
      }
    }
LAB_10836135c:
    func_0x000108362580(uStack_88);
    if (extraout_x9_00 == extraout_x8_02) {
      return uVar31 & 0xffffffff | uVar36 << 0x20;
    }
    ___stack_chk_fail();
LAB_10836139c:
    _abort();
  }
LAB_1083613a0:
LAB_1083613bc:
  FUN_10841076c(&UNK_10f48f290);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1083613d0);
  (*pcVar9)();
}



/* Entry: 1083613f0; end: 1083614a3;  */

void FUN_1083613f0(double param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = (uint)(param_1 * 3.0 * 2.5066282746310002 * 0.25 + 0.5);
  if ((int)uVar5 < 2) {
    uVar5 = 1;
  }
  uVar3 = uVar5 - 1;
  *(uint *)(param_2 + 2) = uVar3;
  *(uint *)((long)param_2 + 0x14) = uVar3;
  bVar4 = (uVar5 & 1) != 0;
  uVar2 = uVar5;
  if (bVar4) {
    uVar2 = uVar3;
  }
  *(uint *)(param_2 + 3) = uVar2;
  iVar1 = uVar3 + (uVar2 >> 1);
  *(int *)(param_2 + 1) = iVar1;
  *(uint *)((long)param_2 + 0xc) = iVar1 * 2 | 1;
  iVar1 = uVar5 * uVar5;
  if (bVar4) {
    iVar1 = 0;
  }
  *param_2 = (long)((1.0 / (double)(iVar1 + uVar5 * uVar5 * uVar5)) * 4294967296.0);
  return;
}



/* Entry: 1083614a4; end: 108361547;  */

void FUN_1083614a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 in_x6;
  
  switch(param_3) {
  case 1:
    func_0x000108362624(in_x6);
    pcVar1 = FUN_108361704;
    uVar2 = 1;
    break;
  case 2:
    func_0x000108362624(in_x6);
    pcVar1 = FUN_108361770;
    uVar2 = 2;
    break;
  case 3:
    func_0x000108362624(in_x6);
    pcVar1 = FUN_10836180c;
    uVar2 = 3;
    break;
  case 4:
    func_0x000108362624(in_x6);
    pcVar1 = (code *)0x1083618e8;
    uVar2 = 4;
    break;
  default:
    goto LAB_10836153c;
  }
  FUN_1083615e8(param_1,param_2,pcVar1,uVar2);
LAB_10836153c:
  return;
}



/* Entry: 108361548; end: 1083615e7;  */

void FUN_108361548(char *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  
  bVar1 = *param_2;
  uVar3 = 7;
  for (uVar2 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU)); uVar2 != 0;
      uVar2 = uVar2 - 1) {
    *param_1 = -((bVar1 >> (ulong)(uVar3 & 0x1f) & 1) != 0);
    uVar3 = uVar3 - 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 1083615e8; end: 108361703;  */

void FUN_1083615e8(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *in_x4;
  int in_w7;
  int iVar3;
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
  
  uVar1 = *in_x4;
  uStack_78 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  uStack_80 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  uVar1 = in_x4[1];
  uStack_88 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  uStack_90 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  uVar1 = in_x4[2];
  uVar2 = in_x4[3];
  uStack_a8 = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
  uStack_b0 = CONCAT26(uVar2,CONCAT24(uVar2,CONCAT22(uVar2,uVar2)));
  uStack_98 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  uStack_a0 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  uVar1 = in_x4[4];
  uStack_b8 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  uStack_c0 = CONCAT26(uVar1,CONCAT24(uVar1,CONCAT22(uVar1,uVar1)));
  for (iVar3 = 0; iVar3 <= in_w7 + -8; iVar3 = iVar3 + 8) {
    func_0x000108362678(&uStack_c0);
    FUN_108361a00();
  }
  if (0 < in_w7 - iVar3) {
    func_0x000108362678(&uStack_c0);
    FUN_108361a00();
  }
  return;
}



/* Entry: 108361704; end: 10836176f;  */

void FUN_108361704(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  undefined8 in_register_00005028;
  
  func_0x0001083625a4();
  FUN_1083624d8();
  uVar1 = param_1;
  uVar2 = in_register_00005008;
  FUN_1083624d8();
  func_0x000108362524();
  unaff_x20[1] = CONCAT26((short)((ulong)in_register_00005028 >> 0x30) +
                          (short)((ulong)in_register_00005008 >> 0x30),
                          CONCAT24((short)((ulong)in_register_00005028 >> 0x20) +
                                   (short)((ulong)in_register_00005008 >> 0x20),
                                   CONCAT22((short)((ulong)in_register_00005028 >> 0x10) +
                                            (short)((ulong)in_register_00005008 >> 0x10),
                                            (short)in_register_00005028 +
                                            (short)in_register_00005008)));
  *unaff_x20 = CONCAT26((short)((ulong)param_2 >> 0x30) + (short)((ulong)param_1 >> 0x30),
                        CONCAT24((short)((ulong)param_2 >> 0x20) + (short)((ulong)param_1 >> 0x20),
                                 CONCAT22((short)((ulong)param_2 >> 0x10) +
                                          (short)((ulong)param_1 >> 0x10),
                                          (short)param_2 + (short)param_1)));
  func_0x00010836268c();
  *unaff_x19 = uVar1;
  unaff_x19[1] = uVar2;
  return;
}



/* Entry: 108361770; end: 10836180b;  */

void FUN_108361770(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_register_00005028;
  undefined8 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  
  func_0x0001083625a4();
  FUN_1083624d8();
  uVar1 = param_1;
  uVar3 = in_register_00005008;
  FUN_1083624d8();
  uVar2 = uVar1;
  uVar4 = uVar3;
  FUN_1083624d8();
  func_0x000108362524();
  sVar7 = (short)((ulong)uVar1 >> 0x10);
  sVar8 = (short)((ulong)uVar1 >> 0x20);
  sVar9 = (short)((ulong)uVar1 >> 0x30);
  sVar10 = (short)((ulong)uVar3 >> 0x10);
  sVar11 = (short)((ulong)uVar3 >> 0x20);
  sVar12 = (short)((ulong)uVar3 >> 0x30);
  unaff_x20[1] = CONCAT26((short)((ulong)in_register_00005028 >> 0x30) + sVar12,
                          CONCAT24((short)((ulong)in_register_00005028 >> 0x20) + sVar11,
                                   CONCAT22((short)((ulong)in_register_00005028 >> 0x10) + sVar10,
                                            (short)in_register_00005028 + (short)uVar3)));
  *unaff_x20 = CONCAT26((short)((ulong)param_2 >> 0x30) + sVar9,
                        CONCAT24((short)((ulong)param_2 >> 0x20) + sVar8,
                                 CONCAT22((short)((ulong)param_2 >> 0x10) + sVar7,
                                          (short)param_2 + (short)uVar1)));
  uVar6 = in_stack_00000000[1];
  uVar5 = *in_stack_00000000;
  unaff_x19[1] = CONCAT26((short)((ulong)uVar6 >> 0x30) +
                          (short)((ulong)in_register_00005008 >> 0x30),
                          CONCAT24((short)((ulong)uVar6 >> 0x20) +
                                   (short)((ulong)in_register_00005008 >> 0x20),
                                   CONCAT22((short)((ulong)uVar6 >> 0x10) +
                                            (short)((ulong)in_register_00005008 >> 0x10),
                                            (short)uVar6 + (short)in_register_00005008)));
  *unaff_x19 = CONCAT26((short)((ulong)uVar5 >> 0x30) + (short)((ulong)param_1 >> 0x30),
                        CONCAT24((short)((ulong)uVar5 >> 0x20) + (short)((ulong)param_1 >> 0x20),
                                 CONCAT22((short)((ulong)uVar5 >> 0x10) +
                                          (short)((ulong)param_1 >> 0x10),
                                          (short)uVar5 + (short)param_1)));
  uVar6 = in_stack_00000008[1];
  uVar5 = *in_stack_00000008;
  in_stack_00000000[1] =
       CONCAT26((short)((ulong)uVar6 >> 0x30) + sVar12,
                CONCAT24((short)((ulong)uVar6 >> 0x20) + sVar11,
                         CONCAT22((short)((ulong)uVar6 >> 0x10) + sVar10,(short)uVar6 + (short)uVar3
                                 )));
  *in_stack_00000000 =
       CONCAT26((short)((ulong)uVar5 >> 0x30) + sVar9,
                CONCAT24((short)((ulong)uVar5 >> 0x20) + sVar8,
                         CONCAT22((short)((ulong)uVar5 >> 0x10) + sVar7,(short)uVar5 + (short)uVar1)
                        ));
  func_0x00010836268c();
  in_stack_00000008[1] = uVar4;
  *in_stack_00000008 = uVar2;
  return;
}



/* Entry: 10836180c; end: 1083619ff;  */

void FUN_10836180c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_register_00005028;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  func_0x0001083625a4();
  FUN_1083624d8();
  uVar6 = param_1;
  uVar8 = in_register_00005008;
  FUN_1083624d8();
  uVar1 = uVar6;
  uVar3 = uVar8;
  FUN_1083624d8();
  uVar2 = uVar1;
  uVar4 = uVar3;
  FUN_1083624d8();
  func_0x000108362524();
  sVar15 = (short)((ulong)uVar1 >> 0x10);
  sVar16 = (short)((ulong)uVar1 >> 0x20);
  sVar17 = (short)((ulong)uVar1 >> 0x30);
  sVar18 = (short)((ulong)uVar3 >> 0x10);
  sVar19 = (short)((ulong)uVar3 >> 0x20);
  sVar20 = (short)((ulong)uVar3 >> 0x30);
  unaff_x20[1] = CONCAT26((short)((ulong)in_register_00005028 >> 0x30) + sVar20,
                          CONCAT24((short)((ulong)in_register_00005028 >> 0x20) + sVar19,
                                   CONCAT22((short)((ulong)in_register_00005028 >> 0x10) + sVar18,
                                            (short)in_register_00005028 + (short)uVar3)));
  *unaff_x20 = CONCAT26((short)((ulong)param_2 >> 0x30) + sVar17,
                        CONCAT24((short)((ulong)param_2 >> 0x20) + sVar16,
                                 CONCAT22((short)((ulong)param_2 >> 0x10) + sVar15,
                                          (short)param_2 + (short)uVar1)));
  uVar7 = in_stack_00000000[1];
  uVar5 = *in_stack_00000000;
  sVar9 = (short)((ulong)uVar6 >> 0x10);
  sVar10 = (short)((ulong)uVar6 >> 0x20);
  sVar11 = (short)((ulong)uVar6 >> 0x30);
  sVar12 = (short)((ulong)uVar8 >> 0x10);
  sVar13 = (short)((ulong)uVar8 >> 0x20);
  sVar14 = (short)((ulong)uVar8 >> 0x30);
  unaff_x19[1] = CONCAT26((short)((ulong)uVar7 >> 0x30) + sVar14,
                          CONCAT24((short)((ulong)uVar7 >> 0x20) + sVar13,
                                   CONCAT22((short)((ulong)uVar7 >> 0x10) + sVar12,
                                            (short)uVar7 + (short)uVar8)));
  *unaff_x19 = CONCAT26((short)((ulong)uVar5 >> 0x30) + sVar11,
                        CONCAT24((short)((ulong)uVar5 >> 0x20) + sVar10,
                                 CONCAT22((short)((ulong)uVar5 >> 0x10) + sVar9,
                                          (short)uVar5 + (short)uVar6)));
  uVar7 = in_stack_00000008[1];
  uVar5 = *in_stack_00000008;
  in_stack_00000000[1] =
       CONCAT26((short)((ulong)uVar7 >> 0x30) + (short)((ulong)in_register_00005008 >> 0x30),
                CONCAT24((short)((ulong)uVar7 >> 0x20) +
                         (short)((ulong)in_register_00005008 >> 0x20),
                         CONCAT22((short)((ulong)uVar7 >> 0x10) +
                                  (short)((ulong)in_register_00005008 >> 0x10),
                                  (short)uVar7 + (short)in_register_00005008)));
  *in_stack_00000000 =
       CONCAT26((short)((ulong)uVar5 >> 0x30) + (short)((ulong)param_1 >> 0x30),
                CONCAT24((short)((ulong)uVar5 >> 0x20) + (short)((ulong)param_1 >> 0x20),
                         CONCAT22((short)((ulong)uVar5 >> 0x10) + (short)((ulong)param_1 >> 0x10),
                                  (short)uVar5 + (short)param_1)));
  uVar7 = in_stack_00000010[1];
  uVar5 = *in_stack_00000010;
  in_stack_00000008[1] =
       CONCAT26((short)((ulong)uVar7 >> 0x30) + sVar14,
                CONCAT24((short)((ulong)uVar7 >> 0x20) + sVar13,
                         CONCAT22((short)((ulong)uVar7 >> 0x10) + sVar12,(short)uVar7 + (short)uVar8
                                 )));
  *in_stack_00000008 =
       CONCAT26((short)((ulong)uVar5 >> 0x30) + sVar11,
                CONCAT24((short)((ulong)uVar5 >> 0x20) + sVar10,
                         CONCAT22((short)((ulong)uVar5 >> 0x10) + sVar9,(short)uVar5 + (short)uVar6)
                        ));
  uVar8 = in_stack_00000018[1];
  uVar6 = *in_stack_00000018;
  in_stack_00000010[1] =
       CONCAT26((short)((ulong)uVar8 >> 0x30) + sVar20,
                CONCAT24((short)((ulong)uVar8 >> 0x20) + sVar19,
                         CONCAT22((short)((ulong)uVar8 >> 0x10) + sVar18,(short)uVar8 + (short)uVar3
                                 )));
  *in_stack_00000010 =
       CONCAT26((short)((ulong)uVar6 >> 0x30) + sVar17,
                CONCAT24((short)((ulong)uVar6 >> 0x20) + sVar16,
                         CONCAT22((short)((ulong)uVar6 >> 0x10) + sVar15,(short)uVar6 + (short)uVar1
                                 )));
  func_0x00010836268c();
  in_stack_00000018[1] = uVar4;
  *in_stack_00000018 = uVar2;
  return;
}



/* Entry: 108361a00; end: 108361b93;  */

void FUN_108361a00(undefined8 param_1,code *param_2,uint param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10,long param_11,uint param_12,undefined4 param_13,long param_14,
                  long param_15)

{
  long lVar1;
  long *plVar2;
  uint **ppuVar3;
  uint **ppuVar4;
  ulong uVar5;
  long lStack_110;
  ulong uStack_108;
  uint *puStack_100;
  undefined8 *puStack_f8;
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
  uint auStack_6c [3];
  
  uStack_88 = 0x80008000800080;
  uStack_90 = 0x80008000800080;
  uStack_78 = 0x80008000800080;
  uStack_80 = 0x80008000800080;
  uStack_98 = 0x80008000800080;
  uStack_a0 = 0x80008000800080;
  uStack_b8 = 0x80008000800080;
  uStack_c0 = 0x80008000800080;
  uStack_a8 = 0x80008000800080;
  uStack_b0 = 0x80008000800080;
  puStack_100 = auStack_6c;
  puStack_f8 = &param_15;
  uStack_d8 = 0x80008000800080;
  uStack_e0 = 0x80008000800080;
  uStack_c8 = 0x80008000800080;
  uStack_d0 = 0x80008000800080;
  uStack_e8 = 0x80008000800080;
  uStack_f0 = 0x80008000800080;
  auStack_6c[0] = param_4;
  for (param_12 = param_12 & ((int)param_12 >> 0x1f ^ 0xffffffffU); param_12 != 0;
      param_12 = param_12 - 1) {
    uVar5 = (ulong)auStack_6c[0];
    lVar1 = param_10;
    FUN_108361b94(param_10,uVar5,param_1);
    plVar2 = &lStack_110;
    lStack_110 = lVar1;
    uStack_108 = uVar5;
    (*param_2)(plVar2,param_5,param_6,param_7,param_8,param_9,&uStack_80,&uStack_90,&uStack_a0,
               &uStack_b0,&uStack_c0,&uStack_d0,&uStack_e0,&uStack_f0);
    func_0x0001083625f8(plVar2);
    param_10 = param_10 + param_11;
    param_14 = param_14 + param_15;
  }
  ppuVar3 = &puStack_100;
  FUN_108361c98(uStack_80,ppuVar3,param_14,&uStack_90);
  if (1 < param_3) {
    ppuVar4 = &puStack_100;
    FUN_108361c98(uStack_a0,ppuVar4,ppuVar3,&uStack_b0);
    if (param_3 != 2) {
      ppuVar3 = &puStack_100;
      FUN_108361c98(uStack_c0,ppuVar3,ppuVar4,&uStack_d0);
      if (3 < param_3) {
        FUN_108361c98(uStack_e0,&puStack_100,ppuVar3,&uStack_f0);
      }
    }
  }
  return;
}



/* Entry: 108361b94; end: 108361c97;  */

undefined1  [16] FUN_108361b94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_20;
  puVar3 = param_1;
  func_0x000108362580(param_3);
  uStack_18 = extraout_x9;
  uStack_20 = 0;
  if (extraout_x8 == (code *)0x0) {
    uVar2 = (uint)param_2;
    puVar1 = puVar3;
    if ((int)uVar2 < 8) {
      for (uVar4 = 0; puVar1 = &uStack_20, (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar4;
          uVar4 = uVar4 + 1) {
        *(undefined1 *)((long)&uStack_20 + uVar4) = *(undefined1 *)((long)puVar3 + uVar4);
      }
    }
  }
  else {
    (*extraout_x8)();
    param_1 = puVar1;
    puVar1 = &uStack_20;
  }
  uVar6 = *puVar1;
  uVar7 = 0;
  func_0x000108362580(uStack_18);
  if (extraout_x9_00 != extraout_x8_00) {
    ___stack_chk_fail();
    puStack_30 = &stack0xfffffffffffffff0;
    uStack_28 = 0x108361c24;
    uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar6 = CONCAT17((char)((ulong)uVar7 >> 0x38),
                     CONCAT16((char)((ulong)uVar7 >> 0x28),
                              CONCAT15((char)((ulong)uVar7 >> 0x18),
                                       CONCAT14((char)((ulong)uVar7 >> 8),
                                                CONCAT13((char)((ulong)uVar6 >> 0x38),
                                                         CONCAT12((char)((ulong)uVar6 >> 0x28),
                                                                  CONCAT11((char)((ulong)uVar6 >>
                                                                                 0x18),
                                                                           (char)((ulong)uVar6 >> 8)
                                                                          )))))));
    uVar2 = (uint)puVar1;
    if (uVar2 == 8) {
      *param_1 = uVar6;
    }
    else {
      uStack_40 = uVar6;
      for (uVar4 = 0; (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) != uVar4; uVar4 = uVar4 + 1) {
        *(undefined1 *)((long)param_1 + uVar4) = *(undefined1 *)((long)&uStack_40 + uVar4);
      }
    }
    func_0x000108362580(uStack_38);
    if (extraout_x9_01 != extraout_x8_01) {
      ___stack_chk_fail();
      func_0x0001083625f8();
      lVar5 = *(long *)param_1[1];
      uVar4 = (ulong)*(uint *)*param_1;
      func_0x0001083625f8(*param_2);
      auVar10._8_8_ = uVar4;
      auVar10._0_8_ = (long)puVar1 + *(long *)param_1[1] + lVar5;
      return auVar10;
    }
    auVar9._8_8_ = puVar1;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  auVar8._2_2_ = (short)(char)((ulong)uVar6 >> 8) << 8;
  auVar8._0_2_ = (short)(char)uVar6 << 8;
  auVar8._4_2_ = (short)(char)((ulong)uVar6 >> 0x10) << 8;
  auVar8._6_2_ = (short)(char)((ulong)uVar6 >> 0x18) << 8;
  auVar8._10_2_ = (short)(char)((ulong)uVar6 >> 0x28) << 8;
  auVar8._8_2_ = (short)(char)((ulong)uVar6 >> 0x20) << 8;
  auVar8._12_2_ = (short)(char)((ulong)uVar6 >> 0x30) << 8;
  auVar8._14_2_ = (short)(char)((ulong)uVar6 >> 0x38) << 8;
  return auVar8;
}



/* Entry: 108361c98; end: 108361cf3;  */

long FUN_108361c98(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  func_0x0001083625f8(param_1,*(undefined4 *)*param_1);
  lVar1 = *(long *)param_1[1];
  func_0x0001083625f8(*param_3);
  return param_2 + lVar1 + *(long *)param_1[1];
}



/* Entry: 108361cf4; end: 108361d47;  */

undefined1  [16]
FUN_108361cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = NEON_umull(param_1,param_3,2);
  auVar3 = NEON_umull(param_2,param_4,2);
  uVar1 = CONCAT26(auVar2._14_2_,CONCAT24(auVar2._10_2_,CONCAT22(auVar2._6_2_,auVar2._2_2_)));
  auVar2._8_2_ = auVar3._2_2_;
  auVar2._0_8_ = uVar1;
  auVar2._10_2_ = auVar3._6_2_;
  auVar2._12_2_ = auVar3._10_2_;
  auVar2._14_2_ = auVar3._14_2_;
  auVar3._8_8_ = auVar2._8_8_;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 108361d48; end: 108361e2b;  */

void FUN_108361d48(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  
  func_0x0001083625a4();
  func_0x00010836250c();
  uVar2 = param_1;
  uVar4 = param_2;
  func_0x00010836250c();
  uVar3 = unaff_x20[1];
  uVar1 = *unaff_x20;
  sVar5 = (short)((ulong)param_1 >> 0x10);
  sVar6 = (short)((ulong)param_1 >> 0x20);
  sVar7 = (short)((ulong)param_1 >> 0x30);
  sVar8 = (short)((ulong)param_2 >> 0x10);
  sVar9 = (short)((ulong)param_2 >> 0x20);
  sVar10 = (short)((ulong)param_2 >> 0x30);
  unaff_x20[1] = CONCAT26((short)((ulong)uVar3 >> 0x30) + sVar10 + (short)((ulong)uVar4 >> 0x20),
                          CONCAT24((short)((ulong)uVar3 >> 0x20) + sVar9 +
                                   (short)((ulong)uVar4 >> 0x10),
                                   CONCAT22((short)((ulong)uVar3 >> 0x10) + sVar8 + (short)uVar4,
                                            (short)uVar3 + (short)param_2 +
                                            (short)((ulong)uVar2 >> 0x30))));
  *unaff_x20 = CONCAT26((short)((ulong)uVar1 >> 0x30) + sVar7 + (short)((ulong)uVar2 >> 0x20),
                        CONCAT24((short)((ulong)uVar1 >> 0x20) + sVar6 +
                                 (short)((ulong)uVar2 >> 0x10),
                                 CONCAT22((short)((ulong)uVar1 >> 0x10) + sVar5 + (short)uVar2,
                                          (short)uVar1 + (short)param_1)));
  uVar2 = *unaff_x19;
  unaff_x19[1] = unaff_x19[1];
  *unaff_x19 = CONCAT26((short)((ulong)uVar2 >> 0x30),
                        CONCAT24((short)((ulong)uVar2 >> 0x20),
                                 CONCAT22((short)((ulong)uVar2 >> 0x10),
                                          (short)uVar2 + (short)((ulong)uVar4 >> 0x30))));
  uVar4 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x20[1] = CONCAT26((short)((ulong)uVar4 >> 0x30) + sVar8,
                          CONCAT24((short)((ulong)uVar4 >> 0x20) + (short)param_2,
                                   CONCAT22((short)((ulong)uVar4 >> 0x10) + sVar7,
                                            (short)uVar4 + sVar6)));
  *unaff_x20 = CONCAT26((short)((ulong)uVar2 >> 0x30) + sVar5,
                        CONCAT24((short)((ulong)uVar2 >> 0x20) + (short)param_1,(int)uVar2));
  uVar2 = *unaff_x19;
  unaff_x19[1] = unaff_x19[1];
  *unaff_x19 = CONCAT26((short)((ulong)uVar2 >> 0x30),
                        CONCAT24((short)((ulong)uVar2 >> 0x20),
                                 CONCAT22((short)((ulong)uVar2 >> 0x10) + sVar10,
                                          (short)uVar2 + sVar9)));
  return;
}



/* Entry: 108361e2c; end: 1083624d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108361e2c(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong uVar6;
  undefined2 extraout_w9;
  undefined8 *unaff_x19;
  short *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort uVar10;
  undefined8 extraout_d2;
  undefined8 extraout_var;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined6 uVar11;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  func_0x0001083625a4();
  func_0x0001083624f8();
  func_0x00010836250c();
  uVar2 = uVar1;
  uVar4 = uVar3;
  uVar5 = param_2;
  func_0x00010836250c();
  uVar10 = (ushort)uVar4;
  *(ulong *)(unaff_x20 + 4) =
       CONCAT26(unaff_x20[7] + (short)(uVar5 >> 0x30) + (short)(param_2 >> 0x20),
                CONCAT24(unaff_x20[6] + (short)(uVar5 >> 0x20) + (short)(param_2 >> 0x10),
                         CONCAT22(unaff_x20[5] + (short)(uVar5 >> 0x10) + (short)param_2,
                                  unaff_x20[4] + (short)uVar5 + (short)((uint)uVar3 >> 0x10))));
  *(ulong *)unaff_x20 =
       CONCAT26(unaff_x20[3] + (short)((uint)uVar4 >> 0x10) + (short)uVar3,
                CONCAT24(unaff_x20[2] + uVar10 + (short)((uint)uVar1 >> 0x10),
                         CONCAT22(unaff_x20[1] + (short)((uint)uVar2 >> 0x10) + (short)uVar1,
                                  *unaff_x20 + (short)uVar2)));
  uVar9 = 0;
  func_0x000108362658(uVar2);
  func_0x0001083625c0();
  unaff_x19[1] = extraout_var;
  *unaff_x19 = extraout_d2;
  func_0x00010836253c();
  func_0x00010836254c();
  auVar14 = _UNK_10df1dc50;
  auVar12._2_6_ = 0;
  auVar12._0_2_ = uVar10;
  auVar12[8] = (undefined1)extraout_w9;
  auVar12[9] = (undefined1)((ushort)extraout_w9 >> 8);
  auVar12._10_6_ = 0;
  auVar12 = NEON_ushl(auVar12,_UNK_10df1dc50,8);
  uVar6 = extraout_x8 | auVar12._0_8_ | auVar12._8_8_;
  uVar7 = *(undefined8 *)(unaff_x20 + 4);
  unaff_x20[4] = (short)uVar7 + (short)uVar6;
  unaff_x20[5] = (short)((ulong)uVar7 >> 0x10) + (short)(uVar6 >> 0x10);
  unaff_x20[6] = (short)((ulong)uVar7 >> 0x20) + (short)(uVar6 >> 0x20);
  unaff_x20[7] = (short)((ulong)uVar7 >> 0x30) + (short)(uVar6 >> 0x30);
  *unaff_x20 = *unaff_x20;
  unaff_x20[1] = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2];
  unaff_x20[3] = unaff_x20[3];
  auVar13._0_8_ = uVar5 >> 0x20 & 0xffff;
  auVar13[8] = (undefined1)(uVar5 >> 0x30);
  auVar13[9] = (undefined1)(uVar5 >> 0x38);
  auVar13._10_6_ = 0;
  auVar14 = NEON_ushl(auVar13,auVar14,8);
  uVar10 = CONCAT11(auVar14[9] | auVar14[1],auVar14[8] | auVar14[0]);
  uVar2 = CONCAT13(auVar14[0xb] | auVar14[3],CONCAT12(auVar14[10] | auVar14[2],uVar10));
  uVar11 = CONCAT15(auVar14[0xd] | auVar14[5],CONCAT14(auVar14[0xc] | auVar14[4],uVar2));
  uVar8 = unaff_x19[1];
  uVar7 = *unaff_x19;
  unaff_x19[1] = CONCAT26((short)((ulong)uVar8 >> 0x30) + (short)((ulong)uVar9 >> 0x30),
                          CONCAT24((short)((ulong)uVar8 >> 0x20) + (short)((ulong)uVar9 >> 0x20),
                                   CONCAT22((short)((ulong)uVar8 >> 0x10) +
                                            (short)((ulong)uVar9 >> 0x10),
                                            (short)uVar8 + (short)uVar9)));
  *unaff_x19 = CONCAT26((short)((ulong)uVar7 >> 0x30) +
                        (short)(CONCAT17(auVar14[0xf] | auVar14[7],
                                         CONCAT16(auVar14[0xe] | auVar14[6],uVar11)) >> 0x30),
                        CONCAT24((short)((ulong)uVar7 >> 0x20) + (short)((uint6)uVar11 >> 0x20),
                                 CONCAT22((short)((ulong)uVar7 >> 0x10) +
                                          ((ushort)((uint)uVar2 >> 0x10) | (ushort)(uVar5 >> 0x10)),
                                          (short)uVar7 + (uVar10 | (ushort)uVar5))));
  return;
}



/* Entry: 1083624d8; end: 1083624f7;  */

undefined8 FUN_1083624d8(undefined8 param_1)

{
  FUN_108361cf4();
  return param_1;
}



/* Entry: 1083624f8; end: 108362697;  */

undefined1  [16] FUN_1083624f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = NEON_umull(*param_1,*param_2,2);
  auVar3 = NEON_umull(param_1[1],param_2[1],2);
  uVar1 = CONCAT26(auVar2._14_2_,CONCAT24(auVar2._10_2_,CONCAT22(auVar2._6_2_,auVar2._2_2_)));
  auVar2._8_2_ = auVar3._2_2_;
  auVar2._0_8_ = uVar1;
  auVar2._10_2_ = auVar3._6_2_;
  auVar2._12_2_ = auVar3._10_2_;
  auVar2._14_2_ = auVar3._14_2_;
  auVar3._8_8_ = auVar2._8_8_;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 108362698; end: 108362787;  */

/* WARNING: Possible PIC construction at 0x0001083626c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083626c4) */
/* WARNING: Removing unreachable block (ram,0x000108362708) */
/* WARNING: Removing unreachable block (ram,0x0001083626c8) */
/* WARNING: Removing unreachable block (ram,0x000108362720) */
/* WARNING: Removing unreachable block (ram,0x0001083626dc) */
/* WARNING: Removing unreachable block (ram,0x0001083626e4) */
/* WARNING: Removing unreachable block (ram,0x000108362734) */
/* WARNING: Removing unreachable block (ram,0x000108362700) */
/* WARNING: Removing unreachable block (ram,0x000108362724) */

undefined1 * FUN_108362698(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined1 auStack_a8 [24];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_28;
  
  uStack_50 = 0;
  uStack_28 = 0;
  uStack_80 = param_3[1];
  uStack_88 = *param_3;
  uStack_70 = param_3[3];
  uStack_78 = param_3[2];
  uStack_60 = param_3[5];
  uStack_68 = param_3[4];
  uStack_58 = *(undefined4 *)(param_3 + 6);
  uStack_90 = param_1;
  uStack_8c = param_2;
  FUN_108391a80(auStack_a8,0x113826cd0,0,0x3c);
  return auStack_a8;
}



/* Entry: 108362788; end: 1083627eb;  */

bool FUN_108362788(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_1082a63ac(lVar1);
  lVar2 = *(long *)(lVar1 + 0x20);
  if (lVar2 == 0) {
    func_0x0001082a61d0(lVar1);
  }
  else {
    if (*(char *)(param_2 + 0x28) == '\x01') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    func_0x000108362d50(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x70),
                        *(undefined8 *)(param_1 + 0x80));
  }
  return lVar2 != 0;
}



/* Entry: 1083627ec; end: 108362827;  */

void FUN_1083627ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined1 *param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  *param_1 = *param_2;
  uVar3 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Could not recover jumptable at 0x00010833b34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108362828; end: 1083628b7;  */

void FUN_108362828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_e0 [88];
  undefined1 auStack_88 [88];
  
  func_0x000108362738(auStack_88,param_2,param_1);
  __Znwm(0x98);
  if (param_5 == 0) {
    _memcpy(auStack_e0,auStack_88,0x58);
    func_0x000108362ce0();
    FUN_1083628b8();
    func_0x000108362d30();
  }
  else {
    _memcpy(auStack_e0,auStack_88,0x58);
    func_0x000108362ce0();
    FUN_1083628b8();
    func_0x000108362cfc();
  }
  return;
}



/* Entry: 1083628b8; end: 108362923;  */

undefined8 * FUN_1083628b8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_110a3eba0;
  _memcpy(param_1 + 3,param_2,0x58);
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  uVar2 = *(undefined1 *)(param_3 + 0x1c);
  param_1[0xe] = 0;
  uVar3 = *(undefined8 *)(param_3 + 8);
  param_1[0x10] = *(undefined8 *)(param_3 + 0x10);
  param_1[0xf] = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar1;
  *(undefined1 *)((long)param_1 + 0x8c) = uVar2;
  param_1[0x12] = param_4;
  FUN_108331b54(param_4);
  return param_1;
}



/* Entry: 108362924; end: 1083629cb;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_108362924(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  undefined8 uVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_98;
  undefined1 auStack_90 [64];
  undefined8 auStack_50 [4];
  undefined1 *puStack_30;
  byte bStack_28;
  
  auStack_50[0]._0_1_ = 0;
  bStack_28 = 0;
  puVar2 = auStack_90;
  FUN_1083629cc(puVar2,param_2,param_3);
  if (param_6 == 0) {
    uVar3 = 0x8362a8c;
    puVar2 = auStack_90;
    puVar4 = auStack_50;
    FUN_108392374();
    if ((int)puVar2 == 0) {
      return (undefined1 *)0x0;
    }
  }
  else {
    puVar4 = (undefined8 *)0x108362a8c;
    uVar3 = SUB84(auStack_90,0);
    func_0x000108362d24();
    if (((ulong)puVar2 & 1) == 0) {
      return (undefined1 *)0x0;
    }
  }
  if ((bStack_28 & 1) != 0) {
    uStack_98 = *(undefined8 *)(puStack_30 + 0x20);
    uVar3 = SUB84(&uStack_98,0);
    FUN_108362d78(auStack_50);
    if ((extraout_x8 & 1) != 0) {
      return puStack_30;
    }
  }
  func_0x000104bdc2c8();
  *(undefined4 *)(puVar2 + 0x18) = param_1;
  *(undefined4 *)(puVar2 + 0x1c) = uVar3;
  uStack_e0 = 0;
  uStack_d8 = 0;
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108362a8c);
    (*pcVar1)();
  }
  func_0x00010812f1a8(puVar4,&uStack_e0);
  *(ulong *)(puVar2 + 0x20) =
       CONCAT44((float)((ulong)puVar4[1] >> 0x20) - (float)((ulong)*puVar4 >> 0x20),
                (float)puVar4[1] - (float)*puVar4);
  if (param_4 == 2) {
    *(ulong *)(puVar2 + 0x28) =
         CONCAT44((float)((ulong)puVar4[3] >> 0x20) - (float)((ulong)puVar4[2] >> 0x20),
                  (float)puVar4[3] - (float)puVar4[2]);
    uVar5 = CONCAT44((float)((ulong)*puVar4 >> 0x20) - (float)((ulong)puVar4[2] >> 0x20),
                     (float)*puVar4 - (float)puVar4[2]);
  }
  else {
    uVar5 = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
  }
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  uVar5 = NEON_scvtf(uStack_e0,4);
  *(ulong *)(puVar2 + 0x38) =
       CONCAT44((float)((ulong)*puVar4 >> 0x20) - (float)((ulong)uVar5 >> 0x20),
                (float)*puVar4 - (float)uVar5);
  FUN_108391a80(puVar2,0x11372b298,0,0x28);
  return puVar2;
}



/* Entry: 1083629cc; end: 108362af3;  */

long FUN_1083629cc(undefined4 param_1,long param_2,undefined4 param_3,undefined8 *param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined4 *)(param_2 + 0x18) = param_1;
  *(undefined4 *)(param_2 + 0x1c) = param_3;
  uStack_40 = 0;
  uStack_38 = 0;
  if (param_5 != 0) {
    func_0x00010812f1a8(param_4,&uStack_40);
    *(ulong *)(param_2 + 0x20) =
         CONCAT44((float)((ulong)param_4[1] >> 0x20) - (float)((ulong)*param_4 >> 0x20),
                  (float)param_4[1] - (float)*param_4);
    if (param_5 == 2) {
      *(ulong *)(param_2 + 0x28) =
           CONCAT44((float)((ulong)param_4[3] >> 0x20) - (float)((ulong)param_4[2] >> 0x20),
                    (float)param_4[3] - (float)param_4[2]);
      uVar2 = CONCAT44((float)((ulong)*param_4 >> 0x20) - (float)((ulong)param_4[2] >> 0x20),
                       (float)*param_4 - (float)param_4[2]);
    }
    else {
      uVar2 = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    uVar2 = NEON_scvtf(uStack_40,4);
    *(ulong *)(param_2 + 0x38) =
         CONCAT44((float)((ulong)*param_4 >> 0x20) - (float)((ulong)uVar2 >> 0x20),
                  (float)*param_4 - (float)uVar2);
    FUN_108391a80(param_2,0x11372b298,0,0x28);
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108362a8c);
  (*pcVar1)();
}



/* Entry: 108362af4; end: 108362b7f;  */

void FUN_108362af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 auStack_70 [64];
  
  FUN_1083629cc(auStack_70,param_1,param_2,param_3);
  __Znwm(0x80);
  if (param_6 == 0) {
    func_0x000108362d3c();
    func_0x000108362ce0();
    FUN_108362b80();
    func_0x000108362d30();
  }
  else {
    func_0x000108362d3c();
    func_0x000108362ce0();
    FUN_108362b80();
    func_0x000108362cfc();
  }
  return;
}



/* Entry: 108362b80; end: 108362bdb;  */

void FUN_108362b80(long param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x000108362d64();
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = param_2[6];
  *(undefined8 *)(param_1 + 0x50) = param_2[7];
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  uVar2 = *(undefined1 *)(param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar3 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined1 *)(param_1 + 0x74) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = param_4;
  FUN_108331b54(param_4);
  return;
}



/* Entry: 108362bdc; end: 108362c0f;  */

undefined8 * FUN_108362bdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a3eba0;
  func_0x000108331be4(param_1[0x12]);
  return param_1;
}



/* Entry: 108362c10; end: 108362c23;  */

void FUN_108362c10(void)

{
  FUN_108362bdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108362c24; end: 108362c63;  */

long FUN_108362c24(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 108362c64; end: 108362c8b;  */

void FUN_108362c64(long param_1)

{
  func_0x000108362d64();
  func_0x000108331be4(*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Entry: 108362c8c; end: 108362c9f;  */

void FUN_108362c8c(void)

{
  FUN_108362c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108362ca0; end: 108362d77;  */

long FUN_108362ca0(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 108362d78; end: 108362d9b;  */

void FUN_108362d78(void)

{
  FUN_1083627ec();
  return;
}



/* Entry: 108362d9c; end: 108362dd7;  */

undefined8 * FUN_108362d9c(undefined8 *param_1)

{
  if (param_1[7] == 0) {
    _free(*param_1);
  }
  else {
    func_0x0001082a61d0();
  }
  return param_1;
}



/* Entry: 108362dd8; end: 108362e6b;  */

char FUN_108362dd8(long *param_1)

{
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  char cStack_38;
  
  (**(code **)(*param_1 + 0x70))(auStack_78);
  if (cStack_38 == '\x01') {
    func_0x000108363770(auStack_78,auStack_58,auStack_48,1);
  }
  FUN_1083636c8(auStack_78);
  return cStack_38;
}



/* Entry: 108362e6c; end: 108363337;  */

void FUN_108362e6c(long *param_1,int *param_2,int *param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_1590 [56];
  undefined1 auStack_1558 [16];
  byte bStack_1548;
  undefined1 auStack_1540 [1144];
  undefined8 uStack_10c8;
  long *plStack_10c0;
  int iStack_1098;
  int iStack_1094;
  int iStack_1090;
  int iStack_108c;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined2 auStack_1078 [2048];
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1083876e8(auStack_1540,param_5,param_6);
  FUN_1083903d0(auStack_1590,uStack_10c8,param_2);
  if ((bStack_1548 & 1) == 0) {
    do {
      iVar8 = *param_3;
      iVar3 = param_3[1];
      uVar11 = param_1[1];
      if ((0 < iVar8 - (int)uVar11) && (0 < iVar3 - (int)(uVar11 >> 0x20))) {
        func_0x000108363768(&uStack_1088);
        func_0x0001083636e8();
        uVar11 = param_1[1];
      }
      uVar12 = param_1[2];
      iVar1 = iVar8 + 1;
      if ((0 < (int)uVar12 - iVar1) && (0 < iVar3 - (int)(uVar11 >> 0x20))) {
        func_0x000108363768(&uStack_1088);
        func_0x0001083636e8();
        uVar11 = (ulong)*(uint *)(param_1 + 1);
        uVar12 = param_1[2];
      }
      iVar2 = iVar3 + 1;
      if (0 < iVar8 - (int)uVar11) {
        if (0 < (int)(uVar12 >> 0x20) - iVar2) {
          func_0x000108363768(&uStack_1088);
          func_0x0001083636e8();
          uVar12 = param_1[2];
        }
      }
      iVar13 = (int)(uVar12 >> 0x20);
      if ((0 < (int)uVar12 - iVar1) && (0 < iVar13 - iVar2)) {
        func_0x000108363768(&uStack_1088);
        func_0x0001083636e8();
        uVar12 = (ulong)*(uint *)(param_1 + 2);
        iVar13 = *(int *)((long)param_1 + 0x14);
      }
      iVar4 = (*param_2 + iVar8) - (int)param_1[1];
      iVar5 = (param_2[1] + iVar3) - *(int *)((long)param_1 + 0xc);
      iVar3 = param_2[2] + (iVar1 - (int)uVar12);
      iVar1 = param_2[3] + (iVar2 - iVar13);
      iStack_78 = iVar4;
      iStack_74 = iVar5;
      iStack_70 = iVar3;
      iStack_6c = iVar1;
      if (param_4 != 0) {
        uStack_1080 = 0;
        uStack_1088 = (undefined2 *)0x0;
        puVar9 = &uStack_1088;
        FUN_10838ea90(puVar9,&iStack_78,auStack_1558);
        if ((int)puVar9 != 0) {
          (**(code **)(*plStack_10c0 + 0x28))
                    (plStack_10c0,(ulong)uStack_1088 & 0xffffffff,uStack_1088._4_4_,
                     (int)uStack_1080 - (int)uStack_1088,uStack_1080._4_4_ - uStack_1088._4_4_);
        }
      }
      iVar2 = iVar3 - iVar4;
      uVar14 = iVar2 + 1;
      uStack_1080 = 0x1000;
      puVar9 = &uStack_1088;
      uStack_1088 = auStack_1078;
      FUN_10825c3a4(puVar9,(-(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1) +
                           (long)(int)uVar14,0,0);
      puVar7 = uStack_1088;
      iStack_1094 = param_2[1];
      iStack_1098 = iVar4;
      iStack_1090 = iVar3;
      iStack_108c = iVar5;
      func_0x00010836373c();
      iVar13 = 0;
      if ((int)puVar9 != 0) {
        uVar14 = iStack_1094 - param_2[1] & (iStack_1094 - param_2[1] >> 0x1f ^ 0xffffffffU);
        iVar15 = (iStack_108c - iStack_1094) + uVar14;
        *puVar7 = (short)(iStack_1090 - iStack_1098);
        puVar7[iStack_1090 - iStack_1098] = 0;
        for (; iVar13 = (int)puVar9, (int)uVar14 < iVar15; uVar14 = uVar14 + 1) {
          *(undefined1 *)(puVar7 + (long)iVar2 + 1) =
               *(undefined1 *)
                (((*param_1 + (long)iVar8) - (long)(int)param_1[1]) +
                (ulong)((int)param_1[3] * uVar14));
          func_0x000108363748();
        }
      }
      iStack_108c = param_2[3];
      iStack_1098 = iVar4;
      iStack_1094 = iVar1;
      iStack_1090 = iVar3;
      func_0x00010836373c();
      if (iVar13 != 0) {
        uVar14 = param_2[3];
        iVar13 = uVar14 - iStack_108c;
        iVar6 = uVar14 - iStack_1094;
        *puVar7 = (short)(iStack_1090 - iStack_1098);
        puVar7[iStack_1090 - iStack_1098] = 0;
        iVar15 = ~uVar14 + iStack_108c;
        for (; iVar13 < iVar6; iVar13 = iVar13 + 1) {
          *(undefined1 *)(puVar7 + (long)iVar2 + 1) =
               *(undefined1 *)
                (((*param_1 + (long)iVar8) - (long)(int)param_1[1]) +
                (ulong)(uint)((iVar15 + (*(int *)((long)param_1 + 0x14) -
                                        *(int *)((long)param_1 + 0xc))) * (int)param_1[3]));
          func_0x000108363748();
          iVar15 = iVar15 + -1;
        }
      }
      iStack_1098 = *param_2;
      piVar10 = &iStack_1098;
      iStack_1094 = iVar5;
      iStack_1090 = iVar4;
      iStack_108c = iVar1;
      func_0x00010821b838(piVar10,auStack_1558);
      iVar8 = (int)piVar10;
      if (iVar8 != 0) {
        func_0x000108363700((*param_1 + (long)((iStack_1098 + (int)param_1[1]) - *param_2)) -
                            (long)(int)param_1[1]);
        func_0x000108363758();
      }
      iStack_1090 = param_2[2];
      iStack_1098 = iVar3;
      iStack_1094 = iVar5;
      iStack_108c = iVar1;
      func_0x00010836373c();
      if (iVar8 != 0) {
        func_0x000108363700((*param_1 + (long)iStack_1098 + (long)((int)param_1[2] - param_2[2])) -
                            (long)(int)param_1[1]);
        func_0x000108363758();
      }
      func_0x00010825d4cc(&uStack_1088);
      FUN_108390454(auStack_1590);
    } while ((bStack_1548 & 1) == 0);
  }
  func_0x00010834950c(auStack_1540);
  return;
}



/* Entry: 108363338; end: 1083635e3;  */

long * FUN_108363338(long *param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,
                    int param_6)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  bool bVar14;
  undefined1 auStack_5b8 [56];
  long alStack_580 [2];
  byte bStack_570;
  undefined1 auStack_568 [32];
  long alStack_548 [2];
  long alStack_538 [2];
  undefined1 uStack_528;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_6 == 1) {
    uVar9 = param_2;
    FUN_10837be7c(param_2,&lStack_90,0);
    uVar5 = (uint)uVar9;
    if ((uVar9 & 1) == 0) {
      uVar9 = param_2;
      FUN_1083773e8(param_2,&lStack_90,0,0);
      if ((int)uVar9 == 0) goto LAB_108363454;
      plVar8 = (long *)0x1;
    }
    else {
      plVar8 = (long *)0x2;
    }
    auStack_568[0] = 0;
    uStack_528 = 0;
    iVar1 = 0;
    if (*(char *)(param_4 + 0x30) == '\0') {
      iVar1 = 0x18;
    }
    plVar7 = &lStack_90;
    uVar10 = (int)param_4 + iVar1;
    puVar12 = auStack_568;
    plVar6 = param_1;
    uVar9 = param_3;
    (**(code **)(*param_1 + 0x68))();
    if ((int)plVar6 == 0) {
      bVar14 = false;
      uVar5 = 0;
    }
    else if ((int)plVar6 == 1) {
      plVar7 = alStack_548;
      plVar8 = alStack_538;
      uVar9 = (ulong)(uVar5 ^ 1);
      func_0x000108363770(auStack_568);
      bVar14 = false;
      uVar5 = 1;
    }
    else {
      bVar14 = true;
    }
    FUN_1083636c8(auStack_568);
    if (!bVar14) goto LAB_108363554;
  }
LAB_108363454:
  lStack_b0 = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9b = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  lVar2 = 0;
  if (*(char *)(param_4 + 0x30) == '\0') {
    lVar2 = 0x18;
  }
  plVar7 = (long *)(param_4 + lVar2);
  uVar10 = (uint)&lStack_b0;
  puVar12 = (undefined1 *)0x2;
  plVar8 = param_1;
  uVar9 = param_3;
  FUN_10834a2d8();
  if ((int)param_2 == 0) {
    uVar5 = 0;
  }
  else {
    lStack_d8 = lStack_b0;
    plVar7 = &lStack_d0;
    plVar8 = &lStack_b0;
    uVar11 = 0;
    (**(code **)(*param_1 + 0x40))();
    uVar10 = (uint)uVar11;
    uVar5 = (uint)param_1;
    if (((ulong)param_1 & 1) != 0) {
      lStack_e0 = lStack_d0;
      FUN_1083876e8(auStack_568,param_4,param_5);
      plVar8 = &lStack_c8;
      FUN_1083903d0(auStack_5b8);
      uVar10 = (uint)uVar11;
      plVar7 = plStack_f0;
      while ((bStack_570 & 1) == 0) {
        plVar7 = &lStack_d0;
        plVar8 = alStack_580;
        (**(code **)(*plStack_e8 + 0x38))(plStack_e8);
        FUN_108390454(auStack_5b8);
        uVar10 = (uint)uVar11;
      }
      func_0x00010834950c(auStack_568);
      func_0x000108287eb8(&lStack_e0);
    }
    func_0x000108287eb8(&lStack_d8);
    uVar9 = param_3;
  }
LAB_108363554:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (long *)(ulong)(uVar5 & 1);
  }
  ___stack_chk_fail();
  plVar6 = (long *)auStack_568;
  FUN_1083636c8();
  func_0x00010836377c();
  uVar13 = ((long)(int)uVar9 + (long)(int)uVar10) - (long)(int)plVar8;
  if ((long)uVar13 < -0x7ffffffe) {
    uVar13 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar13) {
    uVar13 = 0x7fffffff;
  }
  lVar2 = (((long)uVar9 >> 0x20) - ((long)plVar8 >> 0x20)) + (long)(int)puVar12;
  if (lVar2 < -0x7ffffffe) {
    lVar2 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar2) {
    lVar2 = 0x7fffffff;
  }
  lVar4 = plVar7[3];
  uVar3 = *(undefined1 *)((long)plVar7 + 0x1c);
  *plVar6 = ((*plVar7 +
             (ulong)(uint)((int)lVar4 *
                          ((int)((ulong)plVar8 >> 0x20) - *(int *)((long)plVar7 + 0xc)))) -
            (long)(int)plVar7[1]) + (long)(int)plVar8;
  plVar6[1] = (ulong)uVar10 | (long)puVar12 << 0x20;
  plVar6[2] = uVar13 & 0xffffffff | lVar2 << 0x20;
  *(int *)(plVar6 + 3) = (int)lVar4;
  *(undefined1 *)((long)plVar6 + 0x1c) = uVar3;
  return plVar6;
}



/* Entry: 1083635e4; end: 10836366f;  */

void FUN_1083635e4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = (int)((ulong)param_3 >> 0x20);
  uVar5 = ((long)(int)param_4 + (long)param_5) - (long)(int)param_3;
  if ((long)uVar5 < -0x7ffffffe) {
    uVar5 = 0xffffffff80000001;
  }
  if (0x7ffffffe < (long)uVar5) {
    uVar5 = 0x7fffffff;
  }
  lVar1 = ((long)(int)((ulong)param_4 >> 0x20) - (long)iVar4) + (long)param_6;
  if (lVar1 < -0x7ffffffe) {
    lVar1 = -0x7fffffff;
  }
  if (0x7ffffffe < lVar1) {
    lVar1 = 0x7fffffff;
  }
  lVar3 = param_2[3];
  uVar2 = *(undefined1 *)((long)param_2 + 0x1c);
  *param_1 = ((*param_2 + (ulong)(uint)((int)lVar3 * (iVar4 - *(int *)((long)param_2 + 0xc)))) -
             (long)(int)param_2[1]) + (long)(int)param_3;
  param_1[1] = CONCAT44(param_6,param_5);
  param_1[2] = uVar5 & 0xffffffff | lVar1 << 0x20;
  *(int *)(param_1 + 3) = (int)lVar3;
  *(undefined1 *)((long)param_1 + 0x1c) = uVar2;
  return;
}



/* Entry: 108363670; end: 1083636c7;  */

void FUN_108363670(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)&uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10838ea90(&uStack_30,param_3,param_4);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,param_2,&uStack_30);
  }
  return;
}



/* Entry: 1083636c8; end: 1083636e7;  */

void FUN_1083636c8(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_108362d9c();
  }
  return;
}



/* Entry: 1083636e8; end: 108363783;  */

void FUN_1083636e8(void)

{
  int iVar1;
  long *unaff_x23;
  long unaff_x25;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = (int)&uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10838ea90(&uStack_30,&stack0x00000540,unaff_x25 + 0x38);
  if (iVar1 != 0) {
    (**(code **)(*unaff_x23 + 0x38))();
  }
  return;
}



/* Entry: 108363784; end: 108363957;  */

void FUN_108363784(float param_1,undefined8 param_2,long param_3,uint param_4,long *param_5)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (float)param_4 / 255.0;
  uVar3 = param_2;
  (**(code **)(*param_5 + 0x10))(param_2,fVar7,param_5);
  fVar6 = 1.0 - fVar7;
  uVar4 = param_2;
  (**(code **)(*param_5 + 0x10))(param_2,fVar6,param_5);
  param_1 = param_1 * (float)uVar4;
  if (0.00390625 <= ABS(fVar7 - fVar6)) {
    fVar8 = 0.0;
    for (lVar1 = 0; lVar1 != 0x100; lVar1 = lVar1 + 1) {
      fVar2 = fVar8 / 255.0;
      fVar2 = fVar2 + fVar2 * param_1 * (1.0 - fVar2);
      uVar5 = param_2;
      (**(code **)(*param_5 + 0x18))
                (param_2,(float)uVar4 * (1.0 - fVar2) + fVar2 * (float)uVar3,param_5);
      fVar2 = (float)NEON_fminnm((float)(double)(long)((((float)uVar5 - fVar6) / (fVar7 - fVar6)) *
                                                       255.0 + 0.5),0x4effffff);
      if (fVar2 <= -2.1474835e+09) {
        fVar2 = -2.1474835e+09;
      }
      *(char *)(param_3 + lVar1) = (char)(int)fVar2;
      fVar8 = fVar8 + 1.0;
    }
  }
  else {
    fVar6 = 0.0;
    for (lVar1 = 0; lVar1 != 0x100; lVar1 = lVar1 + 1) {
      fVar7 = fVar6 / 255.0;
      fVar7 = (float)NEON_fminnm((float)(double)(long)((fVar7 + fVar7 * param_1 * (1.0 - fVar7)) *
                                                       255.0 + 0.5),0x4effffff);
      if (fVar7 <= -2.1474835e+09) {
        fVar7 = -2.1474835e+09;
      }
      *(char *)(param_3 + lVar1) = (char)(int)fVar7;
      fVar6 = fVar6 + 1.0;
    }
  }
  return;
}



/* Entry: 108363958; end: 1083639e7;  */

void FUN_108363958(void)

{
  return;
}



/* Entry: 1083639e8; end: 108363a3f;  */

float FUN_1083639e8(undefined8 param_1,undefined8 param_2)

{
  if (0.0031308 < (float)param_2) {
    _powf(param_2,0x3ed55555);
    return (float)param_2 * 1.055 + -0.055;
  }
  return (float)param_2 * 12.92;
}



/* Entry: 108363a40; end: 108363c83;  */

void FUN_108363a40(long param_1)

{
  bool bVar1;
  long lVar2;
  long extraout_x8;
  float fVar3;
  undefined4 uVar4;
  
  if ((*(float *)(param_1 + 0x18) == 0.0) && (*(float *)(param_1 + 0x1c) == 0.0)) {
    fVar3 = *(float *)(param_1 + 0x20);
    bVar1 = true;
    if ((fVar3 != 0.0) && (bVar1 = false, !NAN(fVar3))) {
      bVar1 = fVar3 == 1.0;
    }
    if (!bVar1) {
      lVar2 = 0;
      while (lVar2 != 0x18) {
        uVar4 = *(undefined4 *)(param_1 + lVar2);
        func_0x000108365ca8();
        *(undefined4 *)(param_1 + extraout_x8) = uVar4;
        lVar2 = extraout_x8 + 4;
      }
      *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x24) = 0x80;
  }
  return;
}



/* Entry: 108363c84; end: 108363dab;  */

bool FUN_108363c84(float param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  float *unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  func_0x000108365d84();
  bVar1 = 1 < param_2;
  bVar2 = param_2 == 2;
  if ((int)param_2 < 2) {
LAB_108363ca4:
    bVar2 = true;
  }
  else {
    if ((param_2 >> 3 & 1) == 0) {
      fVar4 = *unaff_x19;
      fVar3 = unaff_x19[4];
      if ((param_2 >> 2 & 1) == 0) {
        if (0.00024414062 < ABS(fVar4)) {
          fVar3 = ABS(ABS(fVar4) - ABS(fVar3));
          bVar1 = 0.00024414062 <= fVar3;
          bVar2 = fVar3 == 0.00024414062;
LAB_108363d38:
          return !bVar1 || bVar2;
        }
      }
      else {
        fVar5 = unaff_x19[1];
        fVar6 = unaff_x19[3];
        func_0x000108365ea4();
        if (bVar1 && !bVar2) {
          fVar7 = ABS(fVar5 + fVar6);
          bVar2 = false;
          bVar1 = true;
          if (ABS(fVar4 - fVar3) <= param_1) {
            bVar2 = false;
            bVar1 = true;
            if (!NAN(fVar7) && !NAN(param_1)) {
              bVar2 = fVar7 == param_1;
              bVar1 = param_1 <= fVar7;
            }
          }
          if (!bVar1 || bVar2) goto LAB_108363ca4;
          if (ABS(fVar4 + fVar3) <= param_1) {
            fVar3 = ABS(fVar5 - fVar6);
            bVar2 = false;
            bVar1 = true;
            if (!NAN(fVar3) && !NAN(param_1)) {
              bVar2 = fVar3 == param_1;
              bVar1 = param_1 <= fVar3;
            }
            goto LAB_108363d38;
          }
        }
      }
    }
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 108363dac; end: 108363def;  */

void FUN_108363dac(float param_1,float param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = false;
  if ((param_2 == 0.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  *param_3 = 0x3f800000;
  *(float *)(param_3 + 1) = param_1;
  *(undefined8 *)((long)param_3 + 0xc) = 0x3f80000000000000;
  uVar2 = 0x10;
  if (!bVar1) {
    uVar2 = 0x11;
  }
  *(float *)((long)param_3 + 0x14) = param_2;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0x3f800000;
  *(undefined4 *)((long)param_3 + 0x24) = uVar2;
  return;
}



/* Entry: 108363df0; end: 108363e93;  */

void FUN_108363df0(float param_1,float param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  float *unaff_x19;
  
  func_0x000108365d84();
  if (param_3 < 2) {
    func_0x000108365e34();
  }
  else {
    if ((param_3 >> 3 & 1) != 0) {
      bVar1 = false;
      if ((param_2 == 0.0) && (bVar1 = false, !NAN(param_1))) {
        bVar1 = param_1 == 0.0;
      }
      uVar2 = 0x10;
      if (!bVar1) {
        uVar2 = 0x11;
      }
      func_0x000108365da8(uVar2,0x3f80000000000000);
      FUN_108363e94();
      return;
    }
    unaff_x19[2] = unaff_x19[2] + param_2 * unaff_x19[1] + param_1 * *unaff_x19;
  }
  func_0x000108365e90();
  return;
}



/* Entry: 108363e94; end: 108363ec7;  */

void FUN_108363e94(ulong param_1)

{
  func_0x000108365dc8();
  if ((param_1 & 1) == 0) {
    FUN_108364350();
  }
  return;
}



/* Entry: 108363ec8; end: 108363ef3;  */

void FUN_108363ec8(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(*(float *)(param_1 + 8) != 0.0);
  if (*(float *)(param_1 + 0x14) != 0.0) {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe | uVar1;
  return;
}



/* Entry: 108363ef4; end: 108363f67;  */

undefined8 FUN_108363ef4(float param_1,float param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_3;
  FUN_10828e338();
  if ((int)uVar2 == 0) {
    func_0x000108365e34();
    func_0x000108365e90();
  }
  else {
    bVar1 = false;
    if ((param_2 == 0.0) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 == 0.0;
    }
    uVar3 = 0x10;
    if (!bVar1) {
      uVar3 = 0x11;
    }
    func_0x000108365da8(uVar3,0x3f80000000000000);
    FUN_108363f68();
  }
  return param_3;
}



/* Entry: 108363f68; end: 108363f9b;  */

void FUN_108363f68(ulong param_1)

{
  func_0x000108365dc8();
  if ((param_1 & 1) == 0) {
    FUN_108364350();
  }
  return;
}



/* Entry: 108363f9c; end: 108364067;  */

void FUN_108363f9c(float param_1,float param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = true;
  if ((param_2 != 0.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 0.0;
  }
  fVar2 = 0.0;
  if (!bVar1) {
    fVar2 = 2.24208e-44;
  }
  bVar1 = false;
  if ((param_2 == 1.0) && (bVar1 = false, !NAN(param_1))) {
    bVar1 = param_1 == 1.0;
  }
  *param_3 = param_1;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  param_3[1] = 0.0;
  param_3[4] = param_2;
  if (!bVar1) {
    fVar2 = (float)((uint)fVar2 | 2);
  }
  param_3[7] = 0.0;
  param_3[8] = 1.0;
  param_3[5] = 0.0;
  param_3[6] = 0.0;
  param_3[9] = fVar2;
  return;
}



/* Entry: 108364068; end: 1083640cf;  */

void FUN_108364068(float param_1,float param_2,undefined8 param_3)

{
  bool bVar1;
  float afStack_38 [5];
  undefined8 uStack_24;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  bVar1 = false;
  if ((param_1 == 1.0) && (bVar1 = false, !NAN(param_2))) {
    bVar1 = param_2 == 1.0;
  }
  if (!bVar1) {
    bVar1 = true;
    if ((param_2 != 0.0) && (bVar1 = false, !NAN(param_1))) {
      bVar1 = param_1 == 0.0;
    }
    uStack_14 = 2;
    if (!bVar1) {
      uStack_14 = 0x12;
    }
    afStack_38[2] = 0.0;
    afStack_38[3] = 0.0;
    afStack_38[1] = 0.0;
    uStack_1c = 0x3f80000000000000;
    uStack_24 = 0;
    afStack_38[0] = param_1;
    afStack_38[4] = param_2;
    FUN_108363f68(param_3,afStack_38);
  }
  return;
}



/* Entry: 1083640d0; end: 10836412b;  */

void FUN_1083640d0(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  *param_5 = param_2;
  param_5[1] = -param_1;
  param_5[2] = (1.0 - param_2) * param_3 + param_4 * param_1;
  param_5[3] = param_1;
  param_5[4] = param_2;
  param_5[5] = (1.0 - param_2) * param_4 - param_3 * param_1;
  param_5[6] = 0.0;
  param_5[7] = 0.0;
  param_5[8] = 1.0;
  param_5[9] = 2.69049e-43;
  return;
}



/* Entry: 10836412c; end: 10836417b;  */

void FUN_10836412c(float param_1,float param_2,float param_3,float *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  float fVar1;
  float fVar2;
  
  fVar2 = 0.017453292;
  param_1 = param_1 * 0.017453292;
  fVar1 = param_3;
  ___sincosf_stret();
  func_0x000108365e1c();
  if ((bool)in_CY && !(bool)in_ZR) {
    fVar1 = param_1;
  }
  func_0x000108365ecc();
  *param_4 = fVar2;
  param_4[1] = -fVar1;
  param_4[2] = (1.0 - fVar2) * param_2 + param_3 * fVar1;
  param_4[3] = fVar1;
  param_4[4] = fVar2;
  param_4[5] = (1.0 - fVar2) * param_3 - param_2 * fVar1;
  param_4[6] = 0.0;
  param_4[7] = 0.0;
  param_4[8] = 1.0;
  param_4[9] = 2.69049e-43;
  return;
}



/* Entry: 10836417c; end: 108364213;  */

void FUN_10836417c(float param_1,undefined8 param_2,float param_3,undefined4 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined4 uVar1;
  
  uVar1 = 0x3c8efa35;
  param_1 = param_1 * 0.017453292;
  ___sincosf_stret();
  func_0x000108365e1c();
  if ((bool)in_CY && !(bool)in_ZR) {
    param_3 = param_1;
  }
  func_0x000108365ecc();
  *param_4 = uVar1;
  param_4[1] = -param_3;
  param_4[2] = 0;
  param_4[3] = param_3;
  param_4[4] = uVar1;
  *(undefined8 *)(param_4 + 7) = 0x3f80000000000000;
  *(undefined8 *)(param_4 + 5) = 0;
  param_4[9] = 0xc0;
  return;
}



/* Entry: 108364214; end: 10836434f;  */

void FUN_108364214(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = 0x3f800000;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_28 = 0x3f800000;
  uStack_18 = 0xc03f800000;
  uStack_34 = param_1;
  uStack_2c = param_2;
  FUN_108363f68(param_3,&uStack_38);
  return;
}



/* Entry: 108364350; end: 10836455b;  */

undefined8 * FUN_108364350(float param_1,undefined8 *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pfVar2 = param_3;
  func_0x0001081421e0();
  pfVar3 = param_4;
  func_0x0001081421e0();
  if (((uint)param_3[9] & 0x8f) == 0) {
    uVar11 = *(undefined8 *)(param_4 + 2);
    uVar10 = *(undefined8 *)param_4;
    uVar15 = *(undefined8 *)(param_4 + 6);
    uVar14 = *(undefined8 *)(param_4 + 4);
    uVar5 = *(undefined8 *)(param_4 + 8);
  }
  else {
    if (((uint)param_4[9] & 0x8f) != 0) {
      uVar1 = (uint)pfVar3 | (uint)pfVar2;
      if ((uVar1 & 0xc) != 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          fVar9 = *param_3;
          fVar12 = param_3[1];
          fVar6 = (float)*(undefined8 *)param_4;
          fVar8 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
          fVar7 = (float)*(undefined8 *)(param_4 + 3);
          fVar20 = (float)((ulong)*(undefined8 *)(param_4 + 3) >> 0x20);
          fVar18 = param_3[3];
          fVar19 = param_3[2] + fVar12 * param_4[5] + param_4[2] * fVar9;
          fVar13 = param_3[4];
          fVar16 = fVar7 * fVar13 + fVar6 * fVar18;
          fVar17 = fVar20 * fVar13 + fVar8 * fVar18;
          uVar5 = CONCAT44(fVar20 * fVar12 + fVar8 * fVar9,fVar7 * fVar12 + fVar6 * fVar9);
          fVar20 = param_3[5] + param_4[5] * fVar13 + param_4[2] * fVar18;
          fVar7 = 0.0;
          fVar6 = 1.0;
          uVar4 = 0xc0;
          fVar8 = 0.0;
        }
        else {
          func_0x000108365e88(param_3);
          fVar9 = param_1;
          FUN_10836455c(param_3,param_4 + 1);
          fVar19 = fVar9;
          FUN_10836455c(param_3,param_4 + 2);
          fVar16 = fVar19;
          func_0x000108365e88(param_3 + 3);
          fVar17 = fVar16;
          FUN_10836455c(param_3 + 3,param_4 + 1);
          fVar20 = fVar17;
          FUN_10836455c(param_3 + 3,param_4 + 2);
          fVar8 = fVar20;
          func_0x000108365e88(param_3 + 6);
          fVar7 = fVar8;
          FUN_10836455c(param_3 + 6,param_4 + 1);
          fVar6 = fVar7;
          FUN_10836455c(param_3 + 6,param_4 + 2);
          uVar5 = CONCAT44(fVar9,param_1);
          uVar4 = 0x80;
        }
        *param_2 = uVar5;
        *(float *)(param_2 + 1) = fVar19;
        *(ulong *)((long)param_2 + 0xc) = CONCAT44(fVar17,fVar16);
        *(float *)((long)param_2 + 0x14) = fVar20;
        *(float *)(param_2 + 3) = fVar8;
        *(float *)((long)param_2 + 0x1c) = fVar7;
        *(float *)(param_2 + 4) = fVar6;
        *(undefined4 *)((long)param_2 + 0x24) = uVar4;
        return param_2;
      }
      func_0x000108142138(*param_3 * *param_4,param_3[4] * param_4[4],
                          param_3[2] + param_4[2] * *param_3,param_3[5] + param_4[5] * param_3[4],
                          param_2);
      return param_2;
    }
    uVar11 = *(undefined8 *)(param_3 + 2);
    uVar10 = *(undefined8 *)param_3;
    uVar15 = *(undefined8 *)(param_3 + 6);
    uVar14 = *(undefined8 *)(param_3 + 4);
    uVar5 = *(undefined8 *)(param_3 + 8);
  }
  param_2[4] = uVar5;
  param_2[1] = uVar11;
  *param_2 = uVar10;
  param_2[3] = uVar15;
  param_2[2] = uVar14;
  return param_2;
}



/* Entry: 10836455c; end: 10836457f;  */

float FUN_10836455c(float *param_1,float *param_2)

{
  return param_1[1] * param_2[3] + *param_2 * *param_1 + param_2[6] * param_1[2];
}



/* Entry: 108364580; end: 1083645df;  */

uint FUN_108364580(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  FUN_10828e338();
  if ((param_2 != (undefined4 *)0x0) && (((ulong)puVar1 & 1) == 0)) {
    *param_2 = *param_1;
    param_2[1] = param_1[3];
    param_2[2] = param_1[1];
    param_2[3] = param_1[4];
    param_2[4] = param_1[2];
    param_2[5] = param_1[5];
  }
  return (uint)puVar1 ^ 1;
}



/* Entry: 1083645e0; end: 108364627;  */

void FUN_1083645e0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = param_1;
  FUN_108364628();
                    /* WARNING: Could not recover jumptable at 0x000108364624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 108364628; end: 10836464b;  */

undefined * FUN_108364628(uint param_1)

{
  func_0x0001081421e0();
  return (&PTR_FUN_110a3ee28)[param_1 & 0x1f];
}



/* Entry: 10836464c; end: 108364693;  */

void FUN_10836464c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = param_3;
  FUN_1082e9844();
                    /* WARNING: Could not recover jumptable at 0x000108364690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 108364694; end: 108364983;  */

void FUN_108364694(double param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  float *unaff_x19;
  float *unaff_x20;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000108365e64();
  uVar3 = (uint)param_2;
  if (uVar3 < 4) {
    if (uVar3 < 2) {
      fVar6 = unaff_x20[2];
      if ((!NAN((fVar6 - fVar6) * unaff_x20[5])) && (unaff_x19 != (float *)0x0)) {
        FUN_108363dac(-fVar6,-unaff_x20[5]);
      }
    }
    else {
      fVar8 = 1.0 / *unaff_x20;
      fVar6 = 1.0 / unaff_x20[4];
      if (!NAN((fVar8 - fVar8) * fVar6)) {
        fVar9 = -(unaff_x20[2] * fVar8);
        fVar10 = unaff_x20[5];
        if ((unaff_x19 != (float *)0x0) && (!NAN((fVar9 - fVar9) * -(fVar10 * fVar6)))) {
          unaff_x19[6] = 0.0;
          unaff_x19[7] = 0.0;
          unaff_x19[3] = 0.0;
          unaff_x19[1] = 0.0;
          *unaff_x19 = fVar8;
          unaff_x19[2] = fVar9;
          unaff_x19[4] = fVar6;
          unaff_x19[5] = -(fVar10 * fVar6);
          unaff_x19[8] = 1.0;
          unaff_x19[9] = (float)(uVar3 | 0x10);
        }
      }
    }
  }
  else {
    FUN_108365b30();
    fVar6 = 1.4551915e-11;
    dVar7 = 0.0;
    if (1.4551915e-11 < ABS((float)param_1)) {
      dVar7 = 1.0 / param_1;
    }
    if (dVar7 != 0.0) {
      bVar1 = unaff_x19 != unaff_x20;
      uStack_58 = 0;
      uStack_60 = 0x3f800000;
      uStack_48 = 0;
      uStack_50 = 0x3f800000;
      uStack_40 = 0x103f800000;
      bVar2 = unaff_x19 != (float *)0x0;
      pfVar5 = (float *)&uStack_60;
      if (bVar1 && bVar2) {
        pfVar5 = unaff_x19;
      }
      fVar8 = unaff_x20[4];
      if ((param_2 & 8) == 0) {
        func_0x000108365ca8();
        *pfVar5 = fVar8;
        fVar8 = -unaff_x20[1];
        func_0x000108365ca8();
        iVar4 = (int)pfVar5;
        func_0x000108365eb8();
        *(float *)(extraout_x8 + 8) =
             (float)(dVar7 * (-((double)fVar6 * (double)unaff_x20[4]) +
                             (double)unaff_x20[5] * (double)fVar8));
        fVar6 = -unaff_x20[3];
        func_0x000108365ca8();
        *(float *)(extraout_x8_00 + 0xc) = fVar6;
        fVar6 = *unaff_x20;
        func_0x000108365ca8();
        *(float *)(extraout_x8_01 + 0x10) = fVar6;
        *(float *)(extraout_x8_01 + 0x14) =
             (float)(dVar7 * (-((double)unaff_x20[5] * (double)*unaff_x20) +
                             (double)unaff_x20[2] * (double)unaff_x20[3]));
        *(undefined8 *)(extraout_x8_01 + 0x18) = 0;
        fVar6 = 1.0;
      }
      else {
        func_0x000108365c90(dVar7,fVar8,unaff_x20[5],unaff_x20[8],unaff_x20[7]);
        *pfVar5 = fVar8;
        fVar6 = unaff_x20[2];
        func_0x000108365c90();
        iVar4 = (int)pfVar5;
        func_0x000108365eb8();
        func_0x000108365c90();
        *(float *)(extraout_x8_02 + 8) = fVar6;
        fVar6 = -(unaff_x20[8] * unaff_x20[3]) + unaff_x20[6] * unaff_x20[5];
        func_0x000108365ca8();
        *(float *)(extraout_x8_03 + 0xc) = fVar6;
        fVar6 = -(unaff_x20[6] * unaff_x20[2]) + unaff_x20[8] * *unaff_x20;
        func_0x000108365ca8();
        *(float *)(extraout_x8_04 + 0x10) = fVar6;
        fVar6 = -(unaff_x20[5] * *unaff_x20) + unaff_x20[3] * unaff_x20[2];
        func_0x000108365ca8();
        *(float *)(extraout_x8_05 + 0x14) = fVar6;
        fVar6 = unaff_x20[3];
        func_0x000108365c90();
        *(float *)(extraout_x8_06 + 0x18) = fVar6;
        fVar6 = unaff_x20[1];
        func_0x000108365c90();
        *(float *)(extraout_x8_07 + 0x1c) = fVar6;
        fVar6 = (float)(dVar7 * (double)(-(unaff_x20[3] * unaff_x20[1]) + unaff_x20[4] * *unaff_x20)
                       );
      }
      pfVar5 = (float *)&uStack_60;
      if (bVar1 && bVar2) {
        pfVar5 = unaff_x19;
      }
      pfVar5[8] = fVar6;
      FUN_1082c36d0();
      if (iVar4 != 0) {
        pfVar5 = (float *)&uStack_60;
        if (bVar1 && bVar2) {
          pfVar5 = unaff_x19;
        }
        pfVar5[9] = unaff_x20[9];
        if (unaff_x19 == unaff_x20) {
          *(undefined8 *)(unaff_x19 + 2) = uStack_58;
          *(undefined8 *)unaff_x19 = uStack_60;
          *(undefined8 *)(unaff_x19 + 6) = uStack_48;
          *(undefined8 *)(unaff_x19 + 4) = uStack_50;
          *(undefined8 *)(unaff_x19 + 8) = uStack_40;
        }
      }
    }
  }
  return;
}



/* Entry: 108364984; end: 108364bcb;  */

void FUN_108364984(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  if (param_2 == param_3 || (int)param_4 < 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_2,param_3,(ulong)param_4 << 3);
  return;
}



/* Entry: 108364bcc; end: 108364cdb;  */

void FUN_108364bcc(float *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,long param_5,
                  uint param_6)

{
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0 < (int)param_6) {
    pfVar1 = param_1;
    func_0x0001081420b8();
    if (((ulong)pfVar1 & 1) == 0) {
      pfVar1 = (float *)(param_4 + 1);
      pfVar3 = (float *)(param_2 + 1);
      do {
        fVar4 = pfVar1[-2];
        fVar5 = pfVar1[-1];
        fVar6 = *pfVar1;
        fVar8 = param_1[3];
        fVar7 = param_1[4];
        fVar10 = param_1[5];
        fVar9 = param_1[6];
        fVar11 = param_1[7];
        fVar12 = param_1[8];
        pfVar3[-2] = fVar5 * param_1[1] + *param_1 * fVar4 + param_1[2] * fVar6;
        pfVar3[-1] = fVar5 * fVar7 + fVar8 * fVar4 + fVar10 * fVar6;
        *pfVar3 = fVar5 * fVar11 + fVar9 * fVar4 + fVar12 * fVar6;
        pfVar1 = (float *)((long)pfVar1 + param_5);
        pfVar3 = (float *)((long)pfVar3 + param_3);
        param_6 = param_6 - 1;
      } while (param_6 != 0);
    }
    else if (param_4 != param_2) {
      if (param_3 == 0xc && param_5 == 0xc) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_2,param_4,(ulong)param_6 * 0xc);
        return;
      }
      for (; param_6 != 0; param_6 = param_6 - 1) {
        uVar2 = *param_4;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_4 + 1);
        *param_2 = uVar2;
        param_2 = (undefined8 *)((long)param_2 + param_3);
        param_4 = (undefined8 *)((long)param_4 + param_5);
      }
    }
  }
  return;
}



/* Entry: 108364cdc; end: 108364cef;  */

/* WARNING: Removing unreachable block (ram,0x000108364c1c) */
/* WARNING: Removing unreachable block (ram,0x000108364c20) */
/* WARNING: Removing unreachable block (ram,0x000108364c40) */

void FUN_108364cdc(float *param_1,long param_2,long param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)param_4) {
    pfVar1 = param_1;
    func_0x0001081420b8();
    if (((ulong)pfVar1 & 1) == 0) {
      pfVar1 = (float *)(param_3 + 8);
      pfVar2 = (float *)(param_2 + 8);
      do {
        fVar3 = pfVar1[-2];
        fVar4 = pfVar1[-1];
        fVar5 = *pfVar1;
        fVar7 = param_1[3];
        fVar6 = param_1[4];
        fVar9 = param_1[5];
        fVar8 = param_1[6];
        fVar10 = param_1[7];
        fVar11 = param_1[8];
        pfVar2[-2] = fVar4 * param_1[1] + *param_1 * fVar3 + param_1[2] * fVar5;
        pfVar2[-1] = fVar4 * fVar6 + fVar7 * fVar3 + fVar9 * fVar5;
        *pfVar2 = fVar4 * fVar10 + fVar8 * fVar3 + fVar11 * fVar5;
        pfVar1 = pfVar1 + 3;
        pfVar2 = pfVar2 + 3;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    else if (param_3 != param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_2,param_3,(ulong)param_4 * 0xc);
      return;
    }
  }
  return;
}



/* Entry: 108364cf0; end: 108364dd7;  */

void FUN_108364cf0(float *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  float *pfVar2;
  ulong uVar3;
  long extraout_x8;
  undefined4 *puVar4;
  long extraout_x8_00;
  long extraout_x9;
  undefined4 *extraout_x9_00;
  undefined4 extraout_w10;
  float *extraout_x10;
  long extraout_x11;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar2 = param_1;
  func_0x0001081420b8();
  uVar1 = (int)param_4 >> 0x1f;
  if ((int)pfVar2 == 0) {
    pfVar2 = param_1;
    FUN_10828e338();
    if (((ulong)pfVar2 & 1) == 0) {
      puVar4 = (undefined4 *)((long)param_3 + 4);
      if ((param_4 & (uVar1 ^ 0xffffffff)) != 0) {
        do {
          fVar5 = *param_1;
          fVar6 = param_1[1];
          func_0x000108365d58(fVar5,fVar6,puVar4[-1],*puVar4);
          extraout_x9_00[-2] = fVar5;
          extraout_x9_00[-1] = fVar6;
          *extraout_x9_00 = extraout_w10;
          puVar4 = (undefined4 *)(extraout_x8_00 + 8);
        } while (extraout_x11 != 1);
      }
    }
    else {
      pfVar2 = (float *)((long)param_3 + 4);
      if ((param_4 & (uVar1 ^ 0xffffffff)) != 0) {
        do {
          fVar5 = *param_1;
          fVar6 = param_1[1];
          fVar7 = pfVar2[-1];
          fVar8 = *pfVar2;
          func_0x000108365d58();
          fVar10 = param_1[6];
          fVar11 = param_1[7];
          fVar9 = param_1[8];
          extraout_x10[-2] = fVar5;
          extraout_x10[-1] = fVar6;
          *extraout_x10 = fVar9 + fVar8 * fVar11 + fVar7 * fVar10;
          pfVar2 = (float *)(extraout_x9 + 8);
        } while (extraout_x8 != 1);
      }
    }
  }
  else {
    puVar4 = (undefined4 *)(param_2 + 8);
    for (uVar3 = (ulong)(param_4 & (uVar1 ^ 0xffffffff)); uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)(puVar4 + -2) = *param_3;
      *puVar4 = 0x3f800000;
      puVar4 = puVar4 + 3;
      param_3 = param_3 + 1;
    }
  }
  return;
}



/* Entry: 108364dd8; end: 108364ebf;  */

void FUN_108364dd8(code *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  pcVar1 = param_1;
  FUN_10828e338();
  if ((int)pcVar1 == 0) {
    uStack_70 = *(undefined8 *)param_1;
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(ulong *)(param_1 + 0x10) & 0xffffffff;
    uStack_68 = *(ulong *)(param_1 + 8) & 0xffffffff00000000;
    uStack_50 = *(ulong *)(param_1 + 0x20) & 0xfffffffeffffffff;
    FUN_1083645e0(&uStack_70,param_2,param_3,param_4);
  }
  else {
    pcVar1 = param_1;
    FUN_1082e9844();
    (*pcVar1)(0,0,param_1,&uStack_70);
    puVar2 = (undefined4 *)(param_3 + (param_4 & 0xffffffff) * 8 + -4);
    for (param_4 = param_4 & 0xffffffff; 0 < (int)param_4; param_4 = param_4 - 1) {
      (*pcVar1)(puVar2[-1],*puVar2,param_1,auStack_48);
      *(ulong *)(param_2 + -8 + param_4 * 8) =
           CONCAT44(auStack_48._4_4_ - (float)((ulong)uStack_70 >> 0x20),
                    auStack_48._0_4_ - (float)uStack_70);
      puVar2 = puVar2 + -2;
    }
  }
  return;
}



/* Entry: 108364ec0; end: 108364f27;  */

void FUN_108364ec0(float *param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar4 = param_1[5];
  fVar2 = param_1[2];
  fVar3 = fVar2 + fVar1 * (float)*param_3;
  func_0x000108365e70();
  *param_2 = fVar3;
  param_2[1] = fVar2;
  param_2[2] = fVar4;
  param_2[3] = fVar1;
  return;
}



/* Entry: 108364f28; end: 108364f8f;  */

undefined8
FUN_108364f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 (*param_4) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  auVar1._12_4_ = uVar3;
  auVar1._0_12_ = *param_4;
  auVar2._12_4_ = uVar3;
  auVar2._0_12_ = *param_4;
  NEON_ext(auVar1,auVar2,8,1);
  func_0x000108365d94();
  func_0x000108365d94();
  return param_3;
}



/* Entry: 108364f90; end: 1083650ff;  */

ulong FUN_108364f90(ulong param_1,float param_2,undefined8 param_3,undefined4 param_4,long param_5,
                   ulong *param_6,long *param_7,int param_8)

{
  undefined1 uVar1;
  ulong *puVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  float afStack_a8 [4];
  undefined8 uStack_98;
  ulong *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_5;
  func_0x0001081421e0();
  uVar1 = (int)lVar8 == 1;
  if ((int)lVar8 < 2) {
    fVar5 = *(float *)(param_5 + 8);
    param_2 = *(float *)(param_5 + 0x14);
    param_1 = CONCAT44((float)((ulong)*param_7 >> 0x20) + param_2,(float)*param_7 + fVar5);
    func_0x000108365e70();
    *(int *)param_6 = (int)param_1;
    *(float *)((long)param_6 + 4) = param_2;
    *(float *)(param_6 + 1) = fVar5;
    *(undefined4 *)((long)param_6 + 0xc) = param_4;
  }
  else {
    lVar8 = param_5;
    FUN_1082878d0();
    if ((int)lVar8 == 0) {
      uVar1 = param_8 == 1;
      if (((bool)uVar1) && (lVar8 = param_5, FUN_10828e338(), (int)lVar8 != 0)) {
        FUN_108376ad8(&puStack_60);
        func_0x000108142248(&puStack_60,param_7,0);
        func_0x000108142294(&puStack_60,param_5,1);
        puVar2 = puStack_60;
        FUN_1082d8734();
        param_1 = *puVar2;
        param_6[1] = puVar2[1];
        *param_6 = param_1;
        FUN_10837ca5c(puStack_60);
        param_5 = 0;
      }
      else {
        puStack_60 = (ulong *)*param_7;
        lVar8 = param_7[1];
        uStack_58 = CONCAT44((int)((ulong)puStack_60 >> 0x20),(int)lVar8);
        param_1 = CONCAT44((int)((ulong)lVar8 >> 0x20),(int)puStack_60);
        lStack_50 = lVar8;
        uStack_48 = param_1;
        FUN_1083645e0(param_5,&puStack_60,&puStack_60,4);
        param_2 = (float)lVar8;
        FUN_10838ece0(param_6,&puStack_60,4);
        FUN_10827a0d8();
      }
      goto LAB_108365020;
    }
    FUN_108364ec0(param_5,param_6,param_7);
  }
  param_5 = 1;
LAB_108365020:
  func_0x000108365ee0(uStack_38);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  fVar7 = (float)param_1;
  FUN_10837ca5c(puStack_60);
  __Unwind_Resume(param_5);
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  afStack_a8[1] = 0.0;
  afStack_a8[2] = 0.0;
  pfVar4 = afStack_a8;
  afStack_a8[0] = fVar7;
  afStack_a8[3] = fVar7;
  FUN_1082ef8c0();
  FUN_1082878c8(afStack_a8);
  pfVar3 = afStack_a8 + 2;
  fVar5 = fVar7;
  FUN_1082878c8();
  func_0x000108365ee0(uStack_98);
  if ((bool)uVar1) {
    return (ulong)(uint)SQRT(fVar7 * fVar5);
  }
  ___stack_chk_fail();
  fVar6 = pfVar3[8] + param_2 * pfVar3[7] + pfVar3[6] * fVar5;
  fVar7 = 1.0 / fVar6;
  if (fVar6 == 0.0) {
    fVar7 = fVar6;
  }
  fVar6 = (pfVar3[5] + param_2 * pfVar3[4] + pfVar3[3] * fVar5) * fVar7;
  *pfVar4 = (pfVar3[2] + param_2 * pfVar3[1] + *pfVar3 * fVar5) * fVar7;
  pfVar4[1] = fVar6;
  return (ulong)(uint)fVar6;
}



/* Entry: 108365100; end: 10836517f;  */

float FUN_108365100(float param_1,float param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float afStack_48 [4];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  afStack_48[1] = 0.0;
  afStack_48[2] = 0.0;
  pfVar2 = afStack_48;
  afStack_48[0] = param_1;
  afStack_48[3] = param_1;
  FUN_1082ef8c0(param_3,pfVar2,2);
  FUN_1082878c8(afStack_48);
  pfVar1 = afStack_48 + 2;
  fVar3 = param_1;
  FUN_1082878c8();
  func_0x000108365ee0(uStack_38);
  if ((bool)in_ZR) {
    return SQRT(param_1 * fVar3);
  }
  ___stack_chk_fail();
  fVar4 = pfVar1[8] + param_2 * pfVar1[7] + pfVar1[6] * fVar3;
  fVar5 = 1.0 / fVar4;
  if (fVar4 == 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = (pfVar1[5] + param_2 * pfVar1[4] + pfVar1[3] * fVar3) * fVar5;
  *pfVar2 = (pfVar1[2] + param_2 * pfVar1[1] + *pfVar1 * fVar3) * fVar5;
  pfVar2[1] = fVar4;
  return fVar4;
}



/* Entry: 108365180; end: 108365457;  */

void FUN_108365180(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_3[3];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar1 = param_3[8] + param_2 * param_3[7] + param_3[6] * param_1;
  fVar2 = 1.0 / fVar1;
  if (fVar1 == 0.0) {
    fVar2 = fVar1;
  }
  *param_4 = (param_3[2] + param_2 * param_3[1] + *param_3 * param_1) * fVar2;
  param_4[1] = (fVar5 + param_2 * fVar4 + fVar3 * param_1) * fVar2;
  return;
}



/* Entry: 108365458; end: 108365553;  */

void FUN_108365458(undefined8 param_1,float *param_2,float *param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (param_4 < 5) {
    if (param_4 == 1) {
      FUN_108363dac(*param_3 - *param_2,param_3[1] - param_2[1],param_1);
    }
    else if (param_4 == 0) {
      func_0x000108363ab4(param_1);
    }
    else {
      pcVar2 = (code *)(&PTR_DAT_110a3ee10)[param_4 - 2];
      uStack_58 = 0;
      uStack_60 = 0x3f800000;
      uStack_48 = 0;
      uStack_50 = 0x3f800000;
      uStack_40 = 0x103f800000;
      uStack_88 = 0;
      uStack_90 = 0x3f800000;
      uStack_78 = 0;
      uStack_80 = 0x3f800000;
      uStack_70 = 0x103f800000;
      (*pcVar2)(param_2,&uStack_60);
      if ((int)param_2 != 0) {
        puVar1 = &uStack_60;
        FUN_10818cfd0(puVar1,&uStack_90);
        if (((int)puVar1 != 0) && ((*pcVar2)(param_3,&uStack_60), (int)param_3 != 0)) {
          FUN_108364350(param_1,&uStack_60,&uStack_90);
        }
      }
    }
  }
  else {
    FUN_10841076c(&UNK_10f48fd60);
  }
  return;
}



/* Entry: 108365554; end: 10836558b;  */

undefined4 FUN_108365554(int param_1)

{
  undefined4 uStack_24;
  
  func_0x000108365d84();
  FUN_10836558c();
  if (param_1 == 0) {
    uStack_24 = 0xbf800000;
  }
  return uStack_24;
}



/* Entry: 10836558c; end: 108365613;  */

undefined8
FUN_10836558c(float param_1,undefined8 param_2,float param_3,uint param_4,float *param_5,
             float *param_6)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 unaff_x30;
  float fVar1;
  float fVar2;
  
  if ((param_4 >> 3 & 1) != 0) {
    return 0;
  }
  if (param_4 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar2 = *param_5;
    if ((param_4 >> 2 & 1) == 0) {
      fVar1 = ABS(param_5[4]);
      if (ABS(fVar2) <= ABS(param_5[4])) {
        fVar1 = ABS(fVar2);
      }
    }
    else {
      func_0x000108365de8();
      if (!(bool)in_CY || (bool)in_ZR) {
        if (param_1 <= param_3) {
          param_3 = param_1;
        }
      }
      else {
        func_0x000108365ef4(unaff_x30);
        param_3 = param_1 - fVar2;
      }
      *param_6 = param_3;
      if (NAN(param_3 - param_3)) {
        return 0;
      }
      fVar1 = 0.0;
      if (0.0 <= param_3) {
        fVar1 = param_3;
      }
      fVar1 = SQRT(fVar1);
    }
  }
  *param_6 = fVar1;
  return 1;
}



/* Entry: 108365614; end: 10836564b;  */

undefined4 FUN_108365614(int param_1)

{
  undefined4 uStack_24;
  
  func_0x000108365d84();
  FUN_10836564c();
  if (param_1 == 0) {
    uStack_24 = 0xbf800000;
  }
  return uStack_24;
}



/* Entry: 10836564c; end: 1083656d3;  */

undefined8
FUN_10836564c(float param_1,undefined8 param_2,float param_3,uint param_4,float *param_5,
             float *param_6)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 unaff_x30;
  float fVar1;
  float fVar2;
  
  if ((param_4 >> 3 & 1) != 0) {
    return 0;
  }
  if (param_4 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar2 = *param_5;
    if ((param_4 >> 2 & 1) == 0) {
      fVar1 = ABS(param_5[4]);
      if (ABS(param_5[4]) <= ABS(fVar2)) {
        fVar1 = ABS(fVar2);
      }
    }
    else {
      func_0x000108365de8();
      if (!(bool)in_CY || (bool)in_ZR) {
        if (param_3 <= param_1) {
          param_3 = param_1;
        }
      }
      else {
        func_0x000108365ef4(unaff_x30);
        param_3 = param_1 + fVar2;
      }
      *param_6 = param_3;
      if (NAN(param_3 - param_3)) {
        return 0;
      }
      fVar1 = 0.0;
      if (0.0 <= param_3) {
        fVar1 = param_3;
      }
      fVar1 = SQRT(fVar1);
    }
  }
  *param_6 = fVar1;
  return 1;
}



/* Entry: 1083656d4; end: 1083656f7;  */

undefined8 FUN_1083656d4(uint param_1)

{
  float *unaff_x19;
  float *unaff_x20;
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  func_0x000108365e64();
  if ((param_1 >> 3 & 1) != 0) {
    return 0;
  }
  if (param_1 == 0) {
    uVar2 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)unaff_x19 = uVar2;
  }
  else {
    fVar1 = *unaff_x20;
    if ((param_1 >> 2 & 1) == 0) {
      fVar1 = ABS(fVar1);
      *unaff_x19 = fVar1;
      fVar3 = ABS(unaff_x20[4]);
      unaff_x19[1] = fVar3;
      if (fVar1 <= fVar3) {
        return 1;
      }
      *unaff_x19 = fVar3;
    }
    else {
      fVar3 = unaff_x20[3];
      fVar5 = unaff_x20[4];
      fVar4 = fVar3 * fVar3 + fVar1 * fVar1;
      fVar6 = unaff_x20[1];
      fVar1 = fVar3 * fVar5 + fVar6 * fVar1;
      fVar3 = fVar5 * fVar5 + fVar6 * fVar6;
      fVar1 = fVar1 * fVar1;
      if (fVar1 <= 5.9604645e-08) {
        *unaff_x19 = fVar4;
        unaff_x19[1] = fVar3;
        fVar1 = fVar4;
        if (fVar3 < fVar4) {
          *unaff_x19 = fVar3;
          unaff_x19[1] = fVar4;
          fVar1 = fVar3;
          fVar3 = fVar4;
        }
      }
      else {
        fVar5 = (fVar4 + fVar3) * 0.5;
        fVar3 = SQRT(fVar1 * 4.0 + (fVar4 - fVar3) * (fVar4 - fVar3)) * 0.5;
        fVar1 = fVar5 - fVar3;
        fVar3 = fVar5 + fVar3;
        *unaff_x19 = fVar1;
        unaff_x19[1] = fVar3;
      }
      if (NAN(fVar1 - fVar1)) {
        return 0;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar1) {
        fVar4 = fVar1;
      }
      *unaff_x19 = SQRT(fVar4);
      if (NAN(fVar3 - fVar3)) {
        return 0;
      }
      fVar1 = 0.0;
      if (0.0 <= fVar3) {
        fVar1 = fVar3;
      }
      fVar1 = SQRT(fVar1);
    }
    unaff_x19[1] = fVar1;
  }
  return 1;
}



/* Entry: 1083656f8; end: 108365803;  */

undefined8 FUN_1083656f8(uint param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 >> 3 & 1) != 0) {
    return 0;
  }
  if (param_1 == 0) {
    uVar2 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)param_3 = uVar2;
  }
  else {
    fVar1 = *param_2;
    if ((param_1 >> 2 & 1) == 0) {
      fVar1 = ABS(fVar1);
      *param_3 = fVar1;
      fVar3 = ABS(param_2[4]);
      param_3[1] = fVar3;
      if (fVar1 <= fVar3) {
        return 1;
      }
      *param_3 = fVar3;
    }
    else {
      fVar3 = param_2[3];
      fVar5 = param_2[4];
      fVar4 = fVar3 * fVar3 + fVar1 * fVar1;
      fVar6 = param_2[1];
      fVar1 = fVar3 * fVar5 + fVar6 * fVar1;
      fVar3 = fVar5 * fVar5 + fVar6 * fVar6;
      fVar1 = fVar1 * fVar1;
      if (fVar1 <= 5.9604645e-08) {
        *param_3 = fVar4;
        param_3[1] = fVar3;
        fVar1 = fVar4;
        if (fVar3 < fVar4) {
          *param_3 = fVar3;
          param_3[1] = fVar4;
          fVar1 = fVar3;
          fVar3 = fVar4;
        }
      }
      else {
        fVar5 = (fVar4 + fVar3) * 0.5;
        fVar3 = SQRT(fVar1 * 4.0 + (fVar4 - fVar3) * (fVar4 - fVar3)) * 0.5;
        fVar1 = fVar5 - fVar3;
        fVar3 = fVar5 + fVar3;
        *param_3 = fVar1;
        param_3[1] = fVar3;
      }
      if (NAN(fVar1 - fVar1)) {
        return 0;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar1) {
        fVar4 = fVar1;
      }
      *param_3 = SQRT(fVar4);
      if (NAN(fVar3 - fVar3)) {
        return 0;
      }
      fVar1 = 0.0;
      if (0.0 <= fVar3) {
        fVar1 = fVar3;
      }
      fVar1 = SQRT(fVar1);
    }
    param_3[1] = fVar1;
  }
  return 1;
}



/* Entry: 108365804; end: 1083658c7;  */

undefined8 FUN_108365804(float *param_1,float *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pfVar4 = param_1;
  FUN_10828e338();
  if (((ulong)pfVar4 & 1) == 0) {
    fVar5 = *param_1;
    func_0x000108384a30(fVar5,param_1[3]);
    fVar6 = param_1[1];
    func_0x000108384a30(fVar6,param_1[4]);
    fVar9 = ABS(fVar5);
    bVar1 = false;
    bVar2 = false;
    if (0.00024414062 < ABS(fVar6)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar9)) {
        bVar1 = fVar9 == 0.00024414062;
        bVar2 = 0.00024414062 <= fVar9;
      }
    }
    bVar3 = true;
    if ((bVar2 && !bVar1) && (bVar3 = true, !NAN((fVar5 - fVar5) * fVar6))) {
      bVar3 = false;
    }
    if (!bVar3) {
      if (param_2 != (float *)0x0) {
        *param_2 = fVar5;
        param_2[1] = fVar6;
      }
      if (param_3 != (undefined8 *)0x0) {
        uVar8 = *(undefined8 *)(param_1 + 2);
        uVar7 = *(undefined8 *)param_1;
        uVar11 = *(undefined8 *)(param_1 + 6);
        uVar10 = *(undefined8 *)(param_1 + 4);
        param_3[4] = *(undefined8 *)(param_1 + 8);
        param_3[1] = uVar8;
        *param_3 = uVar7;
        param_3[3] = uVar11;
        param_3[2] = uVar10;
        func_0x000108363fe4(1.0 / fVar5,1.0 / fVar6,param_3);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 1083658c8; end: 108365a87;  */

bool FUN_1083658c8(float *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((((*(char *)(param_3 + 4) != '\x01') || (*(float *)(param_3 + 8) == 0.0)) &&
      (pfVar1 = param_1, func_0x0001081421e0(), (uint)pfVar1 < 4)) &&
     ((*(int *)(param_3 + 0x10) != 1 ||
      ((param_1[2] == (float)(int)param_1[2] && (param_1[5] == (float)(int)param_1[5])))))) {
    if (((param_4 & 1) == 0) && (pfVar1 = param_1, func_0x0001081421e0(), (uint)pfVar1 < 2)) {
      return true;
    }
    if (*param_1 < 0.0) {
      return false;
    }
    if (param_1[4] < 0.0) {
      return false;
    }
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = *param_2;
    iStack_50 = 0;
    iStack_4c = 0;
    uStack_60 = 0;
    uStack_58 = CONCAT44((float)(int)((ulong)uStack_48 >> 0x20),(float)(int)uStack_48);
    FUN_108364f90(param_1,&uStack_40,&uStack_60,1);
    fVar2 = (float)NEON_fminnm((float)(double)(long)(param_1[2] + 0.5),0x4effffff);
    if (fVar2 <= -2.1474835e+09) {
      fVar2 = -2.1474835e+09;
    }
    fVar3 = (float)NEON_fminnm((float)(double)(long)(param_1[5] + 0.5),0x4effffff);
    if (fVar3 <= -2.1474835e+09) {
      fVar3 = -2.1474835e+09;
    }
    FUN_10821a06c(&iStack_50,(int)fVar2,(int)fVar3);
    if (param_4 != 0) {
      iStack_50 = iStack_50 << 4;
      iStack_4c = iStack_4c << 4;
      uStack_48 = CONCAT44(uStack_48._4_4_ << 4,(int)uStack_48 << 4);
      auVar4 = NEON_fmov(0x41800000,4);
      uStack_40 = CONCAT44((float)((ulong)uStack_40 >> 0x20) * auVar4._4_4_,
                           (float)uStack_40 * auVar4._0_4_);
      uStack_38 = CONCAT44((float)((ulong)uStack_38 >> 0x20) * auVar4._12_4_,
                           (float)uStack_38 * auVar4._8_4_);
    }
    uStack_60 = 0;
    uStack_58 = 0;
    func_0x00010827a188(&uStack_40,&uStack_60);
    if ((iStack_50 == (int)uStack_60) && (iStack_4c == uStack_60._4_4_)) {
      if ((int)uStack_48 == (int)uStack_58) {
        return uStack_48._4_4_ == uStack_58._4_4_;
      }
    }
  }
  return false;
}



/* Entry: 108365a88; end: 108365b2f;  */

float FUN_108365a88(undefined4 *param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_64 [40];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  FUN_108364cf0(param_1,&uStack_3c,param_2,1);
  if (0.00024414062 <= fStack_34) {
    FUN_10816eae8(auStack_64,uStack_3c,uStack_38,fStack_34,*param_1,param_1[3],param_1[6],param_1[1]
                  ,param_1[4]);
    dVar2 = 1.0 / (double)fStack_34;
    dVar3 = dVar2 * dVar2 * dVar2;
    FUN_108365b30(auStack_64,1);
    fVar1 = ABS((float)(dVar3 * dVar2));
  }
  else {
    fVar1 = INFINITY;
  }
  return fVar1;
}



/* Entry: 108365b30; end: 108365bb3;  */

double FUN_108365b30(float *param_1,int param_2)

{
  double dVar1;
  
  dVar1 = (double)param_1[4];
  if (param_2 != 0) {
    return (-((double)param_1[8] * (double)param_1[3]) + (double)param_1[6] * (double)param_1[5]) *
           (double)param_1[1] +
           (-((double)param_1[7] * (double)param_1[5]) + (double)param_1[8] * dVar1) *
           (double)*param_1 +
           (-((double)param_1[6] * dVar1) + (double)param_1[7] * (double)param_1[3]) *
           (double)param_1[2];
  }
  return -((double)param_1[3] * (double)param_1[1]) + dVar1 * (double)*param_1;
}



/* Entry: 108365bb4; end: 108365c17;  */

void FUN_108365bb4(undefined4 *param_1)

{
  func_0x000108384a30(*param_1,param_1[3]);
  func_0x000108384a30(param_1[1],param_1[4]);
  return;
}



/* Entry: 108365c18; end: 108365f1b;  */

uint FUN_108365c18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = *param_1;
  bVar4 = (byte)((ulong)uVar3 >> 8);
  bVar5 = (byte)((ulong)uVar3 >> 0x10);
  bVar6 = (byte)((ulong)uVar3 >> 0x18);
  uVar2 = *param_3;
  return CONCAT13((byte)((ulong)uVar2 >> 0x18) & ~bVar6,
                  CONCAT12((byte)((ulong)uVar2 >> 0x10) & ~bVar5,
                           CONCAT11((byte)((ulong)uVar2 >> 8) & ~bVar4,(byte)uVar2 & ~(byte)uVar3)))
         | CONCAT13(bVar6 & (byte)((ulong)uVar1 >> 0x18),
                    CONCAT12(bVar5 & (byte)((ulong)uVar1 >> 0x10),
                             CONCAT11(bVar4 & (byte)((ulong)uVar1 >> 8),(byte)uVar3 & (byte)uVar1)))
  ;
}



/* Entry: 108365f1c; end: 108365f9f;  */

float FUN_108365f1c(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_1[1];
  fVar4 = param_1[3];
  fVar2 = -(param_1[2] * fVar3) + fVar4 * *param_1;
  if (param_2 != (undefined8 *)0x0) {
    fVar1 = 1.0 / fVar2;
    param_2[1] = CONCAT44(*param_1 * fVar1,-param_1[2] * fVar1);
    *param_2 = CONCAT44(-fVar3 * fVar1,fVar4 * fVar1);
    FUN_108365fa0(param_2,4);
    if ((int)param_2 == 0) {
      fVar2 = 0.0;
    }
  }
  return fVar2;
}



/* Entry: 108365fa0; end: 108365fcb;  */

bool FUN_108365fa0(float *param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *param_1 - *param_1;
  uVar1 = (ulong)param_2;
  while( true ) {
    param_1 = param_1 + 1;
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) break;
    fVar2 = fVar2 * *param_1;
  }
  return !NAN(fVar2);
}



/* Entry: 108365fcc; end: 1083660e3;  */

float FUN_108365fcc(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar10 = param_1[4];
  fVar11 = param_1[5];
  fVar12 = param_1[6];
  fVar14 = param_1[7];
  fVar13 = param_1[8];
  fVar3 = -(fVar14 * fVar11) + fVar10 * fVar13;
  fVar4 = fVar11 * fVar12 - fVar9 * fVar13;
  fVar2 = -(fVar12 * fVar10) + fVar9 * fVar14;
  fVar5 = fVar4 * fVar7 + fVar3 * fVar6 + fVar2 * fVar8;
  if (param_2 != (undefined8 *)0x0) {
    fVar1 = 1.0 / fVar5;
    param_2[1] = CONCAT44(fVar4 * fVar1,(-(fVar10 * fVar8) + fVar7 * fVar11) * fVar1);
    *param_2 = CONCAT44((fVar8 * fVar14 + fVar7 * -fVar13) * fVar1,fVar3 * fVar1);
    param_2[3] = CONCAT44((fVar7 * fVar12 + fVar6 * -fVar14) * fVar1,fVar2 * fVar1);
    param_2[2] = CONCAT44((fVar8 * fVar9 - fVar6 * fVar11) * fVar1,
                          (fVar8 * -fVar12 + fVar6 * fVar13) * fVar1);
    *(float *)(param_2 + 4) = (-(fVar9 * fVar7) + fVar6 * fVar10) * fVar1;
    FUN_108365fa0(param_2,9);
    if ((int)param_2 == 0) {
      fVar5 = 0.0;
    }
  }
  return fVar5;
}



/* Entry: 1083660e4; end: 10836639b;  */

float FUN_1083660e4(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar15 = *param_1;
  fVar21 = param_1[1];
  fVar16 = param_1[2];
  fVar22 = param_1[3];
  fVar17 = param_1[4];
  fVar23 = param_1[5];
  fVar18 = param_1[6];
  fVar24 = param_1[7];
  fVar19 = param_1[8];
  fVar25 = param_1[9];
  fVar20 = param_1[10];
  fVar26 = param_1[0xb];
  fVar27 = param_1[0xc];
  fVar28 = param_1[0xd];
  fVar29 = param_1[0xe];
  fVar30 = param_1[0xf];
  fVar9 = -(fVar17 * fVar21) + fVar23 * fVar15;
  fVar10 = -(fVar17 * fVar16) + fVar18 * fVar15;
  fVar11 = -(fVar17 * fVar22) + fVar24 * fVar15;
  fVar12 = -(fVar23 * fVar16) + fVar18 * fVar21;
  fVar13 = -(fVar23 * fVar22) + fVar24 * fVar21;
  fVar14 = -(fVar18 * fVar22) + fVar24 * fVar16;
  fVar8 = -(fVar27 * fVar25) + fVar28 * fVar19;
  fVar6 = -(fVar27 * fVar20) + fVar29 * fVar19;
  fVar3 = -(fVar27 * fVar26) + fVar30 * fVar19;
  fVar7 = -(fVar28 * fVar20) + fVar29 * fVar25;
  fVar5 = -(fVar28 * fVar26) + fVar30 * fVar25;
  fVar4 = -(fVar29 * fVar26) + fVar30 * fVar20;
  fVar1 = ((-(fVar5 * fVar10) + fVar4 * fVar9 + fVar7 * fVar11 + fVar3 * fVar12) - fVar6 * fVar13) +
          fVar8 * fVar14;
  if (param_2 != (float *)0x0) {
    fVar2 = 1.0 / fVar1;
    fVar3 = fVar3 * fVar2;
    fVar4 = fVar4 * fVar2;
    fVar5 = fVar5 * fVar2;
    fVar6 = fVar6 * fVar2;
    fVar7 = fVar7 * fVar2;
    fVar8 = fVar8 * fVar2;
    fVar9 = fVar9 * fVar2;
    fVar10 = fVar10 * fVar2;
    fVar11 = fVar11 * fVar2;
    fVar12 = fVar12 * fVar2;
    fVar13 = fVar13 * fVar2;
    fVar14 = fVar14 * fVar2;
    *param_2 = fVar5 * -fVar18 + fVar4 * fVar23 + fVar7 * fVar24;
    param_2[1] = (-(fVar21 * fVar4) + fVar5 * fVar16) - fVar7 * fVar22;
    param_2[2] = fVar13 * -fVar29 + fVar14 * fVar28 + fVar12 * fVar30;
    param_2[3] = (-(fVar25 * fVar14) + fVar13 * fVar20) - fVar12 * fVar26;
    param_2[4] = (fVar4 * -fVar17 + fVar3 * fVar18) - fVar6 * fVar24;
    param_2[5] = -(fVar16 * fVar3) + fVar4 * fVar15 + fVar6 * fVar22;
    param_2[6] = (fVar14 * -fVar27 + fVar11 * fVar29) - fVar10 * fVar30;
    param_2[7] = -(fVar20 * fVar11) + fVar14 * fVar19 + fVar10 * fVar26;
    param_2[8] = fVar3 * -fVar23 + fVar5 * fVar17 + fVar8 * fVar24;
    param_2[9] = (-(fVar15 * fVar5) + fVar3 * fVar21) - fVar8 * fVar22;
    param_2[10] = fVar11 * -fVar28 + fVar13 * fVar27 + fVar9 * fVar30;
    param_2[0xb] = (-(fVar19 * fVar13) + fVar11 * fVar25) - fVar9 * fVar26;
    param_2[0xc] = fVar7 * -fVar17 + fVar6 * fVar23 + fVar8 * -fVar18;
    param_2[0xd] = -(fVar21 * fVar6) + fVar7 * fVar15 + fVar8 * fVar16;
    param_2[0xe] = fVar12 * -fVar27 + fVar10 * fVar28 + fVar9 * -fVar29;
    param_2[0xf] = -(fVar25 * fVar10) + fVar12 * fVar19 + fVar9 * fVar20;
    FUN_108365fa0(param_2,0x10);
    if ((int)param_2 == 0) {
      fVar1 = 0.0;
    }
  }
  return fVar1;
}



/* Entry: 10836639c; end: 1083663a7;  */

void FUN_10836639c(undefined8 *param_1,undefined2 param_2,int param_3)

{
  for (; 7 < param_3; param_3 = param_3 + -8) {
    param_1[1] = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
    *param_1 = CONCAT26(param_2,CONCAT24(param_2,CONCAT22(param_2,param_2)));
    param_1 = param_1 + 2;
  }
  while (0 < param_3) {
    *(undefined2 *)param_1 = param_2;
    param_1 = (undefined8 *)((long)param_1 + 2);
    param_3 = param_3 + -1;
  }
  return;
}



/* Entry: 1083663a8; end: 10836647f;  */

void FUN_1083663a8(long param_1,undefined8 param_2)

{
  int unaff_w19;
  long unaff_x20;
  
  func_0x000108366548();
  while (0 < unaff_w19) {
    func_0x0001083664bc(param_1,param_2);
    param_1 = param_1 + unaff_x20;
    unaff_w19 = unaff_w19 + -1;
  }
  return;
}


