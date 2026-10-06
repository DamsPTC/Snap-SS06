/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078b1148; end: 1078b116b;  */

void FUN_1078b1148(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e7810;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078b131c; end: 1078b1327;  */

undefined ** FUN_1078b131c(void)

{
  return &PTR_DAT_1109e7900;
}



/* Entry: 1078b1558; end: 1078b15b3;  */

void FUN_1078b1558(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
  func_0x0001078b1914();
  if (iVar1 != 0) {
    if ((*(byte *)(param_1 + 0x5b) & 1) == 0) {
      func_0x0001078b15b4();
      *(undefined1 *)(param_1 + 0x5b) = 1;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001078b15b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x30))(*(long **)(param_1 + 0x60),param_2);
  return;
}



/* Entry: 1078b1b3c; end: 1078b1b43;  */

void FUN_1078b1b3c(void)

{
  return;
}



/* Entry: 1078b2268; end: 1078b2313;  */

void FUN_1078b2268(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong extraout_x8;
  ulong uVar4;
  long extraout_x9;
  long lStack_38;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (uint)param_4;
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((lVar3 != 0) &&
     (func_0x0001078b287c(*(undefined8 *)(lVar3 + 0x98)),
     ((extraout_x8 | extraout_x9 << 0x20) >> 0x20 & 1) != 0)) {
    func_0x0001078877c8(&lStack_38,(ulong)uVar1);
    for (uVar4 = 0; uVar1 != uVar4; uVar4 = uVar4 + 1) {
      *(uint *)(lStack_38 + uVar4 * 4) = (uint)*(byte *)(param_3 + uVar4);
    }
    if (((extraout_x8 & 0xff0000) == 0) && (uVar1 == ((uint)(extraout_x8 >> 0x18) & 0xff))) {
      _glUniform1iv((uint)extraout_x8 >> 1 & 0x7fff,CONCAT44(uVar2,uVar1));
    }
    func_0x000107887d08(&lStack_38);
  }
  return;
}



/* Entry: 1078b28cc; end: 1078b3847;  */

undefined8 * FUN_1078b28cc(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long *plVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  ulong uVar23;
  long *plVar24;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar25;
  ulong extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  uint *puVar26;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  uint *extraout_x8_07;
  long extraout_x8_08;
  int *extraout_x8_09;
  long extraout_x8_10;
  long lVar27;
  ulong *extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  ulong *extraout_x9_03;
  ulong *extraout_x9_04;
  ulong extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  ulong *extraout_x9_08;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  ulong *puVar32;
  undefined8 *puVar33;
  long lVar34;
  undefined8 uVar35;
  uint uVar36;
  long *plVar37;
  uint *puVar38;
  uint6 uVar39;
  byte bVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  byte bVar44;
  long lStack_168;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  
  *param_1 = &PTR_DAT_1109e7bb0;
  uVar30 = *param_2;
  puVar38 = (uint *)(param_1 + 2);
  *puVar38 = 0;
  *(uint *)(param_1 + 1) = uVar30;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  _bzero(param_1 + 7,0xa8);
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  lVar21 = *(long *)(param_3 + 0x38) + 0xa80;
  func_0x00010724e2c8(lVar21,&uStack_a0);
  iVar13 = (int)lVar21;
  *(char *)((long)param_1 + 0xfc) = (char)lVar21;
  if (iVar13 == 0) {
    _glCreateProgram();
    uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar13);
    func_0x0001078b45cc();
    func_0x0001078b4744();
    puVar26 = param_2;
    func_0x0001078b3848(param_2,*(undefined4 *)(param_1 + 2),param_3,param_1);
    if (((ulong)puVar26 & 1) == 0) {
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      func_0x0001078b45cc();
LAB_1078b2b00:
      *(undefined4 *)((long)param_1 + 0xc) = 3;
      func_0x0001078b4744();
      return param_1;
    }
  }
  else {
    uStack_b8 = (ulong)*param_2 + 0x9e3779b97f4a7c15;
    uStack_b8 = ((ulong)(byte)param_2[6] | uStack_b8 * 0x1000) + (uStack_b8 >> 4) +
                0x9e3779b97f4a7c15 ^ uStack_b8;
    puVar32 = &uStack_b8;
    puVar26 = param_2 + 5;
    func_0x0001073ca0ec();
    uStack_b8 = (ulong)param_2[4] + uStack_b8 * 0x1000 + (uStack_b8 >> 4) + 0x9e3779b97f4a7c15 ^
                uStack_b8;
    puVar33 = (undefined8 *)(param_3 + 8);
    uVar35 = *puVar33;
    Hint_Prefetch(uVar35,0,2,0);
    func_0x0001078b4680((long)&PTR_LOOP_110c8acd8 + uStack_b8);
    if (puVar32 == (ulong *)0x0) {
      _glCreateProgram();
      puVar26 = param_2;
      func_0x0001078b3848(param_2,puVar32,param_3,param_1);
      if ((int)puVar26 == 0) {
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)puVar32);
        func_0x0001078b45cc();
        goto LAB_1078b2b00;
      }
      lVar21 = 0;
      uVar29 = *(ulong *)(param_3 + 8);
      Hint_Prefetch(uVar29,0,2,0);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (long)&PTR_LOOP_110c8acd8 + uStack_b8;
      uVar25 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^
               ((long)&PTR_LOOP_110c8acd8 + uStack_b8) * -0x622015f714c7d297;
      uVar23 = uVar25 >> 7 ^ uVar29 >> 0xc;
      bVar4 = (byte)uVar25;
      uVar39 = CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,CONCAT12(bVar4,CONCAT11(bVar4,bVar4)))))
               & 0x7f7f7f7f7f7f;
      lVar27 = *(long *)(param_3 + 0x10);
      while( true ) {
        uVar23 = uVar23 & *(ulong *)(param_3 + 0x18);
        uVar35 = *(undefined8 *)(uVar29 + uVar23);
        cVar12 = (char)((ulong)uVar35 >> 8);
        cVar11 = (char)((ulong)uVar35 >> 0x10);
        cVar41 = (char)((ulong)uVar35 >> 0x18);
        cVar42 = (char)((ulong)uVar35 >> 0x20);
        cVar43 = (char)((ulong)uVar35 >> 0x28);
        bVar40 = (byte)((ulong)uVar35 >> 0x30);
        bVar44 = (byte)((ulong)uVar35 >> 0x38);
        for (uVar25 = CONCAT17(-(bVar44 == (bVar4 & 0x7f)),
                               CONCAT16(-(bVar40 == (bVar4 & 0x7f)),
                                        CONCAT15(-(cVar43 == (char)(uVar39 >> 0x28)),
                                                 CONCAT14(-(cVar42 == (char)(uVar39 >> 0x20)),
                                                          CONCAT13(-(cVar41 ==
                                                                    (char)(uVar39 >> 0x18)),
                                                                   CONCAT12(-(cVar11 ==
                                                                             (char)(uVar39 >> 0x10))
                                                                            ,CONCAT11(-(cVar12 ==
                                                                                       (char)(uVar39
                                                                                             >> 8)),
                                                                                      -((char)uVar35
                                                                                       == (char)
                                                  uVar39)))))))) & 0x8080808080808080; uVar25 != 0;
            uVar25 = uVar25 - 1 & uVar25) {
          uVar5 = (uVar25 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar25 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          puVar14 = (undefined8 *)
                    (uVar23 + ((ulong)LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) >> 3) &
                    *(ulong *)(param_3 + 0x18));
          if (*(ulong *)(lVar27 + (long)puVar14 * 0x10) == uStack_b8) goto LAB_1078b2b28;
        }
        bVar40 = NEON_umaxv(CONCAT17(-(bVar44 == 0x80),
                                     CONCAT16(-(bVar40 == 0x80),
                                              CONCAT15(-(cVar43 == -0x80),
                                                       CONCAT14(-(cVar42 == -0x80),
                                                                CONCAT13(-(cVar41 == -0x80),
                                                                         CONCAT12(-(cVar11 == -0x80)
                                                                                  ,CONCAT11(-(cVar12
                                                                                             == 
                                                  -0x80),-((char)uVar35 == -0x80)))))))),1);
        if ((bVar40 & 1) != 0) break;
        lVar21 = lVar21 + 8;
        uVar23 = lVar21 + uVar23;
      }
      func_0x0001078b436c();
      lVar27 = *(long *)(param_3 + 0x10);
      puVar1 = (ulong *)(lVar27 + (long)puVar33 * 0x10);
      *puVar1 = uStack_b8;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar14 = puVar33;
