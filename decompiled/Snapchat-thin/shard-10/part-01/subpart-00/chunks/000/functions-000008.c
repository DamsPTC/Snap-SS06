/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077fbb3c; end: 1077fbc77;  */

long FUN_1077fbb3c(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x8;
  undefined8 *puVar4;
  ulong *unaff_x19;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint6 uVar10;
  undefined8 uVar11;
  
  func_0x00010780907c();
  func_0x000107809a08();
  lVar6 = 0;
  uVar7 = *unaff_x19;
  uVar8 = unaff_x19[2];
  uVar3 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar1 = (byte)param_1;
  uVar10 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar8;
    uVar11 = *(undefined8 *)(uVar7 + uVar3);
    for (uVar9 = CONCAT17(-((byte)((ulong)uVar11 >> 0x38) == (bVar1 & 0x7f)),
                          CONCAT16(-((byte)((ulong)uVar11 >> 0x30) == (bVar1 & 0x7f)),
                                   CONCAT15(-((char)((ulong)uVar11 >> 0x28) ==
                                             (char)(uVar10 >> 0x28)),
                                            CONCAT14(-((char)((ulong)uVar11 >> 0x20) ==
                                                      (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-((char)((ulong)uVar11 >> 0x18) ==
                                                               (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-((char)((ulong)uVar11 >>
                                                                               0x10) ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar11 >> 8) == (char)(uVar10 >> 8)),
                                                  -((char)uVar11 == (char)uVar10)))))))) &
                 0x8080808080808080; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
      uVar2 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      param_1 = uVar3 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar8;
      uVar2 = unaff_x19[1] + param_1 * 0x58;
      func_0x000107809e1c();
      if ((uVar2 & 1) != 0) goto LAB_1077fbc34;
      param_1 = uVar2;
    }
    func_0x000107809b8c();
    if ((extraout_x8 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  func_0x0001078092c0();
  func_0x000107807be4();
  lVar5 = unaff_x19[1] + param_1 * 0x58;
  func_0x00010780918c();
  func_0x000104c2fe00();
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  func_0x000107807ddc(lVar5 + 0x40);
  lVar6 = *(long *)(lVar5 + 0x40);
  puVar4 = (undefined8 *)(lVar6 + 0x38);
  *puVar4 = 0;
  *(undefined8 **)(lVar6 + 0x40) = puVar4;
  *(undefined8 **)(lVar6 + 0x48) = puVar4;
  *(long *)(lVar6 + 0x50) = lVar6 + 0x50;
  *(long *)(lVar6 + 0x58) = lVar6 + 0x50;
  *(undefined8 *)(lVar5 + 0x50) = 0;
LAB_1077fbc34:
  return unaff_x19[1] + param_1 * 0x58 + 0x38;
}



/* Entry: 1077fc1d8; end: 1077fc203;  */

void FUN_1077fc1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_1077feb9c(param_1,param_2,param_3,param_4,&uStack_11);
  return;
}



/* Entry: 1077fd49c; end: 1077fdd2b;  */

void FUN_1077fd49c(undefined8 *param_1,undefined8 param_2,long ***param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 in_ZR;
  bool bVar10;
  long *****ppppplVar11;
  long ***ppplVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  uint uVar15;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  long **pplVar16;
  long ****extraout_x8_01;
  long ****extraout_x8_02;
  long ****extraout_x8_03;
  long ****pppplVar17;
  long ****extraout_x8_04;
  uint uVar18;
  long ****extraout_x9;
  long ****extraout_x9_00;
  long ****extraout_x9_01;
  long ****pppplVar19;
  long ****extraout_x9_02;
  long ***extraout_x10;
  long ***extraout_x10_00;
  long ***extraout_x10_01;
  long ***extraout_x10_02;
  long ***extraout_x11;
  long ***extraout_x11_00;
  long ***extraout_x11_01;
  long ***extraout_x11_02;
  long ***extraout_x12;
  long ***extraout_x12_00;
  long ***extraout_x12_01;
  long ***ppplVar20;
  long ***extraout_x12_02;
  long ***ppplVar21;
  long lVar22;
  long *****ppppplVar23;
  long ***ppplVar24;
  long *****unaff_x25;
  long ***unaff_x26;
  long ***ppplVar25;
  ulong unaff_x30;
  float fVar26;
  double dVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  undefined1 auVar38 [16];
  float fVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined8 unaff_d8;
  ulong unaff_d9;
  float fVar45;
  undefined8 in_stack_00000090;
  undefined8 uVar46;
  long *****ppppplVar47;
  undefined8 *puVar48;
  undefined *puVar49;
  double dStack_610;
  long ****apppplStack_5f0 [2];
  char cStack_5d9;
  undefined8 uStack_5d8;
  int iStack_5d0;
  int iStack_5cc;
  int iStack_5c8;
  double dStack_5c0;
  double dStack_5b8;
  double dStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  long *plStack_588;
  undefined8 **ppuStack_578;
  long ****pppplStack_570;
  undefined8 ***pppuStack_568;
  long ***ppplStack_560;
  long ***ppplStack_558;
  undefined8 uStack_550;
  undefined8 **ppuStack_548;
  undefined8 **ppuStack_540;
  undefined8 uStack_538;
  undefined8 **ppuStack_530;
  code *pcStack_528;
  undefined *puStack_520;
  undefined *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 *puStack_4e8;
  long **pplStack_4e0;
  long **pplStack_4d8;
  undefined8 uStack_4d0;
  long **pplStack_4c8;
  long **pplStack_4c0;
  long **pplStack_4b8;
  long **pplStack_4b0;
  long **pplStack_4a8;
  long **pplStack_4a0;
  undefined8 uStack_498;
  int iStack_490;
  long alStack_468 [72];
  long *plStack_228;
  long *plStack_220;
  long lStack_218;
  long **pplStack_210;
  long **pplStack_208;
  long lStack_200;
  long lStack_1f8;
  long ***ppplStack_1f0;
  long ****pppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long **pplStack_1c8;
  long ****pppplStack_1c0;
  long alStack_1b8 [52];
  undefined8 uStack_18;
  
  func_0x000107809884();
  puVar48 = &stack0x00000090;
  func_0x000107808a58();
  uStack_18 = extraout_x8_00;
  func_0x0001077fbeb0();
  ppppplVar47 = apppplStack_5f0;
  func_0x00010002b838(ppppplVar47,"");
  uStack_5d8 = 0;
  iStack_5d0 = 0;
  iStack_5cc = 0;
  iStack_5c8 = 0;
  dStack_5b8 = 0.0;
  dStack_5c0 = 0.0;
  uStack_5a8 = 0;
  dStack_5b0 = 0.0;
  ppppplVar23 = (long *****)*param_1;
  ppppplVar14 = (long *****)0x2;
  ppppplVar11 = ppppplVar23;
  ppplVar25 = param_3;
  func_0x000109752c30(ppppplVar23,param_3,2);
  ppplVar21 = (long ***)0x1;
  if ((int)ppppplVar11 == 0) {
    pppplVar17 = ppppplVar23[0x13];
    pppplVar19 = ppppplVar23[0x14];
    dStack_5b8 = (double)(long)pppplVar19[8];
    dStack_5c0 = (double)(int)((long)pppplVar17[10] / 0x40);
    auVar29._0_8_ =
         (long)(int)((long)pppplVar19[6] + (-(ulong)((long)pppplVar19[6] < 0) >> 0x3a) >> 6);
    auVar29._8_8_ =
         (long)(int)((long)pppplVar19[7] + (-(ulong)((long)pppplVar19[7] < 0) >> 0x3a) >> 6);
    auVar29 = NEON_scvtf(auVar29,8);
    uStack_5a8 = auVar29._8_8_;
    dStack_5b0 = auVar29._0_8_;
    puStack_518 = &DAT_1077fb4d8;
    puStack_520 = &DAT_1077fb318;
    uStack_508 = 0;
    uStack_510 = 0;
    uStack_538 = 0;
    ppuStack_540 = (long **)0x0;
    pcStack_528 = FUN_1077fb2f4;
    ppuStack_530 = (undefined8 **)&DAT_1077fb1f0;
    ppplStack_558 = (long ***)0x0;
    ppplStack_560 = (long ***)0x0;
    ppuStack_548 = (long **)0x0;
    uStack_550 = 0;
    in_ZR = *(int *)(pppplVar17 + 0x12) == 0x6f75746c;
    if ((bool)in_ZR) {
      pplStack_4c0 = (long **)pppplVar17[0x19];
      pplStack_4b8 = (long **)pppplVar17[0x1a];
      pplStack_4b0 = (long **)pppplVar17[0x1b];
      pplStack_4a8 = (long **)pppplVar17[0x1c];
      pplStack_4a0 = (long **)pppplVar17[0x1d];
      ppplVar21 = &pplStack_4c0;
      ppplVar25 = &ppuStack_530;
      ppppplVar14 = (long *****)&ppplStack_560;
      func_0x00010975687c(ppplVar21,ppplVar25,ppppplVar14);
      if ((int)ppplVar21 == 0) {
        if (ppuStack_548 != ppuStack_540) {
          func_0x0001077fb134(&ppuStack_548);
          ppplVar25 = &ppuStack_548;
          func_0x0001077fe270(&ppplStack_560);
        }
        ppplVar21 = ppplStack_558;
        if (ppplStack_560 == ppplStack_558) {
          in_ZR = (short)pplStack_4c0 == 0;
          uVar15 = 0;
          if (!(bool)in_ZR) {
            uVar15 = 3;
          }
          ppplVar21 = (long ***)(ulong)uVar15;
        }
        else {
          auVar30._8_8_ = 0xfff0000000000000;
          auVar30._0_8_ = 0xfff0000000000000;
          auVar38._8_8_ = 0x7ff0000000000000;
          auVar38._0_8_ = 0x7ff0000000000000;
          for (pppplVar17 = (long ****)ppplStack_560; pppplVar17 != (long ****)ppplStack_558;
              pppplVar17 = pppplVar17 + 3) {
            for (ppplVar12 = *pppplVar17; ppplVar12 != pppplVar17[1]; ppplVar12 = ppplVar12 + 1) {
              auVar41._0_8_ = (double)SUB84(*ppplVar12,0);
              auVar41._8_8_ = (double)(float)((ulong)*ppplVar12 >> 0x20);
              lVar7 = -(ulong)(auVar41._8_8_ < auVar38._8_8_);
              auVar8._8_8_ = -(ulong)(auVar30._8_8_ < auVar41._8_8_);
              auVar8._0_8_ = -(ulong)(auVar30._0_8_ < auVar41._0_8_);
              auVar30 = auVar30 ^ (auVar30 ^ auVar41) & auVar8;
              auVar2._8_4_ = (int)lVar7;
              auVar2._0_8_ = -(ulong)(auVar41._0_8_ < auVar38._0_8_);
              auVar2._12_4_ = (int)((ulong)lVar7 >> 0x20);
              auVar38 = auVar38 ^ (auVar38 ^ auVar41) & auVar2;
            }
          }
          dVar37 = (double)(long)auVar38._0_8_;
          auVar29 = NEON_fmov(0x4008000000000000,8);
          for (pppplVar17 = (long ****)ppplStack_560; pppplVar17 != (long ****)ppplStack_558;
              pppplVar17 = pppplVar17 + 3) {
            ppplVar24 = pppplVar17[1];
            for (ppplVar12 = *pppplVar17; ppplVar12 != ppplVar24; ppplVar12 = ppplVar12 + 1) {
              dVar40 = ((double)SUB84(*ppplVar12,0) - dVar37) + auVar29._0_8_;
              dVar27 = ((double)(float)((ulong)*ppplVar12 >> 0x20) - (double)(long)auVar38._8_8_) +
                       auVar29._8_8_;
              auVar3._8_4_ = SUB84(dVar27,0);
              auVar3._0_8_ = dVar40;
              auVar3._12_4_ = (int)((ulong)dVar27 >> 0x20);
              *ppplVar12 = (long **)CONCAT44((float)auVar3._8_8_,(float)dVar40);
            }
          }
          dVar40 = (double)(long)auVar30._0_8_ - dVar37;
          in_ZR = dVar40 == 0.0;
          if (!(bool)in_ZR) {
            dVar27 = (double)(long)auVar30._8_8_ - (double)(long)auVar38._8_8_;
            in_ZR = dVar27 == 0.0;
            if (!(bool)in_ZR) {
              iStack_5d0 = (int)(double)(long)auVar30._8_8_;
              uStack_5d8 = CONCAT44((int)dVar37,(undefined4)uStack_5d8);
              iStack_5cc = (int)dVar40;
              iStack_5c8 = (int)dVar27;
              ppuStack_578 = (long **)0x0;
              pppplStack_570 = (long ****)0x0;
              pppuStack_568 = (long ***)0x0;
              unaff_x25 = &pppplStack_570;
              for (pppplVar17 = (long ****)ppplStack_560; pppplVar17 != (long ****)ppplVar21;
                  pppplVar17 = pppplVar17 + 3) {
                ppplVar25 = *pppplVar17;
                ppplVar12 = ppplVar25;
                while( true ) {
                  ppplVar24 = ppplVar12 + 1;
                  if (ppplVar24 == pppplVar17[1]) break;
                  plStack_588 = (long *)*ppplVar24;
                  fVar33 = *(float *)((long)ppplVar12 + 0xc);
                  plStack_590 = (long *)*ppplVar25;
                  fVar45 = SUB84(plStack_588,0);
                  fVar36 = SUB84(plStack_590,0);
                  fVar44 = *(float *)((long)ppplVar25 + 4);
                  auVar4._4_4_ = fVar33;
                  auVar4._0_4_ = fVar45;
                  auVar4._8_4_ = fVar36;
                  auVar4._12_4_ = fVar44;
                  auVar5._4_4_ = fVar33;
                  auVar5._0_4_ = fVar45;
                  auVar5._8_4_ = fVar36;
                  auVar5._12_4_ = fVar44;
                  auVar29 = NEON_ext(auVar4,auVar5,0xc,1);
                  auVar31._0_8_ = CONCAT44(fVar33,fVar45);
                  auVar31._8_8_ = auVar31._0_8_;
                  auVar42._0_8_ = CONCAT44(fVar44,fVar36);
                  auVar42._8_8_ = auVar42._0_8_;
                  auVar6._4_4_ = -(uint)(fVar33 < auVar29._0_4_);
                  auVar6._0_4_ = -(uint)(fVar45 < fVar36);
                  auVar6._8_4_ = -(uint)(fVar36 < fVar45);
                  auVar6._12_4_ = -(uint)(fVar44 < auVar29._8_4_);
                  auVar31 = auVar31 ^ (auVar31 ^ auVar42) & ~auVar6;
                  auVar32._0_4_ = (int)auVar31._0_4_;
                  auVar32._4_4_ = (int)auVar31._4_4_;
                  auVar32._8_4_ = (int)auVar31._8_4_;
                  auVar32._12_4_ = (int)auVar31._12_4_;
                  auVar29 = NEON_scvtf(auVar32,4);
                  uStack_598 = auVar29._8_8_;
                  uStack_5a0 = auVar29._0_8_;
                  if (pppuStack_568 == (long ***)0x0) {
                    ppplVar12 = &ppuStack_578;
                    func_0x0001077ffe04();
                    pppplStack_570 = (long ****)0x0;
                    pppuStack_568 = ppplVar12;
                    ppuStack_578 = (long **)0x0;
                  }
                  uStack_4f8 = &pppuStack_568;
                  uStack_4f0 = unaff_x25;
                  puStack_4e8 = &uStack_5a0;
                  pplStack_4e0 = (long **)&ppuStack_578;
                  pplStack_4d8 = (long **)&ppuStack_578;
                  uStack_4d0 = 0;
                  pplStack_4c8 = (long **)&ppuStack_578;
                  if (*(int *)pppuStack_568 == *(int *)pppuStack_568 >> 0x1f) {
                    func_0x0001078092d8();
                    func_0x0001077ffe58();
                  }
                  else {
                    func_0x0001078092d8();
                    func_0x0001077ffe58();
                    lVar7 = alStack_468[2];
                    if (alStack_468[3] != 0) {
                      pplVar16 = (long **)(alStack_468 + alStack_468[3] * 4);
                      for (lVar22 = alStack_468[3] * -0x20; lVar22 != 0; lVar22 = lVar22 + 0x20) {
                        lStack_200 = lVar7;
                        lStack_1f8 = (long)pppplStack_570 - lVar7;
                        uStack_1d8 = 0;
                        uStack_1d0 = 0;
                        uStack_1e0 = 0;
                        plStack_220 = *pplVar16;
                        lStack_218 = (long)pplVar16[1];
                        pppplStack_1c0 = (long ****)0x0;
                        alStack_1b8[0] = 0;
                        plStack_228 = (long *)pplVar16;
                        pplStack_210 = (long **)&ppuStack_578;
                        pplStack_208 = (long **)&ppuStack_578;
                        ppplStack_1f0 = (long ***)&pppuStack_568;
                        pppplStack_1e8 = (long ****)unaff_x25;
                        pplStack_1c8 = (long **)&ppuStack_578;
                        func_0x000107807154(pppuStack_568,&plStack_228);
                        ppppplVar14 = (long *****)pppplStack_1c0;
                        if ((pppplStack_1c0 < pppplStack_570) && (alStack_1b8[0] != 0)) {
                          func_0x000107806ffc(&uStack_4f8,alStack_1b8);
                        }
                        pplVar16 = pplVar16 + -4;
                      }
                    }
                  }
                  ppuStack_578 = (long **)((long)ppuStack_578 + 1);
                  ppplVar25 = ppplVar25 + 1;
                  ppplVar12 = ppplVar24;
                }
              }
              uVar15 = iStack_5cc + 6;
              ppppplVar23 = (long *****)(ulong)uVar15;
              uVar1 = iStack_5c8 + 6;
              ppplVar25 = (long ***)(ulong)(uVar1 * uVar15);
              func_0x0001001548a8(ppppplVar47);
              unaff_d8 = 0x3f000000;
              unaff_x26 = (long ***)&plStack_228;
              dStack_610 = 255.0;
              for (uVar18 = 0; in_ZR = uVar18 == uVar1, !(bool)in_ZR; uVar18 = uVar18 + 1) {
                fVar33 = (float)uVar18 + 0.5;
                unaff_d9 = (ulong)(uint)fVar33;
                for (unaff_x25 = (long *****)0x0; unaff_x25 != ppppplVar23;
                    unaff_x25 = (long *****)((long)unaff_x25 + 1)) {
                  fVar45 = (float)((ulong)unaff_x25 & 0xffffffff) + 0.5;
                  plStack_220 = (long *)0x0;
                  plStack_228 = (long *)0x0;
                  lStack_218 = 0;
                  uStack_4f8 = (undefined8 ****)CONCAT44(fVar33 + -8.0,fVar45 + -8.0);
                  uStack_4f0 = (long *****)CONCAT44(fVar33 + 8.0,fVar45 + 8.0);
                  ppplVar25 = pppuStack_568;
                  if (pppuStack_568 != (long ***)0x0) {
                    pplStack_4a0 = (long **)0x0;
                    ppppplVar14 = (long *****)pppplStack_570;
                    pplStack_4c0 = (long **)&ppuStack_578;
                    pplStack_4b0 = (long **)&uStack_4f8;
                    pplStack_4a8 = (long **)unaff_x26;
                    func_0x0001077ff8c0(&pplStack_4c0,pppuStack_568,pppplStack_570);
                  }
                  dVar37 = INFINITY;
                  for (pplVar16 = (long **)plStack_228; pplVar16 != (long **)plStack_220;
                      pplVar16 = pplVar16 + 4) {
                    fVar43 = *(float *)(pplVar16 + 2);
                    fVar39 = *(float *)((long)pplVar16 + 0x14);
                    fVar26 = *(float *)(pplVar16 + 3);
                    fVar34 = *(float *)((long)pplVar16 + 0x1c);
                    fVar36 = (fVar39 - fVar34) * (fVar39 - fVar34) +
                             (fVar43 - fVar26) * (fVar43 - fVar26);
                    fVar44 = fVar43;
                    fVar35 = fVar39;
                    if (fVar36 != 0.0) {
                      fVar36 = ((fVar33 - fVar39) * (fVar34 - fVar39) +
                               (fVar26 - fVar43) * (fVar45 - fVar43)) / fVar36;
                      if ((0.0 <= fVar36) && (fVar44 = fVar26, fVar35 = fVar34, fVar36 <= 1.0)) {
                        fVar44 = fVar43 + (fVar26 - fVar43) * fVar36;
                        fVar35 = fVar39 + (fVar34 - fVar39) * fVar36;
                      }
                    }
                    dVar40 = (double)(fVar33 - fVar35) * (double)(fVar33 - fVar35) +
                             (double)(fVar45 - fVar44) * (double)(fVar45 - fVar44);
                    bVar9 = false;
                    if ((dVar40 < 64.0) && (bVar9 = false, !NAN(dVar40) && !NAN(dVar37))) {
                      bVar9 = dVar40 < dVar37;
                    }
                    if (!bVar9) {
                      dVar40 = dVar37;
                    }
                    dVar37 = dVar40;
                  }
                  func_0x0001077fe550(&plStack_228);
                  fVar45 = 0.0;
                  pppplVar19 = (long ****)ppplStack_558;
                  for (pppplVar17 = (long ****)ppplStack_560; pppplVar17 != pppplVar19;
                      pppplVar17 = pppplVar17 + 3) {
                    ppplVar21 = *pppplVar17;
                    ppplVar12 = pppplVar17[1];
                    ppplVar24 = ppplVar21;
                    while (ppplVar20 = ppplVar24 + 1, ppplVar20 != ppplVar12) {
                      fVar36 = *(float *)((long)ppplVar21 + 4);
                      fVar44 = *(float *)((long)ppplVar24 + 0xc);
                      bVar9 = false;
                      if ((fVar36 < fVar33) && (bVar9 = false, !NAN(fVar33) && !NAN(fVar44))) {
                        bVar9 = fVar33 < fVar44;
                      }
                      if (bVar9) {
                        uVar28 = func_0x000107808ab4();
                        fVar45 = (float)uVar28 + 1.0;
                        pppplVar17 = extraout_x8_02;
                        pppplVar19 = extraout_x9_00;
                        ppplVar21 = extraout_x10_00;
                        ppplVar12 = extraout_x11_00;
                        ppplVar20 = extraout_x12_00;
LAB_1077fdbd8:
                        if ((float)((ulong)uVar28 >> 0x20) <= 0.0) {
                          fVar45 = (float)uVar28;
                        }
                      }
                      else {
                        bVar9 = false;
                        if ((fVar33 < fVar36) && (bVar9 = false, !NAN(fVar44) && !NAN(fVar33))) {
                          bVar9 = fVar44 < fVar33;
                        }
                        if (bVar9) {
                          uVar28 = func_0x000107808ab4();
                          fVar45 = (float)uVar28 + -1.0;
                          pppplVar17 = extraout_x8_03;
                          pppplVar19 = extraout_x9_01;
                          ppplVar21 = extraout_x10_01;
                          ppplVar12 = extraout_x11_01;
                          ppplVar20 = extraout_x12_01;
LAB_1077fdbec:
                          if (0.0 <= (float)((ulong)uVar28 >> 0x20)) {
                            fVar45 = (float)uVar28;
                          }
                        }
                        else {
                          bVar9 = false;
                          if ((fVar33 == fVar44) && (bVar9 = false, !NAN(fVar36) && !NAN(fVar33))) {
                            bVar9 = fVar36 < fVar33;
                          }
                          bVar10 = false;
                          if ((fVar33 < fVar44) && (bVar10 = false, !NAN(fVar36) && !NAN(fVar33))) {
                            bVar10 = fVar36 == fVar33;
                          }
                          if ((bVar10) || (bVar9)) {
                            uVar28 = func_0x000107808ab4();
                            fVar45 = (float)uVar28 + 0.5;
                            pppplVar17 = extraout_x8_04;
                            pppplVar19 = extraout_x9_02;
                            ppplVar21 = extraout_x10_02;
                            ppplVar12 = extraout_x11_02;
                            ppplVar20 = extraout_x12_02;
                            goto LAB_1077fdbd8;
                          }
                          bVar9 = false;
                          if ((fVar44 < fVar33) && (bVar9 = false, !NAN(fVar36) && !NAN(fVar33))) {
                            bVar9 = fVar36 == fVar33;
                          }
                          bVar10 = false;
                          if ((fVar33 == fVar44) && (bVar10 = false, !NAN(fVar33) && !NAN(fVar36)))
                          {
                            bVar10 = fVar33 < fVar36;
                          }
                          if ((bVar9) || (bVar10)) {
                            uVar28 = func_0x000107808ab4();
                            fVar45 = (float)uVar28 + -0.5;
                            pppplVar17 = extraout_x8_01;
                            pppplVar19 = extraout_x9;
                            ppplVar21 = extraout_x10;
                            ppplVar12 = extraout_x11;
                            ppplVar20 = extraout_x12;
                            goto LAB_1077fdbec;
                          }
                        }
                      }
                      ppplVar21 = ppplVar21 + 1;
                      ppplVar24 = ppplVar20;
                    }
                  }
                  dVar40 = -(SQRT(dVar37) * 32.0);
                  if (fVar45 == 0.0) {
                    dVar40 = SQRT(dVar37) * 32.0;
                  }
                  dVar37 = dStack_610;
                  if (dVar40 + 64.0 <= 255.0) {
                    dVar37 = dVar40 + 64.0;
                  }
                  ppppplVar11 = (long *****)apppplStack_5f0[0];
                  if (-1 < cStack_5d9) {
                    ppppplVar11 = ppppplVar47;
                  }
                  *(byte *)((long)ppppplVar11 + (ulong)((uVar1 + ~uVar18) * uVar15 + (int)unaff_x25)
                           ) = ~((byte)(int)dVar37 & ((byte)((int)dVar37 >> 0x1f) ^ 0xff));
                }
              }
              func_0x0001077ffcd8(&ppuStack_578);
              ppplVar21 = (long ***)0x0;
              param_3 = (long ***)((ulong)param_3 & 0xffffffff);
              goto LAB_1077fd5c8;
            }
          }
          ppplVar21 = (long ***)0x5;
        }
      }
      else {
        ppplVar21 = (long ***)0x2;
      }
    }
    else {
      ppplVar21 = (long ***)0x4;
    }
LAB_1077fd5c8:
    func_0x0001077fe578(&ppplStack_560);
    if ((int)ppplVar21 == 0) {
      ppplVar21 = &pplStack_4c0;
      pplStack_4b8 = (long **)0x0;
      pplStack_4b0 = (long **)0x0;
      pplStack_4a8 = (long **)CONCAT62(pplStack_4a8._2_6_,1);
      pplStack_4a0 = (long **)0x0;
      uStack_498 = 0;
      iStack_490 = 0;
      pplStack_4c0 = (long **)CONCAT62(pplStack_4c0._2_6_,(short)param_3);
      in_ZR = cStack_5d9 == '\0';
      ppppplVar14 = (long *****)apppplStack_5f0[0];
      if (-1 < cStack_5d9) {
        ppppplVar14 = ppppplVar47;
      }
      unaff_x30 = (ulong)(uint)((iStack_5c8 + 6) * (iStack_5cc + 6));
      func_0x0001078081c4(&plStack_228,CONCAT44(iStack_5c8 + 6,iStack_5cc + 6),ppppplVar14,unaff_x30
                         );
      func_0x0001073c81ec(&pplStack_4b8,&plStack_228);
      func_0x0001073c7fd0(&plStack_228);
      iStack_490 = (int)dStack_5c0;
      pplStack_4a0 = (long **)CONCAT44(iStack_5c8,iStack_5cc);
      uStack_498 = CONCAT44((int)((double)iStack_5d0 - dStack_5b0),uStack_5d8._4_4_);
      ppplVar25 = &pplStack_4c0;
      func_0x0001077ff6dc(extraout_x8);
      func_0x0001073c7fd0(&pplStack_4b8);
      goto LAB_1077fd5dc;
    }
  }
  *extraout_x8 = (int)ppplVar21;
  extraout_x8[0xe] = 1;
LAB_1077fd5dc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppplVar47);
  func_0x0001078087c4(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ffcd8(&ppuStack_578);
  func_0x0001077fe578(&ppplStack_560);
  ppppplVar11 = ppppplVar47;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  do {
    func_0x000107809184();
  } while ((int)ppplVar25 == 0);
  ppppplVar13 = ppppplVar11;
  uVar28 = func_0x000104bd46a0();
  uVar46 = 1;
  puVar49 = &DAT_1077fdd2c;
  func_0x0001077fbeb0();
  func_0x000107812ea4(uVar28,ppppplVar13[1],ppplVar25,ppppplVar14,unaff_x30,param_5,param_6,param_7,
                      param_8,unaff_d9,unaff_d8,unaff_x26,unaff_x25,uVar46,param_3,ppppplVar23,
                      ppppplVar47,ppppplVar11,ppplVar21,puVar48,puVar49);
  return;
}



/* Entry: 1077fe164; end: 1077fe1b7;  */

void FUN_1077fe164(void)

{
  func_0x0001077ff85c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077fe494; end: 1077fe49f;  */

long * FUN_1077fe494(long *param_1)

{
  long lVar1;
  
  func_0x0001078090a4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001077fe47c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1077fe9c8; end: 1077fea77;  */

void FUN_1077fe9c8(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_DAT_1109df9e0;
  return;
}



/* Entry: 1077feb9c; end: 1077febf7;  */

/* WARNING: Possible PIC construction at 0x0001077febf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077febe4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077febe8) */
/* WARNING: Removing unreachable block (ram,0x00010002c808) */

void FUN_1077feb9c(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar9;
  undefined *puVar10;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = (undefined1 **)&stack0xffffffffffffffe0;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar4 = (ulong)*(char *)((long)param_2 + 0x17);
  if ((long)uVar4 < 0) {
    uVar4 = param_2[1];
    if (uVar4 < param_3) goto code_r0x0001077febf8;
    param_2 = (undefined8 *)*param_2;
LAB_1077febd0:
    param_2 = (undefined8 *)((long)param_2 + param_3 * 2);
    param_3 = uVar4 - param_3;
    if (param_4 <= param_3) {
      param_3 = param_4;
    }
    puVar10 = (undefined *)0x1077febe8;
    puVar2 = param_1;
  }
  else {
    if (param_3 <= uVar4) goto LAB_1077febd0;
code_r0x0001077febf8:
    ppuVar1 = &puStack_30;
    puStack_28 = &SUB_1077febf8;
    puVar2 = (undefined8 *)&DAT_10f2fca96;
    puVar10 = &SUB_1077fec0c;
    puStack_30 = (undefined1 *)ppuVar9;
    func_0x000104c03f28();
    ppuVar9 = &puStack_30;
  }
  *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
  *(undefined8 **)((long)ppuVar1 + -0x18) = param_1;
  *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar9;
  *(undefined **)((long)ppuVar1 + -8) = puVar10;
  if (0x7ffffffffffffff6 < param_3) {
    func_0x000107407b68();
    plVar5 = param_2 + 1;
    lVar6 = *plVar5;
    *puVar2 = *param_2;
    plVar7 = puVar2 + 1;
    *plVar7 = lVar6;
    lVar8 = param_2[2];
    puVar2[2] = lVar8;
    if (lVar8 == 0) {
      *puVar2 = plVar7;
      return;
    }
    *(long **)(lVar6 + 0x10) = plVar7;
    *param_2 = plVar5;
    *plVar5 = 0;
    param_2[2] = 0;
    return;
  }
  puVar3 = puVar2;
  if (param_3 < 0xb) {
    *(char *)((long)puVar2 + 0x17) = (char)param_3;
    if (param_3 == 0) goto code_r0x0001077fec84;
  }
  else {
    uVar4 = 0xd;
    if ((param_3 | 3) != 0xb) {
      uVar4 = (param_3 | 3) + 1;
    }
    func_0x000107407b7c();
    puVar2[1] = param_3;
    puVar2[2] = uVar4 | 0x8000000000000000;
    *puVar2 = puVar3;
  }
  _memmove(puVar3,param_2,param_3 << 1);
  puVar2 = puVar3;
code_r0x0001077fec84:
  *(undefined2 *)((long)puVar2 + param_3 * 2) = 0;
  return;
}



/* Entry: 1077fee4c; end: 1077fee5f;  */

void FUN_1077fee4c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x0001077fec94();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 1077ff084; end: 1077ff0b3;  */

long FUN_1077ff084(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x0001077ff0b4(param_1);
  }
  return param_1;
}



/* Entry: 1077ff2a0; end: 1077ff303;  */

undefined8 FUN_1077ff2a0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001077ff2cc(&uStack_28);
  return param_1;
}



/* Entry: 1077ff588; end: 1077ff5cf;  */

void FUN_1077ff588(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078096e0();
  func_0x00010002c7d4();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1077ff744; end: 1077ff7a7;  */

void FUN_1077ff744(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001077ff7d0(param_1,&uStack_30,param_2[2]);
  func_0x000107809e50();
  return;
}



/* Entry: 1077ffb40; end: 1077ffb6b;  */

long FUN_1077ffb40(long param_1)

{
  func_0x0001053010fc(param_1 + 8);
  __ZNSt9exceptionD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 1077ffccc; end: 1077ffcd7;  */

undefined8 * FUN_1077ffccc(undefined8 *param_1)

{
  func_0x0001078090a4();
  if (param_1[2] != 0) {
    func_0x0001077ffd0c(param_1[2],param_1);
    param_1[2] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



/* Entry: 1078002d0; end: 1078010f3;  */

/* WARNING: Removing unreachable block (ram,0x0001078003c8) */
/* WARNING: Removing unreachable block (ram,0x0001078003e8) */
/* WARNING: Removing unreachable block (ram,0x0001078003f8) */
/* WARNING: Removing unreachable block (ram,0x000107800410) */
/* WARNING: Removing unreachable block (ram,0x000107800418) */
/* WARNING: Removing unreachable block (ram,0x000107800428) */
/* WARNING: Removing unreachable block (ram,0x00010780042c) */
/* WARNING: Removing unreachable block (ram,0x000107800430) */
/* WARNING: Removing unreachable block (ram,0x000107800434) */
/* WARNING: Removing unreachable block (ram,0x000107800438) */
/* WARNING: Removing unreachable block (ram,0x00010780043c) */
/* WARNING: Removing unreachable block (ram,0x000107800448) */
/* WARNING: Removing unreachable block (ram,0x000107800458) */
/* WARNING: Removing unreachable block (ram,0x00010780045c) */
/* WARNING: Removing unreachable block (ram,0x000107800460) */
/* WARNING: Removing unreachable block (ram,0x000107800474) */
/* WARNING: Removing unreachable block (ram,0x00010780048c) */
/* WARNING: Removing unreachable block (ram,0x00010780049c) */
/* WARNING: Removing unreachable block (ram,0x0001078004c4) */
/* WARNING: Removing unreachable block (ram,0x0001078004cc) */
/* WARNING: Removing unreachable block (ram,0x0001078004e0) */
/* WARNING: Removing unreachable block (ram,0x0001078004e4) */
/* WARNING: Removing unreachable block (ram,0x0001078004e8) */
/* WARNING: Removing unreachable block (ram,0x0001078004ec) */
/* WARNING: Removing unreachable block (ram,0x0001078004f0) */
/* WARNING: Removing unreachable block (ram,0x0001078004f4) */
/* WARNING: Removing unreachable block (ram,0x0001078004fc) */
/* WARNING: Removing unreachable block (ram,0x000107800510) */
/* WARNING: Removing unreachable block (ram,0x000107800528) */
/* WARNING: Removing unreachable block (ram,0x000107800538) */
/* WARNING: Removing unreachable block (ram,0x000107800550) */
/* WARNING: Removing unreachable block (ram,0x000107800558) */
/* WARNING: Removing unreachable block (ram,0x000107800568) */
/* WARNING: Removing unreachable block (ram,0x00010780056c) */
/* WARNING: Removing unreachable block (ram,0x000107800570) */
/* WARNING: Removing unreachable block (ram,0x000107800574) */
/* WARNING: Removing unreachable block (ram,0x000107800578) */
/* WARNING: Removing unreachable block (ram,0x00010780057c) */
/* WARNING: Removing unreachable block (ram,0x000107800588) */
/* WARNING: Removing unreachable block (ram,0x00010780059c) */
/* WARNING: Removing unreachable block (ram,0x0001078005a8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ac) */
/* WARNING: Removing unreachable block (ram,0x0001078005c0) */
/* WARNING: Removing unreachable block (ram,0x0001078005c4) */
/* WARNING: Removing unreachable block (ram,0x0001078005c8) */
/* WARNING: Removing unreachable block (ram,0x0001078005ec) */
/* WARNING: Removing unreachable block (ram,0x0001078005f0) */
/* WARNING: Removing unreachable block (ram,0x0001078007e8) */
/* WARNING: Removing unreachable block (ram,0x000107800bc4) */
/* WARNING: Removing unreachable block (ram,0x000107800d34) */
/* WARNING: Removing unreachable block (ram,0x000107800d3c) */
/* WARNING: Removing unreachable block (ram,0x000107800d44) */
/* WARNING: Removing unreachable block (ram,0x000107800d4c) */
/* WARNING: Removing unreachable block (ram,0x000107800d54) */
/* WARNING: Removing unreachable block (ram,0x000107800f7c) */
/* WARNING: Removing unreachable block (ram,0x000107800d5c) */
/* WARNING: Removing unreachable block (ram,0x000107800f38) */
/* WARNING: Removing unreachable block (ram,0x000107800f40) */
/* WARNING: Removing unreachable block (ram,0x000107800f44) */
/* WARNING: Removing unreachable block (ram,0x000107800f48) */
/* WARNING: Removing unreachable block (ram,0x000107800d64) */
/* WARNING: Removing unreachable block (ram,0x000107801054) */
/* WARNING: Removing unreachable block (ram,0x000107801058) */
/* WARNING: Removing unreachable block (ram,0x000107801060) */
/* WARNING: Removing unreachable block (ram,0x000107801068) */
/* WARNING: Removing unreachable block (ram,0x00010780106c) */
/* WARNING: Removing unreachable block (ram,0x000107801074) */
/* WARNING: Removing unreachable block (ram,0x000107801080) */
/* WARNING: Removing unreachable block (ram,0x000107801084) */
/* WARNING: Removing unreachable block (ram,0x000107801090) */
/* WARNING: Removing unreachable block (ram,0x000107801098) */
/* WARNING: Removing unreachable block (ram,0x00010780109c) */
/* WARNING: Removing unreachable block (ram,0x000107800d6c) */
/* WARNING: Removing unreachable block (ram,0x000107800d84) */
/* WARNING: Removing unreachable block (ram,0x000107800d88) */
/* WARNING: Removing unreachable block (ram,0x000107800d90) */
/* WARNING: Removing unreachable block (ram,0x000107800d94) */
/* WARNING: Removing unreachable block (ram,0x000107800d98) */
/* WARNING: Removing unreachable block (ram,0x000107800d9c) */
/* WARNING: Removing unreachable block (ram,0x000107800e2c) */
/* WARNING: Removing unreachable block (ram,0x000107800e30) */
/* WARNING: Removing unreachable block (ram,0x000107800e78) */
/* WARNING: Removing unreachable block (ram,0x000107800e3c) */
/* WARNING: Removing unreachable block (ram,0x000107800e40) */
/* WARNING: Removing unreachable block (ram,0x000107800e44) */
/* WARNING: Removing unreachable block (ram,0x000107800e48) */
/* WARNING: Removing unreachable block (ram,0x000107800e4c) */
/* WARNING: Removing unreachable block (ram,0x000107800e50) */
/* WARNING: Removing unreachable block (ram,0x000107800e54) */
/* WARNING: Removing unreachable block (ram,0x000107800e58) */
/* WARNING: Removing unreachable block (ram,0x000107800e5c) */
/* WARNING: Removing unreachable block (ram,0x000107800e60) */
/* WARNING: Removing unreachable block (ram,0x000107800e80) */
/* WARNING: Removing unreachable block (ram,0x000107800e84) */
/* WARNING: Removing unreachable block (ram,0x000107800e8c) */
/* WARNING: Removing unreachable block (ram,0x000107800e98) */
/* WARNING: Removing unreachable block (ram,0x000107800ea0) */
/* WARNING: Removing unreachable block (ram,0x000107800ea8) */
/* WARNING: Removing unreachable block (ram,0x000107800ec0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee8) */
/* WARNING: Removing unreachable block (ram,0x000107800eec) */
/* WARNING: Removing unreachable block (ram,0x000107800ef4) */
/* WARNING: Removing unreachable block (ram,0x000107800f04) */
/* WARNING: Removing unreachable block (ram,0x000107800ec8) */
/* WARNING: Removing unreachable block (ram,0x000107800ed0) */
/* WARNING: Removing unreachable block (ram,0x000107800edc) */
/* WARNING: Removing unreachable block (ram,0x000107800ee0) */
/* WARNING: Removing unreachable block (ram,0x000107800ee4) */
/* WARNING: Removing unreachable block (ram,0x000107800eac) */
/* WARNING: Removing unreachable block (ram,0x000107800eb4) */
/* WARNING: Removing unreachable block (ram,0x000107800eb8) */
/* WARNING: Removing unreachable block (ram,0x000107800e68) */
/* WARNING: Removing unreachable block (ram,0x000107800da0) */
/* WARNING: Removing unreachable block (ram,0x000107800da8) */
/* WARNING: Removing unreachable block (ram,0x000107800dac) */
/* WARNING: Removing unreachable block (ram,0x000107800db0) */
/* WARNING: Removing unreachable block (ram,0x000107800db8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc8) */
/* WARNING: Removing unreachable block (ram,0x000107800dc0) */
/* WARNING: Removing unreachable block (ram,0x000107800dd4) */
/* WARNING: Removing unreachable block (ram,0x000107800ddc) */
/* WARNING: Removing unreachable block (ram,0x000107800de0) */
/* WARNING: Removing unreachable block (ram,0x000107800de4) */
/* WARNING: Removing unreachable block (ram,0x000107800de8) */
/* WARNING: Removing unreachable block (ram,0x000107800dec) */
/* WARNING: Removing unreachable block (ram,0x000107800df0) */
/* WARNING: Removing unreachable block (ram,0x000107800df4) */
/* WARNING: Removing unreachable block (ram,0x000107800df8) */
/* WARNING: Removing unreachable block (ram,0x000107800dfc) */
/* WARNING: Removing unreachable block (ram,0x000107800e00) */
/* WARNING: Removing unreachable block (ram,0x000107800e10) */
/* WARNING: Removing unreachable block (ram,0x000107800e1c) */
/* WARNING: Removing unreachable block (ram,0x000107800e08) */
/* WARNING: Removing unreachable block (ram,0x0001078007ec) */
/* WARNING: Removing unreachable block (ram,0x0001078007f4) */
/* WARNING: Removing unreachable block (ram,0x0001078007f8) */
/* WARNING: Removing unreachable block (ram,0x000107800800) */
/* WARNING: Removing unreachable block (ram,0x000107800808) */
/* WARNING: Removing unreachable block (ram,0x000107800810) */
/* WARNING: Removing unreachable block (ram,0x000107800f64) */
/* WARNING: Removing unreachable block (ram,0x000107800818) */
/* WARNING: Removing unreachable block (ram,0x000107800f14) */
/* WARNING: Removing unreachable block (ram,0x000107800820) */
/* WARNING: Removing unreachable block (ram,0x000107800fcc) */
/* WARNING: Removing unreachable block (ram,0x000107800fd0) */
/* WARNING: Removing unreachable block (ram,0x000107800fd8) */
/* WARNING: Removing unreachable block (ram,0x000107800fe0) */
/* WARNING: Removing unreachable block (ram,0x000107800fe4) */
/* WARNING: Removing unreachable block (ram,0x000107800fec) */
/* WARNING: Removing unreachable block (ram,0x000107800ffc) */
/* WARNING: Removing unreachable block (ram,0x000107801004) */
/* WARNING: Removing unreachable block (ram,0x000107801008) */
/* WARNING: Removing unreachable block (ram,0x000107800828) */
/* WARNING: Removing unreachable block (ram,0x000107800840) */
/* WARNING: Removing unreachable block (ram,0x000107800844) */
/* WARNING: Removing unreachable block (ram,0x00010780084c) */
/* WARNING: Removing unreachable block (ram,0x000107800854) */
/* WARNING: Removing unreachable block (ram,0x000107800858) */
/* WARNING: Removing unreachable block (ram,0x00010780085c) */
/* WARNING: Removing unreachable block (ram,0x0001078008f8) */
/* WARNING: Removing unreachable block (ram,0x0001078008fc) */
/* WARNING: Removing unreachable block (ram,0x00010780094c) */
/* WARNING: Removing unreachable block (ram,0x000107800908) */
/* WARNING: Removing unreachable block (ram,0x00010780090c) */
/* WARNING: Removing unreachable block (ram,0x000107800910) */
/* WARNING: Removing unreachable block (ram,0x000107800918) */
/* WARNING: Removing unreachable block (ram,0x00010780091c) */
/* WARNING: Removing unreachable block (ram,0x000107800920) */
/* WARNING: Removing unreachable block (ram,0x000107800924) */
/* WARNING: Removing unreachable block (ram,0x00010780092c) */
/* WARNING: Removing unreachable block (ram,0x000107800930) */
/* WARNING: Removing unreachable block (ram,0x000107800934) */
/* WARNING: Removing unreachable block (ram,0x000107800950) */
/* WARNING: Removing unreachable block (ram,0x000107800958) */
/* WARNING: Removing unreachable block (ram,0x000107800964) */
/* WARNING: Removing unreachable block (ram,0x00010780096c) */
/* WARNING: Removing unreachable block (ram,0x000107800974) */
/* WARNING: Removing unreachable block (ram,0x00010780098c) */
/* WARNING: Removing unreachable block (ram,0x0001078009b4) */
/* WARNING: Removing unreachable block (ram,0x0001078009b8) */
/* WARNING: Removing unreachable block (ram,0x0001078009c0) */
/* WARNING: Removing unreachable block (ram,0x0001078009d0) */
/* WARNING: Removing unreachable block (ram,0x000107800994) */
/* WARNING: Removing unreachable block (ram,0x00010780099c) */
/* WARNING: Removing unreachable block (ram,0x0001078009a8) */
/* WARNING: Removing unreachable block (ram,0x0001078009ac) */
/* WARNING: Removing unreachable block (ram,0x0001078009b0) */
/* WARNING: Removing unreachable block (ram,0x000107800978) */
/* WARNING: Removing unreachable block (ram,0x000107800980) */
/* WARNING: Removing unreachable block (ram,0x000107800984) */
/* WARNING: Removing unreachable block (ram,0x00010780093c) */
/* WARNING: Removing unreachable block (ram,0x000107800860) */
/* WARNING: Removing unreachable block (ram,0x000107800868) */
/* WARNING: Removing unreachable block (ram,0x00010780086c) */
/* WARNING: Removing unreachable block (ram,0x000107800870) */
/* WARNING: Removing unreachable block (ram,0x000107800878) */
/* WARNING: Removing unreachable block (ram,0x000107800888) */
/* WARNING: Removing unreachable block (ram,0x000107800880) */
/* WARNING: Removing unreachable block (ram,0x000107800894) */
/* WARNING: Removing unreachable block (ram,0x00010780089c) */
/* WARNING: Removing unreachable block (ram,0x0001078008a0) */
/* WARNING: Removing unreachable block (ram,0x0001078008a4) */
/* WARNING: Removing unreachable block (ram,0x0001078008ac) */
/* WARNING: Removing unreachable block (ram,0x0001078008b0) */
/* WARNING: Removing unreachable block (ram,0x0001078008b4) */
/* WARNING: Removing unreachable block (ram,0x0001078008b8) */
/* WARNING: Removing unreachable block (ram,0x0001078008c0) */
/* WARNING: Removing unreachable block (ram,0x0001078008c4) */
/* WARNING: Removing unreachable block (ram,0x0001078008c8) */
/* WARNING: Removing unreachable block (ram,0x0001078008d8) */
/* WARNING: Removing unreachable block (ram,0x0001078008e4) */
/* WARNING: Removing unreachable block (ram,0x0001078008d0) */
/* WARNING: Removing unreachable block (ram,0x0001078005f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009d4) */
/* WARNING: Removing unreachable block (ram,0x0001078009dc) */
/* WARNING: Removing unreachable block (ram,0x0001078009e4) */
/* WARNING: Removing unreachable block (ram,0x0001078009ec) */
/* WARNING: Removing unreachable block (ram,0x0001078009f4) */
/* WARNING: Removing unreachable block (ram,0x0001078009fc) */
/* WARNING: Removing unreachable block (ram,0x000107800f70) */
/* WARNING: Removing unreachable block (ram,0x000107800a04) */
/* WARNING: Removing unreachable block (ram,0x000107800f20) */
/* WARNING: Removing unreachable block (ram,0x000107800a0c) */
/* WARNING: Removing unreachable block (ram,0x000107801010) */
/* WARNING: Removing unreachable block (ram,0x000107801014) */
/* WARNING: Removing unreachable block (ram,0x00010780101c) */
/* WARNING: Removing unreachable block (ram,0x000107801024) */
/* WARNING: Removing unreachable block (ram,0x000107801028) */
/* WARNING: Removing unreachable block (ram,0x000107801030) */
/* WARNING: Removing unreachable block (ram,0x000107801040) */
/* WARNING: Removing unreachable block (ram,0x000107801048) */
/* WARNING: Removing unreachable block (ram,0x00010780104c) */
/* WARNING: Removing unreachable block (ram,0x000107800a14) */
/* WARNING: Removing unreachable block (ram,0x000107800a2c) */
/* WARNING: Removing unreachable block (ram,0x000107800a30) */
/* WARNING: Removing unreachable block (ram,0x000107800a38) */
/* WARNING: Removing unreachable block (ram,0x000107800a40) */
/* WARNING: Removing unreachable block (ram,0x000107800a44) */
/* WARNING: Removing unreachable block (ram,0x000107800a48) */
/* WARNING: Removing unreachable block (ram,0x000107800ae0) */
/* WARNING: Removing unreachable block (ram,0x000107800ae4) */
/* WARNING: Removing unreachable block (ram,0x000107800b34) */
/* WARNING: Removing unreachable block (ram,0x000107800af0) */
/* WARNING: Removing unreachable block (ram,0x000107800af4) */
/* WARNING: Removing unreachable block (ram,0x000107800af8) */
/* WARNING: Removing unreachable block (ram,0x000107800b00) */
/* WARNING: Removing unreachable block (ram,0x000107800b04) */
/* WARNING: Removing unreachable block (ram,0x000107800b08) */
/* WARNING: Removing unreachable block (ram,0x000107800b0c) */
/* WARNING: Removing unreachable block (ram,0x000107800b14) */
/* WARNING: Removing unreachable block (ram,0x000107800b18) */
/* WARNING: Removing unreachable block (ram,0x000107800b1c) */
/* WARNING: Removing unreachable block (ram,0x000107800b3c) */
/* WARNING: Removing unreachable block (ram,0x000107800b40) */
/* WARNING: Removing unreachable block (ram,0x000107800b48) */
/* WARNING: Removing unreachable block (ram,0x000107800b54) */
/* WARNING: Removing unreachable block (ram,0x000107800b5c) */
/* WARNING: Removing unreachable block (ram,0x000107800b64) */
/* WARNING: Removing unreachable block (ram,0x000107800b7c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba4) */
/* WARNING: Removing unreachable block (ram,0x000107800ba8) */
/* WARNING: Removing unreachable block (ram,0x000107800bb0) */
/* WARNING: Removing unreachable block (ram,0x000107800bc0) */
/* WARNING: Removing unreachable block (ram,0x000107800b84) */
/* WARNING: Removing unreachable block (ram,0x000107800b8c) */
/* WARNING: Removing unreachable block (ram,0x000107800b98) */
/* WARNING: Removing unreachable block (ram,0x000107800b9c) */
/* WARNING: Removing unreachable block (ram,0x000107800ba0) */
/* WARNING: Removing unreachable block (ram,0x000107800b68) */
/* WARNING: Removing unreachable block (ram,0x000107800b70) */
/* WARNING: Removing unreachable block (ram,0x000107800b74) */
/* WARNING: Removing unreachable block (ram,0x000107800b24) */
/* WARNING: Removing unreachable block (ram,0x000107800a4c) */
/* WARNING: Removing unreachable block (ram,0x000107800a54) */
/* WARNING: Removing unreachable block (ram,0x000107800a58) */
/* WARNING: Removing unreachable block (ram,0x000107800a5c) */
/* WARNING: Removing unreachable block (ram,0x000107800a64) */
/* WARNING: Removing unreachable block (ram,0x000107800a74) */
/* WARNING: Removing unreachable block (ram,0x000107800a6c) */
/* WARNING: Removing unreachable block (ram,0x000107800a80) */
/* WARNING: Removing unreachable block (ram,0x000107800a88) */
/* WARNING: Removing unreachable block (ram,0x000107800a8c) */
/* WARNING: Removing unreachable block (ram,0x000107800a90) */
/* WARNING: Removing unreachable block (ram,0x000107800a98) */
/* WARNING: Removing unreachable block (ram,0x000107800a9c) */
/* WARNING: Removing unreachable block (ram,0x000107800aa0) */
/* WARNING: Removing unreachable block (ram,0x000107800aa4) */
/* WARNING: Removing unreachable block (ram,0x000107800aac) */
/* WARNING: Removing unreachable block (ram,0x000107800ab0) */
/* WARNING: Removing unreachable block (ram,0x000107800ab4) */
/* WARNING: Removing unreachable block (ram,0x000107800ac4) */
/* WARNING: Removing unreachable block (ram,0x000107800ad0) */
/* WARNING: Removing unreachable block (ram,0x000107800abc) */
/* WARNING: Removing unreachable block (ram,0x0001078005f8) */
/* WARNING: Removing unreachable block (ram,0x000107800600) */
/* WARNING: Removing unreachable block (ram,0x000107800608) */
/* WARNING: Removing unreachable block (ram,0x000107800610) */
/* WARNING: Removing unreachable block (ram,0x000107800618) */
/* WARNING: Removing unreachable block (ram,0x000107800620) */
/* WARNING: Removing unreachable block (ram,0x000107800f58) */
/* WARNING: Removing unreachable block (ram,0x000107800628) */
/* WARNING: Removing unreachable block (ram,0x000107800f08) */
/* WARNING: Removing unreachable block (ram,0x000107800f28) */
/* WARNING: Removing unreachable block (ram,0x000107800f2c) */
/* WARNING: Removing unreachable block (ram,0x000107800f30) */
/* WARNING: Removing unreachable block (ram,0x000107800f50) */
/* WARNING: Removing unreachable block (ram,0x000107800630) */
/* WARNING: Removing unreachable block (ram,0x000107800f88) */
/* WARNING: Removing unreachable block (ram,0x000107800f8c) */
/* WARNING: Removing unreachable block (ram,0x000107800f94) */
/* WARNING: Removing unreachable block (ram,0x000107800f9c) */
/* WARNING: Removing unreachable block (ram,0x000107800fa0) */
/* WARNING: Removing unreachable block (ram,0x000107800fa8) */
/* WARNING: Removing unreachable block (ram,0x000107800fb8) */
/* WARNING: Removing unreachable block (ram,0x000107800fc0) */
/* WARNING: Removing unreachable block (ram,0x000107800fc4) */
/* WARNING: Removing unreachable block (ram,0x000107800638) */
/* WARNING: Removing unreachable block (ram,0x000107800650) */
/* WARNING: Removing unreachable block (ram,0x000107800654) */
/* WARNING: Removing unreachable block (ram,0x00010780065c) */
/* WARNING: Removing unreachable block (ram,0x000107800664) */
/* WARNING: Removing unreachable block (ram,0x000107800668) */
/* WARNING: Removing unreachable block (ram,0x00010780066c) */
/* WARNING: Removing unreachable block (ram,0x000107800704) */
/* WARNING: Removing unreachable block (ram,0x000107800708) */
/* WARNING: Removing unreachable block (ram,0x000107800758) */
/* WARNING: Removing unreachable block (ram,0x000107800714) */
/* WARNING: Removing unreachable block (ram,0x000107800718) */
/* WARNING: Removing unreachable block (ram,0x00010780071c) */
/* WARNING: Removing unreachable block (ram,0x000107800724) */
/* WARNING: Removing unreachable block (ram,0x000107800728) */
/* WARNING: Removing unreachable block (ram,0x00010780072c) */
/* WARNING: Removing unreachable block (ram,0x000107800730) */
/* WARNING: Removing unreachable block (ram,0x000107800738) */
/* WARNING: Removing unreachable block (ram,0x00010780073c) */
/* WARNING: Removing unreachable block (ram,0x000107800740) */
/* WARNING: Removing unreachable block (ram,0x000107800760) */
/* WARNING: Removing unreachable block (ram,0x000107800764) */
/* WARNING: Removing unreachable block (ram,0x00010780076c) */
/* WARNING: Removing unreachable block (ram,0x000107800778) */
/* WARNING: Removing unreachable block (ram,0x000107800780) */
/* WARNING: Removing unreachable block (ram,0x000107800788) */
/* WARNING: Removing unreachable block (ram,0x0001078007a0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c8) */
/* WARNING: Removing unreachable block (ram,0x0001078007cc) */
/* WARNING: Removing unreachable block (ram,0x0001078007d4) */
/* WARNING: Removing unreachable block (ram,0x0001078007e4) */
/* WARNING: Removing unreachable block (ram,0x0001078007a8) */
/* WARNING: Removing unreachable block (ram,0x0001078007b0) */
/* WARNING: Removing unreachable block (ram,0x0001078007bc) */
/* WARNING: Removing unreachable block (ram,0x0001078007c0) */
/* WARNING: Removing unreachable block (ram,0x0001078007c4) */
/* WARNING: Removing unreachable block (ram,0x00010780078c) */
/* WARNING: Removing unreachable block (ram,0x000107800794) */
/* WARNING: Removing unreachable block (ram,0x000107800798) */
/* WARNING: Removing unreachable block (ram,0x000107800748) */
/* WARNING: Removing unreachable block (ram,0x000107800670) */
/* WARNING: Removing unreachable block (ram,0x000107800678) */
/* WARNING: Removing unreachable block (ram,0x00010780067c) */
/* WARNING: Removing unreachable block (ram,0x000107800680) */
/* WARNING: Removing unreachable block (ram,0x000107800688) */
/* WARNING: Removing unreachable block (ram,0x000107800698) */
/* WARNING: Removing unreachable block (ram,0x000107800690) */
/* WARNING: Removing unreachable block (ram,0x0001078006a4) */
/* WARNING: Removing unreachable block (ram,0x0001078006ac) */
/* WARNING: Removing unreachable block (ram,0x0001078006b0) */
/* WARNING: Removing unreachable block (ram,0x0001078006b4) */
/* WARNING: Removing unreachable block (ram,0x0001078006bc) */
/* WARNING: Removing unreachable block (ram,0x0001078006c0) */
/* WARNING: Removing unreachable block (ram,0x0001078006c4) */
/* WARNING: Removing unreachable block (ram,0x0001078006c8) */
/* WARNING: Removing unreachable block (ram,0x0001078006d0) */
/* WARNING: Removing unreachable block (ram,0x0001078006d4) */
/* WARNING: Removing unreachable block (ram,0x0001078006d8) */
/* WARNING: Removing unreachable block (ram,0x0001078006e8) */
/* WARNING: Removing unreachable block (ram,0x0001078006f4) */
/* WARNING: Removing unreachable block (ram,0x0001078006e0) */
/* WARNING: Removing unreachable block (ram,0x000107800bcc) */
/* WARNING: Removing unreachable block (ram,0x000107800bd0) */
/* WARNING: Removing unreachable block (ram,0x000107800bd8) */
/* WARNING: Removing unreachable block (ram,0x000107800ca8) */
/* WARNING: Removing unreachable block (ram,0x000107800c74) */
/* WARNING: Removing unreachable block (ram,0x000107800d10) */
/* WARNING: Removing unreachable block (ram,0x000107800d28) */
/* WARNING: Removing unreachable block (ram,0x0001078010a4) */
/* WARNING: Removing unreachable block (ram,0x0001078010e4) */
/* WARNING: Removing unreachable block (ram,0x0001078010f0) */
/* WARNING: Removing unreachable block (ram,0x000107809878) */
/* WARNING: Removing unreachable block (ram,0x00010780987c) */

void FUN_1078002d0(double param_1,double param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  double unaff_d15;
  double dVar4;
  undefined1 auStack_688 [552];
  undefined1 auStack_460 [552];
  long lStack_238;
  
  func_0x000107809884();
  func_0x000107808a58();
  func_0x0001077ffe04();
  func_0x0001077ffc80();
  plVar1 = param_4 + 1;
  func_0x000107801344(auStack_460,plVar1,plVar1 + *param_4 * 4);
  func_0x000107801344(auStack_688,plVar1,plVar1 + *param_4 * 4);
  func_0x0001078090c4();
  if (lStack_238 != 0) {
    func_0x000107808c30();
    func_0x000107801438();
  }
  func_0x000107808f7c(lStack_238);
  dVar4 = unaff_d15;
  do {
    func_0x0001078090b8();
    func_0x000107808a04();
    func_0x0001078088cc();
    func_0x0001078087d8();
    if (param_1 < dVar4) {
LAB_1078003ac:
      unaff_d15 = param_2;
      dVar4 = param_1;
    }
    else {
      bVar2 = false;
      bVar3 = true;
      if (param_1 == dVar4) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(param_2) && !NAN(unaff_d15)) {
          bVar2 = param_2 == unaff_d15;
          bVar3 = unaff_d15 <= param_2;
        }
      }
      if (!bVar3 || bVar2) goto LAB_1078003ac;
    }
    func_0x000107808730();
    func_0x00010780a04c();
  } while( true );
}



/* Entry: 107801a2c; end: 107801af7;  */

undefined8 FUN_107801a2c(float *param_1,float *param_2,float *param_3)

{
  undefined1 uVar1;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000107809198();
  uVar1 = *param_2 < *param_1;
  if ((bool)uVar1) {
    func_0x00010780a0e8();
    if (!(bool)uVar1) {
      func_0x000107809944();
      func_0x000107809624(*unaff_x20);
      if (!(bool)uVar1) {
        return 1;
      }
    }
  }
  else {
    uVar1 = *param_3 < *param_2;
    if (!(bool)uVar1) {
      return 0;
    }
    func_0x000107808ee4();
    func_0x0001078096d4(*unaff_x19);
    if (!(bool)uVar1) {
      return 1;
    }
    func_0x000107809cf8();
  }
  func_0x000107801244();
  return 1;
}



/* Entry: 1078023ec; end: 1078024ef;  */

void FUN_1078023ec(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long extraout_x10;
  long extraout_x11;
  long lVar3;
  undefined8 extraout_x11_00;
  long extraout_x11_01;
  long extraout_x12;
  undefined8 *puVar4;
  long extraout_x13;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x00010780907c();
  func_0x000107809484();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107802420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61be)[extraout_x8] * 4 + 0x107802424))(1);
    return;
  }
  func_0x000107808fd0();
  func_0x0001078022b8();
  func_0x00010780967c();
  lVar3 = extraout_x11;
  do {
    bVar1 = lVar3 - unaff_x20 < 0;
    uVar2 = lVar3 == unaff_x20;
    if ((bool)uVar2) {
      return;
    }
    fVar5 = *(float *)(lVar3 + 8);
    func_0x0001078096fc();
    if (bVar1) {
      uVar6 = *(undefined4 *)(extraout_x10 + 0xc);
      uVar8 = *(undefined8 *)(extraout_x10 + 0x18);
      uVar7 = *(undefined8 *)(extraout_x10 + 0x10);
      do {
        func_0x000107809a7c();
        if ((bool)uVar2) {
          uVar2 = true;
          puVar4 = unaff_x19;
          goto LAB_1078024b4;
        }
        uVar2 = fVar5 == *(float *)(extraout_x13 + 0x28);
      } while (fVar5 < *(float *)(extraout_x13 + 0x28));
      puVar4 = (undefined8 *)((long)unaff_x19 + extraout_x12 + 0x40);
LAB_1078024b4:
      *puVar4 = extraout_x11_00;
      *(float *)(puVar4 + 1) = fVar5;
      *(undefined4 *)((long)puVar4 + 0xc) = uVar6;
      puVar4[3] = uVar8;
      puVar4[2] = uVar7;
      func_0x000107809798();
      if ((bool)uVar2) {
        func_0x000107809444();
        return;
      }
    }
    func_0x000107809454();
    lVar3 = extraout_x11_01;
  } while( true );
}



