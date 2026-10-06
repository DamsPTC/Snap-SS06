/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107486ca0; end: 107486e5b;  */

long * FUN_107486ca0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [152];
  undefined8 uStack_48;
  
  func_0x00010748f2f0();
  func_0x00010748f1bc();
  uStack_48 = extraout_x8;
  (**(code **)(*(long *)*param_2 + 0x60))(auStack_e0);
  FUN_107486e5c(unaff_x19 + 5,auStack_e0);
  func_0x0001073ad4a0(auStack_e0);
  FUN_1074e3b28();
  iVar6 = (int)*(undefined8 *)(unaff_x20 + 0x50);
  FUN_1074e6e30();
  uVar5 = 0;
  if (iVar6 != 0) {
    lVar8 = unaff_x19[3];
    func_0x00010748f2fc(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x00010748f530();
    lVar8 = lVar8 + 0x168;
    func_0x0001073e9514(lVar8,auStack_e0);
    uVar5 = (undefined1)lVar8;
  }
  *(undefined1 *)(unaff_x19 + 0x1e3) = uVar5;
  iVar6 = (int)*(undefined8 *)(unaff_x20 + 0x50);
  FUN_1074e6e30();
  uVar5 = 0;
  if (iVar6 != 0) {
    lVar8 = unaff_x19[3];
    func_0x00010748f2fc(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x00010748f530();
    lVar8 = lVar8 + 0x168;
    func_0x0001073e94f0(lVar8,auStack_e0);
    uVar5 = (undefined1)lVar8;
  }
  *(undefined1 *)((long)unaff_x19 + 0xf19) = uVar5;
  unaff_x19[0x1e6] = *(long *)(unaff_x20 + 0x28);
  plVar7 = unaff_x19;
  FUN_107486e80();
  if ((int)plVar7 != 0) {
    plVar7 = unaff_x19 + 0x1e7;
    FUN_107486f3c();
    lVar1 = ((long *)unaff_x19[5])[1];
    for (lVar8 = *(long *)unaff_x19[5]; in_ZR = lVar8 == lVar1, !(bool)in_ZR; lVar8 = lVar8 + 8) {
      plVar7 = unaff_x19;
      FUN_1074e3c98();
      if (plVar7 != (long *)0x0) {
        plVar9 = (long *)(*plVar7 + 0x48);
        while (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0) {
          plVar2 = *(long **)(plVar9[3] + 0x48);
          for (plVar10 = *(long **)(plVar9[3] + 0x40); plVar10 != plVar2; plVar10 = plVar10 + 2) {
            lStack_e8 = plVar10[1];
            lStack_f0 = *plVar10;
            if (plVar10[1] != 0) {
              plVar7 = (long *)(plVar10[1] + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = *plVar7 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            FUN_1074d4e80(auStack_e0,&lStack_f0);
            func_0x00010748b9dc(unaff_x19 + 0x1e7,auStack_e0);
            func_0x00010748be00(auStack_e0);
            plVar7 = &lStack_f0;
            func_0x000107267e44();
          }
        }
      }
    }
  }
  func_0x00010748f188(uStack_48);
  if ((bool)in_ZR) {
    return (long *)0x0;
  }
  ___stack_chk_fail();
  func_0x00010748f298();
  func_0x00010748f73c();
  func_0x0001073ad4a0();
  return plVar7;
}



/* Entry: 107486e5c; end: 107486e7f;  */

void FUN_107486e5c(void)

{
  func_0x00010748f73c();
  func_0x0001073ad4a0();
  return;
}



/* Entry: 107486e80; end: 107486f3b;  */

undefined1 * FUN_107486e80(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  uint uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_200 [400];
  undefined1 auStack_70 [56];
  undefined1 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_200;
  puVar2 = auStack_200;
  func_0x00010748f1bc();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_28 = extraout_x8;
  func_0x000107751284(auStack_200);
  if (*(int *)(lVar4 + 0x540) == 0) {
    uVar3 = 0;
  }
  else {
    in_ZR = *(int *)(lVar4 + 0x540) == 1;
    if ((bool)in_ZR) {
      uVar3 = (uint)*(byte *)(lVar4 + 0x510);
    }
    else {
      auStack_70[0] = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      lVar4 = lVar4 + 0x510;
      func_0x000107280464(lVar4,auStack_200,auStack_70,0);
      uVar3 = (uint)lVar4;
      func_0x00010724b3d8(auStack_70);
    }
  }
  func_0x000107267da8();
  func_0x00010748f188(uStack_28);
  if ((bool)in_ZR) {
    return (undefined1 *)(ulong)(uVar3 & 1);
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_70);
  func_0x000107267da8();
  func_0x00010748f298();
  func_0x00010748f2a8();
  puVar2 = *(undefined1 **)(puVar2 + 8);
  while (puVar2 != puVar1) {
    puVar2 = puVar2 + -0x98;
    func_0x00010748be00();
  }
  *(undefined1 **)(unaff_x20 + 8) = puVar1;
  return puVar2;
}



/* Entry: 107486f3c; end: 107486fff;  */

void FUN_107486f3c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x98;
    func_0x00010748be00();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107487000; end: 1074884ef;  */

double FUN_107487000(undefined8 *param_1,double param_2,long *param_3,long *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  char cVar15;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_w8_01;
  uint uVar16;
  undefined8 *puVar17;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  code *extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  code *extraout_x8_16;
  char cVar18;
  long lVar19;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  undefined4 *puVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined1 *puVar32;
  uint uVar33;
  float fVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined1 uStack_6e6;
  undefined1 uStack_6d1;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  long *plStack_688;
  undefined1 *puStack_680;
  undefined1 *puStack_678;
  undefined1 *puStack_670;
  uint auStack_4f8 [14];
  undefined1 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  ulong uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined2 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 auStack_458 [56];
  undefined1 auStack_420 [56];
  undefined1 uStack_3e8;
  undefined1 uStack_3e0;
  long lStack_3c8;
  undefined1 uStack_3a8;
  undefined1 auStack_3a0 [16];
  undefined1 uStack_390;
  undefined1 uStack_370;
  undefined1 uStack_368;
  undefined1 uStack_358;
  undefined1 uStack_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined1 uStack_31d;
  float fStack_31c;
  float fStack_318;
  undefined4 uStack_314;
  undefined2 uStack_310;
  undefined1 uStack_30e;
  undefined1 uStack_30d;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined2 uStack_2e8;
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [64];
  double adStack_260 [5];
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_98;
  
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = (*(byte *)(param_3 + 7) & *(byte *)(param_4 + 0xc)) == 0;
  if ((!(bool)uVar8) &&
     (((*(byte *)(param_4[6] + 0x12f0) & 1) != 0 ||
      (uVar8 = *(char *)(param_4[6] + 0x12f9) == '\x01', !(bool)uVar8)))) {
    lVar19 = param_3[1];
    puVar1 = (undefined1 *)(lVar19 + 0x28);
    uVar8 = *(char *)((long)param_4 + 0xad) == '\x01';
    if (((bool)uVar8) && ((*(byte *)(param_4 + 0x16) >> 3 & 1) != 0)) {
      plVar12 = (long *)((long *)param_3[5])[1];
      for (plVar22 = *(long **)param_3[5]; plVar22 != plVar12; plVar22 = plVar22 + 1) {
        lVar21 = *plVar22;
        plVar25 = param_3;
        FUN_1074e3c98(param_3,lVar21,(char)param_4[0xc]);
        if (plVar25 != (long *)0x0) {
          uVar35 = *(ulong *)(lVar19 + 0xa8);
          uVar31 = *(undefined8 *)(lVar19 + 0xe8);
          fVar34 = *(float *)(lVar19 + 0xec);
          uVar13 = 0;
          param_2 = 8192.0 / (40075016.68557849 /
                             (double)(1 << (ulong)(*(byte *)(lVar21 + 4) & 0x1f)));
          fVar37 = (float)param_2;
          plVar25 = (long *)(*plVar25 + 0x48);
          uVar36 = uVar35;
LAB_1074871e0:
          do {
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) break;
            uStack_304 = 0;
            uStack_30c = 0;
            uStack_308 = 0;
            uStack_314 = 0;
            uStack_310 = 0;
            uStack_30e = 0;
            uStack_30d = 0;
            fStack_31c = 0.0;
            fStack_318 = 0.0;
            uStack_320 = SUB41(fVar37,0);
            uStack_31f = (undefined1)((uint)fVar37 >> 8);
            uStack_31e = (undefined1)((uint)fVar37 >> 0x10);
            uStack_31d = (undefined1)((uint)fVar37 >> 0x18);
            lVar21 = plVar25[3];
            if (*(char *)(lVar21 + 0x38) == '\x01') {
              fStack_31c = *(float *)(lVar19 + 0x184);
              fStack_318 = *(float *)(lVar19 + 0x180);
            }
            if (0.0 < fVar34) {
              uStack_308 = (undefined4)uVar31;
              uStack_304 = (undefined4)((ulong)uVar31 >> 0x20);
              uStack_310 = (undefined2)uVar35;
              uStack_30e = (undefined1)(uVar35 >> 0x10);
              uStack_30d = (undefined1)(uVar35 >> 0x18);
              uStack_30c = (undefined4)(uVar35 >> 0x20);
              lVar21 = plVar25[3];
              uVar13 = uVar35;
            }
            if (*(long *)(lVar21 + 0x198) == 0) {
              (**(code **)(*(long *)*param_4 + 0xa8))(auStack_4f8,(long *)*param_4,0x20);
              plStack_688 = (long *)CONCAT44(auStack_4f8[1],auStack_4f8[0]);
              uStack_690 = (long *)0x20;
              func_0x00010748fd88();
              func_0x000107308dac(plVar25[3] + 0x198,&uStack_4b0);
              func_0x00010730b284(&uStack_4b0);
              plVar3 = plStack_688;
              plStack_688 = (long *)0x0;
              if (plVar3 != (long *)0x0) {
                func_0x00010748f564();
              }
LAB_1074872d4:
              puVar17 = *(undefined8 **)(plVar25[3] + 0x198);
              plVar3 = (long *)puVar17[1];
              (**(code **)(*plVar3 + 0x20))(plVar3,&uStack_320,*puVar17);
              lVar21 = plVar25[3];
              param_2 = (double)CONCAT44(fStack_31c,
                                         CONCAT13(uStack_31d,
                                                  CONCAT12(uStack_31e,
                                                           CONCAT11(uStack_31f,uStack_320))));
              puVar32 = (undefined1 *)
                        CONCAT44(uStack_30c,CONCAT13(uStack_30d,CONCAT12(uStack_30e,uStack_310)));
              *(ulong *)(lVar21 + 0x80) = CONCAT44(uStack_314,fStack_318);
              *(double *)(lVar21 + 0x78) = param_2;
              *(ulong *)(lVar21 + 0x90) = CONCAT44(uStack_304,uStack_308);
              *(undefined1 **)(lVar21 + 0x88) = puVar32;
            }
            else {
              uVar13 = (ulong)(uint)*(float *)(lVar21 + 0x78);
              if ((((*(float *)(lVar21 + 0x78) != fVar37) ||
                   (uVar13 = (ulong)(uint)*(float *)(lVar21 + 0x7c),
                   *(float *)(lVar21 + 0x7c) != fStack_31c)) ||
                  (puVar32 = (undefined1 *)(ulong)(uint)*(float *)(lVar21 + 0x80),
                  *(float *)(lVar21 + 0x80) != fStack_318)) ||
                 (param_2 = (double)(ulong)(uint)*(float *)(lVar21 + 0x84),
                 *(float *)(lVar21 + 0x84) != 0.0)) goto LAB_1074872d4;
              uVar11 = lVar21 + 0x88;
              func_0x00010730ae80(uVar11,&uStack_310);
              if ((uVar11 & 1) == 0) goto LAB_1074872d4;
            }
            if (*(char *)(plVar25[3] + 0x3a) == '\x01') {
              _bzero(auStack_2e0,0xc0);
              if ((int)param_3[0x1c9] == 0) {
                func_0x00010748feac(lVar19 + 0x32c);
              }
              else {
                func_0x00010748fec0(lVar19 + 0x334);
              }
              if ((int)param_3[0x1ae] == 0) {
                uStack_690 = *(long **)(lVar19 + 0x174);
                plStack_688 = uStack_690;
                puStack_680 = (undefined1 *)uStack_690;
                puStack_678 = (undefined1 *)uStack_690;
              }
              else {
                plStack_688 = *(long **)(lVar19 + 0x314);
                uStack_690 = *(long **)(lVar19 + 0x30c);
                puStack_678 = *(undefined1 **)(lVar19 + 0x324);
                puVar32 = *(undefined1 **)(lVar19 + 0x31c);
                puStack_680 = puVar32;
              }
              uVar30 = SUB84(uStack_690,0);
              uVar29 = SUB84(puVar32,0);
              func_0x000107486f8c(&uStack_320,&uStack_4b0,&uStack_690);
              FUN_107489418((int)param_3[0x131],puVar1);
              func_0x00010748fe98();
              func_0x000107489438((int)param_3[0x117],puVar1);
              uStack_690 = (long *)CONCAT44(uVar29,uVar30);
              plStack_688 = (long *)CONCAT44((int)uVar36,(int)uVar13);
              func_0x000107489458((int)param_3[0x124],puVar1);
              func_0x00010748f5d8();
              uStack_6b8 = 0;
              uStack_6b0 = 0;
              func_0x00010748f6b8(auStack_2e0);
              func_0x000107486f44((int)param_3[0x95],*(undefined1 *)(lVar19 + 0x17c),
                                  *(undefined4 *)(lVar19 + 0x2b4));
              func_0x00010748fe98();
              func_0x000107489478((int)param_3[0x13e],puVar1);
              uStack_690 = (long *)CONCAT44(uVar29,uVar30);
              plStack_688 = (long *)CONCAT44((int)uVar36,(int)uVar13);
              func_0x000107489498((int)param_3[0x10a],puVar1);
              func_0x00010748f5d8();
              func_0x0001074894b8((int)param_3[0x1e1],puVar1);
              uStack_6b8 = CONCAT44(uVar29,uVar30);
              uStack_6b0 = CONCAT44((int)uVar36,(int)uVar13);
              func_0x00010748f6b8(auStack_2a0);
              func_0x0001074894d8((int)param_3[0x19f],puVar1);
              uStack_690 = (long *)CONCAT44(uVar29,uVar30);
              plStack_688 = (long *)CONCAT44((int)uVar36,(int)uVar13);
              func_0x0001074894f8((int)param_3[0x161],puVar1);
              func_0x00010748f5d8();
              if ((int)param_3[0x17c] == 0) {
                func_0x00010748feac(lVar19 + 0x2cc);
              }
              else {
                func_0x00010748fec0(lVar19 + 0x2d4);
              }
              param_2 = 0.0;
              lStack_238 = 0;
              adStack_260[4] = 0.0;
              uStack_228 = 0;
              uStack_230 = 0;
              adStack_260[1] = 0.0;
              adStack_260[0] = 0.0;
              adStack_260[3] = 0.0;
              adStack_260[2] = 0.0;
              for (lVar21 = 0; lVar21 != 4; lVar21 = lVar21 + 1) {
                param_2 = (double)(&uStack_4b0)[lVar21];
                uVar30 = *(undefined4 *)((long)&uStack_690 + lVar21 * 4);
                uVar33 = auStack_4f8[lVar21];
                adStack_260[lVar21 * 2 + 1] = param_2;
                adStack_260[lVar21 * 2] = (double)CONCAT44(uVar33,uVar30);
              }
              lVar21 = plVar25[3];
              if (*(long *)(lVar21 + 0x1a8) == 0) {
                (**(code **)(*(long *)*param_4 + 0xa8))(auStack_4f8,(long *)*param_4,0x100);
                plStack_688 = (long *)CONCAT44(auStack_4f8[1],auStack_4f8[0]);
                uStack_690 = (long *)0x100;
                func_0x00010748fd88();
                func_0x000107308dac(plVar25[3] + 0x1a8,&uStack_4b0);
                func_0x00010730b284(&uStack_4b0);
                plVar3 = plStack_688;
                plStack_688 = (long *)0x0;
                if (plVar3 != (long *)0x0) {
                  func_0x00010748f564();
                }
              }
              else {
                lVar26 = lVar21 + 0x98;
                func_0x00010748c8b4(lVar26,&uStack_320);
                if ((int)lVar26 != 0) {
                  lVar26 = lVar21 + 0xd8;
                  func_0x00010748c8b4(lVar26,auStack_2e0);
                  if ((int)lVar26 != 0) {
                    lVar26 = lVar21 + 0x118;
                    func_0x00010748c8b4(lVar26,auStack_2a0);
                    if ((int)lVar26 != 0) {
                      uVar11 = lVar21 + 0x158;
                      func_0x00010748c8b4(uVar11,adStack_260);
                      if ((uVar11 & 1) != 0) goto LAB_1074871e0;
                    }
                  }
                }
              }
              puVar17 = *(undefined8 **)(plVar25[3] + 0x1a8);
              plVar3 = (long *)puVar17[1];
              (**(code **)(*plVar3 + 0x20))(plVar3,&uStack_320,*puVar17);
              _memcpy(plVar25[3] + 0x98,&uStack_320,0x100);
            }
          } while( true );
        }
      }
      uStack_31e = 1;
      uStack_320 = 1;
      uStack_31f = 1;
      (**(code **)(*(long *)param_4[3] + 0x88))((long *)param_4[3],&uStack_320);
      if (((char)param_4[0xc] == '\b') && (*(char *)((long)param_3 + 0xf19) == '\x01')) {
        uStack_4b0._0_4_ = 0x103;
        uStack_4b0._4_4_ = 0;
        uStack_4a8 = 0x3f800000;
        param_2 = 3.45845952088873e-323;
        fStack_31c = 9.80909e-45;
        fStack_318 = 0.0;
        uStack_314 = 0;
        uStack_310 = 0x101;
        uStack_30e = 1;
        func_0x00010748f79c();
        func_0x00010748f9a8();
        puVar4 = (undefined8 *)((long *)param_3[5])[1];
        for (puVar17 = *(undefined8 **)param_3[5]; uVar8 = puVar17 == puVar4, !(bool)uVar8;
            puVar17 = puVar17 + 1) {
          uVar31 = *puVar17;
          plVar22 = param_3;
          FUN_1074e3c98(param_3,uVar31,(char)param_4[0xc]);
          if (plVar22 != (long *)0x0) {
            lVar26 = *plVar22;
            func_0x00010748f814(param_3[3],lVar26 + 0x110);
            lVar19 = lVar26 + 0x638;
            func_0x00010748f81c(param_3[3]);
            lVar21 = param_4[0x12];
            uStack_320 = 0x18;
            uStack_31f = 0;
            uStack_31e = 0;
            uStack_31d = 0;
            fStack_318 = (float)lVar19;
            uStack_314 = (undefined4)((ulong)lVar19 >> 0x20);
            uStack_310 = 1;
            uStack_30e = 0;
            uStack_30d = 0;
            func_0x00010748f6f8();
            *(undefined1 *)(extraout_x8 + 0x38) = 0;
            lVar19 = param_4[6];
            func_0x0001074e6e78(lVar19,*(undefined8 *)(param_4[8] + 0x1e0));
            uStack_2e8 = CONCAT11(*(undefined1 *)(lVar19 + 0xc),(undefined1)uStack_2e8);
            FUN_1073ca29c(&uStack_690,lVar21,lVar26 + 0x628,&uStack_320);
            iVar9 = (int)lVar21;
            if (uStack_690 != (long *)0x0) {
              func_0x00010748f394();
              (*extraout_x8_00)();
              uVar8 = 0;
              if (iVar9 == 2) {
                func_0x00010748f240();
                param_2 = (double)(ulong)(uint)(float)param_2;
                func_0x00010748f7fc(param_2,param_4[3],uStack_690);
                func_0x00010748f454();
                (**(code **)(extraout_x8_01 + 0x58))();
                func_0x00010748f440(param_4[3]);
                func_0x00010748f38c();
                func_0x00010748f3a4();
                func_0x00010748f6dc();
                func_0x00010748fb54(param_4,uVar31);
                func_0x00010748f8dc();
                func_0x00010748f63c();
                plVar22 = (long *)(lVar26 + 0x48);
                while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
                  func_0x00010748f558();
                  func_0x00010748f38c();
                  func_0x00010748f9b4();
                  func_0x00010748f7c8();
                  func_0x00010748f75c();
                  puVar5 = *(undefined4 **)(plVar22[3] + 0x68);
                  for (puVar24 = *(undefined4 **)(plVar22[3] + 0x60); puVar24 != puVar5;
                      puVar24 = puVar24 + 10) {
                    func_0x00010748f434(param_4[3],*puVar24);
                    (*extraout_x8_02)();
                    uStack_320 = 4;
                    func_0x00010748f914();
                    func_0x00010748f794();
                  }
                }
                func_0x00010748fd80();
                goto LAB_10748778c;
              }
            }
            func_0x00010748fd80();
            break;
          }
LAB_10748778c:
        }
      }
      else {
        cVar18 = '\x04';
        if ((*(byte *)((long)param_4 + 0xac) &
            *(uint *)((long)param_4 + 0x1ac) < *(uint *)(param_4 + 0x37)) == 0) {
          cVar18 = '\x02';
        }
        uVar8 = 0;
        if ((char)param_4[0xc] == cVar18) {
          lVar21 = param_4[0x14];
          func_0x00010748f240();
          dVar28 = (double)(ulong)(uint)(float)param_2;
          func_0x0001077512dc(&uStack_320);
          lStack_238 = lVar21;
          func_0x000107751334(&uStack_690,&uStack_320);
          func_0x000107267da8(&uStack_320);
          if ((*(int *)(lVar19 + 0x160) == 0) || ((*(byte *)(lVar19 + 0x140) >> 1 & 1) != 0)) {
            func_0x00010748f8ac();
            func_0x00010748f4d8();
            param_2 = dVar28;
            func_0x00010748f460();
            if (SUB84(dVar28,0) == 0.0) {
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              uVar8 = 1;
              goto LAB_107487c58;
            }
            if (SUB84(dVar28,0) < 1.0) goto LAB_107487824;
          }
          else {
LAB_107487824:
            plVar22 = (long *)param_4[3];
            func_0x00010748fe1c();
            uStack_4b0._0_4_ = (uint)extraout_x9;
            uStack_4b0._4_4_ = (undefined4)((ulong)extraout_x9 >> 0x20);
            dVar28 = 5.41108926699603e-312;
            fStack_31c = 9.80909e-45;
            fStack_318 = 3.57331e-43;
            uStack_314 = 0xff;
            uStack_310 = 0x101;
            uStack_30e = 2;
            uStack_4a8 = extraout_w8;
            func_0x00010748f79c();
            func_0x00010748f9a8();
            puVar4 = (undefined8 *)((undefined8 *)param_3[5])[1];
            for (puVar17 = *(undefined8 **)param_3[5]; puVar17 != puVar4; puVar17 = puVar17 + 1) {
              uVar31 = *puVar17;
              func_0x00010748fefc();
              FUN_1074e3c98();
              plVar12 = (long *)0x0;
              if (plVar22 != (long *)0x0) {
                lVar26 = *plVar22;
                lVar21 = lVar26 + 0x110;
                func_0x00010748f814(param_3[3]);
                plVar12 = (long *)(lVar26 + 0x638);
                func_0x00010748f81c(param_3[3]);
                if ((*(char *)(*(long *)(lVar21 + 0x20) + 0x10) != '\x01') ||
                   (fVar34 = *(float *)(*(long *)(lVar21 + 0x20) + 8),
                   dVar28 = (double)(ulong)(uint)fVar34, fVar34 < 1.0)) {
                  iVar9 = (int)param_4[0x12];
                  uStack_320 = 0x18;
                  uStack_31f = 0;
                  uStack_31e = 0;
                  uStack_31d = 0;
                  fStack_318 = SUB84(plVar12,0);
                  uStack_314 = (undefined4)((ulong)plVar12 >> 0x20);
                  uStack_310 = 2;
                  uStack_30e = 0;
                  uStack_30d = 0;
                  func_0x00010748f6f8();
                  uStack_2e8 = 0xf01;
                  FUN_1073ca29c(auStack_4f8);
                  if (CONCAT44(auStack_4f8[1],auStack_4f8[0]) != 0) {
                    func_0x00010748f394();
                    (*extraout_x8_03)();
                    if (iVar9 == 2) {
                      func_0x00010748f240();
                      dVar28 = (double)(ulong)(uint)(float)dVar28;
                      func_0x00010748f7fc(dVar28,param_4[3],CONCAT44(auStack_4f8[1],auStack_4f8[0]))
                      ;
                      func_0x00010748f454();
                      (**(code **)(extraout_x8_04 + 0x58))();
                      func_0x00010748f440(param_4[3]);
                      func_0x00010748f38c();
                      func_0x00010748f3a4();
                      func_0x00010748f6dc();
                      plVar12 = param_4;
                      func_0x00010748fb54(param_4,uVar31);
                      func_0x00010748f8dc();
                      func_0x00010748f63c();
                      plVar22 = (long *)(lVar26 + 0x48);
                      while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
                        plVar12 = (long *)param_4[3];
                        func_0x00010748f558();
                        func_0x00010748f38c();
                        func_0x00010748f9b4();
                        func_0x00010748f7c8();
                        func_0x00010748f75c();
                        puVar5 = *(undefined4 **)(plVar22[3] + 0x68);
                        for (puVar24 = *(undefined4 **)(plVar22[3] + 0x60); puVar24 != puVar5;
                            puVar24 = puVar24 + 10) {
                          func_0x00010748f434(param_4[3],*puVar24);
                          (*extraout_x8_05)();
                          plVar12 = (long *)param_4[3];
                          uStack_320 = 4;
                          func_0x00010748f914();
                          func_0x00010748f794();
                        }
                      }
                      func_0x00010748fb44();
                      goto LAB_1074879f0;
                    }
                  }
                  func_0x00010748fb44();
                  break;
                }
              }
LAB_1074879f0:
              plVar22 = plVar12;
            }
          }
          fVar34 = *(float *)(lVar19 + 0xec);
          param_2 = (double)(ulong)(uint)fVar34;
          if ((int)param_3[0x52] == 0) {
            FUN_10742c194(&uStack_320);
          }
          else {
            FUN_10742c200(&uStack_320);
          }
          uStack_6c8 = 0;
          uStack_6c0 = 0;
          uStack_6d0 = 0;
          puVar4 = (undefined8 *)((undefined8 *)param_3[5])[1];
          for (puVar17 = *(undefined8 **)param_3[5]; uVar8 = puVar17 == puVar4, !(bool)uVar8;
              puVar17 = puVar17 + 1) {
            uVar31 = *puVar17;
            plVar22 = param_3;
            FUN_1074e3c98(param_3,uVar31,(char)param_4[0xc]);
            if (plVar22 != (long *)0x0) {
              lVar23 = *plVar22;
              lVar21 = lVar23 + 0x110;
              func_0x00010748f814(param_3[3]);
              lVar26 = lVar23 + 0x638;
              func_0x00010748f81c(param_3[3]);
              func_0x00010748fed4();
              if ((bool)uVar8) {
                dVar28 = (double)(ulong)*(uint *)(extraout_x8_09 + 8);
LAB_107487e14:
                if (SUB84(dVar28,0) < 1.0) goto LAB_107487e1c;
                func_0x00010748fe1c(param_4[3]);
                auStack_4f8[0] = (uint)extraout_x9_01;
                auStack_4f8[1] = (uint)((ulong)extraout_x9_01 >> 0x20);
                uStack_4b0._4_4_ = 7;
                uStack_4a8 = 0xff;
                uStack_4a4 = 0xff;
                uStack_4a0 = CONCAT53(uStack_4a0._3_5_,0x20101);
                auStack_4f8[2] = extraout_w8_01;
                func_0x00010748f79c();
                func_0x00010748f99c();
              }
              else {
                if ((*(int *)(lVar19 + 0x160) == 0) || ((*(byte *)(lVar19 + 0x140) >> 1 & 1) != 0))
                {
                  func_0x00010748f240();
                  dVar28 = (double)(ulong)(uint)(float)param_2;
                  func_0x0001077512dc(&uStack_4b0);
                  lStack_3c8 = param_4[0x14];
                  auStack_4f8[0] = auStack_4f8[0] & 0xffffff00;
                  uStack_4c0 = 0;
                  uStack_4b8 = 0;
                  FUN_1074884f0(puVar1,&uStack_4b0,auStack_4f8);
                  param_2 = dVar28;
                  func_0x00010724b3d8(auStack_4f8);
                  func_0x000107267da8(&uStack_4b0);
                  goto LAB_107487e14;
                }
LAB_107487e1c:
                auStack_4f8[2] = (uint)param_4[0x36];
                auStack_4f8[0] = 2;
                auStack_4f8[1] = 0;
                uStack_4b0._4_4_ = 7;
                uStack_4a8 = 0;
                uStack_4a4 = 0;
                uStack_4a0 = CONCAT53(uStack_4a0._3_5_,0x10101);
                func_0x00010748f79c(param_4[3]);
                func_0x00010748f99c();
              }
              plVar22 = (long *)(lVar23 + 0x48);
              while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
                FUN_10748ee94(&uStack_4b0,plVar22[3]);
                uStack_470 = 0;
                uStack_468 = 0;
                uStack_460 = 0;
                func_0x000104c2f64c(auStack_458);
                func_0x000104c2f64c(auStack_420);
                uStack_3e8 = 1;
                uStack_3e0 = 0;
                uStack_3a8 = 0;
                func_0x0001073730ac(auStack_3a0);
                uStack_390 = 0;
                uStack_370 = 0;
                uStack_368 = 0;
                uStack_358 = 0;
                func_0x00010748c200(&uStack_6d0,&uStack_4b0);
                func_0x0001072bc64c(&uStack_4b0);
                auStack_4f8[2] = 0;
                auStack_4f8[3] = 0;
                auStack_4f8[0] = 0;
                auStack_4f8[1] = 0;
                uVar13 = plVar22[3];
                func_0x000104c2d614();
                if ((uVar13 & 1) == 0) {
                  FUN_10742e62c(&uStack_4b0,param_4[8],plVar22[3]);
                  FUN_1074893f4(auStack_4f8,&uStack_4b0);
                  func_0x0001074332d8(&uStack_4b0);
                  lVar14 = CONCAT44(auStack_4f8[1],auStack_4f8[0]);
                  if (lVar14 == 0) {
                    uVar33 = 0;
                    lVar20 = plVar22[3];
                    uVar13 = (ulong)*(byte *)(lVar20 + 0x38);
                    goto LAB_107487f9c;
                  }
                  lVar20 = lVar14;
                  FUN_10742c268();
                  if ((int)lVar20 != 0) {
                    lVar20 = plVar22[3];
                    uVar13 = (ulong)*(byte *)(lVar20 + 0x38);
                    goto LAB_107487f70;
                  }
                }
                else {
                  lVar14 = CONCAT44(auStack_4f8[1],auStack_4f8[0]);
                  lVar20 = plVar22[3];
                  uVar13 = (ulong)*(byte *)(lVar20 + 0x38);
                  if (lVar14 == 0) {
                    uVar33 = 0;
                  }
                  else {
LAB_107487f70:
                    if (*(long *)(lVar14 + 0x10) == 0) {
                      uVar33 = (uint)(*(long *)(lVar14 + 0xa8) != 0);
                    }
                    else {
                      uVar33 = 1;
                    }
                  }
LAB_107487f9c:
                  bVar6 = *(byte *)(lVar20 + 0x3a);
                  uVar16 = 0x10;
                  if ((int)uVar13 == 0) {
                    uVar16 = 0;
                  }
                  uVar2 = uVar16 | 4;
                  if (uVar33 == 0) {
                    uVar2 = uVar16;
                  }
                  uVar16 = uVar2 | 0x40;
                  if (0.0 >= fVar34) {
                    uVar16 = uVar2;
                  }
                  uVar2 = uVar16 | 8;
                  if (bVar6 == 0) {
                    uVar2 = uVar16;
                  }
                  lVar14 = param_4[0x12];
                  uStack_4b0._0_4_ = 0x18;
                  uStack_4a8 = (undefined4)lVar26;
                  uStack_4a4 = (undefined4)((ulong)lVar26 >> 0x20);
                  param_2 = (double)(ulong)*(uint *)(param_4 + 0xf);
                  uStack_4a0 = CONCAT44(*(uint *)(param_4 + 0xf),
                                        uVar2 | (uint)*(byte *)(param_3 + 0x1e3) << 5);
                  uStack_498 = uStack_498 & 0xffffffffff000000;
                  uStack_490 = 0;
                  uStack_488 = 0;
                  uStack_480 = 0;
                  uStack_47c = 0x1010101;
                  uStack_478 = 0xf01;
                  FUN_1073ca29c(&uStack_6f8,lVar14,
                                lVar23 + 0x418 + (ulong)*(byte *)(param_3 + 0x1e3) * 0x100 +
                                uVar13 * 0x80 + (ulong)uVar33 * 0x40 + (ulong)(0.0 < fVar34) * 0x20
                                + (ulong)bVar6 * 0x10,&uStack_4b0);
                  iVar9 = (int)lVar14;
                  if (CONCAT44(uStack_6f4,uStack_6f8) != 0) {
                    func_0x00010748f394();
                    (*extraout_x8_10)();
                    if (iVar9 == 2) {
                      func_0x00010748f240();
                      param_2 = (double)(ulong)(uint)(float)param_2;
                      FUN_107489294(param_4[3],CONCAT44(uStack_6f4,uStack_6f8),lVar21,puVar1,
                                    lVar26 + 0x18);
                      func_0x00010748f454();
                      (**(code **)(extraout_x8_11 + 0x58))();
                      func_0x00010748f440(param_4[3]);
                      func_0x00010748f38c();
                      func_0x00010748f558(param_4[3]);
                      func_0x00010748f38c();
                      if (bVar6 != 0) {
                        func_0x00010748f558(param_4[3]);
                        func_0x00010748f850();
                      }
                      func_0x00010748f454();
                      (**(code **)(extraout_x8_12 + 0x90))();
                      func_0x00010748f3a4();
                      func_0x00010748f6dc();
                      func_0x00010748f558(param_4[3]);
                      (*extraout_x8_13)();
                      func_0x00010748fb54(param_4,uVar31);
                      func_0x00010748f8dc();
                      func_0x00010748f63c();
                      if (uVar33 != 0) {
                        puVar32 = &uStack_320;
                        if ((undefined1 *)CONCAT44(auStack_4f8[1],auStack_4f8[0]) !=
                            (undefined1 *)0x0) {
                          puVar32 = (undefined1 *)CONCAT44(auStack_4f8[1],auStack_4f8[0]);
                        }
                        uStack_4b0._0_4_ = (uint)uStack_4b0 & 0xffffff00;
                        uStack_4a0 = 0;
                        uStack_498 = 0;
                        uStack_4a8 = 0;
                        uStack_4a4 = 0;
                        uVar27 = *(undefined8 *)(param_4[8] + 0x1e0);
                        uStack_6a0 = 0;
                        uStack_698 = 0;
                        func_0x00010748c568(&uStack_6a0);
                        FUN_10742bf24(puVar32,&uStack_4b0,uVar27,&uStack_6a0);
                        func_0x00010748fd44();
                        uVar27 = *(undefined8 *)(param_4[8] + 0x1e0);
                        uStack_6a0 = 0;
                        uStack_698 = 0;
                        func_0x00010748c568(&uStack_6a0);
                        FUN_10742bfcc(puVar32,&uStack_4b0,uVar27,&uStack_6a0);
                        func_0x00010748fd44();
                        func_0x00010748f454();
                        (**(code **)(extraout_x8_14 + 0x70))();
                        func_0x00010748f454();
                        (**(code **)(extraout_x8_15 + 0x70))();
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                  (&uStack_4a8);
                      }
                      plVar12 = (long *)param_4[3];
                      FUN_1074e6de8(param_4[6],*(undefined8 *)(param_4[8] + 0x1e8));
                      func_0x00010748f38c(*(undefined8 *)(*plVar12 + 0x70),plVar12);
                      iVar9 = (int)param_4[6];
                      func_0x0001074e6e30();
                      if (iVar9 != 0) {
                        plVar12 = (long *)param_4[3];
                        func_0x0001074e6e78(param_4[6],*(undefined8 *)(param_4[8] + 0x1e0));
                        func_0x00010748f850(*(undefined8 *)(*plVar12 + 0x70),plVar12);
                      }
                      func_0x00010748fbac(&uStack_6b8);
                      func_0x00010748f7c8();
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                                (&uStack_6b8);
                      puVar5 = *(undefined4 **)(plVar22[3] + 0x68);
                      for (puVar24 = *(undefined4 **)(plVar22[3] + 0x60); puVar24 != puVar5;
                          puVar24 = puVar24 + 10) {
                        func_0x00010748f434(param_4[3],*puVar24);
                        (*extraout_x8_16)();
                        uStack_4b0._0_4_ = CONCAT31(uStack_4b0._1_3_,4);
                        uStack_4b0._4_4_ = 0;
                        func_0x00010748f794(*(undefined8 *)(*(long *)param_4[3] + 0x138),
                                            (long *)param_4[3],&uStack_4b0,puVar24[6]);
                      }
                    }
                  }
                  func_0x00010730b734(&uStack_6f8);
                }
                func_0x0001074332d8(auStack_4f8);
              }
            }
          }
          func_0x00010748f764();
          FUN_10748be74(param_1,&uStack_6d0);
          func_0x00010748fb3c();
          goto LAB_107487c58;
        }
      }
    }
    else if (*(char *)(lVar19 + 0x18) != '\0') {
      lVar21 = param_4[0x14];
      func_0x00010748f240();
      param_2 = (double)(ulong)(uint)(float)param_2;
      func_0x0001077512dc(&uStack_320);
      lStack_238 = lVar21;
      func_0x000107751334(&uStack_4b0,&uStack_320);
      func_0x000107267da8(&uStack_320);
      uStack_320 = 0;
      lVar21 = param_3[0x1e2] + 0x2d0;
      func_0x00010724e2c8(lVar21,&uStack_320);
      iVar9 = *(int *)(lVar19 + 0x160);
      if ((int)lVar21 == 0) {
        if ((iVar9 == 0) || ((*(byte *)(lVar19 + 0x140) >> 1 & 1) != 0)) {
          func_0x00010748f8ac();
          fVar34 = SUB84(param_2,0);
          func_0x00010748f4d8();
          func_0x00010748f460();
          bVar7 = fVar34 < 1.0;
          goto LAB_107487a18;
        }
        bVar7 = true;
      }
      else {
        func_0x00010748f8ac();
        fVar34 = SUB84(param_2,0);
        func_0x00010748f4d8();
        func_0x00010748f460();
        param_2 = 5.26354424712089e-315;
        bVar7 = fVar34 < 1.0 || iVar9 != 0;
        if (iVar9 == 0) {
LAB_107487a18:
          param_2 = 5.26354424712089e-315;
          if (fVar34 == 0.0) {
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            uVar8 = 1;
            goto LAB_107487c58;
          }
        }
      }
      uStack_6d1 = (int)param_3[0xc3] != 0;
      if ((int)param_3[0x52] == 0) {
        FUN_10742c194(&uStack_320);
      }
      else {
        FUN_10742c200(&uStack_320);
      }
      puStack_678 = &uStack_320;
      puStack_670 = &uStack_6d1;
      cVar18 = '\x04';
      if ((*(byte *)((long)param_4 + 0xac) &
          *(uint *)((long)param_4 + 0x1ac) < *(uint *)(param_4 + 0x37)) == 0) {
        cVar18 = '\x02';
      }
      uStack_6b8 = 0;
      uStack_6b0 = 0;
      uStack_6a8 = 0;
      cVar15 = (char)param_4[0xc];
      uStack_690 = param_4;
      plStack_688 = param_3;
      puStack_680 = puVar1;
      if (cVar15 == cVar18) {
        FUN_1074d7698(param_4);
        if (bVar7) {
          func_0x00010748f5a0();
          (*extraout_x8_06)();
          func_0x00010748fe1c();
          uStack_6f4 = 7;
          uStack_6f0 = 0xff;
          uStack_6ec = 0xff;
          func_0x00010748fe6c();
          uStack_6e6 = 2;
          auStack_4f8[3] = 0;
          auStack_4f8[4] = 0;
          auStack_4f8[1] = 0;
          auStack_4f8[2] = 0;
          auStack_4f8[5] = 0;
          auStack_4f8[6] = 0;
          func_0x00010002b838(&uStack_6d0,&DAT_10f2dd08d);
          func_0x00010748f24c();
          FUN_107488510();
          func_0x00010748f6d4();
          func_0x00010748fb34();
          func_0x00010748f5a0();
          (*extraout_x8_07)();
          uStack_6a0 = 2;
          uStack_698 = CONCAT44(uStack_698._4_4_,(int)param_4[0x36]);
          param_2 = 3.45845952088873e-323;
          uStack_6f4 = 7;
          uStack_6f0 = 0;
          uStack_6ec = 0;
          func_0x00010748fe6c();
          func_0x00010748f26c(1);
          func_0x00010748f76c();
          func_0x00010748f24c();
          FUN_107488510();
        }
        else {
          func_0x00010748f5a0();
          (*extraout_x8_08)();
          func_0x00010748fe1c();
          uStack_698 = CONCAT44(uStack_698._4_4_,extraout_w8_00);
          param_2 = 5.41108926699603e-312;
          uStack_6f4 = 7;
          uStack_6f0 = 0xff;
          uStack_6ec = 0xff;
          uStack_6a0 = extraout_x9_00;
          func_0x00010748fe6c();
          func_0x00010748f26c(2);
          func_0x00010748f76c();
          func_0x00010748f24c();
          FUN_107488510();
        }
        func_0x00010748f6d4();
        func_0x00010748fb34();
        cVar15 = (char)param_4[0xc];
      }
      uVar8 = 0;
      if ((cVar15 == '\b') && (uVar8 = *(char *)((long)param_3 + 0xf19) == '\x01', (bool)uVar8)) {
        uStack_6a0 = 0x103;
        uStack_698 = CONCAT44(uStack_698._4_4_,0x3f800000);
        param_2 = 3.45845952088873e-323;
        uStack_6f4 = 7;
        uStack_6f0 = 0;
        uStack_6ec = 0;
        func_0x00010748fe6c();
        func_0x00010748f26c(1);
        func_0x00010002b838(&uStack_6d0,&UNK_10f4159b7);
        func_0x00010748f24c();
        FUN_107488510();
        func_0x00010748f6d4();
      }
      FUN_10748be74(param_1,&uStack_6b8);
      func_0x0001072bc5c4(&uStack_6b8);
      func_0x00010748f764();
LAB_107487c58:
      func_0x000107267da8();
      goto LAB_107487c98;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_107487c98:
  func_0x00010748f188(uStack_98);
  if ((bool)uVar8) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010748f460();
  puVar17 = &uStack_690;
  func_0x000107267da8();
  func_0x00010748f298();
  puVar10 = (uint *)(puVar17 + 0x21);
  if (*(int *)(puVar17 + 0x27) == 0) {
    return (double)(ulong)*puVar10;
  }
  dVar28 = 5.26354424712089e-315;
  func_0x00010727f740();
  if (((ulong)puVar10 >> 0x20 & 1) == 0) {
    if (*(char *)((long)puVar17 + 0x134) == '\x01') {
      dVar28 = (double)(ulong)*(uint *)(puVar17 + 0x26);
    }
  }
  else {
    dVar28 = (double)((ulong)puVar10 & 0xffffffff);
  }
  return dVar28;
}



/* Entry: 1074884f0; end: 10748850f;  */

undefined4 FUN_1074884f0(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x108);
  if (*(int *)(param_1 + 0x138) != 0) {
    uVar2 = 0x3f800000;
    func_0x00010727f740();
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_1 + 0x134) == '\x01') {
        uVar2 = *(undefined4 *)(param_1 + 0x130);
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *puVar1;
}