LAB_1078b2b28:
      *(int *)(lVar27 + (long)puVar14 * 0x10 + 8) = (int)puVar32;
    }
    else {
      Hint_Prefetch(uVar35,0,2,0);
      func_0x0001078b4680();
      if (puVar32 == (ulong *)0x0) {
        func_0x00010ae87d60(&UNK_10f40ec73);
        goto LAB_1078b3668;
      }
      puVar32 = (ulong *)(ulong)puVar26[2];
    }
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)puVar32);
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    uStack_88 = 1;
    lStack_98 = param_3;
    func_0x0001078b3d48(puVar38,&uStack_a0);
    func_0x0001078b4744();
  }
  *(undefined4 *)((long)param_1 + 0xc) = 2;
  plVar24 = *(long **)(param_2 + 2);
  uVar30 = param_2[4];
  FUN_1078ade70(param_3 + 0x174,puVar38);
  plVar15 = (long *)(ulong)*(uint *)(param_1 + 1);
  func_0x0001073cafe4();
  plVar16 = (long *)(ulong)*(uint *)(param_1 + 1);
  func_0x0001073cce40();
  plVar17 = (long *)(ulong)*(uint *)(param_1 + 1);
  func_0x0001073d1afc();
  plVar18 = (long *)(ulong)*(uint *)(param_1 + 1);
  func_0x0001073d6ba4();
  func_0x0001073d3290();
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lVar27 = param_1[10];
  param_1[0xb] = lVar27;
  lVar21 = *plVar15;
  lStack_168 = plVar15[1];
  uVar23 = lStack_168 - lVar21 >> 6;
  if ((ulong)((param_1[0xc] - lVar27) / 5) < uVar23) {
    if (0x3333333333333333 < uVar23) {
      func_0x0001078b401c();
      goto LAB_1078b3668;
    }
    func_0x0001078b40ac(&uStack_a0,uVar23,0,param_1 + 0xc);
    func_0x0001078b4770();
    func_0x0001078b411c(&uStack_a0);
    lVar21 = *plVar15;
    lStack_168 = plVar15[1];
  }
  lStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  for (; lVar21 != lStack_168; lVar21 = lVar21 + 0x40) {
    plVar15 = (long *)(ulong)*(uint *)(param_1 + 1);
    plVar19 = plVar15;
    func_0x0001073d4d34();
    uVar36 = *(uint *)(lVar21 + 0x3c);
    lVar27 = *plVar19 + (ulong)uVar36 * 0x38;
    if ((*(long *)(lVar27 + 8) == *(long *)(lVar27 + 0x10)) &&
       (*(long *)(lVar27 + 0x20) == *(long *)(lVar27 + 0x28))) {
LAB_1078b2d2c:
      uVar28 = (uint)((ulong)(param_1[8] - param_1[7]) >> 3);
      if (uVar28 < uVar36 + 1) {
        uVar28 = uVar36 + 1;
      }
      func_0x000107380640(param_1 + 7,uVar28);
      func_0x000107380640(&lStack_e8,uVar28);
      lVar31 = *(long *)(lStack_e8 + (ulong)*(uint *)(lVar21 + 0x3c) * 8);
      lVar27 = lVar21 + 0x38;
      func_0x0001073da180();
      uVar36 = *(byte *)(lVar21 + 0x38) - 1;
      if (uVar36 < 0x1b) {
        lVar34 = *(long *)(&UNK_10deb5088 + ((ulong)uVar36 & 0xff) * 8);
      }
      else {
        lVar34 = 1;
      }
      cVar11 = '\0';
      cVar12 = lVar31 < 0;
      uVar23 = (ulong)((int)(lVar34 * lVar27) + 3) & 0x7c;
      if (lVar31 != 0) {
        uVar23 = lVar34 * lVar27;
      }
      plVar15 = (long *)(ulong)*puVar38;
      func_0x00010724ef84(&uStack_a0,lVar21);
      func_0x0001078b45bc();
      puVar32 = extraout_x9;
      if (cVar12 == cVar11) {
        puVar32 = &uStack_a0;
      }
      _glGetAttribLocation(plVar15,puVar32);
      func_0x0001078b45f4();
      if ((int)plVar15 != -1) {
        uVar10 = *(undefined1 *)(lVar21 + 0x39);
        if ((ulong)param_1[0xb] < (ulong)param_1[0xc]) {
          func_0x0001078b47e0();
          plVar15 = (long *)(extraout_x8 + 5);
          *(undefined1 *)(extraout_x8 + 4) = uVar10;
        }
        else {
          if (0x3333333333333333 < (long)(param_1[0xb] - param_1[10]) / 5 + 1U) {
            func_0x0001078b401c();
            goto LAB_1078b3668;
          }
          func_0x0001078b40ac();
          func_0x0001078b47e0(uStack_90);
          *(undefined1 *)(extraout_x8_00 + 4) = uVar10;
          uStack_90 = extraout_x8_00 + 5;
          func_0x0001078b4770();
          plVar15 = (long *)param_1[0xb];
          func_0x0001078b411c(&uStack_a0);
        }
        param_1[0xb] = plVar15;
      }
      uVar25 = (ulong)*(uint *)(lVar21 + 0x3c);
      lVar27 = *(long *)(lStack_e8 + uVar25 * 8) + uVar23;
      *(long *)(lStack_e8 + uVar25 * 8) = lVar27;
      uVar29 = lVar27 + 3U & 0xfffffffffffffffc;
      uVar23 = *(ulong *)(param_1[7] + uVar25 * 8);
      if (uVar23 <= uVar29) {
        uVar23 = uVar29;
      }
      *(ulong *)(param_1[7] + uVar25 * 8) = uVar23;
    }
    else {
      plVar19 = plVar15;
      func_0x0001073d4bd4();
      uVar28 = 0;
      for (uVar36 = 0; (uint)plVar19 != uVar36; uVar36 = uVar36 + 1) {
        if ((uVar30 >> (ulong)(uVar36 & 0x1f) & 1) != 0) {
          plVar37 = plVar15;
          func_0x0001073d4bf4(plVar15,uVar36);
          func_0x00010002b838(&uStack_a0,plVar37);
          lVar31 = *(long *)(lVar27 + 0x20);
          func_0x0001073940f8(lVar31,*(undefined8 *)(lVar27 + 0x28),&uStack_a0);
          lVar34 = *(long *)(lVar27 + 0x28);
          if (lVar34 == lVar31) {
            lVar20 = *(long *)(lVar27 + 8);
            func_0x0001073940f8(lVar20,*(undefined8 *)(lVar27 + 0x10),&uStack_a0);
            if (*(long *)(lVar27 + 0x10) != lVar20) {
              uVar28 = uVar28 + 1;
            }
          }
          func_0x0001078b45f4();
          if (lVar34 != lVar31) goto LAB_1078b2ec4;
        }
      }
      if ((*(long *)(lVar27 + 0x10) - *(long *)(lVar27 + 8)) / 0x38 == (ulong)uVar28) {
        uVar36 = *(uint *)(lVar21 + 0x3c);
        goto LAB_1078b2d2c;
      }
    }
LAB_1078b2ec4:
  }
  param_1[6] = (long)(param_1[8] - param_1[7]) >> 3;
  plVar37 = param_1 + 0x10;
  lVar21 = *plVar37;
  func_0x0001078b47b8(plVar17[1]);
  lVar27 = param_1[0x12];
  plVar19 = (long *)(lVar27 - lVar21 >> 2);
  uVar10 = plVar19 <= plVar15;
  if (plVar19 < plVar15) {
    if (lVar21 != 0) {
      param_1[0x11] = lVar21;
      __ZdlPv();
      lVar27 = 0;
      *plVar37 = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
    }
    if ((ulong)plVar15 >> 0x3e == 0) {
      func_0x0001078b46f8(lVar27);
      uVar23 = extraout_x9_00;
      if ((bool)uVar10) {
        uVar23 = extraout_x8_01;
      }
      if (uVar23 >> 0x3e == 0) {
        lVar21 = uVar23 << 2;
        __Znwm();
        param_1[0x10] = lVar21;
        param_1[0x11] = lVar21;
        param_1[0x12] = lVar21 + uVar23 * 4;
        plVar19 = plVar15;
        goto LAB_1078b2f7c;
      }
    }
    func_0x0001078b4180();
    goto LAB_1078b3668;
  }
  func_0x0001078b47f4(param_1[0x11]);
  plVar7 = extraout_x8_02;
  lVar21 = extraout_x9_01;
  while (lVar21 != 0) {
    func_0x0001078b46dc();
    plVar7 = extraout_x8_03;
    lVar21 = extraout_x9_02;
  }
  plVar19 = (long *)((long)plVar15 - (long)plVar7);
  if (plVar15 < plVar7 || plVar19 == (long *)0x0) {
    param_1[0x11] = param_1[0x10] + (long)plVar15 * 4;
  }
  else {
LAB_1078b2f7c:
    func_0x0001078b415c(plVar37,plVar19,&uStack_a0);
  }
  lVar27 = 0;
  lVar21 = 0;
  uVar23 = 0;
  while( true ) {
    uVar25 = plVar17[1] - *plVar17 >> 6;
    cVar11 = SBORROW8(uVar23,uVar25);
    cVar12 = (long)(uVar23 - uVar25) < 0;
    if (uVar25 <= uVar23) break;
    uVar25 = (ulong)*puVar38;
    func_0x00010724ef84(&uStack_a0,*plVar17 + lVar27);
    func_0x0001078b45bc();
    puVar32 = extraout_x9_03;
    if (cVar12 == cVar11) {
      puVar32 = &uStack_a0;
    }
    _glGetUniformLocation(uVar25,puVar32);
    func_0x0001078b45f4();
    if ((int)uVar25 != -1) {
      _glUniform1i(uVar25,uVar23);
      puVar2 = (ushort *)(*plVar37 + lVar21);
      if ((puVar2[1] & 1) == 0) {
        *(undefined1 *)(puVar2 + 1) = 1;
      }
      *puVar2 = (ushort)uVar23 & 0xff;
    }
    uVar23 = uVar23 + 1;
    lVar21 = lVar21 + 4;
    lVar27 = lVar27 + 0x40;
  }
  uVar25 = uStack_a0 >> 0x28;
  uStack_a0._0_4_ = (uint)uStack_a0 & 0xffffff00;
  uStack_a0._0_5_ = (uint5)(uint)uStack_a0;
  uStack_a0 = CONCAT35((int3)uVar25,(uint5)uStack_a0);
  func_0x0001078b3e1c(param_1 + 0x13,(plVar16[1] - *plVar16) / 0x48,&uStack_a0);
  uVar25 = 0;
  while( true ) {
    uVar29 = (plVar16[1] - *plVar16) / 0x48;
    cVar11 = SBORROW8(uVar29,uVar25);
    cVar12 = (long)(uVar29 - uVar25) < 0;
    if (uVar29 <= uVar25) break;
    lVar21 = *plVar16 + uVar25 * 0x48;
    bVar4 = *(byte *)(lVar21 + 0x38);
    uVar30 = *(uint *)(lVar21 + 0x3c);
    plVar37 = (long *)(ulong)uVar30;
    uVar23 = (ulong)*puVar38;
    func_0x00010724ef84(&uStack_a0);
    func_0x0001078b45bc();
    puVar32 = extraout_x9_04;
    if (cVar12 == cVar11) {
      puVar32 = &uStack_a0;
    }
    _glGetUniformLocation(uVar23,puVar32);
    func_0x0001078b45f4();
    if ((uint)uVar23 != 0xffffffff) {
      puVar26 = (uint *)(param_1[0x13] + uVar25 * 6);
      if ((puVar26[1] & 1) == 0) {
        *(undefined1 *)(puVar26 + 1) = 1;
      }
      *puVar26 = uVar30 << 0x18 | (uint)bVar4 << 0x10 | ((uint)uVar23 & 0x7fff) << 1 | 1;
    }
    uVar25 = (ulong)((int)uVar25 + 1);
  }
  plVar15 = param_1 + 0x16;
  lVar21 = *plVar15;
  func_0x0001078b47b8(plVar18[1]);
  lVar27 = param_1[0x18];
  uVar25 = lVar27 - lVar21 >> 2;
  uVar10 = uVar25 <= uVar23;
  if (uVar23 <= uVar25) {
    func_0x0001078b47f4(param_1[0x17]);
    uVar29 = extraout_x8_05;
    lVar21 = extraout_x9_06;
    while (lVar21 != 0) {
      func_0x0001078b46dc();
      uVar29 = extraout_x8_06;
      lVar21 = extraout_x9_07;
    }
    uVar25 = uVar23 - uVar29;
    if (uVar23 < uVar29 || uVar25 == 0) {
      param_1[0x17] = param_1[0x16] + uVar23 * 4;
      goto LAB_1078b3194;
    }
LAB_1078b3180:
    func_0x0001078b41c8(plVar15,uVar25,&uStack_a0);
LAB_1078b3194:
    uVar23 = 0;
    while( true ) {
      puVar8 = PTR__glGetUniformBlockIndex_113230890;
      uVar25 = plVar18[1] - *plVar18 >> 6;
      cVar11 = SBORROW8(uVar23,uVar25);
      cVar12 = (long)(uVar23 - uVar25) < 0;
      if (uVar25 <= uVar23) break;
      uVar30 = *puVar38;
      func_0x00010724ef84(auStack_100,*plVar18 + uVar23 * 0x40);
      func_0x00010002b838(auStack_118,&UNK_10f4335d1);
      func_0x0001078b45ac();
      func_0x0001078b45bc();
      puVar32 = extraout_x9_08;
      if (cVar12 == cVar11) {
        puVar32 = &uStack_a0;
      }
      (*(code *)puVar8)(uVar30,puVar32);
      func_0x0001078b45f4();
      func_0x0001078b4618();
      func_0x0001078b4610();
      if (uVar30 != 0xffffffff) {
        puVar3 = (undefined2 *)(*plVar15 + uVar23 * 4);
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          *(undefined1 *)(puVar3 + 1) = 1;
        }
        *puVar3 = (short)uVar30;
      }
      uVar23 = (ulong)((int)uVar23 + 1);
      plVar37 = (long *)puVar8;
    }
    if (plVar24 != (long *)0x0) {
      uVar23 = uStack_a0 >> 0x28;
      uStack_a0._0_4_ = (uint)uStack_a0 & 0xffffff00;
      uStack_a0._0_5_ = (uint5)(uint)uStack_a0;
      uStack_a0 = CONCAT35((int3)uVar23,(uint5)uStack_a0);
      func_0x0001078b3e1c(param_1 + 0x19,(plVar24[1] - *plVar24) / 0xc << 1,&uStack_a0);
      if ((*(byte *)((long)param_1 + 0xfc) & 1) == 0) {
        lVar21 = 0;
        uVar23 = 0;
        while( true ) {
          uVar25 = (plVar24[1] - *plVar24) / 0xc;
          uVar10 = uVar23 == uVar25;
          if (uVar25 <= uVar23) break;
          lVar27 = *plVar24 + lVar21;
          if (*(int *)(lVar27 + 8) != 0) {
            func_0x0001078b472c();
            if ((bool)uVar10) {
              func_0x0001078b4620();
              func_0x0001078b45fc();
              func_0x0001078b45ac();
              func_0x0001078b4618();
              func_0x0001078b4610();
              iVar13 = (int)plVar37 + 0x38;
              func_0x0001073da1f0();
              func_0x0001078b4594();
              _glGetUniformLocation();
              func_0x0001078b47ac();
              if (!(bool)uVar10) {
                func_0x0001078b4634();
                if ((*(byte *)(extraout_x8_09 + 1) & 1) == 0) {
                  *(undefined1 *)(extraout_x8_09 + 1) = 1;
                }
                *extraout_x8_09 = (iVar13 << 0x10 | ((uint)lVar27 & 0x7fff) << 1) + 0x1000001;
              }
            }
            else {
              func_0x0001073bdb98(lVar27);
              puVar22 = auStack_100;
              func_0x00010002b838(puVar22,&UNK_10f4335d5);
              iVar13 = (int)puVar22;
              func_0x0001078b45fc();
              func_0x0001078b45ac();
              func_0x0001078b4618();
              func_0x0001078b4610();
              func_0x0001078b4594();
              _glGetAttribLocation();
              uVar10 = iVar13 == -1;
              if ((bool)uVar10) {
                uVar30 = 0xff000000;
                iVar13 = -1;
              }
              else {
                func_0x000107894a28(lVar27);
                iVar13 = (int)lVar27;
                uVar30 = iVar13 << 0x18;
              }
              func_0x0001078b4764();
              func_0x0001078b46bc(uVar30 | iVar13 << 0x10);
              func_0x0001078b45f4();
              func_0x00010002b838(auStack_118,&UNK_10f4335d8);
              func_0x00010724ef84(auStack_130,plVar37);
              func_0x0001078b4668();
              func_0x0001078b469c();
              func_0x0001078b46cc();
              func_0x0001078b475c();
              func_0x0001078b4610();
              func_0x0001078b4754();
              func_0x0001078b4618();
              func_0x0001078b4594();
              _glGetUniformLocation();
              func_0x0001078b47ac();
              if (!(bool)uVar10) {
                func_0x0001078b4634();
                if ((*(byte *)(extraout_x8_10 + 10) & 1) == 0) {
                  *(undefined1 *)(extraout_x8_10 + 10) = 1;
                }
                func_0x0001078b4714();
              }
            }
            func_0x0001078b45f4();
          }
          uVar23 = uVar23 + 1;
          lVar21 = lVar21 + 0xc;
        }
      }
      else {
        lVar21 = 0;
        uVar23 = 0;
        while( true ) {
          uVar25 = (plVar24[1] - *plVar24) / 0xc;
          uVar10 = uVar23 == uVar25;
          if (uVar25 <= uVar23) break;
          lVar27 = *plVar24 + lVar21;
          if (*(int *)(lVar27 + 8) != 0) {
            func_0x0001078b472c();
            if ((bool)uVar10) {
              func_0x0001078b4620();
              func_0x0001078b45fc();
              func_0x0001078b45ac();
              func_0x0001078b4618();
              func_0x0001078b4610();
              iVar13 = (int)plVar37 + 0x38;
              func_0x0001073da1f0();
              func_0x0001078b4594();
              _glGetAttribLocation();
              func_0x0001078b47ac();
              if (!(bool)uVar10) {
                func_0x0001078b4634();
                if ((extraout_x8_07[1] & 1) == 0) {
                  *(undefined1 *)(extraout_x8_07 + 1) = 1;
                }
                *extraout_x8_07 = iVar13 << 0x10 | ((uint)lVar27 & 0x7fff) << 1 | 0x1000000;
              }
              func_0x0001078b45f4();
              uVar10 = 0;
              if ((uint)lVar27 == 0xffffffff) goto LAB_1078b3400;
            }
            else {
              lVar31 = lVar27;
              func_0x0001073bdb98();
              iVar13 = (int)lVar31;
              func_0x0001078b4620();
              func_0x0001078b45fc();
              func_0x0001078b45ac();
              func_0x0001078b4618();
              func_0x0001078b4610();
              func_0x0001078b4594();
              _glGetAttribLocation();
              uVar10 = iVar13 == -1;
              if ((bool)uVar10) {
                uVar30 = 0xff000000;
                iVar13 = -1;
              }
              else {
                func_0x000107894a28(lVar27);
                iVar13 = (int)lVar27;
                uVar30 = iVar13 << 0x18;
              }
              func_0x0001078b4764();
              func_0x0001078b46bc(uVar30 | iVar13 << 0x10);
              func_0x0001078b45f4();
            }
            func_0x00010002b838(auStack_118,&UNK_10f4335d8);
            func_0x00010724ef84(auStack_130,plVar37);
            func_0x0001078b4668();
            func_0x0001078b469c();
            func_0x0001078b46cc();
            func_0x0001078b475c();
            func_0x0001078b4610();
            func_0x0001078b4754();
            func_0x0001078b4618();
            func_0x0001078b4594();
            _glGetUniformLocation();
            func_0x0001078b47ac();
            if (!(bool)uVar10) {
              func_0x0001078b4634();
              if ((*(byte *)(extraout_x8_08 + 10) & 1) == 0) {
                *(undefined1 *)(extraout_x8_08 + 10) = 1;
              }
              func_0x0001078b4714();
            }
            func_0x0001078b45f4();
          }
LAB_1078b3400:
          uVar23 = uVar23 + 1;
          lVar21 = lVar21 + 0xc;
        }
      }
    }
    func_0x0001057f951c(&lStack_e8);
    func_0x0001078b3f3c(&uStack_d0);
    iVar13 = (int)&uStack_b8;
    func_0x0001078b3f3c();
    FUN_10785f1f4();
    uVar30 = iVar13 + 0x410;
    func_0x00010724e330();
    if (((uVar30 ^ 0xffffffff) & 0x101) == 0) {
      uVar35 = 0;
      uStack_a0 = 0;
      lStack_98 = 0;
      uVar30 = 0x1010101;
    }
    else {
      uVar35 = *(undefined8 *)(param_2 + 7);
      lStack_98 = *(long *)(param_2 + 0xb);
      uStack_a0 = *(ulong *)(param_2 + 9);
      uVar30 = param_2[0xd];
    }
    param_1[0x1c] = uVar35;
    param_1[0x1e] = lStack_98;
    param_1[0x1d] = uStack_a0;
    *(uint *)(param_1 + 0x1f) = uVar30;
    return param_1;
  }
  if (lVar21 != 0) {
    param_1[0x17] = lVar21;
    __ZdlPv();
    lVar27 = 0;
    *plVar15 = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  if (uVar23 >> 0x3e == 0) {
    func_0x0001078b46f8(lVar27);
    uVar25 = extraout_x9_05;
    if ((bool)uVar10) {
      uVar25 = extraout_x8_04;
    }
    if (uVar25 >> 0x3e == 0) {
      lVar21 = uVar25 << 2;
      __Znwm();
      param_1[0x16] = lVar21;
      param_1[0x17] = lVar21;
      param_1[0x18] = lVar21 + uVar25 * 4;
      uVar25 = uVar23;
      goto LAB_1078b3180;
    }
  }
  func_0x0001078b41ec();
LAB_1078b3668:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1078b366c);
  (*pcVar9)();
}



