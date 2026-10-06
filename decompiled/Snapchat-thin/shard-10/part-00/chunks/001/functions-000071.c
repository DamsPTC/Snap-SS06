/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10741b404; end: 10741b47f;  */

long FUN_10741b404(undefined8 param_1)

{
  ulong extraout_x8;
  long *unaff_x19;
  ulong unaff_x26;
  long unaff_x27;
  
  func_0x00010741b8ec();
  do {
    func_0x00010741b9b8();
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 - 1 & unaff_x26) {
      func_0x00010741b9a0();
      func_0x000104c32db4();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x27;
      }
    }
    func_0x00010741b990();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 10741b480; end: 10741b487;  */

void FUN_10741b480(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1[2];
  param_1[3] = param_1[3] + -1;
  lVar3 = *param_1;
  uVar6 = *param_2;
  uVar4 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)((long)param_2 + (-8 - lVar3)) & uVar1));
  lVar7 = CONCAT17(-((char)((ulong)uVar6 >> 0x38) == -0x80),
                   CONCAT16(-((char)((ulong)uVar6 >> 0x30) == -0x80),
                            CONCAT15(-((char)((ulong)uVar6 >> 0x28) == -0x80),
                                     CONCAT14(-((char)((ulong)uVar6 >> 0x20) == -0x80),
                                              CONCAT13(-((char)((ulong)uVar6 >> 0x18) == -0x80),
                                                       CONCAT12(-((char)((ulong)uVar6 >> 0x10) ==
                                                                 -0x80),CONCAT11(-((char)((ulong)
                                                  uVar6 >> 8) == -0x80),-((char)uVar6 == -0x80))))))
                           ));
  if (lVar7 == 0 || uVar4 == 0) {
    uVar4 = 0;
    uVar5 = 0xfe;
  }
  else {
    uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    bVar2 = ((ulong)LZCOUNT(lVar7) >> 3) + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) < 8;
    uVar4 = (ulong)bVar2;
    uVar5 = 0x80;
    if (!bVar2) {
      uVar5 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar5;
  *(undefined1 *)(lVar3 + ((ulong)((long)param_2 + (-7 - lVar3)) & uVar1) + (uVar1 & 7)) = uVar5;
  *(ulong *)(lVar3 + -8) = *(long *)(lVar3 + -8) + uVar4;
  return;
}



/* Entry: 10741b488; end: 10741b4ab;  */

void FUN_10741b488(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10741b4ac(&uStack_18);
  return;
}



/* Entry: 10741b4ac; end: 10741b4b3;  */

void FUN_10741b4ac(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  FUN_10741b4e8(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 10741b4b4; end: 10741b4e7;  */

void FUN_10741b4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10741b4e8(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 10741b4e8; end: 10741b643;  */

void FUN_10741b4e8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong uVar6;
  ulong extraout_x11;
  ulong uVar7;
  ulong extraout_x12;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint6 uVar11;
  undefined8 uVar12;
  
  puVar10 = (ulong *)*param_2;
  plVar2 = param_2;
  func_0x00010741b9e4(*puVar10);
  lVar8 = 0;
  uVar6 = *puVar10;
  uVar7 = puVar10[2];
  uVar5 = uVar6 >> 0xc ^ (ulong)plVar2 >> 7;
  bVar1 = (byte)plVar2;
  uVar11 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar7;
    uVar12 = *(undefined8 *)(uVar6 + uVar5);
    for (uVar6 = CONCAT17(-((byte)((ulong)uVar12 >> 0x38) == (bVar1 & 0x7f)),
                          CONCAT16(-((byte)((ulong)uVar12 >> 0x30) == (bVar1 & 0x7f)),
                                   CONCAT15(-((char)((ulong)uVar12 >> 0x28) ==
                                             (char)(uVar11 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar12 >> 0x20) ==
                                                      (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar12 >> 0x18) ==
                                                               (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar12 >>
                                                                               0x10) ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar12 >> 8) == (char)(uVar11 >> 8)),
                                                  -((char)uVar12 == (char)uVar11)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar3 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar9 = (ulong *)(uVar5 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar7);
      uVar3 = puVar10[1] + (long)puVar9 * 0x40;
      func_0x000104c32db4(uVar3,param_3);
      if ((uVar3 & 1) != 0) {
        uVar4 = 0;
        goto LAB_10741b5c4;
      }
    }
    func_0x00010741b990();
    if ((extraout_x8 & 1) != 0) break;
    lVar8 = lVar8 + 8;
    uVar5 = lVar8 + uVar5;
    uVar6 = extraout_x11;
    uVar7 = extraout_x12;
  }
  FUN_10741b644(puVar10,plVar2);
  lVar8 = *(long *)(*param_2 + 8) + (long)puVar10 * 0x40;
  param_6 = (undefined8 *)*param_6;
  func_0x000104c318bc(lVar8,*param_5);
  uVar12 = *param_6;
  *param_6 = 0;
  *(undefined8 *)(lVar8 + 0x38) = uVar12;
  uVar4 = 1;
  puVar9 = puVar10;
LAB_10741b5c4:
  lVar8 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + (long)puVar9;
  param_1[1] = lVar8 + (long)puVar9 * 0x40;
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 10741b644; end: 10741b73b;  */

void FUN_10741b644(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = param_2;
  func_0x00010741b934();
  func_0x000100061de0();
  lVar5 = *unaff_x19;
  if ((*(long *)(lVar5 + -8) == 0) && (*(char *)(lVar5 + (long)param_1) != -2)) {
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      FUN_10741b73c();
    }
    else {
      func_0x00010ae6c914();
    }
    param_1 = unaff_x19;
    lVar9 = param_2;
    func_0x000100061de0();
    lVar5 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar3 = *(char *)(lVar5 + (long)param_1) == -0x80;
  *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) - (ulong)bVar3;
  bVar2 = (byte)param_2 & 0x7f;
  uVar6 = unaff_x19[2];
  *(byte *)(lVar5 + (long)param_1) = bVar2;
  *(byte *)(lVar5 + (uVar6 & (long)param_1 - 7U) + (uVar6 & 7)) = bVar2;
  func_0x00010741b918(extraout_x8);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar8 = param_1[2];
  param_1[2] = lVar9;
  FUN_107367a70();
  lVar10 = param_1[1];
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar1 + lVar9)) {
      lVar7 = lVar5;
      func_0x000104c2fe38();
      plVar4 = param_1;
      func_0x000100061de0(param_1,lVar7);
      bVar2 = (byte)lVar7 & 0x7f;
      uVar6 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + (long)plVar4) = bVar2;
      *(byte *)(lVar7 + ((long)plVar4 - 7U & uVar6) + (uVar6 & 7)) = bVar2;
      FUN_10741b80c(lVar10 + (long)plVar4 * 0x40,lVar5);
    }
    lVar5 = lVar5 + 0x40;
  }
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10741b73c; end: 10741b80b;  */

void FUN_10741b73c(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  FUN_107367a70();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_10741b80c(lVar9 + (long)plVar3 * 0x40,lVar6);
    }
    lVar6 = lVar6 + 0x40;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10741b80c; end: 10741b83b;  */

long FUN_10741b80c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  func_0x00010741b37c(param_2 + 0x38);
  func_0x00010741b9d0();
  return param_2;
}



/* Entry: 10741b83c; end: 10741b84f;  */

long FUN_10741b83c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 10741b850; end: 10741b8cb;  */

long FUN_10741b850(undefined8 param_1)

{
  ulong extraout_x8;
  long *unaff_x19;
  ulong unaff_x26;
  long unaff_x27;
  
  func_0x00010741b8ec();
  do {
    func_0x00010741b9b8();
    for (; unaff_x26 != 0; unaff_x26 = unaff_x26 - 1 & unaff_x26) {
      func_0x00010741b9a0();
      func_0x000107278530();
      if ((int)param_1 != 0) {
        return *unaff_x19 + unaff_x27;
      }
    }
    func_0x00010741b990();
  } while ((extraout_x8 & 1) == 0);
  return 0;
}



/* Entry: 10741b8cc; end: 10741b9ff;  */

void FUN_10741b8cc(void)

{
  return;
}



/* Entry: 10741ba00; end: 10741c543;  */

undefined4 FUN_10741ba00(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x8_15;
  ulong extraout_x8_16;
  ulong uVar16;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  long extraout_x9_13;
  long extraout_x9_14;
  long extraout_x9_15;
  long extraout_x9_16;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long extraout_x10_02;
  long extraout_x10_03;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long extraout_x10_08;
  long extraout_x10_09;
  long extraout_x10_10;
  long extraout_x10_11;
  long extraout_x10_12;
  long extraout_x10_13;
  long extraout_x10_14;
  long extraout_x10_15;
  long extraout_x10_16;
  ulong uVar17;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long extraout_x11_03;
  long extraout_x11_04;
  long extraout_x11_05;
  long extraout_x11_06;
  long extraout_x11_07;
  long extraout_x11_08;
  long extraout_x11_09;
  long extraout_x11_10;
  long extraout_x11_11;
  long extraout_x11_12;
  long extraout_x11_13;
  long extraout_x11_14;
  long extraout_x11_15;
  long extraout_x11_16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  long extraout_x13_06;
  long extraout_x13_07;
  long extraout_x13_08;
  long extraout_x13_09;
  long extraout_x13_10;
  long extraout_x13_11;
  long extraout_x13_12;
  long extraout_x13_13;
  long extraout_x13_14;
  long extraout_x13_15;
  long extraout_x13_16;
  long lVar18;
  undefined8 extraout_x14;
  undefined8 extraout_x14_00;
  undefined8 extraout_x14_01;
  undefined8 extraout_x14_02;
  undefined8 extraout_x14_03;
  undefined8 extraout_x14_04;
  undefined8 extraout_x14_05;
  undefined8 extraout_x14_06;
  undefined8 extraout_x14_07;
  undefined8 extraout_x14_08;
  undefined8 extraout_x14_09;
  undefined8 extraout_x14_10;
  undefined8 extraout_x14_11;
  undefined8 extraout_x14_12;
  undefined8 extraout_x14_13;
  undefined8 extraout_x14_14;
  undefined8 extraout_x14_15;
  undefined8 extraout_x14_16;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  long *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = &uStack_70;
  puVar4 = &uStack_70;
  func_0x00010742b978();
  uStack_70 = 0;
  uStack_68 = 0;
  uVar15 = *(ulong *)(param_1 + 8);
  if (uVar15 == 0) {
    FUN_107420a44(&uStack_70,param_2);
    if (0 < (int)puVar2) {
      uVar15 = (ulong)puVar2 & 0xffffffff;
      *(ulong *)(param_1 + 8) = uVar15;
      goto LAB_10741ba60;
    }
LAB_10741bd0c:
    uVar14 = 3;
  }
  else {
LAB_10741ba60:
    lVar3 = *(long *)(param_1 + 0x20);
    (**(code **)(param_1 + 0x10))(lVar3,uVar15 * 0x20 + 0x20);
    if (lVar3 != 0) {
      uStack_70 = 0;
      uStack_68 = 0xffffffff00000000;
      FUN_107420a44(&uStack_70,param_2);
      if ((int)puVar4 < 1) {
        func_0x00010742b644();
        goto LAB_10741bd0c;
      }
      *(undefined4 *)(lVar3 + ((ulong)puVar4 & 0xffffffff) * 0x20) = 0;
      lVar3 = *(long *)(param_1 + 0x20);
      (**(code **)(param_1 + 0x10))(lVar3,0x1e8);
      if (lVar3 != 0) {
        lVar18 = lVar3;
        _bzero();
        uVar27 = *(undefined8 *)(param_1 + 0x18);
        uVar26 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(lVar3 + 0x1c0) = uVar27;
        *(undefined8 *)(lVar3 + 0x1b8) = uVar26;
        uVar27 = *(undefined8 *)(param_1 + 0x30);
        uVar26 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)(lVar3 + 0x1e0) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(lVar3 + 0x1d8) = uVar27;
        *(undefined8 *)(lVar3 + 0x1d0) = uVar26;
        func_0x00010742b450();
        FUN_107420ef0();
        lVar5 = lVar18;
        func_0x00010742b644();
        iVar25 = (int)lVar18;
        if (iVar25 < 0) {
          FUN_10741c704(lVar3);
          uVar14 = 9;
          if (iVar25 != -3) {
            uVar14 = 4;
          }
          if (iVar25 == -2) {
            return 8;
          }
          return uVar14;
        }
        uVar24 = *(ulong *)(lVar3 + 0x60);
        for (uVar15 = 0; uVar15 != uVar24; uVar15 = uVar15 + 1) {
          lVar19 = *(long *)(lVar3 + 0x58) + uVar15 * 0x60;
          lVar20 = *(long *)(lVar19 + 0x10);
          for (lVar18 = 0; lVar18 != lVar20; lVar18 = lVar18 + 1) {
            lVar5 = *(long *)(lVar19 + 8);
            puVar21 = (ulong *)(lVar5 + lVar18 * 0x90 + 8);
            uVar6 = *puVar21;
            if (uVar6 != 0) {
              if (*(ulong *)(lVar3 + 0x80) < uVar6) goto LAB_10741c40c;
              *puVar21 = (*(long *)(lVar3 + 0x78) + uVar6 * 0x120) - 0x120;
            }
            puVar21 = (ulong *)(lVar5 + lVar18 * 0x90 + 0x10);
            uVar6 = *puVar21;
            if (uVar6 != 0) {
              if (*(ulong *)(lVar3 + 0x70) < uVar6) goto LAB_10741c40c;
              *puVar21 = (*(long *)(lVar3 + 0x68) + uVar6 * 0x4d0) - 0x4d0;
            }
            lVar22 = lVar5 + lVar18 * 0x90;
            lVar9 = 0x10;
            for (lVar7 = *(long *)(lVar22 + 0x20); lVar7 != 0; lVar7 = lVar7 + -1) {
              uVar6 = *(ulong *)(*(long *)(lVar22 + 0x18) + lVar9);
              if ((uVar6 == 0) || (*(ulong *)(lVar3 + 0x80) < uVar6)) goto LAB_10741c40c;
              *(ulong *)(*(long *)(lVar22 + 0x18) + lVar9) =
                   *(long *)(lVar3 + 0x78) + uVar6 * 0x120 + -0x120;
              lVar9 = lVar9 + 0x18;
            }
            lVar7 = lVar5 + lVar18 * 0x90;
            lVar10 = *(long *)(lVar7 + 0x30);
            for (lVar9 = 0; lVar9 != lVar10; lVar9 = lVar9 + 1) {
              plVar1 = (long *)(*(long *)(lVar7 + 0x28) + lVar9 * 0x10);
              lVar12 = 0x10;
              for (lVar11 = plVar1[1]; lVar11 != 0; lVar11 = lVar11 + -1) {
                lVar13 = *plVar1;
                uVar6 = *(ulong *)(lVar13 + lVar12);
                if ((uVar6 == 0) || (*(ulong *)(lVar3 + 0x80) < uVar6)) goto LAB_10741c40c;
                *(ulong *)(lVar13 + lVar12) = *(long *)(lVar3 + 0x78) + uVar6 * 0x120 + -0x120;
                lVar12 = lVar12 + 0x18;
              }
            }
            if (*(int *)(lVar22 + 0x50) != 0) {
              uVar6 = *(ulong *)(lVar22 + 0x58);
              if ((uVar6 == 0) || (*(ulong *)(lVar3 + 0x90) < uVar6)) goto LAB_10741c40c;
              *(ulong *)(lVar22 + 0x58) = *(long *)(lVar3 + 0x88) + uVar6 * 0x98 + -0x98;
              lVar5 = lVar5 + lVar18 * 0x90;
              lVar9 = 0x10;
              for (lVar7 = *(long *)(lVar5 + 0x68); lVar7 != 0; lVar7 = lVar7 + -1) {
                lVar10 = *(long *)(lVar5 + 0x60);
                uVar6 = *(ulong *)(lVar10 + lVar9);
                if ((uVar6 == 0) || (*(ulong *)(lVar3 + 0x80) < uVar6)) goto LAB_10741c40c;
                *(ulong *)(lVar10 + lVar9) = *(long *)(lVar3 + 0x78) + uVar6 * 0x120 + -0x120;
                lVar9 = lVar9 + 0x18;
              }
            }
            lVar5 = 8;
            for (lVar9 = *(long *)(lVar22 + 0x78); lVar9 != 0; lVar9 = lVar9 + -1) {
              uVar6 = *(ulong *)(*(long *)(lVar22 + 0x70) + lVar5);
              if ((uVar6 == 0) || (*(ulong *)(lVar3 + 0x70) < uVar6)) goto LAB_10741c40c;
              *(ulong *)(*(long *)(lVar22 + 0x70) + lVar5) =
                   *(long *)(lVar3 + 0x68) + uVar6 * 0x4d0 + -0x4d0;
              lVar5 = lVar5 + 0x28;
            }
            lVar5 = 0;
          }
        }
        lVar18 = 0;
        uVar6 = *(ulong *)(lVar3 + 0x80);
        for (uVar15 = uVar6; uVar15 != 0; uVar15 = uVar15 - 1) {
          lVar9 = *(long *)(lVar3 + 0x78);
          lVar19 = lVar9 + lVar18;
          uVar16 = *(ulong *)(lVar19 + 0x30);
          lVar20 = 0;
          if (uVar16 != 0) {
            if (*(ulong *)(lVar3 + 0x90) < uVar16) goto LAB_10741c40c;
            lVar20 = *(long *)(lVar3 + 0x88) + uVar16 * 0x98 + -0x98;
            *(long *)(lVar19 + 0x30) = lVar20;
          }
          if (*(int *)(lVar19 + 0xc0) != 0) {
            uVar16 = *(ulong *)(lVar9 + lVar18 + 0xd0);
            if ((uVar16 == 0) || (uVar17 = *(ulong *)(lVar3 + 0x90), uVar17 < uVar16))
            goto LAB_10741c40c;
            lVar19 = *(long *)(lVar3 + 0x88);
            *(ulong *)(lVar9 + lVar18 + 0xd0) = lVar19 + uVar16 * 0x98 + -0x98;
            uVar16 = *(ulong *)(lVar9 + lVar18 + 0xe8);
            if (uVar16 == 0 || uVar17 < uVar16) goto LAB_10741c40c;
            *(ulong *)(lVar9 + lVar18 + 0xe8) = lVar19 + uVar16 * 0x98 + -0x98;
          }
          if (lVar20 == 0) {
            lVar19 = *(long *)(lVar9 + lVar18 + 0x28);
          }
          else {
            lVar19 = *(long *)(lVar20 + 0x20);
            *(long *)(lVar9 + lVar18 + 0x28) = lVar19;
          }
          if (lVar19 == 0) {
            func_0x00010742bcf8();
            *(long *)(lVar9 + lVar18 + 0x28) = lVar5;
          }
          lVar18 = lVar18 + 0x120;
        }
        lVar5 = 0;
        uVar16 = *(ulong *)(lVar3 + 0xc0);
        for (uVar15 = uVar16; uVar15 != 0; uVar15 = uVar15 - 1) {
          lVar19 = *(long *)(lVar3 + 0xb8);
          lVar18 = lVar19 + lVar5;
          uVar17 = *(ulong *)(lVar18 + 8);
          if (uVar17 != 0) {
            if (*(ulong *)(lVar3 + 0xb0) < uVar17) goto LAB_10741c40c;
            *(ulong *)(lVar18 + 8) = *(long *)(lVar3 + 0xa8) + uVar17 * 0x48 + -0x48;
          }
          uVar17 = *(ulong *)(lVar18 + 0x20);
          if (uVar17 != 0) {
            if (*(ulong *)(lVar3 + 0xb0) < uVar17) goto LAB_10741c40c;
            *(ulong *)(lVar18 + 0x20) = *(long *)(lVar3 + 0xa8) + uVar17 * 0x48 + -0x48;
          }
          lVar19 = lVar19 + lVar5;
          uVar17 = *(ulong *)(lVar19 + 0x10);
          if (uVar17 != 0) {
            if (*(ulong *)(lVar3 + 0xd0) < uVar17) goto LAB_10741c40c;
            *(ulong *)(lVar19 + 0x10) = *(long *)(lVar3 + 200) + uVar17 * 0x40 + -0x40;
          }
          lVar5 = lVar5 + 0x50;
        }
        lVar5 = 0x10;
        for (lVar18 = *(long *)(lVar3 + 0xb0); lVar18 != 0; lVar18 = lVar18 + -1) {
          uVar15 = *(ulong *)(*(long *)(lVar3 + 0xa8) + lVar5);
          if (uVar15 != 0) {
            if (*(ulong *)(lVar3 + 0x90) < uVar15) goto LAB_10741c40c;
            *(ulong *)(*(long *)(lVar3 + 0xa8) + lVar5) =
                 *(long *)(lVar3 + 0x88) + uVar15 * 0x98 + -0x98;
          }
          lVar5 = lVar5 + 0x48;
        }
        lVar19 = 0x50;
        lVar5 = 0;
        for (lVar18 = *(long *)(lVar3 + 0x70); lVar18 != 0; lVar18 = lVar18 + -1) {
          lVar9 = *(long *)(lVar3 + 0x68);
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x3f8) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x3f8)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13 + 0x3f8) = extraout_x14;
            uVar16 = extraout_x8;
            lVar5 = extraout_x9;
            lVar18 = extraout_x10;
            lVar19 = extraout_x11;
            lVar9 = extraout_x12;
            lVar20 = extraout_x13;
          }
          if (*(ulong *)(lVar20 + 0x458) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x458)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_00 + 0x458) = extraout_x14_00;
            uVar16 = extraout_x8_00;
            lVar5 = extraout_x9_00;
            lVar18 = extraout_x10_00;
            lVar19 = extraout_x11_00;
            lVar9 = extraout_x12_00;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x428) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x428)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_01 + 0x428) = extraout_x14_01;
            uVar16 = extraout_x8_01;
            lVar5 = extraout_x9_01;
            lVar18 = extraout_x10_01;
            lVar19 = extraout_x11_01;
            lVar9 = extraout_x12_01;
            lVar20 = extraout_x13_01;
          }
          if (*(ulong *)(lVar20 + 0x38) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x38)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_02 + 0x38) = extraout_x14_02;
            uVar16 = extraout_x8_02;
            lVar5 = extraout_x9_02;
            lVar18 = extraout_x10_02;
            lVar19 = extraout_x11_02;
            lVar9 = extraout_x12_02;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x68) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x68)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_03 + 0x68) = extraout_x14_03;
            uVar16 = extraout_x8_03;
            lVar5 = extraout_x9_03;
            lVar18 = extraout_x10_03;
            lVar19 = extraout_x11_03;
            lVar9 = extraout_x12_03;
            lVar20 = extraout_x13_03;
          }
          if (*(ulong *)(lVar20 + 0xb0) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0xb0)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_04 + 0xb0) = extraout_x14_04;
            uVar16 = extraout_x8_04;
            lVar5 = extraout_x9_04;
            lVar18 = extraout_x10_04;
            lVar19 = extraout_x11_04;
            lVar9 = extraout_x12_04;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0xe0) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0xe0)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_05 + 0xe0) = extraout_x14_05;
            uVar16 = extraout_x8_05;
            lVar5 = extraout_x9_05;
            lVar18 = extraout_x10_05;
            lVar19 = extraout_x11_05;
            lVar9 = extraout_x12_05;
            lVar20 = extraout_x13_05;
          }
          if (*(ulong *)(lVar20 + 0x130) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x130)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_06 + 0x130) = extraout_x14_06;
            uVar16 = extraout_x8_06;
            lVar5 = extraout_x9_06;
            lVar18 = extraout_x10_06;
            lVar19 = extraout_x11_06;
            lVar9 = extraout_x12_06;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x160) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x160)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_07 + 0x160) = extraout_x14_07;
            uVar16 = extraout_x8_07;
            lVar5 = extraout_x9_07;
            lVar18 = extraout_x10_07;
            lVar19 = extraout_x11_07;
            lVar9 = extraout_x12_07;
            lVar20 = extraout_x13_07;
          }
          if (*(ulong *)(lVar20 + 400) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 400)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_08 + 400) = extraout_x14_08;
            uVar16 = extraout_x8_08;
            lVar5 = extraout_x9_08;
            lVar18 = extraout_x10_08;
            lVar19 = extraout_x11_08;
            lVar9 = extraout_x12_08;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x1d0) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x1d0)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_09 + 0x1d0) = extraout_x14_09;
            uVar16 = extraout_x8_09;
            lVar5 = extraout_x9_09;
            lVar18 = extraout_x10_09;
            lVar19 = extraout_x11_09;
            lVar9 = extraout_x12_09;
            lVar20 = extraout_x13_09;
          }
          if (*(ulong *)(lVar20 + 0x200) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x200)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_10 + 0x200) = extraout_x14_10;
            uVar16 = extraout_x8_10;
            lVar5 = extraout_x9_10;
            lVar18 = extraout_x10_10;
            lVar19 = extraout_x11_10;
            lVar9 = extraout_x12_10;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x2b8) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x2b8)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_11 + 0x2b8) = extraout_x14_11;
            uVar16 = extraout_x8_11;
            lVar5 = extraout_x9_11;
            lVar18 = extraout_x10_11;
            lVar19 = extraout_x11_11;
            lVar9 = extraout_x12_11;
            lVar20 = extraout_x13_11;
          }
          if (*(ulong *)(lVar20 + 0x2f0) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x2f0)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_12 + 0x2f0) = extraout_x14_12;
            uVar16 = extraout_x8_12;
            lVar5 = extraout_x9_12;
            lVar18 = extraout_x10_12;
            lVar19 = extraout_x11_12;
            lVar9 = extraout_x12_12;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x240) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x240)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_13 + 0x240) = extraout_x14_13;
            uVar16 = extraout_x8_13;
            lVar5 = extraout_x9_13;
            lVar18 = extraout_x10_13;
            lVar19 = extraout_x11_13;
            lVar9 = extraout_x12_13;
            lVar20 = extraout_x13_13;
          }
          if (*(ulong *)(lVar20 + 0x280) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x280)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_14 + 0x280) = extraout_x14_14;
            uVar16 = extraout_x8_14;
            lVar5 = extraout_x9_14;
            lVar18 = extraout_x10_14;
            lVar19 = extraout_x11_14;
            lVar9 = extraout_x12_14;
          }
          lVar20 = lVar9 + lVar5;
          if (*(ulong *)(lVar20 + 0x348) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x348)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_15 + 0x348) = extraout_x14_15;
            uVar16 = extraout_x8_15;
            lVar5 = extraout_x9_15;
            lVar18 = extraout_x10_15;
            lVar19 = extraout_x11_15;
            lVar9 = extraout_x12_15;
            lVar20 = extraout_x13_15;
          }
          if (*(ulong *)(lVar20 + 0x388) != 0) {
            if (uVar16 < *(ulong *)(lVar20 + 0x388)) goto LAB_10741c40c;
            func_0x00010742aee8();
            *(undefined8 *)(extraout_x13_16 + 0x388) = extraout_x14_16;
            uVar16 = extraout_x8_16;
            lVar5 = extraout_x9_16;
            lVar18 = extraout_x10_16;
            lVar19 = extraout_x11_16;
            lVar9 = extraout_x12_16;
          }
          uVar15 = *(ulong *)(lVar9 + lVar5 + 0x3c0);
          if (uVar15 != 0) {
            if (uVar16 < uVar15) goto LAB_10741c40c;
            *(ulong *)(lVar9 + lVar5 + 0x3c0) = *(long *)(lVar3 + 0xb8) + uVar15 * lVar19 + -0x50;
          }
          lVar5 = lVar5 + 0x4d0;
        }
        lVar5 = 0;
        for (lVar18 = *(long *)(lVar3 + 0x90); lVar18 != 0; lVar18 = lVar18 + -1) {
          lVar20 = *(long *)(lVar3 + 0x88);
          lVar19 = lVar20 + lVar5;
          uVar15 = *(ulong *)(lVar19 + 8);
          if ((uVar15 == 0) || (uVar16 = *(ulong *)(lVar3 + 0xa0), uVar16 < uVar15))
          goto LAB_10741c40c;
          lVar9 = *(long *)(lVar3 + 0x98);
          *(ulong *)(lVar19 + 8) = lVar9 + uVar15 * 0x50 + -0x50;
          lVar20 = lVar20 + lVar5;
          if (*(int *)(lVar20 + 0x38) != 0) {
            uVar15 = *(ulong *)(lVar20 + 0x40);
            if (uVar15 == 0 || uVar16 < uVar15) goto LAB_10741c40c;
            *(ulong *)(lVar20 + 0x40) = lVar9 + uVar15 * 0x50 + -0x50;
          }
          lVar5 = lVar5 + 0x98;
        }
        uVar16 = *(ulong *)(lVar3 + 0xe0);
        for (uVar15 = 0; uVar15 != uVar16; uVar15 = uVar15 + 1) {
          lVar18 = *(long *)(lVar3 + 0xd8);
          lVar19 = lVar18 + uVar15 * 0x50;
          lVar20 = *(long *)(lVar19 + 0x10);
          for (lVar5 = 0; lVar20 != lVar5; lVar5 = lVar5 + 1) {
            lVar9 = *(long *)(lVar19 + 8);
            uVar17 = *(ulong *)(lVar9 + lVar5 * 8);
            if ((uVar17 == 0) || (*(ulong *)(lVar3 + 0x110) < uVar17)) goto LAB_10741c40c;
            *(ulong *)(lVar9 + lVar5 * 8) = *(long *)(lVar3 + 0x108) + uVar17 * 0x108 + -0x108;
          }
          puVar21 = (ulong *)(lVar18 + uVar15 * 0x50 + 0x18);
          uVar17 = *puVar21;
          if (uVar17 != 0) {
            if (*(ulong *)(lVar3 + 0x110) < uVar17) goto LAB_10741c40c;
            *puVar21 = (*(long *)(lVar3 + 0x108) + uVar17 * 0x108) - 0x108;
          }
          puVar21 = (ulong *)(lVar18 + uVar15 * 0x50 + 0x20);
          uVar17 = *puVar21;
          if (uVar17 != 0) {
            if (uVar6 < uVar17) goto LAB_10741c40c;
            *puVar21 = (*(long *)(lVar3 + 0x78) + uVar17 * 0x120) - 0x120;
          }
        }
        uVar17 = *(ulong *)(lVar3 + 0x110);
        for (uVar15 = 0; uVar15 != uVar17; uVar15 = uVar15 + 1) {
          lVar5 = *(long *)(lVar3 + 0x108);
          for (uVar23 = 0; lVar18 = lVar5 + uVar15 * 0x108, uVar23 < *(ulong *)(lVar18 + 0x18);
              uVar23 = uVar23 + 1) {
            lVar18 = *(long *)(lVar18 + 0x10);
            uVar8 = *(ulong *)(lVar18 + uVar23 * 8);
            if (uVar8 == 0 || uVar17 < uVar8) goto LAB_10741c40c;
            *(ulong *)(lVar18 + uVar23 * 8) = lVar5 + uVar8 * 0x108 + -0x108;
            lVar5 = *(long *)(lVar3 + 0x108);
            lVar18 = lVar5 + uVar15 * 0x108;
            lVar19 = *(long *)(*(long *)(lVar18 + 0x10) + uVar23 * 8);
            if (*(long *)(lVar19 + 8) != 0) goto LAB_10741c40c;
            *(long *)(lVar19 + 8) = lVar18;
          }
          puVar21 = (ulong *)(lVar5 + uVar15 * 0x108 + 0x28);
          uVar23 = *puVar21;
          if (uVar23 != 0) {
            if (uVar24 < uVar23) goto LAB_10741c40c;
            *puVar21 = (*(long *)(lVar3 + 0x58) + uVar23 * 0x60) - 0x60;
          }
          puVar21 = (ulong *)(lVar5 + uVar15 * 0x108 + 0x20);
          uVar23 = *puVar21;
          if (uVar23 != 0) {
            if (uVar16 < uVar23) goto LAB_10741c40c;
            *puVar21 = (*(long *)(lVar3 + 0xd8) + uVar23 * 0x50) - 0x50;
          }
          puVar21 = (ulong *)(lVar5 + uVar15 * 0x108 + 0x30);
          uVar23 = *puVar21;
          if (uVar23 != 0) {
            if (*(ulong *)(lVar3 + 0xf0) < uVar23) goto LAB_10741c40c;
            *puVar21 = (*(long *)(lVar3 + 0xe8) + uVar23 * 0x68) - 0x68;
          }
          puVar21 = (ulong *)(lVar5 + uVar15 * 0x108 + 0x38);
          uVar23 = *puVar21;
          if (uVar23 != 0) {
            if (*(ulong *)(lVar3 + 0x100) < uVar23) goto LAB_10741c40c;
            *puVar21 = (*(long *)(lVar3 + 0xf8) + uVar23 * 0x40) - 0x40;
          }
          if (*(int *)(lVar5 + uVar15 * 0x108 + 0xe0) != 0) {
            lVar5 = lVar5 + uVar15 * 0x108;
            lVar18 = 0x10;
            for (lVar19 = *(long *)(lVar5 + 0xf0); lVar19 != 0; lVar19 = lVar19 + -1) {
              lVar20 = *(long *)(lVar5 + 0xe8);
              uVar23 = *(ulong *)(lVar20 + lVar18);
              if (uVar23 == 0 || uVar6 < uVar23) goto LAB_10741c40c;
              *(ulong *)(lVar20 + lVar18) = *(long *)(lVar3 + 0x78) + uVar23 * 0x120 + -0x120;
              lVar18 = lVar18 + 0x18;
            }
          }
        }
        uVar24 = *(ulong *)(lVar3 + 0x120);
        for (uVar15 = 0; uVar15 != uVar24; uVar15 = uVar15 + 1) {
          lVar5 = 0;
          lVar18 = *(long *)(lVar3 + 0x118) + uVar15 * 0x40;
          lVar19 = *(long *)(lVar18 + 0x10);
          while (lVar19 != lVar5) {
            lVar20 = *(long *)(lVar18 + 8);
            uVar16 = *(ulong *)(lVar20 + lVar5 * 8);
            if (uVar16 == 0 || uVar17 < uVar16) goto LAB_10741c40c;
            lVar9 = *(long *)(lVar3 + 0x108) + uVar16 * 0x108;
            *(long *)(lVar20 + lVar5 * 8) = lVar9 + -0x108;
            lVar5 = lVar5 + 1;
            if (*(long *)(lVar9 + -0x100) != 0) goto LAB_10741c40c;
          }
        }
        uVar15 = *(ulong *)(lVar3 + 0x128);
        if (uVar15 != 0) {
          if (uVar24 < uVar15) {
LAB_10741c40c:
            FUN_10741c704(lVar3);
            return 4;
          }
          *(ulong *)(lVar3 + 0x128) = *(long *)(lVar3 + 0x118) + uVar15 * 0x40 + -0x40;
        }
        lVar5 = 0;
        lVar18 = *(long *)(lVar3 + 0x138);
        do {
          if (lVar5 == lVar18) {
            *(undefined8 *)(lVar3 + 0x198) = param_2;
            *(undefined8 *)(lVar3 + 0x1a0) = unaff_x20;
            *unaff_x19 = lVar3;
            return 0;
          }
          lVar19 = 0;
          lVar20 = *(long *)(lVar3 + 0x130) + lVar5 * 0x50;
          uVar24 = *(ulong *)(lVar20 + 0x10);
          for (uVar15 = uVar24; uVar15 != 0; uVar15 = uVar15 - 1) {
            uVar16 = *(ulong *)(*(long *)(lVar20 + 8) + lVar19);
            if (uVar16 == 0 || uVar6 < uVar16) goto LAB_10741c40c;
            lVar9 = *(long *)(lVar3 + 0x78);
            plVar1 = (long *)(*(long *)(lVar20 + 8) + lVar19);
            *plVar1 = lVar9 + uVar16 * 0x120 + -0x120;
            uVar16 = plVar1[1];
            if (uVar16 == 0 || uVar6 < uVar16) goto LAB_10741c40c;
            plVar1[1] = lVar9 + uVar16 * 0x120 + -0x120;
            lVar19 = lVar19 + 0x40;
          }
          lVar19 = 0;
          for (lVar9 = *(long *)(lVar20 + 0x20); lVar9 != 0; lVar9 = lVar9 + -1) {
            uVar15 = *(ulong *)(*(long *)(lVar20 + 0x18) + lVar19);
            if (uVar15 == 0 || uVar24 < uVar15) goto LAB_10741c40c;
            plVar1 = (long *)(*(long *)(lVar20 + 0x18) + lVar19);
            *plVar1 = *(long *)(lVar20 + 8) + uVar15 * 0x40 + -0x40;
            uVar15 = plVar1[1];
            if (uVar15 != 0) {
              if (uVar17 < uVar15) goto LAB_10741c40c;
              plVar1[1] = *(long *)(lVar3 + 0x108) + uVar15 * 0x108 + -0x108;
            }
            lVar19 = lVar19 + 0x40;
          }
          lVar5 = lVar5 + 1;
        } while( true );
      }
      func_0x00010742b644();
    }
    uVar14 = 8;
  }
  return uVar14;
}



/* Entry: 10741c544; end: 10741c55f;  */

void FUN_10741c544(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)0x10741b9f8;
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010741c55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 10741c560; end: 10741c66f;  */

undefined8 FUN_10741c560(long param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long *unaff_x19;
  char *unaff_x20;
  
  func_0x00010742b978();
  pcVar1 = (code *)0x10741b9f0;
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    pcVar1 = *(code **)(param_1 + 0x10);
  }
  pcVar2 = (code *)0x10741b9f8;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    pcVar2 = *(code **)(param_1 + 0x18);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  (*pcVar1)();
  if (lVar4 == 0) {
    uVar5 = 8;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    for (lVar8 = 0; lVar8 != param_2; lVar8 = lVar8 + 1) {
      for (; uVar7 < 8; uVar7 = uVar7 + 6) {
        cVar3 = *unaff_x20;
        uVar9 = (int)cVar3 - 0x41;
        if (0x19 < uVar9) {
          iVar10 = (int)cVar3;
          if ((int)cVar3 - 0x61U < 0x1a) {
            uVar9 = iVar10 - 0x47;
          }
          else if (iVar10 - 0x30U < 10) {
            uVar9 = iVar10 + 4;
          }
          else if (iVar10 == 0x2b) {
            uVar9 = 0x3e;
          }
          else {
            if (cVar3 != '/') {
              (*pcVar2)(*(undefined8 *)(param_1 + 0x20));
              return 7;
            }
            uVar9 = 0x3f;
          }
        }
        uVar6 = uVar9 | uVar6 << 6;
        unaff_x20 = unaff_x20 + 1;
      }
      uVar7 = uVar7 - 8;
      *(char *)(lVar4 + lVar8) = (char)(uVar6 >> (ulong)(uVar7 & 0x1f));
    }
    uVar5 = 0;
    *unaff_x19 = lVar4;
  }
  return uVar5;
}