/* Entry: 107803384; end: 10780344f;  */

undefined8 FUN_107803384(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107809198();
  uVar1 = *(float *)(param_2 + 0xc) < *(float *)(param_1 + 0xc);
  if ((bool)uVar1) {
    func_0x00010780a0e8();
    if (!(bool)uVar1) {
      func_0x000107809944();
      func_0x000107809554(*(undefined4 *)(unaff_x20 + 0xc));
      if (!(bool)uVar1) {
        return 1;
      }
    }
  }
  else {
    uVar1 = *(float *)(param_3 + 0xc) < *(float *)(param_2 + 0xc);
    if (!(bool)uVar1) {
      return 0;
    }
    func_0x000107808ee4();
    func_0x000107809750(*(undefined4 *)(unaff_x19 + 0xc));
    if (!(bool)uVar1) {
      return 1;
    }
    func_0x000107809cf8();
  }
  func_0x000107801244();
  return 1;
}



/* Entry: 107803e44; end: 107803e77;  */

bool FUN_107803e44(double *param_1,double *param_2)

{
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 == *param_2) {
    return param_1[1] < param_2[1];
  }
  return false;
}



/* Entry: 107805430; end: 107805477;  */

void FUN_107805430(void)

{
  undefined1 in_NG;
  
  func_0x000107808810();
  func_0x000107805384();
  func_0x0001078094c4();
  if ((bool)in_NG) {
    func_0x0001078087a0();
    func_0x0001078094b4();
    if ((bool)in_NG) {
      func_0x00010780877c();
      func_0x0001078096c4();
      if ((bool)in_NG) {
        func_0x000107808758();
      }
    }
  }
  return;
}