/* Entry: 1078b3f60; end: 1078b3f67;  */

undefined4 FUN_1078b3f60(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1078b41bc; end: 1078b41c7;  */

void FUN_1078b41bc(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  func_0x0001078b45e8();
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1078b4558; end: 1078b482f;  */

ulong FUN_1078b4558(undefined8 param_1,long *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + *param_2;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         ((long)&PTR_LOOP_110c8acd8 + *param_2) * -0x622015f714c7d297;
}



/* Entry: 1078b4d28; end: 1078b4df3;  */

void FUN_1078b4d28(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  func_0x0001078b4f58();
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  uStack_38 = *(undefined8 *)(param_1 + 0x70);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  puStack_48 = puVar1;
  puStack_40 = puVar2;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x20);
  for (; puVar1 != puVar2; puVar1 = puVar1 + 5) {
    if (puVar1[4] != 0) {
      uStack_98 = *puVar1;
      uStack_90 = 0;
      uStack_50 = 0;
      auStack_a0[0] = param_2;
      func_0x00010725b570(puVar1 + 1,auStack_a0);
      func_0x0001078b4f48();
    }
  }
  func_0x000107892b74(&puStack_48);
  return;
}



/* Entry: 1078b4f48; end: 1078b4f67;  */

void FUN_1078b4f48(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    func_0x00010725b5b0();
  }
  return;
}



/* Entry: 1078b5218; end: 1078b525b;  */