/* Entry: 10741c670; end: 10741c703;  */

long FUN_10741c670(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if (param_2 < 7) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & 6) != 0) {
      if ((int)param_1 == 5) {
        return 8;
      }
      lVar2 = 1;
      goto LAB_10741c6d8;
    }
    if ((uVar1 & 0x18) != 0) {
      lVar2 = 2;
      goto LAB_10741c6d8;
    }
    if ((1 << (ulong)(param_2 & 0x1f) & 0x60U) != 0) {
      lVar2 = 4;
      goto LAB_10741c6d8;
    }
  }
  lVar2 = 0;
LAB_10741c6d8:
  if ((int)param_1 == 6 && lVar2 - 1U < 2) {
    param_1 = lVar2 * 0xc;
  }
  else {
    FUN_10741d294();
    param_1 = param_1 * lVar2;
  }
  return param_1;
}



/* Entry: 10741c704; end: 10741cfef;  */

void FUN_10741c704(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x9;
  code *extraout_x9_00;
  long lVar4;
  code *extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  code *extraout_x9_05;
  code *extraout_x9_06;
  long unaff_x21;
  ulong uVar5;
  ulong unaff_x22;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    return;
  }
  func_0x00010742bef8();
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x10));
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x18));
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x20));
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x28));
  func_0x00010742b190();
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x40));
  func_0x00010742b438();
  while( true ) {
    if (*(ulong *)(param_1 + 0x80) <= unaff_x22) break;
    func_0x00010742b2c8();
    func_0x00010742b190();
    func_0x00010742b42c(*(undefined8 *)(param_1 + 0x78));
    (*extraout_x9)();
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x120;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x78));
  func_0x00010742b438();
  for (; unaff_x22 < *(ulong *)(param_1 + 0x90); unaff_x22 = unaff_x22 + 1) {
    (**(code **)(param_1 + 0x1c0))
              (*(undefined8 *)(param_1 + 0x1c8),
               *(undefined8 *)(*(long *)(param_1 + 0x88) + unaff_x21));
    (**(code **)(param_1 + 0x1c0))
              (*(undefined8 *)(param_1 + 0x1c8),
               *(undefined8 *)(*(long *)(param_1 + 0x88) + unaff_x21 + 0x30));
    func_0x00010742b190();
    func_0x00010742b42c(*(undefined8 *)(param_1 + 0x88));
    (*extraout_x9_00)();
    unaff_x21 = unaff_x21 + 0x98;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x88));
  func_0x00010742b438();
  while( true ) {
    if (*(ulong *)(param_1 + 0xa0) <= unaff_x22) break;
    func_0x00010742b2c8();
    iVar2 = *(int *)(*(long *)(param_1 + 0x98) + unaff_x21 + 0x20);
    if (iVar2 == 2) {
      func_0x00010742bba4(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
    }
    else if (iVar2 == 1) {
      func_0x00010742bbac();
    }
    (**(code **)(param_1 + 0x1c0))
              (*(undefined8 *)(param_1 + 0x1c8),
               *(undefined8 *)(*(long *)(param_1 + 0x98) + unaff_x21 + 0x10));
    func_0x00010742b190();
    func_0x00010742afd8(*(undefined8 *)(param_1 + 0x98));
    unaff_x22 = unaff_x22 + 1;
    unaff_x21 = unaff_x21 + 0x50;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x98));
  uVar5 = 0;
  uVar6 = 0x60;
  while( true ) {
    if (*(ulong *)(param_1 + 0x60) <= uVar5) break;
    func_0x00010742bb98();
    uVar7 = 0;
    while( true ) {
      lVar3 = *(long *)(param_1 + 0x58);
      lVar4 = lVar3 + uVar5 * 0x60;
      if (*(ulong *)(lVar4 + 0x10) <= uVar7) break;
      lVar4 = 0;
      uVar8 = 0;
      while( true ) {
        lVar3 = *(long *)(lVar3 + uVar5 * 0x60 + 8) + uVar7 * 0x90;
        if (*(ulong *)(lVar3 + 0x20) <= uVar8) break;
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(*(long *)(lVar3 + 0x18) + lVar4)
                  );
        uVar8 = uVar8 + 1;
        lVar3 = *(long *)(param_1 + 0x58);
        lVar4 = lVar4 + 0x18;
      }
      (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
      uVar8 = 0;
      while( true ) {
        func_0x00010742b328();
        lVar3 = extraout_x8 + uVar7 * 0x90;
        if (*(ulong *)(lVar3 + 0x30) <= uVar8) break;
        lVar3 = 0;
        uVar9 = 0;
        lVar4 = extraout_x8;
        while( true ) {
          plVar1 = (long *)(*(long *)(lVar4 + uVar7 * 0x90 + 0x28) + uVar8 * 0x10);
          if ((ulong)plVar1[1] <= uVar9) break;
          (**(code **)(param_1 + 0x1c0))
                    (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(*plVar1 + lVar3));
          uVar9 = uVar9 + 1;
          func_0x00010742b328();
          lVar3 = lVar3 + 0x18;
          lVar4 = extraout_x8_00;
        }
        (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
        uVar8 = uVar8 + 1;
      }
      (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(lVar3 + 0x28))
      ;
      func_0x00010742b328();
      if (*(int *)(extraout_x8_01 + uVar7 * 0x90 + 0x50) != 0) {
        lVar3 = 0;
        uVar8 = 0;
        lVar4 = extraout_x8_01;
        while( true ) {
          lVar4 = lVar4 + uVar7 * 0x90;
          if (*(ulong *)(lVar4 + 0x68) <= uVar8) break;
          (**(code **)(param_1 + 0x1c0))
                    (*(undefined8 *)(param_1 + 0x1c8),
                     *(undefined8 *)(*(long *)(lVar4 + 0x60) + lVar3));
          uVar8 = uVar8 + 1;
          func_0x00010742b328();
          lVar3 = lVar3 + 0x18;
          lVar4 = extraout_x8_02;
        }
        (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
      }
      uVar8 = 0;
      lVar3 = 0x20;
      while( true ) {
        func_0x00010742b328();
        lVar4 = extraout_x8_03 + uVar7 * 0x90;
        if (*(ulong *)(lVar4 + 0x78) <= uVar8) break;
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(*(long *)(lVar4 + 0x70) + lVar3)
                  );
        uVar8 = uVar8 + 1;
        lVar3 = lVar3 + 0x28;
      }
      (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(lVar4 + 0x70))
      ;
      func_0x00010742b190();
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),
                 *(undefined8 *)
                  (*(long *)(*(long *)(param_1 + 0x58) + uVar5 * 0x60 + 8) + uVar7 * 0x90 + 0x48));
      uVar7 = uVar7 + 1;
    }
    (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(lVar4 + 8));
    func_0x00010742bba4(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
    for (uVar7 = 0; lVar3 = *(long *)(param_1 + 0x58) + uVar5 * 0x60,
        uVar7 < *(ulong *)(lVar3 + 0x30); uVar7 = uVar7 + 1) {
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),
                 *(undefined8 *)(*(long *)(lVar3 + 0x28) + uVar7 * 8));
    }
    func_0x00010742b190();
    (**(code **)(param_1 + 0x1c0))
              (*(undefined8 *)(param_1 + 0x1c8),
               *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar5 * 0x60 + 0x48));
    (**(code **)(param_1 + 0x1c0))
              (*(undefined8 *)(param_1 + 0x1c8),
               *(undefined8 *)(*(long *)(param_1 + 0x58) + uVar5 * 0x60 + 0x28));
    uVar5 = uVar5 + 1;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x58));
  func_0x00010742b438();
  while( true ) {
    if (*(ulong *)(param_1 + 0x70) <= uVar6) break;
    func_0x00010742b2c8();
    func_0x00010742b190();
    func_0x00010742b42c(*(undefined8 *)(param_1 + 0x68));
    (*extraout_x9_01)();
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 0x4d0;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x68));
  func_0x00010742b438();
  while( true ) {
    if (*(ulong *)(param_1 + 0xb0) <= uVar6) break;
    func_0x00010742b2c8();
    func_0x00010742b4ec(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
    func_0x00010742bba4(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
    func_0x00010742b190();
    func_0x00010742b42c(*(undefined8 *)(param_1 + 0xa8));
    (*extraout_x9_02)();
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 0x48;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0xa8));
  func_0x00010742b438();
  while( true ) {
    if (*(ulong *)(param_1 + 0xc0) <= uVar6) break;
    func_0x00010742b2c8();
    func_0x00010742b190();
    func_0x00010742afd8(*(undefined8 *)(param_1 + 0xb8));
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 0x50;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0xb8));
  func_0x00010742b438();
  while( true ) {
    if (*(ulong *)(param_1 + 0xd0) <= uVar6) break;
    func_0x00010742b2c8();
    func_0x00010742b190();
    func_0x00010742b42c(*(undefined8 *)(param_1 + 200));
    (*extraout_x9_03)();
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 0x40;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 200));
  func_0x00010742b438();
  while( true ) {
    if (*(ulong *)(param_1 + 0xe0) <= uVar6) break;
    func_0x00010742b2c8();
    func_0x00010742b4ec(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
    func_0x00010742b190();
    func_0x00010742afd8(*(undefined8 *)(param_1 + 0xd8));
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 0x50;
  }
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0xd8));
  func_0x00010742b438();
  do {
    if (*(ulong *)(param_1 + 0xf0) <= uVar6) {
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0xe8));
      func_0x00010742b438();
      while( true ) {
        if (*(ulong *)(param_1 + 0x100) <= uVar6) break;
        func_0x00010742b2c8();
        func_0x00010742afd8(*(undefined8 *)(param_1 + 0xf8));
        uVar6 = uVar6 + 1;
      }
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0xf8));
      uVar5 = 0;
      uVar6 = 0x108;
      while( true ) {
        if (*(ulong *)(param_1 + 0x110) <= uVar5) break;
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),
                   *(undefined8 *)(*(long *)(param_1 + 0x108) + uVar5 * 0x108));
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),
                   *(undefined8 *)(*(long *)(param_1 + 0x108) + uVar5 * 0x108 + 0x10));
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),
                   *(undefined8 *)(*(long *)(param_1 + 0x108) + uVar5 * 0x108 + 0x40));
        lVar3 = *(long *)(param_1 + 0x108);
        if (*(int *)(lVar3 + uVar5 * 0x108 + 0xe0) != 0) {
          lVar4 = 0;
          uVar7 = 0;
          while( true ) {
            lVar3 = lVar3 + uVar5 * 0x108;
            if (*(ulong *)(lVar3 + 0xf0) <= uVar7) break;
            (**(code **)(param_1 + 0x1c0))
                      (*(undefined8 *)(param_1 + 0x1c8),
                       *(undefined8 *)(*(long *)(lVar3 + 0xe8) + lVar4));
            uVar7 = uVar7 + 1;
            lVar3 = *(long *)(param_1 + 0x108);
            lVar4 = lVar4 + 0x18;
          }
          (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
        }
        func_0x00010742b190();
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),
                   *(undefined8 *)(*(long *)(param_1 + 0x108) + uVar5 * 0x108 + 0xd8));
        uVar5 = uVar5 + 1;
      }
      (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
      func_0x00010742b438();
      while( true ) {
        if (*(ulong *)(param_1 + 0x120) <= uVar6) break;
        func_0x00010742b2c8();
        func_0x00010742b4ec(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
        func_0x00010742b190();
        func_0x00010742b42c(*(undefined8 *)(param_1 + 0x118));
        (*extraout_x9_05)();
        uVar6 = uVar6 + 1;
      }
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x118));
      uVar5 = 0;
      uVar6 = 0x50;
      while( true ) {
        if (*(ulong *)(param_1 + 0x138) <= uVar5) break;
        func_0x00010742bb98();
        for (uVar7 = 0; func_0x00010742bec0(), uVar7 < *(ulong *)(extraout_x8_04 + 0x10);
            uVar7 = uVar7 + 1) {
          func_0x00010742b190();
          func_0x00010742bec0();
          func_0x00010742b7e0(*(undefined8 *)(extraout_x8_05 + 8));
        }
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(extraout_x8_04 + 8));
        for (uVar7 = 0; func_0x00010742bec0(), uVar7 < *(ulong *)(extraout_x8_06 + 0x20);
            uVar7 = uVar7 + 1) {
          func_0x00010742b190();
          func_0x00010742bec0();
          func_0x00010742b7e0(*(undefined8 *)(extraout_x8_07 + 0x18));
        }
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(extraout_x8_06 + 0x18));
        func_0x00010742b190();
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),
                   *(undefined8 *)(*(long *)(param_1 + 0x130) + uVar5 * 0x50 + 0x38));
        uVar5 = uVar5 + 1;
      }
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x130));
      func_0x00010742b438();
      while( true ) {
        if (*(ulong *)(param_1 + 0x148) <= uVar6) break;
        func_0x00010742b2c8();
        func_0x00010742b42c(*(undefined8 *)(param_1 + 0x140));
        (*extraout_x9_06)();
        uVar6 = uVar6 + 1;
      }
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x140));
      func_0x00010742b190();
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x160));
      uVar5 = 0;
      while( true ) {
        if (*(ulong *)(param_1 + 0x180) <= uVar5) break;
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),
                   *(undefined8 *)(*(long *)(param_1 + 0x178) + uVar5 * 8));
        uVar5 = uVar5 + 1;
      }
      (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
      uVar5 = 0;
      while( true ) {
        if (*(ulong *)(param_1 + 400) <= uVar5) break;
        (**(code **)(param_1 + 0x1c0))
                  (*(undefined8 *)(param_1 + 0x1c8),
                   *(undefined8 *)(*(long *)(param_1 + 0x188) + uVar5 * 8));
        uVar5 = uVar5 + 1;
      }
      (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8));
      func_0x00010742bbac();
                    /* WARNING: Could not recover jumptable at 0x00010741cfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),param_1);
      return;
    }
    func_0x00010742b2c8();
    iVar2 = *(int *)(*(long *)(param_1 + 0xe8) + uVar5 + 8);
    if (iVar2 == 1) {
      lVar3 = 0x38;
LAB_10741ccb4:
      (**(code **)(param_1 + 0x1c0))
                (*(undefined8 *)(param_1 + 0x1c8),
                 *(undefined8 *)(*(long *)(param_1 + 0xe8) + lVar3 + uVar5));
    }
    else if (iVar2 == 2) {
      lVar3 = 0x30;
      goto LAB_10741ccb4;
    }
    func_0x00010742b190();
    func_0x00010742b42c(*(undefined8 *)(param_1 + 0xe8));
    (*extraout_x9_04)();
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 + 0x68;
  } while( true );
}



/* Entry: 10741cff0; end: 10741d047;  */

void FUN_10741cff0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 8);
  while( true ) {
    if (param_3 == 0) break;
    (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),puVar1[-1]);
    (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),*puVar1);
    param_3 = param_3 + -1;
    puVar1 = puVar1 + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010741d044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),param_2);
  return;
}



/* Entry: 10741d048; end: 10741d293;  */

undefined8
FUN_10741d048(undefined4 param_1,long param_2,long param_3,undefined4 *param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (*(int *)(param_2 + 0xc0) != 0) {
    return 0;
  }
  func_0x00010742bef8();
  lVar5 = *(long *)(param_2 + 0x30);
  if (lVar5 == 0) {
    _bzero(param_4,param_5 << 2);
LAB_10741d274:
    uVar4 = 1;
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    if (lVar9 == 0) {
      lVar9 = *(long *)(*(long *)(lVar5 + 8) + 0x18);
      if (lVar9 != 0) {
        lVar9 = lVar9 + *(long *)(lVar5 + 0x10);
        goto LAB_10741d09c;
      }
    }
    else {
LAB_10741d09c:
      lVar5 = *(long *)(param_2 + 0x18);
      lVar12 = *(long *)(param_2 + 0x28);
      uVar1 = *(uint *)(param_2 + 0x10);
      uVar6 = (ulong)uVar1;
      uVar2 = *(uint *)(param_2 + 8);
      FUN_10741d294();
      if (uVar6 <= param_5) {
        lVar5 = lVar9 + lVar5 + lVar12 * param_3;
        if (uVar2 < 7) {
          uVar3 = 1 << (ulong)(uVar2 & 0x1f);
          if ((uVar3 & 6) != 0) {
            if (uVar1 == 6) {
              func_0x00010742ae6c(lVar5);
              *param_4 = param_1;
              func_0x00010742ae6c(lVar5 + 1);
              param_4[1] = param_1;
              func_0x00010742ae6c(lVar5 + 2);
              param_4[2] = param_1;
              func_0x00010742ae6c(lVar5 + 4);
              param_4[3] = param_1;
              func_0x00010742ae6c(lVar5 + 5);
              param_4[4] = param_1;
              func_0x00010742ae6c(lVar5 + 6);
              lVar12 = 0x20;
              param_4[5] = param_1;
              lVar7 = 10;
              lVar8 = 0x1c;
              lVar11 = 9;
              lVar10 = 0x18;
              lVar9 = 8;
            }
            else {
              if (uVar1 != 5) {
                lVar9 = 1;
                goto LAB_10741d270;
              }
              func_0x00010742ae6c(lVar5);
              lVar12 = 0xc;
              *param_4 = param_1;
              lVar7 = 5;
              lVar8 = 8;
              lVar10 = 4;
              lVar9 = 1;
              lVar11 = 4;
            }
LAB_10741d22c:
            func_0x00010742ae6c(lVar5 + lVar9);
            *(undefined4 *)((long)param_4 + lVar10) = param_1;
            func_0x00010742ae6c(lVar5 + lVar11);
            *(undefined4 *)((long)param_4 + lVar8) = param_1;
            func_0x00010742ae6c(lVar5 + lVar7);
            *(undefined4 *)((long)param_4 + lVar12) = param_1;
            goto LAB_10741d274;
          }
          if ((uVar3 & 0x18) == 0) {
            if ((1 << (ulong)(uVar2 & 0x1f) & 0x60U) == 0) goto LAB_10741d1c4;
            lVar9 = 4;
          }
          else {
            if (uVar1 == 6) {
              func_0x00010742ae6c(lVar5);
              *param_4 = param_1;
              func_0x00010742ae6c(lVar5 + 2);
              param_4[1] = param_1;
              func_0x00010742ae6c(lVar5 + 4);
              param_4[2] = param_1;
              func_0x00010742ae6c(lVar5 + 8);
              param_4[3] = param_1;
              func_0x00010742ae6c(lVar5 + 10);
              param_4[4] = param_1;
              func_0x00010742ae6c(lVar5 + 0xc);
              lVar12 = 0x20;
              param_4[5] = param_1;
              lVar7 = 0x14;
              lVar8 = 0x1c;
              lVar11 = 0x12;
              lVar10 = 0x18;
              lVar9 = 0x10;
              goto LAB_10741d22c;
            }
            lVar9 = 2;
          }
        }
        else {
LAB_10741d1c4:
          lVar9 = 0;
        }
LAB_10741d270:
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          func_0x00010742ae6c(lVar5);
          *param_4 = param_1;
          lVar5 = lVar5 + lVar9;
          param_4 = param_4 + 1;
        }
        goto LAB_10741d274;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10741d294; end: 10741d2b7;  */

undefined8 FUN_10741d294(int param_1)

{
  if (param_1 - 2U < 6) {
    return *(undefined8 *)(&UNK_10de68f10 + (ulong)(param_1 - 2U) * 8);
  }
  return 1;
}



/* Entry: 10741fb7c; end: 10742011f;  */

void FUN_10741fb7c(void)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 in_ZR;
  long lVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 in_x3;
  undefined1 uVar11;
  undefined8 extraout_x8;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  undefined1 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar19;
  uint *puVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong auStack_2d0 [8];
  undefined4 auStack_290 [6];
  undefined4 uStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined4 uStack_248;
  undefined1 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong auStack_220 [33];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [256];
  undefined8 uStack_10;
  
  func_0x00010742bef8();
  func_0x00010742af70();
  func_0x00010742b038();
  auStack_290[0] = 0x61;
  uStack_278 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_10 = extraout_x8;
  func_0x00010742b9e4();
  uStack_268 = 0;
  uStack_248 = 0;
  uStack_244 = 1;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_240 = 0;
  func_0x00010742bc94(auStack_220,auStack_290);
  FUN_10743d7bc(auStack_118,auStack_220);
  func_0x000107288cd8(auStack_220);
  func_0x000107262330(auStack_290);
  func_0x00010742b54c();
  func_0x00010729d56c(auStack_110);
  puVar6 = (ulong *)auStack_290;
  func_0x000107262e9c(puVar6,in_x3);
  uStack_258 = uStack_258 & 0xffffffffffffff00;
  if (*(long *)(unaff_x21 + 0x10) == 0) {
    in_ZR = 1;
    uVar11 = 1;
    if (*(char *)(unaff_x21 + 0x19) == '\x01') goto LAB_107420084;
    in_ZR = 1;
    uVar11 = 1;
    if (*(char *)(unaff_x21 + 0x18) == '\x01') goto LAB_107420084;
    auStack_2d0[5] = 0;
    auStack_2d0[4] = 0;
    auStack_2d0[7] = 0;
    auStack_2d0[6] = 0;
    auStack_2d0[1] = 0;
    auStack_2d0[3] = 0;
    auStack_2d0[2] = 0;
    piVar9 = *(int **)(unaff_x21 + 0x20);
    uVar15 = (ulong)*(char *)((long)piVar9 + 0x17);
    if ((long)uVar15 < 0) {
      uVar15 = (ulong)(uint)piVar9[2];
      piVar9 = *(int **)piVar9;
    }
    uVar18 = 1;
    if (*piVar9 == 0x46546c67) {
      uVar18 = 2;
    }
    auStack_2d0[0] = (ulong)uVar18;
    uVar15 = uVar15 & 0xffffffff;
    in_ZR = uVar15 == 0xc;
    if (uVar15 < 0xc) {
LAB_107420080:
      uVar11 = 2;
      goto LAB_107420084;
    }
    auStack_220[1] = 0;
    auStack_220[0] = auStack_2d0[0];
    auStack_220[5] = 0;
    auStack_220[4] = 0;
    auStack_220[7] = 0;
    auStack_220[6] = 0;
    auStack_220[2] = 0x10741b9f0;
    auStack_220[3] = 0x10741b9f8;
    if (*piVar9 != 0x46546c67) {
      in_ZR = uVar18 == 2;
      if (!(bool)in_ZR) {
        if (uVar18 != 1) {
          if (uVar18 != 0) goto LAB_10741fde4;
          auStack_220[0] = 1;
        }
        goto LAB_10741fcfc;
      }
      goto LAB_107420080;
    }
    if (uVar18 != 1) {
LAB_10741fde4:
      in_ZR = 0;
      if (piVar9[1] == 2) {
        in_ZR = 0x13 < uVar15 && uVar15 == (uint)piVar9[2];
        if (0x13 < uVar15 && (uint)piVar9[2] <= uVar15) {
          uVar10 = (ulong)(uint)piVar9[3];
          uVar24 = (uVar15 - 0x14) - uVar10;
          in_ZR = uVar24 == 0;
          if ((uVar10 <= uVar15 - 0x14) && (in_ZR = 0, piVar9[4] == 0x4e4f534a)) {
            in_ZR = uVar24 == 8;
            if (uVar24 < 8) {
              puVar20 = (uint *)0x0;
              uVar15 = 0;
            }
            else {
              puVar20 = (uint *)((long)piVar9 + uVar10 + 0x14);
              uVar15 = (ulong)*puVar20;
              in_ZR = uVar24 - 8 == uVar15;
              if ((uVar24 - 8 < uVar15) || (in_ZR = puVar20[1] == 0x4e4942, !(bool)in_ZR))
              goto LAB_107420080;
              puVar20 = puVar20 + 2;
            }
            func_0x00010742bc38();
            if ((int)puVar6 == 0) {
              puVar14 = (undefined4 *)*unaff_x20;
              *puVar14 = 2;
              *(uint **)(puVar14 + 0x6a) = puVar20;
              *(ulong *)(puVar14 + 0x6c) = uVar15;
              goto LAB_10741fd10;
            }
          }
        }
      }
      goto LAB_107420080;
    }
LAB_10741fcfc:
    in_ZR = uVar18 == 1;
    func_0x00010742bc38();
    if ((int)puVar6 != 0) goto LAB_107420080;
    *(undefined4 *)*unaff_x20 = 1;
LAB_10741fd10:
    lVar23 = *unaff_x20;
    uVar15 = *(ulong *)(lVar23 + 0xa0);
    if ((((uVar15 != 0) && (lVar16 = *(long *)(lVar23 + 0x98), *(long *)(lVar16 + 0x18) == 0)) &&
        (*(long *)(lVar16 + 0x10) == 0)) && (*(long *)(lVar23 + 0x1a8) != 0)) {
      in_ZR = *(ulong *)(lVar23 + 0x1b0) == *(ulong *)(lVar16 + 8);
      if (*(ulong *)(lVar23 + 0x1b0) < *(ulong *)(lVar16 + 8)) goto LAB_107420080;
      *(long *)(lVar16 + 0x18) = *(long *)(lVar23 + 0x1a8);
      *(undefined4 *)(lVar16 + 0x20) = 0;
    }
    lVar16 = 0;
    for (uVar24 = 0; in_ZR = uVar24 == uVar15, uVar24 < uVar15; uVar24 = uVar24 + 1) {
      lVar19 = *(long *)(lVar23 + 0x98);
      lVar22 = lVar19 + lVar16;
      plVar21 = (long *)(lVar22 + 0x18);
      if ((*plVar21 == 0) && (lVar22 = *(long *)(lVar22 + 0x10), lVar22 != 0)) {
        lVar5 = lVar22;
        func_0x00010742bbe8(lVar22,&DAT_10f414f66);
        if ((int)lVar5 != 0) goto LAB_107420080;
        lVar5 = lVar22;
        _strchr(lVar22,0x2c);
        in_ZR = lVar5 != 0 && lVar5 - lVar22 == 7;
        if (lVar5 == 0 || lVar5 - lVar22 < 7) goto LAB_107420080;
        lVar22 = lVar5 + -7;
        func_0x00010742b7d8(lVar22,&UNK_10f414f6c);
        if ((int)lVar22 != 0) goto LAB_107420080;
        puVar6 = auStack_2d0;
        FUN_10741c560(auStack_2d0,*(undefined8 *)(lVar19 + lVar16 + 8),lVar5 + 1,plVar21);
        *(undefined4 *)(*(long *)(lVar23 + 0x98) + lVar16 + 0x20) = 2;
        if ((int)puVar6 != 0) goto LAB_107420080;
        uVar15 = *(ulong *)(lVar23 + 0xa0);
      }
      lVar16 = lVar16 + 0x50;
    }
    puVar14 = (undefined4 *)unaff_x20[1];
    uVar24 = *(ulong *)(*unaff_x20 + 0xb0);
    puVar12 = (undefined8 *)unaff_x20[2];
    uVar15 = (long)puVar12 - (long)puVar14 >> 4;
    if (uVar24 <= uVar15) {
      if (uVar24 < uVar15) {
        unaff_x20[2] = (long)(puVar14 + uVar24 * 4);
      }
LAB_10741ff40:
      uVar15 = 0;
      while( true ) {
        uVar24 = *(ulong *)(*unaff_x20 + 0xb0);
        in_ZR = uVar24 == uVar15;
        if (uVar24 <= uVar15) break;
        lVar23 = *(long *)(*unaff_x20 + 0xa8) + uVar15 * 0x48;
        if (*(long *)(lVar23 + 0x10) == 0) {
          puVar14 = *(undefined4 **)(lVar23 + 8);
          if (puVar14 != (undefined4 *)0x0) {
            func_0x00010742bb74();
            func_0x00010742bbe8();
            if (((int)puVar6 == 0) &&
               (puVar7 = puVar14, _strchr(puVar14,0x2c), puVar6 = (ulong *)puVar7,
               puVar7 != (undefined4 *)0x0 && 6 < (long)puVar7 - (long)puVar14)) {
              puVar6 = (ulong *)((long)puVar7 + -7);
              func_0x00010742b7d8(puVar6,&UNK_10f414f6c);
              if ((int)puVar6 == 0) {
                puVar1 = (undefined1 *)((long)puVar7 + 1);
                puVar8 = puVar1;
                _strlen();
                uVar24 = (long)puVar8 - ((ulong)puVar8 >> 2);
                if ((undefined1 *)0x1 < puVar8) {
                  uVar24 = (uVar24 - ((puVar1 + (long)puVar8)[-2] == '=')) -
                           (ulong)(*(char *)((long)puVar7 + (long)puVar8) == '=');
                }
                auStack_220[0] = 0;
                puVar6 = auStack_2d0;
                FUN_10741c560(auStack_2d0,uVar24,puVar1,auStack_220);
                uVar10 = auStack_220[0];
                goto LAB_10741ff84;
              }
            }
            goto LAB_10741ff7c;
          }
          uVar10 = 0;
          uVar24 = 0;
        }
        else {
LAB_10741ff7c:
          uVar24 = 0;
          uVar10 = 0;
        }
LAB_10741ff84:
        puVar2 = (ulong *)(unaff_x20[1] + uVar15 * 0x10);
        *puVar2 = uVar10;
        puVar2[1] = uVar24;
        uVar15 = (ulong)((int)uVar15 + 1);
      }
      *unaff_x19 = 0;
      unaff_x19[0x40] = 0;
      goto LAB_107420094;
    }
    uVar10 = uVar24 - uVar15;
    if (uVar10 <= (ulong)(unaff_x20[3] - (long)puVar12 >> 4)) {
      puVar3 = puVar12;
      for (lVar23 = uVar24 * 0x10 + uVar15 * -0x10; lVar23 != 0; lVar23 = lVar23 + -0x10) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
      unaff_x20[2] = (long)(puVar12 + uVar10 * 2);
      goto LAB_10741ff40;
    }
    if (uVar24 >> 0x3c == 0) {
      uVar13 = unaff_x20[3] - (long)puVar14;
      uVar17 = (long)uVar13 >> 3;
      if (uVar17 <= uVar24) {
        uVar17 = uVar24;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar17 = 0xfffffffffffffff;
      }
      if (uVar17 >> 0x3c != 0) {
        func_0x000104bd35f4();
        goto LAB_1074200e0;
      }
      puVar6 = (ulong *)(uVar17 << 4);
      __Znwm();
      puVar12 = (undefined8 *)((long)puVar6 + ((long)puVar12 - (long)puVar14));
      puVar3 = puVar12;
      for (lVar23 = uVar24 * 0x10 + uVar15 * -0x10; lVar23 != 0; lVar23 = lVar23 + -0x10) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
      puVar7 = (undefined4 *)((long)puVar6 + uVar17 * 4 * 4);
      func_0x00010742bb74();
      _memcpy();
      unaff_x20[1] = (long)(puVar12 + uVar15 * -2);
      unaff_x20[2] = (long)(puVar12 + uVar10 * 2);
      unaff_x20[3] = (long)puVar7;
      if (puVar14 != (undefined4 *)0x0) {
        __ZdlPv();
        puVar6 = (ulong *)puVar14;
      }
      goto LAB_10741ff40;
    }
  }
  else {
    uVar11 = 1;
LAB_107420084:
    uStack_258 = CONCAT71(uStack_258._1_7_,uVar11);
    FUN_107425658();
LAB_107420094:
    func_0x000104c2f714(auStack_290);
    FUN_10743d7e4(auStack_118);
    func_0x00010742aec0(uStack_10);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_107425698();
LAB_1074200e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1074200e4);
  (*pcVar4)();
}



/* Entry: 107420120; end: 10742014b;  */

long FUN_107420120(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10742014c; end: 107420957;  */

void FUN_10742014c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined4 extraout_w8;
  ulong *extraout_x8;
  undefined8 extraout_x8_00;
  ulong *puVar9;
  ulong *extraout_x8_01;
  long extraout_x8_02;
  ulong *extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  ulong *puVar11;
  long *plVar12;
  long *extraout_x10;
  ulong *extraout_x11;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong *unaff_x22;
  ulong *puVar16;
  ulong uVar17;
  undefined1 auStack_538 [24];
  long lStack_520;
  long *plStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  ulong auStack_498 [4];
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [64];
  char cStack_398;
  long *plStack_390;
  long **pplStack_388;
  undefined8 uStack_380;
  undefined8 uStack_358;
  undefined8 auStack_350 [9];
  uint uStack_308;
  undefined1 auStack_300 [56];
  ulong uStack_2c8;
  uint uStack_2c0;
  uint uStack_2bc;
  long lStack_180;
  ulong *puStack_178;
  long *plStack_170;
  ulong uStack_168;
  float fStack_160;
  undefined1 auStack_158 [56];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [256];
  undefined8 uStack_18;
  
  func_0x00010742bef8();
  func_0x00010742b038();
  plStack_518 = (long *)0x0;
  lStack_520 = 0;
  uStack_508 = 0;
  plStack_510 = (long *)0x0;
  uStack_18 = extraout_x8_00;
  FUN_10741fb7c(auStack_3d8,&lStack_520);
  uVar4 = cStack_398 == '\x01';
  if ((bool)uVar4) {
    FUN_1074256a4(extraout_x8 + 1,auStack_3d8);
    *(undefined4 *)(extraout_x8 + 9) = 1;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_538,param_3);
    uStack_4b0 = CONCAT44(uStack_4b0._4_4_,99);
    auStack_498[0] = auStack_498[0] & 0xffffffff00000000;
    auStack_498[3] = 0;
    uStack_478 = 0;
    func_0x00010742b9e4();
    auStack_498[2] = 0;
    uStack_470 = CONCAT44(uStack_470._4_4_,extraout_w8);
    uStack_468 = CONCAT35(uStack_468._5_3_,0x100000000);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_460 = 0;
    func_0x00010742bc94(&uStack_2c8,&uStack_4b0);
    FUN_10743d7bc(auStack_120,&uStack_2c8);
    func_0x000107288cd8(&uStack_2c8);
    func_0x000107262330(&uStack_4b0);
    func_0x00010742b54c();
    func_0x00010729d56c(auStack_118);
    puStack_178 = (ulong *)0x0;
    lStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    fStack_160 = 1.0;
    func_0x000104c2f64c(auStack_158);
    func_0x000107262e9c(&uStack_2c8,auStack_538);
    func_0x000104c2f1f0(auStack_158,&uStack_2c8);
    func_0x000104c2f714(&uStack_2c8);
    lVar6 = lStack_520;
    uStack_478 = CONCAT44(uStack_478._4_4_,0x3f800000);
    uStack_450 = CONCAT44(uStack_450._4_4_,0x3f800000);
    uStack_428 = 0x3f800000;
    auStack_498[3] = 0;
    auStack_498[0] = 0;
    uStack_4a0 = 0;
    auStack_498[2] = 0;
    auStack_498[1] = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    uStack_460 = 0;
    uStack_440 = 0;
    uStack_448 = 0;
    uStack_430 = 0;
    uStack_438 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    puStack_3f0 = &uStack_3e8;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    for (uVar14 = 0; uVar14 < *(ulong *)(lVar6 + 0xb0); uVar14 = uVar14 + 1) {
      uStack_2c0 = uStack_2c0 & 0xffffff00;
      uStack_2bc = uStack_2bc & 0xffffff00;
      uStack_2c8 = uVar14;
      FUN_107425fbc(auStack_498,&uStack_2c8);
    }
    FUN_107425978(&uStack_2c8);
    FUN_1074256c8(&uStack_2c8,&uStack_4b0,lVar6,plStack_518);
    uVar1 = CONCAT44(uStack_2bc,uStack_2c0);
    puVar16 = extraout_x8;
    for (uVar14 = uStack_2c8; uVar14 != uVar1; uVar14 = uVar14 + 0x88) {
      uStack_4c0 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      uStack_4e8 = 0;
      uStack_4f0 = 1;
      FUN_10742a7d4(&uStack_500,uVar14);
      FUN_10742a9e8(&uStack_358);
      FUN_10742a730(&uStack_358,&uStack_500);
      func_0x000107262e9c(&plStack_390,auStack_538);
      func_0x000104c2f1f0(auStack_300,&plStack_390);
      func_0x000104c2f714(&plStack_390);
      puVar11 = &uStack_168;
      func_0x00010726364c(puVar11,uVar14 + 0x48);
      puVar7 = puStack_178;
      if (puStack_178 != (ulong *)0x0) {
        uVar17 = (long)puStack_178 - 1;
        if (((ulong)puStack_178 & uVar17) == 0) {
          puVar16 = (ulong *)(uVar17 & (ulong)puVar11);
        }
        else {
          puVar16 = puVar11;
          if (puStack_178 <= puVar11) {
            uVar10 = 0;
            if (puStack_178 != (ulong *)0x0) {
              uVar10 = (ulong)puVar11 / (ulong)puStack_178;
            }
            puVar16 = (ulong *)((long)puVar11 - uVar10 * (long)puStack_178);
          }
        }
        plVar15 = *(long **)(lStack_180 + (long)puVar16 * 8);
        if (plVar15 != (long *)0x0) {
          do {
            while( true ) {
              plVar15 = (long *)*plVar15;
              if (plVar15 == (long *)0x0) goto LAB_107420414;
              puVar9 = (ulong *)plVar15[1];
              if (puVar9 != puVar11) break;
              plVar13 = plVar15 + 2;
              func_0x000104c32db4(plVar13,uVar14 + 0x48);
              if (((ulong)plVar13 & 1) != 0) goto LAB_1074206b0;
            }
            if (((ulong)puVar7 & uVar17) == 0) {
              puVar9 = (ulong *)((ulong)puVar9 & uVar17);
            }
            else if (puVar7 <= puVar9) {
              uVar10 = 0;
              if (puVar7 != (ulong *)0x0) {
                uVar10 = (ulong)puVar9 / (ulong)puVar7;
              }
              puVar9 = (ulong *)((long)puVar9 - uVar10 * (long)puVar7);
            }
          } while (puVar9 == puVar16);
        }
      }
LAB_107420414:
      plVar15 = (long *)0xd8;
      __Znwm();
      uStack_380 = 0;
      *plVar15 = 0;
      plVar15[1] = (long)puVar11;
      plStack_390 = plVar15;
      pplStack_388 = &plStack_170;
      func_0x000104c2fe00(plVar15 + 2,uVar14 + 0x48);
      _bzero(plVar15 + 9,0x90);
      FUN_10742a9e8(plVar15 + 9);
      uStack_380 = CONCAT71(uStack_380._1_7_,1);
      if ((puVar7 == (ulong *)0x0) || (fStack_160 * (float)puVar7 < (float)(uStack_168 + 1))) {
        bVar3 = (ulong *)0x2 < puVar7;
        bVar5 = puVar7 == (ulong *)0x3;
        func_0x00010742b048((long)puVar7 << 1);
        puVar16 = extraout_x8_01;
        if (!bVar3 || bVar5) {
          puVar16 = extraout_x9;
        }
        if ((long)puVar16 - 1U == 0) {
          puVar16 = (ulong *)0x2;
        }
        else if (((ulong)puVar16 & (long)puVar16 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
        }
        puVar9 = puStack_178;
        puVar7 = puVar16;
        if (puStack_178 < puVar16) {
LAB_1074204c0:
          if ((ulong)puVar7 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x107420854);
            (*pcVar2)();
          }
          lVar6 = (long)puVar7 << 3;
          __Znwm(lVar6);
          FUN_10742ab04(&lStack_180,lVar6);
          for (puVar16 = (ulong *)0x0; puVar7 != puVar16; puVar16 = (ulong *)((long)puVar16 + 1)) {
            *(undefined8 *)(lStack_180 + (long)puVar16 * 8) = 0;
          }
          puStack_178 = puVar7;
          if (plStack_170 != (long *)0x0) {
            puVar16 = (ulong *)plStack_170[1];
            uVar10 = (long)puVar7 - 1;
            uVar17 = 0;
            if (puVar7 != (ulong *)0x0) {
              uVar17 = (ulong)puVar16 / (ulong)puVar7;
            }
            puVar9 = puVar16;
            if (puVar7 <= puVar16) {
              puVar9 = (ulong *)((long)puVar16 - uVar17 * (long)puVar7);
            }
            if (((ulong)puVar7 & uVar10) == 0) {
              puVar9 = (ulong *)((ulong)puVar16 & uVar10);
            }
            *(long ***)(lStack_180 + (long)puVar9 * 8) = &plStack_170;
            lVar6 = lStack_180;
            plVar13 = plStack_170;
            while (plVar12 = plVar13, plVar13 = (long *)*plVar12, plVar13 != (long *)0x0) {
              puVar16 = (ulong *)plVar13[1];
              if (((ulong)puVar7 & uVar10) == 0) {
                puVar16 = (ulong *)((ulong)puVar16 & uVar10);
              }
              else if (puVar7 <= puVar16) {
                uVar17 = 0;
                if (puVar7 != (ulong *)0x0) {
                  uVar17 = (ulong)puVar16 / (ulong)puVar7;
                }
                puVar16 = (ulong *)((long)puVar16 - uVar17 * (long)puVar7);
              }
              if (puVar16 != puVar9) {
                if (*(long *)(lVar6 + (long)puVar16 * 8) == 0) {
                  *(long **)(lVar6 + (long)puVar16 * 8) = plVar12;
                  puVar9 = puVar16;
                }
                else {
                  *plVar12 = *plVar13;
                  func_0x00010742b390();
                  lVar6 = extraout_x8_02;
                  uVar10 = extraout_x9_00;
                  plVar13 = extraout_x10;
                  puVar9 = extraout_x11;
                }
              }
            }
          }
        }
        else {
          puVar7 = puStack_178;
          if (puVar16 < puStack_178) {
            puVar7 = (ulong *)(long)((float)uStack_168 / fStack_160);
            if ((puStack_178 < (ulong *)0x3) || (((ulong)puStack_178 & (long)puStack_178 - 1U) != 0)
               ) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((ulong *)0x1 < puVar7) {
              puVar7 = (ulong *)(1L << (-LZCOUNT((long)puVar7 + -1) & 0x3fU));
            }
            if (puVar16 <= puVar7) {
              puVar16 = puVar7;
            }
            puVar7 = puStack_178;
            if (puVar16 < puVar9) {
              puVar7 = puVar16;
              if (puVar16 != (ulong *)0x0) goto LAB_1074204c0;
              FUN_10742ab04(&lStack_180,0);
              puStack_178 = (ulong *)0x0;
              puVar7 = (ulong *)0x0;
            }
          }
        }
        if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
          puVar16 = (ulong *)((long)puVar7 - 1U & (ulong)puVar11);
        }
        else {
          puVar16 = puVar11;
          if (puVar7 <= puVar11) {
            uVar17 = 0;
            if (puVar7 != (ulong *)0x0) {
              uVar17 = (ulong)puVar11 / (ulong)puVar7;
            }
            puVar16 = (ulong *)((long)puVar11 - uVar17 * (long)puVar7);
          }
        }
      }
      plVar13 = *(long **)(lStack_180 + (long)puVar16 * 8);
      if (plVar13 == (long *)0x0) {
        *plVar15 = (long)plStack_170;
        *(long ***)(lStack_180 + (long)puVar16 * 8) = &plStack_170;
        plStack_170 = plVar15;
        if (*plVar15 != 0) {
          puVar11 = *(ulong **)(*plVar15 + 8);
          if (((ulong)puVar7 & (long)puVar7 - 1U) == 0) {
            puVar11 = (ulong *)((ulong)puVar11 & (long)puVar7 - 1U);
          }
          else if (puVar7 <= puVar11) {
            uVar17 = 0;
            if (puVar7 != (ulong *)0x0) {
              uVar17 = (ulong)puVar11 / (ulong)puVar7;
            }
            puVar11 = (ulong *)((long)puVar11 - uVar17 * (long)puVar7);
          }
          *(long **)(lStack_180 + (long)puVar11 * 8) = plVar15;
        }
      }
      else {
        *plVar15 = *plVar13;
        *plVar13 = (long)plVar15;
      }
      plStack_390 = (long *)0x0;
      uStack_168 = uStack_168 + 1;
      FUN_10742ab1c(&plStack_390);
LAB_1074206b0:
      if ((int)plVar15[0x13] != -1 || uStack_308 != 0xffffffff) {
        plVar13 = plVar15 + 10;
        if (uStack_308 == 0xffffffff) {
          FUN_10742aa40(plVar13);
        }
        else {
          plStack_390 = plVar13;
          (*(code *)(&PTR_FUN_1109af350)[uStack_308])(&plStack_390,plVar13,auStack_350);
        }
      }
      func_0x000104c2f1f0(plVar15 + 0x14,auStack_300);
      func_0x00010742ac14(&uStack_358);
      FUN_107425f68(&uStack_500);
    }
    puVar8 = (undefined8 *)0x78;
    __Znwm();
    puVar16 = puStack_178;
    lVar6 = lStack_180;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = lStack_180;
    *puVar8 = &PTR_FUN_1109af370;
    puStack_178 = (ulong *)0x0;
    lStack_180 = 0;
    puVar8[4] = puVar16;
    puVar8[5] = plStack_170;
    puVar8[6] = uStack_168;
    *(float *)(puVar8 + 7) = fStack_160;
    if (uStack_168 != 0) {
      puVar11 = (ulong *)plStack_170[1];
      if (((ulong)puVar16 & (long)puVar16 - 1U) == 0) {
        puVar11 = (ulong *)((ulong)puVar11 & (long)puVar16 - 1U);
      }
      else {
        uVar14 = 0;
        if (puVar16 != (ulong *)0x0) {
          uVar14 = (ulong)puVar11 / (ulong)puVar16;
        }
        if (puVar16 <= puVar11) {
          puVar11 = (ulong *)((long)puVar11 - uVar14 * (long)puVar16);
        }
      }
      *(undefined8 **)(lVar6 + (long)puVar11 * 8) = puVar8 + 5;
      plStack_170 = (long *)0x0;
      uStack_168 = 0;
    }
    func_0x000104c318bc(puVar8 + 8,auStack_158);
    unaff_x22 = extraout_x8 + 1;
    *unaff_x22 = (ulong)(puVar8 + 3);
    extraout_x8[2] = (ulong)puVar8;
    uStack_358 = 0;
    auStack_350[0] = 0;
    *(undefined4 *)(extraout_x8 + 9) = 0;
    FUN_10742ac74(&uStack_358);
    func_0x00010742a6b0(&uStack_2c8);
    FUN_107425908(&uStack_4b0);
    func_0x00010742ac9c(&lStack_180);
    FUN_10743d7e4(auStack_120);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_538);
    plVar13 = plStack_510;
    lVar6 = lStack_520;
    for (plVar15 = plStack_518; uVar4 = plVar15 == plVar13, !(bool)uVar4; plVar15 = plVar15 + 2) {
      if (*plVar15 != 0) {
        (**(code **)(lVar6 + 0x1c0))(*(undefined8 *)(lVar6 + 0x1c8));
      }
    }
    FUN_10741c704(lVar6);
  }
  func_0x00010742a700(auStack_3d8);
  FUN_107420120(&lStack_520);
  func_0x00010742aec0(uStack_18);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  FUN_10742acc4(unaff_x22);
  func_0x00010742a700(auStack_3d8);
  FUN_107420120(&lStack_520);
  func_0x00010742b990();
  return;
}