/* Entry: 107488510; end: 107489257;  */

float ** FUN_107488510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      long *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      float *param_9,int param_10)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  float **ppfVar8;
  long *plVar9;
  long *plVar10;
  float **ppfVar11;
  char *pcVar12;
  float *pfVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long lVar14;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 *puVar15;
  long *plVar16;
  float *unaff_x20;
  ulong uVar17;
  long lVar18;
  float *unaff_x21;
  long lVar19;
  float *unaff_x22;
  float *pfVar20;
  uint uVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  double dVar26;
  undefined4 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined4 auStack_5b8 [2];
  float *pfStack_5b0;
  float *pfStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  float *pfStack_590;
  float *pfStack_588;
  float *pfStack_580;
  float **ppfStack_578;
  undefined1 **ppuStack_570;
  code *pcStack_568;
  undefined1 *puStack_550;
  code *pcStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 *puStack_530;
  undefined8 *puStack_528;
  long lStack_520;
  float **ppfStack_518;
  float *pfStack_510;
  float *pfStack_508;
  float *pfStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  ulong uStack_4c8;
  int iStack_4bc;
  float afStack_4b8 [6];
  long alStack_4a0 [2];
  undefined8 auStack_490 [4];
  float afStack_470 [4];
  float fStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  float fStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  float fStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  float fStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  float fStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  float fStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  float fStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  float fStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  float *pfStack_398;
  undefined8 uStack_390;
  float *apfStack_388 [9];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  ulong uStack_220;
  float fStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  uint auStack_204 [19];
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [56];
  undefined1 uStack_148;
  undefined1 uStack_140;
  undefined1 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 uStack_f0;
  undefined1 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_b8;
  undefined8 uStack_a8;
  
  plVar16 = param_5;
  uStack_540 = param_7;
  uStack_538 = param_8;
  pfStack_500 = param_9;
  uStack_4f8 = param_6;
  iStack_4bc = param_10;
  func_0x00010748f1bc();
  plVar1 = (long *)plVar16[1];
  ppfVar8 = *(float ***)(*plVar16 + 0x18);
  uStack_210._2_1_ = 1;
  uStack_210._0_1_ = 1;
  uStack_210._1_1_ = 1;
  pfVar20 = (float *)&uStack_210;
  uStack_a8 = extraout_x8;
  (**(code **)(*ppfVar8 + 0x22))();
  puVar15 = *(undefined8 **)plVar1[5];
  puStack_530 = (undefined8 *)((undefined8 *)plVar1[5])[1];
  do {
    uVar6 = puVar15 == puStack_530;
    if ((bool)uVar6) {
      func_0x00010748f188(uStack_a8);
      if ((bool)uVar6) {
        return ppfVar8;
      }
      ___stack_chk_fail();
      func_0x00010730b734(alStack_4a0);
      ppfVar11 = &pfStack_398;
      func_0x0001074332d8();
      func_0x00010748f298();
      pcStack_548 = FUN_107489258;
      puStack_550 = &stack0xfffffffffffffff0;
      FUN_107451224();
      if (*ppfVar11 == (float *)0x0) {
        pcVar12 = "map::at:  key not found";
        func_0x000104c03f28();
        uStack_5a0 = 0xff00000007;
        uStack_598 = 0x3f800000;
        pcStack_568 = FUN_107489294;
        pfStack_590 = unaff_x22;
        pfStack_588 = unaff_x21;
        pfStack_580 = unaff_x20;
        ppfStack_578 = ppfVar8;
        ppuStack_570 = &puStack_550;
        (**(code **)(*(float **)pcVar12 + 0x10))();
        auStack_5b8[0] = 0;
        func_0x00010748f170(*(undefined8 *)pfVar20);
        func_0x00010748f170(*(undefined8 *)(pfVar20 + 2));
        func_0x00010748f170(*(undefined8 *)(pfVar20 + 4));
        func_0x00010748f170(*(undefined8 *)(pfVar20 + 6));
        func_0x00010748f170(*(undefined8 *)(pfVar20 + 8));
        func_0x00010748f170(*(undefined8 *)(pfVar20 + 10));
        func_0x00010748f170(*(undefined8 *)(pfVar20 + 0xc));
        func_0x00010748f170(*(undefined8 *)(pfVar20 + 0xe));
        auStack_5b8[0] = 0;
        func_0x00010748f434(*(undefined8 *)pfVar20);
        (*extraout_x8_15)();
        func_0x00010748f434(*(undefined8 *)(pfVar20 + 2));
        func_0x00010748f200();
        func_0x00010748f434(*(undefined8 *)(pfVar20 + 4));
        func_0x00010748f200();
        func_0x00010748f434(*(undefined8 *)(pfVar20 + 6));
        func_0x00010748f200();
        func_0x00010748f434(*(undefined8 *)(pfVar20 + 8));
        func_0x00010748f200();
        func_0x00010748f434(*(undefined8 *)(pfVar20 + 10));
        func_0x00010748f200();
        func_0x00010748f434(*(undefined8 *)(pfVar20 + 0xc));
        func_0x00010748f200();
        func_0x00010748f434(*(undefined8 *)(pfVar20 + 0xe));
        func_0x00010748f200();
        auStack_5b8[0] = 8;
        if (*(char *)(pfVar20 + 0x44) == '\x01') {
          pfVar13 = pfVar20 + 0x38;
          func_0x00010745d404();
        }
        else {
          pfVar13 = (float *)0x0;
        }
        pfStack_5a8 = pfVar20 + 0x20;
        pfStack_5b0 = pfVar13;
        (**(code **)(*(float **)pcVar12 + 0x12))(pcVar12,auStack_5b8,param_9);
        return (float **)pcVar12;
      }
      return (float **)(*ppfVar11 + 0x16);
    }
    unaff_x21 = (float *)*puVar15;
    plVar16 = plVar1;
    pfVar20 = unaff_x21;
    puStack_528 = puVar15;
    FUN_1074e3c98(plVar1,unaff_x21,*(undefined1 *)(*param_5 + 0x60));
    ppfVar8 = (float **)0x0;
    if (plVar16 != (long *)0x0) {
      lStack_4d0 = *plVar16;
      ppfVar8 = (float **)(lStack_4d0 + 0x110);
      func_0x00010748f814(plVar1[3]);
      ppfStack_518 = ppfVar8;
      func_0x00010748fed4();
      if ((bool)uVar6) {
        fVar23 = *(float *)(extraout_x8_00 + 8);
        bVar5 = true;
        if ((iStack_4bc == 1) && (bVar5 = false, !NAN(fVar23))) {
          bVar5 = fVar23 < 1.0;
        }
        if (!bVar5) goto LAB_107489120;
        if ((iStack_4bc != 0) || (fVar23 < 1.0)) goto LAB_10748865c;
        func_0x00010748f5b4();
        uStack_2b8 = *(undefined4 *)(extraout_x8_01 + 0x1b0);
        uStack_2c0 = 0x103;
        uStack_20c = 7;
        fStack_208 = 3.57331e-43;
        auStack_204[0] = 0xff;
        auStack_204[1]._0_3_ = 0x20101;
        func_0x00010748f79c();
        (*extraout_x8_02)();
      }
      else {
LAB_10748865c:
        func_0x00010748f5b4();
        func_0x00010748f79c();
        (*extraout_x8_03)();
      }
      bVar5 = iStack_4bc == 2;
      func_0x00010748fe4c();
      FUN_107501f88(&uStack_2c0,unaff_x21,extraout_x9 + 0x1e0);
      FUN_107501fdc(unaff_x21,&uStack_2c0);
      func_0x000107417744(*(undefined8 *)(*param_5 + 0x28),&uStack_2c0);
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      if (bVar5) {
        _memcpy(&uStack_340,&uStack_2c0,0x80);
        func_0x000107877034(&uStack_340,*(long *)(*param_5 + 0x30) + 0x1380,&uStack_340);
      }
      else {
        func_0x00010748fe4c();
        func_0x000107501f78(&uStack_210,unaff_x21,extraout_x9_00 + 0x1e0);
        _memcpy(&uStack_340,&uStack_210,0x80);
      }
      unaff_x22 = *(float **)(*param_5 + 0x28);
      FUN_107416bf8(unaff_x22);
      ppfVar8 = apfStack_388;
      pfVar20 = unaff_x22 + 0x220;
      _memcpy(ppfVar8,pfVar20,0x48);
      bVar2 = *(byte *)(unaff_x21 + 1);
      plVar16 = (long *)(lStack_4d0 + 0x48);
      pfStack_508 = (float *)(lStack_4d0 + 0x408);
      pfStack_510 = (float *)(lStack_4d0 + 0x3f8);
      lStack_520 = lStack_4d0 + 0x1f8;
      while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
        FUN_10748ee94(&uStack_210,plVar16[3]);
        auStack_204[0xd] = 0;
        auStack_204[0xe] = 0;
        auStack_204[0xf] = 0;
        auStack_204[0x10] = 0;
        auStack_204[0x11] = 0;
        auStack_204[0x12] = 0;
        func_0x000104c2f64c(auStack_1b8);
        func_0x000104c2f64c(auStack_180);
        uStack_148 = 1;
        uStack_140 = 0;
        uStack_108 = 0;
        func_0x0001073730ac(auStack_100);
        uStack_f0 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_b8 = 0;
        func_0x00010748c200(uStack_4f8,&uStack_210);
        func_0x0001072bc64c(&uStack_210);
        pfStack_398 = (float *)0x0;
        uStack_390 = 0;
        iVar7 = (int)plVar16[3];
        func_0x000104c2d614();
        unaff_x21 = pfStack_398;
        if (iVar7 == 0) {
          FUN_10742e62c(&uStack_210,*(undefined8 *)(*param_5 + 0x40),plVar16[3]);
          pfVar20 = (float *)&uStack_210;
          FUN_1074893f4(&pfStack_398);
          func_0x0001074332d8(&uStack_210);
          unaff_x21 = pfStack_398;
          if ((pfStack_398 == (float *)0x0) ||
             (pfVar13 = pfStack_398, FUN_10742c268(), ((ulong)pfVar13 & 1) != 0))
          goto LAB_107488834;
        }
        else {
LAB_107488834:
          if (unaff_x21 == (float *)0x0) {
            uVar17 = 0;
          }
          else if (*(long *)(unaff_x21 + 4) == 0) {
            uVar17 = (ulong)(*(long *)(unaff_x21 + 0x2a) != 0);
          }
          else {
            uVar17 = 1;
          }
          lVar19 = param_5[2];
          fVar23 = *(float *)(lVar19 + 0xc4);
          uVar28 = (ulong)(uint)fVar23;
          if ((int)plVar1[0x1ae] == 0) {
            uStack_3c0 = *(ulong *)(lVar19 + 0x14c);
            uStack_3b8 = uStack_3c0;
            uStack_3b0 = uStack_3c0;
            uStack_3a8 = uStack_3c0;
          }
          else {
            uStack_3b8 = *(ulong *)(lVar19 + 0x2ec);
            uStack_3c0 = *(ulong *)(lVar19 + 0x2e4);
            uStack_3a8 = *(ulong *)(lVar19 + 0x2fc);
            uVar28 = *(ulong *)(lVar19 + 0x2f4);
            uStack_3b0 = uVar28;
          }
          if ((int)plVar1[0x1c9] == 0) {
            uStack_3e0 = *(ulong *)(lVar19 + 0x304);
            uStack_3d8 = uStack_3e0;
            uStack_3d0 = uStack_3e0;
            uStack_3c8 = uStack_3e0;
          }
          else {
            uStack_3d8 = *(ulong *)(lVar19 + 0x314);
            uStack_3e0 = *(ulong *)(lVar19 + 0x30c);
            uStack_3c8 = *(ulong *)(lVar19 + 0x324);
            uVar28 = *(ulong *)(lVar19 + 0x31c);
            uStack_3d0 = uVar28;
          }
          uVar27 = (undefined4)uVar28;
          bVar3 = *(byte *)(plVar16[3] + 0x38);
          uVar29 = *(undefined8 *)(lVar19 + 0x158);
          uStack_4e0 = *(undefined8 *)(lVar19 + 0x80);
          uStack_4d8 = 0;
          uVar25 = *(undefined8 *)(lVar19 + 0xc0);
          uStack_4e8 = 0;
          uStack_4c8 = (ulong)*(byte *)(plVar16[3] + 0x3a);
          uStack_4f0 = uVar25;
          FUN_107489418((int)plVar1[0x131],lVar19);
          fVar24 = (float)uVar25;
          uStack_3e8 = (undefined4)param_3;
          uStack_3e4 = (undefined4)param_4;
          fStack_3f0 = fVar24;
          uStack_3ec = uVar27;
          func_0x000107489438((int)plVar1[0x117],lVar19);
          uStack_3f8 = (undefined4)param_3;
          uStack_3f4 = (undefined4)param_4;
          fStack_400 = fVar24;
          uStack_3fc = uVar27;
          func_0x000107489458((int)plVar1[0x124],lVar19);
          uStack_408 = (undefined4)param_3;
          uStack_404 = (undefined4)param_4;
          fStack_410 = fVar24;
          uStack_40c = uVar27;
          func_0x000107486f44((int)plVar1[0x95],*(undefined1 *)(lVar19 + 0x154),
                              *(undefined4 *)(lVar19 + 0x28c));
          uStack_418 = (undefined4)param_3;
          uStack_414 = (undefined4)param_4;
          fStack_420 = fVar24;
          uStack_41c = uVar27;
          func_0x000107489478((int)plVar1[0x13e],lVar19);
          uStack_428 = (undefined4)param_3;
          uStack_424 = (undefined4)param_4;
          fStack_430 = fVar24;
          uStack_42c = uVar27;
          func_0x000107489498((int)plVar1[0x10a],lVar19);
          uStack_438 = (undefined4)param_3;
          uStack_434 = (undefined4)param_4;
          fStack_440 = fVar24;
          uStack_43c = uVar27;
          func_0x0001074894b8((int)plVar1[0x1e1],lVar19);
          uStack_448 = (undefined4)param_3;
          uStack_444 = (undefined4)param_4;
          fStack_450 = fVar24;
          uStack_44c = uVar27;
          func_0x0001074894d8((int)plVar1[0x19f],lVar19);
          uStack_458 = (undefined4)param_3;
          uStack_454 = (undefined4)param_4;
          fStack_460 = fVar24;
          uStack_45c = uVar27;
          func_0x0001074894f8((int)plVar1[0x161],lVar19);
          afStack_470[2] = (float)param_3;
          afStack_470[3] = (float)param_4;
          if ((int)plVar1[0x17c] == 0) {
            auStack_490[0] = *(undefined8 *)(lVar19 + 0x2a4);
            auStack_490[1] = auStack_490[0];
            auStack_490[2] = auStack_490[0];
            auStack_490[3] = auStack_490[0];
          }
          else {
            auStack_490[1] = *(undefined8 *)(lVar19 + 0x2b4);
            auStack_490[0] = *(undefined8 *)(lVar19 + 0x2ac);
            auStack_490[3] = *(undefined8 *)(lVar19 + 0x2c4);
            auStack_490[2] = *(undefined8 *)(lVar19 + 700);
          }
          unaff_x22 = pfStack_508;
          if ((iStack_4bc != 2) && (unaff_x22 = pfStack_510, iStack_4bc != 1)) {
            unaff_x22 = (float *)(lStack_520 + (ulong)*(byte *)(plVar1 + 0x1e3) * 0x100 +
                                  (ulong)bVar3 * 0x80 + uVar17 * 0x40 + (ulong)(0.0 < fVar23) * 0x20
                                 + uStack_4c8 * 0x10);
          }
          unaff_x21 = (float *)(lStack_4d0 + 0x638);
          afStack_470[0] = fVar24;
          afStack_470[1] = (float)uVar27;
          func_0x00010748f81c(plVar1[3]);
          if (iStack_4bc == 0) {
            uVar4 = (uint)bVar3 << 3 | (int)uVar17 << 2;
            uVar21 = uVar4 | 0x80;
            if (fVar23 <= 0.0) {
              uVar21 = uVar4;
            }
            uVar21 = uVar21 | (int)uStack_4c8 << 5 | (uint)*(byte *)(plVar1 + 0x1e3) << 4;
            unaff_x20 = (float *)0xf;
          }
          else if (iStack_4bc == 1) {
            unaff_x20 = (float *)0xf;
            uVar21 = 2;
          }
          else {
            lVar19 = *(long *)(*param_5 + 0x30);
            func_0x0001074e6e78(lVar19,*(undefined8 *)(*(long *)(*param_5 + 0x40) + 0x1e0));
            unaff_x20 = (float *)(ulong)*(byte *)(lVar19 + 0xc);
            uVar21 = 1;
          }
          iVar7 = (int)*(undefined8 *)(*param_5 + 0x90);
          uStack_210._0_1_ = 0x17;
          uStack_210._1_1_ = 0;
          uStack_210._2_1_ = 0;
          uStack_210._3_1_ = 0;
          fStack_208 = SUB84(unaff_x21,0);
          fVar23 = fStack_208;
          auStack_204[0] = (uint)((ulong)unaff_x21 >> 0x20);
          uVar4 = auStack_204[0];
          auStack_204[1] = uVar21;
          dVar26 = (double)(ulong)*(uint *)(*param_5 + 0x78);
          func_0x00010748f3f4(dVar26);
          pfVar20 = unaff_x22;
          FUN_1073ca29c(alStack_4a0);
          if (alStack_4a0[0] == 0) {
LAB_107488b14:
            if ((iStack_4bc == 0) && ((int)plVar1[0x1e5] != 0)) {
              uStack_220 = uStack_220 & 0xffffffffffffff00;
              fStack_218 = (float)((uint)fStack_218 & 0xffffff00);
              uStack_210._0_1_ = 0x17;
              uStack_210._1_1_ = 0;
              uStack_210._2_1_ = 0;
              uStack_210._3_1_ = 0;
              auStack_204[1] = (int)plVar1[0x1e5];
              dVar26 = (double)(ulong)*(uint *)(*param_5 + 0x78);
              fStack_208 = fVar23;
              auStack_204[0] = uVar4;
              func_0x00010748f3f4(dVar26,*(undefined8 *)(*param_5 + 0x90));
              FUN_1073ca29c(&fStack_230);
              pfVar20 = &fStack_230;
              FUN_1073ca610(alStack_4a0);
              iVar7 = (int)&fStack_230;
              func_0x00010730b734();
              if (alStack_4a0[0] != 0) {
                func_0x00010748f394();
                (*extraout_x8_05)();
                if (iVar7 == 2) {
                  uVar21 = *(uint *)(plVar1 + 0x1e5);
                  goto LAB_107488ba0;
                }
              }
            }
          }
          else {
            func_0x00010748f394();
            (*extraout_x8_04)();
            if (iVar7 != 2) goto LAB_107488b14;
            if (iStack_4bc == 0) {
LAB_107488ba0:
              *(uint *)(plVar1 + 0x1e5) = uVar21;
            }
            lVar19 = *param_5;
            func_0x00010748f2fc(*(undefined8 *)(lVar19 + 0x28));
            plVar9 = *(long **)(lVar19 + 0x18);
            param_9 = unaff_x21 + 6;
            FUN_107489294((float)dVar26,plVar9,alStack_4a0[0],ppfStack_518,param_5[2]);
            func_0x00010748f5b4();
            (**(code **)(*plVar9 + 0x58))();
            func_0x00010748f5b4();
            func_0x00010748f440();
            func_0x00010748f38c();
            pfVar20 = pfStack_398;
            if (pfStack_398 == (float *)0x0) {
              pfVar20 = (float *)param_5[3];
            }
            lVar14 = *param_5;
            plVar22 = *(long **)(lVar14 + 0x18);
            plVar9 = *(long **)(lVar14 + 0x30);
            lVar19 = *(long *)(lVar14 + 0x38);
            lVar18 = *(long *)(lVar14 + 0x40);
            lVar14 = plVar1[0x1e3];
            uVar25 = *(undefined8 *)pfVar20;
            fStack_208 = (float)*(undefined8 *)(pfVar20 + 2);
            auStack_204[0] = (uint)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20);
            uStack_210._0_1_ = (undefined1)uVar25;
            uStack_210._1_1_ = (undefined1)((ulong)uVar25 >> 8);
            uStack_210._2_1_ = (undefined1)((ulong)uVar25 >> 0x10);
            uStack_210._3_1_ = (undefined1)((ulong)uVar25 >> 0x18);
            uStack_20c = (undefined4)((ulong)uVar25 >> 0x20);
            fStack_230 = (float)*(undefined8 *)(pfVar20 + 0x28);
            fStack_22c = (float)((ulong)*(undefined8 *)(pfVar20 + 0x28) >> 0x20);
            fStack_218 = pfVar20[0x50];
            uStack_220 = *(ulong *)(pfVar20 + 0x4e);
            func_0x00010748fddc();
            func_0x00010748fe60();
            (*extraout_x8_06)();
            (**(code **)(*plVar22 + 0xa8))(plVar22,0x10,&fStack_230);
            (**(code **)(*plVar22 + 0xb0))(plVar22,0x11,&uStack_220);
            uStack_220 = plVar9[0x24d];
            fStack_218 = *(float *)(plVar9 + 0x24e);
            if (((*(byte *)(plVar9 + 0x25e) & 1) != 0) ||
               (uStack_214 = 0, (*(byte *)((long)plVar9 + 0x12f9) & 1) == 0)) {
              uStack_214 = (undefined4)plVar9[0x291];
            }
            fStack_228 = *(float *)(plVar9 + 0x292);
            fStack_230 = fStack_228 * *(float *)((long)plVar9 + 0x1274);
            fStack_22c = (float)plVar9[0x24f];
            param_4 = CONCAT44(fStack_228,fStack_22c);
            fVar23 = (float)((ulong)plVar9[0x24f] >> 0x20);
            param_3 = CONCAT44(fVar23,fStack_228);
            fStack_22c = fStack_22c * fStack_228;
            fStack_228 = fStack_228 * fVar23;
            uStack_224 = *(undefined4 *)((long)plVar9 + 0x1494);
            func_0x00010748fddc();
            (*extraout_x8_07)(plVar22,5,&uStack_220);
            func_0x00010748fddc();
            (*extraout_x8_08)(plVar22,6,&fStack_230);
            fStack_208 = 0.0;
            auStack_204[0] = 0;
            uStack_210._0_1_ = 0;
            uStack_210._1_1_ = 0;
            uStack_210._2_1_ = 0;
            uStack_210._3_1_ = 0;
            uStack_20c = 0;
            func_0x00010748fddc();
            func_0x00010748fe60();
            (*extraout_x8_09)();
            (**(code **)(*plVar22 + 0xa0))(0,plVar22,4);
            if ((char)lVar14 != '\0') {
              func_0x000107482794(&uStack_210,plVar9 + 0x280);
              func_0x00010748fe60(*(undefined8 *)(*plVar22 + 0xd0));
              (*extraout_x8_10)();
              (**(code **)(*plVar22 + 0xa0))((int)plVar9[0x290],plVar22,0xc);
            }
            uVar25 = *(undefined8 *)(lVar19 + 8);
            uStack_210._0_1_ = (undefined1)uVar25;
            uStack_210._1_1_ = (undefined1)((ulong)uVar25 >> 8);
            uStack_210._2_1_ = (undefined1)((ulong)uVar25 >> 0x10);
            uStack_210._3_1_ = (undefined1)((ulong)uVar25 >> 0x18);
            uStack_20c = (undefined4)((ulong)uVar25 >> 0x20);
            (**(code **)(*plVar22 + 0xa0))(*(undefined4 *)(lVar19 + 4),plVar22,8);
            func_0x00010748fe60(*(undefined8 *)(*plVar22 + 0xa8));
            (*extraout_x8_11)();
            uStack_210._0_1_ = 0;
            auStack_204[1] = 0;
            auStack_204[2] = 0;
            auStack_204[3] = 0;
            auStack_204[4] = 0;
            fStack_208 = 0.0;
            auStack_204[0] = 0;
            uVar25 = *(undefined8 *)(lVar18 + 0x1e0);
            uStack_238 = 0;
            uStack_240 = 0;
            func_0x00010748c568(&uStack_240);
            pfVar13 = pfVar20;
            FUN_10742bf24(pfVar20,&uStack_210,uVar25,&uStack_240);
            func_0x00010748f994();
            uVar25 = *(undefined8 *)(lVar18 + 0x1e0);
            uStack_238 = 0;
            uStack_240 = 0;
            func_0x00010748c568(&uStack_240);
            FUN_10742bfcc(pfVar20,&uStack_210,uVar25);
            func_0x00010748f994();
            (**(code **)(*plVar22 + 0x70))(plVar22,3,pfVar13);
            (**(code **)(*plVar22 + 0x70))(plVar22,4,pfVar20);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&fStack_208);
            FUN_1074e6de8(plVar9,*(undefined8 *)(lVar18 + 0x1e8));
            func_0x00010748f8cc();
            func_0x00010748f38c(plVar22);
            func_0x0001074e6e0c(plVar9,*(undefined8 *)(lVar18 + 0x1e8));
            func_0x00010748f8cc();
            func_0x00010748f850(plVar22);
            plVar10 = plVar9;
            FUN_1074e6e30();
            if ((int)plVar10 != 0) {
              func_0x0001074e6e78(plVar9,*(undefined8 *)(lVar18 + 0x1e0));
              func_0x00010748f8cc();
              func_0x00010748f6dc(plVar22);
            }
            func_0x00010748f724();
            func_0x000107482794(&uStack_210,&uStack_340);
            func_0x00010748f718(*(undefined8 *)(*plVar9 + 0xd0));
            func_0x00010748f38c();
            func_0x00010748f724();
            func_0x000107482794(&uStack_210,&uStack_2c0);
            func_0x00010748f718(*(undefined8 *)(*plVar9 + 0xd0));
            func_0x00010748f850();
            func_0x00010748f724();
            func_0x00010748277c(&uStack_210,apfStack_388);
            func_0x00010748f718(*(undefined8 *)(*plVar9 + 200));
            func_0x00010748f6dc();
            func_0x00010748f724();
            lVar19 = *(long *)(extraout_x8_12 + 0x28);
            FUN_107416bf8(lVar19);
            plVar22 = (long *)(lVar19 + 0x948);
            func_0x00010748277c(&uStack_210);
            func_0x00010748f718(*(undefined8 *)(*plVar9 + 200));
            (*extraout_x8_13)();
            func_0x00010748f5b4();
            uStack_20c = 0x3f800000;
            if (*(char *)param_5[4] == '\0') {
              uStack_20c = 0;
            }
            uVar27 = NEON_ucvtf((uint)*(byte *)(param_5[2] + 0x1e9));
            uStack_210._0_1_ = (undefined1)uVar27;
            uStack_210._1_1_ = (undefined1)((uint)uVar27 >> 8);
            uStack_210._2_1_ = (undefined1)((uint)uVar27 >> 0x10);
            uStack_210._3_1_ = (undefined1)((uint)uVar27 >> 0x18);
            fStack_208 = 8192.0 / (40075016.0 / (float)(1 << (ulong)(bVar2 & 0x1f)));
            (**(code **)(*plVar22 + 0xb0))();
            func_0x00010748f5b4();
            uVar25 = NEON_rev64(uVar29,4);
            uStack_210._0_1_ = (undefined1)uVar25;
            uStack_210._1_1_ = (undefined1)((ulong)uVar25 >> 8);
            uStack_210._2_1_ = (undefined1)((ulong)uVar25 >> 0x10);
            uStack_210._3_1_ = (undefined1)((ulong)uVar25 >> 0x18);
            uStack_20c = (undefined4)((ulong)uVar25 >> 0x20);
            (**(code **)(*plVar22 + 0xa8))();
            func_0x00010748f5b4();
            fStack_208 = (float)uStack_4f0;
            auStack_204[0] = (uint)((ulong)uStack_4f0 >> 0x20);
            uStack_210._0_1_ = (undefined1)uStack_4e0;
            uStack_210._1_1_ = (undefined1)((ulong)uStack_4e0 >> 8);
            uStack_210._2_1_ = (undefined1)((ulong)uStack_4e0 >> 0x10);
            uStack_210._3_1_ = (undefined1)((ulong)uStack_4e0 >> 0x18);
            uStack_20c = (undefined4)((ulong)uStack_4e0 >> 0x20);
            (**(code **)(*plVar22 + 0xb8))();
            if (uStack_4c8 != 0) {
              func_0x00010748f724();
              func_0x000107486f8c(&uStack_210,&uStack_3e0,&uStack_3c0);
              func_0x00010748f718(*(undefined8 *)(*plVar9 + 0xf8));
              func_0x00010748f878();
              func_0x00010748f724();
              func_0x000107486fc0(&uStack_210,&fStack_3f0,&fStack_400,&fStack_410,&fStack_420);
              func_0x00010748f718(*(undefined8 *)(*plVar9 + 0xf8));
              func_0x00010748f878();
              func_0x00010748f724();
              param_9 = &fStack_460;
              func_0x000107486fc0(&uStack_210,&fStack_430,&fStack_440);
              func_0x00010748f718(*(undefined8 *)(*plVar9 + 0xf8));
              func_0x00010748f878();
              plVar9 = *(long **)(*param_5 + 0x18);
              auStack_204[7] = 0;
              auStack_204[8] = 0;
              auStack_204[5] = 0;
              auStack_204[6] = 0;
              auStack_204[0xb] = 0;
              auStack_204[0xc] = 0;
              auStack_204[9] = 0;
              auStack_204[10] = 0;
              fStack_208 = 0.0;
              auStack_204[0] = 0;
              uStack_210._0_1_ = 0;
              uStack_210._1_1_ = 0;
              uStack_210._2_1_ = 0;
              uStack_210._3_1_ = 0;
              uStack_20c = 0;
              auStack_204[3] = 0;
              auStack_204[4] = 0;
              auStack_204[1] = 0;
              auStack_204[2] = 0;
              puVar15 = auStack_490;
              pfVar20 = afStack_470;
              for (lVar19 = 0; lVar19 != 0x40; lVar19 = lVar19 + 0x10) {
                *(float *)((long)&uStack_210 + lVar19) = *pfVar20;
                *(undefined8 *)((long)&uStack_20c + lVar19) = *puVar15;
                *(undefined4 *)((long)auStack_204 + lVar19) = 0;
                puVar15 = puVar15 + 1;
                pfVar20 = pfVar20 + 1;
              }
              func_0x00010748f878(*(undefined8 *)(*plVar9 + 0xf8),plVar9,0x16,&uStack_210);
            }
            func_0x00010748fbac(afStack_4b8);
            pfVar20 = afStack_4b8;
            func_0x00010748f7c8();
            unaff_x22 = (float *)0x4;
            pfVar13 = afStack_4b8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
            unaff_x21 = *(float **)(plVar16[3] + 0x68);
            for (unaff_x20 = *(float **)(plVar16[3] + 0x60); unaff_x20 != unaff_x21;
                unaff_x20 = unaff_x20 + 10) {
              func_0x00010748f5b4();
              func_0x00010748f434();
              (*extraout_x8_14)();
              func_0x00010748f5b4();
              uStack_210._0_1_ = 4;
              uStack_20c = 0;
              param_9 = (float *)(ulong)(uint)unaff_x20[2];
              pfVar20 = (float *)&uStack_210;
              func_0x00010748f794(*(undefined8 *)(*(long *)pfVar13 + 0x138));
            }
          }
          func_0x00010730b734(alStack_4a0);
        }
        ppfVar8 = &pfStack_398;
        func_0x0001074332d8();
      }
    }