long * FUN_1078b5218(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -1;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078b5358; end: 1078b53a7;  */

undefined8 * FUN_1078b5358(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_1109e7e78;
  lVar4 = param_1[4];
  plVar1 = (long *)(param_1[2] + 0x98);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae59c(param_1 + 1);
  return param_1;
}



/* Entry: 1078b54c4; end: 1078b55b3;  */

void FUN_1078b54c4(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 auStack_60 [2];
  long lStack_58;
  undefined1 uStack_50;
  undefined4 uStack_44;
  
  func_0x0001078b62f0();
  uStack_44 = 0;
  _glGenBuffers(1,&uStack_44);
  func_0x0001078b62b8();
  piVar1 = (int *)(extraout_x8 + 0x70);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x0001078b62b8();
  plVar2 = (long *)(extraout_x8_00 + 0x90);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + unaff_x19;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x0001078b62b8();
  auStack_60[0] = uStack_44;
  uStack_50 = 1;
  lStack_58 = extraout_x8_01;
  func_0x0001078adef4(extraout_x8_01 + 0x17c,auStack_60);
  func_0x0001078b6394();
  func_0x0001078b6308(0x8892);
  puVar5 = (undefined8 *)0x28;
  __Znwm();
  *puVar5 = &PTR_DAT_1109e7f80;
  *(undefined4 *)(puVar5 + 1) = auStack_60[0];
  puVar5[2] = lStack_58;
  *(undefined1 *)(puVar5 + 3) = uStack_50;
  uStack_50 = 0;
  puVar5[4] = unaff_x19;
  *unaff_x20 = puVar5;
  func_0x0001078ae59c(auStack_60);
  return;
}



/* Entry: 1078b5a7c; end: 1078b5deb;  */

void FUN_1078b5a7c(long *param_1,long param_2,ulong *param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uStack_90;
  undefined4 uStack_8c;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  uVar11 = *param_3;
  uVar12 = uVar11 >> 0x20;
  if (((uVar12 == 0) || ((int)uVar11 == 0)) || (param_3[1] == 0)) {
    *param_1 = 0;
  }
  else {
    func_0x0001078ab49c(auStack_80,*(undefined8 *)(*(long *)(param_2 + 0x20) + 8),0);
    uVar5 = (int)param_6 - 0x10;
    if (uVar5 < 0x1c) {
      uVar13 = 0;
      uVar10 = (ulong)((int)param_6 * 4 - 0x40) & 0x3fc;
      while( true ) {
        if ((uint)uVar11 < *(uint *)(&UNK_10deb536c + uVar10) ||
            (uint)uVar12 < *(uint *)(&UNK_10deb53dc + uVar10)) break;
        uVar13 = uVar13 + 1;
        uVar2 = (uint)uVar11 >> 1;
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        uVar11 = (ulong)uVar2;
        uVar2 = (uint)uVar12 >> 1;
        if (uVar2 < 2) {
          uVar2 = 1;
        }
        uVar12 = (ulong)uVar2;
      }
      uStack_88 = uStack_88 & 0xffffffffffffff00;
      lVar7 = *(long *)(param_2 + 0x10) + 0xad0;
      func_0x00010724e2c8(lVar7,&uStack_88);
      if (uVar13 <= param_4) {
        param_4 = (ulong)uVar13;
      }
      if (param_4 < 2) {
        param_4 = 1;
      }
      if ((int)lVar7 != 0) {
        param_4 = 1;
      }
    }
    uStack_88 = 0;
    puVar6 = param_3;
    for (uVar11 = param_4; uVar11 != 0; uVar11 = uVar11 - 1) {
      puVar8 = puVar6;
      func_0x0001078b6380();
      uStack_88 = uStack_88 + (long)puVar8;
      puVar6 = puVar6 + 2;
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x80);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + uStack_88;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    func_0x0001078ab8f8(&uStack_90,auStack_80,&uStack_88);
    lVar7 = CONCAT44(uStack_8c,uStack_90);
    *param_1 = lVar7;
    func_0x0001078b5994(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x1e0,1);
    uStack_90 = uStack_90 & 0xffffff00;
    func_0x0001078b631c(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
    uStack_90 = uStack_90 & 0xffffff00;
    uStack_8c = *(undefined4 *)(lVar7 + 0x10);
    func_0x0001078b6388(*(undefined8 *)(*(long *)(param_2 + 0x20) + 8));
    func_0x0001078af888(param_6);
    for (uVar11 = 0; param_4 != uVar11; uVar11 = uVar11 + 1) {
      if ((uVar5 & 0xff) < 0x1c) {
        func_0x0001078b6380(param_3);
        func_0x0001078b63a8();
        _glCompressedTexImage2D();
      }
      else {
        func_0x0001078b63a8();
        _glTexImage2D();
      }
      param_3 = param_3 + 2;
    }
    func_0x0001078b6378(param_5,1 < param_4,param_6);
    func_0x0001078b6358(0xde1);
    func_0x0001078b6344(0xde1);
    func_0x0001078af7e4((uint)param_5 & 0xff);
    func_0x0001078b6328(0xde1);
    func_0x0001078b6360();
    uVar11 = param_5 >> 0x20 & 0xff;
    if ((int)uVar11 == 0) {
      uVar11 = 0;
      uVar9 = 0x884c;
    }
    else {
      func_0x0001078b62ac(0xde1);
      func_0x0001078af874(uVar11);
      uVar9 = 0x884d;
    }
    _glTexParameteri(0xde1,uVar9,uVar11);
    if (1 < param_4) {
      _glTexParameteri(0xde1,0x813c,0);
      _glTexParameteri(0xde1,0x813d,(int)param_4 + -1);
      *(undefined1 *)(lVar7 + 0x35) = 1;
    }
    func_0x0001078ae5e4(auStack_80);
  }
  return;
}



/* Entry: 1078b6450; end: 1078b649f;  */

void FUN_1078b6450(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*param_1;
  func_0x0001078af85c(uVar1);
  uVar2 = (ulong)param_1[1];
  func_0x0001078af85c(uVar2);
  uVar3 = (ulong)param_1[2];
  func_0x0001078af85c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glStencilOp_11034b7c8)(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1078b669c; end: 1078b66af;  */

void FUN_1078b669c(void)

{
  func_0x0001078b6648();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b6860; end: 1078b68ef;  */

long FUN_1078b6860(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 == *param_2) {
    lVar1 = param_1[1];
    func_0x00010c09e220(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e220(param_2[1]);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(lVar1);
    func_0x0001078b6d40();
    func_0x0001078b6d48();
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1078b6bb4; end: 1078b6bdf;  */

undefined8 * FUN_1078b6bb4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e7fc8;
  func_0x0001078b6c4c(param_1 + 3);
  return param_1;
}



/* Entry: 1078b6f88; end: 1078b6faf;  */

void FUN_1078b6f88(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (((char)param_1[1] == '\x01') && (iVar1 = *param_1, *param_1 = iVar1 + -1, iVar1 < 1)) {
    puVar2 = PTR__OBJC_CLASS___MTLCaptureManager_1126d5608;
    func_0x00010c22b7c0(PTR__OBJC_CLASS___MTLCaptureManager_1126d5608);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255d60();
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1078b70bc; end: 1078b7c17;  */

void FUN_1078b70bc(undefined8 *param_1,long param_2,char *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined ***pppuVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  int extraout_w10;
  int extraout_w10_00;
  undefined **ppuVar15;
  undefined *puVar16;
  char *pcVar17;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined ***pppuStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [23];
  char cStack_79;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0xc8;
  __Znwm();
  func_0x0001072fb714(auStack_90,param_4);
  *plVar5 = (long)&PTR_DAT_1109e80c8;
  func_0x0001072d6f54(plVar5 + 1,1);
  puVar6 = (undefined8 *)0x88;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_1109e8100;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[3] = 0;
  puVar6[6] = 0x32aaaba7;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[10] = 0;
  puVar6[9] = 0;
  puVar6[0xc] = 0;
  puVar6[0xb] = 0;
  *(undefined8 *)((long)puVar6 + 0x69) = 0;
  *(undefined8 *)((long)puVar6 + 0x61) = 0;
  puVar6[0xf] = plVar5 + 1;
  puVar6[0x10] = plVar5 + 0x18;
  plVar5[0x11] = (long)(puVar6 + 3);
  plVar5[0x12] = (long)puVar6;
  plVar5[0x13] = 0;
  func_0x0001072fb714(plVar5 + 0x14,auStack_90);
  ppuStack_c0 = &PTR_DAT_1109e8150;
  pppuStack_a8 = &ppuStack_c0;
  pppuStack_b8 = (undefined ***)plVar5;
  func_0x000107897e30(plVar5 + 0x18,&ppuStack_c0);
  func_0x0001006393ec(&ppuStack_c0);
  func_0x0001072ad0c8(auStack_90);
  lVar14 = plVar5[0x11];
  lVar1 = plVar5[0x12];
  lStack_d0 = lVar14;
  lStack_c8 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001078b9e40();
    } while (extraout_w10 != 0);
  }
  lVar7 = lVar14;
  func_0x0001073285e0();
  _objc_autoreleasePoolPush();
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010724ef84(&ppuStack_c0,param_3 + 8);
  func_0x0001078b9f54();
  func_0x00010c25da80(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078b9cf8();
  func_0x0001078b9d78();
  func_0x0001078b9eec();
  puVar9 = puVar8;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (((ulong)puVar9 & 1) == 0) {
    puVar9 = puVar8;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdcf80();
    if (((ulong)puVar9 & 1) != 0) {
LAB_1078b72b8:
      func_0x0001078b9d58();
      goto LAB_1078b72bc;
    }
    puVar9 = puVar8;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (((ulong)puVar9 & 1) != 0) {
      func_0x0001078b9d50();
      goto LAB_1078b72b8;
    }
    puVar9 = puVar8;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar9;
    func_0x00010bfdcf80();
    puVar12 = puVar16;
    func_0x0001078b9d00();
    func_0x0001078b9d50();
    func_0x0001078b9d58();
    func_0x0001078b9d18();
    func_0x0001078b9d68();
    if (((ulong)puVar16 & 1) == 0) goto LAB_1078b7414;
  }
  else {
LAB_1078b72bc:
    func_0x0001078b9d18();
    func_0x0001078b9d68();
  }
  puVar8 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  if (param_3[2] == '\x01') {
    func_0x00010c11d4c0(PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar16);
  }
  else {
    func_0x0001078b9e50();
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d4c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar16);
    func_0x0001078b9d00();
    func_0x0001078b9cf8();
  }
  func_0x0001078b9d50();
  puVar12 = puVar8;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar12 != (undefined *)0x0) {
    func_0x00010c11d4e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar16);
    func_0x0001078b9cf8();
  }
  func_0x00010c1e6460(puVar8);
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar8;
  func_0x0001078b9d68();
  func_0x0001078b9d58();
  func_0x0001078b9d18();
LAB_1078b7414:
  func_0x0001078b9e50();
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf66280(puVar12);
  func_0x0001078b9d18();
  func_0x0001078b9cf8();
  puVar12 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  func_0x00010c137160();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar12;
  if ((param_3[0x1b1] == '\x01') && (param_3[0x1b0] == '\0')) {
    func_0x00010c1a4fc0();
  }
  else if ((param_3[0x1b1] != '\0') && (param_3[0x1b0] == '\x01')) {
    func_0x00010c1a4fc0(puVar12);
    func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4f00();
    func_0x0001078b9cf8();
  }
  pcVar17 = param_3 + 0x1e0;
  while (puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0, pcVar17 = *(char **)pcVar17,
        pcVar17 != (char *)0x0) {
    func_0x0001078b9e7c();
    func_0x00010c25d8e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001078b9e7c();
    func_0x00010c25d8e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010befc820();
    func_0x0001078b9cf8();
    func_0x0001078b9d58();
  }
  if ((param_3[0x148] & 1U) == 0) {
    if (param_3[0x118] == '\x01') {
      func_0x00010785d358(&ppuStack_c0,*(undefined8 *)(param_3 + 0x110));
      func_0x0001078b9f54();
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001078b9ed4();
      func_0x0001078b9cf8();
      func_0x0001078b9d78();
      puVar16 = puVar10;
    }
  }
  else {
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001078b9ed4();
    func_0x0001078b9cf8();
  }
  func_0x0001078b9ecc();
  FUN_10785f1f4();
  ppuStack_c0 = (undefined **)((ulong)ppuStack_c0 & 0xffffffffffffff00);
  puVar16 = puVar16 + 0x290;
  func_0x00010724e2c8(puVar16,&ppuStack_c0);
  if ((int)puVar16 != 0) {
    puVar9 = puVar12;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4bb00();
    puVar16 = puVar9;
    func_0x0001078b9d00();
    func_0x0001078b9cf8();
    if ((int)puVar9 != 0) {
      func_0x0001078b9ecc();
      func_0x0001078b9ecc();
    }
  }
  cVar2 = *param_3;
  if (cVar2 == '\x03') {
    func_0x0001078b9e50();
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128120(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ea40();
    func_0x0001078b9d00();
    func_0x0001078b9cf8();
  }
  pppuStack_b8 = &ppuStack_c0;
  ppuStack_c0 = (undefined **)0x0;
  uStack_b0 = 0x3032000000;
  pppuStack_a8 = (undefined ***)&UNK_1078b7c18;
  puStack_a0 = &UNK_1078b7c28;
  uStack_98 = 0;
  FUN_10785f1f4();
  auStack_90[0] = 0;
  ppuVar15 = (undefined **)(puVar16 + 0x910);
  puVar9 = auStack_90;
  func_0x00010724e2c8();
  if (((ulong)ppuVar15 & 1) == 0) {
    func_0x0001078b9e50();
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar15;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_s_sessionForNetworkManager__1126359d8;
    _objc_opt_respondsToSelector();
    func_0x0001078b9cf8();
    if (((ulong)ppuVar13 & 1) != 0) {
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15fee0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = pppuStack_b8[5];
      pppuStack_b8[5] = ppuVar15;
      func_0x0001078b9ec4(ppuVar13);
      func_0x0001078b9cf8();
    }
    func_0x0001078b9d58();
  }
  pppuVar3 = pppuStack_b8;
  if (pppuStack_b8[5] == (undefined **)0x0) {
    ppuVar15 = (undefined **)**(undefined8 **)(param_2 + 8);
    _objc_retain(ppuVar15);
    pppuVar3[5] = ppuVar15;
    _objc_release();
  }
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_3[0x1a8] == '\x01';
  if ((bool)uVar4) {
    func_0x00010725ffc4(param_3 + 0x170);
    func_0x00010724ef84(auStack_90);
    func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = cStack_79 == '\0';
    func_0x00010c25d8e0();
    _objc_retainAutoreleasedReturnValue();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    puVar16 = (undefined *)0x0;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  ppuVar15 = pppuStack_b8[5];
  lStack_e8 = lVar14;
  lStack_e0 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x0001078b9e40();
    } while (extraout_w10_00 != 0);
  }
  _objc_retain(puVar16);
  _objc_retain(puVar12);
  uStack_d8 = cVar2 == '\x03';
  func_0x0001078b9eec();
  func_0x00010bf647e0();
  _objc_retainAutoreleasedReturnValue();
  plVar11 = plVar5 + 0x13;
  lVar14 = *plVar11;
  *plVar11 = (long)ppuVar15;
  func_0x0001078b9ec4(lVar14);
  func_0x00010c13d1c0(*plVar11);
  _objc_release(puVar8);
  _objc_release(puVar12);
  _objc_release(puVar16);
  func_0x0001078b9394(&lStack_e8);
  func_0x0001078b9d08();
  func_0x0001078b9e70();
  _objc_release(uStack_98);
  func_0x0001078b9d18();
  func_0x0001078b9d68();
  _objc_autoreleasePoolPop(lVar7);
  *param_1 = plVar5;
  plVar11 = &lStack_d0;
  func_0x0001078b9394();
  func_0x0001078b9f2c(uStack_70);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001078b9d00();
    func_0x0001078b9d50();
    func_0x0001078b9d58();
    func_0x0001078b9d18();
    func_0x0001078b9d68();
    func_0x0001078b9d68();
    func_0x0001078b9394(&lStack_d0);
    (**(code **)(*plVar5 + 8))(plVar5);
    __Unwind_Resume();
    plVar11[5] = *(long *)(puVar9 + 0x28);
    *(undefined8 *)(puVar9 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 1078b8ef4; end: 1078b8f33;  */

long * FUN_1078b8ef4(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar6 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar6 <= param_2) {
      plVar6 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar6 = (long *)0x7ffffffffffffff;
    }
    return plVar6;
  }
  func_0x0001078b9094();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3b != 0) {
      func_0x000104bd35f4();
      plVar4 = (long *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar1 = (long *)((long)plVar4 + (param_2[1] - (long)plVar2));
      plVar5 = plVar1;
      for (plVar6 = plVar4; plVar6 != plVar2; plVar6 = plVar6 + 4) {
        lVar7 = plVar6[1];
        lVar3 = *plVar6;
        plVar5[2] = plVar6[2];
        plVar5[1] = lVar7;
        *plVar5 = lVar3;
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        plVar5[3] = plVar6[3];
        plVar5 = plVar5 + 4;
      }
      for (; plVar4 != plVar2; plVar4 = plVar4 + 4) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      }
      param_2[1] = (long)plVar1;
      lVar3 = *param_1;
      *param_1 = (long)plVar1;
      param_1[1] = lVar3;
      param_2[1] = lVar3;
      lVar3 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar3;
      lVar3 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar3;
      *param_2 = param_2[1];
      return plVar4;
    }
    lVar3 = (long)param_2 << 5;
    __Znwm();
  }
  lVar7 = lVar3 + param_3 * 0x20;
  *param_1 = lVar3;
  param_1[1] = lVar7;
  param_1[2] = lVar7;
  param_1[3] = lVar3 + (long)param_2 * 0x20;
  return param_1;
}



/* Entry: 1078b9a38; end: 1078b9a4f;  */

void FUN_1078b9a38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078b9a6c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078b9af0; end: 1078b9b0b;  */

void FUN_1078b9af0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b9f68; end: 1078ba02f;  */

ulong FUN_1078b9f68(uint *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_28;
  
  lVar1 = 0;
  _CGDataProviderCreateWithData
            (0,*(undefined8 *)(param_1 + 2),(ulong)*param_1 * (ulong)param_1[1] * 4,&UNK_1078ba954);
  uVar3 = 0;
  lStack_28 = lVar1;
  if (lVar1 != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    lVar2 = lVar1;
    _CGColorSpaceCreateDeviceRGB();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)*param_1;
      _CGImageCreate(uVar3,param_1[1],8,0x20,uVar3 << 2,lVar2,1,lVar1,0,0,0,lVar2);
    }
    func_0x0001078ba9b0();
  }
  func_0x0001078ba054(&lStack_28);
  return uVar3;
}



/* Entry: 1078ba590; end: 1078ba5b3;  */

void FUN_1078ba590(void)

{
  func_0x0001078ba988();
  _CFRelease();
  return;
}



/* Entry: 1078bab38; end: 1078bab4b;  */

void FUN_1078bab38(void)