/* Entry: 107420958; end: 107420a43;  */

void FUN_107420958(void)

{
  return;
}



/* Entry: 107420a44; end: 107420eef;  */

int FUN_107420a44(ulong *param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  int *piVar2;
  undefined4 *puVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  
  iVar10 = (int)param_1[1];
  uVar8 = *param_1;
LAB_107420a9c:
  if (param_3 <= uVar8) {
LAB_107420ea8:
    iVar11 = iVar10;
    if (param_4 != 0) {
      uVar8 = (ulong)(uint)param_1[1];
      do {
        uVar8 = uVar8 - 1;
        if ((int)uVar8 < 0) {
          return iVar10;
        }
        lVar4 = param_4 + (uVar8 & 0x7fffffff) * 0x20;
      } while ((*(long *)(lVar4 + 8) == -1) || (*(long *)(lVar4 + 0x10) != -1));
      iVar11 = -3;
    }
LAB_107420e80:
    return iVar11;
  }
  bVar5 = *(byte *)(param_2 + uVar8);
  uVar9 = uVar8;
  iVar11 = -2;
  iVar7 = iVar10;
  switch((uint)bVar5) {
  case 0x20:
    break;
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
    goto LAB_107420e80;
  case 0x22:
    uVar9 = uVar8 + 1;
    do {
      *param_1 = uVar9;
      if (param_3 <= uVar9) goto LAB_107420e70;
      cVar6 = *(char *)(param_2 + uVar9);
      uVar14 = uVar9;
      if (cVar6 == '\\') {
        uVar1 = uVar9 + 1;
        if (uVar1 < param_3) {
          *param_1 = uVar1;
          bVar5 = *(byte *)(param_2 + uVar1);
          uVar13 = bVar5 - 0x2f;
          uVar14 = uVar1;
          if (0x37 < uVar13 || (1L << ((ulong)uVar13 & 0x3f) & 0x88200000000001U) == 0) {
            iVar11 = -2;
            switch((uint)bVar5) {
            case 0x6e:
            case 0x72:
            case 0x74:
              break;
            case 0x6f:
            case 0x70:
            case 0x71:
            case 0x73:
              goto LAB_107420e7c;
            case 0x75:
              uVar13 = 0;
              *param_1 = uVar9 + 2;
              for (; (uVar13 < 4 && uVar9 + 2 < param_3 &&
                     (bVar5 = *(byte *)(param_2 + 2 + uVar9), bVar5 != 0)); uVar9 = uVar9 + 1) {
                if ((9 < (byte)(bVar5 - 0x30)) &&
                   (0x25 < bVar5 - 0x41 ||
                    (1L << ((ulong)(bVar5 - 0x41) & 0x3f) & 0x3f0000003fU) == 0))
                goto LAB_107420e78;
                *param_1 = uVar9 + 3;
                uVar13 = uVar13 + 1;
              }
              *param_1 = uVar9 + 1;
              uVar14 = uVar9 + 1;
              break;
            default:
              if (bVar5 != 0x22) goto LAB_107420e7c;
            }
          }
        }
      }
      else {
        if (cVar6 == '\0') goto LAB_107420e70;
        if (cVar6 == '\"') goto code_r0x000107420e20;
      }
      uVar9 = uVar14 + 1;
    } while( true );
  case 0x2c:
    if (((param_4 != 0) && (*(int *)((long)param_1 + 0xc) != -1)) &&
       (piVar2 = (int *)(param_4 + (long)*(int *)((long)param_1 + 0xc) * 0x20), 1 < *piVar2 - 1U)) {
      iVar11 = piVar2[7];
      goto LAB_107420dc8;
    }
    break;
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
LAB_107420c5c:
    if ((param_4 != 0) && (*(int *)((long)param_1 + 0xc) != -1)) {
      piVar2 = (int *)(param_4 + (long)*(int *)((long)param_1 + 0xc) * 0x20);
      iVar11 = *piVar2;
      if (iVar11 == 3) {
        if (piVar2[6] != 0) {
          return -2;
        }
      }
      else if (iVar11 == 1) {
        return -2;
      }
    }
    do {
      if (param_3 <= uVar9) goto LAB_107420e70;
      bVar5 = *(byte *)(param_2 + uVar9);
      if (bVar5 < 0x2d) {
        if ((1L << ((ulong)bVar5 & 0x3f) & 0x100100002600U) != 0) goto LAB_107420cf4;
        if ((ulong)bVar5 == 0) goto LAB_107420e70;
      }
      uVar13 = (uint)bVar5;
      if ((uVar13 == 0x5d) || (uVar13 == 0x7d)) goto LAB_107420cf4;
      if (uVar13 - 0x7f < 0xffffffa1) goto LAB_107420e78;
      *param_1 = uVar9 + 1;
      uVar9 = uVar9 + 1;
    } while( true );
  case 0x3a:
code_r0x000107420dc0:
    iVar11 = (int)param_1[1] + -1;
LAB_107420dc8:
    *(int *)((long)param_1 + 0xc) = iVar11;
    uVar9 = uVar8;
    iVar7 = iVar10;
    break;
  default:
    uVar13 = bVar5 - 0x5b;
    uVar14 = (ulong)uVar13;
    if (uVar13 < 0x23) {
      if ((1L << (uVar14 & 0x3f) & 0x2080800U) != 0) goto LAB_107420c5c;
      if ((1L << (uVar14 & 0x3f) & 0x100000001U) == 0) {
        if ((1L << (uVar14 & 0x3f) & 0x400000004U) == 0) goto LAB_107420c88;
        if (param_4 != 0) {
          iVar11 = 1;
          if (bVar5 != 0x7d) {
            iVar11 = 2;
          }
          if ((int)param_1[1] == 0) {
            return -2;
          }
          uVar14 = (ulong)((int)param_1[1] - 1);
          do {
            piVar2 = (int *)(param_4 + uVar14 * 0x20);
            if ((*(long *)(piVar2 + 2) != -1) && (*(long *)(piVar2 + 4) == -1)) {
              if (*piVar2 != iVar11) {
                return -2;
              }
              *(ulong *)(piVar2 + 4) = uVar8 + 1;
              iVar11 = piVar2[7];
              goto LAB_107420dc8;
            }
            uVar14 = (ulong)piVar2[7];
          } while (piVar2[7] != -1);
          if (*piVar2 != iVar11) {
            return -2;
          }
          if (*(int *)((long)param_1 + 0xc) == -1) {
            return -2;
          }
        }
      }
      else {
        iVar10 = iVar10 + 1;
        iVar7 = iVar10;
        if (param_4 != 0) {
          uVar13 = (uint)param_1[1];
          if (param_5 <= uVar13) {
            return -1;
          }
          *(uint *)(param_1 + 1) = uVar13 + 1;
          puVar3 = (undefined4 *)(param_4 + (ulong)uVar13 * 0x20);
          *(undefined8 *)(puVar3 + 2) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 4) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 6) = 0xffffffff00000000;
          iVar11 = *(int *)((long)param_1 + 0xc);
          if (iVar11 != -1) {
            lVar4 = param_4 + (long)iVar11 * 0x20;
            *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
            puVar3[7] = iVar11;
          }
          uVar12 = 1;
          if (bVar5 != 0x7b) {
            uVar12 = 2;
          }
          *puVar3 = uVar12;
          uVar8 = *param_1;
          *(ulong *)(puVar3 + 2) = uVar8;
          goto code_r0x000107420dc0;
        }
      }
    }
    else {
LAB_107420c88:
      uVar13 = (uint)bVar5;
      if (1 < uVar13 - 9 && uVar13 != 0xd) {
        if (uVar13 != 0) {
          return -2;
        }
        goto LAB_107420ea8;
      }
    }
  }
  goto LAB_107420dcc;
LAB_107420cf4:
  if (param_4 == 0) {
    iVar11 = *(int *)((long)param_1 + 0xc);
  }
  else {
    uVar13 = (uint)param_1[1];
    if (param_5 <= uVar13) goto LAB_107420e9c;
    *(uint *)(param_1 + 1) = uVar13 + 1;
    puVar3 = (undefined4 *)(param_4 + (ulong)uVar13 * 0x20);
    *(undefined8 *)(puVar3 + 2) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + 4) = 0xffffffffffffffff;
    uVar9 = *param_1;
    *puVar3 = 4;
    *(ulong *)(puVar3 + 2) = uVar8;
    *(ulong *)(puVar3 + 4) = uVar9;
    iVar11 = *(int *)((long)param_1 + 0xc);
    puVar3[6] = 0;
    puVar3[7] = iVar11;
  }
  uVar9 = uVar9 - 1;
  *param_1 = uVar9;
  iVar7 = iVar10 + 1;
  if (param_4 == 0) goto LAB_107420dcc;
  goto joined_r0x000107420d44;
LAB_107420e78:
  iVar11 = -2;
  goto LAB_107420e7c;
code_r0x000107420e20:
  if (param_4 == 0) {
    iVar7 = iVar10 + 1;
    goto LAB_107420dcc;
  }
  uVar13 = (uint)param_1[1];
  if (param_5 <= uVar13) {
LAB_107420e9c:
    iVar11 = -1;
    goto LAB_107420e7c;
  }
  *(uint *)(param_1 + 1) = uVar13 + 1;
  puVar3 = (undefined4 *)(param_4 + (ulong)uVar13 * 0x20);
  *(undefined8 *)(puVar3 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(puVar3 + 4) = 0xffffffffffffffff;
  uVar9 = *param_1;
  *puVar3 = 3;
  *(ulong *)(puVar3 + 2) = uVar8 + 1;
  *(ulong *)(puVar3 + 4) = uVar9;
  iVar11 = *(int *)((long)param_1 + 0xc);
  puVar3[6] = 0;
  puVar3[7] = iVar11;
joined_r0x000107420d44:
  iVar7 = iVar10 + 1;
  if (iVar11 != -1) {
    lVar4 = param_4 + (long)iVar11 * 0x20;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    iVar7 = iVar10 + 1;
  }
LAB_107420dcc:
  iVar10 = iVar7;
  uVar8 = uVar9 + 1;
  *param_1 = uVar8;
  goto LAB_107420a9c;
LAB_107420e70:
  iVar11 = -3;
LAB_107420e7c:
  *param_1 = uVar8;
  return iVar11;
}