/* Entry: 107805d58; end: 107805e7b;  */

/* WARNING: Possible PIC construction at 0x000107805fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078060fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107805fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107805fc0) */
/* WARNING: Removing unreachable block (ram,0x000107805fd4) */
/* WARNING: Removing unreachable block (ram,0x000107805fe4) */
/* WARNING: Removing unreachable block (ram,0x000107805fec) */
/* WARNING: Removing unreachable block (ram,0x000107805ff0) */
/* WARNING: Removing unreachable block (ram,0x000107806108) */
/* WARNING: Removing unreachable block (ram,0x000107806118) */
/* WARNING: Removing unreachable block (ram,0x00010780611c) */
/* WARNING: Removing unreachable block (ram,0x00010780613c) */
/* WARNING: Removing unreachable block (ram,0x000107806140) */
/* WARNING: Removing unreachable block (ram,0x00010780614c) */
/* WARNING: Removing unreachable block (ram,0x000107806154) */
/* WARNING: Removing unreachable block (ram,0x000107806158) */
/* WARNING: Removing unreachable block (ram,0x000107806120) */
/* WARNING: Removing unreachable block (ram,0x000107806124) */
/* WARNING: Removing unreachable block (ram,0x00010780612c) */
/* WARNING: Removing unreachable block (ram,0x000107806130) */
/* WARNING: Removing unreachable block (ram,0x000107806138) */
/* WARNING: Removing unreachable block (ram,0x00010780615c) */
/* WARNING: Removing unreachable block (ram,0x000107806168) */
/* WARNING: Removing unreachable block (ram,0x00010780616c) */
/* WARNING: Removing unreachable block (ram,0x000107806174) */
/* WARNING: Removing unreachable block (ram,0x000107806178) */
/* WARNING: Removing unreachable block (ram,0x000107806180) */
/* WARNING: Removing unreachable block (ram,0x0001078061d4) */
/* WARNING: Removing unreachable block (ram,0x000107806184) */
/* WARNING: Removing unreachable block (ram,0x0001078061b4) */
/* WARNING: Removing unreachable block (ram,0x0001078061bc) */
/* WARNING: Removing unreachable block (ram,0x0001078061c0) */
/* WARNING: Removing unreachable block (ram,0x0001078061c4) */
/* WARNING: Removing unreachable block (ram,0x0001078061cc) */
/* WARNING: Removing unreachable block (ram,0x0001078061d0) */
/* WARNING: Removing unreachable block (ram,0x0001078061dc) */
/* WARNING: Removing unreachable block (ram,0x0001078061e8) */
/* WARNING: Removing unreachable block (ram,0x0001078061f8) */
/* WARNING: Removing unreachable block (ram,0x000107805fdc) */
/* WARNING: Removing unreachable block (ram,0x000107805ff4) */
/* WARNING: Removing unreachable block (ram,0x000107806004) */
/* WARNING: Removing unreachable block (ram,0x000107806010) */
/* WARNING: Removing unreachable block (ram,0x000107806014) */
/* WARNING: Removing unreachable block (ram,0x000107806018) */
/* WARNING: Removing unreachable block (ram,0x000107806034) */
/* WARNING: Removing unreachable block (ram,0x000107806038) */
/* WARNING: Removing unreachable block (ram,0x00010780604c) */
/* WARNING: Removing unreachable block (ram,0x000107806040) */
/* WARNING: Removing unreachable block (ram,0x000107806048) */
/* WARNING: Removing unreachable block (ram,0x000107806028) */
/* WARNING: Removing unreachable block (ram,0x000107806030) */
/* WARNING: Removing unreachable block (ram,0x000107806050) */
/* WARNING: Removing unreachable block (ram,0x000107806058) */
/* WARNING: Removing unreachable block (ram,0x0001078060b4) */
/* WARNING: Removing unreachable block (ram,0x0001078060bc) */
/* WARNING: Removing unreachable block (ram,0x0001078060cc) */
/* WARNING: Removing unreachable block (ram,0x0001078060e0) */
/* WARNING: Removing unreachable block (ram,0x00010780620c) */
/* WARNING: Removing unreachable block (ram,0x000107806214) */
/* WARNING: Removing unreachable block (ram,0x0001078060f4) */
/* WARNING: Removing unreachable block (ram,0x0001078060f8) */
/* WARNING: Removing unreachable block (ram,0x000107806060) */
/* WARNING: Removing unreachable block (ram,0x000107806090) */
/* WARNING: Removing unreachable block (ram,0x000107806098) */
/* WARNING: Removing unreachable block (ram,0x00010780609c) */
/* WARNING: Removing unreachable block (ram,0x0001078060a0) */
/* WARNING: Removing unreachable block (ram,0x0001078060a8) */
/* WARNING: Removing unreachable block (ram,0x0001078060ac) */
/* WARNING: Removing unreachable block (ram,0x0001078060b0) */
/* WARNING: Removing unreachable block (ram,0x000107805fb8) */
/* WARNING: Removing unreachable block (ram,0x000107805fb0) */
/* WARNING: Removing unreachable block (ram,0x000107805fa8) */
/* WARNING: Removing unreachable block (ram,0x000107806100) */
/* WARNING: Removing unreachable block (ram,0x000107806374) */
/* WARNING: Removing unreachable block (ram,0x000107806378) */
/* WARNING: Removing unreachable block (ram,0x000107806380) */
/* WARNING: Removing unreachable block (ram,0x000107806384) */
/* WARNING: Removing unreachable block (ram,0x0001078063a8) */
/* WARNING: Removing unreachable block (ram,0x00010780638c) */
/* WARNING: Removing unreachable block (ram,0x000107806394) */
/* WARNING: Removing unreachable block (ram,0x000107806398) */
/* WARNING: Removing unreachable block (ram,0x00010780639c) */
/* WARNING: Removing unreachable block (ram,0x0001078063a0) */
/* WARNING: Removing unreachable block (ram,0x0001078063ac) */
/* WARNING: Removing unreachable block (ram,0x0001078063b4) */
/* WARNING: Removing unreachable block (ram,0x000107806428) */
/* WARNING: Removing unreachable block (ram,0x0001078063bc) */
/* WARNING: Removing unreachable block (ram,0x0001078063c4) */
/* WARNING: Removing unreachable block (ram,0x0001078063d4) */
/* WARNING: Removing unreachable block (ram,0x0001078063d8) */
/* WARNING: Removing unreachable block (ram,0x0001078063dc) */
/* WARNING: Removing unreachable block (ram,0x0001078063e8) */
/* WARNING: Removing unreachable block (ram,0x000107806404) */
/* WARNING: Removing unreachable block (ram,0x000107806410) */
/* WARNING: Removing unreachable block (ram,0x000107806414) */
/* WARNING: Removing unreachable block (ram,0x000107806418) */
/* WARNING: Removing unreachable block (ram,0x000107806434) */

long FUN_107805d58(long param_1,long param_2,ulong *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 *extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong uVar8;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 *extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  undefined8 uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long extraout_x13_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uStack_78;
  
  func_0x0001078087f8();
  func_0x000107808fe4();
  if (!(bool)in_CY || (bool)in_ZR) {
    lVar7 = 1;
                    /* WARNING: Could not recover jumptable at 0x000107805d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea61ee)[extraout_x8_00] * 4 + 0x107805d98))(1);
    return lVar7;
  }
  func_0x000107808fa8();
  func_0x000107805c00();
  func_0x00010780968c();
  puVar9 = extraout_x11;
  while( true ) {
    uVar2 = unaff_x20 <= puVar9;
    cVar4 = SBORROW8((long)puVar9,(long)unaff_x20);
    cVar5 = (long)puVar9 - (long)unaff_x20 < 0;
    uVar6 = puVar9 == unaff_x20;
    if ((bool)uVar6) break;
    uVar16 = (ulong)*(uint *)(puVar9 + 1);
    func_0x0001078096fc();
    if ((bool)cVar5) {
      uVar13 = *(undefined8 *)(extraout_x10 + 0xc);
      uVar19 = *(undefined4 *)(extraout_x10 + 0x14);
      cVar5 = true;
      do {
        func_0x000107809a60();
        fVar15 = (float)uVar16;
        if ((bool)uVar6) {
          uVar6 = true;
          puVar9 = unaff_x19;
          goto LAB_107805e28;
        }
        fVar18 = *(float *)(extraout_x13 + 0x20);
        cVar4 = NAN(fVar15) || NAN(fVar18);
        uVar2 = fVar18 <= fVar15;
        uVar6 = fVar15 == fVar18;
        cVar5 = fVar15 < fVar18;
      } while ((bool)cVar5);
      puVar9 = (undefined8 *)((long)unaff_x19 + extraout_x12 + 0x30);
LAB_107805e28:
      *puVar9 = extraout_x11_00;
      *(float *)(puVar9 + 1) = fVar15;
      *(undefined8 *)((long)puVar9 + 0xc) = uVar13;
      *(undefined4 *)((long)puVar9 + 0x14) = uVar19;
      func_0x000107809798();
      if ((bool)uVar6) {
        func_0x000107809614();
        goto LAB_107805e5c;
      }
    }
    func_0x0001078096ec();
    puVar9 = extraout_x11_01;
  }
  param_1 = 1;
  uVar6 = 1;
LAB_107805e5c:
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107808a58();
  func_0x000107809938();
  if ((cVar5 == cVar4) && (func_0x000107808d30(), cVar5 == cVar4)) {
    func_0x000107808ae8();
    lVar7 = extraout_x10_00;
    if ((cVar5 != cVar4) && (*(float *)(extraout_x10_00 + 8) < *(float *)(extraout_x10_00 + 0x20)))
    {
      lVar7 = extraout_x10_00 + 0x18;
    }
    fVar18 = *(float *)(lVar7 + 8);
    fVar15 = *(float *)(param_3 + 1);
    uVar16 = (ulong)(uint)fVar15;
    cVar4 = NAN(fVar18) || NAN(fVar15);
    uVar2 = fVar15 <= fVar18;
    uVar6 = fVar18 == fVar15;
    cVar5 = fVar18 < fVar15;
    if (!(bool)cVar5) {
      uVar13 = *(undefined8 *)((long)param_3 + 0xc);
      uVar19 = *(undefined4 *)((long)param_3 + 0x14);
      do {
        func_0x0001078098ac();
        fVar15 = (float)uVar16;
        uVar17 = extraout_x11_02;
        if (cVar5 != cVar4) break;
        func_0x00010780966c();
        fVar15 = (float)uVar16;
        lVar7 = param_1 + extraout_x10_01 * extraout_x12_00;
        if ((extraout_x13_00 + 2 < param_2) && (*(float *)(lVar7 + 8) < *(float *)(lVar7 + 0x20))) {
          lVar7 = lVar7 + 0x18;
        }
        fVar18 = *(float *)(lVar7 + 8);
        cVar4 = NAN(fVar18) || NAN(fVar15);
        uVar2 = fVar15 <= fVar18;
        uVar6 = fVar18 == fVar15;
        cVar5 = fVar18 < fVar15;
        uVar17 = extraout_x11_03;
      } while (!(bool)cVar5);
      *param_3 = uVar17;
      *(float *)(param_3 + 1) = fVar15;
      *(undefined8 *)((long)param_3 + 0xc) = uVar13;
      *(undefined4 *)((long)param_3 + 0x14) = uVar19;
    }
  }
  func_0x0001078087c4(uStack_78);
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)uVar2 || (bool)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010780622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_107806230 + (ulong)(byte)(&UNK_10dea61f4)[unaff_x26] * 4))();
    return param_1;
  }
  bVar3 = 0x23e < extraout_x8_02;
  if ((long)extraout_x8_02 < 0x240) {
    uVar2 = (long)unaff_x20 - (long)unaff_x19 < 0;
    uVar6 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar6) {
        while (func_0x000107809f1c(), !(bool)uVar6) {
          fVar15 = *(float *)((long)unaff_x20 + 0x1c);
          func_0x000107809744();
          if ((bool)uVar2) {
            uVar19 = *(undefined4 *)(unaff_x20 + 3);
            uVar20 = unaff_x20[5];
            uVar13 = unaff_x20[4];
            puVar9 = extraout_x8_03;
            do {
              puVar12 = puVar9;
              puVar12[1] = puVar12[-2];
              *puVar12 = puVar12[-3];
              puVar12[2] = puVar12[-1];
              uVar6 = fVar15 == *(float *)((long)puVar12 + -0x2c);
              puVar9 = puVar12 + -3;
            } while (fVar15 < *(float *)((long)puVar12 + -0x2c));
            *(undefined4 *)(puVar12 + -3) = uVar19;
            *(float *)((long)puVar12 + -0x14) = fVar15;
            puVar12[-1] = uVar20;
            puVar12[-2] = uVar13;
          }
          uVar2 = 0;
          func_0x000107809f8c();
        }
      }
    }
    else if (!(bool)uVar6) {
      lVar7 = 0;
      puVar9 = unaff_x20;
      while( true ) {
        uVar6 = 1;
        if (puVar9 + 3 == unaff_x19) break;
        fVar15 = *(float *)((long)puVar9 + 0x1c);
        if (fVar15 < *(float *)((long)puVar9 + 4)) {
          uVar19 = *(undefined4 *)(puVar9 + 3);
          uVar20 = puVar9[5];
          uVar13 = puVar9[4];
          lVar1 = lVar7;
          do {
            lVar10 = lVar1;
            puVar12 = (undefined8 *)((long)unaff_x20 + lVar10);
            puVar12[4] = puVar12[1];
            puVar12[3] = *puVar12;
            puVar12[5] = puVar12[2];
            puVar11 = unaff_x20;
            if (lVar10 == 0) goto code_r0x00010780633c;
            lVar1 = lVar10 + -0x18;
          } while (fVar15 < *(float *)((long)puVar12 + -0x14));
          puVar11 = (undefined8 *)((long)unaff_x20 + lVar10);
code_r0x00010780633c:
          *(undefined4 *)puVar11 = uVar19;
          *(float *)((long)puVar11 + 4) = fVar15;
          puVar11[2] = uVar20;
          puVar11[1] = uVar13;
        }
        lVar7 = lVar7 + 0x18;
        puVar9 = puVar9 + 3;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar3) {
        func_0x000107808e08();
        puVar14 = &UNK_107805fa8;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar14 = &UNK_107805fd4;
      }
      goto code_r0x0001078064a0;
    }
    uVar6 = unaff_x20 == unaff_x19;
    if (!(bool)uVar6) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x00010780671c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8_01);
  if ((bool)uVar6) {
    return param_1;
  }
  puVar14 = &UNK_1078064a0;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x0001078064a0:
  fVar15 = *(float *)(param_2 + 4);
  uVar16 = (ulong)(uint)fVar15;
  uVar17 = 0;
  if (*(float *)(param_1 + 4) <= fVar15) {
    if (fVar15 <= *(float *)((long)unaff_x21 + 4)) {
      return 0;
    }
    func_0x000107809398();
    unaff_x21[1] = uVar17;
    *unaff_x21 = uVar16;
    unaff_x21[2] = extraout_x8_05;
    if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar15 <= *(float *)((long)unaff_x21 + 4)) {
      func_0x000107808e40();
      uVar16 = (ulong)(uint)*(float *)((long)unaff_x21 + 4);
      uVar17 = 0;
      if (*(float *)(param_2 + 4) <= *(float *)((long)unaff_x21 + 4)) {
        return 1;
      }
      func_0x000107809398(puVar14);
      uVar8 = extraout_x8_06;
    }
    else {
      func_0x000107809bf8();
      uVar8 = extraout_x8_04;
    }
    unaff_x21[1] = uVar17;
    *unaff_x21 = uVar16;
    unaff_x21[2] = uVar8;
  }
  return 1;
}



/* Entry: 1078067fc; end: 107806cbf;  */

/* WARNING: Possible PIC construction at 0x000107806848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107806874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010780685c) */
/* WARNING: Removing unreachable block (ram,0x000107806854) */
/* WARNING: Removing unreachable block (ram,0x00010780684c) */
/* WARNING: Removing unreachable block (ram,0x000107806864) */
/* WARNING: Removing unreachable block (ram,0x000107806878) */
/* WARNING: Removing unreachable block (ram,0x000107806888) */
/* WARNING: Removing unreachable block (ram,0x000107806890) */
/* WARNING: Removing unreachable block (ram,0x000107806894) */
/* WARNING: Removing unreachable block (ram,0x00010780698c) */
/* WARNING: Removing unreachable block (ram,0x000107806994) */
/* WARNING: Removing unreachable block (ram,0x000107806998) */
/* WARNING: Removing unreachable block (ram,0x0001078069b8) */
/* WARNING: Removing unreachable block (ram,0x0001078069bc) */
/* WARNING: Removing unreachable block (ram,0x0001078069c8) */
/* WARNING: Removing unreachable block (ram,0x0001078069d0) */
/* WARNING: Removing unreachable block (ram,0x0001078069d4) */
/* WARNING: Removing unreachable block (ram,0x00010780699c) */
/* WARNING: Removing unreachable block (ram,0x0001078069a0) */
/* WARNING: Removing unreachable block (ram,0x0001078069a8) */
/* WARNING: Removing unreachable block (ram,0x0001078069ac) */
/* WARNING: Removing unreachable block (ram,0x0001078069b4) */
/* WARNING: Removing unreachable block (ram,0x0001078069d8) */
/* WARNING: Removing unreachable block (ram,0x0001078069e4) */
/* WARNING: Removing unreachable block (ram,0x0001078069e8) */
/* WARNING: Removing unreachable block (ram,0x0001078069f0) */
/* WARNING: Removing unreachable block (ram,0x0001078069f4) */
/* WARNING: Removing unreachable block (ram,0x0001078069fc) */
/* WARNING: Removing unreachable block (ram,0x000107806a00) */
/* WARNING: Removing unreachable block (ram,0x000107806a2c) */
/* WARNING: Removing unreachable block (ram,0x000107806a38) */
/* WARNING: Removing unreachable block (ram,0x000107806a48) */
/* WARNING: Removing unreachable block (ram,0x000107806a08) */
/* WARNING: Removing unreachable block (ram,0x000107806a0c) */
/* WARNING: Removing unreachable block (ram,0x000107806a14) */
/* WARNING: Removing unreachable block (ram,0x000107806a18) */
/* WARNING: Removing unreachable block (ram,0x000107806a1c) */
/* WARNING: Removing unreachable block (ram,0x000107806a28) */
/* WARNING: Removing unreachable block (ram,0x000107806880) */
/* WARNING: Removing unreachable block (ram,0x000107806898) */
/* WARNING: Removing unreachable block (ram,0x0001078068a4) */
/* WARNING: Removing unreachable block (ram,0x0001078068b0) */
/* WARNING: Removing unreachable block (ram,0x0001078068b4) */
/* WARNING: Removing unreachable block (ram,0x0001078068b8) */
/* WARNING: Removing unreachable block (ram,0x0001078068dc) */
/* WARNING: Removing unreachable block (ram,0x0001078068e0) */
/* WARNING: Removing unreachable block (ram,0x0001078068fc) */
/* WARNING: Removing unreachable block (ram,0x0001078068e8) */
/* WARNING: Removing unreachable block (ram,0x0001078068f8) */
/* WARNING: Removing unreachable block (ram,0x0001078068c8) */
/* WARNING: Removing unreachable block (ram,0x0001078068d8) */
/* WARNING: Removing unreachable block (ram,0x000107806900) */
/* WARNING: Removing unreachable block (ram,0x000107806908) */
/* WARNING: Removing unreachable block (ram,0x000107806938) */
/* WARNING: Removing unreachable block (ram,0x000107806940) */
/* WARNING: Removing unreachable block (ram,0x000107806944) */
/* WARNING: Removing unreachable block (ram,0x000107806964) */
/* WARNING: Removing unreachable block (ram,0x000107806a68) */
/* WARNING: Removing unreachable block (ram,0x000107806a70) */
/* WARNING: Removing unreachable block (ram,0x000107806978) */
/* WARNING: Removing unreachable block (ram,0x00010780697c) */
/* WARNING: Removing unreachable block (ram,0x000107806910) */
/* WARNING: Removing unreachable block (ram,0x000107806914) */
/* WARNING: Removing unreachable block (ram,0x00010780691c) */
/* WARNING: Removing unreachable block (ram,0x000107806920) */
/* WARNING: Removing unreachable block (ram,0x000107806924) */
/* WARNING: Removing unreachable block (ram,0x00010780692c) */
/* WARNING: Removing unreachable block (ram,0x000107806930) */
/* WARNING: Removing unreachable block (ram,0x000107806934) */
/* WARNING: Removing unreachable block (ram,0x000107806bb0) */
/* WARNING: Removing unreachable block (ram,0x000107806bb4) */
/* WARNING: Removing unreachable block (ram,0x000107806bbc) */
/* WARNING: Removing unreachable block (ram,0x000107806bc0) */
/* WARNING: Removing unreachable block (ram,0x000107806be4) */
/* WARNING: Removing unreachable block (ram,0x000107806bc8) */
/* WARNING: Removing unreachable block (ram,0x000107806bd0) */
/* WARNING: Removing unreachable block (ram,0x000107806bd4) */
/* WARNING: Removing unreachable block (ram,0x000107806bd8) */
/* WARNING: Removing unreachable block (ram,0x000107806bdc) */
/* WARNING: Removing unreachable block (ram,0x000107806be8) */
/* WARNING: Removing unreachable block (ram,0x000107806bf0) */
/* WARNING: Removing unreachable block (ram,0x000107806c64) */
/* WARNING: Removing unreachable block (ram,0x000107806bf8) */
/* WARNING: Removing unreachable block (ram,0x000107806c00) */
/* WARNING: Removing unreachable block (ram,0x000107806c10) */
/* WARNING: Removing unreachable block (ram,0x000107806c14) */
/* WARNING: Removing unreachable block (ram,0x000107806c18) */
/* WARNING: Removing unreachable block (ram,0x000107806c2c) */
/* WARNING: Removing unreachable block (ram,0x000107806c34) */
/* WARNING: Removing unreachable block (ram,0x000107806c40) */
/* WARNING: Removing unreachable block (ram,0x000107806c44) */
/* WARNING: Removing unreachable block (ram,0x000107806c48) */
/* WARNING: Removing unreachable block (ram,0x000107806c70) */

long FUN_1078067fc(long param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong uVar5;
  long extraout_x9;
  long lVar6;
  long extraout_x11;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long unaff_x26;
  undefined *puVar7;
  float fVar8;
  ulong uVar10;
  ulong uVar9;
  
  func_0x000107809a18();
  func_0x000107809ce0();
  func_0x000107808a28();
  func_0x000107808d84();
  func_0x000107809020();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x000107806a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dea6200)[unaff_x26] * 4 + 0x107806a8c))();
    return param_1;
  }
  bVar1 = 0x23e < extraout_x8_00;
  if ((long)extraout_x8_00 < 0x240) {
    uVar2 = unaff_x20 - unaff_x19 < 0;
    uVar3 = unaff_x20 == unaff_x19;
    if ((unaff_x25 & 1) == 0) {
      if (!(bool)uVar3) {
        while (func_0x000107809f1c(), !(bool)uVar3) {
          func_0x000107809768(*(undefined4 *)(unaff_x20 + 0x24));
          if ((bool)uVar2) {
            func_0x000107809f08();
            do {
              func_0x00010780a120();
              func_0x000107809d1c();
            } while ((bool)uVar2);
            func_0x0001078099ec();
          }
          func_0x000107809f8c();
        }
      }
    }
    else if (!(bool)uVar3) {
      lVar4 = 0;
      while( true ) {
        lVar6 = unaff_x20 + 0x18;
        uVar3 = 1;
        if (lVar6 == unaff_x19) break;
        uVar3 = *(float *)(unaff_x20 + 0x24) < *(float *)(unaff_x20 + 0xc);
        if ((bool)uVar3) {
          func_0x00010780a064(lVar4);
          do {
            uVar2 = uVar3;
            func_0x000107809d04();
            if (extraout_x11 == 0) break;
            func_0x000107809d1c();
            uVar3 = 1;
          } while ((bool)uVar2);
          func_0x0001078099ec();
          lVar4 = extraout_x8_01;
          lVar6 = extraout_x9;
        }
        lVar4 = lVar4 + 0x18;
        unaff_x20 = lVar6;
      }
    }
  }
  else {
    if (unaff_x22 != 0) {
      func_0x000107809514();
      if (bVar1) {
        func_0x000107808e08();
        puVar7 = (undefined *)0x10780684c;
        unaff_x21 = param_3;
      }
      else {
        func_0x000107809308();
        puVar7 = (undefined *)0x107806878;
      }
      goto code_r0x000107806cc0;
    }
    uVar3 = unaff_x20 == unaff_x19;
    if (!(bool)uVar3) {
      func_0x000107809034();
      do {
        func_0x000107808e08();
        func_0x000107806f3c();
        func_0x000107809efc();
      } while( true );
    }
  }
  func_0x0001078087c4(extraout_x8);
  if ((bool)uVar3) {
    return param_1;
  }
  puVar7 = &SUB_107806cc0;
  ___stack_chk_fail();
  unaff_x21 = param_3;