{
  func_0x0001078baaf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bafcc; end: 1078bafef;  */

void FUN_1078bafcc(void)

{
  func_0x0001078bb6d8();
  _CFRelease();
  return;
}



/* Entry: 1078bb77c; end: 1078bb7a7;  */

void FUN_1078bb77c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d5590;
  _objc_alloc_init();
  uVar1 = puRam00000001137269f0;
  puRam00000001137269f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1078bb9e8; end: 1078bba1f; -[MGLNativeNetworkManager errorLog:] */

void FUN_1078bb9e8(void)

{
  func_0x0001078bba4c();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078bba7c();
  func_0x00010bf98d40();
  func_0x0001078bba5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1078bbbac; end: 1078bbdff;  */

void FUN_1078bbbac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  
  if (lRam0000000113726a08 != -1) {
    func_0x00010002a2fc(0x113726a08,&PTR___NSConcreteGlobalBlock_1109e8220);
  }
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  if (*(char *)(param_3 + 0x17) < '\0') {
    if (*(long *)(param_3 + 8) == 0) goto LAB_1078bbc54;
LAB_1078bbc14:
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e2e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    bVar5 = false;
  }
  else {
    if (*(char *)(param_3 + 0x17) != '\0') goto LAB_1078bbc14;
LAB_1078bbc54:
    puVar4 = (undefined *)0x0;
    bVar5 = true;
  }
  func_0x00010c1bf3e0(uRam0000000113726a00);
  if (!bVar5) {
    _objc_release(puVar4);
    func_0x0001078bbe2c();
  }
  if (*(char *)(param_4 + 0x17) < '\0') {
    if (*(long *)(param_4 + 8) != 0) goto LAB_1078bbc9c;
  }
  else if (*(char *)(param_4 + 0x17) != '\0') {
LAB_1078bbc9c:
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    bVar5 = false;
    goto LAB_1078bbcc0;
  }
  bVar5 = true;
LAB_1078bbcc0:
  func_0x00010c186ec0(uRam0000000113726a00);
  if (!bVar5) {
    func_0x0001078bbe2c();
  }
  uVar1 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar1 == 0) {
    func_0x00010c1c8260(uRam0000000113726a00);
  }
  else {
    func_0x00010c1c8260(uRam0000000113726a00);
  }
  func_0x00010c1c3b00(uRam0000000113726a00);
  func_0x00010c1d02e0(uRam0000000113726a00);
  uVar2 = uRam0000000113726a00;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d4c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar3 = uVar2;
  _objc_retainAutorelease(uVar2);
  func_0x00010bdc3520();
  func_0x00010002b838(param_1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1078bbff8; end: 1078bbfff;  */

void FUN_1078bbff8(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  __ZNSt3__15mutex4lockEv();
  func_0x0001078bc28c(lVar1 + 0x40,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1);
  return;
}



/* Entry: 1078bc120; end: 1078bc127;  */

void FUN_1078bc120(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  long unaff_x19;
  
  func_0x0001078bd6f8(*param_1);
  *(undefined4 *)(unaff_x19 + 0x70) = param_2;
  *(undefined4 *)(unaff_x19 + 0x74) = param_3;
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc240; end: 1078bc247;  */

void FUN_1078bc240(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_1;
  piVar1 = (int *)(lVar4 + 0xa8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  __ZNSt3__15mutex4lockEv(lVar4);
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar4);
  return;
}



/* Entry: 1078bc5a0; end: 1078bc5c3;  */

void FUN_1078bc5a0(void)

{
  func_0x0001078bd740();
  func_0x000107874d30();
  return;
}



/* Entry: 1078bc710; end: 1078bc727;  */

void FUN_1078bc710(void)

{
  func_0x0001078bcc4c();
  return;
}



/* Entry: 1078bcb84; end: 1078bcb9b;  */

void FUN_1078bcb84(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078bcecc; end: 1078bced7;  */

long FUN_1078bcecc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x0001078bd16c(lVar1,*(undefined8 *)(param_1 + 0x28));
  func_0x0001078bcefc(lVar1,0);
  return lVar1;
}



/* Entry: 1078bd0e8; end: 1078bd0ff;  */

void FUN_1078bd0e8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1078bd2d4; end: 1078bd2f3;  */

void FUN_1078bd2d4(void)

{
  func_0x0001078bd760();
  func_0x0001078bd2f4();
  return;
}



/* Entry: 1078bd534; end: 1078bd553;  */

void FUN_1078bd534(void)

{
  func_0x0001078bd760();
  func_0x0001078bd554();
  return;
}



/* Entry: 1078bd86c; end: 1078bd873;  */

void FUN_1078bd86c(undefined8 *param_1,long *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  puVar4 = (undefined8 *)*param_2;
  if ((uint)((long)(puVar4[5] - puVar4[4]) / 0x2c) <= param_3) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  func_0x0001078bdb08(&lStack_60,puVar4 + 1,0);
  func_0x00010830ad7c(&lStack_70,lStack_60);
  puVar5 = (undefined8 *)0x48;
  __Znwm();
  plVar8 = puVar5 + 1;
  *plVar8 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_1109e8340;
  puStack_68 = puVar5 + 3;
  *puStack_68 = &PTR_DAT_110a271f0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  if (lStack_70 != 0) {
    piVar1 = (int *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[6] = lStack_70;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_58 = puStack_68;
  puStack_50 = puVar5;
  func_0x0001003a8180(puVar5 + 4,&puStack_58);
  func_0x0001003a90c4(&puStack_58);
  func_0x000106f47184(&lStack_70);
  if (lStack_60 != 0) {
    piVar1 = (int *)(lStack_60 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001083b8df0();
  lVar6 = lStack_60;
  func_0x00010833e128();
  if (lVar6 == 0) {
    func_0x0001078be094();
  }
  else {
    puStack_58 = (undefined8 *)CONCAT44(puStack_58._4_4_,1);
    puStack_50 = (undefined8 *)0x0;
    uStack_44 = 0xffffffff;
    uVar9 = *puVar4;
    puVar5 = puVar4 + 1;
    uStack_48 = param_3;
    func_0x0001078bdb50(puVar5);
    func_0x00010821bce4(uVar9,puVar4 + 1,lVar6,puVar5,&puStack_58);
    func_0x0001078be094();
    if ((int)uVar9 == 0) {
      *param_1 = puStack_68;
      puStack_68 = (undefined8 *)0x0;
      uVar7 = 1;
      goto code_r0x0001078bda14;
    }
  }
  uVar7 = 0;
  *(undefined1 *)param_1 = 0;
code_r0x0001078bda14:
  *(undefined1 *)(param_1 + 1) = uVar7;
  FUN_1078bdb94(&puStack_68);
  func_0x000106f471d4(&lStack_60);
  return;
}



/* Entry: 1078bdb94; end: 1078bdbb7;  */

void FUN_1078bdb94(void)

{
  func_0x0001078be09c();
  func_0x0001078bdbb8();
  return;
}



/* Entry: 1078bdfa4; end: 1078bdfbb;  */

void FUN_1078bdfa4(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078be18c; end: 1078be21b;  */

void FUN_1078be18c(undefined8 param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_2;
  lStack_38 = param_2[1];
  lStack_40 = lVar1;
  if (lStack_38 != 0) {
    do {
      func_0x0001078bf580();
    } while (extraout_w10 != 0);
  }
  lStack_50 = lVar1 + 0x208;
  uStack_48 = 1;
  func_0x00010724e404();
  func_0x00010724e49c(&lStack_50);
  func_0x0001078be164(&lStack_40);
  return;
}



/* Entry: 1078be8ec; end: 1078be8f7;  */

void FUN_1078be8ec(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078bebf8; end: 1078bec4b;  */

long FUN_1078bebf8(long param_1)

{
  func_0x0001073ebb78(param_1 + 0x18);
  func_0x0001073ebb78(param_1);
  return param_1;
}



/* Entry: 1078bedfc; end: 1078bee1f;  */

void FUN_1078bedfc(void)

{
  func_0x0001078bf5b4();
  func_0x0001078bee20();
  return;
}



/* Entry: 1078bef50; end: 1078bef7f;  */

long FUN_1078bef50(long param_1,long param_2)

{
  if (param_1 != param_2) {
    func_0x0001078bf5c0();
    func_0x0001078bee20();
  }
  return param_1;
}



/* Entry: 1078bf0f4; end: 1078bf0f7;  */

void FUN_1078bf0f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bf258; end: 1078bf273;  */

void FUN_1078bf258(long *param_1,long param_2,long param_3)

{
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        func_0x0001078bf55c();
      } while (extraout_w11 != 0);
    }
    func_0x0001078bf5a8();
    func_0x0001003a90c4(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1078bf388; end: 1078bf397;  */

void FUN_1078bf388(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078c1554; end: 1078c1613;  */

/* WARNING: Possible PIC construction at 0x0001078c15e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c15e4) */
/* WARNING: Removing unreachable block (ram,0x0001078c15f8) */
/* WARNING: Removing unreachable block (ram,0x0001078c15f0) */
/* WARNING: Removing unreachable block (ram,0x0001078c5ed0) */
/* WARNING: Removing unreachable block (ram,0x0001078c162c) */

undefined1 * FUN_1078c1554(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  
  func_0x0001078c5bdc();
  uStack_48 = 1;
  puVar1 = (undefined8 *)0x358;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e8750;
  puStack_40 = puVar1;
  func_0x0001074698a0(puVar1 + 3,param_3);
  puVar1[3] = &PTR_DAT_1109e87a0;
  puVar1[0x6a] = 0;
  puVar1[0x69] = 0;
  puStack_40 = (undefined8 *)0x0;
  FUN_1078c58c4(auStack_50);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return auStack_50;
}



/* Entry: 1078c206c; end: 1078c2087;  */

void FUN_1078c206c(long param_1)

{
  func_0x0001077e244c();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 1078c234c; end: 1078c235f;  */

void FUN_1078c234c(void)

{
  func_0x0001078c2308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078c30a8; end: 1078c30c3;  */

long FUN_1078c30a8(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x55 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1078c3344; end: 1078c33af;  */

undefined8 * FUN_1078c3344(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e85b8;
  param_1[1] = 0;
  func_0x00010811e1f4(param_1 + 3);
  return param_1;
}



/* Entry: 1078c39a4; end: 1078c3da7;  */

/* WARNING: Possible PIC construction at 0x0001078c3b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c37c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c37fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c38e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3c88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c3c68) */
/* WARNING: Removing unreachable block (ram,0x0001078c3798) */
/* WARNING: Removing unreachable block (ram,0x0001078c3920) */
/* WARNING: Removing unreachable block (ram,0x0001078c38e8) */
/* WARNING: Removing unreachable block (ram,0x0001078c3840) */
/* WARNING: Removing unreachable block (ram,0x0001078c3800) */
/* WARNING: Removing unreachable block (ram,0x0001078c380c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3848) */
/* WARNING: Removing unreachable block (ram,0x0001078c3820) */
/* WARNING: Removing unreachable block (ram,0x0001078c3830) */
/* WARNING: Removing unreachable block (ram,0x0001078c384c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3854) */
/* WARNING: Removing unreachable block (ram,0x0001078c37cc) */
/* WARNING: Removing unreachable block (ram,0x0001078c37d8) */
/* WARNING: Removing unreachable block (ram,0x0001078c37e4) */
/* WARNING: Removing unreachable block (ram,0x0001078c3838) */
/* WARNING: Removing unreachable block (ram,0x0001078c37fc) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b20) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b3c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b48) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b54) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b80) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b84) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b70) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b7c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b8c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b94) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b30) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b34) */
/* WARNING: Removing unreachable block (ram,0x0001078c3c8c) */

void FUN_1078c39a4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  long param_5,undefined1 *param_6,long param_7)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *unaff_x19;
  undefined1 *puVar11;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar12;
  undefined1 *unaff_x22;
  long lVar13;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *unaff_x29;
  undefined *puVar18;
  undefined8 unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_b0 [16];
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  puVar12 = auStack_b0;
  puVar17 = &stack0xfffffffffffffff0;
  puVar4 = param_3;
LAB_1078c39d4:
  puVar6 = param_3;
  lVar10 = param_5;
  param_3 = puVar4;
  puVar15 = param_4;
  puVar7 = param_2;
  if (param_5 == 0) {
    return;
  }
  do {
    if (lVar10 <= param_7 || (long)puVar15 <= param_7) {
      puStack_70 = &uStack_68;
      uStack_68 = 0;
      puStack_78 = param_6;
      if (lVar10 < (long)puVar15) {
        puVar12 = param_6;
        if (puVar7 == param_3) break;
        puVar18 = (undefined *)0x1078c3c68;
        puVar12 = auStack_b0;
        param_4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = param_6;
        if (param_1 == puVar7) goto LAB_1078c3ccc;
        puVar18 = (undefined *)0x1078c3c8c;
        puVar7 = param_1;
        param_4 = param_1;
      }
      goto SUB_1078c3378;
    }
    lVar16 = 0;
    lVar14 = -(long)puVar15;
    while( true ) {
      if (lVar14 == 0) {
        return;
      }
      puVar2 = param_1 + lVar16;
      if (*(uint *)(puVar7 + 0x40) < *(uint *)(puVar2 + 0x40)) break;
      lVar16 = lVar16 + 0x68;
      lVar14 = lVar14 + 1;
    }
    puStack_80 = param_3;
    if (lVar10 <= -lVar14) {
      if (lVar14 != -1) {
        param_4 = (undefined1 *)(-lVar14 / 2);
        param_2 = param_1 + lVar16 + (long)param_4 * 0x68;
        uVar5 = ((long)param_3 - (long)puVar7) / 0x68;
        puVar4 = puVar7;
        while (puVar11 = puVar4, uVar5 != 0) {
          uVar9 = uVar5 >> 1;
          uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
          puVar4 = puVar11 + uVar9 * 0x68 + 0x68;
          if (*(uint *)(param_2 + 0x40) <= *(uint *)(puVar11 + uVar9 * 0x68 + 0x40)) {
            uVar5 = uVar9;
            puVar4 = puVar11;
          }
        }
        param_5 = ((long)puVar11 - (long)puVar7) / 0x68;
        goto LAB_1078c3aec;
      }
      param_2 = param_1 + lVar16;
      uVar3 = true;
code_r0x0001078c36ac:
      param_1 = (undefined1 *)((long)register0x00000008 + -0x90);
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      func_0x0001078c5e98(param_2,puVar7);
      func_0x0001078c5bdc();
      *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
      func_0x0001078c6064((undefined1 *)((long)register0x00000008 + -0x90));
      func_0x0001078c3da8(unaff_x20,unaff_x19);
      func_0x0001078c3da8(unaff_x19);
      func_0x0001078c2c24();
      func_0x0001078c5b3c(*(undefined8 *)((long)register0x00000008 + -0x28));
      if ((bool)uVar3) {
        return;
      }
      ___stack_chk_fail();
      *(long *)((long)register0x00000008 + -0xe0) = unaff_x26;
      *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x25;
      *(undefined1 **)((long)register0x00000008 + -0xd0) = unaff_x24;
      *(undefined1 **)((long)register0x00000008 + -200) = unaff_x23;
      *(undefined1 **)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(undefined1 **)((long)register0x00000008 + -0xb8) = unaff_x21;
      *(undefined1 **)((long)register0x00000008 + -0xb0) = unaff_x20;
      *(undefined1 **)((long)register0x00000008 + -0xa8) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0xa0) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x98) = &UNK_1078c3710;
      puVar17 = (undefined1 *)((long)register0x00000008 + -0xa0);
      if (puVar6 == (undefined1 *)0x0) {
        return;
      }
      if (puVar6 == (undefined1 *)0x2) {
        *(undefined1 **)((long)register0x00000008 + -0xf0) =
             (undefined1 *)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        puVar7 = param_1 + -0x68;
        puVar1 = (uint *)(param_1 + -0x28);
        param_1 = puVar4;
        if (*(uint *)(puVar4 + 0x40) <= *puVar1) {
          param_1 = puVar7;
          puVar7 = puVar4;
        }
        puVar18 = &UNK_1078c3798;
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x100);
        param_6 = param_4;
      }
      else {
        if (puVar6 == (undefined1 *)0x1) {
          func_0x0001078c5f10();
          puVar17 = *(undefined1 **)((long)register0x00000008 + -0xa0);
          puVar18 = *(undefined **)((long)register0x00000008 + -0x98);
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x90);
          param_6 = puVar4;
          puVar7 = param_1;
          param_4 = *(undefined1 **)((long)register0x00000008 + -0xa8);
          param_1 = *(undefined1 **)((long)register0x00000008 + -0xb0);
          goto SUB_1078c3378;
        }
        puVar7 = param_1;
        if (8 < (long)puVar6) {
          uVar5 = (ulong)puVar6 >> 1;
          puVar6 = puVar4 + uVar5 * 0x68;
          func_0x0001078c33e8(puVar4,puVar6,uVar5,param_4,uVar5);
          param_6 = puVar6;
          func_0x0001078c33e8();
          *(undefined1 **)((long)register0x00000008 + -0xf8) = param_4;
          *(undefined1 **)((long)register0x00000008 + -0xf0) =
               (undefined1 *)((long)register0x00000008 + -0xe8);
          *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
          puVar12 = puVar6;
          goto code_r0x0001078c38b0;
        }
        if (puVar4 == param_1) {
          return;
        }
        *(undefined1 **)((long)register0x00000008 + -0xf8) = param_4;
        *(undefined1 **)((long)register0x00000008 + -0xf0) =
             (undefined1 *)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
        func_0x0001078c5f10();
        puVar18 = &UNK_1078c37cc;
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x100);
        param_6 = puVar4;
      }
      goto SUB_1078c3378;
    }
    param_5 = lVar10 / 2;
    puVar11 = puVar7 + param_5 * 0x68;
    param_2 = puVar2;
    uVar5 = (long)(puVar7 + (-lVar16 - (long)param_1)) / 0x68;
    while (uVar5 != 0) {
      uVar8 = uVar5 >> 1;
      uVar9 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
      uVar5 = uVar8;
      if (*(uint *)(param_2 + uVar8 * 0x68 + 0x40) <= *(uint *)(puVar11 + 0x40)) {
        param_2 = param_2 + uVar8 * 0x68 + 0x68;
        uVar5 = uVar9;
      }
    }
    param_4 = (undefined1 *)((long)(param_2 + (-lVar16 - (long)param_1)) / 0x68);
LAB_1078c3aec:
    puVar4 = puVar11;
    if ((param_2 != puVar7) && (uVar3 = puVar7 == puVar11, puVar4 = param_2, !(bool)uVar3)) {
      unaff_x30 = 0x1078c3b20;
      register0x00000008 = (BADSPACEBASE *)auStack_b0;
      unaff_x19 = puVar11;
      unaff_x20 = param_1;
      unaff_x21 = param_2;
      unaff_x22 = puVar7;
      unaff_x23 = param_6;
      unaff_x24 = param_2;
      unaff_x25 = puVar2;
      unaff_x26 = lVar14;
      unaff_x29 = puVar17;
      puStack_a0 = param_4;
      lStack_98 = param_5;
      lStack_90 = lVar10;
      lStack_88 = param_7;
      goto code_r0x0001078c36ac;
    }
    lVar13 = lVar10 - param_5;
    if ((lVar10 - (long)(param_4 + param_5)) - lVar14 <= (long)(param_4 + param_5))
    goto LAB_1078c3bf8;
    puVar15 = (undefined1 *)-(long)(param_4 + lVar14);
    puVar6 = puVar4;
    FUN_1078c39a4(puVar2,param_2);
    lVar10 = lVar13;
    param_1 = puVar4;
    param_3 = puStack_80;
    puVar7 = puVar11;
    if (lVar13 == 0) {
      return;
    }
  } while( true );
LAB_1078c3d04:
  param_3 = param_3 + -0x68;
  if (puVar12 == param_6) goto LAB_1078c3d58;
  if (puVar7 == param_1) goto LAB_1078c3d50;
  puVar17 = puVar12;
  puVar6 = puVar7 + -0x68;
  puVar4 = puVar7 + -0x68;
  if (*(uint *)(puVar7 + -0x28) <= *(uint *)(puVar12 + -0x28)) {
    puVar17 = puVar12 + -0x68;
    puVar6 = puVar7;
    puVar4 = puVar12 + -0x68;
  }
  puVar7 = puVar6;
  func_0x0001078c3da8(param_3,puVar4);
  puVar12 = puVar17;
  goto LAB_1078c3d04;
LAB_1078c3d50:
  while (puVar12 != param_6) {
    puVar12 = puVar12 + -0x68;
    func_0x0001078c3da8(param_3,puVar12);
    param_3 = param_3 + -0x68;
  }
  goto LAB_1078c3d58;
LAB_1078c3ccc:
  if (param_6 == puVar4) goto LAB_1078c3d58;
  if (puVar7 == param_3) goto LAB_1078c3cf4;
  if (*(uint *)(puVar7 + 0x40) < *(uint *)(puVar4 + 0x40)) {
    func_0x0001078c3da8(param_1,puVar7);
    puVar7 = puVar7 + 0x68;
  }
  else {
    func_0x0001078c3da8(param_1,puVar4);
    puVar4 = puVar4 + 0x68;
  }
  param_1 = param_1 + 0x68;
  goto LAB_1078c3ccc;
code_r0x0001078c38b0:
  if (puVar4 == puVar6) {
    for (; puVar12 != param_1; puVar12 = puVar12 + 0x68) {
      func_0x0001078c60b8(param_4);
      param_4 = param_4 + 0x68;
      func_0x0001078c5c88();
    }
code_r0x0001078c3934:
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    func_0x0001078c395c((undefined1 *)((long)register0x00000008 + -0xf8));
    return;
  }
  if (puVar12 == param_1) {
    if (puVar4 != puVar6) {
      func_0x0001078c5f10();
      puVar18 = &UNK_1078c3920;
      puVar12 = (undefined1 *)((long)register0x00000008 + -0x100);
SUB_1078c3378:
      *(undefined1 **)(puVar12 + -0x20) = param_1;
      *(undefined1 **)(puVar12 + -0x18) = param_4;
      *(undefined1 **)(puVar12 + -0x10) = puVar17;
      *(undefined **)(puVar12 + -8) = puVar18;
      func_0x000104c318bc();
      *(undefined8 *)(param_6 + 0x38) = *(undefined8 *)(puVar7 + 0x38);
      *(undefined8 *)(puVar7 + 0x38) = 0;
      uVar20 = *(undefined8 *)(puVar7 + 0x48);
      uVar19 = *(undefined8 *)(puVar7 + 0x40);
      uVar22 = *(undefined8 *)(puVar7 + 0x58);
      uVar21 = *(undefined8 *)(puVar7 + 0x50);
      *(undefined8 *)(param_6 + 0x60) = *(undefined8 *)(puVar7 + 0x60);
      *(undefined8 *)(param_6 + 0x48) = uVar20;
      *(undefined8 *)(param_6 + 0x40) = uVar19;
      *(undefined8 *)(param_6 + 0x58) = uVar22;
      *(undefined8 *)(param_6 + 0x50) = uVar21;
      return;
    }
    goto code_r0x0001078c3934;
  }
  param_6 = param_4;
  if (*(uint *)(puVar4 + 0x40) <= *(uint *)(puVar12 + 0x40)) {
    puVar18 = &UNK_1078c38e8;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x100);
    puVar7 = puVar4;
    goto SUB_1078c3378;
  }
  func_0x0001078c60b8();
  puVar12 = puVar12 + 0x68;
  func_0x0001078c5c88();
  param_4 = param_4 + 0x68;
  goto code_r0x0001078c38b0;
LAB_1078c3bf8:
  FUN_1078c39a4(puVar4,puVar11,param_3,-(long)(param_4 + lVar14),lVar13,param_6);
  param_1 = param_1 + lVar16;
  goto LAB_1078c39d4;
LAB_1078c3cf4:
  for (; param_6 != puVar4; puVar4 = puVar4 + 0x68) {
    func_0x0001078c3da8(param_1,puVar4);
    param_1 = param_1 + 0x68;
  }
LAB_1078c3d58:
  func_0x0001078c395c(&puStack_78);
  return;
}



/* Entry: 1078c42b0; end: 1078c42cb;  */

void FUN_1078c42b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1078c45f4; end: 1078c463f;  */

void FUN_1078c45f4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x492492492492493) {
    plVar1 = param_1 + 2;
    func_0x0001074c5e9c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 7);
  }
  else {
    func_0x0001074c5e5c();
    plVar1 = param_1 + 2;
    func_0x0001078c4674();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1078c47c8; end: 1078c47e7;  */

void FUN_1078c47c8(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107470508();
  }
  return;
}



/* Entry: 1078c55c4; end: 1078c55eb;  */

void FUN_1078c55c4(undefined8 param_1)

{
  ulong unaff_x27;
  byte bVar1;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  func_0x0001078c5e28();
  func_0x0001072cb490();
  func_0x0001078c5f64();
  func_0x0001078c6140();
  func_0x0001078c5dc8();
  do {
    func_0x0001078c5f98();
    for (; unaff_x27 != 0; unaff_x27 = unaff_x27 - 1 & unaff_x27) {
      func_0x0001078c5ea4();
      func_0x0001074083d0();
      if ((int)param_1 != 0) {
        func_0x0001078c6114();
        return;
      }
    }
    bVar1 = NEON_umaxv(CONCAT17(-((char)((ulong)unaff_d10 >> 0x38) ==
                                 (char)((ulong)unaff_d9 >> 0x38)),
                                CONCAT16(-((char)((ulong)unaff_d10 >> 0x30) ==
                                          (char)((ulong)unaff_d9 >> 0x30)),
                                         CONCAT15(-((char)((ulong)unaff_d10 >> 0x28) ==
                                                   (char)((ulong)unaff_d9 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)unaff_d10 >> 0x20) ==
                                                            (char)((ulong)unaff_d9 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)unaff_d10 >>
                                                                            0x18) ==
                                                                     (char)((ulong)unaff_d9 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  unaff_d10 >> 0x10) ==
                                                  (char)((ulong)unaff_d9 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)unaff_d10 >> 8) ==
                                                            (char)((ulong)unaff_d9 >> 8)),
                                                           -((char)unaff_d10 == (char)unaff_d9))))))
                                        )),1);
  } while ((bVar1 & 1) == 0);
  return;
}