/* Entry: 107420ef0; end: 1074247c3;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_107420ef0(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 uVar7;
  bool bVar8;
  long *plVar9;
  uint extraout_w8;
  int extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  uint uVar10;
  uint extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  uint extraout_w8_11;
  uint extraout_w8_12;
  uint extraout_w8_13;
  uint extraout_w8_14;
  uint extraout_w8_15;
  uint extraout_w8_16;
  uint extraout_w8_17;
  uint extraout_w8_18;
  uint extraout_w8_19;
  uint extraout_w8_20;
  uint extraout_w8_21;
  uint extraout_w8_22;
  int extraout_w8_23;
  uint extraout_w8_24;
  uint extraout_w8_25;
  int extraout_w8_26;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  undefined8 extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  undefined8 extraout_x8_15;
  undefined8 extraout_x8_16;
  undefined8 extraout_x8_17;
  undefined8 extraout_x8_18;
  undefined8 extraout_x8_19;
  undefined8 extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  undefined8 extraout_x8_23;
  undefined8 extraout_x8_24;
  undefined8 extraout_x8_25;
  undefined8 extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  int extraout_w9;
  uint uVar11;
  int extraout_w9_00;
  int extraout_w9_01;
  long lVar12;
  long extraout_x9;
  long lVar13;
  long extraout_x9_00;
  long lVar14;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  long extraout_x11_04;
  long extraout_x11_05;
  long extraout_x13;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long *unaff_x19;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  uint uVar22;
  long *unaff_x23;
  long *plVar23;
  long *unaff_x25;
  long *plVar24;
  int *piVar25;
  ulong uVar26;
  long *unaff_x27;
  long *unaff_x28;
  int iVar27;
  undefined4 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  long lVar31;
  uint uStack_11c;
  ulong uStack_f0;
  
  func_0x00010742b848();
  if ((int)*param_2 == 1) {
    func_0x00010742b978();
    uVar10 = 0;
    plVar1 = param_2 + 4;
    uVar4 = *(uint *)(param_2 + 3);
    lVar31 = NEON_fmov(0x3f800000,4);
    auVar30 = NEON_fmov(0x3f800000,4);
    plVar24 = (long *)0x1;
    plVar9 = param_1;
    while( true ) {
      plVar23 = (long *)&UNK_10f414f74;
      uVar7 = uVar10 == (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
      if ((bool)uVar7) break;
      func_0x00010742af24();
      if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
      func_0x00010742b0c0();
      FUN_1074247c4();
      iVar27 = (int)plVar24;
      if ((int)plVar9 == 0) {
        func_0x00010742b1e0();
        if (!(bool)uVar7) goto LAB_107424770;
        iVar18 = (*(uint *)(extraout_x8 + 0x38) &
                 ((int)*(uint *)(extraout_x8 + 0x38) >> 0x1f ^ 0xffffffffU)) + 1;
        while( true ) {
          iVar18 = iVar18 + -1;
          bVar8 = iVar18 == 0;
          if (bVar8) break;
          func_0x00010742af24();
          if ((!bVar8) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
          func_0x00010742b0c0();
          FUN_1074247c4();
          if ((int)plVar9 == 0) {
            func_0x00010742ba84();
LAB_1074211ac:
            func_0x00010742afa0();
            FUN_107424b70();
          }
          else {
            func_0x00010742b0c0();
            FUN_1074247c4();
            if ((int)plVar9 == 0) {
              func_0x00010742ba84();
              goto LAB_1074211ac;
            }
            func_0x00010742b0c0();
            FUN_1074247c4();
            if ((int)plVar9 == 0) {
              func_0x00010742ba84();
              goto LAB_1074211ac;
            }
            func_0x00010742b0c0();
            FUN_1074247c4();
            if ((int)plVar9 == 0) {
              func_0x00010742ba84();
              goto LAB_1074211ac;
            }
            func_0x00010742ad2c();
            if ((int)plVar9 == 0) {
              func_0x00010742ba84();
              plVar9 = param_1;
              func_0x00010742ae60();
            }
            else {
              func_0x00010742ad18();
              if ((int)plVar9 == 0) {
                plVar9 = param_1;
                func_0x00010742ae08();
              }
              else {
                func_0x00010742ae88();
              }
            }
          }
          func_0x00010742b4cc();
          if ((int)plVar9 < 0) {
            return unaff_x23;
          }
        }
        plVar9 = (long *)param_4[4];
        plVar24 = (long *)(ulong)(iVar27 + 2);
        if ((plVar9 != (long *)0x0) && (dVar29 = (double)_atof(), dVar29 < 2.0)) {
          return (long *)0xfffffffd;
        }
      }
      else {
        func_0x00010742b0c0();
        FUN_1074247c4();
        if ((int)plVar9 == 0) {
          func_0x00010742b178();
          FUN_107424d00();
          if ((int)plVar9 < 0) {
            return plVar9;
          }
          plVar24 = plVar9;
          for (unaff_x28 = (long *)0x0; bVar8 = unaff_x28 == (long *)unaff_x19[0xc],
              unaff_x28 < (long *)unaff_x19[0xc]; unaff_x28 = (long *)((long)unaff_x28 + 1)) {
            func_0x00010742ae18();
            if (!bVar8) goto LAB_107424770;
            plVar23 = (long *)0x0;
            unaff_x27 = (long *)(unaff_x19[0xb] + (long)unaff_x28 * 0x60);
            func_0x00010742b414();
            while( true ) {
              bVar8 = (uint)plVar23 == (extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU));
              if (bVar8) break;
              func_0x00010742af24();
              if ((!bVar8) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
              func_0x00010742ad70();
              iVar27 = (int)plVar24;
              if ((int)plVar9 == 0) {
                func_0x00010742afa0();
                FUN_107424b70();
LAB_107421798:
                unaff_x23 = plVar9;
                if ((int)plVar9 < 0) {
                  return plVar9;
                }
              }
              else {
                func_0x00010742b0c0();
                FUN_1074247c4();
                if ((int)plVar9 == 0) {
                  func_0x00010742b178();
                  FUN_107424d00();
                  if ((int)plVar9 < 0) {
                    return plVar9;
                  }
                  uVar26 = 0;
                  unaff_x23 = plVar9;
LAB_1074212d8:
                  bVar8 = uVar26 == unaff_x27[2];
                  if (uVar26 < (ulong)unaff_x27[2]) {
                    func_0x00010742aef8((ulong)unaff_x23 & 0xffffffff);
                    if (bVar8) {
                      iVar27 = 0;
                      piVar25 = (int *)(unaff_x27[1] + extraout_x11 * 0x90);
                      *piVar25 = 5;
                      func_0x00010742ba74();
LAB_107421318:
                      uVar7 = iVar27 == extraout_w8_00;
                      if ((bool)uVar7) goto LAB_1074216a0;
                      unaff_x25 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                      func_0x00010742b244();
                      if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0)) goto LAB_107424770;
                      func_0x00010742b0cc();
                      func_0x00010742bd54();
                      if ((int)plVar9 == 0) {
                        func_0x00010742af44(plVar1);
                        iVar18 = 0;
                        if ((uint)plVar9 < 7) {
                          iVar18 = (uint)plVar9 + 1;
                        }
                        *piVar25 = iVar18;
LAB_1074213d8:
                        uVar10 = (int)unaff_x23 + 2;
                        unaff_x23 = (long *)(ulong)uVar10;
joined_r0x0001074213dc:
                        if ((int)uVar10 < 0) {
                          return unaff_x23;
                        }
LAB_1074213e0:
                        iVar27 = iVar27 + 1;
                        goto LAB_107421318;
                      }
                      func_0x00010742b0cc();
                      func_0x00010742bd3c();
                      if ((int)plVar9 == 0) {
                        func_0x00010742af44();
                        func_0x00010742b184();
                        *(undefined8 *)(piVar25 + 2) = extraout_x8_00;
                        goto LAB_1074213d8;
                      }
                      func_0x00010742b0cc();
                      func_0x00010742bd30();
                      if ((int)plVar9 == 0) {
                        func_0x00010742af44();
                        func_0x00010742b184();
                        *(undefined8 *)(piVar25 + 4) = extraout_x8_01;
                        goto LAB_1074213d8;
                      }
                      func_0x00010742b0cc();
                      func_0x00010742b65c();
                      if ((int)plVar9 == 0) {
                        func_0x00010742ae44();
                        FUN_107424e00();
                      }
                      else {
                        func_0x00010742b0cc();
                        FUN_1074247c4();
                        if ((int)plVar9 == 0) {
                          func_0x00010742b110();
                          FUN_107424d00();
                          if ((int)plVar9 < 0) {
                            return plVar9;
                          }
                          plVar24 = (long *)0x0;
                          uVar26 = 0xffffffffffffffff;
                          while (uVar26 = uVar26 + 1, unaff_x23 = plVar9,
                                uVar26 < *(ulong *)(piVar25 + 0xc)) {
                            plVar24 = plVar24 + 2;
                            func_0x00010742aed4();
                            FUN_107424e00();
                            unaff_x25 = plVar24;
                            if ((int)plVar9 < 0) {
                              return plVar9;
                            }
                          }
                          goto LAB_1074213e0;
                        }
                        plVar9 = unaff_x25;
                        func_0x00010742ad84();
                        if ((int)plVar9 != 0) {
                          plVar9 = unaff_x25;
                          func_0x00010742ad94();
                          if ((int)plVar9 != 0) {
                            func_0x00010742ae54();
                            goto LAB_10742146c;
                          }
                          func_0x00010742b638();
                          if (((bool)uVar7) && (*(long *)(piVar25 + 0x22) == 0)) {
                            uVar10 = *(uint *)(unaff_x25 + 7);
                            piVar25[0x20] = 0;
                            piVar25[0x21] = 0;
                            func_0x00010742b160();
                            *(long **)(piVar25 + 0x22) = plVar9;
                            if (plVar9 == (long *)0x0) {
                              return (long *)0xfffffffe;
                            }
                            unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                            uVar11 = 0;
                            while (uVar7 = uVar11 == (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)),
                                  !(bool)uVar7) {
                              unaff_x25 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                              func_0x00010742b244();
                              if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0)) goto LAB_107424770;
                              func_0x00010742b0cc();
                              FUN_1074247c4();
                              if ((int)plVar9 == 0) {
                                piVar25[0x14] = 1;
                                func_0x00010742b638();
                                if (!(bool)uVar7) goto LAB_107424770;
                                func_0x00010742b6dc();
                                if ((extraout_w8_01 & ((int)extraout_w8_01 >> 0x1f ^ 0xffffffffU))
                                    != 0) {
                                  do {
                                    plVar24 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                    func_0x00010742b618();
                                    if ((!(bool)uVar7) || ((int)plVar24[3] == 0))
                                    goto LAB_107424770;
                                    func_0x00010742b16c();
                                    func_0x00010742b65c();
                                    if ((int)plVar9 == 0) {
                                      func_0x00010742ae44();
                                      FUN_107424e00();
LAB_107421594:
                                      unaff_x23 = plVar9;
                                      if ((int)plVar9 < 0) {
                                        return plVar9;
                                      }
                                    }
                                    else {
                                      func_0x00010742af60();
                                      if ((int)plVar24 != 0) {
                                        func_0x00010742ae54();
                                        plVar9 = plVar24;
                                        goto LAB_107421594;
                                      }
                                      plVar9 = plVar1 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                      func_0x00010742b124();
                                      func_0x00010742b184();
                                      *(undefined8 *)(piVar25 + 0x16) = extraout_x8_02;
                                      unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                    }
                                    unaff_x25 = plVar23;
                                  } while (extraout_w9_01 != 1);
                                }
LAB_107421508:
                                if ((int)unaff_x23 < 0) {
                                  return unaff_x23;
                                }
                              }
                              else {
                                func_0x00010742b0cc();
                                func_0x00010742bd04();
                                if ((int)plVar9 != 0) {
                                  *(long *)(piVar25 + 0x20) = *(long *)(piVar25 + 0x20) + 1;
                                  func_0x00010742ae2c(*(undefined8 *)(piVar25 + 0x22));
                                  unaff_x23 = plVar9;
                                  goto LAB_107421508;
                                }
                                func_0x00010742b638();
                                if (!(bool)uVar7) goto LAB_107424770;
                                func_0x00010742b6dc();
                                iVar18 = (extraout_w8_02 &
                                         ((int)extraout_w8_02 >> 0x1f ^ 0xffffffffU)) + 1;
                                while( true ) {
                                  iVar18 = iVar18 + -1;
                                  bVar8 = iVar18 == 0;
                                  if (bVar8) break;
                                  func_0x00010742b3d8((ulong)unaff_x23 & 0xffffffff);
                                  if ((!bVar8) || ((int)plVar9[3] == 0)) goto LAB_107424770;
                                  FUN_1074247c4();
                                  if ((int)plVar9 == 0) {
                                    if (*(long *)(piVar25 + 0x1c) != 0) goto LAB_107424770;
                                    plVar9 = param_1;
                                    func_0x000107425084(param_1,param_2,(int)unaff_x23 + 1);
                                    if ((int)plVar9 < 0) {
                                      return plVar9;
                                    }
                                    piVar25[0x1e] = 0;
                                    piVar25[0x1f] = 0;
                                    plVar9 = param_1;
                                    FUN_107424920(param_1,0x28);
                                    *(long **)(piVar25 + 0x1c) = plVar9;
                                    plVar9 = param_1;
                                    func_0x000107425084(param_1,param_2,(int)unaff_x23 + 1);
                                    unaff_x25 = param_1;
                                  }
                                  else {
                                    func_0x00010742ae54();
                                  }
                                  unaff_x23 = plVar9;
                                  if ((int)plVar9 < 0) {
                                    return plVar9;
                                  }
                                }
                              }
                              uVar11 = extraout_w9_00 + 1;
                            }
                            goto LAB_1074213e0;
                          }
                          goto LAB_107424770;
                        }
                        func_0x00010742adbc();
                      }
LAB_10742146c:
                      uVar10 = (uint)plVar9;
                      unaff_x23 = plVar9;
                      goto joined_r0x0001074213dc;
                    }
                    goto LAB_107424770;
                  }
                  goto LAB_1074217a0;
                }
                func_0x00010742b0c0();
                func_0x00010742b668();
                if ((int)plVar9 == 0) {
                  func_0x00010742b178();
                  FUN_107424d00();
                  if ((int)plVar9 < 0) {
                    return plVar9;
                  }
                  func_0x00010742b1a8();
                  FUN_107424d80();
                  goto LAB_107421798;
                }
                func_0x00010742ad2c();
                if ((int)plVar9 != 0) {
                  func_0x00010742ad18();
                  if ((int)plVar9 != 0) {
                    uVar26 = (ulong)(iVar27 + 1);
                    goto LAB_107421794;
                  }
                  plVar9 = param_1;
                  func_0x00010742ae08();
                  goto LAB_107421798;
                }
                uVar26 = (ulong)(iVar27 + 1);
                plVar24 = param_2 + uVar26 * 4;
                auVar6 = *(undefined1 (*) [16])(plVar24 + 1);
                unaff_x27[8] = auVar6._8_8_;
                unaff_x27[7] = auVar6._0_8_;
                if ((int)*plVar24 != 1) {
LAB_107421794:
                  plVar9 = param_2;
                  FUN_10742496c(param_2,uVar26);
                  goto LAB_107421798;
                }
                iVar18 = (*(uint *)(plVar24 + 3) &
                         ((int)*(uint *)(plVar24 + 3) >> 0x1f ^ 0xffffffffU)) + 1;
                unaff_x23 = (long *)(ulong)(iVar27 + 2);
                while( true ) {
                  iVar18 = iVar18 + -1;
                  bVar8 = iVar18 == 0;
                  if (bVar8) break;
                  func_0x00010742b3d8((ulong)unaff_x23 & 0xffffffff);
                  if ((!bVar8) || ((int)plVar9[3] == 0)) goto LAB_107424770;
                  FUN_1074247c4();
                  uVar26 = (ulong)((int)unaff_x23 + 1);
                  if (((int)plVar9 == 0) && ((int)param_2[uVar26 * 4] == 2)) {
                    func_0x00010742ae44();
                    func_0x000107424ad0();
                  }
                  else {
                    plVar9 = param_2;
                    FUN_10742496c(param_2,uVar26);
                  }
                  unaff_x23 = plVar9;
                  if ((int)plVar9 < 0) {
                    return plVar9;
                  }
                }
              }
LAB_1074217a0:
              plVar23 = (long *)(ulong)((uint)plVar23 + 1);
              plVar24 = unaff_x23;
            }
            unaff_x19 = param_4;
          }
        }
        else {
          func_0x00010742b0c0();
          FUN_1074247c4();
          if ((int)plVar9 == 0) {
            func_0x00010742b178();
            FUN_107424d00();
            if ((int)plVar9 < 0) {
              return plVar9;
            }
            uVar26 = 0;
            plVar24 = plVar9;
LAB_1074217e4:
            bVar8 = uVar26 == unaff_x19[0x10];
            if (uVar26 < (ulong)unaff_x19[0x10]) {
              func_0x00010742ae18();
              if (bVar8) {
                unaff_x27 = (long *)0x0;
                func_0x00010742b1f4();
LAB_10742180c:
                uVar7 = (uint)unaff_x27 ==
                        (extraout_w8_03 & ((int)extraout_w8_03 >> 0x1f ^ 0xffffffffU));
                if ((bool)uVar7) goto LAB_107421c2c;
                unaff_x23 = param_2 + ((ulong)plVar24 & 0xffffffff) * 4;
                func_0x00010742b2bc();
                if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                func_0x00010742ad70();
                if ((int)plVar9 == 0) {
                  func_0x00010742ada4();
                  unaff_x23 = plVar9;
LAB_107421900:
                  plVar24 = unaff_x23;
                  if ((int)unaff_x23 < 0) {
                    return unaff_x23;
                  }
                }
                else {
                  plVar9 = unaff_x23;
                  func_0x00010742af60();
                  unaff_x25 = plVar1 + ((ulong)plVar24 & 0xffffffff) * 4;
                  if ((int)plVar9 == 0) {
                    func_0x00010742af08();
                    func_0x00010742b184();
                    unaff_x28[6] = extraout_x8_03;
                    unaff_x23 = (long *)(ulong)((int)plVar24 + 2);
                    goto LAB_107421900;
                  }
                  plVar9 = unaff_x23;
                  func_0x00010742af50();
                  if ((int)plVar9 == 0) {
                    func_0x00010742afe8();
                    unaff_x28[3] = (long)plVar9;
                  }
                  else {
                    func_0x00010742b0c0();
                    func_0x00010742bcec();
                    if ((int)plVar9 == 0) {
                      func_0x00010742b0cc();
                      FUN_107425364();
                      *(int *)(unaff_x28 + 1) = (int)plVar9;
                    }
                    else {
                      func_0x00010742b0c0();
                      FUN_1074247c4();
                      if ((int)plVar9 == 0) {
                        func_0x00010742bcbc();
                        *(int *)((long)unaff_x28 + 0xc) = (int)plVar9;
                      }
                      else {
                        func_0x00010742b0c0();
                        func_0x00010742b598();
                        if ((int)plVar9 == 0) {
                          func_0x00010742afe8();
                          unaff_x28[4] = (long)plVar9;
                        }
                        else {
                          func_0x00010742b0c0();
                          func_0x00010742bcc8();
                          if ((int)plVar9 != 0) {
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              *(int *)(unaff_x28 + 7) = 1;
                              func_0x00010742be74();
LAB_107421a08:
                              func_0x00010742b1a8();
                              FUN_107424d80();
                              unaff_x23 = plVar9;
                              goto LAB_107421900;
                            }
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              *(int *)((long)unaff_x28 + 0x7c) = 1;
                              func_0x00010742be74();
                              goto LAB_107421a08;
                            }
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              *(int *)(unaff_x28 + 0x18) = 1;
                              func_0x00010742b6d0();
                              if ((bool)uVar7) {
                                func_0x00010742be2c();
                                for (uVar10 = 0;
                                    uVar7 = uVar10 == (extraout_w8_04 &
                                                      ((int)extraout_w8_04 >> 0x1f ^ 0xffffffffU)),
                                    !(bool)uVar7; uVar10 = uVar10 + 1) {
                                  unaff_x25 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                  func_0x00010742b244();
                                  if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                  goto LAB_107424770;
                                  func_0x00010742b0cc();
                                  func_0x00010742b598();
                                  if ((int)plVar9 == 0) {
                                    func_0x00010742b944();
                                    unaff_x28[0x19] = (long)plVar9;
                                    unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
LAB_107421aa0:
                                    if ((int)unaff_x23 < 0) {
                                      return unaff_x23;
                                    }
                                  }
                                  else {
                                    func_0x00010742b0cc();
                                    func_0x00010742bd3c();
                                    if ((int)plVar9 == 0) {
                                      func_0x00010742b638();
                                      if (!(bool)uVar7) goto LAB_107424770;
                                      func_0x00010742b6dc();
                                      for (uVar11 = extraout_w8_05 &
                                                    ((int)extraout_w8_05 >> 0x1f ^ 0xffffffffU);
                                          uVar11 != 0; uVar11 = uVar11 - 1) {
                                        func_0x00010742af80();
                                        if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                        goto LAB_107424770;
                                        plVar9 = unaff_x25;
                                        func_0x00010742af60();
                                        iVar27 = (int)plVar9;
                                        func_0x00010742bb8c();
                                        if (iVar27 == 0) {
                                          plVar9 = plVar24;
                                          func_0x00010742b124();
                                          func_0x00010742b184();
                                          unaff_x28[0x1a] = extraout_x8_04;
LAB_107421b3c:
                                          unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                        }
                                        else {
                                          plVar9 = unaff_x25;
                                          func_0x00010742af50();
                                          if ((int)plVar9 == 0) {
                                            func_0x00010742b12c();
                                            func_0x000107425300();
                                            unaff_x28[0x1b] = (long)plVar9;
                                            goto LAB_107421b3c;
                                          }
                                          func_0x00010742b0cc();
                                          func_0x00010742bcec();
                                          if ((int)plVar9 == 0) {
                                            func_0x00010742b12c();
                                            FUN_107425364();
                                            *(int *)(unaff_x28 + 0x1c) = (int)plVar9;
                                            goto LAB_107421b3c;
                                          }
                                          func_0x00010742ae54();
                                          unaff_x23 = plVar9;
                                          if ((int)plVar9 < 0) {
                                            return plVar9;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      func_0x00010742b0cc();
                                      FUN_1074247c4();
                                      if ((int)plVar9 != 0) {
                                        func_0x00010742ae54();
                                        unaff_x23 = plVar9;
                                        goto LAB_107421aa0;
                                      }
                                      func_0x00010742b638();
                                      if (!(bool)uVar7) goto LAB_107424770;
                                      func_0x00010742b6dc();
                                      for (uVar11 = extraout_w8_06 &
                                                    ((int)extraout_w8_06 >> 0x1f ^ 0xffffffffU);
                                          plVar24 = (long *)(ulong)uVar11, uVar11 != 0;
                                          uVar11 = uVar11 - 1) {
                                        plVar9 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                        func_0x00010742b618();
                                        if ((!(bool)uVar7) || ((int)plVar9[3] == 0))
                                        goto LAB_107424770;
                                        plVar24 = plVar9;
                                        func_0x00010742af60();
                                        unaff_x25 = plVar1 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                        if ((int)plVar24 == 0) {
                                          func_0x00010742af08();
                                          func_0x00010742b184();
                                          unaff_x28[0x1d] = extraout_x8_05;
                                          plVar9 = plVar24;
LAB_107421bc0:
                                          unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                        }
                                        else {
                                          func_0x00010742af50();
                                          if ((int)plVar9 == 0) {
                                            func_0x00010742afe8();
                                            unaff_x28[0x1e] = (long)plVar9;
                                            goto LAB_107421bc0;
                                          }
                                          func_0x00010742ae54();
                                          unaff_x23 = plVar9;
                                          if ((int)plVar9 < 0) {
                                            return plVar9;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_107421900;
                              }
                              goto LAB_107424770;
                            }
                            func_0x00010742ad2c();
                            if ((int)plVar9 == 0) {
                              plVar9 = param_1;
                              func_0x00010742ae60();
                              unaff_x23 = plVar9;
                            }
                            else {
                              func_0x00010742ad18();
                              if ((int)plVar9 == 0) {
                                plVar9 = param_1;
                                func_0x00010742ae08();
                                unaff_x23 = plVar9;
                              }
                              else {
                                func_0x00010742ae88();
                                unaff_x23 = plVar9;
                              }
                            }
                            goto LAB_107421900;
                          }
                          func_0x00010742b0cc();
                          FUN_1074247c4();
                          if ((int)plVar9 == 0) {
                            iVar27 = 1;
                          }
                          else {
                            func_0x00010742b0cc();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              iVar27 = 2;
                            }
                            else {
                              func_0x00010742b0cc();
                              FUN_1074247c4();
                              if ((int)plVar9 == 0) {
                                iVar27 = 3;
                              }
                              else {
                                func_0x00010742b0cc();
                                FUN_1074247c4();
                                if ((int)plVar9 == 0) {
                                  iVar27 = 4;
                                }
                                else {
                                  func_0x00010742b0cc();
                                  FUN_1074247c4();
                                  if ((int)plVar9 == 0) {
                                    iVar27 = 5;
                                  }
                                  else {
                                    func_0x00010742b0cc();
                                    FUN_1074247c4();
                                    if ((int)plVar9 == 0) {
                                      iVar27 = 6;
                                    }
                                    else {
                                      func_0x00010742b0cc();
                                      FUN_1074247c4();
                                      if ((int)plVar9 != 0) goto LAB_107421c20;
                                      iVar27 = 7;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          *(int *)(unaff_x28 + 2) = iVar27;
                        }
                      }
                    }
                  }
LAB_107421c20:
                  plVar24 = (long *)(ulong)((int)plVar24 + 2);
                }
                unaff_x27 = (long *)(ulong)((uint)unaff_x27 + 1);
                goto LAB_10742180c;
              }
              goto LAB_107424770;
            }
            goto LAB_107421c50;
          }
          func_0x00010742b0c0();
          FUN_1074247c4();
          if ((int)plVar9 == 0) {
            func_0x00010742b178();
            FUN_107424d00();
            if ((int)plVar9 < 0) {
              return plVar9;
            }
            uVar26 = 0;
            plVar24 = plVar9;
            while (bVar8 = uVar26 == unaff_x19[0x12], uVar26 < (ulong)unaff_x19[0x12]) {
              func_0x00010742ae18();
              if (!bVar8) goto LAB_107424770;
              unaff_x27 = (long *)0x0;
              func_0x00010742b1f4();
              while( true ) {
                uVar7 = (uint)unaff_x27 ==
                        (extraout_w8_07 & ((int)extraout_w8_07 >> 0x1f ^ 0xffffffffU));
                if ((bool)uVar7) break;
                plVar21 = param_2 + ((ulong)plVar24 & 0xffffffff) * 4;
                func_0x00010742b2bc();
                if ((!(bool)uVar7) || ((int)plVar21[3] == 0)) goto LAB_107424770;
                func_0x00010742ad70();
                if ((int)plVar9 == 0) {
                  func_0x00010742ada4();
LAB_107421d58:
                  unaff_x23 = plVar9;
                  if ((int)plVar9 < 0) {
                    return plVar9;
                  }
                }
                else {
                  func_0x00010742b0c0();
                  iVar27 = (int)plVar9;
                  func_0x00010742bc88();
                  unaff_x25 = plVar1 + ((ulong)plVar24 & 0xffffffff) * 4;
                  iVar18 = (int)plVar24;
                  if (iVar27 == 0) {
                    func_0x00010742af08();
                    func_0x00010742b184();
                    unaff_x28[1] = extraout_x8_06;
                    plVar9 = (long *)(ulong)(iVar18 + 2);
                    goto LAB_107421d58;
                  }
                  plVar9 = plVar21;
                  func_0x00010742af50();
                  if ((int)plVar9 == 0) {
                    func_0x00010742afe8();
                    unaff_x28[2] = (long)plVar9;
LAB_107421dac:
                    unaff_x23 = (long *)(ulong)(iVar18 + 2);
                  }
                  else {
                    func_0x00010742b0c0();
                    func_0x00010742b570();
                    if ((int)plVar9 == 0) {
                      func_0x00010742afe8();
                      unaff_x28[3] = (long)plVar9;
                      goto LAB_107421dac;
                    }
                    func_0x00010742b0c0();
                    func_0x00010742bc7c();
                    if ((int)plVar9 == 0) {
                      func_0x00010742afe8();
                      unaff_x28[4] = (long)plVar9;
                      goto LAB_107421dac;
                    }
                    func_0x00010742b0c0();
                    func_0x00010742bc5c();
                    if ((int)plVar9 == 0) {
                      func_0x00010742af08();
                      uVar10 = 2;
                      if ((int)plVar9 != 0x8892) {
                        uVar10 = (uint)((int)plVar9 == 0x8893);
                      }
                      *(uint *)(unaff_x28 + 5) = uVar10;
                      goto LAB_107421dac;
                    }
                    func_0x00010742ad2c();
                    if ((int)plVar9 == 0) {
                      func_0x00010742adbc();
                      goto LAB_107421d58;
                    }
                    func_0x00010742ad18();
                    if ((int)plVar9 != 0) {
                      func_0x00010742ae88();
                      goto LAB_107421d58;
                    }
                    func_0x00010742b6d0();
                    if ((!(bool)uVar7) || (unaff_x28[0x12] != 0)) goto LAB_107424770;
                    uVar10 = *(uint *)(plVar21 + 7);
                    unaff_x28[0x11] = 0;
                    func_0x00010742b160();
                    unaff_x28[0x12] = (long)plVar9;
                    if (plVar9 == (long *)0x0) {
                      return (long *)0xfffffffe;
                    }
                    uVar11 = 0;
                    unaff_x23 = (long *)(ulong)(iVar18 + 2);
                    while (bVar8 = uVar11 == (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)), !bVar8)
                    {
                      func_0x00010742b53c((ulong)unaff_x23 & 0xffffffff);
                      if ((!bVar8) || ((int)plVar23[3] == 0)) goto LAB_107424770;
                      func_0x00010742b16c();
                      FUN_1074247c4();
                      if ((int)plVar9 == 0) {
                        *(int *)(unaff_x28 + 7) = 1;
                        uVar7 = (int)plVar23[4] == 1;
                        if (!(bool)uVar7) goto LAB_107424770;
                        unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                        for (uVar20 = *(uint *)(plVar23 + 7) &
                                      ((int)*(uint *)(plVar23 + 7) >> 0x1f ^ 0xffffffffU);
                            plVar23 = (long *)(ulong)uVar20, uVar20 != 0; uVar20 = uVar20 - 1) {
                          iVar27 = (int)plVar9;
                          func_0x00010742af80();
                          if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0)) goto LAB_107424770;
                          func_0x00010742b0cc();
                          func_0x00010742bc88();
                          func_0x00010742bb8c();
                          if (iVar27 == 0) {
                            plVar9 = plVar24;
                            func_0x00010742b124();
                            func_0x00010742b184();
                            unaff_x28[8] = extraout_x8_07;
LAB_10742201c:
                            unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                          }
                          else {
                            plVar9 = unaff_x25;
                            func_0x00010742af50();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b12c();
                              func_0x000107425300();
                              unaff_x28[9] = (long)plVar9;
                              goto LAB_10742201c;
                            }
                            func_0x00010742b0cc();
                            func_0x00010742b570();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b12c();
                              func_0x000107425300();
                              unaff_x28[10] = (long)plVar9;
                              goto LAB_10742201c;
                            }
                            func_0x00010742b0cc();
                            func_0x00010742bc7c();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b12c();
                              func_0x000107425300();
                              unaff_x28[0xb] = (long)plVar9;
                              goto LAB_10742201c;
                            }
                            func_0x00010742b0cc();
                            func_0x00010742b598();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b12c();
                              func_0x000107425300();
                              unaff_x28[0xc] = (long)plVar9;
                              goto LAB_10742201c;
                            }
                            func_0x00010742b0cc();
                            func_0x00010742bd54();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b12c();
                              FUN_1074247c4();
                              if ((int)plVar9 == 0) {
                                iVar27 = 1;
                              }
                              else {
                                func_0x00010742b12c();
                                FUN_1074247c4();
                                if ((int)plVar9 == 0) {
                                  iVar27 = 2;
                                }
                                else {
                                  func_0x00010742b12c();
                                  FUN_1074247c4();
                                  if ((int)plVar9 != 0) goto LAB_10742201c;
                                  iVar27 = 3;
                                }
                              }
                              *(int *)(unaff_x28 + 0xd) = iVar27;
                              goto LAB_10742201c;
                            }
                            func_0x00010742b0cc();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b12c();
                              FUN_1074247c4();
                              if ((int)plVar9 == 0) {
                                iVar27 = 0;
                              }
                              else {
                                func_0x00010742b12c();
                                FUN_1074247c4();
                                if ((int)plVar9 == 0) {
                                  iVar27 = 1;
                                }
                                else {
                                  func_0x00010742b12c();
                                  FUN_1074247c4();
                                  if ((int)plVar9 == 0) {
                                    iVar27 = 2;
                                  }
                                  else {
                                    func_0x00010742b12c();
                                    FUN_1074247c4();
                                    if ((int)plVar9 != 0) goto LAB_10742201c;
                                    iVar27 = 3;
                                  }
                                }
                              }
                              *(int *)((long)unaff_x28 + 0x6c) = iVar27;
                              goto LAB_10742201c;
                            }
                            func_0x00010742ae54();
                            unaff_x23 = plVar9;
                            if ((int)plVar9 < 0) {
                              return plVar9;
                            }
                          }
                        }
                      }
                      else {
                        unaff_x28[0x11] = unaff_x28[0x11] + 1;
                        func_0x00010742ae2c(unaff_x28[0x12]);
                        unaff_x23 = plVar9;
                      }
                      uVar11 = uVar11 + 1;
                      if ((int)unaff_x23 < 0) {
                        return unaff_x23;
                      }
                    }
                  }
                }
                unaff_x27 = (long *)(ulong)((uint)unaff_x27 + 1);
                plVar24 = unaff_x23;
              }
              func_0x00010742bdf8();
              uVar26 = extraout_x11_01;
              unaff_x19 = param_4;
            }
          }
          else {
            func_0x00010742b0c0();
            FUN_1074247c4();
            if ((int)plVar9 == 0) {
              func_0x00010742b090();
              if ((int)plVar9 < 0) {
                return plVar9;
              }
              plVar24 = plVar9;
              for (uVar26 = 0; uVar7 = uVar26 == param_4[0x14], uVar26 < (ulong)param_4[0x14];
                  uVar26 = uVar26 + 1) {
                func_0x00010742ae18();
                if (!(bool)uVar7) goto LAB_107424770;
                unaff_x28 = (long *)(param_4[0x13] + uVar26 * 0x50);
                func_0x00010742b414();
                for (uVar10 = extraout_w8_08 & ((int)extraout_w8_08 >> 0x1f ^ 0xffffffffU);
                    uVar10 != 0; uVar10 = uVar10 - 1) {
                  func_0x00010742b024();
                  if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                  func_0x00010742ad70();
                  if ((int)plVar9 == 0) {
                    func_0x00010742addc();
LAB_1074220f4:
                    FUN_107424b70();
LAB_1074220f8:
                    func_0x00010742b4cc();
                    if ((int)plVar9 < 0) {
                      return unaff_x23;
                    }
                  }
                  else {
                    func_0x00010742b0c0();
                    func_0x00010742b570();
                    if ((int)plVar9 != 0) {
                      func_0x00010742b0c0();
                      func_0x00010742bc20();
                      if ((int)plVar9 == 0) {
                        func_0x00010742ae44();
                        goto LAB_1074220f4;
                      }
                      func_0x00010742ad2c();
                      if ((int)plVar9 == 0) {
                        func_0x00010742bda0();
                        func_0x00010742adbc();
                      }
                      else {
                        func_0x00010742ad18();
                        if ((int)plVar9 == 0) {
                          func_0x00010742adf4();
                        }
                        else {
                          func_0x00010742ae88();
                        }
                      }
                      goto LAB_1074220f8;
                    }
                    func_0x00010742b944();
                    unaff_x28[1] = (long)plVar9;
                    plVar24 = (long *)(ulong)((int)plVar24 + 2);
                  }
                }
              }
            }
            else {
              func_0x00010742b0c0();
              FUN_1074247c4();
              if ((int)plVar9 == 0) {
                func_0x00010742b178();
                FUN_107424d00();
                if ((int)plVar9 < 0) {
                  return plVar9;
                }
                unaff_x27 = (long *)0x0;
                lVar15 = 0x324;
                lVar16 = 0x120;
                lVar17 = 0x110;
                lVar13 = 0x98;
                plVar24 = plVar9;
LAB_107422168:
                if (unaff_x27 < (long *)unaff_x19[0xe]) {
                  if ((int)param_2[((ulong)plVar24 & 0xffffffff) * 4] == 1) {
                    lVar12 = unaff_x19[0xd];
                    plVar23 = (long *)(lVar12 + (long)unaff_x27 * 0x4d0);
                    for (lVar14 = 0; lVar14 != 0x10; lVar14 = lVar14 + 4) {
                      *(undefined4 *)(lVar12 + lVar13 + lVar14) = 0x3f800000;
                    }
                    plVar23[0x15] = lVar31;
                    for (lVar14 = 0; lVar14 != 0x10; lVar14 = lVar14 + 4) {
                      *(undefined4 *)(lVar12 + lVar17 + lVar14) = 0x3f800000;
                    }
                    for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
                      *(undefined4 *)(lVar12 + lVar16 + lVar14) = 0x3f800000;
                    }
                    *(int *)((long)plVar23 + 300) = 0x3f800000;
                    for (lVar14 = 0; lVar14 != 0xc; lVar14 = lVar14 + 4) {
                      *(undefined4 *)(lVar12 + lVar15 + lVar14) = 0x3f800000;
                    }
                    unaff_x28 = (long *)0x0;
                    *(int *)(plVar23 + 0x66) = 0x7f7fffff;
                    *(int *)(plVar23 + 0x93) = 0x3f000000;
                    func_0x00010742b414();
                    plVar21 = plVar23;
LAB_10742224c:
                    uVar7 = (uint)unaff_x28 ==
                            (extraout_w8_09 & ((int)extraout_w8_09 >> 0x1f ^ 0xffffffffU));
                    if ((bool)uVar7) goto LAB_107422f34;
                    unaff_x23 = param_2 + ((ulong)plVar24 & 0xffffffff) * 4;
                    func_0x00010742b2bc();
                    if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                    func_0x00010742ad70();
                    if ((int)plVar9 == 0) {
                      func_0x00010742afa0();
                      FUN_107424b70();
                      unaff_x23 = plVar9;
                    }
                    else {
                      func_0x00010742b0c0();
                      FUN_1074247c4();
                      if ((int)plVar9 == 0) {
                        *(int *)(plVar21 + 1) = 1;
                        func_0x00010742b6d0();
                        if (!(bool)uVar7) goto LAB_107424770;
                        func_0x00010742be2c();
                        for (uVar10 = extraout_w8_10 & ((int)extraout_w8_10 >> 0x1f ^ 0xffffffffU);
                            uVar10 != 0; uVar10 = uVar10 - 1) {
                          func_0x00010742aeac();
                          if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0)) goto LAB_107424770;
                          func_0x00010742b0cc();
                          FUN_1074247c4();
                          plVar21 = plVar1 + (long)param_1 * 4;
                          if ((int)plVar9 == 0) {
                            iVar27 = func_0x00010742afb0();
                            *(int *)(plVar23 + 0x15) = iVar27;
LAB_107422418:
                            unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                            plVar21 = plVar23;
                          }
                          else {
                            func_0x00010742b0cc();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              iVar27 = func_0x00010742afb0();
                              *(int *)((long)plVar23 + 0xac) = iVar27;
                              goto LAB_107422418;
                            }
                            func_0x00010742b0cc();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              func_0x00010742bb80();
                              func_0x00010742b1a8();
                              FUN_107424d80();
                            }
                            else {
                              func_0x00010742b0cc();
                              FUN_1074247c4();
                              if ((int)plVar9 != 0) {
                                func_0x00010742b0cc();
                                FUN_1074247c4();
                                if ((int)plVar9 != 0) {
                                  func_0x00010742b0d8();
                                  plVar21 = plVar23;
                                  goto LAB_10742244c;
                                }
                              }
                              func_0x00010742af38();
                              plVar21 = plVar23;
                            }
LAB_10742244c:
                            unaff_x23 = plVar9;
                            if ((int)plVar9 < 0) {
                              return plVar9;
                            }
                          }
                        }
                      }
                      else {
                        func_0x00010742b0c0();
                        FUN_1074247c4();
                        if ((int)plVar9 == 0) {
                          func_0x00010742aff4();
                          unaff_x23 = plVar9;
                        }
                        else {
                          func_0x00010742b0c0();
                          FUN_1074247c4();
                          if ((int)plVar9 != 0) {
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 != 0) {
                              func_0x00010742b0c0();
                              FUN_1074247c4();
                              if ((int)plVar9 != 0) {
                                func_0x00010742b0c0();
                                FUN_1074247c4();
                                unaff_x25 = plVar1 + ((ulong)plVar24 & 0xffffffff) * 4;
                                if ((int)plVar9 == 0) {
                                  func_0x00010742b0cc();
                                  FUN_1074247c4();
                                  if ((int)plVar9 == 0) {
                                    iVar27 = 0;
                                  }
                                  else {
                                    func_0x00010742b0cc();
                                    FUN_1074247c4();
                                    if ((int)plVar9 == 0) {
                                      iVar27 = 1;
                                    }
                                    else {
                                      func_0x00010742b0cc();
                                      FUN_1074247c4();
                                      if ((int)plVar9 != 0) goto LAB_10742252c;
                                      iVar27 = 2;
                                    }
                                  }
                                  *(int *)((long)plVar21 + 0x494) = iVar27;
                                }
                                else {
                                  func_0x00010742b0c0();
                                  FUN_1074247c4();
                                  if ((int)plVar9 == 0) {
                                    func_0x00010742b0cc();
                                    iVar27 = FUN_10742529c();
                                    *(int *)(plVar21 + 0x93) = iVar27;
                                  }
                                  else {
                                    func_0x00010742b0c0();
                                    FUN_1074247c4();
                                    if ((int)plVar9 != 0) {
                                      func_0x00010742ad2c();
                                      if ((int)plVar9 == 0) {
                                        plVar9 = param_1;
                                        func_0x00010742ae60();
                                        unaff_x23 = plVar9;
                                      }
                                      else {
                                        func_0x00010742ad18();
                                        if ((int)plVar9 != 0) {
                                          func_0x00010742ae88();
                                          unaff_x23 = plVar9;
                                          goto LAB_107422498;
                                        }
                                        func_0x00010742b6d0();
                                        if ((!(bool)uVar7) || (plVar21[0x99] != 0))
                                        goto LAB_107424770;
                                        uVar10 = *(uint *)(unaff_x23 + 7);
                                        plVar9 = param_1;
                                        FUN_107424920(param_1,0x10,(long)(int)uVar10);
                                        plVar21[0x99] = (long)plVar9;
                                        plVar21[0x98] = 0;
                                        if (plVar9 == (long *)0x0) {
                                          return (long *)0xfffffffe;
                                        }
                                        unaff_x23 = (long *)(ulong)((int)plVar24 + 2);
                                        uVar11 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
                                        uStack_11c = 0;
                                        plVar24 = param_1;
                                        while (uStack_11c != uVar11) {
                                          plVar2 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                          uVar7 = (int)*plVar2 == 3;
                                          if ((!(bool)uVar7) || ((int)plVar2[3] == 0))
                                          goto LAB_107424770;
                                          func_0x00010742b12c();
                                          FUN_1074247c4();
                                          if ((int)plVar9 == 0) {
                                            *(int *)((long)plVar21 + 0xc) = 1;
                                            func_0x00010742b45c();
                                            if (!(bool)uVar7) goto LAB_107424770;
                                            func_0x00010742b100();
                                            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                                              func_0x00010742aeac();
                                              if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                              goto LAB_107424770;
                                              func_0x00010742b0cc();
                                              FUN_1074247c4();
                                              if ((int)plVar9 == 0) {
                                                func_0x00010742b1a8();
LAB_107422758:
                                                FUN_107424d80();
LAB_10742275c:
                                                unaff_x23 = plVar9;
                                                if ((int)plVar9 < 0) {
                                                  return plVar9;
                                                }
                                              }
                                              else {
                                                func_0x00010742b0cc();
                                                func_0x00010742bd6c();
                                                if ((int)plVar9 == 0) {
                                                  func_0x00010742b1a8();
                                                  goto LAB_107422758;
                                                }
                                                func_0x00010742b0cc();
                                                FUN_1074247c4();
                                                if ((int)plVar9 != 0) {
                                                  func_0x00010742b0cc();
                                                  FUN_1074247c4();
                                                  if ((int)plVar9 == 0) {
LAB_107422790:
                                                    func_0x00010742af38();
                                                  }
                                                  else {
                                                    func_0x00010742b0cc();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) goto LAB_107422790;
                                                    func_0x00010742b0d8();
                                                  }
                                                  goto LAB_10742275c;
                                                }
                                                iVar27 = func_0x00010742ae78();
                                                *(int *)((long)plVar21 + 300) = iVar27;
                                                unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                              }
                                            }
                                          }
                                          else {
                                            func_0x00010742b12c();
                                            FUN_1074247c4();
                                            if ((int)plVar9 == 0) {
                                              *(int *)(plVar21 + 0x94) = 1;
                                              func_0x00010742ae54();
                                              unaff_x23 = plVar9;
                                            }
                                            else {
                                              func_0x00010742b12c();
                                              FUN_1074247c4();
                                              if ((int)plVar9 == 0) {
                                                *(int *)(plVar21 + 2) = 1;
                                                func_0x00010742b45c();
                                                if (!(bool)uVar7) goto LAB_107424770;
                                                func_0x00010742b100();
                                                plVar21 = plVar23;
                                                for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                                                  func_0x00010742aeac();
                                                  if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                                  goto LAB_107424770;
                                                  func_0x00010742b0cc();
                                                  FUN_1074247c4();
                                                  if ((int)plVar9 == 0) {
                                                    iVar27 = func_0x00010742afb0();
                                                    *(int *)(plVar23 + 0x38) = iVar27;
LAB_107422884:
                                                    unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                                    plVar21 = plVar23;
                                                  }
                                                  else {
                                                    func_0x00010742b0cc();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      iVar27 = func_0x00010742afb0();
                                                      *(int *)((long)plVar23 + 0x1c4) = iVar27;
                                                      goto LAB_107422884;
                                                    }
                                                    func_0x00010742b0cc();
                                                    FUN_1074247c4();
                                                    plVar21 = plVar1 + (long)plVar24 * 4;
                                                    if ((int)plVar9 == 0) {
                                                      func_0x00010742bb80();
LAB_1074228ac:
                                                      func_0x00010742af38();
                                                    }
                                                    else {
                                                      func_0x00010742b0cc();
                                                      FUN_1074247c4();
                                                      if ((int)plVar9 == 0) {
                                                        func_0x00010742bb80();
                                                        goto LAB_1074228ac;
                                                      }
                                                      func_0x00010742b0cc();
                                                      FUN_1074247c4();
                                                      plVar21 = plVar23;
                                                      if ((int)plVar9 == 0) goto LAB_1074228ac;
                                                      func_0x00010742b0d8();
                                                    }
                                                    unaff_x23 = plVar9;
                                                    if ((int)plVar9 < 0) {
                                                      return plVar9;
                                                    }
                                                  }
                                                }
                                              }
                                              else {
                                                func_0x00010742b12c();
                                                FUN_1074247c4();
                                                iVar27 = (int)unaff_x23;
                                                if ((int)plVar9 == 0) {
                                                  *(int *)((long)plVar23 + 0x1c) = 1;
                                                  func_0x00010742b45c();
                                                  if (!(bool)uVar7) goto LAB_107424770;
                                                  uVar10 = *(uint *)(plVar2 + 7);
                                                  unaff_x23 = (long *)(ulong)(iVar27 + 2);
                                                  *(int *)(plVar23 + 0x39) = 0x3fc00000;
                                                  for (uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^
                                                                         0xffffffffU);
                                                      plVar21 = plVar23, uVar10 != 0;
                                                      uVar10 = uVar10 - 1) {
                                                    plVar24 = (long *)((ulong)unaff_x23 & 0xffffffff
                                                                      );
                                                    plVar9 = param_2 + (long)plVar24 * 4;
                                                    func_0x00010742b444();
                                                    if ((!(bool)uVar7) || ((int)plVar9[3] == 0))
                                                    goto LAB_107424770;
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      iVar27 = func_0x00010742ae78();
                                                      *(int *)(plVar23 + 0x39) = iVar27;
                                                      unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2
                                                                                 );
                                                    }
                                                    else {
                                                      func_0x00010742ae54();
                                                      unaff_x23 = plVar9;
                                                      if ((int)plVar9 < 0) {
                                                        return plVar9;
                                                      }
                                                    }
                                                  }
                                                }
                                                else {
                                                  func_0x00010742b12c();
                                                  FUN_1074247c4();
                                                  if ((int)plVar9 == 0) {
                                                    *(int *)(plVar23 + 4) = 1;
                                                    func_0x00010742b45c();
                                                    if (!(bool)uVar7) goto LAB_107424770;
                                                    uVar10 = *(uint *)(plVar2 + 7);
                                                    *(int *)((long)plVar23 + 0x23c) = 0x3f800000;
                                                    for (lVar14 = 0; lVar14 != 0xc;
                                                        lVar14 = lVar14 + 4) {
                                                      *(undefined4 *)
                                                       (extraout_x9 + extraout_x13 + lVar14) =
                                                           0x3f800000;
                                                    }
                                                    unaff_x23 = (long *)(ulong)(iVar27 + 2);
                                                    uVar10 = (uVar10 & ((int)uVar10 >> 0x1f ^
                                                                       0xffffffffU)) + 1;
                                                    while( true ) {
                                                      uVar10 = uVar10 - 1;
                                                      bVar8 = uVar10 == 0;
                                                      plVar21 = plVar23;
                                                      if (bVar8) break;
                                                      func_0x00010742aeac();
                                                      if ((!bVar8) || ((int)unaff_x25[3] == 0))
                                                      goto LAB_107424770;
                                                      func_0x00010742b0cc();
                                                      func_0x00010742bd6c();
                                                      if ((int)plVar9 == 0) {
                                                        iVar27 = func_0x00010742ae78();
                                                        *(int *)((long)plVar23 + 0x23c) = iVar27;
                                                        unaff_x23 = (long *)(ulong)((int)unaff_x23 +
                                                                                   2);
                                                      }
                                                      else {
                                                        func_0x00010742b0cc();
                                                        FUN_1074247c4();
                                                        if ((int)plVar9 == 0) {
                                                          func_0x00010742bb80();
                                                          func_0x00010742aff4();
                                                          unaff_x23 = plVar9;
                                                        }
                                                        else {
                                                          func_0x00010742b0cc();
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 == 0) {
                                                            func_0x00010742bb80();
                                                          }
                                                          else {
                                                            func_0x00010742b0cc();
                                                            FUN_1074247c4();
                                                            if ((int)plVar9 != 0) {
                                                              func_0x00010742b0d8();
                                                              unaff_x23 = plVar9;
                                                              goto LAB_107422a3c;
                                                            }
                                                          }
                                                          func_0x00010742af38();
                                                          unaff_x23 = plVar9;
                                                        }
                                                      }
LAB_107422a3c:
                                                      if ((int)unaff_x23 < 0) {
                                                        return unaff_x23;
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    func_0x00010742b12c();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      *(int *)((long)plVar23 + 0x14) = 1;
                                                      func_0x00010742b45c();
                                                      if (!(bool)uVar7) goto LAB_107424770;
                                                      func_0x00010742b100();
                                                      for (; plVar21 = plVar23, uVar10 != 0;
                                                          uVar10 = uVar10 - 1) {
                                                        plVar24 = (long *)((ulong)unaff_x23 &
                                                                          0xffffffff);
                                                        func_0x00010742b618();
                                                        if ((!(bool)uVar7) ||
                                                           ((int)param_2[(long)plVar24 * 4 + 3] == 0
                                                           )) goto LAB_107424770;
                                                        func_0x00010742b16c();
                                                        FUN_1074247c4();
                                                        if ((int)plVar9 == 0) {
                                                          iVar27 = func_0x00010742ae78();
                                                          *(int *)(plVar23 + 0x5d) = iVar27;
                                                          unaff_x23 = (long *)(ulong)((int)unaff_x23
                                                                                     + 2);
                                                        }
                                                        else {
                                                          func_0x00010742b16c();
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 == 0) {
                                                            func_0x00010742af38();
                                                          }
                                                          else {
                                                            func_0x00010742b0d8();
                                                          }
                                                          unaff_x23 = plVar9;
                                                          if ((int)plVar9 < 0) {
                                                            return plVar9;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      func_0x00010742b12c();
                                                      FUN_1074247c4();
                                                      if ((int)plVar9 == 0) {
                                                        *(int *)(plVar23 + 3) = 1;
                                                        func_0x00010742b45c();
                                                        if (!(bool)uVar7) goto LAB_107424770;
                                                        func_0x00010742b100();
                                                        for (; plVar21 = plVar23, uVar10 != 0;
                                                            uVar10 = uVar10 - 1) {
                                                          func_0x00010742aeac();
                                                          if ((!(bool)uVar7) ||
                                                             ((int)unaff_x25[3] == 0))
                                                          goto LAB_107424770;
                                                          func_0x00010742b0cc();
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 == 0) {
                                                            iVar27 = func_0x00010742aea0(plVar1);
                                                            *(int *)(plVar23 + 100) = iVar27;
LAB_107422b64:
                                                            unaff_x23 = (long *)(ulong)((int)
                                                  unaff_x23 + 2);
                                                  }
                                                  else {
                                                    func_0x00010742b0cc();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      func_0x00010742af38();
                                                    }
                                                    else {
                                                      func_0x00010742b0cc();
                                                      FUN_1074247c4();
                                                      if ((int)plVar9 == 0) {
                                                        func_0x00010742aff4();
                                                      }
                                                      else {
                                                        func_0x00010742b0cc();
                                                        FUN_1074247c4();
                                                        if ((int)plVar9 == 0) {
                                                          iVar27 = func_0x00010742aea0();
                                                          *(int *)(plVar23 + 0x66) = iVar27;
                                                          goto LAB_107422b64;
                                                        }
                                                        func_0x00010742ae54();
                                                      }
                                                    }
                                                    unaff_x23 = plVar9;
                                                    if ((int)plVar9 < 0) {
                                                      return plVar9;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010742b12c();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      *(int *)((long)plVar23 + 0x24) = 1;
                                                      func_0x00010742b45c();
                                                      if (!(bool)uVar7) goto LAB_107424770;
                                                      func_0x00010742b100();
                                                      for (; plVar21 = plVar23, uVar10 != 0;
                                                          uVar10 = uVar10 - 1) {
                                                        func_0x00010742aeac();
                                                        if ((!(bool)uVar7) ||
                                                           ((int)unaff_x25[3] == 0))
                                                        goto LAB_107424770;
                                                        func_0x00010742b0cc();
                                                        FUN_1074247c4();
                                                        if ((int)plVar9 == 0) {
                                                          func_0x00010742aff4();
LAB_107422c60:
                                                          unaff_x23 = plVar9;
                                                          if ((int)plVar9 < 0) {
                                                            return plVar9;
                                                          }
                                                        }
                                                        else {
                                                          func_0x00010742b0cc();
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 == 0) {
LAB_107422c5c:
                                                            func_0x00010742af38();
                                                            goto LAB_107422c60;
                                                          }
                                                          func_0x00010742b0cc();
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 != 0) {
                                                            func_0x00010742b0cc();
                                                            FUN_1074247c4();
                                                            if ((int)plVar9 != 0) {
                                                              func_0x00010742b0d8();
                                                              goto LAB_107422c60;
                                                            }
                                                            goto LAB_107422c5c;
                                                          }
                                                          iVar27 = func_0x00010742ae78();
                                                          *(int *)(plVar23 + 0x56) = iVar27;
                                                          unaff_x23 = (long *)(ulong)((int)unaff_x23
                                                                                     + 2);
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      func_0x00010742b12c();
                                                      FUN_1074247c4();
                                                      if ((int)plVar9 == 0) {
                                                        *(int *)(plVar23 + 5) = 1;
                                                        func_0x00010742b45c();
                                                        if (!(bool)uVar7) goto LAB_107424770;
                                                        uVar20 = *(uint *)(plVar2 + 7);
                                                        unaff_x23 = (long *)(ulong)(iVar27 + 2);
                                                        *(int *)(plVar23 + 0x67) = 0x3f800000;
                                                        for (uVar20 = uVar20 & ((int)uVar20 >> 0x1f
                                                                               ^ 0xffffffffU);
                                                            uVar10 = 0, plVar21 = plVar23,
                                                            uVar20 != 0; uVar20 = uVar20 - 1) {
                                                          plVar24 = (long *)((ulong)unaff_x23 &
                                                                            0xffffffff);
                                                          plVar9 = param_2 + (long)plVar24 * 4;
                                                          func_0x00010742b444();
                                                          if ((!(bool)uVar7) ||
                                                             ((int)plVar9[3] == 0))
                                                          goto LAB_107424770;
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 == 0) {
                                                            iVar27 = func_0x00010742ae78();
                                                            *(int *)(plVar23 + 0x67) = iVar27;
                                                            unaff_x23 = (long *)(ulong)((int)
                                                  unaff_x23 + 2);
                                                  }
                                                  else {
                                                    func_0x00010742ae54();
                                                    unaff_x23 = plVar9;
                                                    if ((int)plVar9 < 0) {
                                                      return plVar9;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010742b12c();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      *(int *)((long)plVar23 + 0x2c) = 1;
                                                      func_0x00010742b45c();
                                                      if (!(bool)uVar7) goto LAB_107424770;
                                                      uVar20 = *(uint *)(plVar2 + 7);
                                                      unaff_x23 = (long *)(ulong)(iVar27 + 2);
                                                      plVar23[0x6f] = 0x42c800003fa66666;
                                                      *(int *)(plVar23 + 0x70) = 0x43c80000;
                                                      for (uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^
                                                                             0xffffffffU);
                                                          uVar10 = 0, plVar21 = plVar23, uVar20 != 0
                                                          ; uVar20 = uVar20 - 1) {
                                                        func_0x00010742aeac();
                                                        if ((!(bool)uVar7) ||
                                                           ((int)unaff_x25[3] == 0))
                                                        goto LAB_107424770;
                                                        func_0x00010742b0cc();
                                                        FUN_1074247c4();
                                                        if ((int)plVar9 == 0) {
                                                          iVar27 = func_0x00010742aea0(plVar1);
                                                          *(int *)(plVar23 + 0x68) = iVar27;
LAB_107422dfc:
                                                          unaff_x23 = (long *)(ulong)((int)unaff_x23
                                                                                     + 2);
                                                        }
                                                        else {
                                                          func_0x00010742b0cc();
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 != 0) {
                                                            func_0x00010742b0cc();
                                                            FUN_1074247c4();
                                                            if ((int)plVar9 == 0) {
                                                              iVar27 = func_0x00010742aea0();
                                                              *(int *)(plVar23 + 0x6f) = iVar27;
                                                            }
                                                            else {
                                                              func_0x00010742b0cc();
                                                              FUN_1074247c4();
                                                              if ((int)plVar9 == 0) {
                                                                iVar27 = func_0x00010742aea0();
                                                                *(int *)((long)plVar23 + 0x37c) =
                                                                     iVar27;
                                                              }
                                                              else {
                                                                func_0x00010742b0cc();
                                                                FUN_1074247c4();
                                                                if ((int)plVar9 != 0) {
                                                                  func_0x00010742b0cc();
                                                                  FUN_1074247c4();
                                                                  if ((int)plVar9 == 0)
                                                                  goto LAB_107422dcc;
                                                                  func_0x00010742b0d8();
                                                                  goto LAB_107422dd0;
                                                                }
                                                                iVar27 = func_0x00010742aea0();
                                                                *(int *)(plVar23 + 0x70) = iVar27;
                                                              }
                                                            }
                                                            goto LAB_107422dfc;
                                                          }
LAB_107422dcc:
                                                          func_0x00010742af38();
LAB_107422dd0:
                                                          unaff_x23 = plVar9;
                                                          if ((int)plVar9 < 0) {
                                                            return plVar9;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      func_0x00010742b12c();
                                                      FUN_1074247c4();
                                                      if ((int)plVar9 == 0) {
                                                        *(int *)(plVar23 + 6) = 1;
                                                        func_0x00010742b45c();
                                                        if (!(bool)uVar7) goto LAB_107424770;
                                                        func_0x00010742b100();
                                                        for (; plVar21 = plVar23, uVar10 != 0;
                                                            uVar10 = uVar10 - 1) {
                                                          func_0x00010742aeac();
                                                          if ((!(bool)uVar7) ||
                                                             ((int)unaff_x25[3] == 0))
                                                          goto LAB_107424770;
                                                          func_0x00010742b0cc();
                                                          FUN_1074247c4();
                                                          if ((int)plVar9 == 0) {
                                                            iVar27 = func_0x00010742afb0(plVar1);
                                                            *(int *)(plVar23 + 0x77) = iVar27;
LAB_107422ea0:
                                                            unaff_x23 = (long *)(ulong)((int)
                                                  unaff_x23 + 2);
                                                  }
                                                  else {
                                                    func_0x00010742b0cc();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      iVar27 = func_0x00010742afb0();
                                                      *(int *)((long)plVar23 + 0x3bc) = iVar27;
                                                      goto LAB_107422ea0;
                                                    }
                                                    func_0x00010742b0cc();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      func_0x00010742af38();
                                                    }
                                                    else {
                                                      func_0x00010742b0d8();
                                                    }
                                                    unaff_x23 = plVar9;
                                                    if ((int)plVar9 < 0) {
                                                      return plVar9;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    func_0x00010742b12c();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      *(int *)((long)plVar23 + 0x34) = 1;
                                                      func_0x00010742b45c();
                                                      if (!(bool)uVar7) goto LAB_107424770;
                                                      func_0x00010742b100();
                                                      for (; plVar21 = plVar23, uVar10 != 0;
                                                          uVar10 = uVar10 - 1) {
                                                        plVar24 = (long *)((ulong)unaff_x23 &
                                                                          0xffffffff);
                                                        plVar9 = param_2 + (long)plVar24 * 4;
                                                        func_0x00010742b444();
                                                        if ((!(bool)uVar7) || ((int)plVar9[3] == 0))
                                                        goto LAB_107424770;
                                                        FUN_1074247c4();
                                                        if ((int)plVar9 == 0) {
                                                          iVar27 = func_0x00010742ae78();
                                                          *(int *)(plVar23 + 0x7e) = iVar27;
                                                          unaff_x23 = (long *)(ulong)((int)unaff_x23
                                                                                     + 2);
                                                        }
                                                        else {
                                                          func_0x00010742ae54();
                                                          unaff_x23 = plVar9;
                                                          if ((int)plVar9 < 0) {
                                                            return plVar9;
                                                          }
                                                        }
                                                      }
                                                    }
                                                    else {
                                                      plVar23[0x98] = plVar23[0x98] + 1;
                                                      func_0x00010742ae2c(plVar23[0x99]);
                                                      unaff_x23 = plVar9;
                                                      plVar21 = plVar23;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          uStack_11c = uStack_11c + 1;
                                          if ((int)unaff_x23 < 0) {
                                            return unaff_x23;
                                          }
                                        }
                                      }
                                      goto LAB_107422498;
                                    }
                                    func_0x00010742bcbc();
                                    *(int *)((long)plVar21 + 0x49c) = (int)plVar9;
                                  }
                                }
LAB_10742252c:
                                unaff_x23 = (long *)(ulong)((int)plVar24 + 2);
                                goto LAB_107422498;
                              }
                            }
                          }
                          func_0x00010742af38();
                          unaff_x23 = plVar9;
                        }
                      }
                    }
LAB_107422498:
                    unaff_x28 = (long *)(ulong)((uint)unaff_x28 + 1);
                    plVar24 = unaff_x23;
                    if ((int)unaff_x23 < 0) {
                      return unaff_x23;
                    }
                    goto LAB_10742224c;
                  }
                  goto LAB_107424770;
                }
                goto LAB_107421c50;
              }
              func_0x00010742b0c0();
              FUN_1074247c4();
              if ((int)plVar9 == 0) {
                func_0x00010742b178();
                FUN_107424d00();
                if ((int)plVar9 < 0) {
                  return plVar9;
                }
                plVar24 = plVar9;
                for (uVar26 = 0; uVar7 = uVar26 == param_4[0x16], uVar26 < (ulong)param_4[0x16];
                    uVar26 = uVar26 + 1) {
                  func_0x00010742ae18();
                  if (!(bool)uVar7) goto LAB_107424770;
                  unaff_x28 = (long *)(param_4[0x15] + uVar26 * 0x48);
                  func_0x00010742b414();
                  for (uVar10 = extraout_w8_11 & ((int)extraout_w8_11 >> 0x1f ^ 0xffffffffU);
                      uVar10 != 0; uVar10 = uVar10 - 1) {
                    func_0x00010742b024();
                    if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                    func_0x00010742b0c0();
                    func_0x00010742bc20();
                    if ((int)plVar9 == 0) {
LAB_107423040:
                      func_0x00010742ae44();
LAB_107423044:
                      FUN_107424b70();
LAB_107423048:
                      func_0x00010742b4cc();
                      if ((int)plVar9 < 0) {
                        return unaff_x23;
                      }
                    }
                    else {
                      plVar9 = unaff_x23;
                      func_0x00010742af60();
                      if ((int)plVar9 != 0) {
                        func_0x00010742b0c0();
                        FUN_1074247c4();
                        if ((int)plVar9 == 0) {
                          func_0x00010742bd94();
                          goto LAB_107423040;
                        }
                        func_0x00010742ad70();
                        if ((int)plVar9 == 0) {
                          func_0x00010742addc();
                          goto LAB_107423044;
                        }
                        func_0x00010742ad2c();
                        if ((int)plVar9 == 0) {
                          func_0x00010742adbc();
                        }
                        else {
                          func_0x00010742ad18();
                          if ((int)plVar9 == 0) {
                            func_0x00010742adf4();
                          }
                          else {
                            func_0x00010742ae88();
                          }
                        }
                        goto LAB_107423048;
                      }
                      plVar9 = param_2 + 0x43d053dd4;
                      func_0x00010742b124();
                      func_0x00010742b184();
                      unaff_x28[2] = extraout_x8_08;
                      plVar24 = (long *)(ulong)((int)plVar24 + 2);
                    }
                  }
                }
              }
              else {
                func_0x00010742b0c0();
                FUN_1074247c4();
                if ((int)plVar9 == 0) {
                  func_0x00010742b090();
                  if ((int)plVar9 < 0) {
                    return plVar9;
                  }
                  uVar26 = 0;
                  plVar24 = plVar9;
LAB_1074230a8:
                  bVar8 = uVar26 == param_4[0x18];
                  if (uVar26 < (ulong)param_4[0x18]) {
                    func_0x00010742ae18();
                    if (bVar8) {
                      uVar10 = 0;
                      unaff_x28 = (long *)(param_4[0x17] + uVar26 * 0x50);
                      func_0x00010742b414();
                      uVar11 = extraout_w8_12 & ((int)extraout_w8_12 >> 0x1f ^ 0xffffffffU);
                      unaff_x25 = (long *)(ulong)uVar11;
LAB_1074230dc:
                      uVar7 = uVar10 == uVar11;
                      if ((bool)uVar7) goto LAB_107423290;
                      func_0x00010742b024();
                      if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                      func_0x00010742ad70();
                      if ((int)plVar9 == 0) {
                        func_0x00010742ada4();
                        unaff_x23 = plVar9;
                      }
                      else {
                        func_0x00010742b0c0();
                        func_0x00010742bce0();
                        plVar23 = plVar1 + (long)plVar23 * 4;
                        iVar27 = (int)plVar24;
                        if ((int)plVar9 == 0) {
                          func_0x00010742af44();
                          func_0x00010742b184();
                          unaff_x28[2] = extraout_x8_09;
                          unaff_x23 = (long *)(ulong)(iVar27 + 2);
                          goto LAB_107423150;
                        }
                        func_0x00010742b0c0();
                        func_0x00010742bcd4();
                        if ((int)plVar9 == 0) {
                          func_0x00010742af44();
                          func_0x00010742b184();
                          unaff_x28[1] = extraout_x8_10;
                          plVar24 = (long *)(ulong)(iVar27 + 2);
                          goto LAB_107423158;
                        }
                        func_0x00010742ad2c();
                        if ((int)plVar9 != 0) {
                          func_0x00010742ad18();
                          if ((int)plVar9 != 0) {
                            func_0x00010742ae88();
                            unaff_x23 = plVar9;
                            goto LAB_107423150;
                          }
                          func_0x00010742b6d0();
                          if (((bool)uVar7) && (unaff_x28[9] == 0)) {
                            uVar20 = *(uint *)(unaff_x23 + 7);
                            func_0x00010742b160();
                            unaff_x28[8] = 0;
                            unaff_x28[9] = (long)plVar9;
                            if (plVar9 == (long *)0x0) {
                              return (long *)0xfffffffe;
                            }
                            unaff_x27 = (long *)0x0;
                            unaff_x23 = (long *)(ulong)(iVar27 + 2);
                            while( true ) {
                              bVar8 = (uint)unaff_x27 ==
                                      (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
                              plVar24 = unaff_x23;
                              if (bVar8) break;
                              func_0x00010742b53c((ulong)unaff_x23 & 0xffffffff);
                              if ((!bVar8) || ((int)plVar23[3] == 0)) goto LAB_107424770;
                              func_0x00010742b16c();
                              FUN_1074247c4();
                              if ((int)plVar9 == 0) {
                                *(int *)(unaff_x28 + 3) = 1;
                                uVar7 = (int)plVar23[4] == 1;
                                if (!(bool)uVar7) goto LAB_107424770;
                                unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                for (uVar19 = *(uint *)(plVar23 + 7) &
                                              ((int)*(uint *)(plVar23 + 7) >> 0x1f ^ 0xffffffffU);
                                    plVar23 = (long *)(ulong)uVar19, uVar19 != 0;
                                    uVar19 = uVar19 - 1) {
                                  plVar9 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                  func_0x00010742b444();
                                  if ((!(bool)uVar7) || ((int)plVar9[3] == 0)) goto LAB_107424770;
                                  func_0x00010742bcd4();
                                  if ((int)plVar9 == 0) {
                                    plVar9 = plVar1 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                    func_0x00010742b124();
                                    func_0x00010742b184();
                                    unaff_x28[4] = extraout_x8_11;
                                    unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                  }
                                  else {
                                    func_0x00010742ae54();
                                    unaff_x23 = plVar9;
                                    if ((int)plVar9 < 0) {
                                      return plVar9;
                                    }
                                  }
                                }
                              }
                              else {
                                unaff_x28[8] = unaff_x28[8] + 1;
                                func_0x00010742ae2c(unaff_x28[9]);
                                unaff_x23 = plVar9;
                                if ((int)plVar9 < 0) {
                                  return plVar9;
                                }
                              }
                              unaff_x27 = (long *)(ulong)((uint)unaff_x27 + 1);
                            }
                            goto LAB_107423158;
                          }
                          goto LAB_107424770;
                        }
                        func_0x00010742bda0();
                        func_0x00010742adbc();
                        unaff_x23 = plVar9;
                      }
LAB_107423150:
                      plVar24 = unaff_x23;
                      if ((int)unaff_x23 < 0) {
                        return unaff_x23;
                      }
LAB_107423158:
                      uVar10 = uVar10 + 1;
                      goto LAB_1074230dc;
                    }
                    goto LAB_107424770;
                  }
                  goto LAB_107421c50;
                }
                func_0x00010742b0c0();
                func_0x00010742bbdc();
                if ((int)plVar9 == 0) {
                  func_0x00010742b0a0();
                  if ((int)plVar9 < 0) {
                    return plVar9;
                  }
                  plVar24 = plVar9;
                  for (uVar26 = 0; uVar7 = uVar26 == param_4[0x1a], uVar26 < (ulong)param_4[0x1a];
                      uVar26 = uVar26 + 1) {
                    func_0x00010742ae18();
                    if (!(bool)uVar7) goto LAB_107424770;
                    unaff_x28 = (long *)(param_4[0x19] + uVar26 * 0x40);
                    unaff_x28[2] = 0x290100002901;
                    func_0x00010742b414();
                    for (uVar10 = extraout_w8_13 & ((int)extraout_w8_13 >> 0x1f ^ 0xffffffffU);
                        uVar10 != 0; uVar10 = uVar10 - 1) {
                      func_0x00010742b024();
                      if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                      func_0x00010742ad70();
                      if ((int)plVar9 == 0) {
                        func_0x00010742ada4();
LAB_107423374:
                        func_0x00010742b4cc();
                        if ((int)plVar9 < 0) {
                          return unaff_x23;
                        }
                      }
                      else {
                        func_0x00010742b0c0();
                        FUN_1074247c4();
                        unaff_x25 = param_2 + 0x43d053dd4;
                        if ((int)plVar9 == 0) {
                          func_0x00010742af08();
                          *(int *)(unaff_x28 + 1) = (int)plVar9;
                        }
                        else {
                          func_0x00010742b0c0();
                          FUN_1074247c4();
                          if ((int)plVar9 == 0) {
                            func_0x00010742af08();
                            *(int *)((long)unaff_x28 + 0xc) = (int)plVar9;
                          }
                          else {
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              func_0x00010742af08();
                              *(int *)(unaff_x28 + 2) = (int)plVar9;
                            }
                            else {
                              func_0x00010742b0c0();
                              FUN_1074247c4();
                              if ((int)plVar9 != 0) {
                                func_0x00010742ad2c();
                                if ((int)plVar9 == 0) {
                                  func_0x00010742bd94();
                                  func_0x00010742adbc();
                                }
                                else {
                                  func_0x00010742ad18();
                                  if ((int)plVar9 == 0) {
                                    func_0x00010742adf4();
                                  }
                                  else {
                                    func_0x00010742ae88();
                                  }
                                }
                                goto LAB_107423374;
                              }
                              func_0x00010742af08();
                              *(int *)((long)unaff_x28 + 0x14) = (int)plVar9;
                            }
                          }
                        }
                        plVar24 = (long *)(ulong)((int)plVar24 + 2);
                      }
                    }
                  }
                }
                else {
                  func_0x00010742b0c0();
                  FUN_1074247c4();
                  if ((int)plVar9 == 0) {
                    func_0x00010742b090();
                    if ((int)plVar9 < 0) {
                      return plVar9;
                    }
                    uVar26 = 0;
                    plVar21 = param_1;
                    plVar24 = plVar9;
                    while (bVar8 = uVar26 == param_4[0x1c], uVar26 < (ulong)param_4[0x1c]) {
                      func_0x00010742ae18();
                      if (!bVar8) goto LAB_107424770;
                      func_0x00010742ba04();
                      func_0x00010742b1f4();
                      uVar10 = extraout_w8_14 & ((int)extraout_w8_14 >> 0x1f ^ 0xffffffffU);
                      unaff_x25 = (long *)(ulong)uVar10;
                      while( true ) {
                        bVar8 = (uint)plVar21 == uVar10;
                        if (bVar8) break;
                        func_0x00010742b024();
                        if ((!bVar8) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                        func_0x00010742ad70();
                        if ((int)plVar9 == 0) {
                          func_0x00010742ada4();
                          unaff_x23 = plVar9;
LAB_1074234ac:
                          plVar24 = unaff_x23;
                          if ((int)unaff_x23 < 0) {
                            return unaff_x23;
                          }
                        }
                        else {
                          func_0x00010742b0c0();
                          FUN_1074247c4();
                          if ((int)plVar9 == 0) {
                            func_0x00010742b9a4();
                            func_0x00010742b110();
                            func_0x00010742bcb4();
                            if ((int)plVar9 < 0) {
                              return plVar9;
                            }
                            func_0x00010742be18();
                            for (plVar23 = (long *)0x0; unaff_x23 = plVar24, unaff_x27 != plVar23;
                                plVar23 = (long *)((long)plVar23 + 1)) {
                              func_0x00010742b0c0();
                              FUN_107424828();
                              func_0x00010742b184();
                              *(undefined8 *)(unaff_x28[1] + (long)plVar23 * 8) = extraout_x8_12;
                            }
                            goto LAB_1074234ac;
                          }
                          func_0x00010742b0c0();
                          FUN_1074247c4();
                          plVar23 = plVar1 + (long)plVar23 * 4;
                          if ((int)plVar9 == 0) {
                            if ((int)*plVar23 != 4) goto LAB_107424770;
                            func_0x00010742af44();
                            func_0x00010742b184();
                            unaff_x28[3] = extraout_x8_13;
                          }
                          else {
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 != 0) {
                              func_0x00010742ad2c();
                              if ((int)plVar9 == 0) {
                                func_0x00010742bda0();
                                func_0x00010742adbc();
                                unaff_x23 = plVar9;
                              }
                              else {
                                func_0x00010742ad18();
                                if ((int)plVar9 == 0) {
                                  func_0x00010742adf4();
                                  unaff_x23 = plVar9;
                                }
                                else {
                                  func_0x00010742ae88();
                                  unaff_x23 = plVar9;
                                }
                              }
                              goto LAB_1074234ac;
                            }
                            if ((int)*plVar23 != 4) goto LAB_107424770;
                            func_0x00010742af44();
                            func_0x00010742b184();
                            unaff_x28[4] = extraout_x8_14;
                          }
                          plVar24 = (long *)(ulong)((int)plVar24 + 2);
                        }
                        plVar21 = (long *)(ulong)((uint)plVar21 + 1);
                      }
                      func_0x00010742bdf8();
                      uVar26 = extraout_x11_02;
                      plVar23 = unaff_x19;
                    }
                  }
                  else {
                    func_0x00010742b0c0();
                    FUN_1074247c4();
                    if ((int)plVar9 == 0) {
                      func_0x00010742b178();
                      FUN_107424d00();
                      if ((int)plVar9 < 0) {
                        return plVar9;
                      }
                      uVar26 = 0;
                      plVar23 = param_1;
                      plVar24 = plVar9;
                      while (bVar8 = uVar26 == param_4[0x1e], uVar26 < (ulong)param_4[0x1e]) {
                        func_0x00010742ae18();
                        if (!bVar8) goto LAB_107424770;
                        func_0x00010742ba04();
                        func_0x00010742b1f4();
                        while( true ) {
                          uVar7 = (uint)plVar23 ==
                                  (extraout_w8_15 & ((int)extraout_w8_15 >> 0x1f ^ 0xffffffffU));
                          if ((bool)uVar7) break;
                          func_0x00010742af24();
                          if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                          func_0x00010742ad70();
                          if ((int)plVar9 == 0) {
                            func_0x00010742ada4();
LAB_107423614:
                            func_0x00010742b4cc();
                            if ((int)plVar9 < 0) {
                              return unaff_x23;
                            }
                          }
                          else {
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b6d0();
                              if ((!(bool)uVar7) || ((int)unaff_x28[1] != 0)) goto LAB_107424770;
                              func_0x00010742be2c();
                              *(int *)(unaff_x28 + 1) = 1;
                              uVar10 = extraout_w8_16 & ((int)extraout_w8_16 >> 0x1f ^ 0xffffffffU);
                              unaff_x27 = (long *)(ulong)uVar10;
                              plVar24 = unaff_x23;
                              if (uVar10 != 0) {
                                do {
                                  func_0x00010742af80();
                                  if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                  goto LAB_107424770;
                                  func_0x00010742b0cc();
                                  FUN_1074247c4();
                                  func_0x00010742bb8c();
                                  if ((int)plVar9 == 0) {
                                    *(int *)(unaff_x28 + 2) = 1;
                                    iVar27 = func_0x00010742aea0();
                                    *(int *)((long)unaff_x28 + 0x14) = iVar27;
LAB_1074236ec:
                                    unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                  }
                                  else {
                                    func_0x00010742b0cc();
                                    FUN_1074247c4();
                                    if ((int)plVar9 == 0) {
                                      iVar27 = func_0x00010742aea0();
                                      *(int *)(unaff_x28 + 3) = iVar27;
                                      goto LAB_1074236ec;
                                    }
                                    func_0x00010742b0cc();
                                    func_0x00010742bca8();
                                    if ((int)plVar9 == 0) {
                                      *(int *)((long)unaff_x28 + 0x1c) = 1;
                                      iVar27 = func_0x00010742aea0();
                                      *(int *)(unaff_x28 + 4) = iVar27;
                                      goto LAB_1074236ec;
                                    }
                                    func_0x00010742b0cc();
                                    func_0x00010742bc9c();
                                    if ((int)plVar9 == 0) {
                                      iVar27 = func_0x00010742aea0();
                                      *(int *)((long)unaff_x28 + 0x24) = iVar27;
                                      goto LAB_1074236ec;
                                    }
                                    plVar9 = unaff_x25;
                                    func_0x00010742ad84();
                                    if ((int)plVar9 == 0) {
                                      func_0x00010742adbc();
                                    }
                                    else {
                                      func_0x00010742ae54();
                                    }
                                    unaff_x23 = plVar9;
                                    if ((int)plVar9 < 0) {
                                      return plVar9;
                                    }
                                  }
                                  uVar10 = (int)unaff_x27 - 1;
                                  unaff_x27 = (long *)(ulong)uVar10;
                                } while (uVar10 != 0);
                                unaff_x27 = (long *)0x0;
                                plVar24 = unaff_x23;
                              }
                            }
                            else {
                              func_0x00010742b0c0();
                              FUN_1074247c4();
                              if ((int)plVar9 != 0) {
                                func_0x00010742ad2c();
                                if ((int)plVar9 == 0) {
                                  func_0x00010742adbc();
                                }
                                else {
                                  func_0x00010742ad18();
                                  if ((int)plVar9 == 0) {
                                    func_0x00010742adf4();
                                  }
                                  else {
                                    func_0x00010742ae88();
                                  }
                                }
                                goto LAB_107423614;
                              }
                              func_0x00010742b6d0();
                              if ((!(bool)uVar7) || ((int)unaff_x28[1] != 0)) goto LAB_107424770;
                              func_0x00010742be2c();
                              *(int *)(unaff_x28 + 1) = 2;
                              uVar10 = extraout_w8_17 & ((int)extraout_w8_17 >> 0x1f ^ 0xffffffffU);
                              unaff_x27 = (long *)(ulong)uVar10;
                              plVar24 = unaff_x23;
                              if (uVar10 != 0) {
                                do {
                                  func_0x00010742af80();
                                  if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                  goto LAB_107424770;
                                  func_0x00010742b0cc();
                                  FUN_1074247c4();
                                  func_0x00010742bb8c();
                                  if ((int)plVar9 == 0) {
                                    iVar27 = func_0x00010742aea0();
                                    *(int *)(unaff_x28 + 2) = iVar27;
LAB_1074237cc:
                                    unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                  }
                                  else {
                                    func_0x00010742b0cc();
                                    FUN_1074247c4();
                                    if ((int)plVar9 == 0) {
                                      iVar27 = func_0x00010742aea0();
                                      *(int *)((long)unaff_x28 + 0x14) = iVar27;
                                      goto LAB_1074237cc;
                                    }
                                    func_0x00010742b0cc();
                                    func_0x00010742bca8();
                                    if ((int)plVar9 == 0) {
                                      iVar27 = func_0x00010742aea0();
                                      *(int *)(unaff_x28 + 3) = iVar27;
                                      goto LAB_1074237cc;
                                    }
                                    func_0x00010742b0cc();
                                    func_0x00010742bc9c();
                                    if ((int)plVar9 == 0) {
                                      iVar27 = func_0x00010742aea0();
                                      *(int *)((long)unaff_x28 + 0x1c) = iVar27;
                                      goto LAB_1074237cc;
                                    }
                                    plVar9 = unaff_x25;
                                    func_0x00010742ad84();
                                    if ((int)plVar9 == 0) {
                                      func_0x00010742adbc();
                                    }
                                    else {
                                      func_0x00010742ae54();
                                    }
                                    unaff_x23 = plVar9;
                                    if ((int)plVar9 < 0) {
                                      return plVar9;
                                    }
                                  }
                                  uVar10 = (int)unaff_x27 - 1;
                                  unaff_x27 = (long *)(ulong)uVar10;
                                } while (uVar10 != 0);
                                unaff_x27 = (long *)0x0;
                                plVar24 = unaff_x23;
                              }
                            }
                          }
                          plVar23 = (long *)(ulong)((uint)plVar23 + 1);
                        }
                        func_0x00010742bdf8();
                        uVar26 = extraout_x11_03;
                      }
                    }
                    else {
                      func_0x00010742b0c0();
                      func_0x00010742bbd0();
                      if ((int)plVar9 == 0) {
                        func_0x00010742b178();
                        FUN_107424d00();
                        if ((int)plVar9 < 0) {
                          return plVar9;
                        }
                        uVar26 = 0;
                        plVar24 = plVar9;
                        while (bVar8 = uVar26 == param_4[0x22], uVar26 < (ulong)param_4[0x22]) {
                          func_0x00010742ae18();
                          if (!bVar8) goto LAB_107424770;
                          lVar13 = param_4[0x21] + extraout_x11_04 * 0x108;
                          *(undefined4 *)(lVar13 + 0x88) = 0x3f800000;
                          *(long *)(lVar13 + 0x80) = auVar30._8_8_;
                          *(long *)(lVar13 + 0x78) = auVar30._0_8_;
                          *(undefined4 *)(lVar13 + 0x9c) = 0x3f800000;
                          *(undefined4 *)(lVar13 + 0xb0) = 0x3f800000;
                          *(undefined4 *)(lVar13 + 0xc4) = 0x3f800000;
                          func_0x00010742b414();
                          unaff_x28 = (long *)(extraout_x10 + -0x78);
                          uVar11 = extraout_w8_18 & ((int)extraout_w8_18 >> 0x1f ^ 0xffffffffU);
                          unaff_x27 = (long *)(ulong)uVar11;
                          for (uVar10 = 0; uVar7 = uVar10 == uVar11, !(bool)uVar7;
                              uVar10 = uVar10 + 1) {
                            unaff_x23 = param_2 + ((ulong)plVar24 & 0xffffffff) * 4;
                            func_0x00010742b2bc();
                            if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                            func_0x00010742ad70();
                            iVar27 = (int)plVar24;
                            if ((int)plVar9 == 0) {
                              func_0x00010742ae44();
                              FUN_107424b70();
                              unaff_x23 = plVar9;
LAB_107423a44:
                              plVar24 = unaff_x23;
                              if ((int)unaff_x23 < 0) {
                                return unaff_x23;
                              }
                            }
                            else {
                              func_0x00010742b0c0();
                              FUN_1074247c4();
                              if ((int)plVar9 == 0) {
                                func_0x00010742b110();
                                FUN_107424d00();
                                iVar27 = (int)plVar9;
                                if (iVar27 < 0) {
                                  return plVar9;
                                }
                                unaff_x25 = *(long **)(extraout_x10 + -0x70);
                                for (plVar24 = (long *)0x0;
                                    unaff_x23 = (long *)(ulong)(uint)(iVar27 + (int)unaff_x25),
                                    unaff_x25 != plVar24; plVar24 = (long *)((long)plVar24 + 1)) {
                                  func_0x00010742b0c0();
                                  FUN_107424828();
                                  func_0x00010742b184();
                                  *(undefined8 *)(*unaff_x28 + (long)plVar24 * 8) = extraout_x8_15;
                                }
                                goto LAB_107423a44;
                              }
                              func_0x00010742b0c0();
                              FUN_1074247c4();
                              unaff_x25 = plVar1 + ((ulong)plVar24 & 0xffffffff) * 4;
                              if ((int)plVar9 == 0) {
                                if ((int)*unaff_x25 == 4) {
                                  func_0x00010742af08();
                                  func_0x00010742b184();
                                  *(undefined8 *)(lVar13 + 0x28) = extraout_x8_16;
                                  unaff_x23 = (long *)(ulong)(iVar27 + 2);
                                  goto LAB_107423a44;
                                }
                                goto LAB_107424770;
                              }
                              func_0x00010742b0c0();
                              FUN_1074247c4();
                              if ((int)plVar9 == 0) {
                                if ((int)*unaff_x25 != 4) goto LAB_107424770;
                                func_0x00010742af08();
                                func_0x00010742b184();
                                *(undefined8 *)(lVar13 + 0x20) = extraout_x8_17;
LAB_107423a88:
                                plVar24 = (long *)(ulong)(iVar27 + 2);
                              }
                              else {
                                func_0x00010742b0c0();
                                FUN_1074247c4();
                                if ((int)plVar9 == 0) {
                                  if ((int)*unaff_x25 == 4) {
                                    func_0x00010742af08();
                                    func_0x00010742b184();
                                    *(undefined8 *)(lVar13 + 0x30) = extraout_x8_18;
                                    goto LAB_107423a88;
                                  }
                                  goto LAB_107424770;
                                }
                                func_0x00010742b0c0();
                                func_0x00010742bc44();
                                if ((int)plVar9 == 0) {
                                  *(undefined4 *)(lVar13 + 0x50) = 1;
                                  func_0x00010742b1a8();
LAB_107423adc:
                                  FUN_107424d80();
                                  unaff_x23 = plVar9;
                                  goto LAB_107423a44;
                                }
                                func_0x00010742b0c0();
                                func_0x00010742b520();
                                if ((int)plVar9 == 0) {
                                  *(undefined4 *)(lVar13 + 0x54) = 1;
                                  func_0x00010742b1a8();
                                  goto LAB_107423adc;
                                }
                                plVar9 = unaff_x23;
                                func_0x00010742b0b0();
                                if ((int)plVar9 == 0) {
                                  *(undefined4 *)(lVar13 + 0x58) = 1;
                                  func_0x00010742b1a8();
                                  goto LAB_107423adc;
                                }
                                func_0x00010742b0c0();
                                FUN_1074247c4();
                                if ((int)plVar9 == 0) {
                                  *(undefined4 *)(lVar13 + 0x5c) = 1;
                                  func_0x00010742b1a8();
                                  goto LAB_107423adc;
                                }
                                func_0x00010742b0c0();
                                func_0x00010742b668();
                                if ((int)plVar9 == 0) {
                                  func_0x00010742b110();
                                  FUN_107424d00();
                                  if ((int)plVar9 < 0) {
                                    return plVar9;
                                  }
                                  func_0x00010742b1a8();
                                  goto LAB_107423adc;
                                }
                                func_0x00010742ad2c();
                                if ((int)plVar9 == 0) {
                                  func_0x00010742adbc();
                                  unaff_x23 = plVar9;
                                  goto LAB_107423a44;
                                }
                                func_0x00010742ad18();
                                if ((int)plVar9 != 0) {
                                  func_0x00010742ae88();
                                  unaff_x23 = plVar9;
                                  goto LAB_107423a44;
                                }
                                func_0x00010742b6d0();
                                if ((!(bool)uVar7) || (*(long *)(lVar13 + 0x100) != 0))
                                goto LAB_107424770;
                                uVar20 = *(uint *)(unaff_x23 + 7);
                                *(undefined8 *)(lVar13 + 0xf8) = 0;
                                func_0x00010742b160();
                                *(long **)(lVar13 + 0x100) = plVar9;
                                if (plVar9 == (long *)0x0) {
                                  return (long *)0xfffffffe;
                                }
                                unaff_x23 = (long *)(ulong)(iVar27 + 2);
                                for (uVar19 = 0;
                                    uVar7 = uVar19 == (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU))
                                    , plVar24 = unaff_x23, !(bool)uVar7; uVar19 = uVar19 + 1) {
                                  unaff_x25 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                  func_0x00010742b244();
                                  if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                  goto LAB_107424770;
                                  func_0x00010742b0cc();
                                  func_0x00010742bc14();
                                  if ((int)plVar9 == 0) {
                                    func_0x00010742b638();
                                    if (!(bool)uVar7) goto LAB_107424770;
                                    func_0x00010742b6dc();
                                    for (uVar5 = extraout_w8_19 &
                                                 ((int)extraout_w8_19 >> 0x1f ^ 0xffffffffU);
                                        unaff_x25 = (long *)(ulong)uVar5, uVar5 != 0;
                                        uVar5 = uVar5 - 1) {
                                      plVar9 = param_2 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                      func_0x00010742b444();
                                      if ((!(bool)uVar7) || ((int)plVar9[3] == 0))
                                      goto LAB_107424770;
                                      FUN_1074247c4();
                                      if ((int)plVar9 == 0) {
                                        plVar9 = plVar1 + ((ulong)unaff_x23 & 0xffffffff) * 4;
                                        func_0x00010742be88();
                                        if (!(bool)uVar7) goto LAB_107424770;
                                        func_0x00010742b124();
                                        func_0x00010742b184();
                                        *(undefined8 *)(lVar13 + 0x38) = extraout_x8_19;
                                        unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                      }
                                      else {
                                        func_0x00010742ae54();
                                        unaff_x23 = plVar9;
                                        if ((int)plVar9 < 0) {
                                          return plVar9;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    func_0x00010742b0cc();
                                    FUN_1074247c4();
                                    if ((int)plVar9 == 0) {
                                      *(undefined4 *)(lVar13 + 0xe0) = 1;
                                      func_0x00010742b638();
                                      if (!(bool)uVar7) goto LAB_107424770;
                                      func_0x00010742b6dc();
                                      unaff_x25 = (long *)(ulong)((extraout_w8_20 &
                                                                  ((int)extraout_w8_20 >> 0x1f ^
                                                                  0xffffffffU)) + 1);
                                      while( true ) {
                                        uVar5 = (int)unaff_x25 - 1;
                                        bVar8 = uVar5 == 0;
                                        unaff_x25 = (long *)(ulong)uVar5;
                                        if (bVar8) break;
                                        func_0x00010742b3d8((ulong)unaff_x23 & 0xffffffff);
                                        if ((!bVar8) || ((int)plVar9[3] == 0)) goto LAB_107424770;
                                        func_0x00010742b65c();
                                        if ((int)plVar9 == 0) {
                                          func_0x00010742ae44();
                                          FUN_107424e00();
                                        }
                                        else {
                                          func_0x00010742ae54();
                                        }
                                        unaff_x23 = plVar9;
                                        if ((int)plVar9 < 0) {
                                          return plVar9;
                                        }
                                      }
                                    }
                                    else {
                                      *(long *)(lVar13 + 0xf8) = *(long *)(lVar13 + 0xf8) + 1;
                                      func_0x00010742ae2c(*(undefined8 *)(lVar13 + 0x100));
                                      unaff_x23 = plVar9;
                                      if ((int)plVar9 < 0) {
                                        return plVar9;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          uVar26 = extraout_x11_04 + 1;
                        }
                      }
                      else {
                        func_0x00010742b0c0();
                        FUN_1074247c4();
                        if ((int)plVar9 == 0) {
                          func_0x00010742b0a0();
                          if ((int)plVar9 < 0) {
                            return plVar9;
                          }
                          uVar26 = 0;
                          plVar23 = param_1;
                          plVar24 = plVar9;
                          while (bVar8 = uVar26 == param_4[0x24], uVar26 < (ulong)param_4[0x24]) {
                            func_0x00010742ae18();
                            if (!bVar8) goto LAB_107424770;
                            func_0x00010742ba04();
                            unaff_x28 = (long *)(*(long *)(extraout_x9_00 + 0x118) +
                                                extraout_x10_00 * 0x40);
                            func_0x00010742b414();
                            while( true ) {
                              bVar8 = (uint)plVar23 ==
                                      (extraout_w8_21 & ((int)extraout_w8_21 >> 0x1f ^ 0xffffffffU))
                              ;
                              if (bVar8) break;
                              func_0x00010742af24();
                              if ((!bVar8) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                              func_0x00010742ad70();
                              if ((int)plVar9 == 0) {
                                func_0x00010742ada4();
                                unaff_x23 = plVar9;
                              }
                              else {
                                func_0x00010742b0c0();
                                func_0x00010742bbd0();
                                if ((int)plVar9 == 0) {
                                  func_0x00010742b9a4();
                                  func_0x00010742b110();
                                  func_0x00010742bcb4();
                                  if ((int)plVar9 < 0) {
                                    return plVar9;
                                  }
                                  func_0x00010742be18();
                                  for (unaff_x25 = (long *)0x0; unaff_x23 = plVar24,
                                      unaff_x27 != unaff_x25;
                                      unaff_x25 = (long *)((long)unaff_x25 + 1)) {
                                    func_0x00010742b0c0();
                                    FUN_107424828();
                                    func_0x00010742b184();
                                    *(undefined8 *)(unaff_x28[1] + (long)unaff_x25 * 8) =
                                         extraout_x8_20;
                                  }
                                }
                                else {
                                  func_0x00010742ad2c();
                                  if ((int)plVar9 == 0) {
                                    func_0x00010742bd94();
                                    func_0x00010742adbc();
                                    unaff_x23 = plVar9;
                                  }
                                  else {
                                    func_0x00010742ad18();
                                    if ((int)plVar9 == 0) {
                                      func_0x00010742adf4();
                                      unaff_x23 = plVar9;
                                    }
                                    else {
                                      func_0x00010742ae88();
                                      unaff_x23 = plVar9;
                                    }
                                  }
                                }
                              }
                              plVar23 = (long *)(ulong)((uint)plVar23 + 1);
                              plVar24 = unaff_x23;
                              if ((int)unaff_x23 < 0) {
                                return unaff_x23;
                              }
                            }
                            uVar26 = extraout_x10_00 + 1;
                          }
                        }
                        else {
                          func_0x00010742b0c0();
                          FUN_1074247c4();
                          if ((int)plVar9 == 0) {
                            plVar9 = plVar1 + (long)iVar27 * 4;
                            func_0x00010742b124();
                            func_0x00010742b184();
                            unaff_x19[0x25] = extraout_x8_21;
                            plVar24 = (long *)(ulong)(iVar27 + 2);
                          }
                          else {
                            func_0x00010742b0c0();
                            FUN_1074247c4();
                            if ((int)plVar9 == 0) {
                              func_0x00010742b090();
                              if ((int)plVar9 < 0) {
                                return plVar9;
                              }
                              uVar26 = 0;
                              plVar24 = plVar9;
                              while (bVar8 = uVar26 == unaff_x19[0x27],
                                    uVar26 < (ulong)unaff_x19[0x27]) {
                                func_0x00010742ae18();
                                if (!bVar8) goto LAB_107424770;
                                unaff_x28 = (long *)(unaff_x19[0x26] + extraout_x11_05 * 0x50);
                                func_0x00010742b414();
                                for (uVar10 = 0;
                                    bVar8 = uVar10 == (extraout_w8_22 &
                                                      ((int)extraout_w8_22 >> 0x1f ^ 0xffffffffU)),
                                    !bVar8; uVar10 = uVar10 + 1) {
                                  func_0x00010742af24();
                                  if ((!bVar8) || ((int)unaff_x23[3] == 0)) goto LAB_107424770;
                                  func_0x00010742ad70();
                                  if ((int)plVar9 == 0) {
                                    func_0x00010742afa0();
                                    FUN_107424b70();
LAB_107423ed0:
                                    func_0x00010742b4cc();
                                    plVar23 = plVar24;
                                    if ((int)plVar9 < 0) {
                                      return unaff_x23;
                                    }
                                  }
                                  else {
                                    func_0x00010742b0c0();
                                    func_0x00010742bbdc();
                                    if ((int)plVar9 == 0) {
                                      func_0x00010742b9a4();
                                      func_0x00010742b0a0();
                                      if ((int)plVar9 < 0) {
                                        return plVar9;
                                      }
                                      unaff_x23 = plVar9;
                                      for (uVar26 = 0; uVar7 = uVar26 == unaff_x28[2],
                                          plVar23 = unaff_x23, uVar26 < (ulong)unaff_x28[2];
                                          uVar26 = uVar26 + 1) {
                                        func_0x00010742aef8((ulong)unaff_x23 & 0xffffffff);
                                        if (!(bool)uVar7) goto LAB_107424770;
                                        puVar3 = (undefined8 *)(unaff_x28[1] + uVar26 * 0x40);
                                        unaff_x23 = (long *)(ulong)((int)unaff_x23 + 1);
                                        for (uVar11 = *(uint *)(extraout_x8_22 + 0x18) &
                                                      ((int)*(uint *)(extraout_x8_22 + 0x18) >> 0x1f
                                                      ^ 0xffffffffU); uVar11 != 0;
                                            uVar11 = uVar11 - 1) {
                                          func_0x00010742af80();
                                          if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                          goto LAB_107424770;
                                          func_0x00010742b0cc();
                                          FUN_1074247c4();
                                          func_0x00010742bb8c();
                                          if ((int)plVar9 == 0) {
                                            plVar9 = plVar24;
                                            func_0x00010742b124();
                                            func_0x00010742b184();
                                            *puVar3 = extraout_x8_23;
LAB_107424044:
                                            unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                          }
                                          else {
                                            func_0x00010742b0cc();
                                            FUN_1074247c4();
                                            if ((int)plVar9 == 0) {
                                              plVar9 = plVar24;
                                              func_0x00010742b124();
                                              func_0x00010742b184();
                                              puVar3[1] = extraout_x8_24;
                                              goto LAB_107424044;
                                            }
                                            func_0x00010742b0cc();
                                            FUN_1074247c4();
                                            if ((int)plVar9 == 0) {
                                              func_0x00010742b12c();
                                              FUN_1074247c4();
                                              if ((int)plVar9 == 0) {
                                                uVar28 = 0;
                                              }
                                              else {
                                                func_0x00010742b12c();
                                                FUN_1074247c4();
                                                if ((int)plVar9 == 0) {
                                                  uVar28 = 1;
                                                }
                                                else {
                                                  func_0x00010742b12c();
                                                  FUN_1074247c4();
                                                  if ((int)plVar9 != 0) goto LAB_107424044;
                                                  uVar28 = 2;
                                                }
                                              }
                                              *(undefined4 *)(puVar3 + 2) = uVar28;
                                              goto LAB_107424044;
                                            }
                                            plVar9 = unaff_x25;
                                            func_0x00010742ad84();
                                            if ((int)plVar9 == 0) {
                                              func_0x00010742adbc();
                                            }
                                            else {
                                              plVar9 = unaff_x25;
                                              func_0x00010742ad94();
                                              if ((int)plVar9 == 0) {
                                                func_0x00010742aed4();
                                                FUN_107424c0c();
                                              }
                                              else {
                                                func_0x00010742ae54();
                                              }
                                            }
                                            unaff_x23 = plVar9;
                                            if ((int)plVar9 < 0) {
                                              return plVar9;
                                            }
                                          }
                                        }
                                        unaff_x27 = (long *)0x0;
                                      }
                                    }
                                    else {
                                      func_0x00010742b0c0();
                                      FUN_1074247c4();
                                      if ((int)plVar9 != 0) {
                                        func_0x00010742ad2c();
                                        if ((int)plVar9 == 0) {
                                          func_0x00010742bda0();
                                          plVar9 = param_1;
                                          func_0x00010742ae60();
                                        }
                                        else {
                                          func_0x00010742ad18();
                                          if ((int)plVar9 == 0) {
                                            func_0x00010742adf4();
                                          }
                                          else {
                                            func_0x00010742ae88();
                                          }
                                        }
                                        goto LAB_107423ed0;
                                      }
                                      func_0x00010742bd94();
                                      func_0x00010742b0a0();
                                      if ((int)plVar9 < 0) {
                                        return plVar9;
                                      }
                                      unaff_x23 = plVar9;
                                      for (uVar26 = 0; bVar8 = uVar26 == unaff_x28[4],
                                          plVar23 = unaff_x23, uVar26 < (ulong)unaff_x28[4];
                                          uVar26 = uVar26 + 1) {
                                        func_0x00010742aef8((ulong)unaff_x23 & 0xffffffff);
                                        if (!bVar8) goto LAB_107424770;
                                        puVar3 = (undefined8 *)(unaff_x28[3] + uVar26 * 0x40);
                                        func_0x00010742ba74();
                                        for (iVar27 = 0; uVar7 = iVar27 == extraout_w8_23,
                                            !(bool)uVar7; iVar27 = iVar27 + 1) {
                                          func_0x00010742af80();
                                          if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                          goto LAB_107424770;
                                          func_0x00010742b0cc();
                                          func_0x00010742bce0();
                                          if ((int)plVar9 == 0) {
                                            plVar9 = plVar1 + (long)plVar24 * 4;
                                            func_0x00010742b124();
                                            func_0x00010742b184();
                                            *puVar3 = extraout_x8_25;
                                            unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
LAB_1074240fc:
                                            if ((int)unaff_x23 < 0) {
                                              return unaff_x23;
                                            }
                                          }
                                          else {
                                            func_0x00010742b0cc();
                                            func_0x00010742bc5c();
                                            if ((int)plVar9 != 0) {
                                              func_0x00010742ae54();
                                              unaff_x23 = plVar9;
                                              goto LAB_1074240fc;
                                            }
                                            func_0x00010742b638();
                                            if (!(bool)uVar7) goto LAB_107424770;
                                            func_0x00010742b6dc();
                                            for (uVar11 = extraout_w8_24 &
                                                          ((int)extraout_w8_24 >> 0x1f ^ 0xffffffffU
                                                          ); unaff_x27 = (long *)(ulong)uVar11,
                                                uVar11 != 0; uVar11 = uVar11 - 1) {
                                              plVar24 = param_2 + ((ulong)unaff_x23 & 0xffffffff) *
                                                                  4;
                                              if (((int)*plVar24 != 3) || ((int)plVar24[3] == 0))
                                              goto LAB_107424770;
                                              func_0x00010742b12c();
                                              FUN_1074247c4();
                                              unaff_x25 = plVar1 + ((ulong)unaff_x23 & 0xffffffff) *
                                                                   4;
                                              if ((int)plVar9 == 0) {
                                                func_0x00010742af08();
                                                func_0x00010742b184();
                                                puVar3[1] = extraout_x8_26;
LAB_107424214:
                                                unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                              }
                                              else {
                                                func_0x00010742b12c();
                                                FUN_1074247c4();
                                                if ((int)plVar9 == 0) {
                                                  func_0x00010742b0cc();
                                                  func_0x00010742bc44();
                                                  if ((int)plVar9 == 0) {
                                                    uVar28 = 1;
                                                  }
                                                  else {
                                                    func_0x00010742b0cc();
                                                    func_0x00010742b520();
                                                    if ((int)plVar9 == 0) {
                                                      uVar28 = 2;
                                                    }
                                                    else {
                                                      plVar9 = unaff_x25;
                                                      func_0x00010742b0b0();
                                                      if ((int)plVar9 == 0) {
                                                        uVar28 = 3;
                                                      }
                                                      else {
                                                        func_0x00010742b0cc();
                                                        func_0x00010742b668();
                                                        if ((int)plVar9 != 0) goto LAB_107424214;
                                                        uVar28 = 4;
                                                      }
                                                    }
                                                  }
                                                  *(undefined4 *)(puVar3 + 2) = uVar28;
                                                  goto LAB_107424214;
                                                }
                                                plVar9 = plVar24;
                                                func_0x00010742ad84();
                                                if ((int)plVar9 == 0) {
                                                  func_0x00010742adbc();
                                                }
                                                else {
                                                  plVar9 = plVar24;
                                                  func_0x00010742ad94();
                                                  if ((int)plVar9 == 0) {
                                                    func_0x00010742aed4();
                                                    FUN_107424c0c();
                                                  }
                                                  else {
                                                    func_0x00010742ae54();
                                                  }
                                                }
                                                unaff_x23 = plVar9;
                                                if ((int)plVar9 < 0) {
                                                  return plVar9;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  unaff_x19 = param_4;
                                  plVar24 = plVar23;
                                }
                                uVar26 = extraout_x11_05 + 1;
                              }
                            }
                            else {
                              func_0x00010742ad2c();
                              if ((int)plVar9 == 0) {
                                plVar9 = param_1;
                                func_0x00010742ae60();
                                plVar24 = plVar9;
                              }
                              else {
                                func_0x00010742ad18();
                                if ((int)plVar9 == 0) {
                                  func_0x00010742b1e0();
                                  if (((bool)uVar7) && (unaff_x19[0x2e] == 0)) {
                                    uVar10 = *(uint *)(extraout_x8_27 + 0x38);
                                    unaff_x19[0x2d] = 0;
                                    func_0x00010742b160();
                                    unaff_x19[0x2e] = (long)plVar9;
                                    if (plVar9 == (long *)0x0) {
                                      return (long *)0xfffffffe;
                                    }
                                    plVar24 = (long *)(ulong)(iVar27 + 2);
                                    for (uVar11 = 0;
                                        uVar7 = uVar11 == (uVar10 & ((int)uVar10 >> 0x1f ^
                                                                    0xffffffffU)), !(bool)uVar7;
                                        uVar11 = uVar11 + 1) {
                                      func_0x00010742af24();
                                      if ((!(bool)uVar7) || ((int)unaff_x23[3] == 0))
                                      goto LAB_107424770;
                                      func_0x00010742b0c0();
                                      func_0x00010742bc14();
                                      if ((int)plVar9 == 0) {
                                        func_0x00010742b1e0();
                                        if (!(bool)uVar7) goto LAB_107424770;
                                        uVar19 = *(uint *)(extraout_x8_28 + 0x38);
                                        plVar24 = (long *)(ulong)((int)plVar24 + 2);
                                        for (uVar20 = 0;
                                            bVar8 = uVar20 == (uVar19 & ((int)uVar19 >> 0x1f ^
                                                                        0xffffffffU)), !bVar8;
                                            uVar20 = uVar20 + 1) {
                                          func_0x00010742b3d8((ulong)plVar24 & 0xffffffff);
                                          if ((!bVar8) || ((int)plVar9[3] == 0)) goto LAB_107424770;
                                          FUN_1074247c4();
                                          if ((int)plVar9 == 0) {
                                            plVar9 = param_1;
                                            FUN_107424d00(param_1,param_2,(int)plVar24 + 1,0x40,
                                                          param_4 + 0x1f,param_4 + 0x20);
                                            if ((int)plVar9 < 0) {
                                              return plVar9;
                                            }
                                            unaff_x23 = plVar9;
                                            for (uStack_f0 = 0; bVar8 = uStack_f0 == param_4[0x20],
                                                plVar24 = unaff_x23,
                                                uStack_f0 < (ulong)param_4[0x20];
                                                uStack_f0 = uStack_f0 + 1) {
                                              func_0x00010742aef8((ulong)unaff_x23 & 0xffffffff);
                                              if (!bVar8) goto LAB_107424770;
                                              unaff_x27 = (long *)0x0;
                                              lVar13 = param_4[0x1f] + uStack_f0 * 0x40;
                                              *(long *)(lVar13 + 0x10) = auVar30._8_8_;
                                              *(long *)(lVar13 + 8) = auVar30._0_8_;
                                              *(undefined8 *)(lVar13 + 0x20) = 0x3f490fdb00000000;
                                              uVar5 = *(uint *)(extraout_x8_29 + 0x18);
                                              unaff_x23 = (long *)(ulong)((int)unaff_x23 + 1);
                                              while( true ) {
                                                uVar7 = (uint)unaff_x27 ==
                                                        (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU))
                                                ;
                                                if ((bool)uVar7) break;
                                                plVar23 = (long *)((ulong)unaff_x23 & 0xffffffff);
                                                unaff_x25 = param_2 + (long)plVar23 * 4;
                                                func_0x00010742b244();
                                                if ((!(bool)uVar7) || ((int)unaff_x25[3] == 0))
                                                goto LAB_107424770;
                                                plVar9 = unaff_x25;
                                                func_0x00010742adcc();
                                                if ((int)plVar9 == 0) {
                                                  func_0x00010742ae44();
                                                  FUN_107424b70();
LAB_1074244c8:
                                                  uVar22 = (uint)plVar9;
                                                  unaff_x23 = plVar9;
joined_r0x0001074244e8:
                                                  if ((int)uVar22 < 0) {
                                                    return unaff_x23;
                                                  }
                                                }
                                                else {
                                                  func_0x00010742b0cc();
                                                  FUN_1074247c4();
                                                  if ((int)plVar9 == 0) {
                                                    func_0x00010742b1a8();
                                                    FUN_107424d80();
                                                    goto LAB_1074244c8;
                                                  }
                                                  func_0x00010742b0cc();
                                                  FUN_1074247c4();
                                                  unaff_x28 = plVar1 + (long)plVar23 * 4;
                                                  if ((int)plVar9 == 0) {
                                                    plVar9 = unaff_x28;
                                                    uVar28 = func_0x00010742b11c();
                                                    *(undefined4 *)(lVar13 + 0x14) = uVar28;
                                                    uVar22 = (int)unaff_x23 + 2;
                                                    unaff_x23 = (long *)(ulong)uVar22;
                                                    goto joined_r0x0001074244e8;
                                                  }
                                                  func_0x00010742b0cc();
                                                  func_0x00010742bcc8();
                                                  if ((int)plVar9 == 0) {
                                                    func_0x00010742b420();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      uVar28 = 1;
                                                    }
                                                    else {
                                                      func_0x00010742b420();
                                                      FUN_1074247c4();
                                                      if ((int)plVar9 == 0) {
                                                        uVar28 = 2;
                                                      }
                                                      else {
                                                        func_0x00010742b420();
                                                        func_0x00010742bd80();
                                                        if ((int)plVar9 != 0) goto LAB_1074245f8;
                                                        uVar28 = 3;
                                                      }
                                                    }
                                                    *(undefined4 *)(lVar13 + 0x18) = uVar28;
LAB_1074245f8:
                                                    unaff_x23 = (long *)(ulong)((int)unaff_x23 + 2);
                                                  }
                                                  else {
                                                    func_0x00010742b0cc();
                                                    FUN_1074247c4();
                                                    if ((int)plVar9 == 0) {
                                                      plVar9 = unaff_x28;
                                                      uVar28 = func_0x00010742b11c();
                                                      *(undefined4 *)(lVar13 + 0x1c) = uVar28;
                                                      goto LAB_1074245f8;
                                                    }
                                                    func_0x00010742b0cc();
                                                    func_0x00010742bd80();
                                                    if ((int)plVar9 != 0) {
                                                      plVar9 = unaff_x25;
                                                      func_0x00010742ad84();
                                                      if ((int)plVar9 == 0) {
                                                        func_0x00010742adbc();
                                                      }
                                                      else {
                                                        func_0x00010742ae54();
                                                      }
                                                      goto LAB_1074244c8;
                                                    }
                                                    func_0x00010742b638();
                                                    if (!(bool)uVar7) goto LAB_107424770;
                                                    func_0x00010742b6dc();
                                                    for (uVar22 = extraout_w8_25 &
                                                                  ((int)extraout_w8_25 >> 0x1f ^
                                                                  0xffffffffU);
                                                        unaff_x28 = (long *)(ulong)uVar22,
                                                        uVar22 != 0; uVar22 = uVar22 - 1) {
                                                      plVar23 = param_2 + ((ulong)unaff_x23 &
                                                                          0xffffffff) * 4;
                                                      func_0x00010742b618();
                                                      if ((!(bool)uVar7) || ((int)plVar23[3] == 0))
                                                      goto LAB_107424770;
                                                      func_0x00010742b16c();
                                                      FUN_1074247c4();
                                                      unaff_x25 = plVar1 + ((ulong)unaff_x23 &
                                                                           0xffffffff) * 4;
                                                      if ((int)plVar9 == 0) {
                                                        func_0x00010742b0cc();
                                                        uVar28 = FUN_10742529c();
                                                        *(undefined4 *)(lVar13 + 0x20) = uVar28;
LAB_1074245c4:
                                                        unaff_x23 = (long *)(ulong)((int)unaff_x23 +
                                                                                   2);
                                                      }
                                                      else {
                                                        func_0x00010742b16c();
                                                        FUN_1074247c4();
                                                        if ((int)plVar9 == 0) {
                                                          func_0x00010742b0cc();
                                                          uVar28 = FUN_10742529c();
                                                          *(undefined4 *)(lVar13 + 0x24) = uVar28;
                                                          goto LAB_1074245c4;
                                                        }
                                                        func_0x00010742ae54();
                                                        unaff_x23 = plVar9;
                                                        if ((int)plVar9 < 0) {
                                                          return plVar9;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                                unaff_x27 = (long *)(ulong)((uint)unaff_x27 + 1);
                                              }
                                            }
                                          }
                                          else {
                                            func_0x00010742ae88();
                                            func_0x00010742b4cc();
                                            if ((int)plVar9 < 0) {
                                              return unaff_x23;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        func_0x00010742b0c0();
                                        func_0x00010742bd04();
                                        if ((int)plVar9 == 0) {
                                          func_0x00010742b1e0();
                                          if (!(bool)uVar7) goto LAB_107424770;
                                          uVar20 = 0;
                                          uVar19 = *(uint *)(extraout_x8_30 + 0x38);
                                          plVar24 = (long *)(ulong)((int)plVar24 + 2);
                                          while (bVar8 = uVar20 == (uVar19 & ((int)uVar19 >> 0x1f ^
                                                                             0xffffffffU)), !bVar8)
                                          {
                                            func_0x00010742b3d8((ulong)plVar24 & 0xffffffff);
                                            if ((!bVar8) || ((int)plVar9[3] == 0))
                                            goto LAB_107424770;
                                            func_0x00010742bd48();
                                            if ((int)plVar9 == 0) {
                                              plVar9 = param_1;
                                              FUN_107424d00(param_1,param_2,(int)plVar24 + 1,0x20,
                                                            param_4 + 0x28,param_4 + 0x29);
                                              if ((int)plVar9 < 0) {
                                                return plVar9;
                                              }
                                              unaff_x23 = plVar9;
                                              for (uVar26 = 0; bVar8 = uVar26 == param_4[0x29],
                                                  plVar24 = unaff_x23, uVar26 < (ulong)param_4[0x29]
                                                  ; uVar26 = uVar26 + 1) {
                                                func_0x00010742aef8((ulong)unaff_x23 & 0xffffffff);
                                                if (!bVar8) goto LAB_107424770;
                                                unaff_x25 = (long *)(param_4[0x28] + uVar26 * 0x20);
                                                func_0x00010742ba74();
                                                iVar27 = extraout_w8_26 + 1;
                                                while( true ) {
                                                  iVar27 = iVar27 + -1;
                                                  bVar8 = iVar27 == 0;
                                                  if (bVar8) break;
                                                  func_0x00010742b53c((ulong)unaff_x23 & 0xffffffff)
                                                  ;
                                                  if ((!bVar8) || ((int)plVar23[3] == 0))
                                                  goto LAB_107424770;
                                                  plVar9 = plVar23;
                                                  func_0x00010742adcc();
                                                  if ((int)plVar9 == 0) {
                                                    func_0x00010742ae44();
                                                    FUN_107424b70();
                                                  }
                                                  else {
                                                    plVar9 = plVar23;
                                                    func_0x00010742ad84();
                                                    if ((int)plVar9 == 0) {
                                                      func_0x00010742adbc();
                                                    }
                                                    else {
                                                      func_0x00010742ae54();
                                                    }
                                                  }
                                                  unaff_x23 = plVar9;
                                                  if ((int)plVar9 < 0) {
                                                    return plVar9;
                                                  }
                                                }
                                                unaff_x27 = (long *)0x0;
                                              }
                                            }
                                            else {
                                              func_0x00010742ae88();
                                              func_0x00010742b4cc();
                                            }
                                            uVar20 = uVar20 + 1;
                                            if ((int)plVar24 < 0) {
                                              return unaff_x23;
                                            }
                                          }
                                        }
                                        else {
                                          param_4[0x2d] = param_4[0x2d] + 1;
                                          plVar9 = param_1;
                                          func_0x0001074249d0(param_1,param_2,plVar24);
                                          func_0x00010742b4cc();
                                          if ((int)plVar9 < 0) {
                                            return unaff_x23;
                                          }
                                        }
                                      }
                                    }
                                    goto LAB_107421c50;
                                  }
                                  goto LAB_107424770;
                                }
                                func_0x00010742b0c0();
                                FUN_1074247c4();
                                if ((int)plVar9 != 0) {
                                  func_0x00010742b0c0();
                                  FUN_1074247c4();
                                  if ((int)plVar9 != 0) {
                                    func_0x00010742ae88();
                                    plVar24 = plVar9;
                                    goto LAB_107424764;
                                  }
                                }
                                func_0x00010742afa0();
                                func_0x000107424ad0();
                                plVar24 = plVar9;
                              }
                            }
                          }
                        }
LAB_107424764:
                        unaff_x23 = plVar24;
                        plVar24 = unaff_x23;
                        if ((int)unaff_x23 < 0) {
                          return unaff_x23;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_107421c50:
      uVar10 = extraout_w9 + 1;
      unaff_x19 = param_4;
    }
  }
  else {
LAB_107424770:
    plVar24 = (long *)0xffffffff;
  }
  return plVar24;
LAB_1074216a0:
  uVar26 = extraout_x11 + 1;
  goto LAB_1074212d8;
LAB_107421c2c:
  func_0x00010742bdf8();
  uVar26 = extraout_x11_00;
  unaff_x19 = param_4;
  goto LAB_1074217e4;
LAB_107422f34:
  unaff_x27 = (long *)((long)unaff_x27 + 1);
  lVar13 = lVar13 + 0x4d0;
  lVar17 = lVar17 + 0x4d0;
  lVar16 = lVar16 + 0x4d0;
  lVar15 = lVar15 + 0x4d0;
  unaff_x19 = param_4;
  goto LAB_107422168;
LAB_107423290:
  uVar26 = uVar26 + 1;
  goto LAB_1074230a8;
}



/* Entry: 1074247c4; end: 107424827;  */