code_r0x000107806cc0:
  fVar8 = *(float *)(param_2 + 0xc);
  uVar9 = (ulong)(uint)fVar8;
  uVar10 = 0;
  if (*(float *)(param_1 + 0xc) <= fVar8) {
    if (fVar8 <= *(float *)((long)unaff_x21 + 0xc)) {
      return 0;
    }
    func_0x000107809398();
    unaff_x21[1] = uVar10;
    *unaff_x21 = uVar9;
    unaff_x21[2] = extraout_x8_03;
    if (*(float *)(param_2 + 0xc) < *(float *)(param_1 + 0xc)) {
      func_0x000107808e40();
    }
  }
  else {
    if (fVar8 <= *(float *)((long)unaff_x21 + 0xc)) {
      func_0x000107808e40();
      uVar9 = (ulong)(uint)*(float *)((long)unaff_x21 + 0xc);
      uVar10 = 0;
      if (*(float *)(param_2 + 0xc) <= *(float *)((long)unaff_x21 + 0xc)) {
        return 1;
      }
      func_0x000107809398(puVar7);
      uVar5 = extraout_x8_04;
    }
    else {
      func_0x000107809bf8();
      uVar5 = extraout_x8_02;
    }
    unaff_x21[1] = uVar10;
    *unaff_x21 = uVar9;
    unaff_x21[2] = uVar5;
  }
  return 1;
}



/* Entry: 1078071b8; end: 10780737f;  */

double * FUN_1078071b8(undefined8 param_1,double *param_2,double *param_3,undefined8 *param_4,
                      long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar4;
  double *pdVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  double *pdVar7;
  undefined8 *extraout_x8_01;
  ulong uVar8;
  long extraout_x9;
  undefined8 *extraout_x9_00;
  double *pdVar9;
  long lVar10;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  double *pdVar11;
  long extraout_x11;
  double *pdVar12;
  double dVar13;
  ulong uVar14;
  double *pdVar15;
  long unaff_x19;
  double *unaff_x20;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 in_register_00005008;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  long lStack_2d0;
  double adStack_2c8 [12];
  double adStack_268 [56];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  
  func_0x0001078087f8();
  uStack_48 = extraout_x8;
  func_0x00010780936c();
  func_0x000107809ec0();
  puStack_60 = *(undefined1 **)(unaff_x19 + 0x58);
  uStack_70 = param_1;
  uStack_68 = in_register_00005008;
  func_0x0001078099b8();
  func_0x000107807154();
  *(undefined8 *)(unaff_x19 + 0x50) = uStack_68;
  *(undefined8 *)(unaff_x19 + 0x48) = uStack_70;
  uVar19 = uStack_70;
  func_0x000107809f98(puStack_60);
  if (((bool)in_ZR) && (func_0x000107809acc(), (bool)in_CY)) {
    param_4 = *(undefined8 **)(unaff_x19 + 0x48);
    if (param_4 == (undefined8 *)0x0) {
      uStack_70 = 0;
      param_5 = *(long *)(unaff_x19 + 0x60);
      param_4 = &uStack_80;
      param_3 = unaff_x20;
      func_0x000107803f88(&uStack_70);
      lVar16 = *(long *)(unaff_x19 + 0x60);
      dStack_90 = (double)puStack_58;
      lStack_88 = lVar16;
      if (*(long *)(unaff_x19 + 0x48) == 0) {
        func_0x000107803784();
        uStack_98 = *(undefined8 *)(unaff_x19 + 0x60);
        lStack_a0 = lVar16;
        func_0x0001077ffa30();
        func_0x000107809574(*(undefined8 *)(unaff_x19 + 0x38));
        *(undefined8 *)(extraout_x10_00 + 0x10) = uStack_78;
        *(undefined8 *)(extraout_x10_00 + 8) = uStack_80;
        func_0x000107809bcc();
        func_0x0001077ffa30(lVar16);
        func_0x000107809b7c();
        *(undefined **)(extraout_x9 + 0x18) = puStack_58;
        func_0x000107809bbc();
        **(long **)(unaff_x19 + 0x38) = lVar16;
        **(long **)(unaff_x19 + 0x40) = **(long **)(unaff_x19 + 0x40) + 1;
        lStack_a0 = 0;
        func_0x0001078037b8(&lStack_a0);
        uVar19 = uStack_68;
      }
      else {
        func_0x000107809bac();
        func_0x00010780a09c(uStack_80);
        *(undefined1 **)(extraout_x10 + 0x10) = puStack_60;
        *(undefined8 *)(extraout_x10 + 8) = uStack_68;
        func_0x000107809b1c();
        uVar19 = uStack_68;
      }
      dStack_90 = 0.0;
      param_2 = &dStack_90;
      func_0x0001078037b8();
    }
    else {
      func_0x0001078099d4();
    }
  }
  if ((*(long *)(unaff_x19 + 0x70) != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
    func_0x000107809824();
    func_0x00010780a0b0();
  }
  func_0x0001078087c4(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  pdVar5 = &dStack_90;
  func_0x0001078037b8();
  func_0x000107808f58();
  puVar6 = &UNK_107807380;
  func_0x00010780a21c();
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar6;
  func_0x000107808a28();
  uStack_a8 = extraout_x8_00;
  func_0x0001078098ec(param_4 + param_5 * 3);
  lStack_2d0 = 0;
  pdVar7 = param_3 + 1;
  dVar17 = *param_3;
  if (((long)dVar17 * 3 & 0x1fffffffffffffffU) != 0) {
    do {
      uVar8 = (ulong)(uint)((*(float *)pdVar7 + *(float *)(pdVar7 + 1)) * (float)uVar19);
      func_0x0001078098cc();
      extraout_x9_00[-1] = uVar8;
      uVar23 = *extraout_x8_01;
      extraout_x9_00[1] = extraout_x8_01[1];
      *extraout_x9_00 = uVar23;
      extraout_x9_00[2] = extraout_x8_01[2];
      pdVar7 = (double *)(extraout_x8_01 + 3);
      lStack_2d0 = extraout_x11;
    } while (extraout_x10_01 != 0x18);
  }
  lVar16 = 1;
  do {
    func_0x000107809474();
    func_0x0001078076e4();
    lVar16 = lVar16 + -1;
  } while (-1 < lVar16);
  pdVar7 = adStack_268 + 4;
  pdVar11 = adStack_268 + 5;
  lVar16 = (long)dVar17 * 0x20 + -0x80;
  dVar17 = adStack_2c8[1];
  dVar21 = adStack_2c8[2];
  dVar13 = adStack_2c8[3];
  for (; adStack_2c8[1] = dVar17, adStack_2c8[2] = dVar21, adStack_2c8[3] = dVar13, lVar16 != 0;
      lVar16 = lVar16 + -0x20) {
    dVar18 = pdVar11[-1];
    if (adStack_2c8[0] < dVar18) {
      pdVar11[-1] = adStack_2c8[0];
      adStack_2c8[0] = dVar18;
      adStack_2c8[3] = pdVar11[2];
      adStack_2c8[2] = pdVar11[1];
      adStack_2c8[1] = *pdVar11;
      pdVar11[1] = dVar21;
      *pdVar11 = dVar17;
      pdVar11[2] = dVar13;
      func_0x000107809474();
      func_0x0001078076e4();
    }
    pdVar11 = pdVar11 + 4;
    dVar17 = adStack_2c8[1];
    dVar21 = adStack_2c8[2];
    dVar13 = adStack_2c8[3];
  }
  uVar8 = 4;
  pdVar11 = pdVar7;
  do {
    dVar18 = adStack_2c8[3];
    dVar13 = adStack_2c8[2];
    dVar21 = adStack_2c8[1];
    dVar17 = adStack_2c8[0];
    if (uVar8 < 2) {
      lVar16 = 8;
      for (lVar10 = 0x10; bVar4 = lVar10 == 0x90, !bVar4; lVar10 = lVar10 + 0x20) {
        puVar2 = (undefined8 *)((long)unaff_x20 + lVar16);
        uVar19 = *(undefined8 *)((long)&lStack_2d0 + lVar10);
        puVar2[1] = *(undefined8 *)((long)adStack_2c8 + lVar10);
        *puVar2 = uVar19;
        puVar2[2] = *(undefined8 *)((long)adStack_2c8 + lVar10 + 8);
        lVar16 = lVar16 + 0x18;
      }
      *unaff_x20 = 1.97626258336499e-323;
      *param_2 = 0.0;
      dVar17 = 4.94065645841247e-324;
      lVar16 = 8;
      for (lVar10 = lStack_2d0 * 0x20 + -0x80; lVar10 != 0; lVar10 = lVar10 + -0x20) {
        pdVar11 = (double *)((long)param_2 + lVar16);
        dVar21 = pdVar7[1];
        pdVar11[1] = pdVar7[2];
        *pdVar11 = dVar21;
        pdVar11[2] = pdVar7[3];
        *param_2 = dVar17;
        pdVar7 = pdVar7 + 4;
        dVar17 = (double)((long)dVar17 + 1);
        lVar16 = lVar16 + 0x18;
      }
      func_0x0001078087c4(uStack_a8);
      if (bVar4) {
        return pdVar5;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      return (double *)(ulong)(*param_3 < *pdVar5);
    }
    uVar14 = 0;
    pdVar12 = adStack_2c8;
    do {
      pdVar15 = pdVar12 + uVar14 * 4 + 4;
      uVar3 = uVar14 << 1 | 1;
      uVar1 = uVar14 * 2 + 2;
      if ((long)uVar1 < (long)uVar8) {
        dVar20 = pdVar12[uVar14 * 4 + 8];
        lVar16 = uVar14 * 4;
        pdVar9 = pdVar12 + uVar14 * 4 + 8;
        uVar14 = uVar1;
        if (pdVar12[lVar16 + 4] <= dVar20) {
          pdVar9 = pdVar15;
          uVar14 = uVar3;
          dVar20 = pdVar12[lVar16 + 4];
        }
      }
      else {
        pdVar9 = pdVar15;
        uVar14 = uVar3;
        dVar20 = *pdVar15;
      }
      *pdVar12 = dVar20;
      dVar22 = pdVar9[2];
      dVar20 = pdVar9[1];
      pdVar12[3] = pdVar9[3];
      pdVar12[2] = dVar22;
      pdVar12[1] = dVar20;
      pdVar12 = pdVar9;
    } while ((long)uVar14 <= (long)(uVar8 - 2 >> 1));
    if (pdVar9 == pdVar11 + -4) {
      *pdVar9 = dVar17;
      pdVar9[3] = dVar18;
      pdVar9[2] = dVar13;
      pdVar9[1] = dVar21;
    }
    else {
      *pdVar9 = pdVar11[-4];
      dVar22 = pdVar11[-2];
      dVar20 = pdVar11[-3];
      pdVar9[3] = pdVar11[-1];
      pdVar9[2] = dVar22;
      pdVar9[1] = dVar20;
      pdVar11[-4] = dVar17;
      pdVar11[-2] = dVar13;
      pdVar11[-3] = dVar21;
      pdVar11[-1] = dVar18;
      lVar16 = (long)pdVar9 + (0x20 - (long)adStack_2c8) >> 5;
      if (1 < lVar16) {
        uVar14 = lVar16 - 2U >> 1;
        pdVar12 = adStack_2c8 + uVar14 * 4;
        dVar21 = *pdVar12;
        dVar17 = *pdVar9;
        if (dVar17 < dVar21) {
          dVar20 = pdVar9[2];
          dVar18 = pdVar9[1];
          dVar13 = pdVar9[3];
          do {
            pdVar15 = pdVar12;
            *pdVar9 = dVar21;
            dVar22 = pdVar15[2];
            dVar21 = pdVar15[1];
            pdVar9[3] = pdVar15[3];
            pdVar9[2] = dVar22;
            pdVar9[1] = dVar21;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            pdVar12 = adStack_2c8 + uVar14 * 4;
            dVar21 = *pdVar12;
            pdVar9 = pdVar15;
          } while (dVar17 < dVar21);
          *pdVar15 = dVar17;
          pdVar15[2] = dVar20;
          pdVar15[1] = dVar18;
          pdVar15[3] = dVar13;
        }
      }
    }
    uVar8 = uVar8 - 1;
    pdVar11 = pdVar11 + -4;
  } while( true );
}



/* Entry: 107807adc; end: 107807aff;  */

void FUN_107807adc(void)

{
  func_0x0001078096e0();
  func_0x000107807b00();
  return;
}



/* Entry: 107807e3c; end: 107807eb3;  */

long * FUN_107807e3c(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    lVar3 = (long)(plVar6 + 4);
    func_0x000104c2fc44(lVar3,param_2);
    bVar2 = (int)lVar3 == 0;
    lVar3 = 8;
    if (bVar2) {
      lVar3 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar3);
    if (bVar2) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (func_0x000104c2fc44(param_2,plVar5 + 4), (int)param_2 != 0)) {
    plVar5 = plVar1;
  }
  return plVar5;
}



/* Entry: 107808098; end: 1078080c3;  */

void FUN_107808098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078080a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107808340; end: 10780836b;  */

undefined8 * FUN_107808340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109dfc28;
  func_0x0001077fdfe0(param_1 + 1);
  return param_1;
}



/* Entry: 107808708; end: 107809ebf;  */

void FUN_107808708(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 10780aef0; end: 10780af17;  */

bool FUN_10780aef0(int *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return *(long *)(param_1 + 2) != 0;
  }
  return false;
}



/* Entry: 10780b650; end: 10780bb57;  */

void FUN_10780b650(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar9;
  undefined1 uVar10;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  long lVar14;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar15;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *extraout_x9_01;
  int extraout_w10;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *plVar16;
  long extraout_x10_04;
  long extraout_x10_05;
  long extraout_x10_06;
  long extraout_x10_07;
  long lVar17;
  undefined8 extraout_x10_08;
  long extraout_x10_09;
  undefined8 extraout_x10_10;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar18;
  long *extraout_x11;
  long *extraout_x11_00;
  long extraout_x11_01;
  long *extraout_x11_02;
  long extraout_x11_03;
  undefined8 extraout_x11_04;
  undefined8 extraout_x11_05;
  undefined8 uVar19;
  int extraout_w12;
  int extraout_w12_00;
  long extraout_x12;
  long lVar20;
  long extraout_x12_00;
  long extraout_x12_01;
  int extraout_w13;
  int extraout_w13_00;
  long *extraout_x13;
  long *extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long extraout_x13_05;
  int extraout_w14;
  int extraout_w14_00;
  int extraout_w14_01;
  int extraout_w14_02;
  ulong extraout_x14;
  ulong uVar21;
  long extraout_x14_00;
  long extraout_x14_01;
  int extraout_w15;
  int extraout_w15_00;
  int extraout_w15_01;
  undefined8 *extraout_x15;
  undefined8 *extraout_x15_00;
  undefined8 *puVar22;
  int extraout_w16;
  long lVar23;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  
  func_0x00010780dd5c();
  func_0x00010780d974();
  do {
    func_0x00010780d960();
LAB_10780b66c:
    while( true ) {
      func_0x00010780d94c();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010780b874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10dea65fc)[extraout_x8] * 4 + 0x10780b878))();
        return;
      }
      bVar9 = 0x16 < extraout_x8;
      if ((long)extraout_x8 < 0x18) {
        uVar13 = unaff_x20 == unaff_x19;
        if ((unaff_x25 & 1) == 0) {
          uVar10 = 0;
          if ((bool)uVar13) {
            return;
          }
          while (func_0x00010780dc48(), !(bool)uVar10) {
            iVar4 = (*(int *)(unaff_x20[1] + 0xc) + *(int *)(unaff_x20[1] + 8)) * 2;
            iVar1 = (*(int *)(*unaff_x20 + 0xc) + *(int *)(*unaff_x20 + 8)) * 2;
            uVar10 = iVar4 == iVar1;
            if (iVar1 < iVar4) {
              do {
                func_0x00010780dbd4();
                iVar1 = (extraout_w15_01 + extraout_w14_02) * 2;
                uVar10 = extraout_w12_00 == iVar1;
              } while (!(bool)uVar10 && iVar1 <= extraout_w12_00);
              *(undefined8 *)(extraout_x13_05 + -8) = extraout_x10_10;
            }
            func_0x00010780dce4();
          }
          return;
        }
        if ((bool)uVar13) {
          return;
        }
        func_0x00010780dd50();
        goto LAB_10780b8e4;
      }
      if (unaff_x22 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        func_0x00010780dab0();
        lVar23 = extraout_x8_01;
        lVar15 = extraout_x9;
        lVar17 = extraout_x10_06;
        lVar14 = extraout_x9;
        goto joined_r0x00010780b950;
      }
      func_0x00010780daf0();
      if (bVar9) {
        func_0x00010780da00();
        func_0x00010780bb58();
        func_0x00010780d938();
        func_0x00010780bb58();
        func_0x00010780dae0();
        func_0x00010780bb58();
        func_0x00010780dad0();
        func_0x00010780bb58();
        func_0x00010780d924();
      }
      else {
        func_0x00010780dac0();
        func_0x00010780bb58();
      }
      func_0x00010780dcf0();
      if (((unaff_x25 & 1) != 0) ||
         (uVar7 = (*(int *)(extraout_x8_00 + 0xc) + *(int *)(extraout_x8_00 + 8)) * 2,
         (int)uVar7 < (*(int *)(unaff_x20[-1] + 0xc) + *(int *)(unaff_x20[-1] + 8)) * 2)) break;
      iVar1 = *(int *)(*unaff_x21 + 0xc) + *(int *)(*unaff_x21 + 8);
      uVar2 = iVar1 * 2;
      uVar10 = uVar2 <= uVar7;
      cVar11 = SBORROW4(uVar7,uVar2);
      cVar12 = (int)(uVar7 + iVar1 * -2) < 0;
      uVar13 = uVar7 == uVar2;
      plVar16 = unaff_x20;
      if ((int)uVar2 < (int)uVar7) {
        do {
          unaff_x26 = plVar16 + 1;
          iVar1 = *(int *)(*unaff_x26 + 0xc) + *(int *)(*unaff_x26 + 8);
          uVar2 = iVar1 * 2;
          uVar10 = uVar2 <= uVar7;
          cVar11 = SBORROW4(uVar7,uVar2);
          cVar12 = (int)(uVar7 + iVar1 * -2) < 0;
          uVar13 = uVar7 == uVar2;
          plVar16 = unaff_x26;
        } while ((int)uVar7 <= (int)uVar2);
      }
      else {
        do {
          func_0x00010780dcb4();
          if ((bool)uVar10) break;
          func_0x00010780dc60();
          func_0x00010780db70();
        } while ((bool)uVar13 || cVar12 != cVar11);
      }
      func_0x00010780dc54();
      plVar16 = extraout_x10_01;
      if (!(bool)uVar10) {
        do {
          func_0x00010780db70();
          plVar16 = extraout_x10_02;
        } while (!(bool)uVar13 && cVar12 == cVar11);
      }
      while( true ) {
        in_CY = plVar16 <= unaff_x26;
        cVar11 = SBORROW8((long)unaff_x26,(long)plVar16);
        cVar12 = (long)unaff_x26 - (long)plVar16 < 0;
        in_ZR = unaff_x26 == plVar16;
        if ((bool)in_CY) break;
        func_0x00010780d884();
        do {
          unaff_x26 = unaff_x26 + 1;
          func_0x00010780db70();
        } while ((bool)in_ZR || cVar12 != cVar11);
        do {
          func_0x00010780db70();
          plVar16 = extraout_x10_03;
        } while (!(bool)in_ZR && cVar12 == cVar11);
      }
      func_0x00010780dc3c();
      if (!(bool)in_ZR) {
        func_0x00010780dc30();
      }
      func_0x00010780dc78();
    }
    do {
      func_0x00010780dc04();
      iVar1 = (extraout_w11 + extraout_w10) * 2;
      bVar9 = extraout_w9 == iVar1;
    } while (extraout_w9 < iVar1);
    func_0x00010780daa0();
    plVar16 = extraout_x10;
    plVar18 = unaff_x19;
    if (bVar9) {
      do {
        if (plVar18 <= plVar16) break;
        func_0x00010780dbb8();
        plVar16 = extraout_x10_00;
        plVar18 = extraout_x11;
      } while ((extraout_w13_00 + extraout_w14_00) * 2 <= extraout_w9_01);
    }
    else {
      do {
        func_0x00010780dbb8();
      } while ((extraout_w13 + extraout_w14) * 2 <= extraout_w9_00);
    }
    func_0x00010780dcc0();
    plVar16 = extraout_x13;
    while( true ) {
      in_CY = plVar16 <= unaff_x26;
      in_ZR = unaff_x26 == plVar16;
      if ((bool)in_CY) break;
      func_0x00010780da60();
      do {
        unaff_x26 = unaff_x26 + 1;
        plVar16 = extraout_x13_00;
      } while (extraout_w9_02 < (*(int *)(*unaff_x26 + 0xc) + *(int *)(*unaff_x26 + 8)) * 2);
      do {
        plVar16 = plVar16 + -1;
      } while ((*(int *)(*plVar16 + 0xc) + *(int *)(*plVar16 + 8)) * 2 <= extraout_w9_02);
    }
    func_0x00010780dd2c();
    if (!(bool)in_ZR) {
      func_0x00010780dc90();
    }
    func_0x00010780dc84();
    if (!(bool)in_CY) goto LAB_10780b7a8;
    func_0x00010780db10();
    func_0x00010780bc98();
    func_0x00010780da30();
    func_0x00010780bc98();
    if ((int)param_1 == 0) goto code_r0x00010780b7a4;
    unaff_x19 = unaff_x27;
    if ((unaff_x28 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10780b8e4:
  func_0x00010780dd44();
  if ((bool)uVar13) {
    return;
  }
  iVar4 = (*(int *)(extraout_x11_00[1] + 0xc) + *(int *)(extraout_x11_00[1] + 8)) * 2;
  iVar1 = (*(int *)(*extraout_x11_00 + 0xc) + *(int *)(*extraout_x11_00 + 8)) * 2;
  uVar13 = iVar4 == iVar1;
  if (iVar1 < iVar4) {
    do {
      func_0x00010780dd08();
      if ((bool)uVar13) {
        uVar13 = true;
        lVar23 = extraout_x10_04;
        plVar16 = unaff_x20;
        goto LAB_10780b938;
      }
      func_0x00010780dc14();
      iVar1 = (extraout_w15 + extraout_w14_01) * 2;
      uVar13 = extraout_w11_00 == iVar1;
    } while (!(bool)uVar13 && iVar1 <= extraout_w11_00);
    lVar23 = extraout_x10_05;
    plVar16 = (long *)((long)unaff_x20 + extraout_x13_01);
LAB_10780b938:
    *plVar16 = lVar23;
  }
  func_0x00010780dcd8();
  goto LAB_10780b8e4;
joined_r0x00010780b950:
  if (lVar14 < 0) {
    do {
      if (lVar23 < 2) {
        return;
      }
      func_0x00010780d8e8();
      lVar15 = extraout_x8_03;
      lVar23 = extraout_x12_00;
      lVar17 = extraout_x14_00;
      do {
        lVar23 = lVar23 + lVar17 * 8;
        lVar14 = *(long *)(lVar23 + 8);
        lVar17 = lVar17 * 2 + 2;
        cVar11 = SBORROW8(lVar17,lVar15);
        cVar12 = lVar17 - lVar15 < 0;
        bVar9 = lVar17 == lVar15;
        if (lVar17 < lVar15) {
          lVar23 = *(long *)(lVar23 + 0x10);
          iVar8 = (*(int *)(lVar14 + 0xc) + *(int *)(lVar14 + 8)) * 2;
          iVar4 = *(int *)(lVar23 + 0xc) + *(int *)(lVar23 + 8);
          iVar1 = iVar4 * 2;
          cVar11 = SBORROW4(iVar8,iVar1);
          cVar12 = iVar8 + iVar4 * -2 < 0;
          bVar9 = iVar8 == iVar1;
        }
        func_0x00010780da50();
        lVar15 = extraout_x8_04;
        lVar23 = extraout_x12_01;
        lVar17 = extraout_x14_01;
      } while (bVar9 || cVar12 != cVar11);
      func_0x00010780dc9c();
      if (bVar9) {
        *extraout_x9_01 = extraout_x10_08;
        lVar23 = extraout_x8_05;
      }
      else {
        func_0x00010780d7d0();
        lVar23 = extraout_x8_06;
        if ((cVar12 == cVar11) &&
           (func_0x00010780d8d4(), lVar23 = extraout_x8_07,
           (*(int *)(extraout_x11_03 + 0xc) + *(int *)(extraout_x11_03 + 8)) * 2 <
           (*(int *)(extraout_x13_03 + 0xc) + *(int *)(extraout_x13_03 + 8)) * 2)) {
          do {
            func_0x00010780dc6c();
            lVar23 = extraout_x8_08;
            uVar19 = extraout_x11_04;
            puVar22 = extraout_x15;
            if (extraout_x10_09 == 0) break;
            func_0x00010780d898();
            lVar23 = extraout_x8_09;
            uVar19 = extraout_x11_05;
            puVar22 = extraout_x15_00;
          } while (extraout_w12 <
                   (*(int *)(extraout_x13_04 + 0xc) + *(int *)(extraout_x13_04 + 8)) * 2);
          *puVar22 = uVar19;
        }
      }
      lVar23 = lVar23 + -1;
    } while( true );
  }
  cVar11 = SBORROW8(lVar15,lVar17);
  cVar12 = lVar15 - lVar17 < 0;
  if (lVar17 <= lVar15) {
    func_0x00010780d99c();
    if (cVar12 != cVar11) {
      param_1 = (long *)(ulong)(uint)(*(int *)(*(long *)(extraout_x11_01 + 8) + 0xc) +
                                     *(int *)(*(long *)(extraout_x11_01 + 8) + 8));
    }
    func_0x00010780dbf4();
    iVar1 = (*(int *)(extraout_x13_02 + 0xc) + *(int *)(extraout_x13_02 + 8)) * 2;
    lVar23 = extraout_x8_02;
    lVar15 = extraout_x9_00;
    lVar17 = extraout_x10_07;
    plVar16 = extraout_x11_02;
    lVar14 = extraout_x12;
    uVar21 = extraout_x14;
    if ((extraout_w16 + extraout_w15_00) * 2 <= iVar1) {
      do {
        plVar18 = plVar16;
        *param_1 = lVar14;
        if (extraout_x9_00 < (long)uVar21) break;
        uVar6 = uVar21 << 1 | 1;
        plVar5 = unaff_x20 + uVar6;
        uVar3 = uVar21 * 2 + 2;
        lVar20 = *plVar5;
        plVar16 = plVar5;
        lVar14 = lVar20;
        uVar21 = uVar6;
        if ((long)uVar3 < extraout_x8_02) {
          lVar14 = plVar5[1];
          plVar16 = plVar5 + 1;
          uVar21 = uVar3;
          if ((*(int *)(lVar20 + 0xc) + *(int *)(lVar20 + 8)) * 2 <=
              (*(int *)(lVar14 + 0xc) + *(int *)(lVar14 + 8)) * 2) {
            plVar16 = plVar5;
            lVar14 = lVar20;
            uVar21 = uVar6;
          }
        }
        param_1 = plVar18;
      } while ((*(int *)(lVar14 + 0xc) + *(int *)(lVar14 + 8)) * 2 <= iVar1);
      *plVar18 = extraout_x13_02;
    }
  }
  lVar17 = lVar17 + -1;
  lVar14 = lVar17;
  goto joined_r0x00010780b950;
code_r0x00010780b7a4:
  if ((unaff_x28 & 1) == 0) {
LAB_10780b7a8:
    func_0x00010780d8c0();
    FUN_10780b650();
    unaff_x25 = 0;
  }
  goto LAB_10780b66c;
}



/* Entry: 10780c3dc; end: 10780c447;  */

void FUN_10780c3dc(void)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  
  func_0x00010780d818();
  func_0x00010780c388();
  func_0x00010780dcfc();
  func_0x00010780d784();
  if (extraout_w11 < extraout_w10) {
    func_0x00010780d910();
    func_0x00010780d784();
    if (extraout_w11_00 < extraout_w10_00) {
      func_0x00010780d804();
      func_0x00010780d784();
      if (extraout_w11_01 < extraout_w10_01) {
        func_0x00010780d7f0();
        func_0x00010780d784();
        if (extraout_w11_02 < extraout_w10_02) {
          func_0x00010780db28();
        }
      }
    }
  }
  return;
}



/* Entry: 10780d070; end: 10780d0ef;  */

void FUN_10780d070(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x9;
  long lVar9;
  
  lVar8 = *param_2;
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar8 + 0xc);
  iVar2 = *(int *)(lVar7 + 0xc);
  lVar9 = *param_3;
  iVar3 = *(int *)(lVar9 + 0xc);
  if (iVar2 < iVar1) {
    if (iVar1 < iVar3) {
      *param_1 = lVar9;
    }
    else {
      *param_1 = lVar8;
      *param_2 = lVar7;
      if (*(int *)(*param_3 + 0xc) <= iVar2) {
        return;
      }
      *param_2 = *param_3;
    }
    *param_3 = lVar7;
  }
  else {
    cVar4 = SBORROW4(iVar3,iVar1);
    cVar5 = iVar3 - iVar1 < 0;
    bVar6 = iVar3 == iVar1;
    if (iVar1 < iVar3) {
      *param_2 = lVar9;
      *param_3 = lVar8;
      func_0x00010780d9bc(*param_2);
      if (!bVar6 && cVar5 == cVar4) {
        *param_1 = extraout_x8;
        *param_2 = extraout_x9;
        return;
      }
    }
  }
  return;
}



/* Entry: 10780d670; end: 10780d767;  */

long FUN_10780d670(long param_1)