/* Entry: 1078c58c4; end: 1078c58eb;  */

long FUN_1078c58c4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078c5ac0; end: 1078c5acb;  */

void FUN_1078c5ac0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e87e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078cab50; end: 1078cab73;  */

void FUN_1078cab50(long param_1)

{
  func_0x0001078d2be4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1078cb1d4; end: 1078cb56f;  */

/* WARNING: Possible PIC construction at 0x0001078cb5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078cb5e0) */

long * FUN_1078cb1d4(undefined8 param_1,double param_2,float param_3,float param_4,float param_5,
                    undefined8 param_6,long *param_7,long *param_8)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  float fVar18;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  long alStack_170 [3];
  long lStack_158;
  undefined8 auStack_150 [3];
  ulong uStack_138;
  undefined1 uStack_130;
  long *plStack_128;
  byte bStack_118;
  long lStack_110;
  undefined1 uStack_108;
  long alStack_100 [7];
  long lStack_c8;
  long lStack_c0;
  long alStack_b8 [3];
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_80;
  
  puVar16 = &stack0xfffffffffffffff0;
  uStack_178 = param_1;
  func_0x0001078d2214();
  lVar12 = *param_7;
  lStack_158 = param_7[1];
  alStack_170[2] = lVar12;
  uStack_80 = extraout_x8;
  if (lStack_158 != 0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2f64c(alStack_100);
  alStack_170[0] = 0;
  alStack_170[1] = 0;
  uStack_138 = lVar12 + 0x208;
  uStack_130 = 1;
  func_0x00010724e404();
  func_0x0001078caebc(alStack_170,*(undefined8 *)(lVar12 + 0x330),*(undefined8 *)(lVar12 + 0x338));
  func_0x0001077805c4(alStack_b8,*(undefined8 *)(lVar12 + 0x2b0));
  func_0x000104c2f1f0(alStack_100,alStack_b8);
  func_0x000104c2f714(alStack_b8);
  func_0x00010724e49c(&uStack_138);
  lVar12 = alStack_170[0];
  lStack_110 = alStack_170[0] + 0xa0;
  uStack_108 = 0;
  bVar1 = *(long *)(alStack_170[0] + 0x90) != 0;
  if (bVar1) {
    func_0x0001073ae49c();
  }
  plVar11 = alStack_100;
  uStack_108 = bVar1;
  func_0x0001078cb68c(lVar12);
  plVar13 = *(long **)(*(long *)(lVar12 + 0xe0) + 0x1d0);
  plVar8 = *(long **)(*(long *)(lVar12 + 0xe0) + 0x1d8);
  do {
    uVar6 = plVar13 == plVar8;
    if ((bool)uVar6) {
      param_8 = *(long **)(lVar12 + 0x88);
      lVar12 = *(long *)(lVar12 + 0xe0);
      plVar13 = *(long **)(lVar12 + 0x208);
      uVar14 = *(undefined8 *)(lVar12 + 0x210);
      func_0x0001078c4538(alStack_b8,lVar12 + 0x218);
      func_0x0001074c61ec(&uStack_138,alStack_b8);
      auStack_150[0] = 0;
      plVar11 = alStack_100;
      func_0x0001078d3484(uStack_178,param_8,plVar11,lVar12,plVar13,uVar14,&uStack_138,auStack_150);
      func_0x0001073c5f18(&uStack_138);
      func_0x0001074736dc(alStack_b8);
LAB_1078cb464:
      func_0x0001078cec54(&lStack_110);
      func_0x0001078d29b8();
      func_0x000104c2f714(alStack_100);
      plVar8 = alStack_170 + 2;
      func_0x0001078cad34();
      func_0x0001078d208c(uStack_80);
      if ((bool)uVar6) {
        return plVar8;
      }
      ___stack_chk_fail();
      func_0x0001078d28e4();
      func_0x0001078d2a78();
      func_0x0001078d28d0();
      func_0x0001078cec54(&lStack_110);
      func_0x0001078d29b8();
      func_0x000104c2f714(alStack_100);
      func_0x0001078cad34(alStack_170 + 2);
      puVar17 = &SUB_1078cb570;
      func_0x0001078d2494();
      puVar5 = auStack_180;
      while( true ) {
        *(long **)(puVar5 + -0x30) = plVar13;
        *(long *)(puVar5 + -0x28) = lVar12;
        *(long **)(puVar5 + -0x20) = param_8;
        *(long **)(puVar5 + -0x18) = plVar8;
        *(undefined1 **)(puVar5 + -0x10) = puVar16;
        *(undefined **)(puVar5 + -8) = puVar17;
        puVar16 = puVar5 + -0x10;
        plVar8 = plVar11;
        func_0x0001078d2214();
        *(undefined8 *)(puVar5 + -0x38) = extraout_x8_00;
        *(undefined8 *)(puVar5 + -0x78) = 0;
        plVar8 = (long *)*plVar8;
        (**(code **)(*plVar8 + 0x18))();
        func_0x000104c2fe00(puVar5 + -0x70,plVar8);
        puVar9 = puVar5 + -0x70;
        func_0x0001073f26dc(puVar5 + -0x78);
        plVar8 = (long *)plVar11[1];
        param_8 = (long *)plVar11[2];
        lVar12 = -0x61c8864680b583eb;
        uVar6 = plVar8 == param_8;
        if ((bool)uVar6) break;
        puVar17 = &UNK_1078cb5e0;
        puVar5 = puVar5 + -0x80;
        plVar11 = plVar8;
      }
      plVar11 = *(long **)(puVar5 + -0x78);
      func_0x000104c2f714(puVar5 + -0x70);
      func_0x0001078d208c(*(undefined8 *)(puVar5 + -0x38));
      if (!(bool)uVar6) {
        ___stack_chk_fail();
        func_0x000104c2f714(puVar5 + -0x70);
        func_0x0001078d2494();
        if (*(int *)(puVar9 + 0x10) == 0) {
          *(undefined1 **)(puVar5 + -0x90) = puVar16;
          *(undefined **)(puVar5 + -0x88) = &UNK_1078cb644;
          *(undefined8 *)(puVar5 + -0x98) = 0;
          func_0x0001073ca0ec(puVar5 + -0x98,puVar9);
          return *(long **)(puVar5 + -0x98);
        }
        *(undefined1 **)(puVar5 + -0x90) = puVar16;
        *(undefined **)(puVar5 + -0x88) = &UNK_1078cb644;
        *(undefined8 *)(puVar5 + -0x98) = 0;
        func_0x0001077ab248(puVar5 + -0x98,puVar9);
        return *(long **)(puVar5 + -0x98);
      }
      return plVar11;
    }
    plVar7 = plVar13;
    func_0x000104c2d614();
    if (((ulong)plVar7 & 1) == 0) {
      plVar7 = plVar13;
      func_0x000104c2d614();
      if ((((ulong)plVar7 & 1) == 0) &&
         (plVar7 = param_8, plVar11 = plVar13, func_0x0001078c44f4(), plVar7 != (long *)0x0)) {
        plVar11 = plVar11 + 7;
        func_0x0001078c451c(&uStack_138);
        if ((bStack_118 & 1) == 0) goto LAB_1078cb428;
        lVar10 = *(long *)(lVar12 + 0xe0);
        lVar2 = plStack_128[1];
        fVar3 = **(float **)(lVar12 + 0x88);
        for (lVar15 = *plStack_128; fVar18 = SUB84(param_2,0), lVar15 != lVar2;
            lVar15 = lVar15 + 0x38) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (alStack_b8,lVar15);
          func_0x0001081202ac(plVar13[7]);
          dStack_a0 = (double)(fVar18 / fVar3);
          dStack_98 = (double)(param_3 / fVar3);
          param_2 = (double)(param_4 / fVar3);
          dStack_88 = (double)(param_5 / fVar3);
          plVar11 = alStack_b8;
          dStack_90 = param_2;
          func_0x0001074c5cd0(lVar10 + 0x218);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_b8);
        }
        if ((bStack_118 & 1) == 0) {
          func_0x000104bdc2c8();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1078cb4b8);
          (*pcVar4)();
        }
        func_0x0001078d2cb0(&lStack_c8,uStack_138);
        uVar6 = lStack_c8 == 1;
        if ((bool)uVar6) {
          if (plVar13[7] != 0) {
            func_0x0001078d28c4();
            func_0x0001078d26c8();
          }
          plVar11 = &lStack_c0;
          func_0x00010811e74c();
          func_0x0001078d2a78();
          func_0x0001078d28d0();
          goto LAB_1078cb3b4;
        }
        func_0x0001078d2a54();
        func_0x0001078d28d8(&UNK_10f433ce3);
        func_0x0001078d2518();
        func_0x0001078d28e4();
        func_0x0001078d2a78();
      }
      else {
        uStack_138 = uStack_138 & 0xffffffffffffff00;
        bStack_118 = 0;
LAB_1078cb428:
        func_0x0001078d2a54();
        func_0x0001078d28d8(&UNK_10f433cce);
        func_0x0001078d2518();
        func_0x0001078d28e4();
      }
      func_0x0001078d28d0();
      goto LAB_1078cb464;
    }