long FUN_1074247c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010742b444();
  if ((bool)in_ZR) {
    func_0x00010742b5e4();
    _strlen();
    if (param_3 == *(long *)(unaff_x21 + 0x10) - *(long *)(unaff_x21 + 8)) {
      lVar1 = unaff_x20 + *(long *)(unaff_x21 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__strncmp_11034cc00)(lVar1);
      return lVar1;
    }
    lVar1 = 0x80;
  }
  else {
    lVar1 = 0xffffffff;
  }
  return lVar1;
}



/* Entry: 107424828; end: 107424887;  */

undefined1 *
FUN_107424828(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int *piVar5;
  int iVar6;
  long extraout_x10;
  long unaff_x20;
  undefined1 auStack_a8 [128];
  undefined8 uStack_28;
  
  func_0x00010742b038();
  uStack_28 = extraout_x8;
  func_0x00010742be88();
  if ((bool)in_ZR) {
    func_0x00010742b624();
    lVar1 = extraout_x8_00;
    if ((bool)in_CY) {
      lVar1 = extraout_x10;
    }
    func_0x00010742b14c();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
    puVar4 = auStack_a8;
    _atoi();
  }
  else {
    puVar4 = (undefined1 *)0xffffffff;
  }
  func_0x00010742aec0(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (param_5[2] == 0) {
      lVar1 = param_2 + (param_3 & 0xffffffff) * 0x20;
      lVar2 = *(long *)(lVar1 + 8);
      lVar1 = *(long *)(lVar1 + 0x10);
      *param_5 = lVar2;
      param_5[1] = lVar1;
      func_0x00010742beb4();
      (*extraout_x8_01)();
      param_5[2] = (long)puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        _strncpy();
        *(undefined1 *)(param_5[2] + (lVar1 - lVar2)) = 0;
        iVar6 = (int)param_3 + 1;
        puVar4 = (undefined1 *)(long)(int)param_3;
        piVar5 = (int *)(param_2 + (long)puVar4 * 0x20 + 0x18);
        do {
          if ((long)iVar6 <= (long)puVar4) {
            return puVar4;
          }
          iVar3 = piVar5[-6];
          if (1 < iVar3 - 3U) {
            if (iVar3 == 2) {
              iVar6 = *piVar5 + iVar6;
            }
            else {
              if (iVar3 != 1) {
                return (undefined1 *)0xffffffff;
              }
              iVar6 = iVar6 + *piVar5 * 2;
            }
          }
          puVar4 = puVar4 + 1;
          piVar5 = piVar5 + 8;
        } while( true );
      }
      puVar4 = (undefined1 *)0xfffffffe;
    }
    else {
      puVar4 = (undefined1 *)0xffffffff;
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 107424888; end: 10742491f;  */

long FUN_107424888(long param_1,long param_2,uint param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *extraout_x8;
  int *piVar4;
  int iVar5;
  
  if (param_5[2] == 0) {
    lVar3 = param_2 + (ulong)param_3 * 0x20;
    lVar1 = *(long *)(lVar3 + 8);
    lVar3 = *(long *)(lVar3 + 0x10);
    *param_5 = lVar1;
    param_5[1] = lVar3;
    func_0x00010742beb4();
    (*extraout_x8)();
    param_5[2] = param_1;
    if (param_1 != 0) {
      _strncpy();
      *(undefined1 *)(param_5[2] + (lVar3 - lVar1)) = 0;
      iVar5 = param_3 + 1;
      lVar3 = (long)(int)param_3;
      piVar4 = (int *)(param_2 + lVar3 * 0x20 + 0x18);
      do {
        if (iVar5 <= lVar3) {
          return lVar3;
        }
        iVar2 = piVar4[-6];
        if (1 < iVar2 - 3U) {
          if (iVar2 == 2) {
            iVar5 = *piVar4 + iVar5;
          }
          else {
            if (iVar2 != 1) {
              return 0xffffffff;
            }
            iVar5 = iVar5 + *piVar4 * 2;
          }
        }
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 8;
      } while( true );
    }
    lVar3 = 0xfffffffe;
  }
  else {
    lVar3 = 0xffffffff;
  }
  return lVar3;
}



/* Entry: 107424920; end: 10742496b;  */

long FUN_107424920(long param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *extraout_x8;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  if (SUB168(auVar1 * auVar2,8) == 0) {
    func_0x00010742beb4();
    (*extraout_x8)();
    if (param_1 != 0) {
      _bzero();
      return param_1;
    }
  }
  return 0;
}



/* Entry: 10742496c; end: 1074249cf;  */

long FUN_10742496c(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = param_2 + 1;
  lVar2 = (long)param_2;
  piVar3 = (int *)(param_1 + lVar2 * 0x20 + 0x18);
  do {
    if (iVar4 <= lVar2) {
      return lVar2;
    }
    iVar1 = piVar3[-6];
    if (1 < iVar1 - 3U) {
      if (iVar1 == 2) {
        iVar4 = *piVar3 + iVar4;
      }
      else {
        if (iVar1 != 1) {
          return 0xffffffff;
        }
        iVar4 = iVar4 + *piVar3 * 2;
      }
    }
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 8;
  } while( true );
}



/* Entry: 1074249d0; end: 107424b6f;  */

long FUN_1074249d0(long param_1,long param_2,int param_3,undefined8 param_4,long *param_5)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  code *extraout_x8;
  int iVar8;
  
  func_0x00010742bf10();
  piVar7 = (int *)(param_2 + (long)param_3 * 0x20);
  if (*piVar7 == 3) {
    lVar4 = (long)param_3 + 1;
    piVar1 = (int *)(param_2 + lVar4 * 0x20);
    if ((*piVar1 == 1) && (*param_5 == 0)) {
      lVar2 = *(long *)(piVar7 + 2);
      lVar3 = *(long *)(piVar7 + 4);
      lVar5 = param_1;
      func_0x00010742beb4();
      (*extraout_x8)();
      *param_5 = lVar5;
      if (lVar5 != 0) {
        _strncpy();
        *(undefined1 *)(*param_5 + (lVar3 - lVar2)) = 0;
        lVar2 = *(long *)(piVar1 + 2);
        lVar3 = *(long *)(piVar1 + 4);
        lVar5 = *(long *)(param_1 + 0x20);
        (**(code **)(param_1 + 0x10))(lVar5,(lVar3 - lVar2) + 1);
        param_5[1] = lVar5;
        if (lVar5 != 0) {
          _strncpy();
          *(undefined1 *)(param_5[1] + (lVar3 - lVar2)) = 0;
          iVar6 = (int)lVar4;
          iVar8 = iVar6 + 1;
          lVar4 = (long)iVar6;
          piVar7 = (int *)(param_2 + lVar4 * 0x20 + 0x18);
          do {
            if (iVar8 <= lVar4) {
              return lVar4;
            }
            iVar6 = piVar7[-6];
            if (1 < iVar6 - 3U) {
              if (iVar6 == 2) {
                iVar8 = *piVar7 + iVar8;
              }
              else {
                if (iVar6 != 1) {
                  return 0xffffffff;
                }
                iVar8 = iVar8 + *piVar7 * 2;
              }
            }
            lVar4 = lVar4 + 1;
            piVar7 = piVar7 + 8;
          } while( true );
        }
      }
      return 0xfffffffe;
    }
  }
  return 0xffffffff;
}



/* Entry: 107424b70; end: 107424c0b;  */

int FUN_107424b70(long param_1,long param_2,uint param_3,undefined8 param_4,long *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *extraout_x8;
  
  piVar1 = (int *)(param_2 + (ulong)param_3 * 0x20);
  if ((*piVar1 == 3) && (*param_5 == 0)) {
    iVar3 = piVar1[4];
    iVar2 = piVar1[2];
    func_0x00010742beb4();
    (*extraout_x8)();
    if (param_1 == 0) {
      iVar3 = -2;
    }
    else {
      _strncpy();
      *(undefined1 *)(param_1 + (iVar3 - iVar2)) = 0;
      *param_5 = param_1;
      iVar3 = param_3 + 1;
    }
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



/* Entry: 107424c0c; end: 107424cff;  */

ulong FUN_107424c0c(ulong param_1,long param_2,uint param_3,undefined8 param_4,long *param_5,
                   ulong *param_6)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  int iVar6;
  
  if (*(int *)(param_2 + (ulong)param_3 * 0x20 + 0x20) == 1) {
    func_0x00010742bf10();
    if (*param_6 == 0) {
      uVar2 = *(uint *)(extraout_x8 + 0x38);
      *param_5 = 0;
      uVar3 = param_1;
      FUN_107424920();
      *param_6 = uVar3;
      if (uVar3 == 0) {
        uVar3 = 0xfffffffe;
      }
      else {
        iVar6 = (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) + 1;
        uVar4 = (ulong)(param_3 + 2);
        do {
          iVar6 = iVar6 + -1;
          if (iVar6 == 0) {
            return uVar4;
          }
          piVar1 = (int *)(param_2 + (uVar4 & 0xffffffff) * 0x20);
          if ((*piVar1 != 3) || (piVar1[6] == 0)) goto LAB_107424c40;
          lVar5 = *param_5;
          *param_5 = lVar5 + 1;
          uVar3 = param_1;
          FUN_1074249d0(param_1,param_2,uVar4,param_4,*param_6 + lVar5 * 0x10);
          uVar4 = uVar3;
        } while (-1 < (int)uVar3);
      }
    }
    else {
LAB_107424c40:
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Entry: 107424d00; end: 107424d7f;  */

int FUN_107424d00(long param_1,long param_2,uint param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  piVar1 = (int *)(param_2 + (ulong)param_3 * 0x20);
  iVar2 = *piVar1;
  if (iVar2 == 2) {
    if (*param_5 == 0) {
      lVar4 = (long)piVar1[6];
      FUN_107424920(param_1,param_4,lVar4);
      if (param_1 == 0) {
        iVar2 = -2;
      }
      else {
        *param_5 = param_1;
        *param_6 = lVar4;
        iVar2 = param_3 + 1;
      }
    }
    else {
      iVar2 = -1;
    }
    return iVar2;
  }
  iVar3 = -3;
  if (iVar2 != 1) {
    iVar3 = -1;
  }
  return iVar3;
}



/* Entry: 107424d80; end: 107424dff;  */

ulong FUN_107424d80(undefined4 param_1,long param_2,uint param_3,undefined8 param_4,
                   undefined8 param_5,uint param_6)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 *unaff_x19;
  ulong uVar3;
  ulong uVar4;
  
  piVar1 = (int *)(param_2 + (long)(int)param_3 * 0x20);
  if ((*piVar1 == 2) && (uVar2 = piVar1[6] == param_6, (bool)uVar2)) {
    func_0x00010742b978();
    uVar4 = (ulong)(param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU));
    while( true ) {
      param_3 = param_3 + 1;
      uVar3 = (ulong)param_3;
      if (uVar4 == 0) break;
      func_0x00010742be88(param_2 + uVar3 * 0x20);
      if (!(bool)uVar2) goto LAB_107424df0;
      func_0x00010742b11c();
      *unaff_x19 = param_1;
      uVar4 = uVar4 - 1;
      unaff_x19 = unaff_x19 + 1;
    }
  }
  else {
LAB_107424df0:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Entry: 107424e00; end: 10742529b;  */

ulong FUN_107424e00(ulong param_1,long param_2,ulong param_3,undefined8 param_4,ulong *param_5,
                   ulong *param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  
  piVar1 = (int *)(param_2 + (param_3 & 0xffffffff) * 0x20);
  if (*piVar1 == 1) {
    if (*param_5 == 0) {
      *param_6 = (long)piVar1[6];
      uVar6 = param_1;
      FUN_107424920(param_1,0x18);
      *param_5 = uVar6;
      if (uVar6 == 0) {
        uVar6 = 0xfffffffe;
      }
      else {
        lVar9 = 0;
        for (uVar8 = 0; uVar6 = (ulong)((int)param_3 + 1), uVar8 < *param_6; uVar8 = uVar8 + 1) {
          piVar1 = (int *)(param_2 + uVar6 * 0x20);
          if (((*piVar1 != 3) || (piVar1[6] == 0)) ||
             (param_3 = param_1, func_0x00010742bc2c(), (int)param_3 < 0)) goto LAB_107424e40;
          uVar6 = *param_5;
          puVar2 = (undefined8 *)(uVar6 + lVar9);
          pcVar10 = (char *)*puVar2;
          if (*pcVar10 == '_') {
            *(undefined4 *)(puVar2 + 1) = 8;
          }
          else {
            pcVar4 = pcVar10;
            _strchr(pcVar10,0x5f);
            if (pcVar4 == (char *)0x0) {
              pcVar5 = pcVar10;
              _strlen();
            }
            else {
              pcVar5 = pcVar4 + -(long)pcVar10;
            }
            switch(pcVar5) {
            case (char *)0x5:
              func_0x00010742bbe8(pcVar10,&DAT_10f2cd7fa);
              if ((int)pcVar10 != 0) goto LAB_10742500c;
              uVar7 = 5;
              break;
            case (char *)0x6:
              pcVar5 = pcVar10;
              _strncmp(pcVar10,"NORMAL",6);
              if ((int)pcVar5 == 0) {
                uVar7 = 2;
              }
              else {
                _strncmp(pcVar10,&UNK_10f41504d,6);
                if ((int)pcVar10 != 0) goto LAB_10742500c;
                uVar7 = 6;
              }
              break;
            case (char *)0x7:
              pcVar5 = pcVar10;
              func_0x00010742b7d8(pcVar10,&UNK_10f636fba);
              if ((int)pcVar5 == 0) {
                uVar7 = 3;
              }
              else {
                func_0x00010742b7d8(pcVar10,&UNK_10f415054);
                if ((int)pcVar10 != 0) goto LAB_10742500c;
                uVar7 = 7;
              }
              break;
            case (char *)0x8:
              pcVar5 = pcVar10;
              _strncmp(pcVar10,&DAT_10f41503b,8);
              if ((int)pcVar5 == 0) {
                uVar7 = 1;
              }
              else {
                _strncmp(pcVar10,&UNK_10f415044,8);
                if ((int)pcVar10 != 0) goto LAB_10742500c;
                uVar7 = 4;
              }
              break;
            default:
LAB_10742500c:
              *(undefined4 *)(puVar2 + 1) = 0;
              goto code_r0x000107425014;
            }
            *(undefined4 *)(puVar2 + 1) = uVar7;
            if (pcVar4 != (char *)0x0) {
              iVar3 = (int)pcVar4 + 1;
              _atoi();
              *(int *)((long)puVar2 + 0xc) = iVar3;
              if (iVar3 < 0) {
                puVar2[1] = 0;
              }
            }
          }
code_r0x000107425014:
          func_0x00010742bd78(param_2 + (param_3 & 0xffffffff) * 0x20);
          func_0x00010742b184();
          *(undefined8 *)(uVar6 + lVar9 + 0x10) = extraout_x8;
          lVar9 = lVar9 + 0x18;
        }
      }
    }
    else {
LAB_107424e40:
      uVar6 = 0xffffffff;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



/* Entry: 10742529c; end: 107425363;  */

uint * FUN_10742529c(uint *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x10;
  long extraout_x10_00;
  long unaff_x20;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_158 [128];
  undefined8 uStack_d8;
  uint auStack_a8 [32];
  undefined8 uStack_28;
  
  func_0x00010742b038();
  fVar7 = -1.0;
  uVar8 = 0;
  uVar2 = 3 < *param_1;
  uVar3 = *param_1 == 4;
  uStack_28 = extraout_x8;
  if ((bool)uVar3) {
    func_0x00010742b624(0xbf800000);
    lVar1 = extraout_x8_00;
    if ((bool)uVar2) {
      lVar1 = extraout_x10;
    }
    func_0x00010742b14c();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
    param_1 = auStack_a8;
    _atof(param_1);
    fVar7 = (float)(double)CONCAT44(uVar8,fVar7);
  }
  func_0x00010742aec0(uStack_28,fVar7);
  if ((bool)uVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010742b038();
  uStack_d8 = extraout_x8_01;
  func_0x00010742be88();
  if ((bool)uVar3) {
    func_0x00010742b624();
    lVar1 = extraout_x8_02;
    if ((bool)uVar2) {
      lVar1 = extraout_x10_00;
    }
    func_0x00010742b14c();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
    puVar5 = auStack_158;
    _atoll();
    puVar6 = (uint *)((ulong)puVar5 & ((long)puVar5 >> 0x3f ^ 0xffffffffffffffffU));
  }
  else {
    puVar6 = (uint *)0x0;
  }
  func_0x00010742aec0(uStack_d8);
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  iVar4 = (int)puVar6;
  FUN_107424828();
  if (iVar4 - 0x1400U < 7) {
    puVar6 = (uint *)(ulong)*(uint *)(&UNK_10de68f58 + (ulong)(iVar4 - 0x1400U) * 4);
  }
  else {
    puVar6 = (uint *)0x0;
  }
  return puVar6;
}



/* Entry: 107425364; end: 10742539b;  */

undefined4 FUN_107425364(int param_1)

{
  undefined4 uVar1;
  
  FUN_107424828();
  if (param_1 - 0x1400U < 7) {
    uVar1 = *(undefined4 *)(&UNK_10de68f58 + (ulong)(param_1 - 0x1400U) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10742539c; end: 1074253c7;  */

bool FUN_10742539c(long param_1,int param_2,long param_3)

{
  if (param_2 - (int)param_1 == 4) {
    return *(int *)(param_3 + param_1) == 0x65757274;
  }
  return false;
}



/* Entry: 1074253c8; end: 107425657;  */

int * FUN_1074253c8(int *param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined8 uVar13;
  
  if (param_1[(ulong)param_2 * 8] == 1) {
    func_0x00010742b978();
    uVar12 = 0;
    uVar13 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_4 + 0x20) = uVar13;
    *(undefined4 *)(param_4 + 0xc) = 0x3f800000;
    piVar9 = (int *)(ulong)(param_2 + 1);
    uVar2 = *(uint *)(extraout_x8 + 0x18);
    piVar7 = param_1;
    do {
      if (uVar12 == (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
        return piVar9;
      }
      piVar8 = param_1 + ((ulong)piVar9 & 0xffffffff) * 8;
      if ((*piVar8 != 3) || (piVar8[6] == 0)) goto LAB_107425648;
      func_0x00010742b420();
      FUN_1074247c4();
      piVar11 = param_1 + ((ulong)piVar9 & 0xffffffff) * 8 + 8;
      if ((int)piVar7 == 0) {
        func_0x00010742af44();
        func_0x00010742b184();
        *unaff_x19 = extraout_x8_00;
LAB_1074254e4:
        piVar9 = (int *)(ulong)((int)piVar9 + 2);
      }
      else {
        func_0x00010742b420();
        func_0x00010742bc08();
        if ((int)piVar7 == 0) {
          func_0x00010742af44();
          *(int *)(unaff_x19 + 1) = (int)piVar7;
          goto LAB_1074254e4;
        }
        piVar7 = piVar8;
        func_0x00010742b0b0();
        if ((int)piVar7 == 0) {
LAB_1074254d0:
          func_0x00010742afb0();
          *(int *)((long)unaff_x19 + 0xc) = (int)uVar13;
          goto LAB_1074254e4;
        }
        func_0x00010742b420();
        FUN_1074247c4();
        if ((int)piVar7 == 0) goto LAB_1074254d0;
        piVar7 = piVar8;
        func_0x00010742ad94();
        if ((int)piVar7 == 0) {
          if (piVar8[8] != 1) goto LAB_107425648;
          uVar10 = 0;
          uVar3 = piVar8[0xe];
          piVar9 = (int *)(ulong)((int)piVar9 + 2);
          while (bVar4 = uVar10 == (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)), !bVar4) {
            func_0x00010742b53c((ulong)piVar9 & 0xffffffff);
            if ((!bVar4) || (piVar11[6] == 0)) goto LAB_107425648;
            func_0x00010742b16c();
            FUN_1074247c4();
            if ((int)piVar7 == 0) {
              *(undefined4 *)(unaff_x19 + 2) = 1;
              uVar5 = piVar11[8] == 1;
              if (!(bool)uVar5) goto LAB_107425648;
              piVar9 = (int *)(ulong)((int)piVar9 + 2);
              for (uVar1 = piVar11[0xe] & (piVar11[0xe] >> 0x1f ^ 0xffffffffU); uVar1 != 0;
                  uVar1 = uVar1 - 1) {
                piVar11 = param_1 + ((ulong)piVar9 & 0xffffffff) * 8;
                func_0x00010742b618();
                if ((!(bool)uVar5) || (piVar11[6] == 0)) goto LAB_107425648;
                func_0x00010742b16c();
                FUN_1074247c4();
                if ((int)piVar7 == 0) {
                  func_0x00010742b1a8();
LAB_107425610:
                  FUN_107424d80();
LAB_107425618:
                  piVar9 = piVar7;
                  if ((int)piVar7 < 0) {
                    return piVar7;
                  }
                }
                else {
                  func_0x00010742b16c();
                  iVar6 = (int)piVar7;
                  func_0x00010742b520();
                  piVar8 = param_1 + ((ulong)piVar9 & 0xffffffff) * 8 + 8;
                  if (iVar6 != 0) {
                    piVar7 = piVar11;
                    func_0x00010742b0b0();
                    if ((int)piVar7 == 0) {
                      func_0x00010742b1a8();
                      goto LAB_107425610;
                    }
                    func_0x00010742b16c();
                    func_0x00010742bc08();
                    if ((int)piVar7 == 0) {
                      *(undefined4 *)(unaff_x19 + 5) = 1;
                      func_0x00010742b124();
                      *(int *)((long)unaff_x19 + 0x2c) = (int)piVar8;
                      goto LAB_107425638;
                    }
                    func_0x00010742b0d8();
                    goto LAB_107425618;
                  }
                  func_0x00010742b11c();
                  *(int *)((long)unaff_x19 + 0x1c) = (int)uVar13;
LAB_107425638:
                  piVar7 = piVar8;
                  piVar9 = (int *)(ulong)((int)piVar9 + 2);
                }
              }
            }
            else {
              func_0x00010742b0d8();
              piVar9 = piVar7;
            }
            uVar10 = uVar10 + 1;
            if ((int)piVar9 < 0) {
              return piVar9;
            }
          }
        }
        else {
          func_0x00010742b0d8();
          piVar9 = piVar7;
        }
      }
      uVar12 = uVar12 + 1;
    } while (-1 < (int)piVar9);
  }
  else {
LAB_107425648:
    piVar9 = (int *)0xffffffff;
  }
  return piVar9;
}



/* Entry: 107425658; end: 107425673;  */

void FUN_107425658(long param_1)

{
  FUN_107425674();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 107425674; end: 107425697;  */

void FUN_107425674(long param_1,long param_2)

{
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return;
}



/* Entry: 107425698; end: 1074256a3;  */

void FUN_107425698(long param_1,long param_2)

{
  func_0x00010742ae94();
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return;
}



/* Entry: 1074256a4; end: 1074256c7;  */

void FUN_1074256a4(long param_1,long param_2)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return;
}



/* Entry: 1074256c8; end: 107425907;  */

long * FUN_1074256c8(long *param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 *puVar13;
  long lStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  long lStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010742b978();
  plVar3 = param_1;
  func_0x00010742b038();
  plVar12 = (long *)(param_2 + 0x28);
  uStack_70 = extraout_x8;
LAB_107425714:
  plVar12 = (long *)*plVar12;
  if (plVar12 == (long *)0x0) {
    func_0x00010742aec0(uStack_70);
    if ((bool)in_ZR) {
      return plVar3;
    }
    ___stack_chk_fail();
    func_0x000107428160(auStack_120);
    func_0x000107425f3c(&lStack_f8);
    plVar12 = &lStack_168;
    func_0x00010725b590();
    func_0x00010742b250();
    func_0x00010002c948(plVar12 + 0x18);
    func_0x0001002920a0(plVar12 + 0x15);
    FUN_107425aac(plVar12 + 0x12);
    plVar6 = (long *)plVar12[0xf];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      __ZdlPv();
    }
    lVar7 = plVar12[0xd];
    plVar12[0xd] = 0;
    if (lVar7 != 0) {
      __ZdlPv();
    }
    FUN_10742a66c(plVar12 + 8);
    FUN_10742a66c(plVar12 + 3);
    func_0x00010742b198(plVar12);
    FUN_107426c54();
    return plVar3;
  }
  lVar7 = plVar12[2];
  puVar13 = (undefined8 *)(*(long *)(unaff_x20 + 0xa8) + lVar7 * 0x48);
  lVar10 = puVar13[2];
  if (((lVar10 == 0) || (*(long *)(lVar10 + 8) == 0)) ||
     (lVar11 = *(long *)(*(long *)(lVar10 + 8) + 0x18), lVar11 == 0)) goto LAB_10742575c;
  lVar4 = *(long *)(unaff_x19 + lVar7 * 0x10);
  if (lVar4 != 0) goto LAB_107425764;
  lVar4 = lVar11 + *(long *)(lVar10 + 0x10);
  puVar8 = (undefined8 *)(lVar10 + 0x18);
  goto LAB_10742576c;
LAB_10742575c:
  lVar4 = *(long *)(unaff_x19 + lVar7 * 0x10);
  plVar3 = (long *)0x0;
  if (lVar4 != 0) {
LAB_107425764:
    puVar8 = (undefined8 *)(unaff_x19 + lVar7 * 0x10 + 8);
LAB_10742576c:
    FUN_1073c97c8(&lStack_168,lVar4,*puVar8);
    uVar2 = uStack_148;
    in_ZR = 0;
    if (cStack_128 == '\x01') {
      lVar7 = *param_1;
      lVar10 = param_1[1];
      if ((*(byte *)((long)plVar12 + 0x1c) & 1) == 0) {
        *(undefined1 *)((long)plVar12 + 0x1c) = 1;
      }
      *(int *)(plVar12 + 3) = (int)((lVar10 - lVar7) / 0x88);
      lStack_f8 = lStack_168;
      uStack_f0 = uStack_160;
      uStack_e8 = uStack_158;
      uStack_e0 = uStack_150;
      uStack_148 = 0;
      uStack_d0 = uStack_140;
      uStack_d8 = uVar2;
      uStack_c0 = uStack_130;
      uStack_c8 = uStack_138;
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_140 = 0;
      uStack_b8 = 1;
      pcVar9 = (char *)*puVar13;
      pcVar1 = "";
      if (pcVar9 != (char *)0x0) {
        pcVar1 = pcVar9;
      }
      func_0x000100060964(auStack_b0,pcVar1);
      uStack_78 = 0;
      uVar5 = param_1[1];
      in_ZR = uVar5 == param_1[2];
      if (uVar5 < (ulong)param_1[2]) {
        FUN_107427e30(uVar5,&lStack_f8);
        lVar7 = uVar5 + 0x88;
        param_1[1] = lVar7;
      }
      else {
        plVar3 = param_1;
        FUN_107427ef4(param_1,(long)(uVar5 - *param_1) / 0x88 + 1);
        FUN_107427f9c(auStack_120,plVar3,(param_1[1] - *param_1) / 0x88,param_1 + 2);
        FUN_107427e30(lStack_110,&lStack_f8);
        lStack_110 = lStack_110 + 0x88;
        FUN_107427f3c(param_1,auStack_120);
        lVar7 = param_1[1];
        func_0x000107428160(auStack_120);
      }
      param_1[1] = lVar7;
      func_0x000107425f3c(&lStack_f8);
    }
    plVar3 = &lStack_168;
    func_0x00010725b590();
  }
  goto LAB_107425714;
}



/* Entry: 107425908; end: 107425977;  */

undefined8 FUN_107425908(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 unaff_x19;
  
  func_0x00010002c948(param_1 + 0xc0);
  func_0x0001002920a0(param_1 + 0xa8);
  FUN_107425aac(param_1 + 0x90);
  plVar1 = *(long **)(param_1 + 0x78);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  FUN_10742a66c(param_1 + 0x40);
  FUN_10742a66c(param_1 + 0x18);
  func_0x00010742b198(param_1);
  FUN_107426c54();
  return unaff_x19;
}



/* Entry: 107425978; end: 1074259ef;  */

long FUN_107425978(long param_1)

{
  _bzero(param_1,0xa8);
  func_0x000104c2f64c(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return param_1;
}



/* Entry: 1074259f0; end: 107425aab;  */

void FUN_1074259f0(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010742baa8();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x38;
      func_0x000107425a2c();
    }
    func_0x00010742b298();
  }
  return;
}



/* Entry: 107425aac; end: 107425af3;  */

void FUN_107425aac(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010742baa8();
  if (unaff_x20 != 0) {
    for (lVar1 = *(long *)(unaff_x19 + 8); lVar1 != unaff_x20; lVar1 = lVar1 + -400) {
      func_0x00010028ad98(lVar1 + -0x108);
    }
    func_0x00010742b298();
  }
  return;
}



/* Entry: 107425af4; end: 107425c23;  */

void FUN_107425af4(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010742baa8();
  if (unaff_x20 != 0) {
    lVar1 = *(long *)(unaff_x19 + 8);
    while (lVar1 != unaff_x20) {
      lVar1 = lVar1 + -0x288;
      FUN_1073bc9f0();
    }
    func_0x00010742b298();
  }
  return;
}



/* Entry: 107425c24; end: 107425c3b;  */

void FUN_107425c24(long *param_1,long param_2)

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



/* Entry: 107425c3c; end: 107425c77;  */

long FUN_107425c3c(long param_1)

{
  FUN_107425c78(param_1 + 0x60);
  FUN_107425cd0(param_1 + 0x40);
  FUN_107425d28(param_1 + 0x28);
  FUN_107425d60(param_1);
  return param_1;
}



/* Entry: 107425c78; end: 107425c97;  */

void FUN_107425c78(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_107425c98();
  }
  return;
}



/* Entry: 107425c98; end: 107425cbb;  */

void FUN_107425c98(void)

{
  func_0x00010742b198();
  FUN_107425cbc();
  return;
}



/* Entry: 107425cbc; end: 107425ccf;  */

void FUN_107425cbc(undefined8 *param_1)

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



/* Entry: 107425cd0; end: 107425cef;  */

void FUN_107425cd0(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_107425cf0();
  }
  return;
}



/* Entry: 107425cf0; end: 107425d13;  */

void FUN_107425cf0(void)

{
  func_0x00010742b198();
  FUN_107425d14();
  return;
}



/* Entry: 107425d14; end: 107425d27;  */

void FUN_107425d14(undefined8 *param_1)

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



/* Entry: 107425d28; end: 107425d4b;  */

void FUN_107425d28(void)

{
  func_0x00010742b198();
  FUN_107425d4c();
  return;
}



/* Entry: 107425d4c; end: 107425d5f;  */

void FUN_107425d4c(undefined8 *param_1)

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



/* Entry: 107425d60; end: 107425da3;  */

void FUN_107425d60(long param_1)

{
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    func_0x00010742b084((&PTR_FUN_1109af188)[*(uint *)(param_1 + 0x20)]);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 107425da4; end: 107425db3;  */

long FUN_107425da4(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  lStack_28 = param_2 + 8;
  func_0x00010730b088(&lStack_28);
  return param_2 + 8;
}



/* Entry: 107425db4; end: 107425df7;  */

void FUN_107425db4(long param_1)

{
  if (*(uint *)(param_1 + 0xc0) != 0xffffffff) {
    func_0x00010742b084((&PTR_FUN_1109af198)[*(uint *)(param_1 + 0xc0)]);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  return;
}



/* Entry: 107425df8; end: 107425e07;  */

long FUN_107425df8(undefined8 param_1,long param_2)

{
  FUN_107425c78(param_2 + 0x60);
  FUN_107425cd0(param_2 + 0x40);
  FUN_107425d28(param_2 + 0x28);
  FUN_107425d60(param_2);
  return param_2;
}



/* Entry: 107425e08; end: 107425e8f;  */

long FUN_107425e08(long param_1)

{
  func_0x00010730b13c(param_1 + 0x80);
  func_0x00010730b13c(param_1 + 0x48);
  func_0x00010730af90(param_1 + 0x40);
  func_0x00010730b038(param_1 + 0x10);
  return param_1;
}



/* Entry: 107425e90; end: 107425ea3;  */

void FUN_107425e90(undefined8 *param_1)

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



/* Entry: 107425ea4; end: 107425eff;  */

void FUN_107425ea4(void)

{
  func_0x00010742b198();
  func_0x000107425ec8();
  return;
}



/* Entry: 107425f00; end: 107425f07;  */

void FUN_107425f00(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x000107425f3c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107425f08; end: 107425f67;  */

void FUN_107425f08(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x000107425f3c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107425f68; end: 107425fab;  */

void FUN_107425f68(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x00010742b084((&PTR_FUN_1109af1a8)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 107425fac; end: 107425fbb;  */

uint * FUN_107425fac(undefined8 param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  int *extraout_x8;
  
  if (((ulong)*param_2 * (ulong)param_2[1] & 0x3fffffffffffffff) != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + (ulong)param_2[1] * (ulong)*param_2 * -4;
      }
    } while (cVar1 != '\0');
    func_0x00010724e7c8();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = *extraout_x8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010724e5b8(param_2 + 2);
  return param_2;
}



/* Entry: 107425fbc; end: 10742618f;  */

void FUN_107425fbc(undefined8 param_1,float param_2,long *param_3,ulong *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  long *plVar8;
  undefined8 extraout_x9;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  
  uVar11 = *param_4;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    uVar6 = uVar10 - 1;
    if ((uVar10 & uVar6) == 0) {
      unaff_x24 = uVar6 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar9 * uVar10;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_107426070;
          uVar9 = plVar8[1];
          if (uVar9 != uVar11) break;
          if (plVar8[2] == uVar11) {
            return;
          }
        }
        if ((uVar10 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar10 <= uVar9) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar9 / uVar10;
          }
          uVar9 = uVar9 - uVar2 * uVar10;
        }
      } while (uVar9 == unaff_x24);
    }
  }
LAB_107426070:
  plVar8 = param_3 + 2;
  plVar5 = param_3;
  func_0x00010742b73c();
  *plVar5 = 0;
  plVar5[1] = uVar11;
  uVar6 = *param_4;
  plVar5[3] = param_4[1];
  plVar5[2] = uVar6;
  func_0x00010742b5b0();
  if ((uVar10 == 0) || (param_2 * (float)uVar10 < (float)uVar6)) {
    bVar3 = 2 < uVar10;
    bVar4 = uVar10 == 3;
    func_0x00010742b048(uVar10 << 1);
    uVar1 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar1 = extraout_x9;
    }
    FUN_107426c68(param_3,uVar1);
    uVar10 = param_3[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar7 = *param_3;
  if (*(long *)(lVar7 + unaff_x24 * 8) == 0) {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar7 + unaff_x24 * 8) = plVar8;
    if (*plVar5 != 0) {
      uVar11 = *(ulong *)(*plVar5 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar6 * uVar10;
      }
      *(long **)(lVar7 + uVar11 * 8) = plVar5;
    }
  }
  else {
    func_0x00010742b588();
  }
  func_0x00010742b3c0();
  FUN_107426dcc();
  return;
}



/* Entry: 107426190; end: 10742638b;  */

void FUN_107426190(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  long extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar5;
  long *plVar6;
  undefined8 extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar7;
  ulong extraout_x10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x23;
  long lStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  
  if ((*param_3 != 0) &&
     (((func_0x00010742af70(), *(int *)(extraout_x8 + 0x18) != 0 &&
       (lVar5 = *(long *)(extraout_x8 + 0x20), lVar5 != 0)) ||
      (lVar5 = *(long *)(extraout_x8 + 8), lVar5 != 0)))) {
    lStack_58 = (lVar5 - *(long *)(*unaff_x20 + 0xa8)) / 0x48;
    uStack_50 = 0;
    uStack_4c = 0;
    lVar5 = unaff_x19 + 0x18;
    FUN_107425fbc(lVar5,&lStack_58);
    if (*(long *)(*unaff_x21 + 0x10) != 0) {
      uVar9 = *(long *)(*unaff_x21 + 0x10) - *(long *)(*unaff_x20 + 200) >> 6;
      uVar8 = *(ulong *)(unaff_x19 + 0x70);
      if (uVar8 != 0) {
        func_0x00010742b8d0();
        if ((bool)in_ZR) {
          unaff_x23 = extraout_x8_00 & uVar9;
          in_ZR = true;
        }
        else {
          in_NG = (long)(uVar9 - uVar8) < 0;
          in_ZR = uVar9 == uVar8;
          unaff_x23 = uVar9;
          if (uVar8 <= uVar9) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar9 / uVar8;
            }
            unaff_x23 = uVar9 - uVar7 * uVar8;
          }
        }
        plVar6 = *(long **)(*(long *)(unaff_x19 + 0x68) + unaff_x23 * 8);
        if (plVar6 != (long *)0x0) {
          do {
            while( true ) {
              plVar6 = (long *)*plVar6;
              if (plVar6 == (long *)0x0) goto LAB_10742629c;
              uVar7 = plVar6[1];
              if (uVar7 != uVar9) break;
              in_NG = (long)(plVar6[2] - uVar9) < 0;
              in_ZR = false;
              if (plVar6[2] == uVar9) {
                return;
              }
            }
            if ((uVar8 & extraout_x8_00) == 0) {
              uVar7 = uVar7 & extraout_x8_00;
            }
            else if (uVar8 <= uVar7) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar2 * uVar8;
            }
            in_NG = (long)(uVar7 - unaff_x23) < 0;
            in_ZR = uVar7 == unaff_x23;
          } while ((bool)in_ZR);
        }
      }
LAB_10742629c:
      func_0x00010742b73c();
      func_0x00010742b1b4();
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(undefined1 *)(lVar5 + 0x1c) = 0;
      if ((uVar8 == 0) ||
         (func_0x00010742ba44((float)(*(long *)(unaff_x19 + 0x80) + 1),
                              *(undefined4 *)(unaff_x19 + 0x88)), (bool)in_NG)) {
        func_0x00010742b378();
        bVar3 = 2 < uVar8;
        uVar4 = uVar8 == 3;
        func_0x00010742b048();
        uVar1 = extraout_x8_01;
        if (!bVar3 || (bool)uVar4) {
          uVar1 = extraout_x9;
        }
        FUN_107426df4(unaff_x19 + 0x68,uVar1);
        uVar8 = *(ulong *)(unaff_x19 + 0x70);
        func_0x00010742b8d0();
        if ((bool)uVar4) {
          in_ZR = 1;
          unaff_x23 = extraout_x8_02 & uVar9;
        }
        else {
          in_ZR = uVar9 == uVar8;
          unaff_x23 = uVar9;
          if (uVar8 <= uVar9) {
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = uVar9 / uVar8;
            }
            unaff_x23 = uVar9 - uVar7 * uVar8;
          }
        }
      }
      if (*(long *)(*(long *)(unaff_x19 + 0x68) + unaff_x23 * 8) == 0) {
        func_0x00010742b360();
        if (extraout_x9_00 != 0) {
          func_0x00010742b9f4();
          lVar5 = extraout_x8_03;
          if ((bool)in_ZR) {
            uVar9 = extraout_x9_01 & extraout_x10;
          }
          else {
            uVar9 = extraout_x9_01;
            if (uVar8 <= extraout_x9_01) {
              func_0x00010742bb2c();
              lVar5 = extraout_x8_04;
              uVar9 = extraout_x9_02;
            }
          }
          *(long **)(lVar5 + uVar9 * 8) = unaff_x20;
        }
      }
      else {
        func_0x00010742b588();
      }
      lStack_58 = 0;
      *(long *)(unaff_x19 + 0x80) = *(long *)(unaff_x19 + 0x80) + 1;
      FUN_107426f58(&lStack_58);
    }
  }
  return;
}



/* Entry: 10742638c; end: 107426443;  */

void FUN_10742638c(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  
  puVar4 = (undefined4 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar4 >> 2) < param_2) {
    func_0x000107426f80(param_1);
    puVar1 = param_1;
    func_0x0001006601e8(param_1,param_2);
    func_0x000100291c58(param_1,puVar1);
    uVar2 = param_2;
  }
  else {
    uVar5 = param_1[1] - (long)puVar4 >> 2;
    puVar3 = puVar4;
    uVar2 = uVar5;
    if (param_2 <= uVar5) {
      uVar2 = param_2;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_3;
      puVar3 = puVar3 + 1;
    }
    uVar2 = param_2 - uVar5;
    if (param_2 < uVar5 || uVar2 == 0) {
      param_1[1] = puVar4 + param_2;
      return;
    }
  }
  puVar3 = (undefined4 *)param_1[1];
  puVar4 = puVar3;
  for (lVar6 = uVar2 << 2; lVar6 != 0; lVar6 = lVar6 + -4) {
    *puVar4 = *param_3;
    puVar4 = puVar4 + 1;
  }
  param_1[1] = puVar3 + uVar2;
  return;
}



/* Entry: 107426444; end: 10742645b;  */

void FUN_107426444(void)

{
  FUN_107426fa4();
  return;
}



/* Entry: 10742645c; end: 107426bb7;  */

long * FUN_10742645c(undefined8 param_1,double param_2,double param_3,double param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 in_x3;
  undefined4 in_w4;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  long *extraout_x8_00;
  undefined4 uVar9;
  ulong *puVar10;
  long *extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  char *pcVar12;
  long lVar13;
  char **ppcVar14;
  char **unaff_d8;
  double unaff_d9;
  char **ppcVar15;
  double unaff_d11;
  double unaff_d12;
  double unaff_d13;
  double unaff_d14;
  double unaff_d15;
  double dStack_4b0;
  double dStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  undefined8 uStack_450;
  double dStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  double dStack_430;
  undefined8 uStack_428;
  double dStack_420;
  double dStack_418;
  undefined8 uStack_410;
  double dStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  double dStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  long alStack_3c8 [4];
  undefined4 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_398;
  double dStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  double dStack_378;
  undefined8 uStack_370;
  double dStack_368;
  double dStack_360;
  undefined8 uStack_358;
  double dStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  double dStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  char **ppcStack_318;
  double dStack_310;
  double dStack_308;
  char **ppcStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  undefined1 uStack_2c8;
  undefined1 auStack_2b8 [128];
  ulong *apuStack_238 [3];
  char *pcStack_220;
  char *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  char **ppcStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined4 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  char **ppcStack_178;
  ulong *puStack_160;
  ulong uStack_148;
  long lStack_140;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  undefined8 uStack_b8;
  
  func_0x00010742b5e4();
  func_0x00010742b038();
  uStack_b8 = extraout_x8;
  func_0x00010742b954(auStack_2b8,in_x3);
  ppcVar14 = (char **)0x0;
  uStack_d8 = 0;
  dStack_e0 = 0.0;
  dStack_c8 = 0.0;
  uStack_d0 = 0;
  dStack_f8 = 0.0;
  dStack_100 = 0.0;
  dStack_e8 = 0.0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  dStack_110 = 0.0;
  if (*(int *)(unaff_x20 + 0x5c) == 0) {
    if (((*(int *)(unaff_x20 + 0x50) == 0) && (*(int *)(unaff_x20 + 0x58) == 0)) &&
       (*(int *)(unaff_x20 + 0x54) == 0)) {
      dStack_4a8 = 0.0;
      uStack_2c8 = 1;
      uStack_498 = 0x3ff0000000000000;
      uStack_490 = 0x3ff0000000000000;
      uStack_4a0 = 0x3ff0000000000000;
      uStack_488 = 0x3ff0000000000000;
      dStack_4b0 = 0.0;
      unaff_d8 = (char **)0x0;
      unaff_d13 = 0.0;
      unaff_d11 = 0.0;
      unaff_d9 = 1.0;
      unaff_d12 = 1.0;
      unaff_d14 = 1.0;
      unaff_d15 = 1.0;
      ppcVar15 = (char **)0x0;
    }
    else {
      uStack_450 = 0x3ff0000000000000;
      uStack_440 = 0;
      dStack_448 = 0.0;
      dStack_430 = 0.0;
      uStack_438 = 0;
      uStack_428 = 0x3ff0000000000000;
      dStack_418 = 0.0;
      dStack_420 = 0.0;
      dStack_408 = 0.0;
      uStack_410 = 0;
      uStack_3f0 = 0;
      uStack_3f8 = 0;
      uStack_3e0 = 0;
      dStack_3e8 = 0.0;
      dStack_4b0 = 0.0;
      dStack_4a8 = 0.0;
      ppcVar15 = (char **)0x0;
      uStack_400 = 0x3ff0000000000000;
      uStack_3d8 = 0x3ff0000000000000;
      if (*(int *)(unaff_x20 + 0x50) != 0) {
        ppcVar15 = (char **)(double)*(float *)(unaff_x20 + 0x60);
        dStack_4a8 = -(double)*(float *)(unaff_x20 + 100);
        dStack_4b0 = (double)*(float *)(unaff_x20 + 0x68);
        ppcVar14 = ppcVar15;
        param_2 = dStack_4a8;
        param_3 = dStack_4b0;
        func_0x000107876e00(&uStack_450);
      }
      unaff_d12 = 1.0;
      unaff_d8 = (char **)0x0;
      unaff_d9 = 1.0;
      unaff_d11 = 0.0;
      unaff_d13 = 0.0;
      if (*(int *)(unaff_x20 + 0x54) != 0) {
        FUN_107427234(unaff_x20 + 0x6c);
        ppcStack_1e8 = ppcVar14;
        dStack_1e0 = param_2;
        dStack_1d8 = param_3;
        dStack_1d0 = param_4;
        func_0x000107878b80(&uStack_1a0,&ppcStack_1e8);
        func_0x000107877034(&uStack_450,&uStack_450,&uStack_1a0);
        unaff_d8 = ppcVar14;
        unaff_d9 = param_4;
        unaff_d11 = param_3;
        unaff_d13 = param_2;
      }
      unaff_d14 = 1.0;
      unaff_d15 = 1.0;
      if (*(int *)(unaff_x20 + 0x58) != 0) {
        unaff_d12 = (double)*(float *)(unaff_x20 + 0x7c);
        unaff_d14 = (double)*(float *)(unaff_x20 + 0x80);
        unaff_d15 = (double)*(float *)(unaff_x20 + 0x84);
        func_0x000107877000(unaff_d12,unaff_d14,&uStack_450);
      }
      uStack_d8 = uStack_440;
      dStack_e0 = dStack_448;
      dStack_c8 = dStack_430;
      uStack_d0 = uStack_438;
      dStack_f8 = dStack_418;
      dStack_100 = dStack_420;
      dStack_e8 = dStack_408;
      uStack_f0 = uStack_410;
      uStack_118 = uStack_3f0;
      uStack_120 = uStack_3f8;
      uStack_108 = uStack_3e0;
      dStack_110 = dStack_3e8;
      uStack_490 = uStack_400;
      uStack_488 = uStack_450;
      uStack_4a0 = uStack_428;
      uStack_498 = uStack_3d8;
      func_0x00010742b894();
      uStack_2c8 = 1;
    }
  }
  else {
    dStack_3e8 = 0.0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    dStack_408 = 0.0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    uStack_428 = 0;
    dStack_430 = 0.0;
    dStack_418 = 0.0;
    dStack_420 = 0.0;
    dStack_448 = 0.0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    for (lVar7 = 0; lVar7 != 0x10; lVar7 = lVar7 + 1) {
      (&uStack_450)[lVar7] = (double)*(float *)(unaff_x20 + 0x88 + lVar7 * 4);
    }
    uStack_488 = uStack_450;
    dStack_408 = -dStack_408;
    uStack_498 = uStack_3d8;
    uStack_490 = uStack_400;
    dStack_3e8 = -dStack_3e8;
    dStack_420 = -dStack_420;
    dStack_418 = -dStack_418;
    uStack_4a0 = uStack_428;
    dStack_430 = -dStack_430;
    dStack_448 = -dStack_448;
    uStack_d8 = uStack_440;
    uStack_d0 = uStack_438;
    uStack_f0 = uStack_410;
    uStack_118 = uStack_3f0;
    uStack_120 = uStack_3f8;
    uStack_108 = uStack_3e0;
    dStack_110 = dStack_3e8;
    dStack_100 = dStack_420;
    dStack_f8 = dStack_418;
    dStack_e8 = dStack_408;
    dStack_e0 = dStack_448;
    dStack_c8 = dStack_430;
    func_0x00010742b894();
    uStack_2c8 = 0;
    ppcVar15 = (char **)0x0;
  }
  lVar7 = *(long *)(unaff_x19 + 0x90);
  lVar1 = *(long *)(unaff_x19 + 0x98);
  uVar8 = (ulong)uStack_450 >> 0x28;
  uVar2 = (uint)uStack_450;
  uStack_450._0_5_ = (uint5)(uVar2 & 0xffffff00);
  uStack_450._5_3_ = (int3)uVar8;
  func_0x00010742b954(&dStack_448,auStack_2b8);
  alStack_3c8[1] = 0;
  alStack_3c8[0] = 0;
  alStack_3c8[3] = 0;
  alStack_3c8[2] = 0;
  uStack_3a8 = 0x3f800000;
  uStack_398 = uStack_488;
  uStack_388 = uStack_d8;
  dStack_390 = dStack_e0;
  dStack_378 = dStack_c8;
  uStack_380 = uStack_d0;
  dStack_360 = dStack_f8;
  dStack_368 = dStack_100;
  dStack_350 = dStack_e8;
  uStack_358 = uStack_f0;
  uStack_370 = uStack_4a0;
  uStack_348 = uStack_490;
  uStack_338 = uStack_118;
  uStack_340 = uStack_120;
  uStack_328 = uStack_108;
  dStack_330 = dStack_110;
  uStack_320 = uStack_498;
  dStack_310 = dStack_4a8;
  dStack_308 = dStack_4b0;
  uStack_3a0 = in_w4;
  ppcStack_318 = ppcVar15;
  ppcStack_300 = unaff_d8;
  dStack_2f8 = unaff_d13;
  dStack_2f0 = unaff_d11;
  dStack_2e8 = unaff_d9;
  dStack_2e0 = unaff_d12;
  dStack_2d8 = unaff_d14;
  dStack_2d0 = unaff_d15;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,
                          (int)((*(long *)(unaff_x20 + 0x28) - *(long *)(unaff_x21 + 0x58)) / 0x60))
    ;
    FUN_107426444(unaff_x19 + 0xc0,&uStack_1a0);
    uStack_450._0_5_ = CONCAT14(1,(undefined4)uStack_1a0);
  }
  pcVar12 = *(char **)(unaff_x20 + 0xd8);
  if (pcVar12 == (char *)0x0) goto LAB_107426a00;
  uStack_478 = 0;
  uStack_480 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_460 = 0x3f800000;
  func_0x0001073028ec(&uStack_1a0,0,0x400,0);
  dStack_1d8 = 0.0;
  dStack_1e0 = 0.0;
  uStack_1c8 = 0;
  dStack_1d0 = 0.0;
  ppcStack_1e8 = ppcStack_178;
  uStack_1c0 = 0x100;
  uStack_1a8 = 2;
  uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
  lStack_1b0 = 0;
  apuStack_238[0] = &uStack_1a0;
  pcStack_220 = pcVar12;
  pcStack_218 = pcVar12;
  FUN_1074279b0(&pcStack_220);
  if (*pcStack_220 == '\0') {
    uVar9 = 1;
LAB_107426b00:
    lStack_1b0 = (long)pcStack_220 - (long)pcStack_218;
    uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar9);
  }
  else {
    FUN_107427258(&ppcStack_1e8,&pcStack_220,&uStack_1a0);
    if ((int)uStack_1b8 == 0) {
      FUN_1074279b0(&pcStack_220);
      if (((int)uStack_1b8 == 0) && (*pcStack_220 != '\0')) {
        uVar9 = 2;
        goto LAB_107426b00;
      }
    }
  }
  dStack_1d0 = dStack_1d8;
  lStack_140 = lStack_1b0;
  uStack_148 = uStack_1b8;
  puVar10 = puStack_160;
  if (((int)uStack_1b8 == 0) && (puVar10 = puStack_160 + -3, &uStack_1a0 != puVar10)) {
    uStack_198 = puStack_160[-2];
    uStack_1a0 = *puVar10;
    uStack_190 = puStack_160[-1];
    *(undefined2 *)((long)puStack_160 + -2) = 0;
  }
  puStack_160 = puVar10;
  func_0x000107304208(apuStack_238);
  func_0x000107302960(&ppcStack_1e8);
  if (((int)uStack_148 == 0) && (uStack_190._6_2_ == 3)) {
    for (lVar11 = uStack_198 + 0x18; lVar13 = lVar11 + -0x18,
        lVar13 != uStack_198 + (uStack_1a0 & 0xffffffff) * 0x30; lVar11 = lVar11 + 0x30) {
      if ((*(ushort *)(lVar11 + -2) >> 10 & 1) != 0) {
        if ((*(ushort *)(lVar11 + 0x16) >> 10 & 1) == 0) {
          pcStack_218 = (char *)0x0;
          pcStack_220 = (char *)0x0;
          uStack_208 = 0;
          uStack_210 = 0;
          uStack_200 = 0;
          uStack_1f8 = 0x100;
          dStack_1d8 = 0.0;
          dStack_1e0 = 0.0;
          uStack_1c8 = 0;
          dStack_1d0 = 0.0;
          uStack_1c0 = 0;
          ppcStack_1e8 = &pcStack_220;
          uStack_1b8 = 0x200;
          lStack_1b0 = CONCAT35(lStack_1b0._5_3_,0x144);
          FUN_107348798(lVar11,&ppcStack_1e8);
          FUN_107326be8(&pcStack_220);
          if ((*(ushort *)(lVar11 + -2) >> 0xc & 1) == 0) {
            lVar13 = *(long *)(lVar11 + -0x10);
          }
          func_0x00010002b838(apuStack_238,lVar13);
          func_0x000100608100(&uStack_480,apuStack_238);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_238);
          func_0x000107302960(&dStack_1e0);
          func_0x000107302960(&pcStack_220);
        }
        else {
          if ((*(ushort *)(lVar11 + -2) >> 0xc & 1) == 0) {
            lVar13 = *(long *)(lVar11 + -0x10);
          }
          func_0x00010002b838(&ppcStack_1e8,lVar13);
          func_0x000100608100(&uStack_480,&ppcStack_1e8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppcStack_1e8);
        }
      }
    }
  }
  func_0x0001073029ac(&uStack_1a0);
  func_0x0001072adb50(alStack_3c8,&uStack_480);
  func_0x00010028ad98(&uStack_480);