LAB_107489120:
    puVar15 = puStack_528 + 1;
  } while( true );
}



/* Entry: 107489258; end: 107489293;  */

long * FUN_107489258(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  code *extraout_x8;
  undefined4 auStack_78 [2];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_18 [8];
  
  FUN_107451224(param_1,auStack_18);
  if (*param_1 != 0) {
    return (long *)(*param_1 + 0x58);
  }
  pcVar1 = "map::at:  key not found";
  func_0x000104c03f28();
  (**(code **)(*(long *)pcVar1 + 0x40))();
  auStack_78[0] = 0;
  func_0x00010748f170(*param_2);
  func_0x00010748f170(param_2[1]);
  func_0x00010748f170(param_2[2]);
  func_0x00010748f170(param_2[3]);
  func_0x00010748f170(param_2[4]);
  func_0x00010748f170(param_2[5]);
  func_0x00010748f170(param_2[6]);
  func_0x00010748f170(param_2[7]);
  auStack_78[0] = 0;
  func_0x00010748f434(*param_2);
  (*extraout_x8)();
  func_0x00010748f434(param_2[1]);
  func_0x00010748f200();
  func_0x00010748f434(param_2[2]);
  func_0x00010748f200();
  func_0x00010748f434(param_2[3]);
  func_0x00010748f200();
  func_0x00010748f434(param_2[4]);
  func_0x00010748f200();
  func_0x00010748f434(param_2[5]);
  func_0x00010748f200();
  func_0x00010748f434(param_2[6]);
  func_0x00010748f200();
  func_0x00010748f434(param_2[7]);
  func_0x00010748f200();
  auStack_78[0] = 8;
  if (*(char *)(param_2 + 0x22) == '\x01') {
    puVar2 = param_2 + 0x1c;
    func_0x00010745d404();
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  puStack_68 = param_2 + 0x10;
  puStack_70 = puVar2;
  (**(code **)(*(long *)pcVar1 + 0x48))(pcVar1,auStack_78,param_5);
  return (long *)pcVar1;
}



/* Entry: 107489294; end: 1074893f3;  */

void FUN_107489294(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *extraout_x8;
  undefined4 auStack_58 [2];
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  (**(code **)(*param_1 + 0x40))();
  auStack_58[0] = 0;
  func_0x00010748f170(*param_3);
  func_0x00010748f170(param_3[1]);
  func_0x00010748f170(param_3[2]);
  func_0x00010748f170(param_3[3]);
  func_0x00010748f170(param_3[4]);
  func_0x00010748f170(param_3[5]);
  func_0x00010748f170(param_3[6]);
  func_0x00010748f170(param_3[7]);
  auStack_58[0] = 0;
  func_0x00010748f434(*param_3);
  (*extraout_x8)();
  func_0x00010748f434(param_3[1]);
  func_0x00010748f200();
  func_0x00010748f434(param_3[2]);
  func_0x00010748f200();
  func_0x00010748f434(param_3[3]);
  func_0x00010748f200();
  func_0x00010748f434(param_3[4]);
  func_0x00010748f200();
  func_0x00010748f434(param_3[5]);
  func_0x00010748f200();
  func_0x00010748f434(param_3[6]);
  func_0x00010748f200();
  func_0x00010748f434(param_3[7]);
  func_0x00010748f200();
  auStack_58[0] = 8;
  if (*(char *)(param_3 + 0x22) == '\x01') {
    puVar1 = param_3 + 0x1c;
    func_0x00010745d404();
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  puStack_48 = param_3 + 0x10;
  puStack_50 = puVar1;
  (**(code **)(*param_1 + 0x48))(param_1,auStack_58,param_5);
  return;
}



/* Entry: 1074893f4; end: 107489417;  */

void FUN_1074893f4(void)

{
  func_0x00010748f73c();
  func_0x0001074332d8();
  return;
}



/* Entry: 107489418; end: 107489517;  */

undefined4 FUN_107489418(int param_1,long param_2)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_2 + 0x26c);
  }
  return *(undefined4 *)(param_2 + 0x148);
}