LAB_1078cb3b4:
    plVar13 = plVar13 + 8;
  } while( true );
}



/* Entry: 1078ccfc8; end: 1078cd01f;  */

long * FUN_1078ccfc8(long *param_1)

{
  func_0x0001057f951c(param_1 + 0x11);
  func_0x0001001148fc(param_1 + 0xd);
  func_0x0001078cdc98(param_1 + 3);
  if (*param_1 != 0) {
    func_0x0001078ce654(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1078cd56c; end: 1078cd63f;  */

void FUN_1078cd56c(long param_1,long *param_2,float *param_3)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 unaff_d10;
  undefined1 auStack_68 [24];
  
  func_0x00010811f9a8(*(float *)(*param_2 + 0x20) * *param_3);
  uVar1 = *param_2 + 0x24;
  func_0x0001078d2c60(uVar1);
  func_0x00010811f9c0(param_1,uVar1 & 0xffffffff);
  func_0x00010813f2bc(auStack_68,*(undefined4 *)(*param_2 + 0x1c),1);
  func_0x00010811f8f8(param_1,auStack_68);
  func_0x00010811f914(*(undefined4 *)(*param_2 + 0x34),param_1);
  lVar2 = *param_2;
  fVar3 = *(float *)(lVar2 + 0x38);
  fVar4 = *(float *)(lVar2 + 0x3c);
  fVar5 = *param_3;
  uVar6 = *(undefined4 *)(lVar2 + 0x40);
  uVar1 = lVar2 + 0x44;
  func_0x0001078d2c60();
  lVar2 = *(long *)(param_1 + 0x150);
  if ((uVar1 & 0xffffffff) == 0) {
    if (lVar2 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      func_0x0001081203e8(param_1 + 0x150);
      if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
        *(undefined1 *)(param_1 + 0x1d0) = 1;
        func_0x0001081148f4(param_1 + 0x180);
        func_0x0001081148f4(param_1 + 0x170);
        func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      return;
    }
  }
  else {
    if (lVar2 == 0) {
      func_0x00010812042c(&stack0xffffffffffffffb8);
      func_0x000108120454(param_1 + 0x150,&stack0xffffffffffffffb8);
      func_0x0001081215dc(unaff_d10);
      lVar2 = *(long *)(param_1 + 0x150);
    }
    *(float *)(lVar2 + 0x10) = fVar3 * fVar5;
    *(float *)(lVar2 + 0x14) = fVar4 * fVar5;
    func_0x00010810c614(uVar6);
    func_0x00010810c688(*(undefined8 *)(param_1 + 0x150),uVar1 & 0xffffffff);
  }
  return;
}



/* Entry: 1078cddf8; end: 1078cde23;  */

long FUN_1078cddf8(long param_1)

{
  func_0x0001078bee2c(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 1078ce1b0; end: 1078ce1db;  */

void FUN_1078ce1b0(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1078ce374; end: 1078ce39b;  */

long FUN_1078ce374(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001078ce39c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1078ce490; end: 1078ce4b3;  */

void FUN_1078ce490(void)

{
  func_0x0001078d26f0();
  func_0x0001078ce4b4();
  return;
}



/* Entry: 1078ce594; end: 1078ce5a7;  */

void FUN_1078ce594(void)

{
  func_0x0001078ce5b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078ce738; end: 1078ce73f;  */

void FUN_1078ce738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078cec3c; end: 1078cec53;  */

void FUN_1078cec3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078cf164; end: 1078cf1f7;  */

long * FUN_1078cf164(long *param_1)

{
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x21;
  
  puVar2 = (undefined8 *)param_1[1];
  param_1[5] = 0;
  while (func_0x0001078d2ab8(), (bool)in_CY) {
    __ZdlPv(*puVar2);
    puVar2 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar2;
  }
  if (extraout_x8 == 1) {
    lVar1 = 0x100;
  }
  else {
    if (extraout_x8 != 2) goto LAB_1078cf1cc;
    lVar1 = 0x200;
  }
  param_1[4] = lVar1;
LAB_1078cf1cc:
  for (; puVar2 != unaff_x21; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  func_0x0001078cf148(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d165c; end: 1078d1813;  */

void FUN_1078d165c(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001078d25ec();
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  uVar2 = *(undefined8 *)(param_2 + 0x5c);
  uVar1 = *(undefined8 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x5c) = uVar2;
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x84);
  uVar1 = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x84) = uVar2;
  *(undefined8 *)(param_1 + 0x7c) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  func_0x00010726ccd4(param_1 + 0x100,param_2 + 0x100);
  func_0x000104c318bc(unaff_x19 + 0x160,unaff_x20 + 0x160);
  func_0x000104c318bc(unaff_x19 + 0x198,unaff_x20 + 0x198);
  *(undefined1 *)(unaff_x19 + 0x1d0) = *(undefined1 *)(unaff_x20 + 0x1d0);
  *(undefined1 *)(unaff_x19 + 0x1d1) = *(undefined1 *)(unaff_x20 + 0x1d1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1d4);
  *(undefined8 *)(unaff_x19 + 0x1dc) = *(undefined8 *)(unaff_x20 + 0x1dc);
  *(undefined8 *)(unaff_x19 + 0x1d4) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x1e4) = *(undefined1 *)(unaff_x20 + 0x1e4);
  *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e8) = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x1f0);
  *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x20 + 0x1f8);
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
  *(undefined4 *)(unaff_x19 + 0x200) = *(undefined4 *)(unaff_x20 + 0x200);
  *(undefined4 *)(unaff_x19 + 0x204) = *(undefined4 *)(unaff_x20 + 0x204);
  *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x20 + 0x208);
  *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined4 *)(unaff_x19 + 0x218) = *(undefined4 *)(unaff_x20 + 0x218);
  return;
}



/* Entry: 1078d1a18; end: 1078d1b33;  */

long FUN_1078d1a18(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000107561304(param_1 + 8);
  }
  return param_1;
}



/* Entry: 1078d1c60; end: 1078d1c73;  */

void FUN_1078d1c60(void)

{
  func_0x0001078d1c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d1ed0; end: 1078d1f07;  */

long FUN_1078d1ed0(long param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  func_0x0001078cd000(param_1 + 0xf8);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0xb8);
  FUN_1078cab50(param_1 + 0xa8);
  lVar1 = param_1 + 0x18;
  func_0x0001077ef118(&UNK_1109dea10);
  func_0x000104c2f714(lVar1 + 0x50);
  func_0x0001077e6330(unaff_x20);
  return param_1 + 0x18;
}



/* Entry: 1078d3170; end: 1078d3407;  */

/* WARNING: Possible PIC construction at 0x0001078d31fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d3200) */
/* WARNING: Removing unreachable block (ram,0x0001078d3220) */
/* WARNING: Removing unreachable block (ram,0x0001078d3228) */
/* WARNING: Removing unreachable block (ram,0x0001078d322c) */
/* WARNING: Removing unreachable block (ram,0x0001078d3234) */
/* WARNING: Removing unreachable block (ram,0x0001078d3244) */
/* WARNING: Removing unreachable block (ram,0x0001078d3248) */
/* WARNING: Removing unreachable block (ram,0x0001078d3250) */
/* WARNING: Removing unreachable block (ram,0x0001078d3258) */
/* WARNING: Removing unreachable block (ram,0x0001078d3384) */
/* WARNING: Removing unreachable block (ram,0x0001078d33a4) */
/* WARNING: Removing unreachable block (ram,0x0001078d33b4) */
/* WARNING: Removing unreachable block (ram,0x0001078d33cc) */
/* WARNING: Removing unreachable block (ram,0x0001078d33e8) */
/* WARNING: Removing unreachable block (ram,0x0001078d3360) */

undefined8 *
FUN_1078d3170(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_280 [68];
  
  puVar1 = param_2;
  uVar2 = param_1;
  func_0x0001078d4a0c();
  *puVar1 = (int)uVar2;
  uVar2 = *param_5;
  *(undefined8 *)(puVar1 + 4) = param_5[1];
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *param_5 = 0;
  param_5[1] = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  func_0x00010726ed14(puVar1 + 8);
  *(undefined4 **)(param_2 + 0xc) = param_2;
  func_0x00010b99dc78();
  uVar2 = 0x50;
  __Znwm();
  func_0x0001081292f8(param_1);
  auStack_280[0] = uVar2;
  func_0x0001078d4af0(puVar1 + 6,auStack_280);
  if (!(bool)in_ZR) {
    func_0x0001078d49f8();
    func_0x000107475334();
  }
  return (undefined8 *)(puVar1 + 2);
}



/* Entry: 1078d39c4; end: 1078d39e7;  */

void FUN_1078d39c4(void)

{
  func_0x0001078d4a98();
  func_0x0001078d39e8();
  return;
}



/* Entry: 1078d3bd8; end: 1078d3c07;  */

void FUN_1078d3bd8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x0001078d3d64(param_2);
    param_2 = param_2 + 0xb0;
  }
  return;
}