LAB_107426a00:
  *(int *)(*(long *)(unaff_x19 + 0xa8) + (unaff_x20 - *(long *)(unaff_x21 + 0x108)) / 0x42) =
       (int)((lVar1 - lVar7) / 400);
  puVar6 = &uStack_450;
  FUN_107427cdc((long *)(unaff_x19 + 0x90));
  uVar8 = 0;
  while( true ) {
    uVar3 = uVar8 <= *(ulong *)(unaff_x20 + 0x18);
    uVar4 = *(ulong *)(unaff_x20 + 0x18) == uVar8;
    if (!(bool)uVar3 || (bool)uVar4) break;
    puVar6 = *(undefined8 **)(*(long *)(unaff_x20 + 0x10) + uVar8 * 8);
    FUN_10742645c();
    uVar8 = (ulong)((int)uVar8 + 1);
  }
  plVar5 = alStack_3c8;
  func_0x00010028ad98();
  func_0x00010742aec0(uStack_b8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010028ad98(&uStack_480);
    plVar5 = alStack_3c8;
    func_0x00010028ad98();
    func_0x00010742b250();
    if ((ulong)puVar6 >> 0x3d != 0) {
      func_0x000104c43284();
      FUN_107426c0c();
      if (*plVar5 != 0) {
        __ZdlPv();
      }
      return plVar5;
    }
    func_0x00010742b768();
    plVar5 = extraout_x9;
    if ((bool)uVar3) {
      plVar5 = extraout_x8_00;
    }
    return plVar5;
  }
  return plVar5;
}