{
  func_0x00010780d694(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10780eb08; end: 10780ec27;  */

long FUN_10780eb08(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x19;
  long *unaff_x20;
  byte bVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar10;
  byte bVar16;
  
  func_0x0001078122d4();
  func_0x000107812548();
  lVar3 = 0;
  uVar6 = *unaff_x19 >> 0xc ^ param_1 >> 7;
  bVar5 = (byte)param_1 & 0x7f;
  while( true ) {
    uVar6 = uVar6 & unaff_x19[2];
    uVar10 = *(undefined8 *)(*unaff_x19 + uVar6);
    bVar9 = (byte)((ulong)uVar10 >> 8);
    bVar11 = (byte)((ulong)uVar10 >> 0x10);
    bVar12 = (byte)((ulong)uVar10 >> 0x18);
    bVar13 = (byte)((ulong)uVar10 >> 0x20);
    bVar14 = (byte)((ulong)uVar10 >> 0x28);
    bVar15 = (byte)((ulong)uVar10 >> 0x30);
    bVar16 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar16 == bVar5),
                          CONCAT16(-(bVar15 == bVar5),
                                   CONCAT15(-(bVar14 == bVar5),
                                            CONCAT14(-(bVar13 == bVar5),
                                                     CONCAT13(-(bVar12 == bVar5),
                                                              CONCAT12(-(bVar11 == bVar5),
                                                                       CONCAT11(-(bVar9 == bVar5),
                                                                                -((byte)uVar10 ==
                                                                                 bVar5)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar1 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar8 = unaff_x19[1];
      puVar2 = (ulong *)(uVar6 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x19[2]
                        );
      if (*(long *)(uVar8 + (long)puVar2 * 0x18) == *unaff_x20) goto LAB_10780ebd0;
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar16 == 0x80),
                                CONCAT16(-(bVar15 == 0x80),
                                         CONCAT15(-(bVar14 == 0x80),
                                                  CONCAT14(-(bVar13 == 0x80),
                                                           CONCAT13(-(bVar12 == 0x80),
                                                                    CONCAT12(-(bVar11 == 0x80),
                                                                             CONCAT11(-(bVar9 == 
                                                  0x80),-((byte)uVar10 == 0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar3 = lVar3 + 8;
    uVar6 = lVar3 + uVar6;
  }
  puVar2 = unaff_x19;
  func_0x000107810708();
  plVar4 = (long *)(unaff_x19[1] + (long)puVar2 * 0x18);
  lVar3 = *unaff_x20;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = lVar3;
  uVar8 = unaff_x19[1];
LAB_10780ebd0:
  return uVar8 + (long)puVar2 * 0x18 + 8;
}



/* Entry: 10780f410; end: 10780f4ff;  */

void FUN_10780f410(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lStack_68;
  undefined1 uStack_60;
  long lStack_58;
  ulong uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001078122d4();
  lStack_68 = param_1 + 0x78;
  uStack_60 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  uVar3 = *(ulong *)(unaff_x19 + 0x50) >> 2;
  func_0x000107811c18(&lStack_48);
  lVar2 = unaff_x19 + 0x38;
  func_0x00010780f388();
  lStack_58 = lVar2;
  lVar2 = lStack_48;
  lVar1 = lStack_40;
  while (uStack_50 = uVar3, lStack_48 = lVar2, lStack_40 = lVar1, lStack_58 != 0) {
    lVar2 = unaff_x20;
    func_0x000107811ebc();
    if (lVar2 == 0) {
      func_0x000107811f18(&lStack_48,uVar3);
    }
    func_0x00010780f3dc(&lStack_58);
    uVar3 = uStack_50;
    lVar2 = lStack_48;
    lVar1 = lStack_40;
  }
  lStack_58 = 0;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_107811bec(unaff_x19 + 0x38,lVar2);
  }
  FUN_107812090(&lStack_48);
  func_0x000104c305a0(&lStack_68);
  return;
}



/* Entry: 10780f7fc; end: 10780f81b;  */

void FUN_10780f7fc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010780f690();
  }
  return;
}



/* Entry: 10780fbbc; end: 10780fbef;  */

void FUN_10780fbbc(undefined8 param_1)

{
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107812370();
  func_0x000107812410(param_1,unaff_x20 + extraout_x8 * 0x28);
  func_0x00010781227c();
  func_0x0001000631d0(param_1,0x28);
  return;
}



/* Entry: 10780fdd0; end: 10780fe33;  */

void FUN_10780fdd0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001078122e0();
  *param_1 = *param_2;
  func_0x00010780f73c(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x38) = *(undefined1 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 10780ffd8; end: 10780ffff;  */

void FUN_10780ffd8(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001078125e8();
  if (param_1 != 0) {
    func_0x000107250860();
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107810284; end: 107810297;  */

void FUN_107810284(undefined8 param_1,long param_2)

{
  func_0x000107812518(&PTR_LOOP_110c8acd8,param_2 + 8);
  return;
}



/* Entry: 107810650; end: 1078106e3;  */

void FUN_107810650(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long extraout_x8;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *param_2 = 0;
  param_2[1] = 0;
  uVar5 = param_2[2];
  plVar2 = param_2 + 3;
  lVar4 = *plVar2;
  plVar3 = param_1 + 3;
  *plVar3 = lVar4;
  param_1[2] = uVar5;
  lVar6 = param_2[4];
  param_1[4] = lVar6;
  if (lVar6 == 0) {
    param_1[2] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[2] = plVar2;
    *plVar2 = 0;
    param_2[4] = 0;
  }
  plVar2 = param_2 + 6;
  lVar4 = *plVar2;
  uVar5 = param_2[5];
  plVar3 = param_1 + 6;
  *plVar3 = lVar4;
  param_1[5] = uVar5;
  lVar6 = param_2[7];
  param_1[7] = lVar6;
  if (lVar6 == 0) {
    param_1[5] = plVar3;
  }
  else {
    *(long **)(lVar4 + 0x10) = plVar3;
    param_2[5] = plVar2;
    *plVar2 = 0;
    param_2[7] = 0;
  }
  func_0x00010780f610(param_2 + 2);
  puVar1 = param_2;
  func_0x00010726b0e4();
  if ((puVar1 == (undefined8 *)0x1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b120(param_2);
  return;
}



/* Entry: 1078108a4; end: 1078108ef;  */

void FUN_1078108a4(void)

{
  func_0x0001078124ac();
  func_0x00010780f76c();
  return;
}



/* Entry: 107810ba8; end: 107810bd7;  */

void FUN_107810ba8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107812250();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107810f34; end: 107810f73;  */

void FUN_107810f34(void)

{
  func_0x0001078122d4();
  func_0x0001078123c4(&PTR_DAT_1109dfe48);
  func_0x000107810ccc();
  return;
}



/* Entry: 107811134; end: 10781116f;  */

void FUN_107811134(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  long extraout_x9;
  long extraout_x10;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x0001078123ec();
    *param_1 = extraout_x8;
    param_1[1] = extraout_x9 + extraout_x10 * 2;
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107811308; end: 10781132b;  */

void FUN_107811308(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x0001078122e0();
  uVar2 = *puVar1;
  *param_2 = &PTR_DAT_1109dff28;
  param_2[1] = uVar2;
  func_0x000107278b70(param_2 + 2,puVar1 + 1);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107811a1c; end: 107811a67;  */

void FUN_107811a1c(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107812260();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107812328();
  func_0x000107812318();
  return;
}



/* Entry: 107811bec; end: 107811c17;  */

void FUN_107811bec(long param_1)

{
  func_0x00010780e8c0();
  if (param_1 != 0) {
    func_0x0001078125d4();
    func_0x000107812048();
  }
  return;
}



/* Entry: 107811e88; end: 107811ebb;  */

void FUN_107811e88(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078122e0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010726b09c();
  }
  return;
}



/* Entry: 107812090; end: 1078120ef;  */

undefined8 FUN_107812090(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001078120bc(&uStack_28);
  return param_1;
}



/* Entry: 107812b34; end: 107812b57;  */

uint FUN_107812b34(ulong param_1)

{
  func_0x000104c2f39c(param_1,*(undefined8 *)(param_1 + 8));
  return (uint)(param_1 >> 1) ^ -((uint)param_1 & 1);
}



/* Entry: 107813204; end: 107813243;  */

ulong FUN_107813204(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x1fffffffffffffff;
    }
    return uVar1;
  }
  func_0x00010781327c();
  func_0x0001078138fc();
  uVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(uVar1);
  func_0x000107813840();
  return uVar1;
}



/* Entry: 10781334c; end: 107813363;  */

void FUN_10781334c(undefined8 *param_1)

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



/* Entry: 107813600; end: 107813677;  */

void FUN_107813600(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x80) {
    func_0x00010724b3d8(param_2 + 0x38);
  }
  return;
}



/* Entry: 107813804; end: 1078139a7;  */

long FUN_107813804(undefined8 param_1,ushort *param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (; param_3 != 0; param_3 = *(long *)(param_3 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= *(ushort *)(param_3 + 0x1c)) {
      lVar1 = 0;
      param_4 = param_3;
    }
  }
  return param_4;
}



/* Entry: 107814054; end: 10781409b;  */

void FUN_107814054(long param_1)

{
  int iVar1;
  long unaff_x20;
  
  func_0x0001078220d8();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x0001078224b0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010781408c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x20))
              (*(long **)(unaff_x20 + 0x10),unaff_x20 + 0x20);
    return;
  }
  return;
}



/* Entry: 1078149bc; end: 107814cb7;  */

uint FUN_1078149bc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  int aiStack_1d0 [8];
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  uint uStack_190;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  func_0x000107822f60();
  uVar6 = 0;
  iVar9 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0x3f800000;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  plVar8 = (long *)param_3[1];
  plVar10 = plVar8;
  while (plVar10 != (long *)*param_3) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    plVar10 = plVar10 + -1;
    puStack_e8 = &uStack_e0;
    func_0x000107814cb8(aiStack_1d0,param_1,*plVar10,&puStack_e8,&uStack_120);
    uVar4 = uStack_190;
    iVar3 = aiStack_1d0[0];
    func_0x0001078150a4(&uStack_138,*(long *)(*plVar10 + 0x18) + 8,aiStack_1d0);
    iVar9 = iVar3 + iVar9;
    uVar6 = uVar6 | uVar4 & 1;
    func_0x0001074cfe98(aiStack_1d0);
    func_0x00010002c948();
    plVar8 = plVar8 + -1;
  }
  lVar2 = param_1[0x22a];
  uVar1 = *(undefined4 *)((long)param_1 + 0x1154);
  lVar5 = param_3[1];
  puVar7 = (undefined8 *)param_1[3];
  func_0x000107822ab4(0x93);
  func_0x000107823038();
  uStack_184 = 1;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  func_0x0001078226fc();
  func_0x0001072bbe40();
  uStack_e0._0_4_ = 1;
  uStack_78 = *puVar7;
  uStack_70 = 3;
  puStack_e8._0_4_ = (int)lVar2;
  func_0x000107822044();
  func_0x0001078228dc();
  func_0x000107822ab4(0x93);
  func_0x000107823038();
  uStack_184 = 1;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  func_0x0001078226fc();
  func_0x0001072bbe40();
  uStack_e0._0_4_ = 1;
  uStack_78 = *puVar7;
  uStack_70 = 3;
  puStack_e8._0_4_ = uVar1;
  func_0x000107822044();
  func_0x0001078228dc();
  func_0x000107822ab4(0x92);
  ppuStack_1b0 = &PTR_DAT_110996720;
  uStack_1a8 = 0;
  uStack_188 = 0;
  uStack_184 = 1;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
  uStack_78 = *puVar7;
  uStack_70 = 3;
  puStack_e8._0_4_ = iVar9;
  func_0x000107822044();
  puStack_e8 = (undefined8 *)CONCAT44(puStack_e8._4_4_,0x8f);
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_c8 = &PTR_DAT_110996720;
  uStack_c0 = 0;
  uStack_a8 = 0x8f;
  uStack_a0 = 0;
  uStack_9c = 1;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  uStack_78 = CONCAT44(uStack_78._4_4_,(int)((ulong)(lVar5 - (long)plVar8) >> 3));
  uStack_70 = 1;
  uStack_f8 = *puVar7;
  uStack_f0 = 3;
  func_0x000107822058();
  func_0x000107262330(&puStack_e8);
  func_0x0001078228dc();
  (**(code **)(*param_1 + 0x48))(param_1,param_2,&uStack_138);
  func_0x00010781c46c(&uStack_138);
  func_0x000107820168(&uStack_120);
  return uVar6;
}



/* Entry: 1078173fc; end: 1078174ff;  */

long * FUN_1078173fc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 in_ZR;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_b0 [40];
  undefined8 uStack_88;
  
  func_0x000107821e20();
  lVar1 = *param_1;
  uVar11 = *(undefined4 *)param_1[1];
  uVar12 = ((undefined4 *)param_1[1])[1];
  lVar8 = param_1[2];
  lVar2 = param_1[3];
  uVar13 = *(undefined4 *)(lVar8 + 0x1c);
  uVar14 = *(undefined4 *)(lVar8 + 0x20);
  uVar15 = *(undefined4 *)param_1[4];
  bVar3 = *(byte *)(lVar8 + 0x6d1);
  bVar4 = *(byte *)(lVar8 + 0x25);
  bVar5 = *(byte *)(lVar1 + 0x1170);
  uStack_88 = extraout_x8;
  func_0x00010781ccb8(auStack_b0,param_1[5] + 8,param_1[6]);
  plVar6 = (long *)(lVar1 + 0x40);
  plVar7 = param_2;
  func_0x0001077f579c(uVar11,uVar12,uVar14,uVar13,uVar15,plVar6,param_2,lVar8 + 0x358,lVar2,
                      bVar3 & 1,bVar4 & 1,bVar5 & 1,lVar8 + 0x6d8,auStack_b0,lVar1 + 0x12a0);
  func_0x00010782211c();
  func_0x000107821dac(uStack_88);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010782211c();
  func_0x000107822028();
  if (plVar6 == plVar7) {
    return plVar6;
  }
  lVar1 = *plVar7;
  lVar2 = plVar7[1];
  uVar10 = lVar2 - lVar1;
  lVar8 = *plVar6;
  if ((ulong)(plVar6[2] - lVar8) < uVar10) {
    if (lVar8 != 0) {
      plVar6[1] = lVar8;
      __ZdlPv(lVar8);
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 0;
    }
    plVar7 = plVar6;
    func_0x0001077f8164(plVar6,(long)uVar10 / 0x14);
    func_0x0001074c30d4(plVar6,plVar7);
    lVar8 = plVar6[1];
  }
  else {
    lVar9 = plVar6[1];
    if ((ulong)(lVar9 - lVar8) < uVar10) {
      lVar1 = lVar1 + (lVar9 - lVar8);
      if (lVar9 != lVar8) {
        func_0x000107822958();
        _memmove();
        lVar9 = plVar6[1];
      }
      lVar2 = lVar2 - lVar1;
      if (lVar2 != 0) {
        _memmove(lVar9,lVar1,lVar2 + -3);
      }
      lVar8 = lVar9 + lVar2;
      goto code_r0x0001078175e0;
    }
  }
  if (lVar2 != lVar1) {
    func_0x000107822958();
    _memmove();
  }
  lVar8 = lVar8 + uVar10;
code_r0x0001078175e0:
  plVar6[1] = lVar8;
  return plVar6;
}



/* Entry: 107818cd4; end: 107818fef;  */

void FUN_107818cd4(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long *plVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar8;
  ulong extraout_x9_02;
  long *plVar9;
  ulong uVar10;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long extraout_x12;
  ulong uVar12;
  long *unaff_x19;
  ulong unaff_x20;
  ulong uVar13;
  ulong unaff_x25;
  
  func_0x0001078221e8();
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar5 = uVar13 - 1;
    if ((uVar13 & uVar5) == 0) {
      unaff_x25 = uVar5 & unaff_x20;
      in_NG = false;
    }
    else {
      in_NG = (long)(unaff_x20 - uVar13) < 0;
      unaff_x25 = unaff_x20;
      if (uVar13 <= unaff_x20) {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = unaff_x20 / uVar13;
        }
        unaff_x25 = unaff_x20 - uVar10 * uVar13;
      }
    }
    plVar7 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_107818d84;
          uVar10 = plVar7[1];
          if (uVar10 != unaff_x20) break;
          in_NG = (long)(plVar7[2] - unaff_x20) < 0;
          if (plVar7[2] == unaff_x20) {
            return;
          }
        }
        if ((uVar13 & uVar5) == 0) {
          uVar10 = uVar10 & uVar5;
        }
        else if (uVar13 <= uVar10) {
          uVar8 = 0;
          if (uVar13 != 0) {
            uVar8 = uVar10 / uVar13;
          }
          uVar10 = uVar10 - uVar8 * uVar13;
        }
        in_NG = (long)(uVar10 - unaff_x25) < 0;
      } while (uVar10 == unaff_x25);
    }
  }
LAB_107818d84:
  plVar7 = unaff_x19 + 2;
  func_0x000107822558();
  plVar9 = param_1;
  func_0x0001078229a0();
  *plVar9 = 0;
  plVar9[1] = unaff_x20;
  plVar9[2] = unaff_x20;
  lVar6 = *param_3;
  plVar9[4] = param_3[1];
  plVar9[3] = lVar6;
  plVar9[5] = param_3[2];
  func_0x000107821fc4();
  if ((uVar13 != 0) && (func_0x000107822234(), !(bool)in_NG)) goto LAB_107818f6c;
  bVar3 = 2 < uVar13;
  bVar4 = uVar13 == 3;
  func_0x000107821e0c(uVar13 << 1);
  uVar5 = extraout_x8;
  if (!bVar3 || bVar4) {
    uVar5 = extraout_x9;
  }
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = unaff_x19[1];
  }
  if (uVar13 < uVar5) {
LAB_107818e20:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107818fe4);
      (*pcVar2)();
    }
    __Znwm(uVar5 << 3);
    func_0x000107821598();
    uVar13 = 0;
    unaff_x19[1] = uVar5;
    while (bVar4 = uVar13 <= uVar5, uVar5 != uVar13) {
      func_0x000107822324();
      uVar13 = extraout_x9_00;
    }
    uVar13 = uVar5;
    if (*plVar7 != 0) {
      func_0x000107823078();
      uVar10 = extraout_x11;
      if (bVar4) {
        uVar10 = extraout_x11 - extraout_x12 * uVar5;
      }
      if ((uVar5 & extraout_x9_01) == 0) {
        uVar10 = extraout_x11 & extraout_x9_01;
      }
      *(long **)(extraout_x8_00 + uVar10 * 8) = plVar7;
      lVar6 = extraout_x8_00;
      uVar8 = extraout_x9_01;
      plVar9 = extraout_x10;
      while (plVar11 = plVar9, plVar9 = (long *)*plVar11, plVar9 != (long *)0x0) {
        uVar12 = plVar9[1];
        if ((uVar5 & uVar8) == 0) {
          uVar12 = uVar12 & uVar8;
        }
        else if (uVar5 <= uVar12) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar12 / uVar5;
          }
          uVar12 = uVar12 - uVar1 * uVar5;
        }
        if (uVar12 != uVar10) {
          if (*(long *)(lVar6 + uVar12 * 8) == 0) {
            *(long **)(lVar6 + uVar12 * 8) = plVar11;
            uVar10 = uVar12;
          }
          else {
            *plVar11 = *plVar9;
            func_0x000107821df4();
            lVar6 = extraout_x8_01;
            uVar8 = extraout_x9_02;
            plVar9 = extraout_x10_00;
            uVar10 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar13) {
    uVar10 = (ulong)((float)(ulong)unaff_x19[3] / *(float *)(unaff_x19 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107821d54();
    }
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    if (uVar5 < uVar13) {
      if (uVar5 != 0) goto LAB_107818e20;
      func_0x000107821598();
      unaff_x19[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = unaff_x19[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x25 = uVar13 - 1 & unaff_x20;
  }
  else {
    unaff_x25 = unaff_x20;
    if (uVar13 <= unaff_x20) {
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = unaff_x20 / uVar13;
      }
      unaff_x25 = unaff_x20 - uVar5 * uVar13;
    }
  }
LAB_107818f6c:
  lVar6 = *unaff_x19;
  plVar9 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar9 == (long *)0x0) {
    *param_1 = *plVar7;
    *plVar7 = (long)param_1;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar7;
    if (*param_1 != 0) {
      uVar5 = *(ulong *)(*param_1 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar5 = uVar5 & uVar13 - 1;
      }
      else if (uVar13 <= uVar5) {
        uVar10 = 0;
        if (uVar13 != 0) {
          uVar10 = uVar5 / uVar13;
        }
        uVar5 = uVar5 - uVar10 * uVar13;
      }
      *(long **)(lVar6 + uVar5 * 8) = param_1;
    }
  }
  else {
    *param_1 = *plVar9;
    *plVar9 = (long)param_1;
  }
  func_0x000107821f1c();
  func_0x0001078215b0();
  return;
}



/* Entry: 107819e20; end: 107819ef7;  */

void FUN_107819e20(long *param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  ulong unaff_x21;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  func_0x000107822830();
  puVar2 = (undefined4 *)param_1[1];
  uVar5 = (long)puVar2 - *param_1 >> 2;
  uVar1 = param_2 + uVar5;
  if (uVar5 < uVar1) {
    if ((ulong)(*(long *)(unaff_x19 + 0x10) - (long)puVar2 >> 2) < unaff_x21) {
      func_0x00010740a268();
      func_0x000107822160();
      func_0x000107409f44(auStack_58);
      puVar2 = puStack_48;
      for (lVar4 = unaff_x21 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      }
      puStack_48 = puStack_48 + unaff_x21;
      func_0x0001078225f0();
      func_0x000107409f20();
      func_0x000107409fc0(auStack_58);
    }
    else {
      puVar3 = puVar2;
      for (lVar4 = unaff_x21 << 2; lVar4 != 0; lVar4 = lVar4 + -4) {
        *puVar3 = param_3;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 **)(unaff_x19 + 8) = puVar2 + unaff_x21;
    }
  }
  else if (uVar5 != uVar1) {
    *(ulong *)(unaff_x19 + 8) = *param_1 + uVar1 * 4;
  }
  return;
}



/* Entry: 10781a52c; end: 10781a5b3;  */

float FUN_10781a52c(int param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x21;
  float fVar2;
  
  func_0x000107822830();
  func_0x0001078224b0();
  fVar2 = 1.0;
  if (param_1 != 0) {
    puVar1 = (ulong *)(unaff_x19 + 0x1110);
    if (*(char *)(unaff_x19 + 0x1118) == '\0') {
      puVar1 = (ulong *)(unaff_x21 + 0x70);
    }
    if (0 < (long)*puVar1) {
      fVar2 = *(float *)(unaff_x19 + 0x114c) +
              (((float)(param_3 - *(long *)(unaff_x19 + 0x1140)) / 1e+09) * 1e+09) / (float)*puVar1;
    }
  }
  return fVar2;
}



/* Entry: 10781abac; end: 10781b11b;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107815a88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10781abac(undefined8 param_1,float param_2,undefined4 param_3,long ****param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  byte bVar10;
  undefined *puVar11;
  char cVar12;
  code *pcVar13;
  undefined1 in_ZR;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  undefined8 *puVar18;
  long **pplVar19;
  undefined8 extraout_x8;
  long ****extraout_x8_00;
  code *extraout_x8_01;
  ulong extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  double extraout_x8_05;
  long ****extraout_x8_06;
  code *extraout_x8_07;
  ulong extraout_x8_08;
  long lVar20;
  long ****extraout_x8_09;
  code *extraout_x8_10;
  long ***extraout_x8_11;
  long ****pppplVar21;
  ulong extraout_x8_12;
  double extraout_x8_13;
  code *extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  ulong extraout_x8_17;
  double extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long ****pppplVar22;
  long ****extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  ulong extraout_x8_25;
  long ****extraout_x8_26;
  ulong extraout_x8_27;
  undefined4 *extraout_x8_28;
  undefined8 extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x9;
  long ****extraout_x9_00;
  long ****extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long ***ppplVar23;
  long ***extraout_x9_04;
  code *extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  long *extraout_x10;
  long *plVar24;
  long *extraout_x10_00;
  long ****extraout_x10_01;
  ulong uVar25;
  long ****extraout_x11;
  long ****extraout_x11_00;
  long extraout_x12;
  long *plVar26;
  long ****extraout_x13;
  undefined8 extraout_x13_00;
  long ****pppplVar27;
  uint uVar28;
  long ****pppplVar29;
  long ****pppplVar30;
  long ****pppplVar31;
  long lVar32;
  long ***ppplVar33;
  long lVar34;
  ulong uVar35;
  long ***ppplVar36;
  long ****pppplVar37;
  long **pplVar38;
  long ***ppplVar39;
  long **pplVar40;
  long *plVar41;
  long ***ppplVar42;
  long ***ppplVar43;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined4 uVar44;
  undefined1 auStack_1848 [2544];
  long *aplStack_e58 [31];
  ulong uStack_d60;
  ulong uStack_d58;
  long ***ppplStack_d50;
  uint *puStack_d48;
  ulong *puStack_d40;
  undefined4 *puStack_d38;
  undefined4 uStack_d30;
  undefined4 uStack_d2c;
  long lStack_d28;
  undefined1 *puStack_d20;
  long ***ppplStack_d18;
  long *plStack_d10;
  long lStack_d08;
  uint uStack_d00;
  uint uStack_cfc;
  undefined8 *puStack_cf8;
  long ***ppplStack_cf0;
  uint uStack_ce8;
  uint uStack_ce4;
  long ***ppplStack_ce0;
  undefined8 *puStack_cd8;
  long ***appplStack_cd0 [2];
  long ***ppplStack_cc0;
  long **pplStack_cb8;
  long **pplStack_cb0;
  long *plStack_ca0;
  long *plStack_c98;
  undefined1 auStack_c88 [384];
  long *plStack_b08;
  long *plStack_b00;
  undefined1 auStack_af0 [400];
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_940;
  long lStack_938;
  undefined8 uStack_930;
  long ***appplStack_920 [2];
  long ***ppplStack_910;
  double dStack_908;
  long ***ppplStack_900;
  long ***ppplStack_8f8;
  long **pplStack_8f0;
  char cStack_8c8;
  undefined1 auStack_8c0 [8];
  undefined1 auStack_8b8 [40];
  undefined1 auStack_890 [8];
  long lStack_888;
  long **pplStack_7c8;
  long **pplStack_7c0;
  long **pplStack_7b8;
  long **pplStack_7b0;
  long ***ppplStack_7a8;
  undefined1 auStack_7a0 [8];
  undefined1 auStack_798 [40];
  long alStack_770 [173];
  undefined1 auStack_208 [74];
  byte bStack_1be;
  char cStack_1bd;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  float fStack_188;
  undefined4 uStack_184;
  byte bStack_168;
  undefined1 auStack_160 [56];
  undefined2 uStack_128;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [56];
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 uStack_88;
  undefined8 uStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppplVar29 = param_4;
  func_0x000107821e20();
  if (((ulong)pppplVar29[0x287] & 1) == 0) {
    func_0x000107821dac(extraout_x8_29);
    if (!(bool)in_ZR) goto LAB_10781b094;
    puStack_d38 = extraout_x8_28;
    puStack_cd8 = param_5;
    func_0x000107821e20();
    lStack_938 = 0;
    uStack_940 = 0;
    uStack_930 = 0;
    uStack_958 = 0;
    uStack_960 = 0;
    uStack_950 = 0;
    uStack_80 = extraout_x8;
    func_0x0001074d0f04(&uStack_940,0x20);
    func_0x0001074d2c98(&uStack_960,0x20);
    plVar41 = (long *)*puStack_cd8;
    lStack_d28 = *plVar41;
    lStack_d08 = plVar41[1];
    func_0x00010740b5f8(auStack_c88,lStack_d08 + 0x10,param_4 + 8);
    lVar34 = plVar41[1];
    pppplVar29 = param_4 + 0x22f;
    func_0x0001078139a8(pppplVar29,plVar41 + 4);
    func_0x00010781c4b0(auStack_8c0,pppplVar29);
    lVar32 = lStack_d28;
    (*(code *)(*param_4)[0xb])(&uStack_1a0,param_4,lStack_d28,auStack_c88,0x2000);
    func_0x00010781c4d8(auStack_890,lVar32,lVar34,param_4 + 8,auStack_8c0,&uStack_1a0);
    func_0x0001077f79bc(auStack_8b8);
    uStack_d2c = *(undefined4 *)((long)param_4[1] + 0x6c);
    uStack_d30 = *(undefined4 *)(param_4[1] + 0xe);
    func_0x0001078175f0(&plStack_ca0,*plVar41,plVar41 + 0x12);
    plStack_d10 = plVar41;
    if ((*(char *)(param_4 + 0x22d) == '\x01') &&
       (pppplVar29 = (long ****)param_4[0x22b], pppplVar29 != (long ****)0x0)) {
      iVar17 = (int)param_4[1];
      func_0x0001078173dc();
      plVar24 = plStack_c98;
      plVar26 = plStack_ca0;
      puVar11 = PTR___ZSt7nothrow_1103469d8;
      if (iVar17 != 0) {
        pppplVar37 = (long ****)((long)plStack_c98 - (long)plStack_ca0 >> 3);
        uStack_198 = (long ****)0x0;
        uStack_1a0 = (long ****)0x0;
        ppplStack_cc0 = (long ***)pppplVar29;
        pppplVar29 = pppplVar37;
        if ((long)pppplVar37 < 0x81) {
          pppplVar29 = (long ****)0x0;
        }
        else {
          for (; pppplVar29 != (long ****)0x0; pppplVar29 = (long ****)((ulong)pppplVar29 >> 1)) {
            lVar32 = (long)pppplVar29 << 3;
            __ZnwmRKSt9nothrow_t(lVar32,puVar11);
            if (lVar32 != 0) goto code_r0x000107815494;
          }
          lVar32 = 0;
code_r0x000107815494:
          ppplStack_900 = (long ***)0x0;
          ppplStack_8f8 = (long ***)pppplVar29;
          func_0x000107820b10(&uStack_1a0,lVar32);
          uStack_198 = pppplVar29;
          func_0x000107820b28(&ppplStack_900);
        }
        func_0x000107820928(plVar26,plVar24,&ppplStack_cc0,pppplVar37,uStack_1a0,pppplVar29);
        func_0x000107820b28(&uStack_1a0);
        plVar41 = plStack_d10;
      }
    }
    uVar35 = 0;
    for (plVar26 = plStack_ca0; plVar26 != plStack_c98; plVar26 = plVar26 + 1) {
      uVar35 = (ulong)(uint)((int)uVar35 +
                            (int)(((*(long **)(*plVar26 + 0x5b8))[1] - **(long **)(*plVar26 + 0x5b8)
                                  ) / 0x38));
    }
    uVar3 = *(ushort *)(lStack_d28 + 0x74);
    pppplVar30 = (long ****)(ulong)uVar3;
    puStack_d48 = (uint *)puStack_cd8[6];
    puStack_d40 = (ulong *)puStack_cd8[7];
    uVar25 = puStack_cd8[8];
    uStack_d58 = (ulong)*(byte *)(plVar41[1] + 4);
    pppplVar29 = (long ****)puStack_cd8[4];
    pppplVar31 = (long ****)puStack_cd8[5];
    FUN_10781ca54(pppplVar29,
                  (long)((float)((long)pppplVar29[3] + uVar35) / *(float *)(pppplVar29 + 4)));
    uStack_d00 = (uint)(uVar25 == 0);
    pplVar38 = (long **)&uStack_1a0;
    puStack_d20 = auStack_98;
    ppplStack_d50 = (long ***)(pppplVar31 + 2);
    uStack_ce4 = (uint)uVar3;
    uStack_d60 = uVar25;
    ppplStack_d18 = (long ***)param_4;
    ppplStack_cf0 = (long ***)pppplVar31;
    for (pppplVar37 = (long ****)0x0;
        pppplVar21 = (long ****)((long)plStack_c98 - (long)plStack_ca0 >> 3),
        uVar15 = pppplVar37 == pppplVar21, pppplVar37 < pppplVar21;
        pppplVar37 = (long ****)((long)pppplVar37 + 1)) {
      lVar32 = plStack_ca0[(long)pppplVar37];
      if ((((uint)pppplVar30 >> 0xb & 1) == 0) ||
         (uVar15 = *(char *)(lVar32 + 0x655) == '\x01', !(bool)uVar15)) {
        func_0x000107822bb4();
        if ((extraout_x8_02 & 1) == 0) {
          uStack_ce8 = 0;
          ppplStack_ce0 = (long ***)pppplVar37;
code_r0x000107815604:
          pppplVar29 = (long ****)puStack_cd8[3];
          func_0x0001078201d4(pppplVar29,*(undefined4 *)(lVar32 + 0x658));
          if (pppplVar29 == (long ****)0x0) {
            puStack_cf8 = (undefined8 *)(lVar32 + 0x5b8);
            func_0x000107822818(*(undefined8 *)(lVar32 + 0x5b8));
            if ((bool)uVar15) {
code_r0x00010781564c:
              uVar28 = 0;
            }
            else {
              func_0x000107822a94(lStack_888);
              (*extraout_x8_03)();
              if (((ulong)pppplVar29 & 1) != 0) goto code_r0x00010781564c;
              uVar28 = (uint)pppplVar29 ^ 1;
              if (*(char *)(lVar32 + 0x5c8) == '\x03') {
                func_0x000107822bc0();
                for (; pppplVar37 != pppplVar31; pppplVar37 = pppplVar37 + 7) {
                  func_0x000107822e28();
                  func_0x000107822cfc();
                  func_0x000107822e08();
                  if ((pplVar38 != (long **)0x0) && (((ulong)pplVar38[5] & 1) != 0))
                  goto code_r0x000107815618;
                }
              }
              else {
                if (*(char *)(lVar32 + 0x5c8) == '\x02') {
                  func_0x000107822bc0();
                  do {
                    if (pppplVar37 == pppplVar31) goto code_r0x000107815650;
                    func_0x000107822e28();
                    func_0x000107822cfc();
                    func_0x000107822e08();
                    pppplVar37 = pppplVar37 + 7;
                  } while (pplVar38 == (long **)0x0);
                  goto code_r0x000107815618;
                }
                uVar28 = 1;
              }
            }
code_r0x000107815650:
            cVar12 = cStack_1bd;
            bVar10 = bStack_1be;
            pppplVar31 = (long ****)(ulong)bStack_1be;
            func_0x000107816538(param_4,lVar32,auStack_890);
            uStack_cfc = (uint)param_4;
            uVar1 = 0;
            if (bVar10 != 1) {
              uVar1 = uVar28;
            }
            if (uVar1 == 1 && cVar12 != '\x01') {
              lVar2 = ((long *)*puStack_cf8)[1];
              bVar10 = (byte)param_4;
              uVar35 = (ulong)param_4 >> 8;
              for (lVar34 = *(long *)*puStack_cf8; uVar15 = lVar34 - lVar2 < 0, lVar34 != lVar2;
                  lVar34 = lVar34 + 0x38) {
                plVar41 = (long *)puStack_cd8[4];
                func_0x00010724ef84(&ppplStack_900,lVar34);
                pppplVar29 = (long ****)(plVar41 + 3);
                func_0x000100102e7c(pppplVar29,&ppplStack_900);
                pppplVar30 = (long ****)plVar41[1];
                pppplVar37 = pppplVar29;
                if (pppplVar30 != (long ****)0x0) {
                  uVar25 = (long)pppplVar30 - 1;
                  if (((ulong)pppplVar30 & uVar25) == 0) {
                    pppplVar31 = (long ****)(uVar25 & (ulong)pppplVar29);
                    uVar15 = false;
                  }
                  else {
                    uVar15 = (long)pppplVar29 - (long)pppplVar30 < 0;
                    pppplVar31 = pppplVar29;
                    if (pppplVar30 <= pppplVar29) {
                      uVar4 = 0;
                      if (pppplVar30 != (long ****)0x0) {
                        uVar4 = (ulong)pppplVar29 / (ulong)pppplVar30;
                      }
                      pppplVar31 = (long ****)((long)pppplVar29 - uVar4 * (long)pppplVar30);
                    }
                  }
                  pppplVar21 = *(long *****)(*plVar41 + (long)pppplVar31 * 8);
                  if (pppplVar21 != (long ****)0x0) {
                    do {
                      while( true ) {
                        pppplVar21 = (long ****)*pppplVar21;
                        if (pppplVar21 == (long ****)0x0) goto code_r0x000107815a34;
                        pppplVar27 = (long ****)pppplVar21[1];
                        uVar15 = (long)pppplVar27 - (long)pppplVar29 < 0;
                        if (pppplVar27 != pppplVar29) break;
                        pppplVar37 = pppplVar21 + 2;
                        func_0x0001000e107c(pppplVar37,&ppplStack_900);
                        if (((ulong)pppplVar37 & 1) != 0) goto code_r0x000107815b58;
                      }
                      if (((ulong)pppplVar30 & uVar25) == 0) {
                        pppplVar27 = (long ****)((ulong)pppplVar27 & uVar25);
                      }
                      else if (pppplVar30 <= pppplVar27) {
                        uVar4 = 0;
                        if (pppplVar30 != (long ****)0x0) {
                          uVar4 = (ulong)pppplVar27 / (ulong)pppplVar30;
                        }
                        pppplVar27 = (long ****)((long)pppplVar27 - uVar4 * (long)pppplVar30);
                      }
                      uVar15 = (long)pppplVar27 - (long)pppplVar31 < 0;
                    } while (pppplVar27 == pppplVar31);
                  }
                }
code_r0x000107815a34:
                func_0x000107822558();
                pppplVar21 = (long ****)(plVar41 + 2);
                uStack_190 = 1;
                *pppplVar37 = (long ***)0x0;
                pppplVar37[1] = (long ***)pppplVar29;
                pppplVar37[4] = (long ***)pplStack_8f0;
                pppplVar37[3] = ppplStack_8f8;
                pppplVar37[2] = ppplStack_900;
                ppplStack_8f8 = (long ***)0x0;
                ppplStack_900 = (long ***)0x0;
                pplStack_8f0 = (long **)0x0;
                *(undefined1 *)(pppplVar37 + 5) = 0;
                uStack_1a0 = pppplVar37;
                uStack_198 = pppplVar21;
                func_0x000107822290(plVar41[3]);
                if (pppplVar30 == (long ****)0x0) {
code_r0x000107815a90:
                  func_0x000107821dc0((long)pppplVar30 << 1);
                  FUN_10781ca54(plVar41);
                  pppplVar30 = (long ****)plVar41[1];
                  if (((ulong)pppplVar30 & (long)pppplVar30 - 1U) == 0) {
                    pppplVar31 = (long ****)((long)pppplVar30 - 1U & (ulong)pppplVar29);
                  }
                  else {
                    pppplVar31 = pppplVar29;
                    if (pppplVar30 <= pppplVar29) {
                      uVar25 = 0;
                      if (pppplVar30 != (long ****)0x0) {
                        uVar25 = (ulong)pppplVar29 / (ulong)pppplVar30;
                      }
                      pppplVar31 = (long ****)((long)pppplVar29 - uVar25 * (long)pppplVar30);
                    }
                  }
                }
                else {
                  param_2 = (float)pppplVar30;
                  func_0x000107822234(CONCAT17(in_register_00005007,
                                               CONCAT16(in_register_00005006,
                                                        CONCAT15(in_register_00005005,
                                                                 CONCAT14(in_register_00005004,
                                                                          CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                              ),(int)plVar41[4]);
                  if ((bool)uVar15) goto code_r0x000107815a90;
                }
                lVar20 = *plVar41;
                if (*(long *)(lVar20 + (long)pppplVar31 * 8) == 0) {
                  *pppplVar37 = *pppplVar21;
                  *pppplVar21 = (long ***)pppplVar37;
                  *(long *****)(lVar20 + (long)pppplVar31 * 8) = pppplVar21;
                  if (*pppplVar37 != (long ***)0x0) {
                    pppplVar29 = (long ****)(*pppplVar37)[1];
                    if (((ulong)pppplVar30 & (long)pppplVar30 - 1U) == 0) {
                      pppplVar29 = (long ****)((ulong)pppplVar29 & (long)pppplVar30 - 1U);
                    }
                    else if (pppplVar30 <= pppplVar29) {
                      uVar25 = 0;
                      if (pppplVar30 != (long ****)0x0) {
                        uVar25 = (ulong)pppplVar29 / (ulong)pppplVar30;
                      }
                      pppplVar29 = (long ****)((long)pppplVar29 - uVar25 * (long)pppplVar30);
                    }
                    *(long *****)(lVar20 + (long)pppplVar29 * 8) = pppplVar37;
                  }
                }
                else {
                  func_0x000107822b04();
                }
                uStack_1a0 = (long ****)0x0;
                plVar41[3] = plVar41[3] + 1;
                func_0x00010781cb70(&uStack_1a0);
                pppplVar21 = pppplVar37;
code_r0x000107815b58:
                *(byte *)(pppplVar21 + 5) = (bVar10 | (byte)uVar35) & 1;
                param_4 = &ppplStack_900;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
              }
            }
            plVar41 = plStack_d10;
            pppplVar21 = (long ****)ppplStack_d18;
            if (*(int *)(lVar32 + 0x658) != -1) {
              func_0x000107822a94(lStack_888);
              (*extraout_x8_04)();
              if (((ulong)param_4 & 1) == 0) {
                param_4 = (long ****)puStack_cd8[3];
                func_0x000107426444(param_4,(int *)(lVar32 + 0x658));
              }
            }
            *(int *)(pppplVar21 + 0x22a) = *(int *)(pppplVar21 + 0x22a) + 1;
            if ((uStack_cfc & 0x101) != 0) {
              *(int *)((long)pppplVar21 + 0x1154) = *(int *)((long)pppplVar21 + 0x1154) + 1;
              func_0x00010782229c();
              pppplVar37 = (long ****)ppplStack_ce0;
              pplVar38 = (long **)&uStack_1a0;
              ppplStack_cc0 = (long ***)param_4;
              pplStack_cb8 = (long **)extraout_x8_05;
              if (extraout_x8_05 != 0.0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_00 != 0);
              }
              (*(code *)(*param_4)[7])(&uStack_1a0);
              puVar18 = &uStack_1a0;
              func_0x000107330078();
              ppplStack_900 = (long ***)(double)(int)**(short **)*puVar18;
              ppplStack_8f8 = (long ***)(double)(int)(*(short **)*puVar18)[1];
              func_0x000107822d68(&uStack_1a0,&ppplStack_900);
              dVar7 = (double)uStack_1a0 / (double)CONCAT44(uStack_184,fStack_188);
              dVar9 = (double)uStack_198 / (double)CONCAT44(uStack_184,fStack_188);
              auVar5[8] = SUB81(dVar9,0);
              auVar5._0_8_ = dVar7;
              auVar5[9] = (char)((ulong)dVar9 >> 8);
              auVar5[10] = (char)((ulong)dVar9 >> 0x10);
              auVar5[0xb] = (char)((ulong)dVar9 >> 0x18);
              auVar5[0xc] = (char)((ulong)dVar9 >> 0x20);
              auVar5[0xd] = (char)((ulong)dVar9 >> 0x28);
              auVar5[0xe] = (char)((ulong)dVar9 >> 0x30);
              auVar5[0xf] = (char)((ulong)dVar9 >> 0x38);
              fVar6 = (float)dVar7;
              in_b0 = SUB41(fVar6,0);
              in_register_00005001 = (undefined1)((uint)fVar6 >> 8);
              in_register_00005002 = (undefined1)((uint)fVar6 >> 0x10);
              in_register_00005003 = (undefined1)((uint)fVar6 >> 0x18);
              fVar8 = (float)auVar5._8_8_;
              in_register_00005004 = SUB41(fVar8,0);
              in_register_00005005 = (undefined1)((uint)fVar8 >> 8);
              in_register_00005006 = (undefined1)((uint)fVar8 >> 0x10);
              in_register_00005007 = (undefined1)((uint)fVar8 >> 0x18);
              appplStack_cd0[0] =
                   (long ***)
                   CONCAT17(in_register_00005007,
                            CONCAT16(in_register_00005006,
                                     CONCAT15(in_register_00005005,
                                              CONCAT14(in_register_00005004,fVar6))));
              func_0x000107822d1c(pppplVar21 + 8,pppplVar21[0x254],pppplVar21[0x255]);
              uVar44 = SUB84(uStack_1a0,0);
              uStack_1a0 = (long ****)
                           CONCAT44(uVar44,CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
              ;
              uStack_198 = (long ****)CONCAT44(param_3,param_2);
              func_0x000107822d1c(pppplVar21 + 8,pppplVar21[0x251],pppplVar21[0x252]);
              uStack_190 = CONCAT44(uVar44,CONCAT13(in_register_00005003,
                                                    CONCAT12(in_register_00005002,
                                                             CONCAT11(in_register_00005001,in_b0))))
              ;
              fStack_188 = param_2;
              uStack_184 = param_3;
              func_0x0001074b2900(&ppplStack_900,&uStack_1a0,2);
              dStack_908 = (double)pplStack_cb8;
              ppplStack_910 = ppplStack_cc0;
              ppplStack_cc0 = (long ***)0x0;
              pplStack_cb8 = (long **)0x0;
              func_0x000107278b70(appplStack_920,puStack_cf8);
              uVar28 = uStack_ce4;
              pppplVar30 = (long ****)(ulong)uStack_ce4;
              param_2 = *(float *)(puStack_cd8 + 2);
              func_0x0001074d5004(CONCAT17(in_register_00005007,
                                           CONCAT16(in_register_00005006,
                                                    CONCAT15(in_register_00005005,
                                                             CONCAT14(in_register_00005004,
                                                                      CONCAT13(in_register_00005003,
                                                                               CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),
                                  *(undefined4 *)((long)puStack_cd8 + 0xc),&uStack_1a0,
                                  &ppplStack_910,appplStack_cd0,&ppplStack_900,appplStack_920);
              func_0x00010748b9dc(&uStack_940,&uStack_1a0);
              bVar10 = (byte)uStack_ce8;
              func_0x00010748be00(&uStack_1a0);
              func_0x00010726b09c(appplStack_920);
              func_0x000107267e44(&ppplStack_910);
              *(byte *)(lStack_938 + -8) = bVar10 & 1;
              pppplVar29 = &ppplStack_900;
              func_0x00010748be30();
              func_0x000107822ce0();
              param_4 = pppplVar21;
              if (((uVar28 >> 0xb & 1) == 0) || (*(char *)(lVar32 + 0x655) != '\x01'))
              goto code_r0x000107815dcc;
              func_0x00010782229c();
              ppplStack_900 = (long ***)pppplVar29;
              ppplStack_8f8 = (long ***)extraout_x8_06;
              if (extraout_x8_06 != (long ****)0x0) {
                do {
                  func_0x000107821f0c();
                } while (extraout_w10_01 != 0);
              }
              func_0x0001078229b8();
              (*extraout_x8_07)();
              func_0x00010726236c(&uStack_1a0);
              func_0x000107330fdc(&ppplStack_900);
              uVar15 = (int)(bStack_168 - 1) < 0;
              if (bStack_168 == 1) {
                func_0x00010724ef84(&ppplStack_cc0,&uStack_1a0);
                ppplVar23 = ppplStack_cf0;
                uVar28 = *puStack_d48;
                pppplVar29 = (long ****)(ppplStack_cf0 + 3);
                func_0x000100102e7c(pppplVar29,&ppplStack_cc0);
                pppplVar30 = (long ****)ppplVar23[1];
                pppplVar27 = pppplVar29;
                if (pppplVar30 != (long ****)0x0) {
                  pplVar38 = (long **)((long)pppplVar30 + -1);
                  if (((ulong)pppplVar30 & (ulong)pplVar38) == 0) {
                    pppplVar31 = (long ****)((ulong)pplVar38 & (ulong)pppplVar29);
                    uVar15 = false;
                  }
                  else {
                    uVar15 = (long)pppplVar29 - (long)pppplVar30 < 0;
                    pppplVar31 = pppplVar29;
                    if (pppplVar30 <= pppplVar29) {
                      uVar35 = 0;
                      if (pppplVar30 != (long ****)0x0) {
                        uVar35 = (ulong)pppplVar29 / (ulong)pppplVar30;
                      }
                      pppplVar31 = (long ****)((long)pppplVar29 - uVar35 * (long)pppplVar30);
                    }
                  }
                  pplVar40 = (long **)(*ppplStack_cf0)[(long)pppplVar31];
                  plVar41 = plStack_d10;
                  if (pplVar40 != (long **)0x0) {
                    do {
                      while( true ) {
                        pplVar40 = (long **)*pplVar40;
                        plVar41 = plStack_d10;
                        if (pplVar40 == (long **)0x0) goto code_r0x000107815f54;
                        pppplVar22 = (long ****)pplVar40[1];
                        uVar15 = (long)pppplVar22 - (long)pppplVar29 < 0;
                        if (pppplVar22 != pppplVar29) break;
                        pppplVar27 = (long ****)(pplVar40 + 2);
                        func_0x0001000e107c(pppplVar27,&ppplStack_cc0);
                        if (((ulong)pppplVar27 & 1) != 0) {
                          func_0x000107822374();
                          plVar41 = plStack_d10;
                          func_0x000107822aa4();
                          pppplVar37 = (long ****)(ulong)uVar28;
                          goto code_r0x000107816210;
                        }
                      }
                      if (((ulong)pppplVar30 & (ulong)pplVar38) == 0) {
                        pppplVar22 = (long ****)((ulong)pppplVar22 & (ulong)pplVar38);
                      }
                      else if (pppplVar30 <= pppplVar22) {
                        uVar35 = 0;
                        if (pppplVar30 != (long ****)0x0) {
                          uVar35 = (ulong)pppplVar22 / (ulong)pppplVar30;
                        }
                        pppplVar22 = (long ****)((long)pppplVar22 - uVar35 * (long)pppplVar30);
                      }
                      uVar15 = (long)pppplVar22 - (long)pppplVar31 < 0;
                    } while (pppplVar22 == pppplVar31);
                  }
                }
code_r0x000107815f54:
                pplVar38 = (long **)&uStack_1a0;
                func_0x000107822558();
                pplVar40 = pplStack_cb0;
                ppplStack_8f8 = ppplStack_d50;
                pplStack_8f0 = (long **)0x1;
                *pppplVar27 = (long ***)0x0;
                pppplVar27[1] = (long ***)pppplVar29;
                pppplVar27[3] = (long ***)pplStack_cb8;
                pppplVar27[2] = ppplStack_cc0;
                ppplStack_cc0 = (long ***)0x0;
                pplStack_cb8 = (long **)0x0;
                pplStack_cb0 = (long **)0x0;
                pppplVar27[4] = (long ***)pplVar40;
                pppplVar27[5] = (long ***)(uStack_d58 | (long)(ulong)uVar28 << 0x20);
                ppplStack_900 = (long ***)pppplVar27;
                func_0x000107822290(ppplStack_cf0[3]);
                if (pppplVar30 == (long ****)0x0) {
code_r0x000107815fac:
                  func_0x00010782245c();
                  bVar14 = (long ****)0x2 < pppplVar30;
                  bVar16 = pppplVar30 == (long ****)0x3;
                  func_0x000107821e0c();
                  pppplVar31 = extraout_x8_22;
                  if (!bVar14 || bVar16) {
                    pppplVar31 = extraout_x9_00;
                  }
                  if ((long)pppplVar31 - 1U == 0) {
                    pppplVar31 = (long ****)0x2;
                  }
                  else if (((ulong)pppplVar31 & (long)pppplVar31 - 1U) != 0) {
                    __ZNSt3__112__next_primeEm();
                  }
                  pppplVar30 = (long ****)ppplStack_cf0[1];
                  uVar15 = pppplVar31 == pppplVar30;
                  if (pppplVar30 < pppplVar31) {
code_r0x000107815ff8:
                    pppplVar30 = pppplVar31;
                    if ((ulong)pppplVar30 >> 0x3d != 0) goto code_r0x00010781632c;
                    lVar32 = (long)pppplVar30 << 3;
                    __Znwm(lVar32);
                    ppplVar23 = ppplStack_cf0;
                    func_0x000107820208(ppplStack_cf0,lVar32);
                    pppplVar31 = (long ****)0x0;
                    ppplVar23[1] = (long **)pppplVar30;
                    pppplVar27 = (long ****)ppplStack_d50;
                    while (bVar16 = pppplVar31 <= pppplVar30, pppplVar30 != pppplVar31) {
                      func_0x000107822324();
                      pppplVar31 = extraout_x9_01;
                      pppplVar27 = extraout_x13;
                    }
                    uVar15 = 1;
                    if (*pppplVar27 != (long ***)0x0) {
                      func_0x000107823078();
                      pppplVar31 = extraout_x11;
                      if (bVar16) {
                        pppplVar31 = (long ****)
                                     ((long)extraout_x11 - extraout_x12 * (long)pppplVar30);
                      }
                      uVar15 = ((ulong)pppplVar30 & extraout_x9_02) == 0;
                      if ((bool)uVar15) {
                        pppplVar31 = (long ****)((ulong)extraout_x11 & extraout_x9_02);
                      }
                      *(undefined8 *)(extraout_x8_23 + (long)pppplVar31 * 8) = extraout_x13_00;
                      lVar32 = extraout_x8_23;
                      uVar35 = extraout_x9_02;
                      plVar26 = extraout_x10;
                      while (plVar24 = plVar26, plVar26 = (long *)*plVar24, plVar26 != (long *)0x0)
                      {
                        pppplVar27 = (long ****)plVar26[1];
                        if (((ulong)pppplVar30 & uVar35) == 0) {
                          pppplVar27 = (long ****)((ulong)pppplVar27 & uVar35);
                        }
                        else if (pppplVar30 <= pppplVar27) {
                          uVar25 = 0;
                          if (pppplVar30 != (long ****)0x0) {
                            uVar25 = (ulong)pppplVar27 / (ulong)pppplVar30;
                          }
                          pppplVar27 = (long ****)((long)pppplVar27 - uVar25 * (long)pppplVar30);
                        }
                        uVar15 = pppplVar27 == pppplVar31;
                        if (!(bool)uVar15) {
                          if (*(long *)(lVar32 + (long)pppplVar27 * 8) == 0) {
                            *(long **)(lVar32 + (long)pppplVar27 * 8) = plVar24;
                            pppplVar31 = pppplVar27;
                          }
                          else {
                            *plVar24 = *plVar26;
                            func_0x000107821df4();
                            lVar32 = extraout_x8_24;
                            uVar35 = extraout_x9_03;
                            plVar26 = extraout_x10_00;
                            pppplVar31 = extraout_x11_00;
                          }
                        }
                      }
                    }
                  }
                  else if (pppplVar31 < pppplVar30) {
                    pppplVar27 = (long ****)
                                 (long)((float)ppplStack_cf0[3] / *(float *)(ppplStack_cf0 + 4));
                    if ((pppplVar30 < (long ****)0x3) ||
                       (((ulong)pppplVar30 & (long)pppplVar30 - 1U) != 0)) {
                      __ZNSt3__112__next_primeEm();
                    }
                    else {
                      func_0x000107821d54();
                    }
                    ppplVar23 = ppplStack_cf0;
                    if (pppplVar31 <= pppplVar27) {
                      pppplVar31 = pppplVar27;
                    }
                    uVar15 = pppplVar31 == pppplVar30;
                    if (pppplVar31 < pppplVar30) {
                      if (pppplVar31 != (long ****)0x0) goto code_r0x000107815ff8;
                      func_0x000107820208(ppplStack_cf0,0);
                      pppplVar30 = (long ****)0x0;
                      ppplVar23[1] = (long **)0x0;
                    }
                    else {
                      pppplVar30 = (long ****)ppplStack_cf0[1];
                    }
                  }
                  func_0x0001078225d8();
                  if ((bool)uVar15) {
                    pppplVar31 = (long ****)(extraout_x8_25 & (ulong)pppplVar29);
                  }
                  else {
                    pppplVar31 = pppplVar29;
                    if (pppplVar30 <= pppplVar29) {
                      uVar35 = 0;
                      if (pppplVar30 != (long ****)0x0) {
                        uVar35 = (ulong)pppplVar29 / (ulong)pppplVar30;
                      }
                      pppplVar31 = (long ****)((long)pppplVar29 - uVar35 * (long)pppplVar30);
                    }
                  }
                }
                else {
                  param_2 = (float)pppplVar30;
                  func_0x000107822234(CONCAT17(in_register_00005007,
                                               CONCAT16(in_register_00005006,
                                                        CONCAT15(in_register_00005005,
                                                                 CONCAT14(in_register_00005004,
                                                                          CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                              ),*(undefined4 *)(extraout_x9 + 0x20));
                  if ((bool)uVar15) goto code_r0x000107815fac;
                }
                ppplVar23 = (long ***)*ppplStack_cf0;
                pplVar40 = ppplVar23[(long)pppplVar31];
                if (pplVar40 == (long **)0x0) {
                  *ppplStack_900 = *ppplStack_d50;
                  *ppplStack_d50 = (long **)ppplStack_900;
                  ppplVar23[(long)pppplVar31] = (long **)ppplStack_d50;
                  if ((long ***)*ppplStack_900 != (long ***)0x0) {
                    pppplVar29 = (long ****)(*ppplStack_900)[1];
                    if (((ulong)pppplVar30 & (long)pppplVar30 - 1U) == 0) {
                      pppplVar29 = (long ****)((ulong)pppplVar29 & (long)pppplVar30 - 1U);
                    }
                    else if (pppplVar30 <= pppplVar29) {
                      func_0x000107822b90();
                      ppplStack_900 = (long ***)extraout_x8_26;
                      ppplVar23 = extraout_x9_04;
                      pppplVar29 = extraout_x10_01;
                    }
                    ppplVar23[(long)pppplVar29] = (long **)ppplStack_900;
                  }
                }
                else {
                  *ppplStack_900 = (long **)*pplVar40;
                  *pplVar40 = (long *)ppplStack_900;
                }
                ppplStack_900 = (long ***)0x0;
                ppplStack_cf0[3] = (long **)((long)ppplStack_cf0[3] + 1);
                func_0x0001074d2d14(&ppplStack_900);
                func_0x000107822374();
                *puStack_d48 = *puStack_d48 + 1;
                pppplVar30 = (long ****)(ulong)uStack_ce4;
              }
code_r0x000107816210:
              *puStack_d40 = *puStack_d40 + 1;
              pppplVar29 = (long ****)&uStack_1a0;
              goto code_r0x000107815dc8;
            }
            func_0x00010782229c();
            ppplStack_900 = (long ***)param_4;
            ppplStack_8f8 = (long ***)extraout_x8_09;
            if (extraout_x8_09 != (long ****)0x0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_02 != 0);
            }
            func_0x0001078229b8();
            (*extraout_x8_10)();
            func_0x000107822df8();
            func_0x00010782229c();
            ppplStack_cc0 = (long ***)param_4;
            pplStack_cb8 = (long **)extraout_x8_11;
            if (extraout_x8_11 != (long ***)0x0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_03 != 0);
            }
            func_0x0001074d4d04(auStack_160);
            uStack_128 = 0;
            func_0x000104c2fe00(auStack_120,plVar41 + 4);
            func_0x000104c2fe00(auStack_e8,plVar41 + 0xb);
            uStack_b0 = 7;
            uStack_a8 = 0;
            uStack_a0 = 0;
            func_0x000107269c1c(&uStack_a8);
            auStack_98[0] = 0;
            uStack_88 = 0;
            func_0x000107822410();
            func_0x000107822950();
            func_0x000107822ce0();
            pppplVar29 = &ppplStack_900;
            func_0x000107330fdc();
            param_4 = pppplVar21;
          }
code_r0x000107815618:
          pplVar38 = (long **)&uStack_1a0;
          pppplVar30 = (long ****)(ulong)uStack_ce4;
          pppplVar37 = (long ****)ppplStack_ce0;
        }
      }
      else {
        func_0x00010782229c();
        uStack_1a0 = pppplVar29;
        uStack_198 = extraout_x8_00;
        if (extraout_x8_00 != (long ****)0x0) {
          do {
            func_0x000107821f0c();
          } while (extraout_w10 != 0);
        }
        func_0x0001078229b8();
        (*extraout_x8_01)();
        func_0x00010726236c(&ppplStack_900);
        func_0x000107330fdc(&uStack_1a0);
        if (cStack_8c8 == '\x01') {
          func_0x00010724ef84(&ppplStack_cc0,&ppplStack_900);
        }
        else {
          func_0x00010002b838(&ppplStack_cc0,"");
        }
        ppplVar42 = ppplStack_cf0;
        ppplVar23 = (long ***)pplStack_cb8;
        if (-1 < (long)pplStack_cb0) {
          ppplVar23 = (long ***)((ulong)pplStack_cb0 >> 0x38);
        }
        if (ppplVar23 == (long ***)0x0) {
          func_0x000107822bb4();
          uVar28 = uStack_d00;
          uVar35 = extraout_x8_08;
        }
        else {
          pppplVar30 = (long ****)ppplStack_cf0[1];
          if ((pppplVar30 != (long ****)0x0) && ((long ***)ppplStack_cf0[3] != (long ***)0x0)) {
            pppplVar29 = (long ****)(ppplStack_cf0 + 3);
            func_0x000100102e7c(pppplVar29,&ppplStack_cc0);
            pppplVar31 = (long ****)((long)pppplVar30 + -1);
            if (((ulong)pppplVar30 & (ulong)pppplVar31) == 0) {
              pppplVar37 = (long ****)((ulong)pppplVar29 & (ulong)pppplVar31);
            }
            else {
              pppplVar37 = pppplVar29;
              if (pppplVar30 <= pppplVar29) {
                uVar35 = 0;
                if (pppplVar30 != (long ****)0x0) {
                  uVar35 = (ulong)pppplVar29 / (ulong)pppplVar30;
                }
                pppplVar37 = (long ****)((long)pppplVar29 - uVar35 * (long)pppplVar30);
              }
            }
            pplVar38 = (long **)0x0;
            pplVar40 = (long **)(*ppplVar42)[(long)pppplVar37];
            if ((long **)(*ppplVar42)[(long)pppplVar37] != (long **)0x0) {
              do {
                while( true ) {
                  pplVar38 = (long **)*pplVar40;
                  if (pplVar38 == (long **)0x0) goto code_r0x000107815cac;
                  pppplVar21 = (long ****)pplVar38[1];
                  pplVar40 = pplVar38;
                  if (pppplVar29 != pppplVar21) break;
                  pplVar19 = pplVar38 + 2;
                  func_0x0001000e107c(pplVar19,&ppplStack_cc0);
                  if (((ulong)pplVar19 & 1) != 0) {
                    func_0x000107822bb4();
                    func_0x000107822aa4();
                    if ((extraout_x8_17 & 1) == 0) goto code_r0x000107815dc0;
                    uVar28 = 1;
                    goto code_r0x000107815cbc;
                  }
                }
                if (((ulong)pppplVar30 & (ulong)pppplVar31) == 0) {
                  pppplVar21 = (long ****)((ulong)pppplVar21 & (ulong)pppplVar31);
                }
                else if (pppplVar30 <= pppplVar21) {
                  uVar35 = 0;
                  if (pppplVar30 != (long ****)0x0) {
                    uVar35 = (ulong)pppplVar21 / (ulong)pppplVar30;
                  }
                  pppplVar21 = (long ****)((long)pppplVar21 - uVar35 * (long)pppplVar30);
                }
              } while (pppplVar21 == pppplVar37);
            }
          }
code_r0x000107815cac:
          func_0x000107822bb4();
          uVar28 = uStack_d00;
          func_0x000107822aa4();
          uVar35 = extraout_x8_12;
        }
        if ((uVar35 & 1) == 0) {
code_r0x000107815cbc:
          ppplStack_910 = (long ***)(double)(float)*(undefined8 *)(lVar32 + 0x10);
          dStack_908 = (double)(float)((ulong)*(undefined8 *)(lVar32 + 0x10) >> 0x20);
          pppplVar29 = (long ****)&uStack_1a0;
          func_0x000107822d68(pppplVar29,&ppplStack_910);
          dVar7 = (double)CONCAT44(uStack_184,fStack_188);
          if (((dVar7 <= 0.0) || (1.0 < ABS((float)((double)uStack_1a0 / dVar7)))) ||
             (uVar15 = ABS((float)((double)uStack_198 / dVar7)) == 1.0,
             1.0 < ABS((float)((double)uStack_198 / dVar7)))) {
            func_0x00010782229c();
            ppplStack_910 = (long ***)pppplVar29;
            dStack_908 = extraout_x8_13;
            if (extraout_x8_13 != 0.0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_04 != 0);
            }
            func_0x0001078229b8();
            (*extraout_x8_14)();
            func_0x000107822df8();
            func_0x00010782229c();
            appplStack_920[0] = (long ***)pppplVar29;
            if (extraout_x8_15 != 0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_05 != 0);
            }
            func_0x000107822ec0();
            func_0x0001078229d4();
            func_0x000107822ea0();
            uStack_b0 = 8;
            func_0x00010782229c();
            appplStack_cd0[0] = (long ***)pppplVar29;
            if (extraout_x8_16 != 0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_06 != 0);
            }
            (*(code *)(*pppplVar29)[4])();
            func_0x000107268400(pplVar38 + 0x1f,pppplVar29);
            func_0x00010782285c();
            func_0x000107822410();
          }
          else {
            if (((uVar28 & 1) != 0) ||
               (uVar15 = *puStack_d40 == uStack_d60, *puStack_d40 < uStack_d60)) {
              ppplStack_ce0 = (long ***)pppplVar37;
              func_0x000107822374();
              func_0x00010724b3d8(&ppplStack_900);
              uStack_ce8 = (uint)*(byte *)(lVar32 + 0x655);
              goto code_r0x000107815604;
            }
            func_0x00010782229c();
            ppplStack_910 = (long ***)pppplVar29;
            dStack_908 = extraout_x8_18;
            if (extraout_x8_18 != 0.0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_07 != 0);
            }
            func_0x0001078229b8();
            (*extraout_x8_19)();
            func_0x000107822df8();
            func_0x00010782229c();
            appplStack_920[0] = (long ***)pppplVar29;
            if (extraout_x8_20 != 0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_08 != 0);
            }
            func_0x000107822ec0();
            func_0x0001078229d4();
            func_0x000107822ea0();
            uStack_b0 = 9;
            func_0x00010782229c();
            appplStack_cd0[0] = (long ***)pppplVar29;
            if (extraout_x8_21 != 0) {
              do {
                func_0x000107821f0c();
              } while (extraout_w10_09 != 0);
            }
            (*(code *)(*pppplVar29)[4])();
            func_0x000107268400(pplVar38 + 0x1f,pppplVar29);
            func_0x00010782285c();
            func_0x000107822410();
          }
          func_0x000107822950();
          func_0x000107330fdc(appplStack_cd0);
          func_0x000107330fdc(appplStack_920);
          func_0x000107330fdc(&ppplStack_910);
        }
code_r0x000107815dc0:
        func_0x000107822374();
        pppplVar29 = &ppplStack_900;
        pppplVar21 = param_4;
code_r0x000107815dc8:
        func_0x00010724b3d8();
        param_4 = pppplVar21;
      }
code_r0x000107815dcc:
    }
    func_0x000107822bb4();
    if ((extraout_x8_27 & 1) == 0) {
      *(ushort *)(lStack_d28 + 0x74) = *(ushort *)(lStack_d28 + 0x74) & 0xff7f;
    }
    ppplStack_900 = (long ***)(lStack_d28 + 0xa5c);
    uStack_190 = *(long *)(lStack_888 + 0x218) + 0xc;
    uStack_198 = (long ****)(plVar41 + 2);
    uStack_1a0 = (long ****)ppplStack_900;
    func_0x0001074a113c(param_4 + 0x24c,&UNK_10dd5b8f9,&ppplStack_900,&uStack_1a0);
    *puStack_d38 = 1;
    *(undefined8 *)(puStack_d38 + 4) = uStack_958;
    *(undefined8 *)(puStack_d38 + 2) = uStack_960;
    *(undefined8 *)(puStack_d38 + 6) = uStack_950;
    uStack_960 = 0;
    uStack_958 = 0;
    uStack_950 = 0;
    *(undefined1 *)(puStack_d38 + 8) = 0;
    *(long *)(puStack_d38 + 0xc) = lStack_938;
    *(undefined8 *)(puStack_d38 + 10) = uStack_940;
    *(undefined8 *)(puStack_d38 + 0xe) = uStack_930;
    uStack_940 = 0;
    lStack_938 = 0;
    uStack_930 = 0;
    *(undefined1 *)(puStack_d38 + 0x10) = 0;
    *(undefined8 *)(puStack_d38 + 0x14) = 0;
    *(undefined8 *)(puStack_d38 + 0x12) = 0;
    *(undefined8 *)(puStack_d38 + 0x18) = 0;
    *(undefined8 *)(puStack_d38 + 0x16) = 0;
    *(undefined8 *)(puStack_d38 + 0x1c) = 0;
    *(undefined8 *)(puStack_d38 + 0x1a) = 0;
    *(undefined8 *)(puStack_d38 + 0x20) = 0;
    *(undefined8 *)(puStack_d38 + 0x1e) = 0;
    puStack_d38[0x22] = 0x3f800000;
    puStack_d38[0x24] = 0;
    func_0x00010745c408(&plStack_ca0);
    func_0x0001077f79bc(auStack_208);
    func_0x0001074ae918(&uStack_960);
    func_0x00010748ab6c(&uStack_940);
    func_0x000107821dac(uStack_80);
    if (!(bool)uVar15) {
      ___stack_chk_fail();
code_r0x00010781632c:
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x107816334);
      (*pcVar13)();
    }
  }
  else {
    plVar41 = (long *)*param_5;
    lVar32 = *plVar41;
    uStack_80 = extraout_x8_29;
    if ((*(char *)(*(long *)(lVar32 + 0x28) + 0x298) == '\0') &&
       (in_ZR = 1, *(char *)(*(long *)(lVar32 + 0x28) + 0x218) != '\x01')) {
      lVar34 = plVar41[1];
      func_0x00010740b5f8(auStack_af0,lVar34 + 0x10,param_4 + 8,lVar34);
      lVar34 = plVar41[1];
      pppplVar29 = param_4 + 0x22f;
      func_0x0001078139a8(pppplVar29,plVar41 + 4);
      func_0x00010781c4b0(auStack_7a0,pppplVar29);
      func_0x00010782289c(auStack_1848);
      (*extraout_x9_05)();
      func_0x00010781c4d8(alStack_770,lVar32,lVar34,param_4 + 8,auStack_7a0,auStack_1848);
      func_0x0001077f79bc(auStack_798);
      lVar34 = *(long *)(alStack_770[0] + 0x28);
      func_0x0001078175f0(&plStack_b08,lVar32,plVar41 + 0x12);
      plVar41 = *(long **)(lVar34 + 0x778);
      bVar16 = *plVar41 != plVar41[1];
      func_0x000107822504();
      func_0x000107359e6c();
      func_0x0001078230ac();
      func_0x00010781b11c(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                          0x4600000046000000,auStack_1848,param_4 + 8);
      func_0x000107822504();
      func_0x000107359e6c();
      func_0x0001078230ac(auStack_1848);
      func_0x00010781b11c(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),
                          0xc6000000c6000000,extraout_x8_30 + 0x350,param_4 + 8);
      func_0x000107822504();
      func_0x000107359e6c();
      func_0x0001078230ac(auStack_1848);
      func_0x00010781b11c(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),0,
                          extraout_x8_31 + 0x6a0,param_4 + 8);
      func_0x000107822504();
      func_0x000107359e6c();
      func_0x0001078230ac();
      ppplVar23 = (long ***)aplStack_e58;
      func_0x00010781b11c(CONCAT17(in_register_00005007,
                                   CONCAT16(in_register_00005006,
                                            CONCAT15(in_register_00005005,
                                                     CONCAT14(in_register_00005004,
                                                              CONCAT13(in_register_00005003,
                                                                       CONCAT12(in_register_00005002
                                                                                ,CONCAT11(
                                                  in_register_00005001,in_b0))))))),0,ppplVar23,
                          param_4 + 8);
      pppplVar29 = param_4 + 0x286;
      for (plVar41 = plStack_b08; in_ZR = plVar41 == plStack_b00, !(bool)in_ZR;
          plVar41 = plVar41 + 1) {
        lVar32 = *plVar41;
        if (*(long *)(lVar32 + 0x60) == *(long *)(lVar32 + 0x68)) {
          uVar35 = 0;
        }
        else {
          if (bVar16) {
            func_0x00010782283c(CONCAT17(in_register_00005007,
                                         CONCAT16(in_register_00005006,
                                                  CONCAT15(in_register_00005005,
                                                           CONCAT14(in_register_00005004,
                                                                    CONCAT13(in_register_00005003,
                                                                             CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),0);
            func_0x000107822990();
          }
          func_0x000107822dcc();
          uVar35 = (ulong)ppplVar23 & 0xff;
        }
        if (*(long *)(lVar32 + 0x1a0) != *(long *)(lVar32 + 0x1a8)) {
          if ((uStack_a0._6_1_ & bVar16) != 0 && (uStack_a0 & 0x100) == 0) {
            func_0x00010782283c(CONCAT17(in_register_00005007,
                                         CONCAT16(in_register_00005006,
                                                  CONCAT15(in_register_00005005,
                                                           CONCAT14(in_register_00005004,
                                                                    CONCAT13(in_register_00005003,
                                                                             CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))),0);
            func_0x000107822990();
          }
          func_0x000107822dcc();
          uVar35 = uVar35 | (ulong)ppplVar23 & 0xff;
        }
        if (uVar35 != 0) {
          ppplVar42 = param_4[0x285];
          if (ppplVar42 < param_4[0x286]) {
            func_0x000107822254();
            ppplVar42 = ppplVar42 + 0xe1;
            param_4[0x285] = ppplVar42;
          }
          else {
            lVar32 = (long)ppplVar42 - (long)param_4[0x284];
            uVar35 = lVar32 / 0x708 + 1;
            if (0x2468acf13579be < uVar35) goto LAB_10781b098;
            uVar4 = ((long)param_4[0x286] - (long)param_4[0x284]) / 0x708;
            uVar25 = uVar4 * 2;
            if (uVar25 < uVar35 || uVar25 - uVar35 == 0) {
              uVar25 = uVar35;
            }
            if (0x123456789abcde < uVar4) {
              uVar25 = 0x2468acf13579be;
            }
            ppplStack_7a8 = (long ***)pppplVar29;
            if (uVar25 == 0) {
              lVar34 = 0;
            }
            else {
              if (0x2468acf13579be < uVar25) {
                func_0x000104bd35f4();
                goto LAB_10781b0a4;
              }
              lVar34 = uVar25 * 0x708;
              __Znwm();
            }
            lVar32 = lVar34 + lVar32;
            ppplVar33 = (long ***)(lVar34 + uVar25 * 0x708);
            pplStack_7c8 = (long **)lVar34;
            pplStack_7c0 = (long **)lVar32;
            pplStack_7b8 = (long **)lVar32;
            pplStack_7b0 = (long **)ppplVar33;
            func_0x000107822254();
            ppplVar36 = param_4[0x285];
            ppplVar39 = param_4[0x284];
            ppplVar43 = (long ***)(lVar32 + (((long)ppplVar36 - (long)ppplVar39) / -0x708) * 0x708);
            ppplVar23 = ppplVar43;
            for (ppplVar42 = ppplVar39; ppplVar42 != ppplVar36; ppplVar42 = ppplVar42 + 0xe1) {
              func_0x00010781f1f0(ppplVar23,ppplVar42);
              ppplVar23 = ppplVar23 + 0xe1;
            }
            for (; ppplVar39 != ppplVar36; ppplVar39 = ppplVar39 + 0xe1) {
              ppplVar23 = ppplVar39 + 0xd2;
              func_0x0001077f79bc();
            }
            ppplVar42 = (long ***)(lVar32 + 0x708);
            pplStack_7c8 = (long **)param_4[0x284];
            param_4[0x284] = ppplVar43;
            param_4[0x285] = ppplVar42;
            pplStack_7b0 = (long **)param_4[0x286];
            param_4[0x286] = ppplVar33;
            pplStack_7c0 = pplStack_7c8;
            pplStack_7b8 = pplStack_7c8;
            func_0x000107822f8c();
          }
          param_4[0x285] = ppplVar42;
        }
      }
      param_4[0x288] = (long ***)((long)param_4[0x288] + 1);
      func_0x0001078221f4();
      func_0x00010745c408(&plStack_b08);
      func_0x0001077f79bc(auStack_e8);
    }
    else {
      func_0x0001078221f4();
    }
    func_0x000107821dac(uStack_80);
    if (!(bool)in_ZR) {
LAB_10781b094:
      ___stack_chk_fail();
LAB_10781b098:
      func_0x00010781f538();
LAB_10781b0a4:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10781b0a8);
      (*pcVar13)();
    }
  }
  return;
}



/* Entry: 10781b6b8; end: 10781b6eb;  */

void FUN_10781b6b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *extraout_x8;
  int extraout_w11;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107822390();
      param_1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107822064();
  return;
}



/* Entry: 10781ba98; end: 10781bab7;  */

void FUN_10781ba98(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1448) = param_2;
  return;
}



/* Entry: 10781bc04; end: 10781bc07;  */

void FUN_10781bc04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e01d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10781bd20; end: 10781bd33;  */

void FUN_10781bd20(void)

{
  func_0x00010781bd48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781be00; end: 10781bf1b;  */

void FUN_10781be00(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001078230cc();
  while (func_0x00010782300c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x10;
    func_0x00010781f6d4();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781c17c; end: 10781c353;  */

void FUN_10781c17c(long param_1)

{
  long unaff_x20;
  
  func_0x000107822680();
  while (param_1 != 0) {
    func_0x0001078224e0();
    param_1 = unaff_x20;
  }
  func_0x000107822330();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781ca54; end: 10781cb57;  */

/* WARNING: Possible PIC construction at 0x00010781ca9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781cb44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781caa0) */
/* WARNING: Removing unreachable block (ram,0x00010781caa4) */
/* WARNING: Removing unreachable block (ram,0x00010781cab4) */
/* WARNING: Removing unreachable block (ram,0x00010781cabc) */
/* WARNING: Removing unreachable block (ram,0x00010781cac4) */
/* WARNING: Removing unreachable block (ram,0x00010781cacc) */
/* WARNING: Removing unreachable block (ram,0x00010781cad4) */
/* WARNING: Removing unreachable block (ram,0x00010781caec) */
/* WARNING: Removing unreachable block (ram,0x00010781cadc) */
/* WARNING: Removing unreachable block (ram,0x00010781cae4) */
/* WARNING: Removing unreachable block (ram,0x00010781caf0) */
/* WARNING: Removing unreachable block (ram,0x00010781caf8) */
/* WARNING: Removing unreachable block (ram,0x00010781cb08) */
/* WARNING: Removing unreachable block (ram,0x00010781cb0c) */
/* WARNING: Removing unreachable block (ram,0x00010781cb00) */
/* WARNING: Removing unreachable block (ram,0x00010781caac) */
/* WARNING: Removing unreachable block (ram,0x00010781cb48) */

void FUN_10781ca54(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781cb58;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781cb58:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781cdf0; end: 10781ce1b;  */

void FUN_10781cdf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001078228c4();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_1109e0390;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10781cfbc; end: 10781cffb;  */

undefined8 FUN_10781cfbc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  func_0x00010781d094();
  return uVar1;
}



/* Entry: 10781d7bc; end: 10781d853;  */

void FUN_10781d7bc(float param_1,float param_2,undefined8 param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float in_s5;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float fStack_68;
  float fStack_64;
  
  func_0x000107822bf0();
  func_0x0001078253e8();
  fVar2 = param_2 + -0.5;
  fVar1 = fVar2 * unaff_s12;
  func_0x000107822e54(param_3);
  fStack_68 = -((param_1 + -0.5) * unaff_s13) + unaff_s9 * fVar2;
  fStack_64 = -fVar1 + unaff_s9 * param_2;
  if (param_4 != 0) {
    if (param_5 == 0) {
      in_s5 = -in_s5;
    }
    func_0x000107501ee0(in_s5,&fStack_68);
  }
  return;
}



/* Entry: 10781daf0; end: 10781db83;  */

/* WARNING: Possible PIC construction at 0x00010781db60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781db64) */

void FUN_10781daf0(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  
  func_0x0001078221e8();
  func_0x000107821e20();
  func_0x000100061de0();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = *(char *)(lVar2 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((!bVar1) || (func_0x000107822514(), !bVar1)) {
      func_0x000107822ad4();
      goto code_r0x00010781db84;
    }
    func_0x0001078223f0();
    func_0x0001078224d4();
    lVar2 = *unaff_x19;
  }
  func_0x000107821e80(lVar2);
  func_0x000107821dac(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010781db84:
  func_0x0001078230e4();
  func_0x00010726d624();
  for (lVar2 = 0; unaff_x23 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar2)) {
      func_0x000107822f40();
      func_0x0001078229c4();
      func_0x0001078222a8();
      func_0x00010781dbf4();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10781dd8c; end: 10781ddaf;  */

void FUN_10781dd8c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10781e16c; end: 10781e193;  */

void FUN_10781e16c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000df370(&uStack_18,8);
  return;
}



/* Entry: 10781e4d8; end: 10781e517;  */

void FUN_10781e4d8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x0001078230cc();
  while (func_0x00010782300c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x10;
    func_0x0001072792b8();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781ed20; end: 10781ee0b;  */

/* WARNING: Possible PIC construction at 0x00010781ede0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781eda4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781eda8) */
/* WARNING: Removing unreachable block (ram,0x00010781edb4) */
/* WARNING: Removing unreachable block (ram,0x00010781effc) */
/* WARNING: Removing unreachable block (ram,0x00010781f01c) */
/* WARNING: Removing unreachable block (ram,0x00010781f000) */
/* WARNING: Removing unreachable block (ram,0x00010781f014) */
/* WARNING: Removing unreachable block (ram,0x00010781f020) */
/* WARNING: Removing unreachable block (ram,0x00010781f084) */
/* WARNING: Removing unreachable block (ram,0x00010781eed8) */
/* WARNING: Removing unreachable block (ram,0x00010781ef08) */
/* WARNING: Removing unreachable block (ram,0x00010781ef38) */
/* WARNING: Removing unreachable block (ram,0x00010781efa8) */
/* WARNING: Removing unreachable block (ram,0x00010781efd0) */
/* WARNING: Removing unreachable block (ram,0x00010781efd8) */
/* WARNING: Removing unreachable block (ram,0x00010781f038) */
/* WARNING: Removing unreachable block (ram,0x00010781efe8) */
/* WARNING: Removing unreachable block (ram,0x00010781eff0) */
/* WARNING: Removing unreachable block (ram,0x00010781ef44) */
/* WARNING: Removing unreachable block (ram,0x00010781ef88) */
/* WARNING: Removing unreachable block (ram,0x00010781f048) */
/* WARNING: Removing unreachable block (ram,0x00010781ef74) */
/* WARNING: Removing unreachable block (ram,0x00010781ef60) */
/* WARNING: Removing unreachable block (ram,0x00010781ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010781f05c) */
/* WARNING: Removing unreachable block (ram,0x00010781f060) */
/* WARNING: Removing unreachable block (ram,0x00010781f094) */
/* WARNING: Removing unreachable block (ram,0x00010781f06c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeec) */
/* WARNING: Removing unreachable block (ram,0x00010781ede4) */
/* WARNING: Removing unreachable block (ram,0x00010781ee08) */
/* WARNING: Removing unreachable block (ram,0x00010781ee38) */
/* WARNING: Removing unreachable block (ram,0x00010781ee4c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee6c) */
/* WARNING: Removing unreachable block (ram,0x00010781ee64) */
/* WARNING: Removing unreachable block (ram,0x00010781ee58) */
/* WARNING: Removing unreachable block (ram,0x00010781ee60) */
/* WARNING: Removing unreachable block (ram,0x00010781ee74) */
/* WARNING: Removing unreachable block (ram,0x00010781ee7c) */
/* WARNING: Removing unreachable block (ram,0x00010781eeb0) */
/* WARNING: Removing unreachable block (ram,0x00010781eec4) */
/* WARNING: Removing unreachable block (ram,0x00010781eebc) */
/* WARNING: Removing unreachable block (ram,0x00010781ee84) */
/* WARNING: Removing unreachable block (ram,0x00010781ee88) */
/* WARNING: Removing unreachable block (ram,0x00010781ee98) */
/* WARNING: Removing unreachable block (ram,0x00010781eeac) */
/* WARNING: Removing unreachable block (ram,0x00010781edf8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0c8) */
/* WARNING: Removing unreachable block (ram,0x00010781f0ec) */
/* WARNING: Removing unreachable block (ram,0x00010781f0e0) */
/* WARNING: Removing unreachable block (ram,0x000107821e30) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * FUN_10781ed20(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *puVar6;
  undefined8 *unaff_x21;
  undefined8 *puVar7;
  undefined8 unaff_x22;
  undefined8 ***pppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_e80 [226];
  undefined8 **ppuStack_750;
  undefined8 uStack_748;
  undefined8 auStack_740 [226];
  
  puVar2 = auStack_740;
  puVar3 = auStack_740;
  func_0x000107822830();
  func_0x000107821e20();
  func_0x00010781f1f0(auStack_740);
  puVar4 = unaff_x21 + -0xe1;
  func_0x00010781e77c();
  puVar6 = unaff_x19;
  if (((ulong)puVar3 & 1) == 0) {
    do {
      puVar6 = puVar6 + 0xe1;
      if (unaff_x21 <= puVar6) break;
      func_0x0001078224a4();
    } while ((int)puVar3 == 0);
  }
  else {
    do {
      puVar6 = puVar6 + 0xe1;
      func_0x0001078224a4();
    } while (((ulong)puVar3 & 1) == 0);
  }
  if (puVar6 < unaff_x21) {
    do {
      func_0x000107822140();
    } while (((ulong)puVar3 & 1) != 0);
  }
  if (puVar6 < unaff_x21) {
    func_0x00010782289c();
    uStack_748 = 0x10781eda8;
    pppuVar8 = &ppuStack_750;
    puVar2 = auStack_e80;
    puVar7 = auStack_e80;
    ppuStack_750 = (undefined8 **)&stack0xfffffffffffffff0;
    func_0x0001078220d8();
    func_0x000107821e20();
    func_0x0001078220fc();
    func_0x00010782265c();
    puVar9 = &UNK_10781f0c8;
  }
  else {
    puVar7 = puVar6 + -0xe1;
    if (unaff_x19 != puVar7) {
      func_0x000107822910();
      puVar3 = unaff_x19;
    }
    func_0x000107822c2c();
    puVar9 = (undefined *)0x10781ede4;
    unaff_x19 = auStack_740;
    pppuVar8 = (undefined8 ***)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)((long)puVar2 + -0x30) = unaff_x22;
  *(undefined8 **)((long)puVar2 + -0x28) = puVar7;
  *(undefined8 **)((long)puVar2 + -0x20) = puVar6;
  *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)puVar2 + -0x10) = pppuVar8;
  *(undefined **)((long)puVar2 + -8) = puVar9;
  func_0x0001078221e8();
  *puVar3 = *puVar4;
  func_0x000107822eb8(puVar3 + 1,puVar4 + 1);
  *(undefined2 *)(unaff_x19 + 0xd1) = *(undefined2 *)(puVar6 + 0xd1);
  puVar3 = unaff_x19 + 0xd2;
  cVar1 = *(char *)(unaff_x19 + 0xd6);
  if (cVar1 != *(char *)(puVar6 + 0xd6)) {
    if (cVar1 == '\0') {
      func_0x00010781bb90(puVar3,puVar6 + 0xd2);
    }
    else {
      func_0x0001077f828c();
      *(undefined1 *)(unaff_x19 + 0xd6) = 0;
    }
    goto code_r0x00010781f1b0;
  }
  if (cVar1 == '\0') goto code_r0x00010781f1b0;
  puVar4 = (undefined8 *)unaff_x19[0xd5];
  unaff_x19[0xd5] = 0;
  if (puVar4 == puVar3) {
    uVar5 = 0x20;
code_r0x00010781f174:
    func_0x000107822498(uVar5);
  }
  else if (puVar4 != (undefined8 *)0x0) {
    uVar5 = 0x28;
    goto code_r0x00010781f174;
  }
  puVar4 = (undefined8 *)puVar6[0xd5];
  if (puVar4 == (undefined8 *)0x0) {
    unaff_x19[0xd5] = 0;
  }
  else if (puVar4 == puVar6 + 0xd2) {
    unaff_x19[0xd5] = puVar3;
    func_0x000107822650(puVar6[0xd5]);
    (*extraout_x8)();
  }
  else {
    unaff_x19[0xd5] = puVar4;
    puVar6[0xd5] = 0;
  }
code_r0x00010781f1b0:
  uVar10 = puVar6[0xd8];
  uVar5 = puVar6[0xd7];
  uVar12 = puVar6[0xda];
  uVar11 = puVar6[0xd9];
  uVar14 = puVar6[0xdc];
  uVar13 = puVar6[0xdb];
  uVar15 = *(undefined8 *)((long)puVar6 + 0x6e1);
  *(undefined8 *)((long)unaff_x19 + 0x6e9) = *(undefined8 *)((long)puVar6 + 0x6e9);
  *(undefined8 *)((long)unaff_x19 + 0x6e1) = uVar15;
  unaff_x19[0xda] = uVar12;
  unaff_x19[0xd9] = uVar11;
  unaff_x19[0xdc] = uVar14;
  unaff_x19[0xdb] = uVar13;
  unaff_x19[0xd8] = uVar10;
  unaff_x19[0xd7] = uVar5;
  uVar5 = puVar6[0xdf];
  unaff_x19[0xe0] = puVar6[0xe0];
  unaff_x19[0xdf] = uVar5;
  return unaff_x19;
}



/* Entry: 10781f458; end: 10781f537;  */

void FUN_10781f458(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,long *param_5)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_748 [1664];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_67;
  undefined8 uStack_58;
  
  lVar1 = param_3;
  func_0x000107822830();
  func_0x000107821e20();
  uStack_58 = extraout_x8;
  func_0x000107822eb8(auStack_748,lVar1);
  func_0x00010781c4b0(auStack_c8,param_3 + 0x680);
  uStack_67 = *(undefined8 *)(param_3 + 0x6e1);
  uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x6d9) >> 0x38);
  uStack_90 = *(undefined8 *)(param_3 + 0x6b8);
  uStack_98 = *(undefined8 *)(param_3 + 0x6b0);
  uStack_80 = *(undefined8 *)(param_3 + 0x6c8);
  uStack_88 = *(undefined8 *)(param_3 + 0x6c0);
  uStack_78 = *(undefined8 *)(param_3 + 0x6d0);
  uStack_70 = (undefined1)*(undefined8 *)(param_3 + 0x6d8);
  uStack_6f = (undefined7)((ulong)*(undefined8 *)(param_3 + 0x6d8) >> 8);
  lVar2 = *param_4;
  lVar1 = *param_5;
  *unaff_x19 = unaff_x21;
  func_0x00010781f228(unaff_x19 + 1,auStack_748);
  unaff_x19[0xdf] = lVar2;
  unaff_x19[0xe0] = lVar1;
  func_0x0001077f79bc(auStack_c0);
  func_0x000107821dac(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107822090();
  func_0x0001078230cc();
  while (func_0x00010782300c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8_00 + -0x708;
    func_0x0001077f79bc(extraout_x8_00 + -0x78);
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10781f848; end: 10781f84b;  */

void FUN_10781f848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e04f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10781fa30; end: 10781fb33;  */

/* WARNING: Possible PIC construction at 0x00010781fa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781fb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781fa7c) */
/* WARNING: Removing unreachable block (ram,0x00010781fa80) */
/* WARNING: Removing unreachable block (ram,0x00010781fa90) */
/* WARNING: Removing unreachable block (ram,0x00010781fa98) */
/* WARNING: Removing unreachable block (ram,0x00010781faa0) */
/* WARNING: Removing unreachable block (ram,0x00010781faa8) */
/* WARNING: Removing unreachable block (ram,0x00010781fab0) */
/* WARNING: Removing unreachable block (ram,0x00010781fac8) */
/* WARNING: Removing unreachable block (ram,0x00010781fab8) */
/* WARNING: Removing unreachable block (ram,0x00010781fac0) */
/* WARNING: Removing unreachable block (ram,0x00010781facc) */
/* WARNING: Removing unreachable block (ram,0x00010781fad4) */
/* WARNING: Removing unreachable block (ram,0x00010781fae4) */
/* WARNING: Removing unreachable block (ram,0x00010781fae8) */
/* WARNING: Removing unreachable block (ram,0x00010781fadc) */
/* WARNING: Removing unreachable block (ram,0x00010781fa88) */
/* WARNING: Removing unreachable block (ram,0x00010781fb24) */

void FUN_10781fa30(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781fb34;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781fb34:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10781fe68; end: 10781ff6b;  */

/* WARNING: Possible PIC construction at 0x00010781feb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010781ff58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010781feb4) */
/* WARNING: Removing unreachable block (ram,0x00010781feb8) */
/* WARNING: Removing unreachable block (ram,0x00010781fec8) */
/* WARNING: Removing unreachable block (ram,0x00010781fed0) */
/* WARNING: Removing unreachable block (ram,0x00010781fed8) */
/* WARNING: Removing unreachable block (ram,0x00010781fee0) */
/* WARNING: Removing unreachable block (ram,0x00010781fee8) */
/* WARNING: Removing unreachable block (ram,0x00010781ff00) */
/* WARNING: Removing unreachable block (ram,0x00010781fef0) */
/* WARNING: Removing unreachable block (ram,0x00010781fef8) */
/* WARNING: Removing unreachable block (ram,0x00010781ff04) */
/* WARNING: Removing unreachable block (ram,0x00010781ff0c) */
/* WARNING: Removing unreachable block (ram,0x00010781ff1c) */
/* WARNING: Removing unreachable block (ram,0x00010781ff20) */
/* WARNING: Removing unreachable block (ram,0x00010781ff14) */
/* WARNING: Removing unreachable block (ram,0x00010781fec0) */
/* WARNING: Removing unreachable block (ram,0x00010781ff5c) */

void FUN_10781fe68(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x000107822620();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107822584();
    if (!(bool)in_ZR) {
      func_0x00010782227c();
      unaff_x19 = param_1;
    }
  }
  func_0x000107822590();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x000107821dd8();
    if (((bool)in_CY) && (func_0x000107822560(), extraout_x8 == 0)) {
      func_0x000107821d54();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107821ff0();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x000107822668();
      goto code_r0x00010781ff6c;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x00010782224c();
    func_0x0001078225c0();
  }
  else {
    func_0x000104bd35f4();
  }
code_r0x00010781ff6c:
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078201b0; end: 1078201d3;  */

void FUN_1078201b0(long param_1)

{
  func_0x000107822018();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078208e0; end: 107820927;  */

void FUN_1078208e0(long param_1)

{
  func_0x000107822018();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10782141c; end: 1078214bb;  */

long FUN_10782141c(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (param_1[3] != 0)) {
    uVar6 = (ulong)param_2;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar8 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar9 = plVar3[1];
        if (uVar9 != uVar6) break;
        if (*(uint *)(plVar3 + 2) == param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar2 * uVar5;
      }
    } while (uVar9 == uVar8);
  }
  return 0;
}



/* Entry: 1078216c0; end: 107821733;  */

/* WARNING: Possible PIC construction at 0x0001078216fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107821700) */
/* WARNING: Removing unreachable block (ram,0x00010782171c) */
/* WARNING: Removing unreachable block (ram,0x000107821730) */
/* WARNING: Removing unreachable block (ram,0x000107821714) */
/* WARNING: Removing unreachable block (ram,0x000107822070) */

undefined8 FUN_1078216c0(void)

{
  undefined8 extraout_x8;
  undefined8 in_stack_00000010;
  
  func_0x000107823144();
  func_0x00010782304c();
  func_0x000107821e20();
  func_0x000107822e34();
  func_0x00010782241c(in_stack_00000010);
  func_0x000107822c38();
  func_0x00010782175c();
  return extraout_x8;
}



/* Entry: 1078218c8; end: 1078218cb;  */

void FUN_1078218c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e0540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107821a3c; end: 107821a63;  */

long FUN_107821a3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107821a64();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107821c58; end: 107821c77;  */

void FUN_107821c58(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x000107821c78(&uStack_11,param_1);
  return;
}



/* Entry: 1078237e8; end: 107823b47;  */

void FUN_1078237e8(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,undefined8 *param_9)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  
  fVar10 = *(float *)*param_9;
  fVar7 = *(float *)param_9[1];
  fVar12 = *(float *)param_9[2];
  fVar14 = *(float *)param_9[7];
  fVar8 = *(float *)param_9[8];
  fVar11 = *(float *)(param_9[3] + 0x70);
  fVar13 = *(float *)param_9[9];
  fVar9 = *(float *)(param_9[3] + 0x68);
  lVar4 = param_9[0xe];
  if (*(char *)(lVar4 + 0x10) == '\x01') {
    func_0x000107824024(lVar4);
    func_0x000107824024(lVar4);
    func_0x000107824024(fVar11 + ((param_2 - fVar10) * fVar12) / fVar7,
                        fVar9 + ((param_8 - fVar14) * fVar13) / fVar8,lVar4);
    func_0x000107824024(fVar11 + ((param_6 - fVar10) * fVar12) / fVar7,lVar4);
  }
  plVar1 = (long *)param_9[0x10];
  uVar5 = (ulong)(uint)(int)(param_2 + param_1 + (float)(*(ushort *)(param_9[0xf] + 4) + 1));
  uVar6 = (ulong)(uint)(int)((param_6 + param_5) - (param_2 + param_1)) << 0x20 |
          (ulong)(uint)(int)((param_8 + param_7) - (param_4 + param_3)) << 0x30 |
          (ulong)(uint)(int)(param_4 + param_3 + (float)(*(ushort *)(param_9[0xf] + 6) + 1)) << 0x10
  ;
  uVar2 = plVar1[1];
  if (uVar2 < (ulong)plVar1[2]) {
    func_0x00010782440c(uVar2,uVar6 | uVar5);
    func_0x0001078243f4();
    lVar4 = uVar2 + 0x58;
  }
  else {
    plVar3 = plVar1;
    FUN_1078241a8(plVar1,(long)(uVar2 - *plVar1) / 0x58 + 1);
    func_0x000107824298(auStack_b8,plVar3,(plVar1[1] - *plVar1) / 0x58,plVar1 + 2);
    func_0x00010782440c(lStack_a8,uVar6 | uVar5);
    func_0x0001078243f4();
    lStack_a8 = lStack_a8 + 0x58;
    func_0x000107824208(plVar1,auStack_b8);
    lVar4 = plVar1[1];
    func_0x000107824314(auStack_b8);
  }
  plVar1[1] = lVar4;
  return;
}



/* Entry: 1078241a8; end: 107824207;  */

undefined8 * FUN_1078241a8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 < (undefined8 *)0x2e8ba2e8ba2e8bb) {
    uVar1 = (param_1[2] - *param_1) / 0x58;
    puVar3 = (undefined8 *)(uVar1 * 2);
    if (puVar3 < param_2 || (long)puVar3 - (long)param_2 == 0) {
      puVar3 = param_2;
    }
    if (0x1745d1745d1745c < uVar1) {
      puVar3 = (undefined8 *)0x2e8ba2e8ba2e8ba;
    }
    return puVar3;
  }
  func_0x00010782428c();
  puVar4 = (undefined8 *)(param_2[1] + ((param_1[1] - *param_1) / -0x58) * 0x58);
  puVar3 = puVar4;
  _memcpy(puVar4);
  param_2[1] = puVar4;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return puVar3;
}



/* Entry: 107824724; end: 107824e77;  */

void FUN_107824724(long *param_1,long **param_2,long *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  long **pplVar4;
  long ***ppplVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long **pplVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  ulong uVar16;
  ulong uVar17;
  int unaff_w24;
  long **pplVar18;
  long **pplVar19;
  byte bVar20;
  float fVar21;
  float fVar22;
  uint6 uVar23;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  undefined8 uVar24;
  byte bVar30;
  long *plStack_128;
  long *plStack_120;
  undefined8 auStack_118 [4];
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long **pplStack_e0;
  undefined1 uStack_d8;
  long **pplStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  int iStack_98;
  undefined8 uStack_90;
  
  pplVar18 = param_2;
  func_0x0001078253b0();
  lStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  pplVar12 = (long **)*param_3;
  pplVar19 = (long **)param_3[1];
  uStack_90 = extraout_x8;
  if ((long)pplVar19 - (long)pplVar12 == 0) {
LAB_1078247b0:
    pplVar15 = (long **)(param_1 + 0xc);
    for (; pplVar12 != pplVar19; pplVar12 = pplVar12 + 0x11) {
      plStack_128 = (long *)CONCAT44((int)pplVar12[4],(int)pplVar12[3]);
      if (*(char *)(pplVar12 + 0xc) == '\x01') {
        lStack_c8 = CONCAT71(lStack_c8._1_7_,1);
        pplVar4 = pplVar15;
        pplStack_d0 = pplVar15;
        __ZNSt3__119__shared_mutex_base11lock_sharedEv();
        func_0x0001078253c8();
        if (pplVar4 != (long **)0x0) {
          unaff_w24 = *(int *)(pplVar18 + 7);
        }
        func_0x000100100f40(&pplStack_d0);
        if (pplVar4 == (long **)0x0) {
          uStack_d8 = 1;
          pplVar4 = pplVar15;
          pplStack_e0 = pplVar15;
          __ZNSt3__119__shared_mutex_base4lockEv();
          func_0x0001078253c8();
          if (pplVar4 == (long **)0x0) {
            func_0x0001072d17f4(param_1 + 5,pplVar12 + 5);
            unaff_w24 = (int)((param_1[6] - param_1[5]) / 0x38) + -1;
            func_0x000104c2fe00(&pplStack_d0,pplVar12 + 5);
            Hint_Prefetch(param_1[8],0,2,0);
            ppplVar5 = &pplStack_d0;
            iStack_98 = unaff_w24;
            func_0x000104c2fe38(param_1[8]);
            lVar10 = 0;
            uVar17 = param_1[8];
            uVar11 = param_1[10];
            uVar8 = uVar17 >> 0xc ^ (ulong)ppplVar5 >> 7;
            bVar1 = (byte)ppplVar5;
            uVar23 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,
                                                  bVar1))))) & 0x7f7f7f7f7f7f;
            while( true ) {
              uVar8 = uVar8 & uVar11;
              uVar24 = *(undefined8 *)(uVar17 + uVar8);
              cVar25 = (char)((ulong)uVar24 >> 8);
              cVar26 = (char)((ulong)uVar24 >> 0x10);
              cVar27 = (char)((ulong)uVar24 >> 0x18);
              cVar28 = (char)((ulong)uVar24 >> 0x20);
              cVar29 = (char)((ulong)uVar24 >> 0x28);
              bVar20 = (byte)((ulong)uVar24 >> 0x30);
              bVar30 = (byte)((ulong)uVar24 >> 0x38);
              for (uVar16 = CONCAT17(-(bVar30 == (bVar1 & 0x7f)),
                                     CONCAT16(-(bVar20 == (bVar1 & 0x7f)),
                                              CONCAT15(-(cVar29 == (char)(uVar23 >> 0x28)),
                                                       CONCAT14(-(cVar28 == (char)(uVar23 >> 0x20)),
                                                                CONCAT13(-(cVar27 ==
                                                                          (char)(uVar23 >> 0x18)),
                                                                         CONCAT12(-(cVar26 ==
                                                                                   (char)(uVar23 >>
                                                                                         0x10)),
                                                                                  CONCAT11(-(cVar25 
                                                  == (char)(uVar23 >> 8)),
                                                  -((char)uVar24 == (char)uVar23)))))))) &
                            0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
                uVar6 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
                uVar6 = param_1[9] +
                        (uVar8 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar11) *
                        0x40;
                func_0x000104c32db4(uVar6,&pplStack_d0);
                if ((uVar6 & 1) != 0) goto LAB_10782493c;
              }
              bVar20 = NEON_umaxv(CONCAT17(-(bVar30 == 0x80),
                                           CONCAT16(-(bVar20 == 0x80),
                                                    CONCAT15(-(cVar29 == -0x80),
                                                             CONCAT14(-(cVar28 == -0x80),
                                                                      CONCAT13(-(cVar27 == -0x80),
                                                                               CONCAT12(-(cVar26 ==
                                                                                         -0x80),
                                                  CONCAT11(-(cVar25 == -0x80),
                                                           -((char)uVar24 == -0x80)))))))),1);
              if ((bVar20 & 1) != 0) break;
              lVar10 = lVar10 + 8;
              uVar8 = lVar10 + uVar8;
            }
            plVar9 = param_1 + 8;
            func_0x000107825190(plVar9,ppplVar5);
            lVar10 = param_1[9] + (long)plVar9 * 0x40;
            func_0x000104c318bc(lVar10,&pplStack_d0);
            *(int *)(lVar10 + 0x38) = iStack_98;
LAB_10782493c:
            func_0x000104c2f714(&pplStack_d0);
          }
          else {
            unaff_w24 = *(int *)(pplVar18 + 7);
          }
          func_0x0001078253c0();
        }
      }
      else {
        unaff_w24 = -1;
      }
      plStack_120 = (long *)CONCAT44(plStack_120._4_4_,unaff_w24);
      func_0x0001077ff520(auStack_118,pplVar12 + 0xd);
      if (uStack_f0 < uStack_e8) {
        pplVar18 = &plStack_128;
        func_0x0001078250b4();
        uVar8 = uStack_f0 + 0x30;
      }
      else {
        lVar10 = (long)(uStack_f0 - lStack_f8) / 0x30;
        uVar8 = lVar10 + 1;
        if (0x555555555555555 < uVar8) {
          func_0x000107824f6c();
          goto LAB_107824dec;
        }
        uVar17 = (long)(uStack_e8 - lStack_f8) / 0x30;
        uVar11 = uVar17 * 2;
        if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
          uVar11 = uVar8;
        }
        if (0x2aaaaaaaaaaaaa9 < uVar17) {
          uVar11 = 0x555555555555555;
        }
        func_0x00010782503c(&pplStack_d0,uVar11,lVar10,&uStack_e8);
        pplVar18 = &plStack_128;
        func_0x0001078250b4();
        uStack_c0 = uStack_c0 + 0x30;
        func_0x0001078253dc();
        uVar8 = uStack_f0;
        func_0x0001078250e8(&pplStack_d0);
      }
      uStack_f0 = uVar8;
      func_0x000107405908(auStack_118);
    }
    uStack_d8 = 1;
    pplStack_e0 = pplVar15;
    __ZNSt3__119__shared_mutex_base4lockEv(pplVar15);
    uVar11 = uStack_e8;
    uVar8 = uStack_f0;
    lVar10 = lStack_f8;
    lStack_c8 = lStack_f8;
    uStack_c0 = uStack_f0;
    uStack_b8 = uStack_e8;
    uStack_f0 = 0;
    uStack_e8 = 0;
    lStack_f8 = 0;
    pplVar18 = (long **)param_1[1];
    pplStack_d0 = param_2;
    if (pplVar18 != (long **)0x0) {
      uVar17 = (long)pplVar18 - 1;
      if (((ulong)pplVar18 & uVar17) == 0) {
        pplVar19 = (long **)(uVar17 & (ulong)param_2);
      }
      else {
        pplVar19 = param_2;
        if (pplVar18 <= param_2) {
          uVar16 = 0;
          if (pplVar18 != (long **)0x0) {
            uVar16 = (ulong)param_2 / (ulong)pplVar18;
          }
          pplVar19 = (long **)((long)param_2 - uVar16 * (long)pplVar18);
        }
      }
      plVar9 = *(long **)(*param_1 + (long)pplVar19 * 8);
      if (plVar9 != (long *)0x0) {
        do {
          while( true ) {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_107824acc;
            pplVar12 = (long **)plVar9[1];
            if (pplVar12 != param_2) break;
            if ((long **)plVar9[2] == param_2) {
              uVar3 = 1;
              goto LAB_107824d88;
            }
          }
          if (((ulong)pplVar18 & uVar17) == 0) {
            pplVar12 = (long **)((ulong)pplVar12 & uVar17);
          }
          else if (pplVar18 <= pplVar12) {
            uVar16 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar16 = (ulong)pplVar12 / (ulong)pplVar18;
            }
            pplVar12 = (long **)((long)pplVar12 - uVar16 * (long)pplVar18);
          }
        } while (pplVar12 == pplVar19);
      }
    }