/* Entry: 107489518; end: 1074895bf;  */

void FUN_107489518(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x00010748f2a8();
  lVar1 = (*(long **)(param_1 + 0x28))[1];
  for (lVar3 = **(long **)(param_1 + 0x28); lVar3 != lVar1; lVar3 = lVar3 + 8) {
    lVar2 = unaff_x20;
    FUN_1074e3c98();
    if (lVar2 != 0) {
      func_0x00010724ef84(auStack_58,*(long *)(unaff_x20 + 0x18) + 8);
      (**(code **)(*unaff_x19 + 0x20))();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    }
  }
  return;
}



/* Entry: 1074895c0; end: 10748962b;  */

void FUN_1074895c0(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(param_2 + 0xf48);
  *(undefined8 *)(param_2 + 0xf48) = 0;
  *param_1 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0xf40);
  uVar2 = *(undefined8 *)(param_2 + 0xf38);
  *(undefined8 *)(param_2 + 0xf40) = 0;
  *(undefined8 *)(param_2 + 0xf38) = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_10748ab6c(&uStack_28);
  return;
}



/* Entry: 10748962c; end: 1074896ef;  */

undefined1 *
FUN_10748962c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,undefined8 param_5,
             undefined8 param_6,uint param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  if ((param_7 & 1) == 0) {
    FUN_1073c14ec(auStack_40,(float)*(double *)(param_4 + 0x70),param_2,
                  *(long *)(param_1 + 8) + 0x208,*(undefined1 *)(*(long *)(param_1 + 8) + 0x210));
    FUN_1074896f0(auStack_58,auStack_40,param_2);
    (**(code **)(*(long *)*param_3 + 0x38))(auStack_68);
    puVar1 = auStack_68;
    FUN_107330078(puVar1);
    puVar2 = auStack_58;
    func_0x000107875690(puVar2,puVar1);
    func_0x000104c336c8(auStack_58);
    FUN_10748c930(auStack_40);
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



/* Entry: 1074896f0; end: 107489703;  */

void FUN_1074896f0(undefined8 param_1)

{
  func_0x00010729ee88(param_1);
  func_0x000107297560();
  return;
}



/* Entry: 107489704; end: 10748a3db;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107489bf0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double ** FUN_107489704(double **param_1,double *param_2,undefined8 **param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  short sVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  double *pdVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined1 in_ZR;
  double dVar17;
  float *pfVar18;
  undefined8 *puVar19;
  double *pdVar20;
  undefined8 **ppuVar21;
  double **ppdVar22;
  int iVar23;
  undefined8 **ppuVar24;
  undefined8 extraout_x8;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  long lVar28;
  double dVar29;
  ulong uVar30;
  long lVar31;
  double *pdVar32;
  ulong uVar33;
  long lVar34;
  long *plVar35;
  double *pdVar36;
  byte *pbVar37;
  undefined8 *puVar38;
  double *pdVar39;
  double *pdVar40;
  long lVar41;
  long *plVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined8 *puVar63;
  undefined8 *puVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  float fVar69;
  double dVar70;
  float fStack_850;
  double *pdStack_840;
  undefined4 uStack_838;
  undefined1 uStack_834;
  long alStack_830 [2];
  undefined1 auStack_820 [16];
  float fStack_810;
  float fStack_80c;
  float fStack_808;
  float fStack_7fc;
  undefined8 **appuStack_7f8 [2];
  long *aplStack_7e8 [2];
  long lStack_7d8;
  long lStack_7d0;
  undefined8 *puStack_7c0;
  undefined8 *puStack_7b8;
  undefined8 uStack_7b0;
  long alStack_7a8 [2];
  undefined1 auStack_798 [128];
  double *pdStack_718;
  double *pdStack_710;
  double *pdStack_708;
  undefined8 uStack_700;
  undefined8 *puStack_6f8;
  undefined8 uStack_6f0;
  double *pdStack_6e8;
  double *pdStack_6e0;
  double *pdStack_6d8;
  double **ppdStack_6d0;
  double **ppdStack_6c8;
  double **ppdStack_6c0;
  double **ppdStack_6b8;
  undefined1 uStack_6b0;
  double *pdStack_6a8;
  undefined8 *puStack_6a0;
  undefined1 uStack_698;
  undefined7 uStack_697;
  undefined8 *puStack_690;
  undefined8 uStack_688;
  undefined4 uStack_680;
  double dStack_5b8;
  float fStack_4f0;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  double dStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined8 uStack_b0;
  
  func_0x00010748f1bc();
  pdVar25 = param_1[5];
  ppuVar24 = param_3;
  uStack_b0 = extraout_x8;
  if ((pdVar25 != (double *)0x0) && (in_ZR = *pdVar25 == pdVar25[1], !(bool)in_ZR)) {
    pdVar25 = *(double **)*param_2;
    in_ZR = 0;
    if (((long *)*param_2)[1] - (long)pdVar25 == 0x10) {
      dVar17 = param_2[1];
      dVar68 = (double)NEON_ucvtf((ulong)*(uint *)((long)dVar17 + 0x50));
      puVar63 = (undefined8 *)*pdVar25;
      dVar66 = pdVar25[1];
      dVar68 = dVar68 - dVar66;
      uVar43 = SUB81(dVar68,0);
      uVar46 = (undefined1)((ulong)dVar68 >> 8);
      uVar49 = (undefined1)((ulong)dVar68 >> 0x10);
      uVar52 = (undefined1)((ulong)dVar68 >> 0x18);
      uVar55 = (undefined1)((ulong)dVar68 >> 0x20);
      uVar57 = (undefined1)((ulong)dVar68 >> 0x28);
      uVar59 = (undefined1)((ulong)dVar68 >> 0x30);
      uVar61 = (undefined1)((ulong)dVar68 >> 0x38);
      uStack_697 = (undefined7)((ulong)dVar68 >> 8);
      puStack_6a0 = puVar63;
      uStack_698 = uVar43;
      FUN_1073c2238(dVar17,0,&puStack_6a0);
      uStack_700 = CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,CONCAT13(uVar52,
                                                  CONCAT12(uVar49,CONCAT11(uVar46,uVar43)))))));
      pdStack_718 = (double *)0x0;
      pdStack_710 = (double *)0x0;
      pdStack_708 = (double *)0x0;
      pdVar25 = param_1[3];
      pdVar26 = param_1[1];
      lVar34 = *(long *)*param_1[5];
      puStack_6f8 = puVar63;
      FUN_10741776c(param_2[1]);
      dVar68 = (double)CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,CONCAT13(
                                                  uVar52,CONCAT12(uVar49,CONCAT11(uVar46,uVar43)))))
                                               ));
      lVar41 = lVar34;
      func_0x00010748fb5c(lVar34,&uStack_700);
      puStack_6a0 = (undefined8 *)(double)(int)(short)lVar41;
      dVar17 = (double)((int)lVar41 >> 0x10);
      uStack_698 = SUB81(dVar17,0);
      uStack_697 = (undefined7)((ulong)dVar17 >> 8);
      uStack_688 = 0x3ff0000000000000;
      puStack_690 = (undefined8 *)0x0;
      ppuVar24 = (undefined8 **)(lVar34 + 0x110);
      func_0x000107877358(&puStack_6a0,&puStack_6a0);
      dStack_4d0 = (double)puStack_690 - dVar66;
      uVar43 = SUB81(dStack_4d0,0);
      uVar46 = (undefined1)((ulong)dStack_4d0 >> 8);
      uVar49 = (undefined1)((ulong)dStack_4d0 >> 0x10);
      uVar52 = (undefined1)((ulong)dStack_4d0 >> 0x18);
      uVar55 = (undefined1)((ulong)dStack_4d0 >> 0x20);
      uVar57 = (undefined1)((ulong)dStack_4d0 >> 0x28);
      uVar59 = (undefined1)((ulong)dStack_4d0 >> 0x30);
      uVar61 = (undefined1)((ulong)dStack_4d0 >> 0x38);
      puVar64 = (undefined8 *)((double)puStack_6a0 - dVar68);
      uStack_4d8 = (undefined8 *)((double)CONCAT71(uStack_697,uStack_698) - (double)puVar63);
      dVar67 = dVar68;
      uStack_4e0 = puVar64;
      FUN_1074185b8(&uStack_4e0);
      dVar17 = (double)CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,CONCAT13(
                                                  uVar52,CONCAT12(uVar49,CONCAT11(uVar46,uVar43)))))
                                               ));
      dVar29 = param_2[2];
      plVar35 = (long *)*param_1[5];
      plVar2 = (long *)param_1[5][1];
      fVar69 = (float)dVar67;
      fStack_850 = 3.4028235e+38;
      uVar43 = 0x17;
      uVar46 = 0xb7;
      uVar49 = 0xd1;
      uVar52 = 0x38;
      uVar55 = 0;
      uVar57 = 0;
      uVar59 = 0;
      uVar61 = 0;
      for (; plVar35 != plVar2; plVar35 = plVar35 + 1) {
        lVar41 = *plVar35;
        ppuVar24 = (undefined8 **)(ulong)*(byte *)(param_1 + 7);
        ppdVar22 = param_1;
        FUN_1074e3c98(param_1,lVar41);
        if (ppdVar22 != (double **)0x0) {
          pdVar27 = *ppdVar22;
          pbVar37 = (byte *)(lVar41 + 4);
          bVar4 = *pbVar37;
          func_0x00010748f2fc(param_2[1]);
          dVar65 = (double)bVar4;
          dVar70 = (double)CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,CONCAT13(
                                                  uVar52,CONCAT12(uVar49,CONCAT11(uVar46,uVar43)))))
                                                  )) - dVar65;
          uVar43 = SUB81(dVar70,0);
          uVar46 = (undefined1)((ulong)dVar70 >> 8);
          uVar49 = (undefined1)((ulong)dVar70 >> 0x10);
          uVar52 = (undefined1)((ulong)dVar70 >> 0x18);
          uVar55 = (undefined1)((ulong)dVar70 >> 0x20);
          uVar57 = (undefined1)((ulong)dVar70 >> 0x28);
          uVar59 = (undefined1)((ulong)dVar70 >> 0x30);
          uVar61 = (undefined1)((ulong)dVar70 >> 0x38);
          _exp2();
          dVar70 = (double)CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,CONCAT13(
                                                  uVar52,CONCAT12(uVar49,CONCAT11(uVar46,uVar43)))))
                                                  ));
          func_0x0001078769cc(auStack_798,lVar41 + 0x110);
          FUN_107502748(alStack_7a8,lVar41);
          if (alStack_7a8[0] != 0) {
            puStack_7c0 = (undefined8 *)0x0;
            puStack_7b8 = (undefined8 *)0x0;
            uStack_7b0 = 0;
            func_0x000104c33da8(&puStack_6a0,2,0,&uStack_7b0);
            *puStack_690 = 0;
            puVar38 = (undefined8 *)
                      (CONCAT71(uStack_697,uStack_698) - ((long)puStack_7b8 - (long)puStack_7c0));
            puStack_690 = puStack_690 + 1;
            _memcpy(puVar38);
            uVar12 = uStack_7b0;
            uVar43 = SUB81(puStack_690,0);
            uVar46 = (undefined1)((ulong)puStack_690 >> 8);
            uVar49 = (undefined1)((ulong)puStack_690 >> 0x10);
            uVar52 = (undefined1)((ulong)puStack_690 >> 0x18);
            uVar55 = (undefined1)((ulong)puStack_690 >> 0x20);
            uVar57 = (undefined1)((ulong)puStack_690 >> 0x28);
            uVar59 = (undefined1)((ulong)puStack_690 >> 0x30);
            uVar61 = (undefined1)((ulong)puStack_690 >> 0x38);
            uStack_7b0 = uStack_688;
            puStack_7b8 = puStack_690;
            puStack_690 = puStack_7c0;
            uStack_688 = uVar12;
            uStack_698 = SUB81(puStack_7c0,0);
            uStack_697 = (undefined7)((ulong)puStack_7c0 >> 8);
            puStack_6a0 = puStack_7c0;
            puStack_7c0 = puVar38;
            func_0x000104c33e24(&puStack_6a0);
            lVar34 = lVar41;
            func_0x00010748fb5c(lVar41,&uStack_700);
            *(int *)puStack_7c0 = (int)lVar34;
            func_0x000107417778(param_2[1]);
            uStack_4e0 = (undefined8 *)
                         CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,CONCAT13(
                                                  uVar52,CONCAT12(uVar49,CONCAT11(uVar46,uVar43)))))
                                                 ));
            uVar43 = 0;
            uVar46 = 0;
            uVar49 = 0;
            uVar52 = 0;
            uVar55 = 0;
            uVar57 = 0;
            uVar59 = 0;
            uVar61 = 0;
            uStack_4d8 = (undefined8 *)dVar65;
            FUN_10748a478(&uStack_4e0);
            puStack_6a0 = (undefined8 *)
                          CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55,CONCAT13(
                                                  uVar52,CONCAT12(uVar49,CONCAT11(uVar46,uVar43)))))
                                                  ));
            uStack_698 = SUB81(dVar65,0);
            uStack_697 = (undefined7)((ulong)dVar65 >> 8);
            lVar34 = lVar41;
            func_0x00010748fb5c(lVar41,&puStack_6a0);
            *(int *)((long)puStack_7c0 + 4) = (int)lVar34;
            ppuVar24 = &puStack_7c0;
            FUN_1073c0418();
            lVar34 = alStack_7a8[0];
            uStack_4e0 = (undefined8 *)
                         CONCAT44((float)((int)ppuVar24 >> 0x10),(float)(int)(short)ppuVar24);
            uStack_4d8 = (undefined8 *)
                         CONCAT44((float)(int)(short)((ulong)ppuVar24 >> 0x30),
                                  (float)(int)(short)((ulong)ppuVar24 >> 0x20));
            func_0x00010729807c(&puStack_6a0,pdVar25 + 1);
            ppuVar24 = &puStack_6a0;
            FUN_1073c11f4(&lStack_7d8,lVar34,&uStack_4e0);
            func_0x00010748f78c();
            (**(code **)(**(long **)(lVar41 + 0x220) + 0x10))
                      (aplStack_7e8,*(long **)(lVar41 + 0x220),param_1[3] + 0xf);
            lVar28 = lStack_7d0 - lStack_7d8;
            fVar8 = 16.0 / (float)dVar70;
            uVar43 = SUB41(fVar8,0);
            uVar46 = (undefined1)((uint)fVar8 >> 8);
            uVar49 = (undefined1)((uint)fVar8 >> 0x10);
            uVar52 = (undefined1)((uint)fVar8 >> 0x18);
            uVar55 = 0;
            uVar57 = 0;
            uVar59 = 0;
            uVar61 = 0;
            for (lVar34 = 0; lVar34 != lVar28 / 0x120; lVar34 = lVar34 + 1) {
              (**(code **)(*aplStack_7e8[0] + 0x18))
                        (appuStack_7f8,aplStack_7e8[0],*(undefined8 *)(lStack_7d8 + lVar34 * 0x120))
              ;
              (*(code *)(*appuStack_7f8[0])[7])(&puStack_6a0);
              ppuVar21 = &puStack_6a0;
              FUN_107330078(ppuVar21);
              func_0x00010748f2fc(param_2[1]);
              fVar9 = (float)(double)CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(uVar55
                                                  ,CONCAT13(uVar52,CONCAT12(uVar49,CONCAT11(uVar46,
                                                  uVar43)))))));
              uVar43 = SUB41(fVar9,0);
              uVar46 = (undefined1)((uint)fVar9 >> 8);
              uVar49 = (undefined1)((uint)fVar9 >> 0x10);
              uVar52 = (undefined1)((uint)fVar9 >> 0x18);
              uVar55 = 0;
              uVar57 = 0;
              uVar59 = 0;
              uVar61 = 0;
              FUN_10744f4f4(pdVar27,param_1,appuStack_7f8[0]);
              fVar9 = (float)CONCAT13(uVar52,CONCAT12(uVar49,CONCAT11(uVar46,uVar43)));
              func_0x00010748f2fc(param_2[1]);
              fVar10 = (float)(double)CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(
                                                  uVar55,CONCAT13(uVar52,CONCAT12(uVar49,CONCAT11(
                                                  uVar46,uVar43)))))));
              uVar44 = SUB41(fVar10,0);
              uVar47 = (undefined1)((uint)fVar10 >> 8);
              uVar50 = (undefined1)((uint)fVar10 >> 0x10);
              uVar53 = (undefined1)((uint)fVar10 >> 0x18);
              ppuVar24 = appuStack_7f8[0];
              FUN_10744f598(pdVar27,param_1);
              fStack_7fc = 0.0;
              uVar43 = 0x17;
              uVar46 = 0xb7;
              uVar49 = 0xd1;
              uVar52 = 0xb8;
              uVar55 = 0;
              uVar57 = 0;
              uVar59 = 0;
              uVar61 = 0;
              if (-0.0001 < fVar69) {
LAB_107489c48:
                func_0x00010783376c(&uStack_4e0,ppuVar21);
                puVar15 = uStack_4d8;
                dVar70 = (double)(float)CONCAT13(uVar53,CONCAT12(uVar50,CONCAT11(uVar47,uVar44)));
                for (puVar38 = uStack_4e0; puVar38 != puVar15; puVar38 = puVar38 + 3) {
                  plVar3 = (long *)puVar38[1];
                  for (plVar42 = (long *)*puVar38; plVar42 != plVar3; plVar42 = plVar42 + 3) {
                    if (4 < (ulong)(plVar42[1] - *plVar42)) {
                      lVar31 = 0;
                      uVar33 = 0xffffffffffffffff;
                      while( true ) {
                        uVar33 = uVar33 + 1;
                        if ((plVar42[1] - *plVar42 >> 2) - 1U <= uVar33) break;
                        lVar1 = *plVar42 + lVar31;
                        sVar5 = *(short *)(lVar1 + 6);
                        func_0x00010748f624(CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14
                                                  (uVar55,CONCAT13(uVar52,CONCAT12(uVar49,CONCAT11(
                                                  uVar46,uVar43))))))),
                                            (double)(int)*(short *)(lVar1 + 2));
                        puVar14 = puStack_690;
                        puVar19 = puStack_6a0;
                        dVar65 = (double)CONCAT71(uStack_697,uStack_698);
                        func_0x00010748f624(CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14
                                                  (uVar55,CONCAT13(uVar52,CONCAT12(uVar49,CONCAT11(
                                                  uVar46,uVar43))))))),(double)(int)sVar5);
                        uStack_330 = CONCAT44((float)(double)puVar63,(float)dVar68);
                        uStack_328 = CONCAT44(uStack_328._4_4_,(float)dVar66);
                        fStack_810 = (float)(double)puVar19;
                        fStack_80c = (float)dVar65;
                        uStack_6f0 = (double *)CONCAT44(fStack_80c,fStack_810);
                        pdStack_6e8 = (double *)
                                      CONCAT44(pdStack_6e8._4_4_,(float)((double)puVar14 + dVar70));
                        auVar7[8] = uStack_698;
                        auVar7._0_8_ = puStack_6a0;
                        auVar7[9] = (char)uStack_697;
                        auVar7[10] = (char)((uint7)uStack_697 >> 8);
                        auVar7[0xb] = (char)((uint7)uStack_697 >> 0x10);
                        auVar7[0xc] = (char)((uint7)uStack_697 >> 0x18);
                        auVar7[0xd] = (char)((uint7)uStack_697 >> 0x20);
                        auVar7[0xe] = (char)((uint7)uStack_697 >> 0x28);
                        auVar7[0xf] = (char)((uint7)uStack_697 >> 0x30);
                        fVar10 = (float)auVar7._8_8_;
                        ppdStack_6c8 = (double **)
                                       CONCAT17((char)((uint)fVar10 >> 0x18),
                                                CONCAT16((char)((uint)fVar10 >> 0x10),
                                                         CONCAT15((char)((uint)fVar10 >> 8),
                                                                  CONCAT14(SUB41(fVar10,0),
                                                                           (float)(double)
                                                  puStack_6a0))));
                        ppdStack_6c0 = (double **)
                                       CONCAT44(ppdStack_6c0._4_4_,
                                                (float)((double)puStack_690 + dVar70));
                        fStack_808 = (float)((double)puVar14 + (double)fVar9);
                        uVar43 = SUB41(fStack_808,0);
                        uVar46 = (undefined1)((uint)fStack_808 >> 8);
                        uVar49 = (undefined1)((uint)fStack_808 >> 0x10);
                        uVar52 = (undefined1)((uint)fStack_808 >> 0x18);
                        uVar55 = 0;
                        uVar57 = 0;
                        uVar59 = 0;
                        uVar61 = 0;
                        puVar19 = &uStack_330;
                        ppuVar24 = (undefined8 **)&uStack_6f0;
                        fStack_1a0 = (float)dVar17;
                        fStack_19c = (float)(double)puVar64;
                        fStack_198 = fVar69;
                        func_0x000107875080(puVar19,&fStack_1a0,ppuVar24,&ppdStack_6c8,&fStack_810,
                                            &fStack_7fc);
                        lVar31 = lVar31 + 4;
                        if (((ulong)puVar19 & 1) != 0) {
                          func_0x00010748f9c0();
                          goto LAB_107489d98;
                        }
                      }
                    }
                  }
                }
                func_0x00010748f9c0();
              }
              else {
                fVar10 = (fVar9 - (float)dVar66) / fVar69;
                uVar43 = SUB41(fVar10,0);
                uVar46 = (undefined1)((uint)fVar10 >> 8);
                uVar49 = (undefined1)((uint)fVar10 >> 0x10);
                uVar52 = (undefined1)((uint)fVar10 >> 0x18);
                uVar55 = 0;
                uVar57 = 0;
                uVar59 = 0;
                uVar61 = 0;
                if (fVar10 < 0.0001) goto LAB_107489c48;
                dVar65 = *(double *)((long)param_2[1] + 0x70);
                dVar70 = (double)fVar10;
                uStack_4e0 = (undefined8 *)(dVar68 + dVar17 * dVar70);
                uStack_4d8 = (undefined8 *)((double)puVar63 + (double)puVar64 * dVar70);
                dStack_4d0 = dVar66 + dVar67 * dVar70;
                uStack_328 = 0;
                uStack_330 = 0;
                uStack_320 = 0;
                uStack_4c8 = 0x3ff0000000000000;
                fStack_7fc = fVar10;
                func_0x000107877358(&puStack_6a0,&uStack_4e0,auStack_798);
                uStack_4e0._0_4_ =
                     CONCAT22((short)(int)(double)CONCAT71(uStack_697,uStack_698),
                              (short)(int)(double)puStack_6a0);
                func_0x0001072c7768(&uStack_330,&uStack_4e0);
                ppuVar24 = (undefined8 **)(ulong)*(byte *)(pdVar26 + 0x42);
                fVar10 = (float)dVar65;
                uVar43 = SUB41(fVar10,0);
                uVar46 = (char)((uint)fVar10 >> 8);
                uVar49 = (char)((uint)fVar10 >> 0x10);
                uVar52 = (char)((uint)fVar10 >> 0x18);
                uVar55 = 0;
                uVar57 = 0;
                uVar59 = 0;
                uVar61 = 0;
                FUN_1073c14ec(&uStack_4e0,
                              CONCAT17(uVar62,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(uVar56,
                                                  CONCAT13(uVar54,CONCAT12(uVar51,CONCAT11(uVar48,
                                                  uVar45))))))),fVar8,&uStack_330,pdVar26 + 0x41);
                uVar62 = uVar61;
                uVar60 = uVar59;
                uVar58 = uVar57;
                uVar56 = uVar55;
                uVar54 = uVar52;
                uVar51 = uVar49;
                uVar48 = uVar46;
                uVar45 = uVar43;
                uVar43 = uVar45;
                uVar46 = uVar48;
                uVar49 = uVar51;
                uVar52 = uVar54;
                uVar55 = uVar56;
                uVar57 = uVar58;
                uVar59 = uVar60;
                uVar61 = uVar62;
                if ((char)uStack_4c8 == '\x01') {
                  func_0x000107297530(&fStack_1a0,&uStack_4e0);
                }
                else {
                  func_0x000107297518(&fStack_1a0,&uStack_330);
                }
                pfVar18 = &fStack_1a0;
                func_0x000107875690(pfVar18,ppuVar21);
                func_0x000104c336c8(&fStack_1a0);
                FUN_10748c930(&uStack_4e0);
                func_0x000104c336c8(&uStack_330);
                if (((ulong)pfVar18 & 1) == 0) goto LAB_107489c48;
LAB_107489d98:
                fVar9 = fStack_7fc;
                uVar43 = SUB41(fStack_850,0);
                uVar46 = (undefined1)((uint)fStack_850 >> 8);
                uVar49 = (undefined1)((uint)fStack_850 >> 0x10);
                uVar52 = (undefined1)((uint)fStack_850 >> 0x18);
                uVar55 = 0;
                uVar57 = 0;
                uVar59 = 0;
                uVar61 = 0;
                if (fStack_7fc < fStack_850) {
                  (**(code **)(**(long **)(lVar41 + 0x220) + 0x10))
                            (&fStack_810,*(long **)(lVar41 + 0x220),param_1[3] + 0xf);
                  ppuVar24 = appuStack_7f8[0];
                  func_0x00010729807c(&puStack_6a0,param_1[3] + 8);
                  (**(code **)(*(long *)CONCAT44(fStack_80c,fStack_810) + 0x20))(&uStack_330);
                  func_0x0001072627ac(&uStack_4e0,&uStack_330);
                  func_0x0001078344c8(&fStack_1a0,ppuVar24,pbVar37,&puStack_6a0,&uStack_4e0);
                  func_0x00010748f460();
                  func_0x000104c2f714(&uStack_330);
                  func_0x00010748f78c();
                  func_0x000107751284(&puStack_6a0);
                  func_0x0001077514d8(&puStack_6a0,&fStack_1a0);
                  dStack_5b8 = dVar29;
                  func_0x000107751334(&uStack_330,&puStack_6a0);
                  func_0x000107267da8(&puStack_6a0);
                  FUN_1074e3ab4(auStack_820,param_1,&uStack_330);
                  func_0x0001074e3ac0(alStack_830,param_1);
                  FUN_1073c246c(auStack_820,*(undefined8 *)(alStack_830[0] + 0x10),0);
                  ppdStack_6c0 = (double **)0x0;
                  ppdStack_6c8 = (double **)0x0;
                  ppdStack_6b8 = (double **)0x0;
                  uStack_698 = 0;
                  uStack_697 = 0;
                  puStack_6a0 = (undefined8 *)0x0;
                  uStack_688 = 0;
                  puStack_690 = (undefined8 *)0x0;
                  uStack_680 = 0x3f800000;
                  uStack_6f0 = (double *)((ulong)uStack_6f0 & 0xffffffffffffff00);
                  ppdStack_6d0 = (double **)((ulong)ppdStack_6d0 & 0xffffffffffffff00);
                  pdStack_840 = *(double **)pbVar37;
                  uStack_838 = *(undefined4 *)(lVar41 + 0xc);
                  uStack_834 = 1;
                  ppuVar24 = (undefined8 **)(pdVar25 + 1);
                  FUN_1073c52bc(&uStack_4e0,&fStack_1a0,ppuVar24,auStack_820,&ppdStack_6c8,
                                &puStack_6a0,&uStack_6f0,&pdStack_840);
                  func_0x000107293acc(&puStack_6a0);
                  func_0x0001000e30f4(&ppdStack_6c8);
                  func_0x00010729b464(&puStack_6a0,&uStack_4e0);
                  pdVar32 = pdStack_710;
                  uVar43 = SUB41(fStack_7fc,0);
                  uVar46 = (undefined1)((uint)fStack_7fc >> 8);
                  uVar49 = (undefined1)((uint)fStack_7fc >> 0x10);
                  uVar52 = (undefined1)((uint)fStack_7fc >> 0x18);
                  uVar55 = 0;
                  uVar57 = 0;
                  uVar59 = 0;
                  uVar61 = 0;
                  fStack_4f0 = fStack_7fc;
                  if (pdStack_710 < pdStack_708) {
                    FUN_10748c950(pdStack_710,&puStack_6a0);
                    pdVar32 = pdVar32 + 0x37;
                  }
                  else {
                    lVar31 = (long)pdStack_710 - (long)pdStack_718;
                    uVar33 = lVar31 / 0x1b8 + 1;
                    if (0x94f2094f2094f2 < uVar33) {
                      FUN_10748c9bc();
LAB_10748a214:
                    /* WARNING: Does not return */
                      pcVar16 = (code *)SoftwareBreakpoint(1,0x10748a218);
                      (*pcVar16)();
                    }
                    uVar6 = ((long)pdStack_708 - (long)pdStack_718) / 0x1b8;
                    uVar30 = uVar6 * 2;
                    if (uVar30 < uVar33 || uVar30 - uVar33 == 0) {
                      uVar30 = uVar33;
                    }
                    if (0x4a7904a7904a78 < uVar6) {
                      uVar30 = 0x94f2094f2094f2;
                    }
                    ppdStack_6d0 = &pdStack_708;
                    if (uVar30 == 0) {
                      puVar38 = (undefined8 *)0x0;
                    }
                    else {
                      if (0x94f2094f2094f2 < uVar30) {
                        func_0x000104bd35f4();
                        goto LAB_10748a214;
                      }
                      puVar38 = (undefined8 *)(uVar30 * 0x1b8);
                      __Znwm();
                    }
                    lVar31 = (long)puVar38 + lVar31;
                    uStack_6f0 = (double *)puVar38;
                    pdStack_6e8 = (double *)lVar31;
                    pdStack_6e0 = (double *)lVar31;
                    pdStack_6d8 = (double *)(puVar38 + uVar30 * 0x37);
                    FUN_10748c950(lVar31,&puStack_6a0);
                    pdVar13 = pdStack_710;
                    pdVar39 = pdStack_718;
                    pdVar32 = (double *)(lVar31 + 0x1b8);
                    pdVar36 = (double *)
                              (lVar31 + (((long)pdStack_710 - (long)pdStack_718) / -0x1b8) * 0x1b8);
                    ppdStack_6c0 = &pdStack_6a8;
                    ppdStack_6b8 = &pdStack_840;
                    uStack_6b0 = 0;
                    pdVar20 = pdVar36;
                    pdStack_6e0 = pdVar32;
                    ppdStack_6c8 = &pdStack_708;
                    pdStack_6a8 = pdVar36;
                    for (pdVar40 = pdStack_718; pdStack_840 = pdVar20, pdVar40 != pdVar13;
                        pdVar40 = pdVar40 + 0x37) {
                      func_0x00010729b464(pdVar20,pdVar40);
                      uVar11 = *(undefined4 *)(pdVar40 + 0x36);
                      uVar43 = (undefined1)uVar11;
                      uVar46 = (undefined1)((uint)uVar11 >> 8);
                      uVar49 = (undefined1)((uint)uVar11 >> 0x10);
                      uVar52 = (undefined1)((uint)uVar11 >> 0x18);
                      uVar55 = 0;
                      uVar57 = 0;
                      uVar59 = 0;
                      uVar61 = 0;
                      *(undefined4 *)(pdVar20 + 0x36) = uVar11;
                      pdVar20 = pdStack_840 + 0x37;
                    }
                    uStack_6b0 = 1;
                    for (; pdVar39 != pdVar13; pdVar39 = pdVar39 + 0x37) {
                      func_0x00010729abec(pdVar39);
                    }
                    FUN_10748c9c8(&ppdStack_6c8);
                    pdStack_6e0 = pdStack_718;
                    pdStack_6d8 = pdStack_708;
                    pdStack_6e8 = pdStack_718;
                    uStack_6f0 = pdStack_718;
                    pdStack_718 = pdVar36;
                    pdStack_710 = pdVar32;
                    pdStack_708 = (double *)(puVar38 + uVar30 * 0x37);
                    func_0x00010748c974(&uStack_6f0);
                  }
                  pdStack_710 = pdVar32;
                  func_0x00010729abec(&puStack_6a0);
                  func_0x00010729abec(&uStack_4e0);
                  func_0x000107283194(alStack_830);
                  func_0x000107283194(auStack_820);
                  func_0x000107267da8(&uStack_330);
                  func_0x000107269e60(&fStack_1a0);
                  func_0x000107331000(&fStack_810);
                  fStack_850 = fVar9;
                }
              }
              func_0x000107330fdc(appuStack_7f8);
            }
            func_0x000107331000(aplStack_7e8);
            func_0x0001072a7b80(&lStack_7d8);
            func_0x000104c336c8(&puStack_7c0);
          }
          func_0x0001073ad47c(alStack_7a8);
        }
      }
      in_ZR = pdStack_718 == pdStack_710;
      param_2 = pdStack_710;
      if (!(bool)in_ZR) {
        ppuVar24 = (undefined8 **)
                   (LZCOUNT(((long)pdStack_710 - (long)pdStack_718) / 0x1b8) << 1 ^ 0x7e);
        FUN_10748ca0c();
        param_2 = pdVar25 + 1;
        ppuVar21 = param_3;
        FUN_10748a4c0();
        pdVar27 = pdStack_718;
        pdVar26 = pdStack_710;
        if (ppuVar21 == (undefined8 **)0x0) {
          uStack_698 = 0;
          uStack_697 = 0;
          puStack_6a0 = (undefined8 *)0x0;
          puStack_690 = (undefined8 *)0x0;
          param_2 = pdVar25 + 1;
          ppuVar24 = &puStack_6a0;
          FUN_10748a4f4(&uStack_4e0,param_3);
          func_0x00010729d51c(&puStack_6a0);
          pdVar27 = pdStack_718;
          pdVar26 = pdStack_710;
        }
        for (; in_ZR = true, pdVar27 != pdVar26; pdVar27 = pdVar27 + 0x37) {
          FUN_1073c1490(param_3,pdVar25 + 1);
          param_2 = pdVar27;
          func_0x00010729cbf8();
        }
      }
      param_1 = &pdStack_718;
      FUN_10748a514();
    }
  }
  iVar23 = (int)ppuVar24;
  func_0x00010748f188(uStack_b0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010729d51c(&puStack_6a0);
    ppdVar22 = &pdStack_718;
    FUN_10748a514();
    func_0x00010748f298();
    uVar45 = 0;
    uVar48 = 0;
    uVar51 = 0;
    uVar54 = 0;
    uVar56 = 0;
    uVar58 = 0;
    uVar60 = 0xf0;
    uVar62 = 0x3f;
    _ldexp(*(undefined1 *)((long)ppdVar22 + 4));
    dVar68 = (double)NEON_ucvtf((ulong)*(uint *)(ppdVar22 + 1));
    lVar41 = (long)(((*param_2 *
                      (double)CONCAT17(uVar62,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(uVar56,
                                                  CONCAT13(uVar54,CONCAT12(uVar51,CONCAT11(uVar48,
                                                  uVar45))))))) - dVar68) -
                    (double)CONCAT17(uVar62,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(uVar56,CONCAT13
                                                  (uVar54,CONCAT12(uVar51,CONCAT11(uVar48,uVar45))))
                                                  ))) * (double)(int)*(short *)ppdVar22) *
                   (double)iVar23);
    if (lVar41 < -0x7fff) {
      lVar41 = -0x8000;
    }
    if (0x7ffe < lVar41) {
      lVar41 = 0x7fff;
    }
    dVar68 = (double)NEON_ucvtf((ulong)*(uint *)((long)ppdVar22 + 0xc));
    lVar34 = (long)(((double)CONCAT17(uVar62,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(uVar56,
                                                  CONCAT13(uVar54,CONCAT12(uVar51,CONCAT11(uVar48,
                                                  uVar45))))))) * param_2[1] - dVar68) *
                   (double)iVar23);
    if (lVar34 < -0x7fff) {
      lVar34 = -0x8000;
    }
    if (0x7ffe < lVar34) {
      lVar34 = 0x7fff;
    }
    return (double **)(ulong)((uint)lVar41 & 0xffff | (int)lVar34 << 0x10);
  }
  return param_1;
}