/* Entry: 107426bb8; end: 107426bdf;  */

long * FUN_107426bb8(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined1 in_CY;
  long *extraout_x8;
  long *extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x00010742b768();
    plVar1 = extraout_x9;
    if ((bool)in_CY) {
      plVar1 = extraout_x8;
    }
    return plVar1;
  }
  func_0x000104c43284();
  FUN_107426c0c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107426be0; end: 107426c0b;  */

long * FUN_107426be0(long *param_1)

{
  FUN_107426c0c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107426c0c; end: 107426c2f;  */

void FUN_107426c0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107426c30; end: 107426c53;  */

void FUN_107426c30(void)

{
  func_0x00010742b198();
  FUN_107426c54();
  return;
}



/* Entry: 107426c54; end: 107426c67;  */

void FUN_107426c54(undefined8 *param_1)

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



/* Entry: 107426c68; end: 107426db3;  */

void FUN_107426c68(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x00010742b908();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x00010742b790();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107426db4(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_107426db4(param_1,lVar3);
    param_1[1] = (long)param_2;
    lVar3 = *param_1;
    for (plVar5 = (long *)0x0; param_2 != plVar5; plVar5 = (long *)((long)plVar5 + 1)) {
      *(undefined8 *)(lVar3 + (long)plVar5 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x00010742bdac();
      func_0x00010742bea0();
      lVar3 = extraout_x8;
      plVar5 = extraout_x9;
      uVar6 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar7 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar5;
            func_0x00010742b390();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x9_00;
            uVar6 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107426db4; end: 107426dcb;  */

void FUN_107426db4(long *param_1,long param_2)

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



/* Entry: 107426dcc; end: 107426df3;  */

void FUN_107426dcc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010742b67c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107426df4; end: 107426f3f;  */

void FUN_107426df4(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar5;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x00010742b908();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x00010742b790();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107426f40(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_107426f40(param_1,lVar3);
    param_1[1] = (long)param_2;
    lVar3 = *param_1;
    for (plVar5 = (long *)0x0; param_2 != plVar5; plVar5 = (long *)((long)plVar5 + 1)) {
      *(undefined8 *)(lVar3 + (long)plVar5 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x00010742bdac();
      func_0x00010742bea0();
      lVar3 = extraout_x8;
      plVar5 = extraout_x9;
      uVar6 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar5, plVar5 = (long *)*plVar8, plVar5 != (long *)0x0) {
        plVar7 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar6);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar5;
            func_0x00010742b390();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x9_00;
            uVar6 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar5;
  *plVar5 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107426f40; end: 107426f57;  */

void FUN_107426f40(long *param_1,long param_2)

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



/* Entry: 107426f58; end: 107426fa3;  */

void FUN_107426f58(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x00010742b67c();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107426fa4; end: 107426fd7;  */

void FUN_107426fa4(void)

{
  func_0x000107426fbc();
  return;
}



/* Entry: 107426fd8; end: 107427073;  */

undefined1  [16] FUN_107426fd8(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x00010002c84c(param_1,&uStack_48,param_2);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    plVar3 = plVar2;
    func_0x00010742b73c();
    uStack_50 = 1;
    *(undefined4 *)((long)plVar3 + 0x1c) = *param_3;
    plStack_58 = param_1 + 1;
    func_0x00010002c6a0(param_1,uStack_48,plVar2,plVar3);
    uStack_60 = 0;
    func_0x00010002c714(&uStack_60);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 107427074; end: 1074270a7;  */

void FUN_107427074(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100171ec4();
  _memcpy();
  func_0x00010028acf0(unaff_x20 + 0x88,unaff_x19 + 0x88);
  func_0x00010742b8ec();
  return;
}



/* Entry: 1074270a8; end: 1074270ff;  */

ulong FUN_1074270a8(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  ulong *unaff_x20;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 < 0xa3d70a3d70a3d8) {
    uVar6 = (param_1[2] - *param_1) / 400;
    uVar3 = uVar6 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x51eb851eb851ea < uVar6) {
      uVar3 = 0xa3d70a3d70a3d7;
    }
    return uVar3;
  }
  FUN_107427180();
  func_0x00010742b1d0();
  lVar5 = *param_1;
  lVar1 = param_1[1];
  uVar6 = extraout_x8 + ((lVar1 - lVar5) / -400) * 400;
  uVar3 = uVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 400) {
    FUN_107427074(uVar3,lVar4);
    uVar3 = uVar3 + 400;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 400) {
    uVar3 = lVar5 + 0x88;
    func_0x00010028ad98(uVar3);
  }
  *(ulong *)(unaff_x19 + 8) = uVar6;
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar6;
  unaff_x20[1] = uVar2;
  func_0x00010742ad40();
  return uVar3;
}



/* Entry: 107427100; end: 10742717f;  */

void FUN_107427100(long *param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x00010742b1d0();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = extraout_x8 + ((lVar1 - lVar4) / -400) * 400;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 400) {
    FUN_107427074(lVar2,lVar3);
    lVar2 = lVar2 + 400;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 400) {
    func_0x00010028ad98(lVar4 + 0x88);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x00010742ad40();
  return;
}



/* Entry: 107427180; end: 10742718b;  */

long * FUN_107427180(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong unaff_x20;
  long lVar3;
  
  func_0x00010742ae94();
  func_0x00010742af70();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (0xa3d70a3d70a3d7 < unaff_x20) {
      func_0x000104bd35f4();
      lVar3 = param_1[1];
      while (lVar2 = param_1[2], lVar3 != lVar2) {
        param_1[2] = lVar2 + -400;
        func_0x00010028ad98(lVar2 + -0x108);
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    plVar1 = (long *)(unaff_x20 * 400);
    __Znwm(plVar1);
  }
  func_0x00010742b3a8(400);
  return plVar1;
}



/* Entry: 10742718c; end: 1074271e7;  */

long * FUN_10742718c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong unaff_x20;
  long lVar3;
  
  func_0x00010742af70();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (0xa3d70a3d70a3d7 < unaff_x20) {
      func_0x000104bd35f4();
      lVar3 = param_1[1];
      while (lVar2 = param_1[2], lVar3 != lVar2) {
        param_1[2] = lVar2 + -400;
        func_0x00010028ad98(lVar2 + -0x108);
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    plVar1 = (long *)(unaff_x20 * 400);
    __Znwm(plVar1);
  }
  func_0x00010742b3a8(400);
  return plVar1;
}



/* Entry: 1074271e8; end: 107427233;  */

long * FUN_1074271e8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -400;
    func_0x00010028ad98(lVar1 + -0x108);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107427234; end: 107427257;  */

double FUN_107427234(float *param_1)

{
  return (double)-*param_1;
}



/* Entry: 107427258; end: 1074279af;  */

void FUN_107427258(ulong param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  byte *extraout_x8;
  byte *extraout_x8_00;
  byte *extraout_x8_01;
  byte *extraout_x8_02;
  byte *extraout_x8_03;
  byte *extraout_x8_04;
  byte *extraout_x8_05;
  byte *extraout_x8_06;
  byte *extraout_x8_07;
  byte *pbVar6;
  ulong uVar7;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong uVar8;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  long lVar9;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  byte *extraout_x8_19;
  byte *extraout_x8_20;
  undefined1 *extraout_x8_21;
  undefined1 *puVar10;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  int extraout_w9_05;
  int extraout_w9_06;
  int extraout_w9_07;
  undefined4 uVar11;
  int extraout_w9_08;
  int extraout_w9_09;
  int extraout_w9_10;
  int extraout_w9_11;
  uint uVar12;
  ulong uVar13;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  uint uVar14;
  ulong uVar15;
  ulong extraout_x10;
  ulong extraout_x10_00;
  int iVar16;
  ulong uVar17;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  undefined8 uVar18;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  byte *pbVar19;
  byte bVar20;
  byte *pbVar21;
  double dVar22;
  double dVar23;
  ulong in_stack_00000028;
  ulong uStack_20;
  uint uStack_18;
  byte *pbStack_10;
  long lStack_8;
  
  func_0x00010742bf10();
  func_0x00010742af70();
  pbVar19 = (byte *)*param_2;
  bVar20 = *pbVar19;
  if (bVar20 == 0x22) {
    func_0x00010742b4f8();
    lStack_8 = param_2[1];
    pbStack_10 = (byte *)(*param_2 + 1);
    uStack_18 = 0;
    uStack_20 = param_1;
    while( true ) {
      bVar20 = *pbStack_10;
      uVar14 = (uint)bVar20;
      cVar3 = SBORROW4(uVar14,0x5c);
      cVar4 = (int)(uVar14 - 0x5c) < 0;
      bVar5 = uVar14 == 0x5c;
      if (!bVar5) break;
      bVar20 = (&UNK_10de68d48)[pbStack_10[1]];
      if (bVar20 == 0) {
        lVar9 = (long)pbStack_10 - lStack_8;
        if (pbStack_10[1] != 0x75) {
          *(undefined4 *)(param_1 + 0x30) = 10;
          *(long *)(param_1 + 0x38) = lVar9;
          pbStack_10 = pbStack_10 + 1;
          goto LAB_107427bec;
        }
        pbStack_10 = pbStack_10 + 2;
        uVar7 = param_1;
        FUN_107427c54(param_1,&pbStack_10);
        if (*(int *)(param_1 + 0x30) != 0) goto LAB_107427bec;
        uVar17 = uVar7;
        if (((uint)(uVar7 >> 10) & 0x3fffff) == 0x36) {
          pbVar19 = pbStack_10;
          if ((*pbStack_10 == 0x5c) && (pbVar19 = pbStack_10 + 1, pbStack_10[1] == 0x75)) {
            pbStack_10 = pbStack_10 + 2;
            uVar17 = param_1;
            FUN_107427c54(param_1,&pbStack_10,lVar9);
            if (*(int *)(param_1 + 0x30) != 0) goto LAB_107427bec;
            pbVar19 = pbStack_10;
            if (0xfffffbff < (int)uVar17 - 0xe000U) {
              uVar17 = (ulong)((int)uVar17 + (int)uVar7 * 0x400 + 0xfca02400);
              in_stack_00000028 = uVar7;
              goto LAB_107427b00;
            }
          }
          pbStack_10 = pbVar19;
          *(undefined4 *)(param_1 + 0x30) = 9;
          goto LAB_107427be8;
        }
LAB_107427b00:
        func_0x000107303a70(&uStack_20,uVar17);
      }
      else {
        pbStack_10 = pbStack_10 + 2;
        func_0x00010742b4d8();
        pbVar19 = extraout_x8_20;
        if (bVar5 || cVar4 != cVar3) {
          func_0x00010742b508();
LAB_107427abc:
          pbVar19 = *(byte **)(in_stack_00000028 + 0x18);
        }
LAB_107427a68:
        *(byte **)(in_stack_00000028 + 0x18) = pbVar19 + 1;
        *pbVar19 = bVar20;
        uStack_18 = uStack_18 + 1;
      }
    }
    uVar14 = (uint)bVar20;
    cVar3 = SBORROW4(uVar14,0x22);
    cVar4 = (int)(uVar14 - 0x22) < 0;
    bVar5 = uVar14 == 0x22;
    if (bVar5) {
      pbStack_10 = pbStack_10 + 1;
      func_0x00010742b4d8();
      puVar10 = extraout_x8_21;
      if (bVar5 || cVar4 != cVar3) {
        func_0x00010742b508();
        puVar10 = *(undefined1 **)(in_stack_00000028 + 0x18);
      }
      *(undefined1 **)(in_stack_00000028 + 0x18) = puVar10 + 1;
      *puVar10 = 0;
      uStack_18 = uStack_18 + 1;
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_107427bec;
      *(ulong *)(uStack_20 + 0x18) = *(long *)(uStack_20 + 0x18) - (ulong)uStack_18;
      func_0x000107303940();
      if ((param_3 & 1) != 0) goto LAB_107427bec;
      lVar9 = (long)pbStack_10 - lStack_8;
      uVar11 = 0x10;
    }
    else {
      cVar3 = SBORROW4(uVar14,0x1f);
      uVar12 = (uint)bVar20;
      cVar4 = (int)(uVar12 - 0x1f) < 0;
      bVar5 = uVar12 == 0x1f;
      if (0x1f < uVar14) {
        bVar20 = *pbStack_10;
        pbStack_10 = pbStack_10 + 1;
        func_0x00010742b4d8();
        pbVar19 = extraout_x8_19;
        if (bVar5 || cVar4 != cVar3) {
          func_0x00010742b508();
          goto LAB_107427abc;
        }
        goto LAB_107427a68;
      }
      lVar9 = (long)pbStack_10 - lStack_8;
      if (uVar12 == 0) {
        uVar11 = 0xb;
      }
      else {
        uVar11 = 0xc;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = uVar11;
LAB_107427be8:
    *(long *)(param_1 + 0x38) = lVar9;
LAB_107427bec:
    param_2[1] = lStack_8;
    *param_2 = (long)pbStack_10;
    return;
  }
  if (bVar20 == 0x5b) {
    func_0x00010742b5a4(pbVar19 + 1);
    func_0x000107303f18();
    if ((param_1 & 1) != 0) {
      FUN_10742b2a4();
      if (extraout_w8_00 != 0) {
        return;
      }
      if (*(char *)*unaff_x20 == ']') {
        func_0x00010742b5a4((char *)*unaff_x20 + 1);
      }
      else {
        while( true ) {
          func_0x00010742b4f8();
          FUN_107427258();
          if (*(int *)(unaff_x19 + 0x30) != 0) {
            return;
          }
          FUN_10742b2a4();
          if (extraout_w8_05 != 0) {
            return;
          }
          func_0x00010742bdcc();
          if (extraout_w9_11 != 0x2c) break;
          *unaff_x20 = extraout_x8_14 + 1;
          FUN_10742b2a4();
          if (extraout_w8_06 != 0) {
            return;
          }
        }
        if (extraout_w9_11 != 0x5d) {
          func_0x00010742beec();
          uVar11 = 7;
          lVar9 = extraout_x8_18;
          goto LAB_107427770;
        }
        func_0x00010742b5a4(extraout_x8_14 + 1);
      }
      func_0x000107303f50();
joined_r0x00010742745c:
      if ((param_1 & 1) != 0) {
        return;
      }
    }
LAB_107427460:
    lVar9 = *unaff_x20 - unaff_x20[1];
    uVar11 = 0x10;
    goto LAB_107427770;
  }
  if (bVar20 == 0x66) {
    func_0x00010742ba34();
    pbVar6 = extraout_x8_02;
    if (((extraout_w9_02 == 0x61) &&
        (func_0x00010742ba24(), pbVar6 = extraout_x8_03, extraout_w9_03 == 0x6c)) &&
       (func_0x00010742ba14(), pbVar6 = extraout_x8_04, extraout_w9_04 == 0x73)) {
      pbVar6 = pbVar19 + 4;
      *unaff_x20 = (long)pbVar6;
      if (pbVar19[4] != 0x65) goto LAB_107427764;
      func_0x00010742b5a4(pbVar19 + 5);
LAB_107427358:
      func_0x0001073038fc();
joined_r0x00010742735c:
      if ((param_1 & 1) != 0) {
        return;
      }
      pbVar6 = (byte *)*unaff_x20;
      uVar11 = 0x10;
    }
    else {
LAB_107427764:
      uVar11 = 3;
    }
    lVar9 = (long)pbVar6 - unaff_x20[1];
LAB_107427770:
    *(undefined4 *)(unaff_x19 + 0x30) = uVar11;
    *(long *)(unaff_x19 + 0x38) = lVar9;
    return;
  }
  if (bVar20 == 0x7b) {
    func_0x00010742b5a4(pbVar19 + 1);
    func_0x000107303e70();
    if ((param_1 & 1) != 0) {
      FUN_10742b2a4();
      if (extraout_w8 != 0) {
        return;
      }
      if (*(char *)*unaff_x20 == '}') {
        func_0x00010742b5a4((char *)*unaff_x20 + 1);
      }
      else {
        while( true ) {
          func_0x00010742bdcc();
          if (extraout_w9_08 != 0x22) {
            func_0x00010742beec();
            uVar11 = 4;
            lVar9 = extraout_x8_16;
            goto LAB_107427770;
          }
          func_0x00010742b4f8();
          FUN_1074279e8();
          if (*(int *)(unaff_x19 + 0x30) != 0) {
            return;
          }
          FUN_10742b2a4();
          if (extraout_w8_01 != 0) {
            return;
          }
          func_0x00010742bdcc();
          if (extraout_w9_09 != 0x3a) {
            func_0x00010742beec();
            uVar11 = 5;
            lVar9 = extraout_x8_17;
            goto LAB_107427770;
          }
          *unaff_x20 = extraout_x8_12 + 1;
          FUN_10742b2a4();
          if (extraout_w8_02 != 0) {
            return;
          }
          func_0x00010742b4f8();
          FUN_107427258();
          if (*(int *)(unaff_x19 + 0x30) != 0) {
            return;
          }
          FUN_10742b2a4();
          if (extraout_w8_03 != 0) {
            return;
          }
          func_0x00010742bdcc();
          if (extraout_w9_10 != 0x2c) break;
          *unaff_x20 = extraout_x8_13 + 1;
          FUN_10742b2a4();
          if (extraout_w8_04 != 0) {
            return;
          }
        }
        if (extraout_w9_10 != 0x7d) {
          func_0x00010742beec();
          uVar11 = 6;
          lVar9 = extraout_x8_15;
          goto LAB_107427770;
        }
        func_0x00010742b5a4(extraout_x8_13 + 1);
      }
      func_0x000107303ea8();
      goto joined_r0x00010742745c;
    }
    goto LAB_107427460;
  }
  if (bVar20 == 0x74) {
    func_0x00010742ba34();
    pbVar6 = extraout_x8_05;
    if (((extraout_w9_05 == 0x72) &&
        (func_0x00010742ba24(), pbVar6 = extraout_x8_06, extraout_w9_06 == 0x75)) &&
       (func_0x00010742ba14(), pbVar6 = extraout_x8_07, extraout_w9_07 == 0x65)) {
      func_0x00010742b5a4(pbVar19 + 4);
      goto LAB_107427358;
    }
    goto LAB_107427764;
  }
  if (bVar20 == 0x6e) {
    func_0x00010742ba34();
    pbVar6 = extraout_x8;
    if (((extraout_w9 == 0x75) &&
        (func_0x00010742ba24(), pbVar6 = extraout_x8_00, extraout_w9_00 == 0x6c)) &&
       (func_0x00010742ba14(), pbVar6 = extraout_x8_01, extraout_w9_01 == 0x6c)) {
      func_0x00010742b5a4(pbVar19 + 4);
      func_0x0001073037d4();
      goto joined_r0x00010742735c;
    }
    goto LAB_107427764;
  }
  lVar9 = unaff_x20[1];
  pbVar6 = pbVar19;
  bVar1 = bVar20;
  if (bVar20 == 0x2d) {
    pbVar6 = pbVar19 + 1;
    bVar1 = pbVar19[1];
  }
  uVar14 = bVar1 - 0x30;
  uVar7 = (ulong)uVar14;
  if (uVar14 == 0) {
    uVar17 = 0;
    bVar5 = false;
    uVar13 = 0;
    bVar2 = false;
    dVar22 = 0.0;
    pbVar21 = pbVar6 + 1;
    uVar14 = (uint)*pbVar21;
    goto LAB_1074275a8;
  }
  if (bVar1 - 0x31 < 9) {
    pbVar21 = pbVar6 + 1;
    if (bVar20 == 0x2d) {
      uVar13 = 0;
      uVar17 = 0xccccccc;
      uVar18 = 0xccccccb;
      while( true ) {
        bVar1 = *pbVar21;
        uVar15 = (ulong)bVar1;
        if (9 < bVar1 - 0x30) break;
        if ((uint)uVar18 < (uint)uVar7) {
          if ((uint)uVar7 != (uint)uVar17) goto LAB_1074274d0;
          if (0x38 < bVar1) {
            uVar15 = 0x39;
            uVar7 = uVar17;
            goto LAB_1074274d0;
          }
        }
        func_0x00010742bed8();
        uVar7 = extraout_x8_08;
        uVar13 = extraout_x9;
        uVar17 = extraout_x11;
        uVar18 = extraout_x12;
      }
    }
    else {
      uVar13 = 0;
      uVar17 = 0x19999999;
      uVar18 = 0x19999998;
      while( true ) {
        bVar1 = *pbVar21;
        uVar15 = (ulong)bVar1;
        if (9 < bVar1 - 0x30) break;
        if (((uint)uVar18 < (uint)uVar7) &&
           (((uint)uVar7 != (uint)uVar17 || (uVar7 = uVar17, 0x35 < bVar1)))) goto LAB_1074274d0;
        func_0x00010742bed8();
        uVar7 = extraout_x8_09;
        uVar13 = extraout_x9_00;
        uVar17 = extraout_x11_00;
        uVar18 = extraout_x12_00;
      }
    }
    uVar14 = (uint)bVar1;
    uVar17 = 0;
    bVar5 = false;
    bVar2 = false;
    dVar22 = 0.0;
    goto LAB_1074275a8;
  }
  uVar11 = 3;
  pbVar21 = pbVar6;
  goto LAB_10742791c;
LAB_10742756c:
  dVar22 = (double)uVar17;
  while( true ) {
    uVar14 = (uint)uVar15;
    if (9 < uVar14 - 0x30) break;
    pbVar21 = pbVar21 + 1;
    uVar15 = (ulong)*pbVar21;
    dVar22 = (double)(uVar14 - 0x30) + dVar22 * 10.0;
  }
  bVar5 = true;
  goto LAB_1074275a0;
LAB_1074274d0:
  uVar17 = uVar7 & 0xffffffff;
  if (bVar20 == 0x2d) {
    uVar8 = 0xccccccccccccccb;
    while (uVar14 = (uint)uVar15, uVar14 - 0x30 < 10) {
      if ((uVar8 < uVar17) && ((uVar17 != uVar8 + 1 || (0x38 < uVar14)))) goto LAB_10742756c;
      func_0x00010742bb14();
      uVar8 = extraout_x8_10;
      uVar13 = extraout_x9_01;
      uVar15 = extraout_x10;
      uVar7 = extraout_x11_01;
    }
  }
  else {
    uVar8 = 0x1999999999999998;
    while (uVar14 = (uint)uVar15, uVar14 - 0x30 < 10) {
      if ((uVar8 < uVar17) && ((uVar17 != uVar8 + 1 || (0x35 < uVar14)))) goto LAB_10742756c;
      func_0x00010742bb14();
      uVar8 = extraout_x8_11;
      uVar13 = extraout_x9_02;
      uVar15 = extraout_x10_00;
      uVar7 = extraout_x11_02;
    }
  }
  bVar5 = false;
  dVar22 = 0.0;
LAB_1074275a0:
  bVar2 = true;
LAB_1074275a8:
  if (uVar14 == 0x2e) {
    pbVar6 = pbVar21 + 1;
    uVar14 = (uint)*pbVar6;
    if (*pbVar6 - 0x3a < 0xfffffff6) {
      uVar11 = 0xe;
      pbVar21 = pbVar6;
    }
    else {
      iVar16 = 0;
      if (!bVar5) {
        if (!bVar2) {
          uVar17 = uVar7 & 0xffffffff;
        }
        while ((('/' < (char)uVar14 && (uVar14 < 0x3a)) && (uVar17 >> 0x35 == 0))) {
          pbVar6 = pbVar6 + 1;
          uVar17 = (ulong)(uVar14 - 0x30) + uVar17 * 10;
          iVar16 = iVar16 + -1;
          uVar14 = (uint)uVar13;
          if (uVar17 != 0) {
            uVar14 = uVar14 + 1;
          }
          uVar13 = (ulong)uVar14;
          uVar14 = (uint)*pbVar6;
        }
        dVar22 = (double)uVar17;
      }
      while (pbVar21 = pbVar6, '/' < (char)uVar14) {
        if (0x39 < uVar14) {
          bVar5 = true;
          goto LAB_107427668;
        }
        if ((int)uVar13 < 0x11) {
          dVar22 = (double)(uVar14 - 0x30) + dVar22 * 10.0;
          iVar16 = iVar16 + -1;
          if (0.0 < dVar22) {
            uVar13 = (ulong)((int)uVar13 + 1);
          }
        }
        pbVar6 = pbVar6 + 1;
        uVar14 = (uint)*pbVar6;
      }
LAB_1074278f8:
      uVar12 = 0;
LAB_1074278fc:
      func_0x000107303fc0(iVar16 + uVar12);
      if (dVar22 <= 1.79769313486232e+308) {
        dVar23 = -dVar22;
        if (bVar20 != 0x2d) {
          dVar23 = dVar22;
        }
        func_0x000107303fdc(dVar23);
        goto LAB_107427940;
      }
LAB_107427914:
      uVar11 = 0xd;
      pbVar6 = pbVar19;
    }
  }
  else {
    iVar16 = 0;
LAB_107427668:
    if ((uVar14 | 0x20) == 0x65) {
      pbVar6 = pbVar21 + 1;
      bVar1 = *pbVar6;
      if (!bVar2) {
        uVar17 = uVar7 & 0xffffffff;
      }
      if (!bVar5) {
        dVar22 = (double)uVar17;
      }
      bVar5 = bVar1 != 0x2b;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
        pbVar6 = pbVar21 + 2;
        bVar1 = *pbVar6;
      }
      else {
        bVar5 = false;
      }
      uVar14 = bVar1 - 0x30;
      if (uVar14 < 10) {
        pbVar21 = pbVar6 + 1;
        if (bVar5) {
          pbVar6 = pbVar21;
          while (pbVar21 = pbVar6, *pbVar21 - 0x30 < 10) {
            uVar14 = ((uint)*pbVar21 + uVar14 * 10) - 0x30;
            pbVar6 = pbVar21 + 1;
            if ((iVar16 + 0x7ffffff7) / 10 < (int)uVar14) {
              do {
                pbVar21 = pbVar21 + 1;
                pbVar6 = pbVar21;
              } while (*pbVar21 - 0x30 < 10);
            }
          }
LAB_107427750:
          uVar12 = -uVar14;
          if (!bVar5) {
            uVar12 = uVar14;
          }
          goto LAB_1074278fc;
        }
        do {
          bVar1 = *pbVar21;
          if (9 < bVar1 - 0x30) goto LAB_107427750;
          pbVar21 = pbVar21 + 1;
          uVar14 = ((uint)bVar1 + uVar14 * 10) - 0x30;
        } while ((int)uVar14 <= 0x134 - iVar16);
        goto LAB_107427914;
      }
      uVar11 = 0xf;
      pbVar21 = pbVar6;
    }
    else {
      if (bVar5) goto LAB_1074278f8;
      if (bVar2) {
        if (bVar20 != 0x2d) {
          func_0x000107304060();
        }
        else {
          func_0x000107304024();
        }
      }
      else if (bVar20 != 0x2d) {
        func_0x0001073040e8();
      }
      else {
        func_0x00010730409c();
      }
LAB_107427940:
      if ((unaff_x21 & 1) != 0) goto LAB_107427944;
      uVar11 = 0x10;
      pbVar6 = pbVar19;
    }
  }
LAB_10742791c:
  *(undefined4 *)(unaff_x19 + 0x30) = uVar11;
  *(long *)(unaff_x19 + 0x38) = (long)pbVar6 - lVar9;
LAB_107427944:
  *unaff_x20 = (long)pbVar21;
  unaff_x20[1] = lVar9;
  return;
}



/* Entry: 1074279b0; end: 1074279e7;  */

void FUN_1074279b0(undefined8 *param_1)

{
  byte *pbVar1;
  
  for (pbVar1 = (byte *)*param_1;
      *pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0; pbVar1 = pbVar1 + 1) {
  }
  *param_1 = pbVar1;
  return;
}



/* Entry: 1074279e8; end: 107427c53;  */

void FUN_1074279e8(ulong param_1,long *param_2,ulong param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *extraout_x8;
  byte *extraout_x8_00;
  byte *pbVar6;
  undefined1 *extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong unaff_x21;
  byte bVar12;
  ulong uStack_70;
  uint uStack_68;
  byte *pbStack_60;
  long lStack_58;
  long *plStack_50;
  
  lStack_58 = param_2[1];
  pbStack_60 = (byte *)(*param_2 + 1);
  uStack_68 = 0;
  uStack_70 = param_1;
  plStack_50 = param_2;
  while( true ) {
    bVar12 = *pbStack_60;
    uVar9 = (uint)bVar12;
    cVar1 = SBORROW4(uVar9,0x5c);
    cVar2 = (int)(uVar9 - 0x5c) < 0;
    bVar3 = uVar9 == 0x5c;
    if (!bVar3) break;
    bVar12 = (&UNK_10de68d48)[pbStack_60[1]];
    if (bVar12 == 0) {
      lVar7 = (long)pbStack_60 - lStack_58;
      if (pbStack_60[1] != 0x75) {
        *(undefined4 *)(param_1 + 0x30) = 10;
        *(long *)(param_1 + 0x38) = lVar7;
        pbStack_60 = pbStack_60 + 1;
        goto LAB_107427bec;
      }
      pbStack_60 = pbStack_60 + 2;
      uVar4 = param_1;
      FUN_107427c54(param_1,&pbStack_60);
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_107427bec;
      uVar5 = uVar4;
      if (((uint)(uVar4 >> 10) & 0x3fffff) == 0x36) {
        pbVar6 = pbStack_60;
        if ((*pbStack_60 == 0x5c) && (pbVar6 = pbStack_60 + 1, pbStack_60[1] == 0x75)) {
          pbStack_60 = pbStack_60 + 2;
          uVar5 = param_1;
          FUN_107427c54(param_1,&pbStack_60,lVar7);
          if (*(int *)(param_1 + 0x30) != 0) goto LAB_107427bec;
          pbVar6 = pbStack_60;
          if (0xfffffbff < (int)uVar5 - 0xe000U) {
            uVar5 = (ulong)((int)uVar5 + (int)uVar4 * 0x400 + 0xfca02400);
            unaff_x21 = uVar4;
            goto LAB_107427b00;
          }
        }
        pbStack_60 = pbVar6;
        *(undefined4 *)(param_1 + 0x30) = 9;
        goto LAB_107427be8;
      }
LAB_107427b00:
      func_0x000107303a70(&uStack_70,uVar5);
    }
    else {
      pbStack_60 = pbStack_60 + 2;
      func_0x00010742b4d8();
      pbVar6 = extraout_x8_00;
      if (bVar3 || cVar2 != cVar1) {
        func_0x00010742b508();
LAB_107427abc:
        pbVar6 = *(byte **)(unaff_x21 + 0x18);
      }
LAB_107427a68:
      *(byte **)(unaff_x21 + 0x18) = pbVar6 + 1;
      *pbVar6 = bVar12;
      uStack_68 = uStack_68 + 1;
    }
  }
  uVar9 = (uint)bVar12;
  cVar1 = SBORROW4(uVar9,0x22);
  cVar2 = (int)(uVar9 - 0x22) < 0;
  bVar3 = uVar9 == 0x22;
  if (bVar3) {
    pbStack_60 = pbStack_60 + 1;
    func_0x00010742b4d8();
    puVar8 = extraout_x8_01;
    if (bVar3 || cVar2 != cVar1) {
      func_0x00010742b508();
      puVar8 = *(undefined1 **)(unaff_x21 + 0x18);
    }
    *(undefined1 **)(unaff_x21 + 0x18) = puVar8 + 1;
    *puVar8 = 0;
    uStack_68 = uStack_68 + 1;
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_107427bec;
    *(ulong *)(uStack_70 + 0x18) = *(long *)(uStack_70 + 0x18) - (ulong)uStack_68;
    func_0x000107303940();
    if ((param_3 & 1) != 0) goto LAB_107427bec;
    lVar7 = (long)pbStack_60 - lStack_58;
    uVar11 = 0x10;
  }
  else {
    cVar1 = SBORROW4(uVar9,0x1f);
    uVar10 = (uint)bVar12;
    cVar2 = (int)(uVar10 - 0x1f) < 0;
    bVar3 = uVar10 == 0x1f;
    if (0x1f < uVar9) {
      bVar12 = *pbStack_60;
      pbStack_60 = pbStack_60 + 1;
      func_0x00010742b4d8();
      pbVar6 = extraout_x8;
      if (bVar3 || cVar2 != cVar1) {
        func_0x00010742b508();
        goto LAB_107427abc;
      }
      goto LAB_107427a68;
    }
    lVar7 = (long)pbStack_60 - lStack_58;
    if (uVar10 == 0) {
      uVar11 = 0xb;
    }
    else {
      uVar11 = 0xc;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = uVar11;
LAB_107427be8:
  *(long *)(param_1 + 0x38) = lVar7;
LAB_107427bec:
  plStack_50[1] = lStack_58;
  *plStack_50 = (long)pbStack_60;
  return;
}