LAB_107824acc:
    plVar7 = (long *)0x30;
    __Znwm();
    plVar9 = param_1 + 2;
    auStack_118[0] = 1;
    *plVar7 = 0;
    plVar7[1] = (long)param_2;
    plVar7[2] = (long)param_2;
    plVar7[3] = lVar10;
    plVar7[4] = uVar8;
    plVar7[5] = uVar11;
    uStack_c0 = 0;
    uStack_b8 = 0;
    lStack_c8 = 0;
    fVar21 = (float)(param_1[3] + 1);
    plStack_120 = plVar9;
    if ((pplVar18 == (long **)0x0) ||
       (fVar22 = *(float *)(param_1 + 4) * (float)pplVar18, uVar3 = fVar22 == fVar21,
       fVar22 < fVar21)) {
      uVar8 = 1;
      if ((long **)0x2 < pplVar18) {
        uVar8 = (ulong)(((ulong)pplVar18 & (long)pplVar18 - 1U) != 0);
      }
      pplVar12 = (long **)(uVar8 | (long)pplVar18 << 1);
      pplVar19 = (long **)(long)(fVar21 / *(float *)(param_1 + 4));
      if (pplVar12 <= pplVar19) {
        pplVar12 = pplVar19;
      }
      plStack_128 = plVar7;
      if ((long)pplVar12 - 1U == 0) {
        pplVar12 = (long **)0x2;
      }
      else if (((ulong)pplVar12 & (long)pplVar12 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        pplVar18 = (long **)param_1[1];
      }
      if (pplVar18 < pplVar12) {
LAB_107824b84:
        if ((ulong)pplVar12 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_107824dec;
        }
        lVar10 = (long)pplVar12 << 3;
        __Znwm(lVar10);
        func_0x000107825134(param_1,lVar10);
        param_1[1] = (long)pplVar12;
        lVar10 = *param_1;
        for (pplVar18 = (long **)0x0; pplVar12 != pplVar18; pplVar18 = (long **)((long)pplVar18 + 1)
            ) {
          *(undefined8 *)(lVar10 + (long)pplVar18 * 8) = 0;
        }
        plVar13 = (long *)*plVar9;
        pplVar18 = pplVar12;
        if (plVar13 != (long *)0x0) {
          pplVar19 = (long **)plVar13[1];
          uVar11 = (long)pplVar12 - 1;
          uVar8 = 0;
          if (pplVar12 != (long **)0x0) {
            uVar8 = (ulong)pplVar19 / (ulong)pplVar12;
          }
          pplVar15 = pplVar19;
          if (pplVar12 <= pplVar19) {
            pplVar15 = (long **)((long)pplVar19 - uVar8 * (long)pplVar12);
          }
          if (((ulong)pplVar12 & uVar11) == 0) {
            pplVar15 = (long **)((ulong)pplVar19 & uVar11);
          }
          *(long **)(lVar10 + (long)pplVar15 * 8) = plVar9;
          while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
            pplVar19 = (long **)plVar13[1];
            if (((ulong)pplVar12 & uVar11) == 0) {
              pplVar19 = (long **)((ulong)pplVar19 & uVar11);
            }
            else if (pplVar12 <= pplVar19) {
              uVar8 = 0;
              if (pplVar12 != (long **)0x0) {
                uVar8 = (ulong)pplVar19 / (ulong)pplVar12;
              }
              pplVar19 = (long **)((long)pplVar19 - uVar8 * (long)pplVar12);
            }
            if (pplVar19 != pplVar15) {
              if (*(long *)(lVar10 + (long)pplVar19 * 8) == 0) {
                *(long **)(lVar10 + (long)pplVar19 * 8) = plVar14;
                pplVar15 = pplVar19;
              }
              else {
                *plVar14 = *plVar13;
                *plVar13 = **(undefined8 **)(lVar10 + (long)pplVar19 * 8);
                **(long **)(lVar10 + (long)pplVar19 * 8) = (long)plVar13;
                plVar13 = plVar14;
              }
            }
          }
        }
      }
      else if (pplVar12 < pplVar18) {
        pplVar19 = (long **)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
        if ((pplVar18 < (long **)0x3) || (((ulong)pplVar18 & (long)pplVar18 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long **)0x1 < pplVar19) {
          pplVar19 = (long **)(1L << (-LZCOUNT((long)pplVar19 + -1) & 0x3fU));
        }
        if (pplVar12 <= pplVar19) {
          pplVar12 = pplVar19;
        }
        if (pplVar12 < pplVar18) {
          if (pplVar12 != (long **)0x0) goto LAB_107824b84;
          func_0x000107825134(param_1,0);
          param_1[1] = 0;
          pplVar18 = (long **)0x0;
        }
        else {
          pplVar18 = (long **)param_1[1];
        }
      }
      if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
        pplVar19 = (long **)((long)pplVar18 - 1U & (ulong)param_2);
        uVar3 = true;
      }
      else {
        uVar3 = param_2 == pplVar18;
        pplVar19 = param_2;
        if (pplVar18 <= param_2) {
          uVar8 = 0;
          if (pplVar18 != (long **)0x0) {
            uVar8 = (ulong)param_2 / (ulong)pplVar18;
          }
          pplVar19 = (long **)((long)param_2 - uVar8 * (long)pplVar18);
        }
      }
    }
    lVar10 = *param_1;
    plVar13 = *(long **)(lVar10 + (long)pplVar19 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar7 = *plVar9;
      *plVar9 = (long)plVar7;
      *(long **)(lVar10 + (long)pplVar19 * 8) = plVar9;
      if (*plVar7 != 0) {
        pplVar12 = *(long ***)(*plVar7 + 8);
        if (((ulong)pplVar18 & (long)pplVar18 - 1U) == 0) {
          pplVar12 = (long **)((ulong)pplVar12 & (long)pplVar18 - 1U);
          uVar3 = true;
        }
        else {
          uVar3 = pplVar12 == pplVar18;
          if (pplVar18 <= pplVar12) {
            uVar8 = 0;
            if (pplVar18 != (long **)0x0) {
              uVar8 = (ulong)pplVar12 / (ulong)pplVar18;
            }
            pplVar12 = (long **)((long)pplVar12 - uVar8 * (long)pplVar18);
          }
        }
        *(long **)(lVar10 + (long)pplVar12 * 8) = plVar7;
      }
    }
    else {
      *plVar7 = *plVar13;
      *plVar13 = (long)plVar7;
    }
    plStack_128 = (long *)0x0;
    param_1[3] = param_1[3] + 1;
    func_0x00010782514c(&plStack_128);