/* Entry: 1078d3dc4; end: 1078d3de7;  */

void FUN_1078d3dc4(void)

{
  func_0x0001078d4a98();
  func_0x0001078d3de8();
  return;
}



/* Entry: 1078d3f74; end: 1078d3fc7;  */

void FUN_1078d3f74(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x23;
  
  func_0x0001078d4a24();
  func_0x0001078d4b6c();
  func_0x0001078d3fc8();
  if (unaff_x23 != 0) {
    func_0x0001078d4b20(param_1,param_2,*(undefined8 *)(unaff_x20 + 8));
    func_0x0001078d4b14(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  }
  func_0x0001078d4a6c();
  return;
}



/* Entry: 1078d42e0; end: 1078d430f;  */

void FUN_1078d42e0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078d4ae0();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xb0) {
    func_0x0001078d4b4c();
  }
  return;
}



/* Entry: 1078d44e4; end: 1078d4507;  */

undefined8 FUN_1078d44e4(undefined8 param_1)

{
  func_0x0001078d4508();
  return param_1;
}



/* Entry: 1078d4634; end: 1078d4647;  */

void FUN_1078d4634(void)

{
  func_0x0001078d4608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d4938; end: 1078d495b;  */

void FUN_1078d4938(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001078d49f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1078d503c; end: 1078d5087;  */

long FUN_1078d503c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078d5138; end: 1078d52b7;  */

/* WARNING: Possible PIC construction at 0x0001078d5258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d525c) */
/* WARNING: Removing unreachable block (ram,0x0001078d52a8) */
/* WARNING: Removing unreachable block (ram,0x0001078d528c) */

undefined1 * FUN_1078d5138(long param_1)

{
  long *plVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  
  lVar5 = param_1;
  func_0x0001078d5418();
  lVar8 = *(long *)(*(long *)(lVar5 + 0x2b0) + 0x150);
  pfVar2 = *(float **)(lVar5 + 8);
  lVar5 = *(long *)(lVar5 + 0x10);
  uStack_68 = 1;
  puVar6 = (undefined8 *)0x220;
  __Znwm();
  plVar7 = puVar6 + 1;
  *plVar7 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_1109e8d08;
  puStack_80 = *(undefined8 **)(pfVar2 + 6);
  if (puStack_80 != (undefined8 *)0x0) {
    plVar1 = puStack_80 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_60 = puVar6;
  func_0x000108122a10(puVar6 + 3,&puStack_80);
  func_0x000107475310(&puStack_80);
  puVar6[3] = &PTR_DAT_1109e8d58;
  puVar6[0x39] = 0;
  puVar6[0x38] = 0;
  puVar6[0x3a] = lVar8;
  puVar6[0x3b] = pfVar2;
  uVar10 = *(undefined8 *)(lVar5 + 0x98);
  uVar11 = *(undefined8 *)(lVar5 + 0xb0);
  uVar9 = *(undefined8 *)(lVar5 + 0xa8);
  puVar6[0x3d] = *(undefined8 *)(lVar5 + 0xa0);
  puVar6[0x3c] = uVar10;
  puVar6[0x3f] = uVar11;
  puVar6[0x3e] = uVar9;
  puVar6[0x40] = *(undefined8 *)(param_1 + 0x328);
  uVar10 = *(undefined8 *)(lVar8 + 0x40);
  puVar6[0x41] = CONCAT44((float)((ulong)uVar10 >> 0x20) * *pfVar2,(float)uVar10 * *pfVar2);
  puVar6[0x43] = 0;
  puVar6[0x42] = 0;
  puStack_60 = (undefined8 *)0x0;
  if ((puVar6[5] == 0) || (*(long *)(puVar6[5] + 8) == -1)) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puStack_80 = puVar6 + 3;
    puStack_78 = puVar6;
    func_0x0001003a8180(puVar6 + 4,&puStack_80);
    func_0x0001003a90c4(&puStack_80);
  }
  if (puStack_60 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return auStack_70;
}



/* Entry: 1078d53d0; end: 1078d53f7;  */

undefined8 * FUN_1078d53d0(undefined8 *param_1)

{
  func_0x0001078d53f8(*param_1);
  return param_1;
}



/* Entry: 1078d5c60; end: 1078d5c67;  */

void FUN_1078d5c60(void)

{
  return;
}



/* Entry: 1078d5ed8; end: 1078d5eeb;  */

void FUN_1078d5ed8(void)

{
  func_0x0001078d5ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d60b4; end: 1078d60c7;  */

void FUN_1078d60b4(void)

{
  func_0x0001078d60a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d6cfc; end: 1078d6dbf;  */

/* WARNING: Possible PIC construction at 0x0001078d6d80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d6d84) */
/* WARNING: Removing unreachable block (ram,0x0001078d6da4) */
/* WARNING: Removing unreachable block (ram,0x0001078d6d90) */
/* WARNING: Removing unreachable block (ram,0x0001078d6dd8) */

undefined1 * FUN_1078d6cfc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  
  func_0x0001078d7840();
  uStack_48 = 1;
  puVar1 = (undefined8 *)0x350;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e9028;
  puStack_40 = puVar1;
  func_0x0001074698a0(puVar1 + 3,param_3);
  puVar1[3] = &PTR_DAT_1109e9078;
  puVar1[0x69] = 0;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001078d7434(auStack_50);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return auStack_50;
}



/* Entry: 1078d72e8; end: 1078d7427;  */

undefined1  [16] FUN_1078d72e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x0001078d732c();
  uVar1 = param_1;
  func_0x0001078d73ac(param_2,param_3);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1078d74d0; end: 1078d7663;  */

/* WARNING: Possible PIC construction at 0x0001078d75f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d75f4) */
/* WARNING: Removing unreachable block (ram,0x0001078d7644) */
/* WARNING: Removing unreachable block (ram,0x0001078d7658) */
/* WARNING: Removing unreachable block (ram,0x0001078d762c) */

undefined1 * FUN_1078d74d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  
  lVar5 = param_1;
  func_0x0001078d7840();
  lVar5 = *(long *)(*(long *)(lVar5 + 0x2b0) + 0x150);
  func_0x000104c2fe00(auStack_a0,lVar5 + 8);
  uStack_68 = *(undefined8 *)(lVar5 + 0x40);
  lVar5 = *(long *)(param_1 + 8);
  uStack_58 = 1;
  puVar4 = (undefined8 *)0x220;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109e90b8;
  puStack_b0 = *(undefined8 **)(lVar5 + 0x18);
  if (puStack_b0 != (undefined8 *)0x0) {
    plVar1 = puStack_b0 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_50 = puVar4;
  func_0x000108122a10(puVar4 + 3,&puStack_b0);
  func_0x000107475310(&puStack_b0);
  puVar4[3] = &PTR_DAT_1109e9108;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  func_0x000104c2fe00(puVar4 + 0x3a,auStack_a0);
  puVar4[0x41] = uStack_68;
  puVar4[0x42] = 0;
  puVar4[0x43] = lVar5;
  puStack_50 = (undefined8 *)0x0;
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_b0 = puVar4 + 3;
    puStack_a8 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&puStack_b0);
    func_0x0001003a90c4(&puStack_b0);
  }
  if (puStack_50 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  return auStack_60;
}



/* Entry: 1078d782c; end: 1078d78a3;  */

void FUN_1078d782c(void)

{
  return;
}



/* Entry: 1078d7c84; end: 1078d7cd3;  */

float FUN_1078d7c84(float param_1,long param_2)

{
  func_0x0001078d7d1c();
  return param_1 + *(float *)(param_2 + 0x1b0) * *(float *)(*(long *)(param_2 + 0x1a8) + 0x30) +
         *(float *)(param_2 + 0x1b0) * *(float *)(*(long *)(param_2 + 0x1a8) + 0x34);
}