/* Entry: 10748a3dc; end: 10748a477;  */

uint FUN_10748a3dc(short *param_1,double *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = 1.0;
  _ldexp((char)param_1[2]);
  dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 4));
  lVar1 = (long)(((*param_2 * dVar3 - dVar4) - dVar3 * (double)(int)*param_1) * (double)param_3);
  if (lVar1 < -0x7fff) {
    lVar1 = -0x8000;
  }
  if (0x7ffe < lVar1) {
    lVar1 = 0x7fff;
  }
  dVar4 = (double)NEON_ucvtf((ulong)*(uint *)(param_1 + 6));
  lVar2 = (long)((dVar3 * param_2[1] - dVar4) * (double)param_3);
  if (lVar2 < -0x7fff) {
    lVar2 = -0x8000;
  }
  if (0x7ffe < lVar2) {
    lVar2 = 0x7fff;
  }
  return (uint)lVar1 & 0xffff | (int)lVar2 << 0x10;
}



/* Entry: 10748a478; end: 10748a4bf;  */

double FUN_10748a478(double param_1,undefined8 param_2)

{
  _exp2();
  func_0x000107246504(param_2);
  return param_1 * 0.001953125;
}



/* Entry: 10748a4c0; end: 10748a4f3;  */

long FUN_10748a4c0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined1 auStack_90 [16];
  
  func_0x00010748f2a8();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x000104c2fe38(*param_1);
  puVar5 = param_2;
  func_0x00010748f6a4();
  func_0x00010748f2f0();
  lVar7 = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = *param_2;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar3 = (byte)puVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      FUN_1073c6390(auStack_90,uVar1 + uVar10 * 0x50);
      if (iVar4 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 10748a4f4; end: 10748a513;  */

void FUN_10748a4f4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10748efe0(&uStack_18);
  return;
}