LAB_107824d88:
    FUN_1077ff2a0(&lStack_c8);
    func_0x0001078253c0();
    FUN_1077ff2a0(&lStack_f8);
    func_0x00010782539c(uStack_90);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    pplVar18 = (long **)(((long)pplVar19 - (long)pplVar12) / 0x88);
    if (pplVar18 < (long **)0x555555555555556) {
      func_0x00010782503c(&pplStack_d0,pplVar18,0,&uStack_e8);
      func_0x0001078253dc();
      func_0x0001078250e8(&pplStack_d0);
      pplVar12 = (long **)*param_3;
      pplVar19 = (long **)param_3[1];
      goto LAB_1078247b0;
    }
  }
  func_0x000107824f6c();
LAB_107824dec:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107824df0);
  (*pcVar2)();
}



/* Entry: 10782528c; end: 10782535b;  */

void FUN_10782528c(long *param_1,long param_2)

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
  func_0x000107367a70();
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
      func_0x00010782535c(lVar9 + (long)plVar3 * 0x40,lVar6);
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



/* Entry: 107825abc; end: 107825ae7;  */

/* WARNING: Possible PIC construction at 0x000107408418: Changing call to branch */

long * FUN_107825abc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                    undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  
  pbVar2 = (byte *)(param_1 + 0x18);
  func_0x000107405928();
  plVar1 = (long *)(param_1 + 0x30);
  if ((ulong)((*(long *)(param_1 + 0x38) - *plVar1) / 0xa8) <= (ulong)*pbVar2) {
    func_0x00010740a6b0();
    func_0x00010740b144();
    func_0x00010740ab38();
    uStack_c8 = param_6[1];
    uStack_d0 = *param_6;
    uStack_c0 = param_6[2];
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    func_0x000107407f3c(plVar1,param_3,param_4 & 0xff,auStack_b8,&uStack_d0,*param_7,param_7[1]);
    func_0x0001056d1ce4(&uStack_d0);
    func_0x000104c336c8(auStack_b8);
    return plVar1;
  }
  return (long *)(*plVar1 + (ulong)*pbVar2 * 0xa8);
}