/* Entry: 10748a514; end: 10748a55b;  */

long * FUN_10748a514(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1b8;
      func_0x00010729abec();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10748a55c; end: 10748a67b;  */

float * FUN_10748a55c(long param_1,long param_2)

{
  undefined1 uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 extraout_x8;
  long lVar4;
  float fVar5;
  float in_s3;
  float fVar6;
  float afStack_a0 [18];
  undefined8 uStack_58;
  
  pfVar3 = afStack_a0;
  func_0x00010748f1bc();
  lVar4 = *(long *)(param_2 + 8);
  uStack_58 = extraout_x8;
  if (*(int *)(lVar4 + 0xa0) == 0) {
    fVar6 = *(float *)(lVar4 + 0x6c);
  }
  else {
    fVar6 = in_s3;
    func_0x00010748f8bc();
    func_0x00010748f468(lVar4 + 0x60);
    in_s3 = fVar6;
    func_0x00010748f61c();
  }
  if (*(int *)(lVar4 + 0x200) == 0) {
    in_s3 = *(float *)(lVar4 + 0x1cc);
  }
  else {
    func_0x00010748f8bc();
    func_0x00010748f468(lVar4 + 0x1c0);
    func_0x00010748f61c();
  }
  pfVar2 = (float *)(lVar4 + 0x130);
  if (*(int *)(lVar4 + 0x160) == 0) {
    fVar5 = *pfVar2;
  }
  else {
    func_0x00010748f8bc();
    fVar5 = 1.0;
    func_0x00010727f6f4();
    func_0x00010748f61c();
  }
  if (fVar6 <= in_s3) {
    fVar6 = in_s3;
  }
  uVar1 = fVar5 == 0.0;
  if ((fVar5 <= 0.0) || (fVar6 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    afStack_a0[0] = 0.0;
    afStack_a0[1] = 0.0;
    afStack_a0[2] = 0.0;
    afStack_a0[3] = 0.0;
    afStack_a0[4] = 0.0;
    afStack_a0[5] = 0.0;
    func_0x00010748f730();
    FUN_10748f12c();
    func_0x0001000e30f4(afStack_a0);
    pfVar2 = pfVar3;
  }
  func_0x00010748f188(uStack_58);
  if ((bool)uVar1) {
    return pfVar2;
  }
  ___stack_chk_fail();
  func_0x00010748f61c();
  func_0x00010748f298();
  return (float *)0x0;
}



/* Entry: 10748a67c; end: 10748a68b;  */

undefined8 FUN_10748a67c(void)

{
  return 0;
}



/* Entry: 10748a68c; end: 10748a823;  */

void FUN_10748a68c(long param_1)

{
  func_0x00010748ff2c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10748a824; end: 10748a843;  */

void FUN_10748a824(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10748a844();
  }
  return;
}



/* Entry: 10748a844; end: 10748a88f;  */

void FUN_10748a844(long param_1)

{
  func_0x00010748f8ec();
  if (param_1 != 0) {
    func_0x00010748a800();
    __ZdlPv();
  }
  return;
}



/* Entry: 10748a890; end: 10748a8d3;  */

void FUN_10748a890(long param_1)

{
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    func_0x00010748f4e4((&PTR_FUN_1109b3d88)[*(uint *)(param_1 + 0x50)]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 10748a8d4; end: 10748a8df;  */

void FUN_10748a8d4(void)

{
  return;
}



/* Entry: 10748a8e0; end: 10748a8ff;  */

void FUN_10748a8e0(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10748a900();
  }
  return;
}



/* Entry: 10748a900; end: 10748a94b;  */

void FUN_10748a900(long param_1)

{
  func_0x00010748f8ec();
  if (param_1 != 0) {
    func_0x00010748a86c();
    __ZdlPv();
  }
  return;
}



/* Entry: 10748a94c; end: 10748a98f;  */

void FUN_10748a94c(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x00010748f4e4((&PTR_FUN_1109b3da0)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10748a990; end: 10748a99b;  */

void FUN_10748a990(void)

{
  return;
}



/* Entry: 10748a99c; end: 10748a9bb;  */

void FUN_10748a99c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10748a9bc();
  }
  return;
}



/* Entry: 10748a9bc; end: 10748aa07;  */

void FUN_10748a9bc(long param_1)

{
  func_0x00010748f8ec();
  if (param_1 != 0) {
    func_0x00010748a928();
    __ZdlPv();
  }
  return;
}



/* Entry: 10748aa08; end: 10748aa27;  */

void FUN_10748aa08(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10748aa28();
  }
  return;
}



/* Entry: 10748aa28; end: 10748aa4b;  */

undefined8 FUN_10748aa28(undefined8 param_1)

{
  FUN_10748aa4c(param_1,0);
  return param_1;
}



/* Entry: 10748aa4c; end: 10748aa63;  */

void FUN_10748aa4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010748a9e4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10748aa64; end: 10748aa7f;  */

void FUN_10748aa64(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010748a9e4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10748aa80; end: 10748aaa3;  */

void FUN_10748aa80(void)

{
  long unaff_x19;
  
  func_0x00010748f880();
  FUN_10748aaa4();
  if (*(char *)(unaff_x19 + 8) == '\x01') {
    FUN_10748ab14();
  }
  return;
}



/* Entry: 10748aaa4; end: 10748aae7;  */

void FUN_10748aaa4(long param_1)

{
  if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
    func_0x00010748f4e4((&PTR_FUN_1109b3db8)[*(uint *)(param_1 + 0x30)]);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10748aae8; end: 10748aaf3;  */

void FUN_10748aae8(void)

{
  return;
}



/* Entry: 10748aaf4; end: 10748ab13;  */

void FUN_10748aaf4(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10748ab14();
  }
  return;
}



/* Entry: 10748ab14; end: 10748ab37;  */

undefined8 FUN_10748ab14(undefined8 param_1)

{
  FUN_10748ab38(param_1,0);
  return param_1;
}



/* Entry: 10748ab38; end: 10748ab4f;  */

void FUN_10748ab38(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10748aa80(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10748ab50; end: 10748ab6b;  */

void FUN_10748ab50(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10748aa80(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10748ab6c; end: 10748ac73;  */

undefined8 FUN_10748ab6c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010748ab98(&uStack_28);
  return param_1;
}



/* Entry: 10748ac74; end: 10748ac97;  */

undefined8 FUN_10748ac74(undefined8 param_1)

{
  FUN_10748ac98();
  return param_1;
}



/* Entry: 10748ac98; end: 10748accb;  */

void FUN_10748ac98(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_10748aa28();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_10748ad08();
  func_0x00010748fe8c();
  return;
}



/* Entry: 10748accc; end: 10748ad07;  */

void FUN_10748accc(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10748aa28();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10748ad08; end: 10748ad33;  */

undefined8 FUN_10748ad08(undefined8 param_1,undefined8 *param_2)

{
  FUN_10748ad34(param_1,*param_2);
  return param_1;
}



/* Entry: 10748ad34; end: 10748ad7f;  */

void FUN_10748ad34(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010748f88c();
  func_0x00010748ad58();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10748ad80; end: 10748ada3;  */

void FUN_10748ad80(void)

{
  func_0x00010748f1f0();
  FUN_10748ada4();
  return;
}



/* Entry: 10748ada4; end: 10748adb7;  */

void FUN_10748ada4(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_10748ad08();
    func_0x00010748fe8c();
    return;
  }
  return;
}



/* Entry: 10748adb8; end: 10748addb;  */

undefined8 FUN_10748adb8(undefined8 param_1)

{
  FUN_10748addc();
  return param_1;
}



/* Entry: 10748addc; end: 10748ae0f;  */

void FUN_10748addc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_10748ab14();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_10748ae4c();
  func_0x00010748fe8c();
  return;
}



/* Entry: 10748ae10; end: 10748ae4b;  */

void FUN_10748ae10(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10748ab14();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 10748ae4c; end: 10748ae77;  */

undefined8 FUN_10748ae4c(undefined8 param_1,undefined8 *param_2)

{
  FUN_10748ae78(param_1,*param_2);
  return param_1;
}



/* Entry: 10748ae78; end: 10748aec3;  */

void FUN_10748ae78(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010748f88c();
  func_0x00010748ae9c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10748aec4; end: 10748aee7;  */

void FUN_10748aec4(void)

{
  func_0x00010748f1f0();
  FUN_10748aee8();
  return;
}



/* Entry: 10748aee8; end: 10748aefb;  */

void FUN_10748aee8(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_10748ae4c();
    func_0x00010748fe8c();
    return;
  }
  return;
}



/* Entry: 10748aefc; end: 10748af23;  */

void FUN_10748aefc(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010748f2c4();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10748af24();
  return;
}



/* Entry: 10748af24; end: 10748af63;  */

void FUN_10748af24(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010748f2f0();
  FUN_10748aaa4();
  func_0x00010748fda8();
  if (!(bool)in_ZR) {
    func_0x00010748f1cc(&PTR_FUN_1109b3dd0);
    *(undefined4 *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 10748af64; end: 10748af77;  */

void FUN_10748af64(void)

{
  return;
}



/* Entry: 10748af78; end: 10748af97;  */

void FUN_10748af78(long param_1)

{
  long unaff_x19;
  
  func_0x00010748fb80();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10748af98; end: 10748afbb;  */

undefined8 FUN_10748af98(undefined8 param_1)

{
  FUN_10748afbc();
  return param_1;
}



/* Entry: 10748afbc; end: 10748b00f;  */

void FUN_10748afbc(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x00010748f4e4((&PTR_FUN_1109b3db8)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x00010748f4f0();
  }
  return;
}



/* Entry: 10748b010; end: 10748b023;  */

void FUN_10748b010(long *param_1)

{
  if (*(int *)(*param_1 + 0x30) != 0) {
    func_0x00010748f668();
    FUN_10748b04c();
  }
  return;
}



/* Entry: 10748b024; end: 10748b04b;  */

void FUN_10748b024(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010748f668();
    FUN_10748b04c();
  }
  return;
}



/* Entry: 10748b04c; end: 10748b06f;  */

void FUN_10748b04c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10748aaa4(lVar1);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 10748b070; end: 10748b077;  */

void FUN_10748b070(long *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(*param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010748f668();
  FUN_10748b0ac();
  return;
}



/* Entry: 10748b078; end: 10748b0ab;  */

void FUN_10748b078(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010748f668();
  FUN_10748b0ac();
  return;
}



/* Entry: 10748b0ac; end: 10748b0b7;  */

void FUN_10748b0ac(undefined8 *param_1)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010748f2a8(*param_1,param_1[1]);
  FUN_10748aaa4();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 10748b0b8; end: 10748b0e7;  */

void FUN_10748b0b8(void)

{
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  
  func_0x00010748f2a8();
  FUN_10748aaa4();
  *unaff_x20 = *unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Entry: 10748b0e8; end: 10748b0ef;  */

void FUN_10748b0e8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x00010748f2a8(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x00010748f668();
  FUN_10748b14c();
  return;
}



/* Entry: 10748b0f0; end: 10748b123;  */

void FUN_10748b0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x00010748f2a8(param_2,param_3);
    func_0x00010727e15c();
    *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
    return;
  }
  func_0x00010748f668();
  FUN_10748b14c();
  return;
}



/* Entry: 10748b124; end: 10748b14b;  */

void FUN_10748b124(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8();
  func_0x00010727e15c();
  *(undefined2 *)(unaff_x20 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10748b14c; end: 10748b157;  */

void FUN_10748b14c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010748f2a8(*param_1,param_1[1]);
  FUN_10748aaa4();
  func_0x00010748f6a4();
  FUN_10748af78();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 10748b158; end: 10748b183;  */

void FUN_10748b158(void)

{
  long unaff_x20;
  
  func_0x00010748f2a8();
  FUN_10748aaa4();
  func_0x00010748f6a4();
  FUN_10748af78();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 10748b184; end: 10748b1cf;  */

void FUN_10748b184(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x19;
  
  func_0x00010748f654();
  if ((bool)in_ZR) {
    if (extraout_w8 != 0) {
      func_0x00010748f5f4();
    }
  }
  else if (extraout_w8 == 0) {
    FUN_10748b1d0();
  }
  else {
    FUN_10748a844();
    *(undefined1 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10748b1d0; end: 10748b1f7;  */

void FUN_10748b1d0(void)

{
  long unaff_x19;
  
  func_0x00010748ff20();
  FUN_10748b1f8();
  *(undefined1 *)(unaff_x19 + 8) = 1;
  return;
}



/* Entry: 10748b1f8; end: 10748b223;  */

void FUN_10748b1f8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x00010748f2a8();
  uVar1 = 0x68;
  __Znwm();
  FUN_10748b224();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10748b224; end: 10748b263;  */

void FUN_10748b224(undefined8 param_1,long param_2)

{
  func_0x00010748f1f0();
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x00010748ff14();
    FUN_10748b1d0();
  }
  func_0x00010748f608();
  FUN_107343484();
  return;
}



/* Entry: 10748b264; end: 10748b2af;  */

void FUN_10748b264(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x19;
  
  func_0x00010748f654();
  if ((bool)in_ZR) {
    if (extraout_w8 != 0) {
      func_0x00010748f5f4();
    }
  }
  else if (extraout_w8 == 0) {
    FUN_10748b2b0();
  }
  else {
    FUN_10748a9bc();
    *(undefined1 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10748b2b0; end: 10748b2d7;  */

void FUN_10748b2b0(void)

{
  long unaff_x19;
  
  func_0x00010748ff20();
  FUN_10748b2d8();
  *(undefined1 *)(unaff_x19 + 8) = 1;
  return;
}



/* Entry: 10748b2d8; end: 10748b303;  */

void FUN_10748b2d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x00010748f2a8();
  uVar1 = 0x58;
  __Znwm();
  FUN_10748b304();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10748b304; end: 10748b343;  */

void FUN_10748b304(undefined8 param_1,long param_2)

{
  func_0x00010748f1f0();
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x00010748ff14();
    FUN_10748b2b0();
  }
  func_0x00010748f608();
  FUN_10748b344();
  return;
}



/* Entry: 10748b344; end: 10748b36b;  */

void FUN_10748b344(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010748f2c4();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10748b36c();
  return;
}



/* Entry: 10748b36c; end: 10748b3ab;  */

void FUN_10748b36c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010748f2f0();
  FUN_10748a94c();
  func_0x00010748fda8();
  if (!(bool)in_ZR) {
    func_0x00010748f1cc(&PTR_FUN_1109b3e00);
    *(undefined4 *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 10748b3ac; end: 10748b3bf;  */

void FUN_10748b3ac(void)

{
  return;
}



/* Entry: 10748b3c0; end: 10748b3db;  */

void FUN_10748b3c0(void)

{
  func_0x00010748fb80();
  func_0x00010748fee8();
  return;
}



/* Entry: 10748b3dc; end: 10748b3ff;  */

undefined8 FUN_10748b3dc(undefined8 param_1)

{
  FUN_10748b400();
  return param_1;
}



/* Entry: 10748b400; end: 10748b453;  */

void FUN_10748b400(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x00010748f4e4((&PTR_FUN_1109b3da0)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x00010748f4f0();
  }
  return;
}



/* Entry: 10748b454; end: 10748b467;  */

void FUN_10748b454(long *param_1)

{
  if (*(int *)(*param_1 + 0x30) != 0) {
    func_0x00010748f668();
    FUN_10748b490();
  }
  return;
}



/* Entry: 10748b468; end: 10748b48f;  */

void FUN_10748b468(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x00010748f668();
    FUN_10748b490();
  }
  return;
}



/* Entry: 10748b490; end: 10748b4b3;  */

void FUN_10748b490(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10748a94c(lVar1);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 10748b4b4; end: 10748b4bb;  */

void FUN_10748b4b4(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(*param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010748f668();
  FUN_10748b4f0();
  return;
}



/* Entry: 10748b4bc; end: 10748b4ef;  */

void FUN_10748b4bc(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x00010748f668();
  FUN_10748b4f0();
  return;
}



/* Entry: 10748b4f0; end: 10748b4fb;  */

void FUN_10748b4f0(undefined8 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x00010748f2a8(*param_1,param_1[1]);
  FUN_10748a94c();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 1;
  return;
}



/* Entry: 10748b4fc; end: 10748b52b;  */

void FUN_10748b4fc(void)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x00010748f2a8();
  FUN_10748a94c();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 1;
  return;
}



/* Entry: 10748b52c; end: 10748b533;  */

void FUN_10748b52c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x00010748f2a8(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  func_0x00010748f668();
  FUN_10748b598();
  return;
}