/* Entry: 107826aec; end: 107826c63;  */

/* WARNING: Possible PIC construction at 0x000107826b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107826b20) */
/* WARNING: Removing unreachable block (ram,0x000107826b30) */
/* WARNING: Removing unreachable block (ram,0x000107826c0c) */
/* WARNING: Removing unreachable block (ram,0x000107826c24) */
/* WARNING: Removing unreachable block (ram,0x000107826c3c) */
/* WARNING: Removing unreachable block (ram,0x000107826c4c) */
/* WARNING: Removing unreachable block (ram,0x000107826c5c) */
/* WARNING: Removing unreachable block (ram,0x000107826bf4) */

undefined8 * FUN_107826aec(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_130 [80];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [112];
  
  func_0x000107827884();
  func_0x000107407a9c(auStack_130);
  uStack_d8 = param_3[1];
  uStack_e0 = *param_3;
  uStack_d0 = param_3[2];
  func_0x000107278b70(auStack_c8,param_3 + 3);
  uStack_b0 = param_3[6];
  uStack_b8 = param_3[5];
  uStack_a8 = *(undefined4 *)(param_3 + 7);
  func_0x000107263b58(auStack_a0,param_3 + 8);
  return &uStack_e0;
}



/* Entry: 107826ea0; end: 107826f43;  */

void FUN_107826ea0(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0xa8) {
    func_0x000107826cd8(param_4,lVar1);
    param_4 = lStack_38 + 0xa8;
  }
  uStack_48 = 1;
  func_0x000107826f44(param_1,param_2,param_3);
  func_0x000107826f74(&uStack_60);
  return;
}



/* Entry: 1078270a4; end: 107827133;  */

void FUN_1078270a4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001078278bc();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x50) * 0x50;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x50) {
    func_0x0001074054bc(lVar2,lVar3);
    lVar2 = lVar2 + 0x50;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x50) {
    func_0x00010740553c(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x00010782782c();
  return;
}



/* Entry: 107827480; end: 107827513;  */

long FUN_107827480(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x000107405588(param_1);
  }
  return param_1;
}



/* Entry: 107827a9c; end: 107827ae7;  */

uint FUN_107827a9c(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  uVar3 = (uint)uVar1;
  if (uVar1 == 0) {
    uVar4 = 0xe000;
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    uVar5 = 0x10000;
  }
  else {
    uVar5 = uVar1 + 1;
    *(short *)(param_1 + 0x4a) = (short)uVar5;
    uVar2 = uVar5 >> 8 & 0xff;
    uVar3 = 0;
    if (uVar2 < 0xf9) {
      uVar3 = uVar5 & 0xff;
    }
    uVar4 = 0;
    if (uVar2 < 0xf9) {
      uVar4 = uVar5 & 0xff00;
    }
    uVar5 = 0;
    if (uVar2 < 0xf9) {
      uVar5 = 0x10000;
    }
  }
  return uVar4 | uVar3 | uVar5;
}



/* Entry: 107827d70; end: 107827e27;  */

undefined8 * FUN_107827d70(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    lVar1 = (param_1[2] & 0x7fffffffffffffff) - 1;
  }
  else {
    lVar1 = 10;
  }
  if ((ulong)(lVar1 - lVar2) < param_3) {
    func_0x000107827e28(param_1,lVar1,(param_3 - lVar1) + lVar2,lVar2,lVar2,0,param_3);
  }
  else if (param_3 != 0) {
    puVar3 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      puVar3 = (undefined8 *)*param_1;
    }
    _memmove((long)puVar3 + lVar2 * 2,param_2,param_3 << 1);
    lVar2 = lVar2 + param_3;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      param_1[1] = lVar2;
    }
    else {
      *(byte *)((long)param_1 + 0x17) = (byte)lVar2 & 0x7f;
    }
    *(undefined2 *)((long)puVar3 + lVar2 * 2) = 0;
  }
  return param_1;
}



/* Entry: 107828384; end: 1078283bb;  */

void FUN_107828384(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107828450(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0xa8;
  return;
}


